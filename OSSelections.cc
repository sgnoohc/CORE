#include <stdexcept>

#include "OSSelections.h"
#include "MuonSelections.h"
#include "ElectronSelections.h"
#include "PhotonSelections.h"

#include "Math/VectorUtil.h"

using namespace tas;

//Not Currently in use
bool overlapMuon_ZMET_v1( int index , float ptcut ){
  for( unsigned int muind = 0; muind < cms3.mus_p4().size(); muind++ ){
    float dr = ROOT::Math::VectorUtil::DeltaR( cms3.els_p4().at(index) , cms3.mus_p4().at(muind) );    
    if( dr > 0.1                             ) continue;
    if( cms3.mus_p4().at(muind).pt() < ptcut ) continue;
	if( !muonID( muind, ZMET_loose_v1 )      ) continue;
    // if ( (((cms3.mus_type().at(muind)) & (1<<1)) == 0) && (((cms3.mus_type().at(muind)) & (1<<2)) == 0) ) continue;   
    return true;
  }
  return false;
}
//~-~-~-~-~-~-~-~-~-~//
//Electron selections//
//~-~-~-~-~-~-~-~-~-~//
bool passElectronSelection_ZMET_v1_NoIso(int index, bool vetoTransition, bool eta24 ){
  if( fabs(cms3.els_p4().at(index).pt()) < 15.0    ) return false; // pT > 15 GeV - Minimum pT cut
  if( vetoTransition
	  && fabs(cms3.els_etaSC().at(index)) > 1.4442
	  && fabs(cms3.els_etaSC().at(index)) < 1.566  ) return false; // veto x-ition region
  if( eta24
	  && fabs(cms3.els_p4()[index].eta()) > 2.4    ) return false; // eta < 2.4
  // if( overlapMuon_ZMet2012_v1(index,10.0)          ) return false; // overlap removal
  if( !electronID( index, ZMET_loose_noiso_v1 )    ) return false; // Electron ID  
  return true;
}

bool passElectronSelection_ZMET_v1(int index, bool vetoTransition, bool eta24 ){
  if( fabs(cms3.els_p4().at(index).pt()) < 15.0    ) return false; // pT > 15 GeV - Minimum pT cut
  if( vetoTransition
	  && fabs(cms3.els_etaSC().at(index)) > 1.4442
	  && fabs(cms3.els_etaSC().at(index)) < 1.566  ) return false; // veto x-ition region
  if( eta24
	  && fabs(cms3.els_p4()[index].eta()) > 2.4    ) return false; // eta < 2.4
  // if( overlapMuon_ZMet2012_v1(index,10.0)          ) return false; // overlap removal
  if( !electronID( index, ZMET_loose_v1 )          ) return false; // Electron ID  
  return true;
}

//~-~-~-~-~-~-~-~//
//Muon selections//
//~-~-~-~-~-~-~-~//
bool passMuonSelection_ZMET_v1_NoIso(int index, bool vetoTransition, bool eta24 ){
  if( fabs(cms3.mus_p4().at(index).pt()) < 10.0       ) return false; // pT > 10 GeV - Minimum pT cut
  if( vetoTransition
	  && fabs(cms3.mus_p4().at(index).eta()) > 1.4442
	  && fabs(cms3.mus_p4().at(index).eta()) < 1.566  ) return false; // veto x-ition region
  if( eta24
	  && fabs(cms3.mus_p4().at(index).eta()) > 2.4    ) return false; // eta < 2.4
  if( !muonID( index, ZMET_tight_noiso_v1 )           ) return false; // tight Muon ID  
  return true;
}

bool passMuonSelection_ZMET_v1(int index, bool vetoTransition, bool eta24 ){
  if( fabs(cms3.mus_p4().at(index).pt()) < 10.0       ) return false; // pT > 10 GeV - Minimum pT cut
  if( vetoTransition
	  && fabs(cms3.mus_p4().at(index).eta()) > 1.4442
	  && fabs(cms3.mus_p4().at(index).eta()) < 1.566  ) return false; // veto x-ition region
  if( eta24
	  && fabs(cms3.mus_p4().at(index).eta()) > 2.4    ) return false; // eta < 2.4
  if( !muonID( index, ZMET_tight_v1 )                 ) return false; // tight Muon ID  
  return true;
}

bool passPhotonSelection_ZMET_v1(int index, bool vetoTransition, bool eta24 ){
  if( fabs(cms3.photons_p4().at(index).pt()) < 22.0       ) return false; // pT > 22 GeV - Minimum pT cut
  if( vetoTransition
	  && fabs(cms3.photons_p4().at(index).eta()) > 1.4442
	  && fabs(cms3.photons_p4().at(index).eta()) < 1.566  ) return false; // veto x-ition region
  if( eta24
	  && fabs(cms3.photons_p4().at(index).eta()) > 2.4    ) return false; // eta < 2.4
  if( !photonID(index, ZMET_photon_v1 ) ) return false;
  return true;
}
