#include "MetSelections.h"
#include "Math/VectorUtil.h"

using namespace tas;

metStruct trackerMET(float deltaZCut, const std::vector<LorentzVector>* jets) {

  if ( vtxs_sumpt().empty() ) return metStruct();
  double pX(0), pY(0);
  
  for (unsigned int i=0; i<pfcands_particleId().size(); ++i){
    if ( pfcands_charge().at(i)==0 ) continue;
    if ( jets ){
      bool matched = false;
      for ( std::vector<LorentzVector>::const_iterator jet = jets->begin(); jet != jets->end(); ++jet )
    	if ( fabs(ROOT::Math::VectorUtil::DeltaR(pfcands_p4().at(i),*jet))<0.5 ) matched=true;
      if (matched) continue;
    }
    
    if ( fabs(pfcands_dz().at(i)) > deltaZCut) continue;
    
    pX -= pfcands_p4().at(i).px();
    pY -= pfcands_p4().at(i).py();
  }
  
  if (jets){
    for ( std::vector<LorentzVector>::const_iterator jet = jets->begin(); jet != jets->end(); ++jet ){
      pX -= jet->px();
      pY -= jet->py();
    }
  }
  metStruct met;
  met.met     = sqrt(pX * pX + pY * pY);
  met.metphi  = atan2(pY, pX);
  met.metx = pX;
  met.mety = pY;
  return met;
}
