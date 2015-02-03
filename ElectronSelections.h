#ifndef ELECTRONSELECTIONS_H
#define ELECTRONSELECTIONS_H
#include "CMS3.h"
#include "TString.h"
#include "Base.h"

//POG IDs
bool isVetoElectronPOG(unsigned int elIdx);
bool isLooseElectronPOG(unsigned int elIdx);
bool isMediumElectronPOG(unsigned int elIdx);
bool isTightElectronPOG(unsigned int elIdx);

//Main Electron ID function
bool electronID(unsigned int elIdx, id_level_t id_level);

//Isolation
float eleRelIso03(unsigned int elIdx, analysis_t analysis);
float eleRelIso03DB(unsigned int elIdx);
float eleRelIso03EA(unsigned int elIdx);

//Tightest ID passed by electron
int eleTightID(unsigned int elIdx, analysis_t analysis);

//Only used for SS analysis
bool isGoodVetoElectronNoIso(unsigned int elidx);
bool isGoodVetoElectron(unsigned int elidx);
bool isFakableElectronNoIso(unsigned int elidx);
bool isFakableElectron(unsigned int elidx);
bool isGoodElectronNoIso(unsigned int elidx);
bool isGoodElectron(unsigned int elidx);
bool threeChargeAgree(unsigned int elIdx); 


#endif
