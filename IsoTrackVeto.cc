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

PFCandIsoResults PFCandPFIso(int thisPf, float coneR, float deltaZCut) {

  PFCandIsoResults res;
  res.chiso = 0.;
  res.nhiso = 0.;
  res.phiso = 0.;
  res.PUpt = 0.;

  for (int ipf = 0; ipf < (int)cms3.pfcands_p4().size(); ipf++) {

    if( ipf == thisPf ) continue; // skip this PFCandidate
    double dr=ROOT::Math::VectorUtil::DeltaR( cms3.pfcands_p4().at(ipf) , cms3.pfcands_p4().at(thisPf) );
    if( dr > coneR ) continue; // skip pfcands outside the cone                                     

    float pt = cms3.pfcands_p4().at(ipf).pt();
    int particleId = cms3.pfcands_particleId().at(ipf);
    if( abs(particleId) == 211 && pt>=0.0 ) {
      if (fabs(cms3.pfcands_dz().at(ipf)) <= deltaZCut) res.chiso += pt;
      else res.PUpt += pt;
    }
    else if (abs(particleId) == 130) res.nhiso += pt;
    else if (abs(particleId) == 22 ) res.phiso += pt;
  }

  return res;
}

PFCandIsoResults PFCandMiniPFIso(int thisPf, float deltaZCut){
  float pt = cms3.pfcands_p4().at(thisPf).pt();
  float dr = 0.2;
  if (pt>50) dr = 10./pt;
  if (pt>200) dr = 0.05;
  return PFCandPFIso(thisPf,dr,deltaZCut);
}

