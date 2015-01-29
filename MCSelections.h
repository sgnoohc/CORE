#ifndef MCSELECTIONS_H
#define MCSELECTIONS_H
#include "CMS3.h"
#include "TString.h"
#include "Base.h"

bool idIsCharm(int);
bool idIsBeauty(int);
bool isFromW(int, int);
bool isFromZ(int, int);
bool isFromB(int, int);
bool isFromC(int, int);
bool isFromLight(int, int);
bool isFromLightFake(int, int);

#endif
