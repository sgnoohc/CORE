#ifndef SSSELECTIONS_H
#define SSSELECTIONS_H
#include "CMS3.h"
#include "ElectronSelections.h"
#include "MuonSelections.h"
#include "MetSelections.h"
#include "JetSelections.h"
#include "VertexSelections.h"
#include "MCSelections.h"

const static float ptCutHigh = 25.;
const static float ptCutLow = 10.;

//Enums
enum anal_type_t { HighHigh = 0, HighLow = 1, LowLow = 2 };
enum hyp_type_t { EE, MM, EM, UNASSIGNED }; 
//fixme: put WF and FSR in different categories
enum LeptonCategories { Prompt = 0, PromptWS = 1, PromptWF = 2, PromptFSR = 2, 
			FakeLightTrue = 3, FakeC = 4, FakeB = 5, FakeLightFake = 6, FakeHiPtGamma = 7, 
			FakeUnknown = 8, FakeLowPtGamma = 9, All9999 = 10,
			Other = 11, End = 12};

//Structs
struct hyp_result_t { int best_hyp; int hyp_class; };
struct particle_t { int id; LorentzVector p4; int idx; };
struct Lep;
struct DilepHyp;
struct Jet;

//helper function for sign
template <typename T> int sgn(T val){
    return (T(0) < val) - (val < T(0));
}

//Object selections
bool isIsolatedLepton(int id, int idx);
bool isGoodLepton(int id, int idx);
bool isGoodLeptonNoIso(int id, int idx);
bool isDenominatorLepton(int id, int idx);
float computePtRel(Lep lep, vector<Jet>& lepjets, bool subtractLep);

//Hyp selections
bool makesExtraGammaStar(int iHyp);
bool makesExtraZ(int iHyp);
bool hypsFromFirstGoodVertex(size_t hypIdx, float dz_cut = 1.0);
hyp_result_t chooseBestHyp(bool verbose=false);
int isGoodHyp(int iHyp, int analType = 2, bool verbose=false);
std::pair<particle_t, int> getThirdLepton(int hyp);
std::vector<particle_t> getGenPair(bool verbose=false);
std::vector<Lep> getBestSSLeps(std::vector<Lep> leps);//to be remove/merged with above

//Signal region selections
unsigned int analysisCategory(Lep lep1, Lep lep2);
void passesBaselineCuts(int njets, int nbtag, float met, float ht, unsigned int& analysisBitMask);
int baselineRegion(int nbtag);
void passesSignalRegionCuts(float ht, float met, unsigned int& analysisBitMask);
int signalRegion(int njets, int nbtag, float met, float ht, int njetscut = 4, float metcut = 120, float htcut = 400);
float computeLD(DilepHyp hyp, vector<Jet> alljets, float met, float minmt);

//More Lepton selections
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

//MC truth functions
int lepMotherID(Lep lep);

//Sorting functions
bool ptsort (int i,int j);
bool lepsort (Lep i,Lep j);
bool jetptsort (Jet i,Jet j);

//Definition of structs
struct Lep {
  Lep(int pdgid, int idxx):pdgid_(pdgid),idx_(idxx){}
  int charge() {return -1*pdgid_/abs(pdgid_);}
  int pdgId() {return pdgid_;}
  int idx() {return idx_;}
  float pt() {return abs(pdgid_)==11 ? cms3.els_p4().at(idx_).pt() : cms3.mus_p4().at(idx_).pt();}
  float eta() {return abs(pdgid_)==11 ? cms3.els_p4().at(idx_).eta() : cms3.mus_p4().at(idx_).eta();}
  LorentzVector p4() {return abs(pdgid_)==11 ? cms3.els_p4().at(idx_) : cms3.mus_p4().at(idx_);}
  float relIso03() { return abs(pdgid_)==11 ? eleRelIso03(idx_, SS) : muRelIso03(idx_, SS);}
  float miniRelIso() { return abs(pdgid_)==11 ? elMiniRelIso(idx_) : muMiniRelIso(idx_);}
  float dxyPV() { return abs(pdgid_)==11 ? cms3.els_dxyPV().at(idx_) : cms3.mus_dxyPV().at(idx_);}
  float dzPV() { return abs(pdgid_)==11 ? cms3.els_dzPV().at(idx_) : cms3.mus_dzPV().at(idx_);}
  float d0Err() { return abs(pdgid_)==11 ? cms3.els_d0Err().at(idx_) : cms3.mus_d0Err().at(idx_);}
  float ip3d() { return abs(pdgid_)==11 ? cms3.els_ip3d().at(idx_) : cms3.mus_ip3d().at(idx_);}
  float ip3dErr() { return abs(pdgid_)==11 ? cms3.els_ip3derr().at(idx_) : cms3.mus_ip3derr().at(idx_);}
  int mc3_id() {return abs(pdgid_)==11 ? cms3.els_mc3_id().at(idx_) : cms3.mus_mc3_id().at(idx_);}
  int mc3idx() {return abs(pdgid_)==11 ? cms3.els_mc3idx().at(idx_) : cms3.mus_mc3idx().at(idx_);}
  int mc3_motherid() {return abs(pdgid_)==11 ? cms3.els_mc3_motherid().at(idx_) : cms3.mus_mc3_motherid().at(idx_);}
  int mc3_motheridx() {return abs(pdgid_)==11 ? cms3.els_mc3_motheridx().at(idx_) : cms3.mus_mc3_motheridx().at(idx_);}
  int mc_id() { return abs(pdgid_)==11 ? cms3.els_mc_id().at(idx_) : cms3.mus_mc_id().at(idx_);}
  int mcidx() { return abs(pdgid_)==11 ? cms3.els_mcidx().at(idx_) : cms3.mus_mcidx().at(idx_);}
  int mc_motherid() {return abs(pdgid_)==11 ? cms3.els_mc_motherid().at(idx_) : cms3.mus_mc_motherid().at(idx_);}
  LorentzVector mc_p4() { return abs(pdgid_)==11 ? cms3.els_mc_p4().at(idx_) : cms3.mus_mc_p4().at(idx_);}
private:
  int pdgid_, idx_;
};

struct DilepHyp {
  DilepHyp(Lep lepone_, Lep leptwo_):
    leadlep(lepone_),trailep(leptwo_) {
    if (lepone_.pt()<leptwo_.pt()) {
      leadlep = leptwo_;
      trailep = lepone_;
    }
  }
  int charge() {return leadlep.charge()+trailep.charge();}
  LorentzVector p4() {return leadlep.p4()+trailep.p4();}
  Lep leadLep() {return leadlep;}
  Lep traiLep() {return trailep;}
private:
  Lep leadlep, trailep;
};

struct Jet {
  Jet(int idxx):idx_(idxx){}
  LorentzVector p4() {return cms3.pfjets_p4()[idx_]/**cms3.pfjets_corL1FastL2L3()[idx_]*/;}//fixme
  float pt() {return p4().pt();}
  float eta() {return p4().eta();}
  float phi() {return p4().phi();}
  float csv() {return cms3.pfjets_pfCombinedSecondaryVertexBJetTag()[idx_];}
  float csvivf() {return cms3.pfjets_combinedInclusiveSecondaryVertexV2BJetTag()[idx_];}
  bool isBtag() {return csvivf()>0.814;}
  int   mc3_id() {return cms3.pfjets_mc3_id()[idx_];}
  LorentzVector genjet_p4() {return cms3.pfjets_mc_p4()[idx_];}
  LorentzVector genps_p4() {return cms3.pfjets_mc_gp_p4()[idx_];}
  int idx() {return idx_;}
private:
  int idx_;
};

#endif
