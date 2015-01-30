#ifndef SSSELECTIONS_H
#define SSSELECTIONS_H
#include "CMS3.h"
#include "ElectronSelections.h"
#include "MuonSelections.h"
#include "JetSelections.h"
#include "MCSelections.h"

const static float ptCutHigh = 25.;
const static float ptCutLow = 10.;

enum AnalysisBit { HighHigh = 0, HighLow = 1, LowLow = 2 };

bool makesExtraGammaStar(int);
bool makesExtraZ(int);
bool isIsolatedLepton(int id, int idx);
bool isGoodLepton(int id, int idx);
bool isGoodLeptonNoIso(int id, int idx);
bool isDenominatorLepton(int id, int idx);
bool hypsFromFirstGoodVertex(size_t, float = 1.0);

void passesBaselineCuts(int njets, int nbtag, float met, float ht, unsigned int& analysisBitMask);
int baselineRegion(int nbtag);
void passesSignalRegionCuts(float ht, float met, unsigned int& analysisBitMask);
int signalRegion(int njets, int nbtag, float met, float ht, int njetscut=4, float metcut=120, float htcut=400);

#endif
