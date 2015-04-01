#ifndef MUONSELECTIONS_H
#define MUONSELECTIONS_H
#include "CMS3.h"
#include "TString.h"
#include "Base.h"

//POG IDs
bool isLooseMuonPOG(unsigned int muIdx);
bool isMediumMuonPOG(unsigned int muIdx);
bool isTightMuonPOG(unsigned int muIdx);

//Main Muon ID function
bool muonID(unsigned int muIdx, id_level_t id_level);

//Isolation
float muRelIso03DB(unsigned int muIdx);
float muRelIso04DB(unsigned int muIdx);
float muRelIso03(unsigned int muIdx, analysis_t analysis);
float muRelIso04(unsigned int muIdx, analysis_t analysis);
float muRelIso03EA(unsigned int muIdx);
float muRelIsoCustomCone(unsigned int idx, float dr, bool useVetoCones=true, bool useDBcor=false);
float muMiniRelIso(unsigned int idx, bool useVetoCones=true, bool useDBcor=false);

//Tightest ID passed by muon
int muTightID(unsigned int muIdx, analysis_t analysis);

// tight charge requirement
int tightChargeMuon(unsigned int muIdx);

#endif
