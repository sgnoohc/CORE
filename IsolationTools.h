#ifndef ISOLATIONTOOLS_H
#define ISOLATIONTOOLS_H

#include "CMS3.h"

float ptRel(const LorentzVector& lepp4, const std::vector<LorentzVector>& lepjets, bool subtractLep = false);

#endif
