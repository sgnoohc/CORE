#include <stdexcept>

#include "VVVSelections.h"
#include "MuonSelections.h"
#include "ElectronSelections.h"

#include "Math/VectorUtil.h"

using namespace tas;

//~-~-~-~-~-~-~-~-~-~//
//Electron selections//
//~-~-~-~-~-~-~-~-~-~//
bool passElectronSelection_VVV(int index){
  return passElectronSelection_VVV_v1( index, true, true );
}
bool passElectronSelection_VVV_v1(int index, bool vetoTransition, bool eta24){
  if( fabs(cms3.els_p4().at(index).pt()) < 10.0 ) return false; // pT > 10 GeV - Minimum pT cut
  if( vetoTransition && fabs(cms3.els_p4().at(index).eta()) > 1.4 && fabs(cms3.els_p4().at(index).eta()) < 1.6 ) return false; // veto x-ition region
  if( eta24 && fabs(cms3.els_p4()[index].eta()) > 2.5 ) return false; // eta < 2.5
  if( !electronID( index, VVV_baseline ) ) return false; // Electron ID  
  return true;
}

//~-~-~-~-~-~-~-~//
//Muon selections//
//~-~-~-~-~-~-~-~//
bool passMuonSelection_VVV(int index){
  return passMuonSelection_VVV_v1( index, true, true );
}

bool passMuonSelection_VVV_v1(int index, bool vetoTransition, bool eta24){
  if( fabs(cms3.mus_p4().at(index).pt()) < 10.0 ) return false; // pT > 10 GeV - Minimum pT cut
  if( vetoTransition && fabs(cms3.mus_p4().at(index).eta()) > 1.4 && fabs(cms3.mus_p4().at(index).eta()) < 1.6 ) return false; // veto x-ition region
  if( eta24 && fabs(cms3.mus_p4()[index].eta()) > 2.5 ) return false; // eta < 2.5
  if( !muonID( index, VVV_baseline ) ) return false; // Muon ID  
  return true;
}
