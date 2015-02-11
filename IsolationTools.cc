#include "Math/VectorUtil.h"
#include "IsolationTools.h"

using namespace std;

float ptRel(const LorentzVector& lepp4, const vector<LorentzVector>& lepjets, bool subtractLep) {
  int lepjetidx = -1;
  float mindr = 0.7;
  for (unsigned int j=0;j<lepjets.size();++j) {
    float dr = ROOT::Math::VectorUtil::DeltaR(lepjets[j],lepp4);
    if (dr<mindr) {
      mindr = dr;
      lepjetidx = j;
    }
  } 
  if (lepjetidx>=0) {
    LorentzVector jetp4 = lepjets[lepjetidx];
    if (subtractLep) jetp4-=lepp4;
    float dot = lepp4.Vect().Dot( jetp4.Vect() );
    float ptrel = lepp4.P2() - dot*dot/jetp4.P2();
    ptrel = ptrel>0 ? sqrt(ptrel) : 0.0;
    return ptrel;
  } else return 0.;
}

