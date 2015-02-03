#include "PhotonSelections.h"
#include "Math/LorentzVector.h"
#include "Math/VectorUtil.h"

using namespace tas;

bool isLoosePhoton(unsigned int phIdx, analysis_t analysis){

  if (analysis == HAD) {
    if( fabs(photons_p4().at(phIdx).eta()) <= 1.479 ){
      if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.012) return false; // looser than POG (0.01) to get a sideband
      if(photons_full5x5_hOverEtowBC().at(phIdx) >= 0.0559) return false; 
      if(photons_haspixelSeed().at(phIdx)) return false;
      return true;
      
    } else if( fabs(photons_p4().at(phIdx).eta()) > 1.479 && fabs(photons_p4().at(phIdx).eta())  < 2.5){
      if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.035) return false; // larger than POG (0.0321) to get a sideband
      if(photons_full5x5_hOverEtowBC().at(phIdx) >= 0.049) return false; 
      if(photons_haspixelSeed().at(phIdx)) return false;
      return true;
      
    } else return false;
  } else {
    std::cerr << "CORE::PhotonSelection -- Photon selection not implemented for analysis " << analysis << std::endl;
    std::cerr << "CORE::PhotonSelection -- I will return true."
    return true;
  }
}

bool isTightPhoton(unsigned int phIdx, analysis_t analysis_t){
    
  if (analysis == HAD) {
    if (!isLoosePhoton(phIdx)) return false;
    
    if( fabs(photons_p4().at(phIdx).eta()) <= 1.479 ){
      if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.010) return false; 
      return true;
      
    } else if( fabs(photons_p4().at(phIdx).eta()) > 1.479 && fabs(photons_p4().at(phIdx).eta())  < 2.5){
      if(photons_full5x5_sigmaIEtaIEta().at(phIdx) >= 0.0321) return false; 
      return true;
      
    } else return false;
  } else {
    std::cerr << "CORE::PhotonSelection -- Photon selection not implemented for analysis " << analysis << std::endl;
    std::cerr << "CORE::PhotonSelection -- I will return true."
    return true;
  } 
}
