#ifndef TRIGGERSELECTIONS_H
#define TRIGGERSELECTIONS_H
#include "CMS3.h"

bool passesTriggerVeryLowPt(int hyp_type);
bool passUnprescaledHLTTrigger(const char* arg);
bool passUnprescaledHLTTriggerPattern(const char* arg);
TString triggerName(TString triggerPattern);

#endif
