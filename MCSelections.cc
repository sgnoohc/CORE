#include "MCSelections.h"

using namespace tas;

bool isFromW(int id, int idx){
  int mc_id         = abs(id) == 11          ? els_mc_id().at(idx)         : mus_mc_id().at(idx);
  int mc_motherid   = abs(id) == 11          ? els_mc_motherid().at(idx)   : mus_mc_motherid().at(idx);
  int mc3_motheridx = abs(id) == 11          ? els_mc3_motheridx().at(idx) : mus_mc3_motheridx().at(idx);
  int mc3_id        = abs(id)==11            ? els_mc3_id().at(idx)        : mus_mc3_id().at(idx);
  int mc3_motherid  = abs(id)==11            ? els_mc3_motherid().at(idx)  : mus_mc3_motherid().at(idx);
  int mc_grandmaid  = mc3_motheridx == -9999 ? -9999                       : genps_id_mother().at(mc3_motheridx);
 
  //For Leptons
  if ((abs(mc_id)==11 || abs(mc_id)==13)){
    if (abs(mc_motherid)==24) return true;
    if (abs(mc_motherid)==15 && abs(mc_grandmaid)==24) return true;
    return false;
  }

  //For Photons
  if (abs(mc_id)==22){
    if (abs(mc_motherid)!=abs(id)) return false;
    if (abs(mc3_id)!=abs(id)) return false;
    if (abs(mc3_motherid)!=24) return false;
    return true;
  }

  //everything else
  return false;
}

bool isFromZ(int id, int idx){
  int mc_id         = abs(id) == 11          ? els_mc_id().at(idx)         : mus_mc_id().at(idx);
  int mc_motherid   = abs(id) == 11          ? els_mc_motherid().at(idx)   : mus_mc_motherid().at(idx);
  int mc3_motheridx = abs(id) == 11          ? els_mc3_motheridx().at(idx) : mus_mc3_motheridx().at(idx);
  int mc3_id        = abs(id) == 11          ? els_mc3_id().at(idx)        : mus_mc3_id().at(idx);
  int mc3_motherid  = abs(id) == 11          ? els_mc3_motherid().at(idx)  : mus_mc3_motherid().at(idx);
  int mc_grandmaid  = mc3_motheridx == -9999 ? -9999                       : genps_id_mother().at(mc3_motheridx);

  //For Leptons
  if ((abs(mc_id)==11 || abs(mc_id)==13)){
    if (abs(mc_motherid)==23) return true;
    if (abs(mc_motherid)==15 && abs(mc_grandmaid)==23) return true;
    return false;
  }

  //For Photons
  if (abs(mc_id)==22){
    if (abs(mc_motherid)!=abs(id)) return false;
    if (abs(mc3_id)!=abs(id)) return false;
    if (abs(mc3_motherid)!=23) return false;
    return true;
  }

  //For everything else
  return false;
}

bool isFromB(int id, int idx){
  int mc_id       = abs(id) == 11 ? els_mc_id().at(idx)       : mus_mc_id().at(idx);
  int mc_motherid = abs(id) == 11 ? els_mc_motherid().at(idx) : mus_mc_motherid().at(idx);
  return (abs(mc_id)==11 || abs(mc_id)==13) && idIsBeauty(mc_motherid);
}

bool isFromC(int id, int idx){
  int mc_id       = abs(id) == 11 ? els_mc_id().at(idx)       : mus_mc_id().at(idx);
  int mc_motherid = abs(id) == 11 ? els_mc_motherid().at(idx) : mus_mc_motherid().at(idx);
  return (abs(mc_id)==11 || abs(mc_id)==13) && idIsCharm(mc_motherid);
}

bool isFromLight(int id, int idx){
  int mc_id       = abs(id) == 11 ? els_mc_id().at(idx)       : mus_mc_id().at(idx);
  int mc_motherid = abs(id) == 11 ? els_mc_motherid().at(idx) : mus_mc_motherid().at(idx);
  if (abs(mc_id) != 11 && abs(mc_id) != 13) return false;
  if (abs(mc_motherid)>200 && abs(mc_motherid)<400) return true; 
  if (abs(mc_motherid)>0 && abs(mc_motherid)<4) return true;
  return false;
}

bool isFromLightFake(int id, int idx){
  int mc_id       = abs(id) == 11 ? els_mc_id().at(idx)       : mus_mc_id().at(idx);
  int mc_motherid = abs(id) == 11 ? els_mc_motherid().at(idx) : mus_mc_motherid().at(idx);

  //True if light hadron
  if (abs(mc_id)>200 && abs(mc_id)<400) return true;

  //True if non-quark whose mother is light hadron
  if (abs(mc_id) == 11) return false;
  if (abs(mc_id) == 13) return false;
  if (abs(mc_motherid)>200 && abs(mc_motherid)<400) return true;
  if (abs(mc_motherid)>0 && abs(mc_motherid)<4) return true;
 
  return false;
}

bool idIsCharm(int id) {
  id = abs(id);
  if (id == 4      ) return true;
  if (id == 411    ) return true;
  if (id == 421    ) return true;
  if (id == 10411  ) return true;
  if (id == 10421  ) return true;
  if (id == 413    ) return true;
  if (id == 423    ) return true;
  if (id == 10413  ) return true;
  if (id == 10423  ) return true;
  if (id == 20413  ) return true;
  if (id == 20423  ) return true;
  if (id == 415    ) return true;
  if (id == 425    ) return true;
  if (id == 431    ) return true;
  if (id == 10431  ) return true;
  if (id == 433    ) return true;
  if (id == 10433  ) return true;
  if (id == 20433  ) return true;
  if (id == 435    ) return true;
  if (id == 441    ) return true;
  if (id == 10441  ) return true;
  if (id == 100441 ) return true;
  if (id == 443    ) return true;
  if (id == 10443  ) return true;
  if (id == 20443  ) return true;
  if (id == 100443 ) return true;
  if (id == 30443  ) return true;
  if (id == 9000443) return true;
  if (id == 9010443) return true;
  if (id == 9020443) return true;
  if (id == 445    ) return true;
  if (id == 9000445) return true;
  if (id == 4122   ) return true;
  if (id == 4222   ) return true;
  if (id == 4212   ) return true;
  if (id == 4112   ) return true;
  if (id == 4224   ) return true;
  if (id == 4214   ) return true;
  if (id == 4114   ) return true;
  if (id == 4232   ) return true;
  if (id == 4132   ) return true;
  if (id == 4322   ) return true;
  if (id == 4312   ) return true;
  if (id == 4324   ) return true;
  if (id == 4314   ) return true;
  if (id == 4332   ) return true;
  if (id == 4334   ) return true;
  if (id == 4412   ) return true;
  if (id == 4422   ) return true;
  if (id == 4414   ) return true;
  if (id == 4424   ) return true;
  if (id == 4432   ) return true;
  if (id == 4434   ) return true;
  if (id == 4444   ) return true;
  return false;
}

bool idIsBeauty(int id) {
  id = abs(id);
  if (id == 5     ) return true;
  if (id == 511   ) return true;
  if (id == 521   ) return true;
  if (id == 10511 ) return true;
  if (id == 10521 ) return true;
  if (id == 513   ) return true;
  if (id == 523   ) return true;
  if (id == 10513 ) return true;
  if (id == 10523 ) return true;
  if (id == 20513 ) return true;
  if (id == 20523 ) return true;
  if (id == 515   ) return true;
  if (id == 525   ) return true;
  if (id == 531   ) return true;
  if (id == 10531 ) return true;
  if (id == 533   ) return true;
  if (id == 10533 ) return true;
  if (id == 20533 ) return true;
  if (id == 535   ) return true;
  if (id == 541   ) return true;
  if (id == 10541 ) return true;
  if (id == 543   ) return true;
  if (id == 10543 ) return true;
  if (id == 20543 ) return true;
  if (id == 545   ) return true;
  if (id == 551   ) return true;
  if (id == 10551 ) return true;
  if (id == 100551) return true;
  if (id == 110551) return true;
  if (id == 200551) return true;
  if (id == 210551) return true;
  if (id == 553   ) return true;
  if (id == 10553 ) return true;
  if (id == 20553 ) return true;
  if (id == 30553 ) return true;
  if (id == 100553) return true;
  if (id == 110553) return true;
  if (id == 120553) return true;
  if (id == 130553) return true;
  if (id == 200553) return true;
  if (id == 210553) return true;
  if (id == 220553) return true;
  if (id == 300553) return true;
  if (id == 900055) return true;
  if (id == 901055) return true;
  if (id == 555   ) return true;
  if (id == 10555 ) return true;
  if (id == 20555 ) return true;
  if (id == 100555) return true;
  if (id == 110555) return true;
  if (id == 120555) return true;
  if (id == 200555) return true;
  if (id == 557   ) return true;
  if (id == 100557) return true;
  if (id == 5122  ) return true; 
  if (id == 5112  ) return true;
  if (id == 5212  ) return true;
  if (id == 5222  ) return true;
  if (id == 5114  ) return true;
  if (id == 5214  ) return true;
  if (id == 5224  ) return true;
  if (id == 5132  ) return true;
  if (id == 5232  ) return true;
  if (id == 5312  ) return true;
  if (id == 5322  ) return true;
  if (id == 5314  ) return true;
  if (id == 5324  ) return true;
  if (id == 5332  ) return true;
  if (id == 5334  ) return true;
  if (id == 5142  ) return true;
  if (id == 5242  ) return true;
  if (id == 5412  ) return true;
  if (id == 5422  ) return true;
  if (id == 5414  ) return true;
  if (id == 5424  ) return true;
  if (id == 5342  ) return true;
  if (id == 5432  ) return true;
  if (id == 5434  ) return true;
  if (id == 5442  ) return true;
  if (id == 5444  ) return true;
  if (id == 5512  ) return true;
  if (id == 5522  ) return true;
  if (id == 5514  ) return true;
  if (id == 5524  ) return true;
  if (id == 5532  ) return true;
  if (id == 5534  ) return true;
  if (id == 5542  ) return true;
  if (id == 5544  ) return true;
  if (id == 5554  ) return true;
  return false;
}
