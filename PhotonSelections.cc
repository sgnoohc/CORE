#include "PhotonSelections.h"
#include "Math/LorentzVector.h"
#include "Math/VectorUtil.h"

using namespace tas;

bool isLoosePhoton(unsigned int phIdx, analysis_t analysis, int version){
  // This is based on POG LOOSE, with an additional sieie sideband
  if (analysis == HAD){
    if (version == 1){
      if( fabs(photons_p4().at(phIdx).eta()) <= 1.479 ){
        if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.015) return false; // looser than POG (0.01) to get a sideband
        if(photons_full5x5_hOverEtowBC().at(phIdx) >= 0.0559) return false; 
        if(photons_haspixelSeed().at(phIdx)) return false;
        return true;
      } 
      else if( fabs(photons_p4().at(phIdx).eta()) > 1.479 && fabs(photons_p4().at(phIdx).eta())  < 2.5){
        if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.035) return false; // larger than POG (0.0321) to get a sideband
        if(photons_full5x5_hOverEtowBC().at(phIdx) >= 0.049) return false; 
        if(photons_haspixelSeed().at(phIdx)) return false;
        return true;
      } 
      else return false;
    }
    if (version == 2){
      if( fabs(photons_p4().at(phIdx).eta()) <= 1.479 ){
        if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.015) return false; // looser than POG (0.01) to get a sideband
        if(photons_full5x5_hOverEtowBC().at(phIdx) >= 0.048) return false; 
        if(photons_haspixelSeed().at(phIdx)) return false;
        return true;
      } 
      else if( fabs(photons_p4().at(phIdx).eta()) > 1.479 && fabs(photons_p4().at(phIdx).eta())  < 2.5){
        if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.035) return false; // larger than POG (0.0321) to get a sideband
        if(photons_full5x5_hOverEtowBC().at(phIdx) >= 0.069) return false; 
        if(photons_haspixelSeed().at(phIdx)) return false;
        return true;
      } 
      else return false;
    } 
  }
  else {
    std::cerr << "CORE::PhotonSelection -- Photon selection not implemented for analysis " << analysis << std::endl;
    std::cerr << "CORE::PhotonSelection -- I will return true." << std::endl;
  }

  return true;
}

bool isTightPhoton(unsigned int phIdx, analysis_t analysis, int version){
  // This should be the same as POG LOOSE: 
  //https://twiki.cern.ch/twiki/bin/view/CMS/CutBasedPhotonIdentificationRun2
  if (analysis == HAD){
    if (version == 1){
      if (!isLoosePhoton(phIdx, HAD)) return false;
      if( fabs(photons_p4().at(phIdx).eta()) <= 1.479 ){
        if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.010) return false; 
        return true;
      } 
      else if( fabs(photons_p4().at(phIdx).eta()) > 1.479 && fabs(photons_p4().at(phIdx).eta())  < 2.5){
        if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.0321) return false; 
        return true;
      } 
      else return false;
    }
    if (version == 2){
      if (!isLoosePhoton(phIdx, HAD, 2)) return false;
      if( fabs(photons_p4().at(phIdx).eta()) <= 1.479 ){
        if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.0106) return false; 
        return true;
      } 
      else if( fabs(photons_p4().at(phIdx).eta()) > 1.479 && fabs(photons_p4().at(phIdx).eta())  < 2.5){
        if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.0266) return false; 
        return true;
      } 
      else return false;
    } 
  }
  else {
    std::cerr << "CORE::PhotonSelection -- Photon selection not implemented for analysis " << analysis << std::endl;
    std::cerr << "CORE::PhotonSelection -- I will return true." << std::endl;
  } 

  return true;
}

bool photonID(unsigned int phIdx, id_level_t id_level){
    
  // analysis_t analysis = whichAnalysis(id_level);

  switch (id_level){

	///////////////////
	// MET Templates //
	///////////////////

  case(ZMET_photon_v1):

	if( !isTemplatePhoton( phIdx ) ) return false;
	// Following cuts done in analysis code.
	// match to pfjet w/ neutral EM fraction > 70%
	// reject photons within electron with pT > 10 within cone of dR < 0.2
	// Reject photons aligned to MET within 0.14 radians in phi
	else return true;
	break;

	///////////////
	/// Default ///
	///////////////

  default:
	{
	  cout << "Warning! Photon ID not defined for this id_level!" << endl;
	  return false;
	}

  }//switch
  return true;
}

bool isTemplatePhoton( unsigned int phIdx ) {
  if( fabs(photons_p4()            .at(phIdx).pt())  <= 22.0 ) return false; // photon pT > 22 GeV
  if( fabs(photons_p4()            .at(phIdx).eta()) >= 2.4  ) return false; // photon eta < 2.4
  if(photons_full5x5_hOverEtowBC() .at(phIdx)        >= 0.1  ) return false; // hOverE < 0.1
  if(photons_haspixelSeed()        .at(phIdx)                ) return false; // veto pixel seed
  return true;
}
