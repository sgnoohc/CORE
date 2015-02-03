#ifndef MUONSELECTIONS_H
#define MUONSELECTIONS_H
#include "CMS3.h"
#include "TString.h"
#include "Base.h"

//POG IDs
bool isLooseMuonPOG(unsigned int muIdx);
bool isTightMuonPOG(unsigned int muIdx);

//Main Muon ID function
bool muonID(unsigned int muIdx, id_level_t id_level);

//Isolation
float muRelIso03DB(unsigned int muIdx);
float muRelIso04DB(unsigned int muIdx);
float muRelIso03(unsigned int muIdx, analysis_t analysis);
float muRelIso03EA(unsigned int muIdx);

//Tightest ID passed by muon
int muTightID(unsigned int muIdx, analysis_t analysis);

//Only used for SS analysis
bool isGoodVetoMuonNoIso(unsigned int muidx);
bool isGoodVetoMuon(unsigned int muidx);
bool isFakableMuonNoIso(unsigned int muidx);
bool isFakableMuon(unsigned int muidx);
bool isGoodMuonNoIso(unsigned int muidx);
bool isGoodMuon(unsigned int muidx);

#endif
