#include "MetSelections.h"
#include "Math/VectorUtil.h"
#include "MetSelections.h"

using namespace tas;

metStruct trackerMET(float deltaZCut, const std::vector<LorentzVector>* jets) {

  if ( vtxs_isFake().empty() ) return metStruct();
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

bool hbheNoiseFilter(int minZeros) {
    // http://cmslxr.fnal.gov/lxr/source/CommonTools/RecoAlgos/plugins/HBHENoiseFilter.cc?v=CMSSW_7_4_1
    // by default (false --> reject), maxZeros() cut will never cause a lost event
    if(hcalnoise_minE2Over10TS()<-999.0) return false;
    if(hcalnoise_maxE2Over10TS()>999.0) return false;
    if(hcalnoise_maxRBXHits()>=999) return false;
    if(hcalnoise_min25GeVHitTime()<-9999.0) return false;
    if(hcalnoise_max25GeVHitTime()>9999.0) return false;
    if(hcalnoise_minRBXEMF()<-999.0) return false;
    if(hcalnoise_maxHPDHits()>=17) return false;
    if(hcalnoise_maxHPDNoOtherHits()>=10) return false;
    if(hcalnoise_maxZeros()>=minZeros) return false;
    if(hcalnoise_numIsolatedNoiseChannels()>=10) return false;
    if(hcalnoise_isolatedNoiseSumE()>=50.0) return false;
    if(hcalnoise_isolatedNoiseSumEt()>=25.0) return false;
    return true;
}

pair<float,float> MET3p0() { 

  float met_pt  = 0.0;
  float met_phi = 0.0;
  
  LorentzVector pfcands3p0_p4(0,0,0,0);
  
  for( size_t pfind = 0; pfind < cms3.pfcands_p4().size(); pfind++ ){
	
	if( abs( cms3.pfcands_p4().at(pfind).eta() ) < 3.0 ){ 
	  pfcands3p0_p4 -= cms3.pfcands_p4().at(pfind);
	}
  }
  met_pt  = pfcands3p0_p4.pt();
  met_phi = pfcands3p0_p4.phi();

  return make_pair( met_pt, met_phi ); 
}

bool passesMETfilter(){

  //primary vertex filter (re-run by user)
  if (firstGoodVertex() == -1) return false;

  //CSC beam halo filter 
  if (!filt_cscBeamHalo()) return false;
  
  //HBHE noise filter (re-run by user)
  if (!hbheNoiseFilter(10)) return false;

  //ee badSC noise filter NEW
  if (!filt_eeBadSc()) return false;

  //Otherwise good
  return true;

}
