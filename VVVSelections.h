#include "CMS3.h"
#include "Base.h"

#ifndef VVVSELECTIONS_H
#define VVVSELECTIONS_H


bool passElectronSelection_VVV(int index);
bool passElectronSelection_VVV_v1(int index, bool vetoTransition, bool eta24);

bool passMuonSelection_VVV(int index);
bool passMuonSelection_VVV_v1(int index, bool vetoTransition, bool eta24);


#endif
