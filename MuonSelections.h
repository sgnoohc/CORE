#ifndef MUONSELECTIONS_H
#define MUONSELECTIONS_H
#include "CMS3.h"
#include "TString.h"
#include "Base.h"

float muRelIso03(unsigned int, analysis_t);
float muRelIso03EA(unsigned int);
float muRelIso03DB(unsigned int);
float muRelIso04DB(unsigned int);

bool isLooseMuon(unsigned int, analysis_t);
bool isTightMuon(unsigned int, analysis_t);

int muTightID(unsigned int, analysis_t);

bool isMuonFO(unsigned int);
bool isGoodVetoMuon(unsigned int);
bool isFakableMuon(unsigned int);
bool isGoodMuon(unsigned int);

#endif
