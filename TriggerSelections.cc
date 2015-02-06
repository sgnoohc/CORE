#include "TriggerSelections.h"

using namespace tas;

bool passesTriggerVeryLowPt(int hyp_type){
  if (!evt_isRealData()) return true; 

  if (hyp_type == 0){
      if (passUnprescaledHLTTriggerPattern("HLT_DoubleRelIso1p0Mu5_Mass8_PFNoPUHT175_v")) {return true;}
      if (passUnprescaledHLTTriggerPattern("HLT_DoubleRelIso1p0Mu5_Mass8_PFHT175_v"    )) {return true;}
  }

  else if ((hyp_type == 1 || hyp_type == 2)){
      if (passUnprescaledHLTTriggerPattern("HLT_RelIso1p0Mu5_Ele8_CaloIdT_TrkIdVL_Mass8_PFNoPUHT175_v")) {return true;}
      if (passUnprescaledHLTTriggerPattern("HLT_RelIso1p0Mu5_Ele8_CaloIdT_TrkIdVL_Mass8_PFHT175_v"    )) {return true;}
  }

  else if (hyp_type == 3){
      if (passUnprescaledHLTTriggerPattern("HLT_DoubleEle8_CaloIdT_TrkIdVL_Mass8_PFNoPUHT175_v")) {return true;}
      if (passUnprescaledHLTTriggerPattern("HLT_DoubleEle8_CaloIdT_TrkIdVL_Mass8_PFHT175_v"    )) {return true;}
  }

  return false;
}

bool passUnprescaledHLTTrigger(const char* arg){

  //Put the trigger name into a string
  TString HLTTrigger( arg );

  //Did the trigger pass?
  if ( !(passHLTTrigger(HLTTrigger)) ) return false;

  //The trigger passed, check the pre-scale
  int trigIndx = -1;
  vector<TString>::const_iterator begin_it = hlt_trigNames().begin();
  vector<TString>::const_iterator end_it   = hlt_trigNames().end();
  vector<TString>::const_iterator found_it = find(begin_it, end_it, HLTTrigger );
  if( (found_it != end_it) ){
    trigIndx = found_it - begin_it;
  }
  else {
    cout << "passUnprescaledTrigger: Cannot find Trigger " << arg << endl;
    return false;
  }

  if( strcmp( arg , hlt_trigNames().at(trigIndx) ) != 0 ){
    cout << "Error! trig names don't match" << endl;
    cout << "Found trig name " << hlt_trigNames().at(trigIndx) << endl;
    cout << "Prescale        " << hlt_prescales().at(trigIndx) << endl;
    exit(0);
  }

  if( hlt_prescales().at(trigIndx) == 1) return true;

  return false;

}

bool passUnprescaledHLTTriggerPattern(const char* arg){
  TString HLTTriggerPattern(arg);
  TString HLTTrigger = triggerName( HLTTriggerPattern );
  if( HLTTrigger.Contains("TRIGGER_NOT_FOUND")) return false;
  return passUnprescaledHLTTrigger( HLTTrigger );
}

bool passHLTTriggerPattern(const char* arg){
  TString HLTTriggerPattern(arg);
  TString HLTTrigger = triggerName( HLTTriggerPattern );
  if( HLTTrigger.Contains("TRIGGER_NOT_FOUND")) return false;
  return passHLTTrigger( HLTTrigger );
}

TString triggerName(TString triggerPattern){

  bool    foundTrigger  = false;
  TString exact_hltname = "";

  for( unsigned int itrig = 0 ; itrig < hlt_trigNames().size() ; ++itrig ){
    if( TString( hlt_trigNames().at(itrig) ).Contains( triggerPattern ) ){
      foundTrigger  = true;
      exact_hltname = hlt_trigNames().at(itrig);
      break;
    }
  }

  if( !foundTrigger) return "TRIGGER_NOT_FOUND";

  return exact_hltname;

}
