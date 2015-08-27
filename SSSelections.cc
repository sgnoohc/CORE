#include "SSSelections.h"

using namespace tas;

//Development Notes
  //Original Author: Alex (UCSB), who stole functions from Indara, Jason, Giuseppe
  //Note: these functions are currently only for the SS analysis!
  //Be careful that IDs, etc. are OK before stealing for other analyses

bool makesExtraGammaStar(int iHyp){

  std::vector<unsigned int> ele_idx;
  std::vector<unsigned int> mu_idx;

  int lt_id           = tas::hyp_lt_id().at(iHyp);
  int ll_id           = tas::hyp_ll_id().at(iHyp);
  unsigned int lt_idx = tas::hyp_lt_index().at(iHyp);
  unsigned int ll_idx = tas::hyp_ll_index().at(iHyp);

  (abs(lt_id) == 11) ? ele_idx.push_back(lt_idx) : mu_idx.push_back(lt_idx);
  (abs(ll_id) == 11) ? ele_idx.push_back(ll_idx) : mu_idx.push_back(ll_idx);

  if (ele_idx.size() + mu_idx.size() != 2) {
    std::cout << "ERROR: don't have 2 leptons in hypothesis!!!  Exiting..." << std::endl;
    return false;
  }
      
  if (ele_idx.size() > 0){
    for (unsigned int eidx = 0; eidx < tas::els_p4().size(); eidx++) {
      bool is_hyp_lep = false;
      for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++){
          if (eidx == ele_idx.at(vidx)) is_hyp_lep = true;
      }
      if (is_hyp_lep) continue;
      if (fabs(tas::els_p4().at(eidx).eta()) > 2.4) continue;
      if (tas::els_p4().at(eidx).pt() < 7.0) continue;
      if (!isGoodVetoElectron(eidx)) continue;

      for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++) {
          if (tas::els_charge().at(eidx) * tas::els_charge().at(ele_idx.at(vidx)) > 0) continue;
          LorentzVector gamma_p4 = tas::els_p4().at(eidx) + tas::els_p4().at(ele_idx.at(vidx));
          float gammacandmass = sqrt(fabs(gamma_p4.mass2()));
          if (gammacandmass < 12.0) return true;
      }
    } 
  }

  if (mu_idx.size() > 0){
    for (unsigned int midx = 0; midx < tas::mus_p4().size(); midx++) {
      bool is_hyp_lep = false;
      for (unsigned int vidx = 0; vidx < mu_idx.size(); vidx++) {
        if (midx == mu_idx.at(vidx)) is_hyp_lep = true; 
      }

      if (is_hyp_lep) continue;
      if (fabs(tas::mus_p4().at(midx).eta()) > 2.4) continue;
      if (tas::mus_p4().at(midx).pt() < 5.0) continue;
      if (!isGoodVetoMuon(midx)) continue;

      for (unsigned int vidx = 0; vidx < mu_idx.size(); vidx++) {
          if (tas::mus_charge().at(midx) * tas::mus_charge().at(mu_idx.at(vidx)) > 0) continue;
          LorentzVector gamma_p4 = tas::mus_p4().at(midx) + tas::mus_p4().at(mu_idx.at(vidx));
          float gammacandmass = sqrt(fabs(gamma_p4.mass2()));
          if (gammacandmass < 12.0) return true;
      }
    }
  }

  return false;
}

Z_result_t makesExtraZ(int iHyp){

  Z_result_t result;
  result.result = false;
  result.id = 0;
  result.idx = 0; 

  std::vector<unsigned int> ele_idx;
  std::vector<unsigned int> mu_idx;

  int lt_id           = tas::hyp_lt_id().at(iHyp);
  int ll_id           = tas::hyp_ll_id().at(iHyp);
  unsigned int lt_idx = tas::hyp_lt_index().at(iHyp);
  unsigned int ll_idx = tas::hyp_ll_index().at(iHyp);

  (abs(lt_id) == 11) ? ele_idx.push_back(lt_idx) : mu_idx.push_back(lt_idx);
  (abs(ll_id) == 11) ? ele_idx.push_back(ll_idx) : mu_idx.push_back(ll_idx);

  if (ele_idx.size() + mu_idx.size() != 2) {
    std::cout << "ERROR: don't have 2 leptons in hypothesis!!!  Exiting" << std::endl;
    return result;
  }
      
  if (ele_idx.size() > 0) {
    for (unsigned int eidx = 0; eidx < tas::els_p4().size(); eidx++) {

      bool is_hyp_lep = false;
      for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++) {
        if (eidx == ele_idx.at(vidx)) is_hyp_lep = true;                
      }
      if (is_hyp_lep) continue;
      if (fabs(tas::els_p4().at(eidx).eta()) > 2.4) continue;
      if (tas::els_p4().at(eidx).pt() < 7) continue;

      if (!isGoodVetoElectron(eidx)) continue;

      for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++) {
        if (tas::els_charge().at(eidx) * tas::els_charge().at(ele_idx.at(vidx)) > 0) continue;
        LorentzVector zp4 = tas::els_p4().at(eidx) + tas::els_p4().at(ele_idx.at(vidx));
        float zcandmass = sqrt(fabs(zp4.mass2()));
        if (fabs(zcandmass-91.) < 15.){
          result.result = true; 
          result.id = -sgn(tas::els_charge().at(eidx))*11;
          result.idx = eidx;  
          return result;
        }
      }
    }
  }

  if (mu_idx.size() > 0) {
    for (unsigned int midx = 0; midx < tas::mus_p4().size(); midx++) {

      bool is_hyp_lep = false;
      for (unsigned int vidx = 0; vidx < mu_idx.size(); vidx++) {
        if (midx == mu_idx.at(vidx)) is_hyp_lep = true;                
      }
      if (is_hyp_lep) continue;
      if (fabs(tas::mus_p4().at(midx).eta()) > 2.4) continue;
      if (tas::mus_p4().at(midx).pt() < 5.) continue;

      if (!isGoodVetoMuon(midx)) continue;

      for (unsigned int vidx = 0; vidx < mu_idx.size(); vidx++) {
        if (tas::mus_charge().at(midx) * tas::mus_charge().at(mu_idx.at(vidx)) > 0) continue;
        LorentzVector zp4 = tas::mus_p4().at(midx) + tas::mus_p4().at(mu_idx.at(vidx));
        float zcandmass = sqrt(fabs(zp4.mass2()));
        if (fabs(zcandmass-91.) < 15.){
          result.result = true; 
          result.id = -sgn(tas::mus_charge().at(midx))*13;
          result.idx = midx;  
          return result;
        }
      }
    }
  }

  return result;
}

std::pair <vector <Jet>, vector <Jet> > SSJetsCalculator(FactorizedJetCorrector* jetCorr){
  vector <Jet> result_jets;
  vector <Jet> result_btags;

  for (unsigned int i = 0; i < tas::pfjets_p4().size(); i++){
    LorentzVector jet = tas::pfjets_p4().at(i);
    
    //Kinematic jet cuts
    if (jet.pt() < 25.) continue;
    if (fabs(jet.eta()) > 2.4) continue;

    //Require loose jet ID
    if (!isLoosePFJet(i)) continue;
    
    //Jet cleaning -- electrons
    bool jetIsLep = false;
    for (unsigned int eidx = 0; eidx < tas::els_p4().size(); eidx++){
      LorentzVector electron = tas::els_p4().at(eidx);
      if (electron.pt() < 10) continue;
      if (!isGoodVetoElectron(eidx)) continue;
      if (ROOT::Math::VectorUtil::DeltaR(jet, electron) > 0.4) continue;
      jetIsLep = true;
    }
    if (jetIsLep == true) continue;
    
    //Jet cleaning -- muons
    for (unsigned int muidx = 0; muidx < tas::mus_p4().size(); muidx++){
      LorentzVector muon = tas::mus_p4().at(muidx);
      if (muon.pt() < 10) continue;
      if (!isGoodVetoMuon(muidx)) continue;
      if (ROOT::Math::VectorUtil::DeltaR(jet, muon) > 0.4) continue;
      jetIsLep = true;
    }
    if (jetIsLep == true) continue;
    
    //Get discriminator
    float disc = tas::pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag().at(i);

    //Jet Corr
    jetCorr->setJetEta(jet.eta()); 
    jetCorr->setJetPt(jet.pt()); 
    jetCorr->setJetA(tas::pfjets_area().at(i)); 
    jetCorr->setRho(tas::evt_fixgrid_all_rho()); 
    float JEC = jetCorr->getCorrection(); 

    //Save jets that make it this far
    if (jet.pt() >= 40.) {
      result_jets.push_back(Jet(i, JEC));
    }

    //Save b-tags that make it this far
    if (disc < 0.814) continue;
    result_btags.push_back(Jet(i, JEC)); 

  }
  std::pair <vector <Jet>, vector <Jet> > result = std::make_pair(result_jets, result_btags);
  return result;
}

bool isLooseIsolatedLepton(int id, int idx){
  if (abs(id) == 11) return eleRelIso03(idx, SS) < 0.5;
  if (abs(id) == 13) return muRelIso03(idx, SS) < 0.5;
  return false;
}
bool isIsolatedLepton(int id, int idx){
  if (abs(id) == 11) return eleRelIso03(idx, SS) < 0.1;
  if (abs(id) == 13) return muRelIso03(idx, SS) < 0.1;
  return false;
}
bool isLooseMiniIsolatedLepton(int id, int idx){
  if (abs(id) == 11) {
    if (getPtRel(id, idx, true)>6.) return elMiniRelIsoCMS3_EA(idx) < 0.5;
    return eleRelIso03(idx, SS) < 0.5;
  }
  if (abs(id) == 13) {
    if (getPtRel(id, idx, true)>6.) return muMiniRelIsoCMS3_EA(idx) < 0.5;
    return muRelIso03(idx, SS) < 0.5;
  }
  return false;
}
bool isMiniIsolatedLepton(int id, int idx){
  if (abs(id) == 11) {
    if (getPtRel(id, idx, true)>6.) return elMiniRelIsoCMS3_EA(idx) < 0.05;
    return eleRelIso03(idx, SS) < 0.1;
  }
  if (abs(id) == 13) {
    if (getPtRel(id, idx, true)>6.) return muMiniRelIsoCMS3_EA(idx) < 0.05;
    return muRelIso03(idx, SS) < 0.1;
  }
  return false;
}

bool isLooseNewMiniIsolatedLepton(int id, int idx){
  if (abs(id) == 11) {
    return elMiniRelIsoCMS3_EA(idx) < 0.4;
  }
  if (abs(id) == 13) {
    return muMiniRelIsoCMS3_EA(idx) < 0.4;
  }
  return false;
}

//level: 0 for default, 1 for L, 2 for T, 
bool isNewMiniIsolatedLepton(int id, int idx, int level){
  float elMiniRelIsoCuts[4] = { 0.075, 0.10 }; 
  float elptratioCuts[4] = {0.725, 0.70 };
  float elptRelCuts[4] = {7.0, 7.0 };
  float muMiniRelIsoCuts[4] = { 0.10, 0.14 }; 
  float muptratioCuts[4] = {0.70, 0.68 };
  float muptRelCuts[4] = {7.0, 6.7 };
  if (abs(id) == 11) {
    return passMultiIso(id, idx, elMiniRelIsoCuts[level], elptratioCuts[level], elptRelCuts[level]);
  }
  if (abs(id) == 13) {
    return passMultiIso(id, idx, muMiniRelIsoCuts[level], muptratioCuts[level], muptRelCuts[level]);
  }
  return false;
}

bool isGoodLepton(int id, int idx, IsolationMethods isoCase){
  if (isoCase == PtRel) return isGoodLeptonIsoOrPtRel(id,idx);
  else if (isoCase == MiniIso) return isGoodLeptonMiniIso(id,idx); 
  else if (isoCase == NewMiniIso) return isGoodLeptonNewMiniIso(id,idx,0); 
  else if (isoCase == MultiIso) return isGoodLeptonNewMiniIso(id,idx,1); 
  else return isGoodLeptonIso(id,idx);
}

bool isGoodLeptonNoIso(int id, int idx){
  if (abs(id) == 11) return isGoodElectronNoIso(idx);
  else if (abs(id) == 13) return isGoodMuonNoIso(idx);
  return false;
}

bool isGoodLeptonIso(int id, int idx){
  if (isGoodLeptonNoIso(id,idx)==0) return false;
  if (isIsolatedLepton(id,idx)==0) return false;
  return true;
}

bool isGoodLeptonMiniIso(int id, int idx){
  if (isGoodLeptonNoIso(id,idx)==0) return false;
  if (isMiniIsolatedLepton(id,idx)==0) return false;
  return true;
}

bool isGoodLeptonNewMiniIso(int id, int idx, int level){
  if (isGoodLeptonNoIso(id,idx)==0) return false;
  if (isNewMiniIsolatedLepton(id,idx,level)==0) return false;
  return true;
}

bool isGoodLeptonIsoOrPtRel(int id, int idx){
  if (isGoodLeptonNoIso(id,idx)==0) return false;
  if (isIsolatedLepton(id,idx)==0 && passPtRel(id,idx,ptRelCut,true)==0) return false;
  return true;
}

bool isInSituFRLepton(int id, int idx, bool expt){
  if (abs(id) == 11){
    if (!expt && !electronID(idx, SS_medium_noip_v3) && !electronID(idx, SS_medium_v3)) return false;
    if (expt && !electronID(idx, SS_medium_looseMVA_noip_v3) && !electronID(idx, SS_medium_v3)) return false;
  }
  if (abs(id) == 13){
    if (!muonID(idx, SS_fo_noiso_noip_v3) && !muonID(idx, SS_fo_noiso_v3)) return false;
  }
  return true;
}

bool isDenominatorLepton(int id, int idx, IsolationMethods isoCase){
  if (isoCase == MultiIso) return isDenominatorLeptonNewMiniIso(id,idx);
  else if (isoCase == PtRel) return isDenominatorLeptonIsoOrPtRel(id,idx);
  else if (isoCase == MiniIso) return isDenominatorLeptonMiniIso(id,idx);
  else if (isoCase == NewMiniIso) return isDenominatorLeptonNewMiniIso(id,idx);
  else return isDenominatorLeptonIso(id,idx);
}

bool isDenominatorLeptonMiniIso(int id, int idx){
  if (isDenominatorLeptonNoIso(id,idx)==0) return false;
  if (isLooseMiniIsolatedLepton(id,idx)==0) return false;
  return true;
}

bool isDenominatorLeptonNoIso(int id, int idx){
  if (abs(id) == 11) return isFakableElectronNoIso(idx);
  else if (abs(id) == 13) return isFakableMuonNoIso(idx);
  else return false;
}

bool isDenominatorLeptonIso(int id, int idx){
  if (isDenominatorLeptonNoIso(id,idx)==0) return false;
  if (isLooseIsolatedLepton(id,idx)==0) return false;
  return true;
}

bool isDenominatorLeptonNewMiniIso(int id, int idx){
  if (isDenominatorLeptonNoIso(id,idx)==0) return false;
  if (isLooseNewMiniIsolatedLepton(id,idx)==0) return false;
  return true;
}

bool isDenominatorLeptonIsoOrPtRel(int id, int idx){
  if (isDenominatorLeptonNoIso(id,idx)==0) return false;
  if (isLooseIsolatedLepton(id,idx)==0 && passPtRel(id,idx,ptRelCutLoose,true)==0) return false;
  return true;
}

bool isVetoLepton(int id, int idx, IsolationMethods isoCase){
  if (isoCase == PtRel) return isVetoLeptonIsoOrPtRel(id,idx);
  else return isVetoLeptonIso(id,idx);
}

bool isVetoLeptonNoIso(int id, int idx){
  if (abs(id) == 11) return isGoodVetoElectronNoIso(idx);
  else if (abs(id) == 13) return isGoodVetoMuonNoIso(idx);
  return false;
}

bool isVetoLeptonIso(int id, int idx){
  if (isVetoLeptonNoIso(id,idx)==0) return false;
  if (isLooseIsolatedLepton(id,idx)==0) return false;
  return true;
}

bool isVetoLeptonIsoOrPtRel(int id, int idx){
  if (isVetoLeptonNoIso(id,idx)==0) return false;
  if (isLooseIsolatedLepton(id,idx)==0 && passPtRel(id,idx,ptRelCut,true)==0) return false;
  return true;
}

bool hypsFromFirstGoodVertex(size_t hypIdx, float dz_cut){

  int lt_idx = hyp_lt_index()[hypIdx];
  int ll_idx = hyp_ll_index()[hypIdx];

  int lt_id = hyp_lt_id()[hypIdx];
  int ll_id = hyp_ll_id()[hypIdx];

  float lt_dz = abs(lt_id) == 11 ? tas::els_dzPV().at(lt_idx) : tas::mus_dzPV().at(lt_idx);
  float ll_dz = abs(ll_id) == 11 ? tas::els_dzPV().at(ll_idx) : tas::mus_dzPV().at(ll_idx);

  if (fabs(lt_dz) < dz_cut && fabs(ll_dz) < dz_cut) return true;    
  return false;
}

anal_type_t analysisCategory(float lep1pt, float lep2pt){
  if      (lep1pt > ptCutHigh && lep2pt > ptCutHigh) return HighHigh;
  else if (lep1pt > ptCutHigh && lep2pt > ptCutLow)  return HighLow;
  else if (lep2pt > ptCutHigh && lep1pt > ptCutLow)  return HighLow;
  else if (lep1pt > ptCutLow  && lep2pt > ptCutLow)  return LowLow;
  return Undefined;
}

int baselineRegion(int njets, int nbtags, float met, float ht, float lep1_pt, float lep2_pt){
  //Kinematic cuts
  if (lep1_pt < 10) return -1;
  if (lep2_pt < 10) return -1;
  if (njets < 2) return -1;
  if (met < 30 && ht < 500) return -1;
 
  //Return baseline region
  if      (nbtags == 0) return 0;
  else if (nbtags == 1) return 1;
  else if (nbtags == 2) return 2;
  else                  return 3;
}

int signalRegion(int njets, int nbtags, float met, float ht, float mt_min, float lep1pt, float lep2pt){
  
  //Calculate lep_pt
  anal_type_t lep_pt = analysisCategory(lep1pt, lep2pt); 

  //Reject events out of kinematic acceptance
  if (met < 50) return -1; 
  if (njets < 2) return -1; 
  if (lep_pt != LowLow && met > 500 && ht < 300) return -1; 

  //High-high
  if (lep_pt == HighHigh){
    if (met > 500) return 31;
    if (ht > 1600) return 32; 
    if (ht < 300){
      if (nbtags == 0 && mt_min < 120 && met < 200 && njets <= 4) return 1; 
      if (nbtags == 0) return 3; 
      if (nbtags == 1 && mt_min < 120 && met < 200 && njets <= 4) return 9; 
      if (nbtags == 1) return 11; 
      if (nbtags == 2 && mt_min < 120 && met < 200 && njets <= 4) return 17; 
      if (nbtags == 2) return 19; 
      if (nbtags >= 3 && mt_min < 120 && met < 200) return 25; 
      if (nbtags >= 3 && mt_min < 120 && met >= 200) return 27; 
      if (nbtags >= 3) return 29;
    }
    if (ht > 300 && ht < 1600){
      if (nbtags == 0){
        if (mt_min < 120 && met < 200 && njets <= 4) return 2; 
        if (mt_min < 120 && met < 200 && njets > 4) return 4; 
        if (mt_min < 120 && met >= 200 && njets <= 4) return 5; 
        if (mt_min < 120 && met >= 200 && njets > 4) return 6; 
        if (mt_min >= 120 && met < 200 && njets <= 4) return 7;
        return 8;
      } 
      if (nbtags == 1){
        if (mt_min < 120 && met < 200 && njets <= 4) return 10; 
        if (mt_min < 120 && met < 200 && njets > 4) return 12; 
        if (mt_min < 120 && met >= 200 && njets <= 4) return 13; 
        if (mt_min < 120 && met >= 200 && njets > 4) return 14; 
        if (mt_min >= 120 && met < 200 && njets <= 4) return 15;
        return 16;
      } 
      if (nbtags == 2){
        if (mt_min < 120 && met < 200 && njets <= 4) return 18; 
        if (mt_min < 120 && met < 200 && njets > 4) return 20; 
        if (mt_min < 120 && met >= 200 && njets <= 4) return 21; 
        if (mt_min < 120 && met >= 200 && njets > 4) return 22; 
        if (mt_min >= 120 && met < 200 && njets <= 4) return 23;
        return 24;
      } 
      if (nbtags >= 3){
        if (mt_min < 120 && met < 200) return 26;
        if (mt_min < 120 && met >= 200) return 28;
        if (mt_min >= 120) return 30;
      }
    }
  }
  
  //High-Low
  if (lep_pt == HighLow){
    if (met > 500) return 25;
    if (ht > 1600) return 26;
    if (ht < 300){ 
      if (nbtags == 0 && met < 200 && njets <= 4) return 1; 
      if (mt_min < 120 && nbtags == 0) return 3;
      if (mt_min < 120 && nbtags == 1 && met < 200 && njets <= 4) return 7; 
      if (mt_min < 120 && nbtags == 1) return 9;
      if (mt_min < 120 && nbtags == 2 && met < 200 && njets <= 4) return 13; 
      if (mt_min < 120 && nbtags == 2) return 15;
      if (mt_min < 120 && nbtags >= 3 && met < 200) return 19; 
      if (mt_min < 120 && nbtags >= 3) return 21;
      if (mt_min >= 120) return 23; 
    }  
    if (ht > 300){
      if (nbtags == 0 && mt_min < 120 && met < 200 && njets <= 4) return 2; 
      if (nbtags == 0 && mt_min < 120 && met < 200 && njets > 4) return 4; 
      if (nbtags == 0 && mt_min < 120 && met < 500 && njets <= 4) return 5; 
      if (nbtags == 0 && mt_min < 120 && met < 500 && njets > 4) return 6; 
      if (nbtags == 1 && mt_min < 120 && met < 200 && njets <= 4) return 8; 
      if (nbtags == 1 && mt_min < 120 && met < 200 && njets > 4) return 10; 
      if (nbtags == 1 && mt_min < 120 && met < 500 && njets <= 4) return 11; 
      if (nbtags == 1 && mt_min < 120 && met < 500 && njets > 4) return 12; 
      if (nbtags == 2 && mt_min < 120 && met < 200 && njets <= 4) return 14; 
      if (nbtags == 2 && mt_min < 120 && met < 200 && njets > 4) return 16; 
      if (nbtags == 2 && mt_min < 120 && met < 500 && njets <= 4) return 17; 
      if (nbtags == 2 && mt_min < 120 && met < 500 && njets > 4) return 18; 
      if (nbtags >= 3 && mt_min < 120 && met < 200) return 20; 
      if (nbtags >= 3 && mt_min < 120 && met >= 200) return 22; 
      if (mt_min >= 120) return 24;
    }
  }

  //Low-Low
  if (lep_pt == LowLow){
    if (ht < 300) return -1; 
    if (mt_min > 120) return 8; 
    if (nbtags == 0 && met < 200) return 1;
    if (nbtags == 0 && met >= 200) return 2;
    if (nbtags == 1 && met < 200) return 3;
    if (nbtags == 1 && met >= 200) return 4;
    if (nbtags == 2 && met < 200) return 5;
    if (nbtags == 2 && met >= 200) return 6;
    if (nbtags >= 3) return 7;
  }

  //Otherwise undefined
  cout << "WARNING: SR UNDEFINED (should never get here)" << endl;
  return -1;
}

bool isGoodVetoElectronNoIso(unsigned int elidx){
  if (els_p4().at(elidx).pt() < 7.) return false;
  if (!electronID(elidx, SS_veto_noiso_v3)) return false;
  return true;
}

bool isGoodVetoElectron(unsigned int elidx){
  if (els_p4().at(elidx).pt() < 7.) return false;
  if (!electronID(elidx, SS_veto_v3)) return false;
  return true;
}

bool isFakableElectronNoIso(unsigned int elidx){
  if (els_p4().at(elidx).pt() < 10.) return false;
  if (!electronID(elidx, SS_fo_looseMVA_noiso_v3)) return false;
  return true;
}

bool isFakableElectron(unsigned int elidx){
  if (els_p4().at(elidx).pt() < 10.) return false;
  if (!electronID(elidx, SS_fo_looseMVA_v3)) return false;
  return true;
}

bool isGoodElectronNoIso(unsigned int elidx){
  if (els_p4().at(elidx).pt() < 10.) return false;
  if (!electronID(elidx, SS_medium_noiso_v3)) return false;
  return true;
}

bool isGoodElectron(unsigned int elidx){
  if (els_p4().at(elidx).pt() < 10.) return false;
  if (!electronID(elidx, SS_medium_v3)) return false;
  return true;
}

bool isGoodVetoMuonNoIso(unsigned int muidx){
  if (mus_p4().at(muidx).pt() < 5.)         return false;
  if (!muonID(muidx, SS_veto_noiso_v3))     return false;
  return true;
}

bool isGoodVetoMuon(unsigned int muidx){
  if (mus_p4().at(muidx).pt() < 5.)         return false;
  if (!muonID(muidx, SS_veto_v3))           return false;
  return true;
}

bool isFakableMuonNoIso(unsigned int muidx){
  if (mus_p4().at(muidx).pt() < 10.)        return false;
  if (!muonID(muidx, SS_fo_noiso_v3))       return false;
  return true;
}

bool isFakableMuon(unsigned int muidx){
  if (mus_p4().at(muidx).pt() < 10.)        return false;
  if (!muonID(muidx, SS_fo_v3))             return false;
  return true;
}

bool isGoodMuonNoIso(unsigned int muidx){
  if (mus_p4().at(muidx).pt() < 10.)        return false;
  if (!muonID(muidx, SS_tight_noiso_v3))    return false;
  return true;
}

bool isGoodMuon(unsigned int muidx){
  if (mus_p4().at(muidx).pt() < 10.)        return false;
  if (!muonID(muidx, SS_tight_v3))          return false;
  return true;
}

int lepMotherID(Lep lep){
  if (abs(lep.pdgId()) != abs(lep.mc_id())) return 0; 
  if (tas::evt_isRealData()) return 1;
  else if (isFromZ(lep.pdgId(),lep.idx()) || isFromW(lep.pdgId(),lep.idx())){
    if (sgn(lep.pdgId()) == sgn(lep.mc_id())) return 1;
    else return 2;
  }
  else if (isFromB(lep.pdgId(),lep.idx())) return -1;
  else if (isFromC(lep.pdgId(),lep.idx())) return -2;
  return 0;
}

int isGoodHyp(int iHyp, IsolationMethods isoCase, bool expt, bool verbose){

  //Bunch o' variables
  float pt_ll = tas::hyp_ll_p4().at(iHyp).pt(); 
  float pt_lt = tas::hyp_lt_p4().at(iHyp).pt(); 
  float eta_ll = tas::hyp_ll_p4().at(iHyp).eta();
  float eta_lt = tas::hyp_lt_p4().at(iHyp).eta();
  int idx_ll = tas::hyp_ll_index().at(iHyp);
  int idx_lt = tas::hyp_lt_index().at(iHyp);
  int id_ll = tas::hyp_ll_id().at(iHyp);
  int id_lt = tas::hyp_lt_id().at(iHyp);
  bool isss = false;
  if (sgn(id_ll) == sgn(id_lt)) isss = true;  
  bool passed_id_numer_ll = isGoodLepton(id_ll, idx_ll, isoCase);
  bool passed_id_numer_lt = isGoodLepton(id_lt, idx_lt, isoCase);
  bool passed_id_denom_ll = isDenominatorLepton(id_ll, idx_ll, isoCase);
  bool passed_id_denom_lt = isDenominatorLepton(id_lt, idx_lt, isoCase);
  bool passed_id_inSituFR_ll = isInSituFRLepton(id_ll, idx_ll, expt);
  bool passed_id_inSituFR_lt = isInSituFRLepton(id_lt, idx_lt, expt);
  bool extraZ = makesExtraZ(iHyp).result;
  bool extraGammaStar = makesExtraGammaStar(iHyp);

  //pass in situ ID
  bool truth_inSituFR = passed_id_inSituFR_lt && passed_id_inSituFR_ll;

  //Verbose info:
  if (verbose && pt_ll > ptCutLow && pt_lt > ptCutLow){
    cout << "hyp " << iHyp << " leptons: " << id_ll << " " << pt_ll << " (idx: " << idx_ll << ") " << id_lt << " " << pt_lt << " (idx: " << idx_lt << ")" << endl;
    cout << "   isss: " << isss << endl;
    cout << "   extraZ: " << extraZ << endl;
    cout << "   extraG: " << extraGammaStar << endl;
    cout << "   invt mass: " << (tas::hyp_ll_p4().at(iHyp) + tas::hyp_lt_p4().at(iHyp)).M() << endl;
    cout << "   passes eta: " << ((abs(id_ll) == 11 ? fabs(eta_ll) < 2.5 : fabs(eta_ll) < 2.4) && (abs(id_lt) == 11 ? fabs(eta_lt) < 2.5 : fabs(eta_lt) < 2.4)) << " etas are " << eta_ll << " and " << eta_lt << endl;
    cout << "   passes hypsFromFirstGoodVertex: " << hypsFromFirstGoodVertex(iHyp) << endl;
    cout << "   lepton with pT " << pt_ll << " passes id: " << passed_id_numer_ll << endl;
    cout << "   lepton with pT " << pt_lt << " passes id: " << passed_id_numer_lt << endl;
    cout << "   lowMassVeto: " << ((tas::hyp_ll_p4().at(iHyp) + tas::hyp_lt_p4().at(iHyp)).M() < 8) << endl;
    if (abs(id_ll) == 11) cout << "   lepton with pT " << pt_ll << " passes 3chg: " << threeChargeAgree(idx_ll) << endl;
    if (abs(id_lt) == 11) cout << "   lepton with pT " << pt_lt << " passes 3chg: " << threeChargeAgree(idx_lt) << endl;
  }

  //Kinematic Cuts
  if (pt_ll < 10) return 0;
  if (pt_lt < 10) return 0;
  if (abs(id_ll) == 11 && fabs(eta_ll) > 2.5) return 0;
  if (abs(id_lt) == 11 && fabs(eta_lt) > 2.5) return 0;
  if (abs(id_ll) == 13 && fabs(eta_ll) > 2.4) return 0;
  if (abs(id_lt) == 13 && fabs(eta_lt) > 2.4) return 0;

  //Must pass at least one denominator selection
  if (!passed_id_inSituFR_ll && !passed_id_denom_ll && !passed_id_numer_ll) return 0;
  if (!passed_id_inSituFR_lt && !passed_id_denom_lt && !passed_id_numer_lt) return 0;

  //Other cuts
  if (extraGammaStar) return 0;
  if ((tas::hyp_ll_p4().at(iHyp) + tas::hyp_lt_p4().at(iHyp)).M() < 8) return 0; 
  if (!hypsFromFirstGoodVertex(iHyp)) return 0;

  //Finished for events that fail z veto
  if (passed_id_numer_lt && passed_id_numer_ll && extraZ) return 6;

  //Results
  else if (passed_id_numer_lt && passed_id_numer_ll && isss) return 3;  // 3 if both numer pass, SS
  else if (!passed_id_numer_lt && !passed_id_numer_ll && passed_id_denom_lt && passed_id_denom_ll && isss == true) return 1; // 1 SS, if both denom and no numer pass
  else if (((passed_id_numer_ll && passed_id_denom_lt) || (passed_id_numer_lt && passed_id_denom_ll)) && isss == true) return 2; //2 SS, one numer and one denom not numer
  else if (isss && truth_inSituFR) return 5;  // 5 if both pass inSituFR
  else if (passed_id_numer_lt && passed_id_numer_ll && !isss) return 4;  // 4 if both numer pass, OS
  return 0; //non-highpass OS
}

hyp_result_t chooseBestHyp(IsolationMethods isoCase, bool expt, bool verbose){

  //List of good hyps
  vector <int> good_hyps_ss; //same sign, tight tight
  vector <int> good_hyps_fr; //same sign, inSituFR
  vector <int> good_hyps_sf; //same sign, single fail
  vector <int> good_hyps_df; //same sign, double fail
  vector <int> good_hyps_os; //opposite sign, tight tight
  vector <int> good_hyps_zv; //same sign, tight tight, fail Z veto
  for (unsigned int i = 0; i < tas::hyp_type().size(); i++){
    int good_hyp_result = isGoodHyp(i, isoCase, expt, verbose);
    if (good_hyp_result == 3) good_hyps_ss.push_back(i); 
    else if (good_hyp_result == 2) good_hyps_sf.push_back(i); 
    else if (good_hyp_result == 1) good_hyps_df.push_back(i); 
    else if (good_hyp_result == 4) good_hyps_os.push_back(i); 
    else if (good_hyp_result == 5) good_hyps_fr.push_back(i); 
    else if (good_hyp_result == 6) good_hyps_zv.push_back(i); 
  }

  //hyp_class_ to track SS(3), SF(2), DF(1), OS(4), or none(0)
  int hyp_class_;

  //Load good hyps in, SS then SF then DF then OS
  vector <int> good_hyps;
  if (good_hyps_ss.size() != 0){
     good_hyps = good_hyps_ss;
     hyp_class_ = 3;
  }
  else if (good_hyps_zv.size() != 0){
    good_hyps = good_hyps_zv;
    hyp_class_ = 6;
  }
  else if (good_hyps_sf.size() != 0){
    good_hyps = good_hyps_sf;
    hyp_class_ = 2;
  }
  else if (good_hyps_df.size() != 0){
     good_hyps = good_hyps_df;
     hyp_class_ = 1;
  }
  else if (good_hyps_os.size() != 0){
    good_hyps = good_hyps_os;
    hyp_class_ = 4;
  }
  else if (good_hyps_fr.size() != 0){
    good_hyps = good_hyps_fr;
    hyp_class_ = 5;
  }
  else hyp_class_ = 0; 

  //If no hyps or one hyps, know what to do
  int best_hyp_ = -1;
  if (good_hyps.size() == 1) best_hyp_ = good_hyps.at(0);

  //Otherwise, pick ones with more muons, then highest pT  
  if (good_hyps.size() > 1){
    best_hyp_ = good_hyps.at(0); 
    for (unsigned int i = 1; i < good_hyps.size(); i++){
      int hyp = good_hyps.at(i);
      if (tas::hyp_type().at(hyp) < tas::hyp_type().at(best_hyp_)) best_hyp_ = hyp;
      else if (tas::hyp_type().at(hyp) == tas::hyp_type().at(best_hyp_) && (tas::hyp_ll_p4().at(hyp).pt()+tas::hyp_lt_p4().at(hyp).pt()) > (tas::hyp_ll_p4().at(best_hyp_).pt() + tas::hyp_lt_p4().at(best_hyp_).pt())) best_hyp_ = hyp;
    }
  }

  if (best_hyp_ < 0){
    hyp_result_t null = { -1, -1 };
    return null;
  }

  hyp_result_t temp;
  temp.best_hyp = best_hyp_;
  temp.hyp_class = hyp_class_; 
  return temp;
}

vector <particle_t> getGenPair(bool verbose){

  vector <particle_t> gen_particles;

  //First get all gen leptons 
  for (unsigned int gidx = 0; gidx < tas::genps_p4().size(); gidx++){
    if (tas::genps_status().at(gidx) != 1) continue;
    int id = tas::genps_id().at(gidx);
    if (abs(id) != 11 && abs(id) != 13 && abs(id) != 15) continue;
    float eta = tas::genps_p4().at(gidx).eta();
    if (fabs(eta) > 2.4) continue;
    int did = -1;
    int didx = -1;
    if (abs(id) == 15){  
      float dpt = -1;
      for (unsigned int didx_ = 0; didx_ < tas::genps_lepdaughter_id().at(gidx).size(); didx_++){
        int did_ = tas::genps_lepdaughter_id().at(gidx).at(didx_);
        if (abs(did_) != 11 && abs(did_) != 13) continue;
        if (fabs(tas::genps_lepdaughter_p4().at(gidx).at(didx_).eta()) > 2.4) continue;
        float dpt_ = tas::genps_lepdaughter_p4().at(gidx).at(didx_).pt();
        if (dpt_ <= dpt) continue;
        dpt = dpt_;
        didx = didx_;
        did = did_;
      }
    }
    particle_t temp;
    temp.id = abs(id) == 15 ? did : id;
    if (abs(id) == 15 && didx < 0) continue;
    temp.idx = abs(id) == 15 ? tas::genps_lepdaughter_idx().at(gidx).at(didx) : gidx;
    temp.p4 = abs(id) == 15 ? tas::genps_lepdaughter_p4().at(gidx).at(didx) : tas::genps_p4().at(gidx);
    if (temp.id != -1) gen_particles.push_back(temp);
  }
 
  if (gen_particles.size() < 2) return gen_particles;

  //Now loop over gen hyps and pick the best
  int gen_hyp_class = 5; 
  int type = 5; 
  particle_t lep1; 
  particle_t lep2;
  lep1.id = -1;
  lep2.id = -1;
  for (unsigned int idx1 = 0; idx1 < gen_particles.size(); idx1++){
    if (verbose) cout << "gen lep " << idx1 << ": " << gen_particles.at(idx1).id << " " << gen_particles.at(idx1).p4.pt() << endl;
    for (unsigned int idx2 = idx1+1; idx2 < gen_particles.size(); idx2++){
      int id1 = gen_particles.at(idx1).id;
      int id2 = gen_particles.at(idx2).id;
      int gen_hyp_class_ = 5;
      int type_ = 5;
      LorentzVector p41 = gen_particles.at(idx1).p4;
      LorentzVector p42 = gen_particles.at(idx2).p4;
      if (id1*id2 < 0) gen_hyp_class_ = 4; 
      if (id1*id2 > 0) gen_hyp_class_ = 3; 
      if (min(p41.pt(), p42.pt()) < 5) continue;
      if (max(p41.pt(), p42.pt()) < 5) continue;
      if (abs(id1) == 11 && abs(id2) == 11) type_ = 3; 
      if (abs(id1) == 13 && abs(id2) == 13) type_ = 0; 
      if ((abs(id1) == 13 && abs(id2) == 11) || (abs(id1) == 11 && abs(id2) == 13)) type_ = 1; 
      if (gen_hyp_class_ < gen_hyp_class){
        gen_hyp_class = gen_hyp_class_;
        type = type_;
        lep1 = gen_particles.at(idx1);
        lep2 = gen_particles.at(idx2);
      }
      else if (gen_hyp_class_ == gen_hyp_class && type_ < type){
        gen_hyp_class = gen_hyp_class_;
        type = type_;
        lep1 = gen_particles.at(idx1);
        lep2 = gen_particles.at(idx2);
      } 
      else if (gen_hyp_class_ == gen_hyp_class && type_ == type && p41.pt()+p42.pt() > lep1.p4.pt()+lep2.p4.pt()){
        gen_hyp_class = gen_hyp_class_;
        type = type_;
        lep1 = gen_particles.at(idx1);
        lep2 = gen_particles.at(idx2);
      }
    }
  }
  
  //Return leptons you found
  vector <particle_t> selected_gen_leptons;
  if (lep1.p4.pt() > lep2.p4.pt()){
    selected_gen_leptons.push_back(lep1);
    selected_gen_leptons.push_back(lep2);
  }
  else{ 
    selected_gen_leptons.push_back(lep2);
    selected_gen_leptons.push_back(lep1);
  }

  return selected_gen_leptons;

}

pair<particle_t, int> getThirdLepton(int hyp){

  //If hyp_class == 6, save the lepton that triggered the Z veto (so long as it is veto or higher)
  Z_result_t Zresult = makesExtraZ(hyp);
  if (Zresult.result == true){
    particle_t result;
    result.id = Zresult.id;
    result.idx = Zresult.idx;
    result.p4 = abs(result.id) == 11 ? tas::els_p4().at(result.idx) : tas::mus_p4().at(result.idx);
    int quality = 0;
    if (abs(result.id) == 11 ? !isGoodVetoElectron(result.idx) : !isGoodVetoMuon(result.idx)) quality = -1;
    if (abs(result.id) == 11 ? isFakableElectron(result.idx) : isFakableMuon(result.idx)) quality = 1;
    if (abs(result.id) == 11 ? isGoodElectron(result.idx) : isGoodMuon(result.idx)) quality = 2;
    if (quality >= 0) return pair<particle_t, int>(result, quality);
  }
  
  //Otherwise, find the highest-quality lepton possible. 

  //Selected Lepton Information
  int ll_id = tas::hyp_ll_id().at(hyp);
  int lt_id = tas::hyp_lt_id().at(hyp);
  unsigned int ll_idx = tas::hyp_ll_index().at(hyp);
  unsigned int lt_idx = tas::hyp_lt_index().at(hyp);

  //Store best lepton
  int lep3_id_ = -1;
  int lep3_idx_ = -1;
  int quality = 0;
  LorentzVector lep3_p4_; 

  //Electron Loop 
  for (unsigned int i = 0; i < tas::els_p4().size(); i++){

    //Remove electrons already selected
    if (abs(ll_id) == 11 && ll_idx == i) continue; 
    if (abs(lt_id) == 11 && lt_idx == i) continue; 

    //Remove electrons that fail kinematically
    if (tas::els_p4().at(i).pt() < 20) continue;
    if (fabs(tas::els_p4().at(i).eta()) > 2.4) continue;

    //Remove electrons that fail loosest ID, determine tighter IDs
    int quality_ = 0;
    if (!isGoodVetoElectron(i)) continue;
    if (isFakableElectron(i)) quality_ = 1;
    if (isGoodElectron(i)) quality_ = 2;

    //Choose the highest-quality, highest-pT electron 
    if (quality_ > quality || (quality_ == quality && tas::els_p4().at(i).pt() > lep3_p4_.pt())){
       quality = quality_;
       lep3_p4_  = tas::els_p4().at(i); 
       lep3_id_  = -11*tas::els_charge().at(i);
       lep3_idx_ = i;
    } 
  }
  
  //Muon Loop
  for (unsigned int i = 0; i < tas::mus_p4().size(); i++){

    //Remove electrons already selected
    if (abs(ll_id) == 13 && ll_idx == i) continue; 
    if (abs(lt_id) == 13 && lt_idx == i) continue; 
   
    //Remove electrons that fail kinematically
    if (tas::mus_p4().at(i).pt() < 20) continue;
    if (fabs(tas::mus_p4().at(i).eta()) > 2.4) continue;

    //Remove muons that fail ID
    int quality_ = 0; 
    if (!isGoodVetoMuon(i)) continue;
    if (isFakableMuon(i)) quality_ = 1;
    if (isGoodMuon(i)) quality_ = 2;

    //Choose the highest-quality, highest-pT electron 
    if (quality_ > quality || (quality_ == quality && tas::mus_p4().at(i).pt() > lep3_p4_.pt())){
       quality = quality_;
       lep3_p4_  = tas::mus_p4().at(i); 
       lep3_id_  = -13*tas::mus_charge().at(i);
       lep3_idx_ = i;
    } 

  }//Muon loop

  particle_t result;
  result.id = lep3_id_;
  result.p4 = lep3_p4_;
  result.idx = lep3_idx_;

  return pair<particle_t, int>(result, quality);

}

bool ptsort (int i,int j) { return (genps_p4()[i].pt()>genps_p4()[j].pt()); }

bool lepsort (Lep i,Lep j) { 
  if ( abs(i.pdgId())==abs(j.pdgId()) ) return ( i.pt()>j.pt() ); //sort by pt if same flavor
  else return ( abs(i.pdgId())>abs(j.pdgId()) ); //prefer muons over electrons, but check that mu have pt>25//fixme, need to sync // && i.pt()>ptCutHigh
}

bool jetptsort (Jet i,Jet j) { return (i.pt()>j.pt()); }

float coneCorrPt(int id, int idx){
  float miniIso = abs(id)==11 ? elMiniRelIsoCMS3_EA(idx) : muMiniRelIsoCMS3_EA(idx);
  LorentzVector lep_p4 = abs(id)==11 ? els_p4().at(idx) : mus_p4().at(idx);
  LorentzVector jet_p4  = closestJet(lep_p4, 0.4, 2.4);
  float ptrel = ptRel(lep_p4, jet_p4, true);
  float A = abs(id)==11 ? 0.10 : 0.14;
  float B = abs(id)==11 ? 0.70 : 0.68;
  float C = abs(id)==11 ? 7.00 : 6.70;
  return ((ptrel > C) ? lep_p4.pt()*(1 + std::max((float)0, miniIso - A)) : std::max(lep_p4.pt(), jet_p4.pt() * B));
}

LorentzVector correctedMET(FactorizedJetCorrector* jetCorr){

  //uncorrected MET
  LorentzVector newMET(tas::evt_pfmet_raw()*cos(tas::evt_pfmetPhi_raw()), 
                       tas::evt_pfmet_raw()*sin(tas::evt_pfmetPhi_raw()),
                       0,
                       sqrt(pow(tas::evt_pfmet_raw()*cos(tas::evt_pfmetPhi_raw()), 2) + pow(tas::evt_pfmet_raw()*sin(tas::evt_pfmetPhi_raw()), 2)) );

  LorentzVector uncorrected_jets;
  LorentzVector corrected_jets;
  

  for (unsigned int i = 0; i < tas::pfjets_p4().size(); i++){
    LorentzVector jet = tas::pfjets_p4().at(i);
    
    //Kinematic jet cuts
    if (jet.pt() < 10.) continue;
    if (fabs(jet.eta()) > 5.2) continue;

    //Require loose jet ID -- vince uses V2 of this function, fixme
    if (!isLoosePFJet(i)) continue;
    
    //Jet cleaning -- electrons
    bool jetIsLep = false;
    for (unsigned int eidx = 0; eidx < tas::els_p4().size(); eidx++){
      LorentzVector electron = tas::els_p4().at(eidx);
      if (electron.pt() < 10) continue;
      if (!isGoodVetoElectron(eidx)) continue;
      if (ROOT::Math::VectorUtil::DeltaR(jet, electron) > 0.4) continue;
      jetIsLep = true;
    }
    if (jetIsLep == true) continue;
    
    //Jet cleaning -- muons
    for (unsigned int muidx = 0; muidx < tas::mus_p4().size(); muidx++){
      LorentzVector muon = tas::mus_p4().at(muidx);
      if (muon.pt() < 10) continue;
      if (!isGoodVetoMuon(muidx)) continue;
      if (ROOT::Math::VectorUtil::DeltaR(jet, muon) > 0.4) continue;
      jetIsLep = true;
    }
    if (jetIsLep == true) continue;

    //Figure out jet correction
    jetCorr->setJetEta(jet.eta()); 
    jetCorr->setJetPt(jet.pt()); 
    jetCorr->setJetA(tas::pfjets_area().at(i)); 
    jetCorr->setRho(tas::evt_fixgrid_all_rho()); 
    float JEC = jetCorr->getCorrection(); 
    
    //Add to jet vector
    uncorrected_jets += jet; 
    corrected_jets += jet*JEC; 

    //Calculate it
    newMET -= corrected_jets - uncorrected_jets; 

  }
  return newMET; 
}
