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

std::pair<float,float> MET3p0();

#endif
