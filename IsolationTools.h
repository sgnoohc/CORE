#ifndef ISOLATIONTOOLS_H
#define ISOLATIONTOOLS_H

#include "CMS3.h"
#include "Base.h"

bool passPtRel(int id, int idx, float cut, bool subtractLep);
bool passMultiIso(float cutMiniIso, float cutPtRatio, float cutPtRel, float miniIsoValue, float ptRatioValue, float ptRelValue);
bool passMultiIso(int id, int idx, float cutMiniIso, float cutPtRatio, float cutPtRel);

float ptRel(const LorentzVector& lepp4, const LorentzVector& jetp4, bool subtractLep = false);
float getPtRel(int id, int idx, bool subtractLep);
int closestJetIdx(const LorentzVector& lep_p4, float dRmin=0.4, float maxAbsEta=2.4);
LorentzVector closestJet(const LorentzVector& lep_p4, float dRmin=0.4, float maxAbsEta=2.4, int whichCorr = 1);  

float getMiniDR(float pt);

//Muon
float muRelIso03DB(unsigned int muIdx);
float muRelIso04DB(unsigned int muIdx);
float muRelIso03(unsigned int muIdx, analysis_t analysis);
float muRelIso04(unsigned int muIdx, analysis_t analysis);
float muEA03(unsigned int muIdx);
float muRelIso03EA(unsigned int muIdx);
float muRelIsoCustomCone(unsigned int idx, float dr, bool useVetoCones=true, float ptthresh = 0.5, bool useDBcor=false, bool useEAcor=false, float mindr = -1.);
float muMiniRelIso(unsigned int idx, bool useVetoCones=true, float ptthresh = 0.5, bool useDBcor=false, bool useEAcor=false);
float muMiniRelIsoCMS3_EA(unsigned int idx);
float muMiniRelIsoCMS3_DB(unsigned int idx);
float muRelIso03_noCorr(unsigned int muIdx);
float muRelIsoAn04(unsigned int idx, bool useDBcor= true);


//Electron
float eleRelIso03(unsigned int elIdx, analysis_t analysis);
float eleRelIso03DB(unsigned int elIdx);
float elEA03(unsigned int elIdx);
float el90ContEA03(unsigned int elIdx);
float eleRelIso03EA(unsigned int elIdx);
float eleRelIso03_90ContEA(unsigned int elIdx);
float elRelIsoCustomCone(unsigned int idx, float dr, bool useVetoCones=true, float ptthresh = 0.0, bool useDBcor=false, bool useEAcor=false, float mindr = -1.);
float elMiniRelIso(unsigned int idx, bool useVetoCones=true, float ptthresh = 0.0, bool useDBcor=false, bool useEAcor=false);
float elMiniRelIsoCMS3_EA(unsigned int idx);
float elMiniRelIsoCMS3_DB(unsigned int idx);
float eleRelIso03_noCorr(unsigned int elIdx);
float elRelIsoAn04(unsigned int idx, bool useDBcor= true);

//Photon
float photon_CHEA03(   int photonIdx );
float photon_NHEA03(   int photonIdx );
float photon_EMEA03(   int photonIdx );
float photonCHIso03EA( int photonIdx );
float photonNHIso03EA( int photonIdx );
float photonEMIso03EA( int photonIdx );


#endif
