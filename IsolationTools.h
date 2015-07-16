#ifndef ISOLATIONTOOLS_H
#define ISOLATIONTOOLS_H

#include "CMS3.h"
#include "Base.h"

bool passPtRel(int id, int idx, float cut, bool subtractLep);
bool passMultiIso(float cutMiniIso, float cutPtRatio, float cutPtRel, float miniIsoValue, float ptRatioValue, float ptRelValue);
bool passMultiIso(int id, int idx, float cutMiniIso, float cutPtRatio, float cutPtRel);

float ptRel(const LorentzVector& lepp4, const LorentzVector& jetp4, bool subtractLep = false);
float getPtRel(int id, int idx, bool subtractLep);
LorentzVector closestJet(const LorentzVector& lep_p4, float dRmin=0.4, float maxAbsEta=2.4);

//Muon
float muRelIso03DB(unsigned int muIdx);
float muRelIso04DB(unsigned int muIdx);
float muRelIso03(unsigned int muIdx, analysis_t analysis);
float muRelIso04(unsigned int muIdx, analysis_t analysis);
float muEA03(unsigned int muIdx);
float muRelIso03EA(unsigned int muIdx);
float muRelIsoCustomCone(unsigned int idx, float dr, bool useVetoCones=true, float ptthresh = 0.5, bool useDBcor=false, bool useEAcor=false);
float muMiniRelIso(unsigned int idx, bool useVetoCones=true, float ptthresh = 0.5, bool useDBcor=false, bool useEAcor=false);
float muMiniRelIsoCMS3_EA(unsigned int idx);
float muMiniRelIsoCMS3_DB(unsigned int idx);


//Electron
float eleRelIso03(unsigned int elIdx, analysis_t analysis);
float eleRelIso03DB(unsigned int elIdx);
float elEA03(unsigned int elIdx);
float eleRelIso03EA(unsigned int elIdx);
float elRelIsoCustomCone(unsigned int idx, float dr, bool useVetoCones=true, float ptthresh = 0.0, bool useDBcor=false, bool useEAcor=false);
float elMiniRelIso(unsigned int idx, bool useVetoCones=true, float ptthresh = 0.0, bool useDBcor=false, bool useEAcor=false);
float elMiniRelIsoCMS3_EA(unsigned int idx);
float elMiniRelIsoCMS3_DB(unsigned int idx);

#endif
