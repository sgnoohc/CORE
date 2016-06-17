#ifndef SIMPA_H
#define SIMPA_H

#include "TRandom3.h"
#include "TLorentzVector.h"
#include "CMS3.h"

std::pair<LorentzVector, LorentzVector> returnDecayProducts( LorentzVector &motherParticle_p4 );

  ////////////Small wrapper for Particle//////////////////
class Particle {

public:

  Particle(Float_t pt, Float_t eta, Float_t phi, Float_t mass, Float_t width_);
  ~Particle();

  TLorentzVector p;
  Float_t width;

};

////////////Functions doing the decay//////////////////
Float_t fix(Float_t a);
Float_t thetaToEta(Float_t);
void ProduceDecay(TRandom , Particle *, Particle *, Particle *, Float_t, Float_t);

#endif
