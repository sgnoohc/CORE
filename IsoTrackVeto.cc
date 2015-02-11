#include "Math/VectorUtil.h"
#include "IsoTrackVeto.h"
#include "CMS3.h"

float TrackIso(int thisPf, float coneR, float deltaZCut){

  float absIso = 0.0;
  
  for (int ipf = 0; ipf < (int)cms3.pfcands_p4().size(); ipf++) {

    if( ipf == thisPf ) continue; // skip this PFCandidate
    if(cms3.pfcands_charge().at(ipf) == 0 ) continue; // skip neutrals
    double dr=ROOT::Math::VectorUtil::DeltaR( cms3.pfcands_p4().at(ipf) , cms3.pfcands_p4().at(thisPf) );
    if( dr > coneR ) continue; // skip pfcands outside the cone                                     
    if( cms3.pfcands_p4().at(ipf).pt()>=0.0 && fabs(cms3.pfcands_dz().at(ipf)) <= deltaZCut) absIso += cms3.pfcands_p4().at(ipf).pt();

  }

  return absIso;

}

float MiniTrackIso(int thisPf, float deltaZCut){
  float pt = cms3.pfcands_p4().at(thisPf).pt();
  float dr = 0.2;
  if (pt>50) dr = 10./pt;
  if (pt>200) dr = 0.05;
  return TrackIso(thisPf,dr,deltaZCut);
}

