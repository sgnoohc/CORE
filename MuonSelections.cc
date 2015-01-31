#include "MuonSelections.h"

using namespace tas;

bool muonID(unsigned int muIdx, id_level_t id_level){

  switch (id_level){

   /////////////////
   /// POG loose ///
   /////////////////
  
    case(POG_loose):
      {
        if(!mus_pid_PFMuon().at(muIdx)) return false;    
        bool isGlobal  = true;
        bool isTracker = true;
        if (((mus_type().at(muIdx)) & (1<<1)) == 0) isGlobal  = false;
        if (((mus_type().at(muIdx)) & (1<<2)) == 0) isTracker = false;
        if (!(isGlobal || isTracker)) return false;  
        break;
      }
   
   /////////////////////
   /// stop loose v1 ///
   /////////////////////
  
    case(STOP_loose_v1):
      {
        if(!mus_pid_PFMuon().at(muIdx)) return false;    
        bool isGlobal  = true;
        bool isTracker = true;
        if (((mus_type().at(muIdx)) & (1<<1)) == 0) isGlobal  = false;
        if (((mus_type().at(muIdx)) & (1<<2)) == 0) isTracker = false;
        if (!(isGlobal || isTracker)) return false;  
        break;
      }
  
   ///////////////////
   /// SS loose v1 ///
   ///////////////////
  
    case(SS_loose_v1):
      {
        if(!mus_pid_PFMuon().at(muIdx)) return false;    
        bool isGlobal  = true;
        bool isTracker = true;
        if (((mus_type().at(muIdx)) & (1<<1)) == 0) isGlobal  = false;
        if (((mus_type().at(muIdx)) & (1<<2)) == 0) isTracker = false;
        if (!(isGlobal || isTracker)) return false;  
        break;
      }
  
   ////////////////////
   /// HAD loose v1 ///
   ////////////////////
  
    case(HAD_loose_v1):
      {
        if(!mus_pid_PFMuon().at(muIdx)) return false;    
        bool isGlobal  = true;
        bool isTracker = true;
        if (((mus_type().at(muIdx)) & (1<<1)) == 0) isGlobal  = false;
        if (((mus_type().at(muIdx)) & (1<<2)) == 0) isTracker = false;
        if (!(isGlobal || isTracker)) return false;  
        if (fabs(mus_dxyPV().at(muIdx)) > 0.5) return false;
        if (fabs(mus_dzPV().at(muIdx)) > 1.0)  return false;
        break;
      }

   /////////////////
   /// POG tight ///
   /////////////////
  
    case(POG_tight):
      {
        if(!mus_pid_PFMuon().at(muIdx)) return false;    
        bool isGlobal  = true;
        bool isTracker = true;
        if (((mus_type().at(muIdx)) & (1<<1)) == 0) isGlobal  = false;
        if (((mus_type().at(muIdx)) & (1<<2)) == 0) isTracker = false;
        if (!(isGlobal || isTracker)) return false;  
        if (mus_gfit_chi2().at(muIdx)/mus_gfit_ndof().at(muIdx) >= 10) return false; 
        if (mus_gfit_validSTAHits().at(muIdx) == 0) return false; 
        if (mus_numberOfMatchedStations().at(muIdx) < 2) return false;
        if (mus_validPixelHits().at(muIdx) == 0) return false;
        if (mus_nlayers().at(muIdx) < 6) return false;
        if (fabs(mus_ip3d().at(muIdx))/mus_ip3derr().at(muIdx) >= 4) return false;
        if (fabs(mus_dzPV().at(muIdx)) > 0.1) return false;
        break;
      }

   ///////////////////
   /// SS tight v1 ///
   ///////////////////
  
    case(SS_tight_v1):
      {
        if(!mus_pid_PFMuon().at(muIdx)) return false;    
        bool isGlobal  = true;
        bool isTracker = true;
        if (((mus_type().at(muIdx)) & (1<<1)) == 0) isGlobal  = false;
        if (((mus_type().at(muIdx)) & (1<<2)) == 0) isTracker = false;
        if (!(isGlobal || isTracker)) return false;  
        if (mus_gfit_chi2().at(muIdx)/mus_gfit_ndof().at(muIdx) >= 10) return false; 
        if (mus_gfit_validSTAHits().at(muIdx) == 0) return false; 
        if (mus_numberOfMatchedStations().at(muIdx) < 2) return false;
        if (mus_validPixelHits().at(muIdx) == 0) return false;
        if (mus_nlayers().at(muIdx) < 6) return false;
        break;
      }

   /////////////////////
   /// STOP tight v1 ///
   /////////////////////
  
    case(STOP_tight_v1):
      {
        if(!mus_pid_PFMuon().at(muIdx)) return false;    
        bool isGlobal  = true;
        bool isTracker = true;
        if (((mus_type().at(muIdx)) & (1<<1)) == 0) isGlobal  = false;
        if (((mus_type().at(muIdx)) & (1<<2)) == 0) isTracker = false;
        if (!(isGlobal || isTracker)) return false;  
        if (mus_gfit_chi2().at(muIdx)/mus_gfit_ndof().at(muIdx) >= 10) return false; 
        if (mus_gfit_validSTAHits().at(muIdx) == 0) return false; 
        if (mus_numberOfMatchedStations().at(muIdx) < 2) return false;
        if (mus_validPixelHits().at(muIdx) == 0) return false;
        if (mus_nlayers().at(muIdx) < 6) return false;
        if (fabs(mus_ip3d().at(muIdx))/mus_ip3derr().at(muIdx) >= 4) return false;
        if (fabs(mus_dzPV().at(muIdx)) > 0.1) return false;
        break;
      }

   ////////////////////
   /// HAD tight v1 ///
   ////////////////////
  
    case(HAD_tight_v1):
      {
        if(!mus_pid_PFMuon().at(muIdx)) return false;    
        bool isGlobal  = true;
        if (((mus_type().at(muIdx)) & (1<<1)) == 0) isGlobal = false;
        if (!isGlobal) return false;
        if (mus_gfit_chi2().at(muIdx)/mus_gfit_ndof().at(muIdx) >= 10) return false; 
        if (mus_gfit_validSTAHits().at(muIdx) == 0) return false; 
        if (mus_numberOfMatchedStations().at(muIdx) < 2) return false;
        if (mus_validPixelHits().at(muIdx) == 0) return false;
        if (mus_nlayers().at(muIdx) < 6) return false;
        if (fabs(mus_dxyPV().at(muIdx)) > 0.2) return false;
        if (fabs(mus_dzPV().at(muIdx)) > 0.5) return false;
        break;
      }

   ///////////////
   /// Default ///
   ///////////////
    default:
      {
        cout << "Warning! Muon ID not defined for this id_level!" << endl;
        return false;
      }
   
  
  }//cases
  return true;
}

float muRelIso03DB(unsigned int muIdx){
  float chiso     = mus_isoR03_pf_ChargedHadronPt().at(muIdx);
  float nhiso     = mus_isoR03_pf_NeutralHadronEt().at(muIdx);
  float emiso     = mus_isoR03_pf_PhotonEt().at(muIdx);
  float deltaBeta = mus_isoR03_pf_PUPt().at(muIdx);
  float absiso = chiso + std::max(0.0, nhiso + emiso - 0.5 * deltaBeta);
  return absiso/(mus_p4().at(muIdx).pt());
}

float muRelIso04DB(unsigned int muIdx){
  float chiso     = mus_isoR04_pf_ChargedHadronPt().at(muIdx);
  float nhiso     = mus_isoR04_pf_NeutralHadronEt().at(muIdx);
  float emiso     = mus_isoR04_pf_PhotonEt().at(muIdx);
  float deltaBeta = mus_isoR04_pf_PUPt().at(muIdx);
  float absiso = chiso + std::max(0.0, nhiso + emiso - 0.5 * deltaBeta);
  return absiso/(mus_p4().at(muIdx).pt());
}

float muRelIso03(unsigned int muIdx, analysis_t analysis){
  if (analysis == SS) return muRelIso03EA(muIdx);
  return muRelIso03DB(muIdx);
}

float muRelIso03EA(unsigned int muIdx){
  float chiso     = mus_isoR03_pf_ChargedHadronPt().at(muIdx);
  float nhiso     = mus_isoR03_pf_NeutralHadronEt().at(muIdx);
  float emiso     = mus_isoR03_pf_PhotonEt().at(muIdx);
  float ea = 0.;
  if      (fabs(mus_p4().at(muIdx).eta())<=0.800) ea = 0.0913;
  else if (fabs(mus_p4().at(muIdx).eta())<=1.300) ea = 0.0765;
  else if (fabs(mus_p4().at(muIdx).eta())<=2.000) ea = 0.0546;
  else if (fabs(mus_p4().at(muIdx).eta())<=2.200) ea = 0.0728;
  else if (fabs(mus_p4().at(muIdx).eta())<=2.500) ea = 0.1177;
  float absiso = chiso + std::max(float(0.0), nhiso + emiso - evt_fixgrid_all_rho() * ea);
  return absiso/(mus_p4().at(muIdx).pt());
}

int muTightID(unsigned int muIdx, analysis_t analysis){
  switch (analysis){
    case (POG):
      if (muonID(muIdx, POG_tight)) return 1;
      if (muonID(muIdx, POG_loose)) return 0;
      break;
    case (SS):
      if (muonID(muIdx, SS_tight_v1)) return 1;
      if (muonID(muIdx, SS_loose_v1)) return 0;
      break;
    case (HAD):
      if (muonID(muIdx, HAD_tight_v1)) return 1;
      if (muonID(muIdx, HAD_loose_v1)) return 0;
      break;
    case (STOP):
      if (muonID(muIdx, STOP_tight_v1)) return 1;
      if (muonID(muIdx, STOP_loose_v1)) return 0;
      break;
  }
  return -1;
}

//Only used for SS analysis
bool isGoodVetoMuonNoIso(unsigned int muidx){
  if (fabs(mus_p4().at(muidx).eta()) > 2.4) return false;
  if (mus_p4().at(muidx).pt() < 5.) return false;//fixme
  if (!muonID(muidx, SS_loose_v1)) return false;
  if (fabs(mus_dxyPV().at(muidx)) >= 0.05) return false;
  if (fabs(mus_dzPV().at(muidx)) >= 0.1) return false;
  return true;
}

//Only used for SS analysis
bool isGoodVetoMuon(unsigned int muidx){
  if (!isGoodVetoMuonNoIso(muidx)) return false;
  if (muRelIso03(muidx, SS) > 0.5) return false;
  return true;
}

//Only used for SS analysis
bool isFakableMuonNoIso(unsigned int muidx){
  if (!isGoodVetoMuonNoIso(muidx)) return false;
  if (!isMuonFO(muidx)) return false;
  return true;
}

//Only used for SS analysis
bool isFakableMuon(unsigned int muidx){
  if (!isFakableMuonNoIso(muidx)) return false;
  if (muRelIso03(muidx, SS) > 0.5) return false;
  return true;
}

//Only used for SS analysis
bool isGoodMuonNoIso(unsigned int muidx){
  if (!isFakableMuonNoIso(muidx)) return false;
  if (!muonID(muidx, SS_tight_v1)) return false;
  if (fabs(mus_ip3d().at(muidx))/mus_ip3derr().at(muidx) >= 4) return false;
  return true;
}

//Only used for SS analysis
bool isGoodMuon(unsigned int muidx){
  if (!isGoodMuonNoIso(muidx)) return false;
  if (muRelIso03(muidx, SS) > 0.1) return false;
  return true;
}
