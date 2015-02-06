#ifndef SSSELECTIONS_H
#define SSSELECTIONS_H
#include "CMS3.h"
#include "ElectronSelections.h"
#include "MuonSelections.h"
#include "JetSelections.h"
#include "MCSelections.h"

const static float ptCutHigh = 25.;
const static float ptCutLow = 10.;

enum anal_type_t { HighHigh = 0, HighLow = 1, LowLow = 2 };

bool makesExtraGammaStar(int iHyp);
bool makesExtraZ(int iHyp);
bool isIsolatedLepton(int id, int idx);
bool isGoodLepton(int id, int idx);
bool isGoodLeptonNoIso(int id, int idx);
bool isDenominatorLepton(int id, int idx);
bool hypsFromFirstGoodVertex(size_t hypIdx, float dz_cut = 1.0);
void passesBaselineCuts(int njets, int nbtag, float met, float ht, unsigned int& analysisBitMask);
int baselineRegion(int nbtag);
void passesSignalRegionCuts(float ht, float met, unsigned int& analysisBitMask);
int signalRegion(int njets, int nbtag, float met, float ht, int njetscut = 4, float metcut = 120, float htcut = 400);

bool isGoodVetoElectronNoIso(unsigned int elidx);
bool isGoodVetoElectron(unsigned int elidx);
bool isFakableElectronNoIso(unsigned int elidx);
bool isFakableElectron(unsigned int elidx);
bool isGoodElectronNoIso(unsigned int elidx);
bool isGoodElectron(unsigned int elidx);

bool isGoodVetoMuonNoIso(unsigned int muidx);
bool isGoodVetoMuon(unsigned int muidx);
bool isFakableMuonNoIso(unsigned int muidx);
bool isFakableMuon(unsigned int muidx);
bool isGoodMuonNoIso(unsigned int muidx);
bool isGoodMuon(unsigned int muidx);

#endif
