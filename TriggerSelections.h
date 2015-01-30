#ifndef TRIGGERSELECTIONS_H
#define TRIGGERSELECTIONS_H
#include "CMS3.h"

bool passesTriggerVeryLowPt(int);
bool passUnprescaledHLTTrigger(const char*);
bool passUnprescaledHLTTriggerPattern(const char*);
TString triggerName(TString);

#endif
