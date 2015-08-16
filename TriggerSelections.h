#ifndef TRIGGERSELECTIONS_H
#define TRIGGERSELECTIONS_H
#include "CMS3.h"


void PrintTriggers();

bool passesTriggerVeryLowPt(int hyp_type);
bool passUnprescaledHLTTrigger(const char* arg);
bool passUnprescaledHLTTrigger(const char* arg, const LorentzVector &obj);
bool passUnprescaledHLTTriggerPattern(const char* arg);
bool passHLTTrigger(const char* arg, const LorentzVector &obj);
bool passHLTTriggerPattern(const char* arg);
TString triggerName(TString triggerPattern);
int getTriggerIndex(const char* arg);
int getTriggerPatternIndex(const char* arg);
bool matchToHLTFilter(const char* arg, const char* filt, const LorentzVector &obj, float drMin_ = 0.1);
int HLT_prescale( const char* arg );

int nHLTObjects(const char*);
LorentzVector p4HLTObject(const char*, int) ;
//trigger ID definitions
//http://cmslxr.fnal.gov/source/DataFormats/HLTReco/interface/TriggerTypeDefs.h
int idHLTObject(const char*, int) ;

#endif
