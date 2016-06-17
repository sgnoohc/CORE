// This is a function provided by Pablo used to decay a photon to two leptons.
// The lepton spin correlations are taken into account in the decay products.
//A snippet of code on how to implement this is provided below:

//In this implementation, A test Z boson with pt = 100 GeV, eta = 0, phi = 0, mass 91.2GeV, and width 2 GeV

// Initialize the two lepton daugthers
// Particle lepton1(0, 0, 0, 0, 0);
// Particle lepton2(0, 0, 0, 0, 0);

// Again using SnT-compatible LorentzVectors
// LorentzVector lep1_p4(0,0,0,0);
// LorentzVector lep2_p4(0,0,0,0);

// This is the particle that will decay
// Particle iphoton(100, 0, 0, 91, 2);  

// TRandom3 ran(0);
// ProduceDecay(ran, &iphoton, &lepton1, &lepton2, 0.001, 0.001); 

// These are the final particles in SnT-compatible LorentzVectors
// lep1_p4.SetPx( lepton1.p.X()); lep1_p4.SetPy( lepton1.p.Y()); lep1_p4.SetPz( lepton1.p.Z()); lep1_p4.SetE ( lepton1.p.E());
// lep2_p4.SetPx( lepton2.p.X()); lep2_p4.SetPy( lepton2.p.Y()); lep2_p4.SetPz( lepton2.p.Z()); lep2_p4.SetE ( lepton2.p.E());

#include "SimPa.h"

Particle::Particle(Float_t pt, Float_t eta, Float_t phi, Float_t mass, Float_t width_) {  
  p.SetPtEtaPhiM(pt, eta, phi, mass);
  width = width_;
}

Particle::~Particle(){}

Float_t fix(Float_t a) {
  if(a < 0) return a + 2.0*TMath::Pi();
  return a;
}

Float_t thetaToEta(Float_t theta) {
  TLorentzVector a(1, 0, 0, 1);
  a.SetTheta(theta);
  return a.Eta();
}

//////////////////////Function body////////////////////////////////
void ProduceDecay(TRandom ran, Particle *mom, Particle *d1, Particle *d2, Float_t mass1, Float_t mass2) {

  Float_t m_mass = ran.BreitWigner(mom->p.M(), mom->width);

  Float_t aux1 = (m_mass*m_mass-mass1*mass1-mass2*mass2)*(m_mass*m_mass-mass1*mass1-mass2*mass2) - 4.0*mass1*mass1*mass2*mass2;
  Float_t aux2 = 4.0*(m_mass*m_mass);
  Float_t pk = TMath::Sqrt(aux1/aux2);

  Float_t phi1;
  phi1 = ran.Uniform(0, 2.0*TMath::Pi());

  Float_t theta1, u1;
  u1 = ran.Uniform(0, 1.0);
  theta1 = TMath::ACos(2.0*u1 - 1.0);

  Float_t phi2 = phi1 + TMath::Pi();
  Float_t theta2 = TMath::Pi() - theta1;

  Float_t eta1 = thetaToEta(theta1);
  Float_t eta2 = thetaToEta(theta2);
  Float_t pt1 = fabs(pk*sin(theta1));
  Float_t pt2 = fabs(pk*sin(theta2));

  TLorentzVector son1_Mother;
  TLorentzVector son2_Mother;
  son1_Mother.SetPtEtaPhiM(pt1, eta1, phi1, mass1);
  son2_Mother.SetPtEtaPhiM(pt2, eta2, phi2, mass2);

  TVector3 boostvector = mom->p.BoostVector();
  son1_Mother.Boost(boostvector);
  son2_Mother.Boost(boostvector);

  d1->p.SetPtEtaPhiM(son1_Mother.Pt(), thetaToEta(fix(son1_Mother.Theta())), fix(son1_Mother.Phi()), mass1);
  d2->p.SetPtEtaPhiM(son2_Mother.Pt(), thetaToEta(fix(son2_Mother.Theta())), fix(son2_Mother.Phi()), mass2);

}
