#include "CMS3.h"
#include "Base.h"

#ifndef OSSELECTIONS_H
#define OSSELECTIONS_H

bool overlapMuon_ZMET_v1( int index , float ptcut = 10.0 );
bool passElectronSelection_ZMET_v1_NoIso( int index, bool vetoTransition, bool eta24 );
bool passElectronSelection_ZMET_v1( int index, bool vetoTransition, bool eta24 );
bool passMuonSelection_ZMET_v1_NoIso(int index, bool vetoTransition, bool eta24 );
bool passMuonSelection_ZMET_v1(int index, bool vetoTransition, bool eta24 );

#endif
