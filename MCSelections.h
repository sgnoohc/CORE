#ifndef MCSELECTIONS_H
#define MCSELECTIONS_H
#include "CMS3.h"
#include "TString.h"
#include "Base.h"

//Nicely formatted dump of gen-level particles
int  dumpDocLines();

//Parentage functions
bool isFromW(int id, int idx);
bool isFromZ(int id, int idx);
bool isFromB(int id, int idx);
bool isFromC(int id, int idx);
bool isFromLight(int id, int idx);
bool isFromLightFake(int id, int idx);
bool idIsCharm(int id);
bool idIsBeauty(int id);

#endif
