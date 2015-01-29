#ifndef SSSELECTIONS_H
#define SSSELECTIONS_H
#include "CMS3.h"
#include "ElectronSelections.h"
#include "MuonSelections.h"

bool makesExtraGammaStar(int);
bool makesExtraZ(int);
bool isIsolatedLepton(int, int);
bool isGoodLepton(int, int);
bool isDenominatorLepton(int, int);
bool hypsFromFirstGoodVertex(size_t, float = 1.0);

#endif
