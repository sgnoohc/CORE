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

//Tightest ID passed by muon
int muTightID(unsigned int muIdx, analysis_t analysis);

// tight charge requirement
int tightChargeMuon(unsigned int muIdx);

#endif
