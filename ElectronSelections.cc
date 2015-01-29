#include "ElectronSelections.h"
#include "Math/LorentzVector.h"
#include "Math/VectorUtil.h"

//Development Notes
  //Original Author: Alex (UCSB), who stole functions from Indara, Jason, Giuseppe
  //POG Electron IDs are defined in: 
  //https://twiki.cern.ch/twiki/bin/viewauth/CMS/EgammaCutBasedIdentification#Electron_ID_Working_Points

using namespace tas;

bool isVetoElectron(unsigned int elIdx, analysis_t analysis){

  //Barrel Cuts
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false; 
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.8) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
    if (els_hOverE().at(elIdx) >= 0.15) return false; 
    if (analysis == POG || analysis == HAD || analysis == STOP){
      if (fabs(els_dxyPV().at(elIdx)) >= 0.04) return false;
      if (fabs(els_dzPV().at(elIdx)) >= 0.2) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.15) return false; 
    }
    else if (analysis == SS){
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 2) return false;
    }
    return true;
  }
  
  //Endcap Cuts
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.01) return false; 
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.7) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
    if (analysis == POG || analysis == HAD || analysis == STOP){
      if (fabs(els_dxyPV().at(elIdx)) >= 0.04) return false;
      if (fabs(els_dzPV().at(elIdx)) >= 0.2) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.15) return false; 
    }
    else if (analysis == SS){
      if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.13) return false;
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 2) return false;
    }
    return true;
  } 

  //Not Barrel nor Endcap
  else return false;
}

bool isLooseElectron(unsigned int elIdx, analysis_t analysis){
 
  //Barrel Selections
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false;
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (els_hOverE().at(elIdx) >= 0.12) return false;
    if (analysis == POG || analysis == STOP){
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
      if (fabs(els_dPhiIn().at(elIdx)) >= 0.15) return false;
      if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false;
      if (fabs(els_dzPV().at(elIdx)) >= 0.2) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.15 ) return false;
      if (els_exp_innerlayers().at(elIdx) > 1) return false;
    }
    else if (analysis == HAD){
      if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
      if (fabs(els_dPhiIn().at(elIdx)) >= 0.15) return false;
    }
    else if (analysis == SS){
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (fabs(els_dEtaIn().at(elIdx)) >= 0.004) return false;
      if (fabs(els_dPhiIn().at(elIdx)) >= 0.06) return false; 
      if (els_exp_innerlayers().at(elIdx) > 0) return false;
    }
    return true;
  } 

  //Endcap Selections
  else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false;
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (els_hOverE().at(elIdx) >= 0.1) return false;
    if (analysis == POG || analysis == STOP){
      if (els_conv_vtx_flag().at(elIdx) ) return false;
      if (fabs(els_dEtaIn().at(elIdx)) >= 0.009) return false;
      if (fabs(els_dPhiIn().at(elIdx)) >= 0.10) return false;
      if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false; 
      if (fabs(els_dzPV().at(elIdx)) >= 0.2) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.15 ) return false;
      if (els_exp_innerlayers().at(elIdx) > 1) return false;
    }
    else if (analysis == HAD){
      if (fabs(els_dEtaIn().at(elIdx)) >= 0.009) return false;
      if (fabs(els_dPhiIn().at(elIdx)) >= 0.10) return false;
    }
    else if (analysis == SS){
      if (els_conv_vtx_flag().at(elIdx) ) return false;
      if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
      if (fabs(els_dPhiIn().at(elIdx)) >= 0.03) return false; 
      if (els_exp_innerlayers().at(elIdx) > 0) return false;
    }
    return true;
  } 
  
  //Not Barrel nor Endcap
  else return false;
}

bool isMediumElectron(unsigned int elIdx, analysis_t analysis){

  //Barrel Cuts
  if(fabs(els_etaSC().at(elIdx)) <= 1.479){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.004) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.06) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
    if (els_hOverE().at(elIdx) >= 0.12) return false; 
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (analysis == SS){
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 1) return false;
    }
    if (analysis == POG || analysis == STOP){
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 1) return false;
      if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false; 
      if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.15) return false; 
    }
    return true;
  } 

  //Endcap Cuts
  else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.03) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
    if (els_hOverE().at(elIdx) >= 0.1) return false; 
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (analysis == SS){
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 0) return false;
    }
    if (analysis == POG || analysis == STOP){
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 0) return false;
      if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false; 
      if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.15) return false; 
    }
    return true;
  } 

  //Not Barrel nor Endcap
  else return false;
}

bool isTightElectron(unsigned int elIdx, analysis_t analysis){

  //Barrel Selections
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.004) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.03) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
    if (els_hOverE().at(elIdx) >= 0.12) return false; 
    if (fabs((1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (analysis == POG || analysis == STOP){
      if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false; 
      if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.1) return false; 
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 0) return false;
    }
    return true;
  } 

  //Endcap Selections
  else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.005) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.02) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
    if (els_hOverE().at(elIdx) >= 0.1) return false; 
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (analysis == POG || analysis == STOP){
      if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false;
      if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.1) return false; 
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 0) return false;
    }
    return true;
  } 

  //Neither Barrel nor Endcap
  else return false;
}

float eleRelIso03(unsigned int elIdx, analysis_t analysis){
  if (analysis == HAD) return eleRelIso03DB(elIdx);
  if (analysis == STOP) return eleRelIso03DB(elIdx);
  if (analysis == SS) return eleRelIso03EA(elIdx);
  else return eleRelIso03EA(elIdx);
}

float eleRelIso03DB(unsigned int elIdx){
  float chiso     = els_pfChargedHadronIso().at(elIdx);
  float nhiso     = els_pfNeutralHadronIso().at(elIdx);
  float emiso     = els_pfPhotonIso().at(elIdx);
  float deltaBeta = els_pfPUIso().at(elIdx);
  float absiso    = chiso + std::max(0.0, nhiso + emiso - 0.5 * deltaBeta);
  return absiso/(els_p4().at(elIdx).pt());
}

float eleRelIso03EA(unsigned int elIdx){
  float chiso = els_pfChargedHadronIso().at(elIdx);
  float nhiso = els_pfNeutralHadronIso().at(elIdx);
  float emiso = els_pfPhotonIso().at(elIdx);
  float ea    = 0;
  if      (fabs(els_p4().at(elIdx).eta())<=0.800) ea = 0.1013;
  else if (fabs(els_p4().at(elIdx).eta())<=1.300) ea = 0.0988;
  else if (fabs(els_p4().at(elIdx).eta())<=2.000) ea = 0.0572;
  else if (fabs(els_p4().at(elIdx).eta())<=2.200) ea = 0.0842;
  else if (fabs(els_p4().at(elIdx).eta())<=2.500) ea = 0.1530;
  float absiso = chiso + std::max(float(0.0), nhiso + emiso - evt_fixgrid_all_rho() * ea);
  return absiso/(els_p4().at(elIdx).pt());
}

int eleTightID(unsigned int elIdx, analysis_t analysis){
  if (isTightElectron(elIdx, analysis))  return 3;
  if (isMediumElectron(elIdx, analysis)) return 2;
  if (isLooseElectron(elIdx, analysis))  return 1;
  if (isVetoElectron(elIdx, analysis))   return 0;
  return -1;
}

//Only used for SS analysis
bool isGoodVetoElectronNoIso(unsigned int elidx){
  if (fabs(els_p4().at(elidx).eta()) > 2.4) return false;
  if (els_p4().at(elidx).pt() < 7.) return false;//fixme
  if (!isVetoElectron(elidx, SS)) return false;
  if (fabs(els_dxyPV().at(elidx)) >= 0.05) return false; //is this wrt the correct PV?
  if (fabs(els_dzPV().at(elidx)) >= 0.1) return false; //is this wrt the correct PV?
  return true;
}

//Only used for SS analysis
bool isGoodVetoElectron(unsigned int elidx){
  if (!isVetoElectron(elidx, SS)) return false;
  if (eleRelIso03(elidx, SS) >= 0.5) return false; 
  return true;
}

//Only used for SS analysis
bool isFakableElectronNoIso(unsigned int elidx){
  if (els_p4().at(elidx).pt() < 10.) return false;//fixme
  if (!isGoodVetoElectronNoIso(elidx)) return false;
  if (!isLooseElectron(elidx, SS)) return false;
  if (threeChargeAgree(elidx) == 0) return false;
  return true;
}

//Only used for SS analysis
bool isFakableElectron(unsigned int elidx){
  if (els_p4().at(elidx).pt()<10) return false;
  if (!isGoodVetoElectron(elidx)) return false;
  if (!isLooseElectron(elidx, SS)) return false;
  if (!threeChargeAgree(elidx)) return false;
  return true;
}

//Only used for SS analysis
bool isGoodElectronNoIso(unsigned int elidx){
  if (!isFakableElectronNoIso(elidx)) return false;
  if (isMediumElectron(elidx, SS) == 0) return false;
  if (fabs(els_ip3d().at(elidx))/els_ip3derr().at(elidx) >= 4) return false;
  return true;
}

//Only used for SS analysis
bool isGoodElectron(unsigned int elidx){
  if (!isGoodElectronNoIso(elidx)) return false;
  if (eleRelIso03(elidx, SS) >= 0.1) return false; 
  return true;
}

//Only used for SS analysis
bool threeChargeAgree(unsigned int elIdx){
  return els_isGsfCtfScPixChargeConsistent().at(elIdx);
}
