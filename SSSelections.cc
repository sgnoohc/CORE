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

bool makesExtraZ(int iHyp){

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
    return false;
  }
      
  if (ele_idx.size() > 0) {
    for (unsigned int eidx = 0; eidx < tas::els_p4().size(); eidx++) {

      bool is_hyp_lep = false;
      for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++) {
        if (eidx == ele_idx.at(vidx)) is_hyp_lep = true;                
      }
      if (is_hyp_lep) continue;
      if (fabs(tas::els_p4().at(eidx).eta()) > 2.4) continue;
      if (tas::els_p4().at(eidx).pt() < 10) continue;

      if (!isGoodVetoElectron(eidx)) continue;

      for (unsigned int vidx = 0; vidx < ele_idx.size(); vidx++) {
        if (tas::els_charge().at(eidx) * tas::els_charge().at(ele_idx.at(vidx)) > 0) continue;
        LorentzVector zp4 = tas::els_p4().at(eidx) + tas::els_p4().at(ele_idx.at(vidx));
        float zcandmass = sqrt(fabs(zp4.mass2()));
        if (fabs(zcandmass-91.) < 15.) return true;
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
      if (tas::mus_p4().at(midx).pt() < 10.) continue;

      if (!isGoodVetoMuon(midx)) continue;

      for (unsigned int vidx = 0; vidx < mu_idx.size(); vidx++) {
        if (tas::mus_charge().at(midx) * tas::mus_charge().at(mu_idx.at(vidx)) > 0) continue;
        LorentzVector zp4 = tas::mus_p4().at(midx) + tas::mus_p4().at(mu_idx.at(vidx));
        float zcandmass = sqrt(fabs(zp4.mass2()));
        if (fabs(zcandmass-91.) < 15.) return true;
      }
    }
  }

  return false;
}

bool isIsolatedLepton(int id, int idx){
  if (abs(id) == 11) return eleRelIso03(idx, SS) < 0.18;
  if (abs(id) == 13) return muRelIso03(idx, SS) < 0.15;
  return false;
}

bool isGoodLepton(int id, int idx){
  if (abs(id) == 11) return isGoodElectron(idx);
  else if (abs(id) == 13) return isGoodMuon(idx);
  return false;
}

bool isDenominatorLepton(int id, int idx){
  if (abs(id) == 11) return isFakableElectron(idx);
  else if (abs(id) == 13) return isFakableMuon(idx);
  else return false;
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
