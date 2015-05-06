#include "Math/VectorUtil.h"
#include "IsolationTools.h"
#include "ElectronSelections.h"
#include "MuonSelections.h"

using namespace std;
using namespace tas;


bool passMultiIso(int id, int idx, float cutMiniIso, float cutPtRatio, float cutPtRel){

  const LorentzVector& lep_p4 = abs(id)==11 ? els_p4().at(idx) : mus_p4().at(idx);
  const LorentzVector& jet_p4 = closestJet(lep_p4,0.4,2.4);
  
  float miniIso = abs(id)==11 ? elMiniRelIso(idx, 0.1, true) : muMiniRelIso(idx, 0.1, true);
  float closeJetPt = jet_p4.pt();
  float ptratio = ( closeJetPt>0. ? lep_p4.pt()/closeJetPt : 1. );
  float ptrel = ptRel(lep_p4, jet_p4, true);
  return ( miniIso < cutMiniIso && (ptratio>cutPtRatio || ptrel > cutPtRel));
}

bool passPtRel(int id, int idx, float cut, bool subtractLep) {
  return getPtRel(id, idx, subtractLep) > cut;
}
float getPtRel(int id, int idx, bool subtractLep) {
  LorentzVector lep_p4 = abs(id)==11 ? els_p4().at(idx) : mus_p4().at(idx);
  LorentzVector jet_p4 = closestJet(lep_p4,0.4,2.4);
  return ptRel(lep_p4, jet_p4, subtractLep);
}
float ptRel(const LorentzVector& lepp4, const LorentzVector& jetp4, bool subtractLep) {
  if (jetp4.pt()<=0.) return 0.;
  LorentzVector jp4 = jetp4;
  if (subtractLep) jp4-=lepp4;
  float dot = lepp4.Vect().Dot( jp4.Vect() );
  float ptrel = lepp4.P2() - dot*dot/jp4.P2();
  ptrel = ptrel>0 ? sqrt(ptrel) : 0.0;
  return ptrel;
}

LorentzVector closestJet(const LorentzVector& lep_p4, float dRmin, float maxAbsEta) {
  int closestIdx = -1;
  for (unsigned int pfjidx=0;pfjidx<pfjets_p4().size();++pfjidx) {
    LorentzVector jet_p4 = pfjets_p4().at(pfjidx);
    if (fabs(jet_p4.eta())>maxAbsEta) continue;
    float tmp_dRmin = ROOT::Math::VectorUtil::DeltaR(jet_p4, lep_p4);
    if ( tmp_dRmin < dRmin) {
      closestIdx = pfjidx;
      dRmin = tmp_dRmin;
    }
  }
  if (closestIdx>=0) return pfjets_p4().at(closestIdx);
  else return LorentzVector();
}
