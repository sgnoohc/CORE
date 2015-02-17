#include "ElectronSelections.h"
#include "Math/LorentzVector.h"
#include "Math/VectorUtil.h"

//Development Notes
  //Original Author: Alex (UCSB), who stole functions from Indara, Jason, Giuseppe
  //POG Electron IDs are defined in: 
  //https://twiki.cern.ch/twiki/bin/viewauth/CMS/EgammaCutBasedIdentification#Electron_ID_Working_Points

using namespace tas;

bool isVetoElectronPOG(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false; 
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.8) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
    if (els_hOverE().at(elIdx) >= 0.15) return false; 
    if (fabs(els_dxyPV().at(elIdx)) >= 0.04) return false;
    if (fabs(els_dzPV().at(elIdx)) >= 0.2) return false; 
  }
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.01) return false; 
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.7) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
    if (fabs(els_dxyPV().at(elIdx)) >= 0.04) return false;
    if (fabs(els_dzPV().at(elIdx)) >= 0.2) return false; 
  }
  else return false;

  return true;
}

bool isLooseElectronPOG(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false;
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (els_hOverE().at(elIdx) >= 0.12) return false;
    if (els_conv_vtx_flag().at(elIdx)) return false;
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.15) return false;
    if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false;
    if (fabs(els_dzPV().at(elIdx)) >= 0.2) return false; 
    if (els_exp_innerlayers().at(elIdx) > 1) return false;
  }
  else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false;
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (els_hOverE().at(elIdx) >= 0.1) return false;
    if (els_conv_vtx_flag().at(elIdx) ) return false;
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.009) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.10) return false;
    if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false; 
    if (fabs(els_dzPV().at(elIdx)) >= 0.2) return false; 
    if (els_exp_innerlayers().at(elIdx) > 1) return false;
  }
  else return false;
  return true;
}

bool isMediumElectronPOG(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.004) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.06) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
    if (els_hOverE().at(elIdx) >= 0.12) return false; 
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (els_conv_vtx_flag().at(elIdx)) return false;
    if (els_exp_innerlayers().at(elIdx) > 1) return false;
    if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false; 
    if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; 
  }
  else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
    if (els_conv_vtx_flag().at(elIdx)) return false;
    if (els_exp_innerlayers().at(elIdx) > 0) return false;
    if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false; 
    if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; 
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.03) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
    if (els_hOverE().at(elIdx) >= 0.1) return false; 
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
  }
  else return false;
  return true;
}

bool isTightElectronPOG(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.004) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.03) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
    if (els_hOverE().at(elIdx) >= 0.12) return false; 
    if (fabs((1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false; 
    if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; 
    if (els_conv_vtx_flag().at(elIdx)) return false;
    if (els_exp_innerlayers().at(elIdx) > 0) return false;
  }
  else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
    if (fabs(els_dEtaIn().at(elIdx)) >= 0.005) return false;
    if (fabs(els_dPhiIn().at(elIdx)) >= 0.02) return false; 
    if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
    if (els_hOverE().at(elIdx) >= 0.1) return false; 
    if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
    if (fabs(els_dxyPV().at(elIdx)) >= 0.02) return false;
    if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; 
    if (els_conv_vtx_flag().at(elIdx)) return false;
    if (els_exp_innerlayers().at(elIdx) > 0) return false;
  }
  else return false;
  return true;
}

bool electronID(unsigned int elIdx, id_level_t id_level){

  analysis_t analysis = whichAnalysis(id_level);

  switch (id_level){

   //////////////////
   // SS veto v1 ////
   //////////////////

    case(SS_veto_noiso_v1):
      if (fabs(els_etaSC().at(elIdx)) <= 1.479){
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false; 
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.8) return false; 
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
        if (els_hOverE().at(elIdx) >= 0.15) return false; 
      }
      else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.01) return false; 
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.7) return false; 
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
      }
      else return false;
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 1) return false;
      if (fabs(els_dxyPV().at(elIdx)) >= 0.05) return false;
      if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false; 
      break;

    case(SS_veto_v1):
      if (electronID(elIdx, SS_veto_noiso_v1)==0) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.50) return false; 
      return true;
      break;

   ////////////////////
   /// HAD veto v1 ////
   ////////////////////

    case(HAD_veto_v1):
      if (!isVetoElectronPOG(elIdx)) return false;
      if (eleRelIso03(elIdx, analysis) >= 0.15) return false; 
      return true;
      break;

   /////////////////////
   /// STOP veto v1 ////
   /////////////////////

    case(STOP_veto_v1):
      if (!isVetoElectronPOG(elIdx)) return false;
      if (eleRelIso03(elIdx, POG) >= 0.15) return false; 
      return true;
      break;


   /////////////////////
   /// STOP loose v1 ///
   /////////////////////

    case(STOP_loose_v1):
      if (!isLooseElectronPOG(elIdx)) return false;
      if (eleRelIso03(elIdx, POG) >= 0.15) return false; 
      return true;
      break;

   ///////////////////
   /// SS FO v1 /// same as medium, but no SIP3D cut and looser iso
   ///////////////////

    case(SS_fo_noiso_v1):
      if (fabs(els_etaSC().at(elIdx)) <= 1.479){
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.004) return false;
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.06) return false; 
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
        if (els_hOverE().at(elIdx) >= 0.12) return false; 
        if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
      }
      else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.03) return false; 
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
        if (els_hOverE().at(elIdx) >= 0.1) return false; 
        if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
      }
      else return false;
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 0) return false;
      if (threeChargeAgree(elIdx)==0) return false;
      if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false;
      break;

    case(SS_fo_v1):
      if (electronID(elIdx, SS_fo_noiso_v1)==0) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.50) return false; 
      return true;
      break;

   ////////////////////
   /// HAD loose v1 ///
   ////////////////////

    case(HAD_loose_v1):
      if (fabs(els_etaSC().at(elIdx)) <= 1.479){
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false;
        if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
        if (els_hOverE().at(elIdx) >= 0.12) return false;
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.15) return false;
      }
      else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false;
        if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
        if (els_hOverE().at(elIdx) >= 0.1) return false;
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.009) return false;
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.10) return false;
      }
      else return false;
      break;

   //////////////////////
   /// STOP medium v1 ///
   //////////////////////

    case(STOP_medium_v1):
      if (!isMediumElectronPOG(elIdx)) return false;
      if (eleRelIso03(elIdx, POG) >= 0.15) return false; 
      return true;
      break;

   /////////////////////
   /// HAD medium v1 ///
   /////////////////////

    case(HAD_medium_v1):
      if (fabs(els_etaSC().at(elIdx)) <= 1.479){
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.004) return false;
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.06) return false; 
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
        if (els_hOverE().at(elIdx) >= 0.12) return false; 
        if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
      }
      else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.03) return false; 
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
        if (els_hOverE().at(elIdx) >= 0.1) return false; 
        if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
      }
      else return false;
      break;

   ////////////////////
   /// SS medium v1 ///
   ////////////////////

    case(SS_medium_noiso_v1):
      if (fabs(els_etaSC().at(elIdx)) <= 1.479){
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.004) return false;
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.06) return false; 
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
        if (els_hOverE().at(elIdx) >= 0.12) return false; 
        if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
      }
      else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
        if (fabs(els_dEtaIn().at(elIdx)) >= 0.007) return false;
        if (fabs(els_dPhiIn().at(elIdx)) >= 0.03) return false; 
        if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
        if (els_hOverE().at(elIdx) >= 0.1) return false; 
        if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
      }
      else return false;
      if (els_conv_vtx_flag().at(elIdx)) return false;
      if (els_exp_innerlayers().at(elIdx) > 0) return false;
      if (threeChargeAgree(elIdx)==0) return false;
      if (fabs(els_dzPV().at(elIdx)) >= 0.1) return false;
      if (fabs(els_ip3d().at(elIdx))/els_ip3derr().at(elIdx) >= 4) return false;
      break;

    case(SS_medium_v1):
      if (electronID(elIdx, SS_medium_noiso_v1)==0) return false; 
      if (eleRelIso03(elIdx, analysis) >= 0.10) return false; 
      return true;
      break;

   /////////////////////
   /// STOP tight v1 ///
   /////////////////////

    case(STOP_tight_v1):
      if (!isTightElectronPOG(elIdx)) return false;
      if (eleRelIso03(elIdx, POG) >= 0.10) return false; 
      return true;
      break;

   ////////////////////
   /// HAD tight v1 ///
   ////////////////////

  case(HAD_tight_v1):
	if (fabs(els_etaSC().at(elIdx)) <= 1.479){
	  if (fabs(els_dEtaIn().at(elIdx)) >= 0.004) return false;
	  if (fabs(els_dPhiIn().at(elIdx)) >= 0.03) return false; 
	  if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.01) return false; 
	  if (els_hOverE().at(elIdx) >= 0.12) return false; 
	  if (fabs((1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
	}
	else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
	  if (fabs(els_dEtaIn().at(elIdx)) >= 0.005) return false;
	  if (fabs(els_dPhiIn().at(elIdx)) >= 0.02) return false; 
	  if (els_sigmaIEtaIEta_full5x5().at(elIdx) >= 0.03) return false; 
	  if (els_hOverE().at(elIdx) >= 0.1) return false; 
	  if (fabs( (1.0/els_ecalEnergy().at(elIdx)) - (els_eOverPIn().at(elIdx)/els_ecalEnergy().at(elIdx)) ) >= 0.05) return false;
	}
	else return false;
	break;

	/////////////////////
	/// ZMET loose v1 ///
	/////////////////////

  case(ZMET_loose_v1):
	if (!isLooseElectronPOGphys14noIso(elIdx)) return false;
	if (fabs(els_etaSC().at(elIdx)) <= 1.479){
      if (eleRelIso03(elIdx, analysis) >= 0.15) return false; 
	}
	else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
      if (eleRelIso03(elIdx, analysis) >= 0.15) return false; 
	}
	else return false;
	break;

  case(ZMET_loose_noiso_v1):
	if (!isLooseElectronPOGphys14noIso(elIdx)) return false;
	// if (fabs(els_etaSC().at(elIdx)) <= 1.479){
    //   if (eleRelIso03(elIdx, analysis) >= 0.15) return false; 
	// }
	// else if((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){
    //   if (eleRelIso03(elIdx, analysis) >= 0.15) return false; 
	// }
	else return false;
	break;

   ///////////////
   /// Default ///
   ///////////////
    default:
      {
        cout << "Warning! Electron ID not defined for this id_level!" << endl;
        return false;
      }

  }//switch
  return true;
}

bool isVetoElectronPOGphys14(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){                                                    // Barrel 
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.011100) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.016315) return false;// abs(dEtaIn) 			   
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.252044) return false;// abs(dPhiIn) 			   
    if (els_hOverE()                                     .at(elIdx)   >= 0.345843) return false;// hOverE 				   	
    if (eleRelIso03DB(elIdx)                                          >= 0.164369) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.248070) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.060279) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.800538) return false;// abs(dz) 				   
	if (els_exp_innerlayers()       .at(elIdx)                        > 2        ) return false;// expectedMissingInnerHits 
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){       // Endcap
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.033987) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.010671) return false;// abs(dEtaIn) 			    
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.245263) return false;// abs(dPhiIn) 			    
    if (els_hOverE()                                     .at(elIdx)   >= 0.134691) return false;// hOverE 				    
    if (eleRelIso03DB(elIdx)                                          >= 0.212604) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.157160) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.273097) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.885860) return false;// abs(dz) 				    
	if (els_exp_innerlayers()       .at(elIdx)                        > 3        ) return false;// expectedMissingInnerHits
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else return false;
  return true;
}

bool isLooseElectronPOGphys14(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){                                                    // Barrel 
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.010557) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.012442) return false;// abs(dEtaIn) 			   
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.072624) return false;// abs(dPhiIn) 			   
    if (els_hOverE()                                     .at(elIdx)   >= 0.121476) return false;// hOverE 				   
    if (eleRelIso03DB(elIdx)                                          >= 0.120026) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.221803) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.022664) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.173670) return false;// abs(dz) 				   
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits 
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){       // Endcap
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.032602) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.010654) return false;// abs(dEtaIn) 			    
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.145129) return false;// abs(dPhiIn) 			    
    if (els_hOverE()                                     .at(elIdx)   >= 0.131862) return false;// hOverE 				    
    if (eleRelIso03DB(elIdx)                                          >= 0.162914) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.142283) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.097358) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.198444) return false;// abs(dz) 				    
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else return false;
  return true;
}

bool isMediumElectronPOGphys14(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){                                                    // Barrel 
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.010399) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.007641) return false;// abs(dEtaIn) 			   
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.032643) return false;// abs(dPhiIn) 			   
    if (els_hOverE()                                     .at(elIdx)   >= 0.060662) return false;// hOverE 				   
    if (eleRelIso03DB(elIdx)                                          >= 0.097213) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.153897) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.011811) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.070775) return false;// abs(dz) 				   
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits 
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){       // Endcap
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.029524) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.009285) return false;// abs(dEtaIn) 			    
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.042447) return false;// abs(dPhiIn) 			    
    if (els_hOverE()                                     .at(elIdx)   >= 0.104263) return false;// hOverE 				    
    if (eleRelIso03DB(elIdx)                                          >= 0.116708) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.137468) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.051682) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.180720) return false;// abs(dz) 				    
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else return false;
  return true;
}

bool isTightElectronPOGphys14(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){                                                    // Barrel 
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.010181) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.006574) return false;// abs(dEtaIn) 			   
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.022868) return false;// abs(dPhiIn) 			   
    if (els_hOverE()                                     .at(elIdx)   >= 0.037553) return false;// hOverE 				   
    if (eleRelIso03DB(elIdx)                                          >= 0.074355) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.131191) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.009924) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.015310) return false;// abs(dz) 				   
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits 
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){       // Endcap
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.028766) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.005681) return false;// abs(dEtaIn) 			    
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.032046) return false;// abs(dPhiIn) 			    
    if (els_hOverE()                                     .at(elIdx)   >= 0.081902) return false;// hOverE 				    
    if (eleRelIso03DB(elIdx)                                          >= 0.090185) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.106055) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.027261) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.147154) return false;// abs(dz) 				    
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else return false;
  return true;
}

bool isVetoElectronPOGphys14noIso(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){                                                    // Barrel 
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.011100) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.016315) return false;// abs(dEtaIn) 			   
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.252044) return false;// abs(dPhiIn) 			   
    if (els_hOverE()                                     .at(elIdx)   >= 0.345843) return false;// hOverE 				   	
    // if (eleRelIso03DB(elIdx)                                          >= 0.164369) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.248070) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.060279) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.800538) return false;// abs(dz) 				   
	if (els_exp_innerlayers()       .at(elIdx)                        > 2        ) return false;// expectedMissingInnerHits 
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){       // Endcap
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.033987) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.010671) return false;// abs(dEtaIn) 			    
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.245263) return false;// abs(dPhiIn) 			    
    if (els_hOverE()                                     .at(elIdx)   >= 0.134691) return false;// hOverE 				    
    // if (eleRelIso03DB(elIdx)                                          >= 0.212604) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.157160) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.273097) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.885860) return false;// abs(dz) 				    
	if (els_exp_innerlayers()       .at(elIdx)                        > 3        ) return false;// expectedMissingInnerHits
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else return false;
  return true;
}

bool isLooseElectronPOGphys14noIso(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){                                                    // Barrel 
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.010557) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.012442) return false;// abs(dEtaIn) 			   
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.072624) return false;// abs(dPhiIn) 			   
    if (els_hOverE()                                     .at(elIdx)   >= 0.121476) return false;// hOverE 				   
    // if (eleRelIso03DB(elIdx)                                          >= 0.120026) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.221803) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.022664) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.173670) return false;// abs(dz) 				   
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits 
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){       // Endcap
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.032602) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.010654) return false;// abs(dEtaIn) 			    
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.145129) return false;// abs(dPhiIn) 			    
    if (els_hOverE()                                     .at(elIdx)   >= 0.131862) return false;// hOverE 				    
    // if (eleRelIso03DB(elIdx)                                          >= 0.162914) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.142283) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.097358) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.198444) return false;// abs(dz) 				    
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else return false;
  return true;
}

bool isMediumElectronPOGphys14noIso(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){                                                    // Barrel 
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.010399) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.007641) return false;// abs(dEtaIn) 			   
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.032643) return false;// abs(dPhiIn) 			   
    if (els_hOverE()                                     .at(elIdx)   >= 0.060662) return false;// hOverE 				   
    // if (eleRelIso03DB(elIdx)                                          >= 0.097213) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.153897) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.011811) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.070775) return false;// abs(dz) 				   
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits 
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){       // Endcap
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.029524) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.009285) return false;// abs(dEtaIn) 			    
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.042447) return false;// abs(dPhiIn) 			    
    if (els_hOverE()                                     .at(elIdx)   >= 0.104263) return false;// hOverE 				    
    // if (eleRelIso03DB(elIdx)                                          >= 0.116708) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.137468) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.051682) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.180720) return false;// abs(dz) 				    
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else return false;
  return true;
}

bool isTightElectronPOGphys14noIso(unsigned int elIdx){
  if (fabs(els_etaSC().at(elIdx)) <= 1.479){                                                    // Barrel 
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.010181) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.006574) return false;// abs(dEtaIn) 			   
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.022868) return false;// abs(dPhiIn) 			   
    if (els_hOverE()                                     .at(elIdx)   >= 0.037553) return false;// hOverE 				   
    // if (eleRelIso03DB(elIdx)                                          >= 0.074355) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.131191) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.009924) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.015310) return false;// abs(dz) 				   
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits 
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else if ((fabs(els_etaSC().at(elIdx)) > 1.479) && (fabs(els_etaSC().at(elIdx)) < 2.5)){       // Endcap
    if (els_sigmaIEtaIEta_full5x5()                      .at(elIdx)   >= 0.028766) return false;// full5x5_sigmaIetaIeta   
    if (fabs(els_dEtaIn()                                .at(elIdx))  >= 0.005681) return false;// abs(dEtaIn) 			    
    if (fabs(els_dPhiIn()                                .at(elIdx))  >= 0.032046) return false;// abs(dPhiIn) 			    
    if (els_hOverE()                                     .at(elIdx)   >= 0.081902) return false;// hOverE 				    
    // if (eleRelIso03DB(elIdx)                                          >= 0.090185) return false;// PF isolation w/dBeta PU correction / pT (cone dR=0.3) 
	if (fabs( (1.0/els_ecalEnergy()                      .at(elIdx)) - 							                           
			  (els_eOverPIn().at(elIdx)/els_ecalEnergy() .at(elIdx))) >= 0.106055) return false;// ooEmooP				   
    if (fabs(els_dxyPV()            .at(elIdx))                       >= 0.027261) return false;// abs(d0)				   
    if (fabs(els_dzPV()             .at(elIdx))                       >= 0.147154) return false;// abs(dz) 				    
	if (els_exp_innerlayers()       .at(elIdx)                        > 1        ) return false;// expectedMissingInnerHits
	if (els_conv_vtx_flag()         .at(elIdx)                                   ) return false;// pass conversion veto    
  }
  else return false;
  return true;
}

float eleRelIso03(unsigned int elIdx, analysis_t analysis){
  if (analysis == HAD ) return eleRelIso03DB(elIdx);
  if (analysis == STOP) return eleRelIso03DB(elIdx);
  if (analysis == SS  ) return eleRelIso03EA(elIdx);
  if (analysis == ZMET) return eleRelIso03EA(elIdx);

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

float elRelIsoCustomCone(unsigned int elIdx, float dr, float deltaZCut){
  float chiso     = 0.;
  float nhiso     = 0.;
  float emiso     = 0.;
  for (unsigned int i=0; i<pfcands_particleId().size(); ++i){
    if ( fabs(ROOT::Math::VectorUtil::DeltaR(pfcands_p4().at(i),els_p4().at(elIdx)))>dr ) continue;  
    if ( fabs(pfcands_particleId().at(i))==211 && fabs(pfcands_dz().at(i)) < deltaZCut ) chiso+=pfcands_p4().at(i).pt();
    if ( fabs(pfcands_particleId().at(i))==130 ) nhiso+=pfcands_p4().at(i).pt();
    if ( fabs(pfcands_particleId().at(i))==22  ) emiso+=pfcands_p4().at(i).pt();
  }
  float absiso = chiso + std::max(float(0.0), nhiso + emiso);
  return absiso/(els_p4().at(elIdx).pt());
}
float elRelIsoCustomConeDB(unsigned int elIdx, float dr, float deltaZCut){
  float chiso     = 0.;
  float nhiso     = 0.;
  float emiso     = 0.;
  float deltaBeta = 0.;
  for (unsigned int i=0; i<pfcands_particleId().size(); ++i){
    if ( fabs(ROOT::Math::VectorUtil::DeltaR(pfcands_p4().at(i),els_p4().at(elIdx)))>dr ) continue;  
    if ( fabs(pfcands_particleId().at(i))==211 ) {
      if (fabs(pfcands_dz().at(i)) < deltaZCut) chiso+=pfcands_p4().at(i).pt();
      else deltaBeta+=pfcands_p4().at(i).pt();
    }
    if ( fabs(pfcands_particleId().at(i))==130 ) nhiso+=pfcands_p4().at(i).pt();
    if ( fabs(pfcands_particleId().at(i))==22  ) emiso+=pfcands_p4().at(i).pt();
  }
  float absiso = chiso + std::max(0.0, nhiso + emiso - 0.5 * deltaBeta);
  return absiso/(els_p4().at(elIdx).pt());
}
float elMiniRelIso(unsigned int idx, float deltaZCut){
  float pt = els_p4().at(idx).pt();
  float dr = 0.2;
  if (pt>50) dr = 10./pt;
  if (pt>200) dr = 0.05;
  return elRelIsoCustomCone(idx,dr,deltaZCut);
}

int eleTightID(unsigned int elIdx, analysis_t analysis){
  switch (analysis){
    case (POG):
      if (!isTightElectronPOG(elIdx)) return 3;
      if (!isMediumElectronPOG(elIdx)) return 2;
      if (!isLooseElectronPOG(elIdx)) return 1;
      if (!isVetoElectronPOG(elIdx)) return 0;
      break;
    case (SS):
      if (electronID(elIdx, SS_medium_v1)) return 2;
      if (electronID(elIdx, SS_fo_v1)) return 1;
      if (electronID(elIdx, SS_veto_v1)) return 0;
      break;
    case (HAD):
      if (electronID(elIdx, HAD_tight_v1)) return 3;
      if (electronID(elIdx, HAD_medium_v1)) return 2;
      if (electronID(elIdx, HAD_loose_v1)) return 1;
      if (electronID(elIdx, HAD_veto_v1)) return 0;
      break;
    case (STOP):
      if (electronID(elIdx, STOP_tight_v1)) return 3;
      if (electronID(elIdx, STOP_medium_v1)) return 2;
      if (electronID(elIdx, STOP_loose_v1)) return 1;
      if (electronID(elIdx, STOP_veto_v1)) return 0;
      break;
    case (ZMET):
      if (electronID(elIdx, ZMET_loose_v1)) return 0;
  }
  return -1;
}

bool threeChargeAgree(unsigned int elIdx){
  return els_isGsfCtfScPixChargeConsistent().at(elIdx);
}

int tightChargeEle(unsigned int elIdx){
  if (threeChargeAgree(elIdx))                                          return 2;
  else if (els_trk_charge().at(elIdx) == els_sccharge().at(elIdx))      return 1;
  else                                                                  return 0;
}
