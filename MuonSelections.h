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
float muRelIsoCustomCone(unsigned int idx, float dr, float deltaZCut=0.1);
float muRelIsoCustomConeDB(unsigned int idx, float dr, float deltaZCut=0.1);
float muMiniRelIso(unsigned int idx, float deltaZCut=0.1);

//Tightest ID passed by muon
int muTightID(unsigned int muIdx, analysis_t analysis);

#endif
