#ifndef METSELECTIONS_H
#define METSELECTIONS_H

#include "CMS3.h"

struct metStruct{
  metStruct() : met(-999.), metphi(-999.), metx(-999.), mety(-999.), sumet(-999.)  {}
  float met;
  float metphi;
  float metx;
  float mety;
  float sumet;
};

metStruct trackerMET(float deltaZCut = 0.2, const std::vector<LorentzVector>* jets = 0);
bool hbheNoiseFilter(int minZeros = 999);
std::pair <float, float> getT1CHSMET( std::vector<std::string> jetcorr_filenames );
pair<float,float> MET3p0(); // tracker style MET with no particles with eta > 3.0

#endif
