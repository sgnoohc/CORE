#ifndef ELECTRONSELECTIONS_H
#define ELECTRONSELECTIONS_H
#include "CMS3.h"
#include "TString.h"
#include "Base.h"

bool electronID(unsigned int, id_level_t);

int eleTightID(unsigned int, analysis_t);

float eleRelIso03DB(unsigned int);
float eleRelIso03EA(unsigned int);
float eleRelIso03(unsigned int, analysis_t);

bool isFakableElectronNoIso(unsigned int);
bool isFakableElectron(unsigned int);
bool isGoodElectronNoIso(unsigned int); 
bool isGoodElectron(unsigned int);        
bool isGoodVetoElectronNoIso(unsigned int);
bool isGoodVetoElectron(unsigned int);
bool threeChargeAgree(unsigned int);


#endif
