#ifndef ELECTRONSELECTIONS_H
#define ELECTRONSELECTIONS_H
#include "CMS3.h"
#include "TString.h"
#include "Base.h"

bool isVetoElectron(unsigned int, analysis_t);
bool isLooseElectron(unsigned int, analysis_t);
bool isMediumElectron(unsigned int, analysis_t);
bool isTightElectron(unsigned int, analysis_t);

int eleTightID(unsigned int, analysis_t);

float eleRelIso03DB(unsigned int);
float eleRelIso03EA(unsigned int);
float eleRelIso03(unsigned int, analysis_t);

bool isFakableElectron(unsigned int);
bool isGoodElectron(unsigned int);        
bool isGoodVetoElectron(unsigned int);
bool threeChargeAgree(unsigned int);


#endif
