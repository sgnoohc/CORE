#ifndef PHOTONSELECTIONS_H
#define PHOTONSELECTIONS_H
#include "CMS3.h"
#include "TString.h"
#include "Base.h"

bool isLoosePhoton(unsigned int phIdx, analysis_t analysis);
bool isTightPhoton(unsigned int phIdx, analysis_t analysis);

#endif
