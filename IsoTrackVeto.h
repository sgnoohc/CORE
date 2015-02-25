#ifndef ISOTRACKVETO_H
#define ISOTRACKVETO_H

struct PFCandIsoResults {
  float chiso;
  float nhiso;
  float phiso;
  float PUpt;
};

float TrackIso(int thisPf, float coneR = 0.3, float deltaZCut = 0.1);
float MiniTrackIso(int thisPf, float deltaZCut = 0.1);
PFCandIsoResults PFCandPFIso(int thisPf, float coneR = 0.3, float deltaZCut = 0.1);
PFCandIsoResults PFCandMiniPFIso(int thisPf, float deltaZCut = 0.1);

#endif
