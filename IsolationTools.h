#ifndef ISOLATIONTOOLS_H
#define ISOLATIONTOOLS_H

#include "CMS3.h"

bool passPtRel(int id, int idx, float cut, bool subtractLep);
bool passMultiIso(int id, int idx, float cutMiniIso, float cutPtRatio, float cutPtRel);

float ptRel(const LorentzVector& lepp4, const LorentzVector& jetp4, bool subtractLep = false);
float getPtRel(int id, int idx, bool subtractLep);
LorentzVector closestJet(const LorentzVector& lep_p4, float dRmin=0.4, float maxAbsEta=2.4);

#endif
