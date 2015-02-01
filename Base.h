#ifndef BASE_H
#define BASE_H

enum analysis_t { POG, SS, HAD, STOP };
enum id_level_t { SS_veto_v1, SS_loose_v1, SS_medium_v1, SS_tight_v1, HAD_veto_v1, HAD_loose_v1, HAD_medium_v1, HAD_tight_v1, STOP_veto_v1, STOP_loose_v1, STOP_medium_v1, STOP_tight_v1 };

analysis_t whichAnalysis(id_level_t id_level);

#endif
