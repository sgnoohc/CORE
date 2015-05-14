#ifndef BASE_H
#define BASE_H

enum analysis_t { POG, SS, HAD, STOP, ZMET };
enum id_level_t { 
  SS_veto_noiso_v1, 
  SS_veto_v1, 
  SS_fo_noiso_v1, 
  SS_fo_v1, 
  SS_medium_noiso_v1, 
  SS_medium_v1, 
  SS_tight_noiso_v1, 
  SS_tight_v1, 
  SS_veto_noiso_v2, 
  SS_veto_v2, 
  SS_fo_noiso_v2, 
  SS_fo_v2, 
  SS_medium_noiso_v2, 
  SS_medium_v2, 
  SS_tight_noiso_v2, 
  SS_tight_v2, 
  SS_veto_noiso_v3, 
  SS_veto_v3, 
  SS_fo_noiso_v3, 
  SS_fo_v3, 
  SS_fo_looseMVA_noiso_v3, 
  SS_fo_looseMVA_v3, 
  SS_medium_noiso_v3, 
  SS_medium_v3, 
  SS_tight_noiso_v3, 
  SS_tight_v3, 

  HAD_veto_noiso_v1,
  HAD_veto_v1, 
  HAD_loose_noiso_v1, 
  HAD_loose_v1, 
  HAD_medium_noiso_v1, 
  HAD_medium_v1, 
  HAD_tight_noiso_v1, 
  HAD_tight_v1, 
  HAD_veto_noiso_v2,
  HAD_veto_v2, 
  HAD_loose_noiso_v2, 
  HAD_loose_v2, 
  HAD_medium_noiso_v2, 
  HAD_medium_v2, 
  HAD_tight_noiso_v2, 
  HAD_tight_v2, 

  STOP_veto_v1, 
  STOP_loose_v1, 
  STOP_medium_v1, 
  STOP_tight_v1,

  ZMET_loose_noiso_v1, 
  ZMET_loose_v2, 
  ZMET_loose_v1, 
  ZMET_tight_noiso_v1, 
  ZMET_tight_v2, 
  ZMET_tight_v1, 
  ZMET_photon_v1

};

analysis_t whichAnalysis(id_level_t id_level);

#endif
