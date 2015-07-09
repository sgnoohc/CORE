// -*- C++ -*-
#ifndef CMS3_H
#define CMS3_H
#include "Math/LorentzVector.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include <vector> 
#include <unistd.h> 
typedef ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > LorentzVector;

using namespace std; 
class CMS3 {
private: 
protected: 
	unsigned int index;
	vector<string> genweightsID_;
	TBranch *genweightsID_branch;
	bool genweightsID_isLoaded;
	TBits hlt_bits_;
	TBranch *hlt_bits_branch;
	bool hlt_bits_isLoaded;
	vector<TString> pfjets_nonCHS_bDiscriminatorNames_;
	TBranch *pfjets_nonCHS_bDiscriminatorNames_branch;
	bool pfjets_nonCHS_bDiscriminatorNames_isLoaded;
	vector<TString> evt_CMS3tag_;
	TBranch *evt_CMS3tag_branch;
	bool evt_CMS3tag_isLoaded;
	vector<TString> evt_dataset_;
	TBranch *evt_dataset_branch;
	bool evt_dataset_isLoaded;
	vector<TString> hlt_trigNames_;
	TBranch *hlt_trigNames_branch;
	bool hlt_trigNames_isLoaded;
	vector<TString> pfjets_bDiscriminatorNames_;
	TBranch *pfjets_bDiscriminatorNames_branch;
	bool pfjets_bDiscriminatorNames_isLoaded;
	vector<TString> pfjets_puppi_bDiscriminatorNames_;
	TBranch *pfjets_puppi_bDiscriminatorNames_branch;
	bool pfjets_puppi_bDiscriminatorNames_isLoaded;
	vector<TString> taus_pf_IDnames_;
	TBranch *taus_pf_IDnames_branch;
	bool taus_pf_IDnames_isLoaded;
	vector<TString> sparm_comment_;
	TBranch *sparm_comment_branch;
	bool sparm_comment_isLoaded;
	vector<TString> sparm_names_;
	TBranch *sparm_names_branch;
	bool sparm_names_isLoaded;
	bool hcalnoise_HasBadRBXTS4TS5_;
	TBranch *hcalnoise_HasBadRBXTS4TS5_branch;
	bool hcalnoise_HasBadRBXTS4TS5_isLoaded;
	bool evt_cscTightHaloId_;
	TBranch *evt_cscTightHaloId_branch;
	bool evt_cscTightHaloId_isLoaded;
	bool evt_hbheFilter_;
	TBranch *evt_hbheFilter_branch;
	bool evt_hbheFilter_isLoaded;
	bool filt_cscBeamHalo_;
	TBranch *filt_cscBeamHalo_branch;
	bool filt_cscBeamHalo_isLoaded;
	bool filt_ecalLaser_;
	TBranch *filt_ecalLaser_branch;
	bool filt_ecalLaser_isLoaded;
	bool filt_ecalTP_;
	TBranch *filt_ecalTP_branch;
	bool filt_ecalTP_isLoaded;
	bool filt_eeBadSc_;
	TBranch *filt_eeBadSc_branch;
	bool filt_eeBadSc_isLoaded;
	bool filt_goodVertices_;
	TBranch *filt_goodVertices_branch;
	bool filt_goodVertices_isLoaded;
	bool filt_hbheNoise_;
	TBranch *filt_hbheNoise_branch;
	bool filt_hbheNoise_isLoaded;
	bool filt_hcalLaser_;
	TBranch *filt_hcalLaser_branch;
	bool filt_hcalLaser_isLoaded;
	bool filt_metfilter_;
	TBranch *filt_metfilter_branch;
	bool filt_metfilter_isLoaded;
	bool filt_trackingFailure_;
	TBranch *filt_trackingFailure_branch;
	bool filt_trackingFailure_isLoaded;
	bool filt_trkPOGFilters_;
	TBranch *filt_trkPOGFilters_branch;
	bool filt_trkPOGFilters_isLoaded;
	bool filt_trkPOG_logErrorTooManyClusters_;
	TBranch *filt_trkPOG_logErrorTooManyClusters_branch;
	bool filt_trkPOG_logErrorTooManyClusters_isLoaded;
	bool filt_trkPOG_manystripclus53X_;
	TBranch *filt_trkPOG_manystripclus53X_branch;
	bool filt_trkPOG_manystripclus53X_isLoaded;
	bool filt_trkPOG_toomanystripclus53X_;
	TBranch *filt_trkPOG_toomanystripclus53X_branch;
	bool filt_trkPOG_toomanystripclus53X_isLoaded;
	vector<bool> els_conv_vtx_flag_;
	TBranch *els_conv_vtx_flag_branch;
	bool els_conv_vtx_flag_isLoaded;
	vector<bool> els_isGsfCtfScPixChargeConsistent_;
	TBranch *els_isGsfCtfScPixChargeConsistent_branch;
	bool els_isGsfCtfScPixChargeConsistent_isLoaded;
	vector<bool> els_passingMvaPreselection_;
	TBranch *els_passingMvaPreselection_branch;
	bool els_passingMvaPreselection_isLoaded;
	vector<bool> els_passingPflowPreselection_;
	TBranch *els_passingPflowPreselection_branch;
	bool els_passingPflowPreselection_isLoaded;
	vector<bool> genps_fromHardProcessBeforeFSR_;
	TBranch *genps_fromHardProcessBeforeFSR_branch;
	bool genps_fromHardProcessBeforeFSR_isLoaded;
	vector<bool> genps_fromHardProcessDecayed_;
	TBranch *genps_fromHardProcessDecayed_branch;
	bool genps_fromHardProcessDecayed_isLoaded;
	vector<bool> genps_fromHardProcessFinalState_;
	TBranch *genps_fromHardProcessFinalState_branch;
	bool genps_fromHardProcessFinalState_isLoaded;
	vector<bool> genps_isDirectHardProcessTauDecayProductFinalState_;
	TBranch *genps_isDirectHardProcessTauDecayProductFinalState_branch;
	bool genps_isDirectHardProcessTauDecayProductFinalState_isLoaded;
	vector<bool> genps_isDirectPromptTauDecayProductFinalState_;
	TBranch *genps_isDirectPromptTauDecayProductFinalState_branch;
	bool genps_isDirectPromptTauDecayProductFinalState_isLoaded;
	vector<bool> genps_isHardProcess_;
	TBranch *genps_isHardProcess_branch;
	bool genps_isHardProcess_isLoaded;
	vector<bool> genps_isLastCopy_;
	TBranch *genps_isLastCopy_branch;
	bool genps_isLastCopy_isLoaded;
	vector<bool> genps_isLastCopyBeforeFSR_;
	TBranch *genps_isLastCopyBeforeFSR_branch;
	bool genps_isLastCopyBeforeFSR_isLoaded;
	vector<bool> genps_isMostlyLikePythia6Status3_;
	TBranch *genps_isMostlyLikePythia6Status3_branch;
	bool genps_isMostlyLikePythia6Status3_isLoaded;
	vector<bool> genps_isPromptDecayed_;
	TBranch *genps_isPromptDecayed_branch;
	bool genps_isPromptDecayed_isLoaded;
	vector<bool> genps_isPromptFinalState_;
	TBranch *genps_isPromptFinalState_branch;
	bool genps_isPromptFinalState_isLoaded;
	vector<bool> mus_isRPCMuon_;
	TBranch *mus_isRPCMuon_branch;
	bool mus_isRPCMuon_isLoaded;
	vector<bool> mus_tightMatch_;
	TBranch *mus_tightMatch_branch;
	bool mus_tightMatch_isLoaded;
	vector<bool> mus_updatedSta_;
	TBranch *mus_updatedSta_branch;
	bool mus_updatedSta_isLoaded;
	vector<bool> photons_haspixelSeed_;
	TBranch *photons_haspixelSeed_branch;
	bool photons_haspixelSeed_isLoaded;
	float evt_bs_Xwidth_;
	TBranch *evt_bs_Xwidth_branch;
	bool evt_bs_Xwidth_isLoaded;
	float evt_bs_XwidthErr_;
	TBranch *evt_bs_XwidthErr_branch;
	bool evt_bs_XwidthErr_isLoaded;
	float evt_bs_Ywidth_;
	TBranch *evt_bs_Ywidth_branch;
	bool evt_bs_Ywidth_isLoaded;
	float evt_bs_YwidthErr_;
	TBranch *evt_bs_YwidthErr_branch;
	bool evt_bs_YwidthErr_isLoaded;
	float evt_bs_dxdz_;
	TBranch *evt_bs_dxdz_branch;
	bool evt_bs_dxdz_isLoaded;
	float evt_bs_dxdzErr_;
	TBranch *evt_bs_dxdzErr_branch;
	bool evt_bs_dxdzErr_isLoaded;
	float evt_bs_dydz_;
	TBranch *evt_bs_dydz_branch;
	bool evt_bs_dydz_isLoaded;
	float evt_bs_dydzErr_;
	TBranch *evt_bs_dydzErr_branch;
	bool evt_bs_dydzErr_isLoaded;
	float evt_bs_sigmaZ_;
	TBranch *evt_bs_sigmaZ_branch;
	bool evt_bs_sigmaZ_isLoaded;
	float evt_bs_sigmaZErr_;
	TBranch *evt_bs_sigmaZErr_branch;
	bool evt_bs_sigmaZErr_isLoaded;
	float evt_bs_xErr_;
	TBranch *evt_bs_xErr_branch;
	bool evt_bs_xErr_isLoaded;
	float evt_bs_yErr_;
	TBranch *evt_bs_yErr_branch;
	bool evt_bs_yErr_isLoaded;
	float evt_bs_zErr_;
	TBranch *evt_bs_zErr_branch;
	bool evt_bs_zErr_isLoaded;
	float evt_bField_;
	TBranch *evt_bField_branch;
	bool evt_bField_isLoaded;
	float evt_fixgrid_all_rho_;
	TBranch *evt_fixgrid_all_rho_branch;
	bool evt_fixgrid_all_rho_isLoaded;
	float evt_fixgridfastjet_allcalo_rho_;
	TBranch *evt_fixgridfastjet_allcalo_rho_branch;
	bool evt_fixgridfastjet_allcalo_rho_isLoaded;
	float evt_fixgridfastjet_all_rho_;
	TBranch *evt_fixgridfastjet_all_rho_branch;
	bool evt_fixgridfastjet_all_rho_isLoaded;
	float evt_fixgridfastjet_centralcalo_rho_;
	TBranch *evt_fixgridfastjet_centralcalo_rho_branch;
	bool evt_fixgridfastjet_centralcalo_rho_isLoaded;
	float evt_fixgridfastjet_centralchargedpileup_rho_;
	TBranch *evt_fixgridfastjet_centralchargedpileup_rho_branch;
	bool evt_fixgridfastjet_centralchargedpileup_rho_isLoaded;
	float evt_fixgridfastjet_centralneutral_rho_;
	TBranch *evt_fixgridfastjet_centralneutral_rho_branch;
	bool evt_fixgridfastjet_centralneutral_rho_isLoaded;
	float	evt_kfactor_;
	TBranch *evt_kfactor_branch;
	bool evt_kfactor_isLoaded;
	float	evt_scale1fb_;
	TBranch *evt_scale1fb_branch;
	bool evt_scale1fb_isLoaded;
	float	evt_xsec_excl_;
	TBranch *evt_xsec_excl_branch;
	bool evt_xsec_excl_isLoaded;
	float	evt_xsec_incl_;
	TBranch *evt_xsec_incl_branch;
	bool evt_xsec_incl_isLoaded;
	float genps_alphaQCD_;
	TBranch *genps_alphaQCD_branch;
	bool genps_alphaQCD_isLoaded;
	float genps_pthat_;
	TBranch *genps_pthat_branch;
	bool genps_pthat_isLoaded;
	float genps_qScale_;
	TBranch *genps_qScale_branch;
	bool genps_qScale_isLoaded;
	float genps_weight_;
	TBranch *genps_weight_branch;
	bool genps_weight_isLoaded;
	float gen_sumEt_;
	TBranch *gen_sumEt_branch;
	bool gen_sumEt_isLoaded;
	float hcalnoise_GetRecHitEnergy_;
	TBranch *hcalnoise_GetRecHitEnergy_branch;
	bool hcalnoise_GetRecHitEnergy_isLoaded;
	float hcalnoise_GetRecHitEnergy15_;
	TBranch *hcalnoise_GetRecHitEnergy15_branch;
	bool hcalnoise_GetRecHitEnergy15_isLoaded;
	float hcalnoise_GetTotalCalibCharge_;
	TBranch *hcalnoise_GetTotalCalibCharge_branch;
	bool hcalnoise_GetTotalCalibCharge_isLoaded;
	float hcalnoise_TS4TS5NoiseSumE_;
	TBranch *hcalnoise_TS4TS5NoiseSumE_branch;
	bool hcalnoise_TS4TS5NoiseSumE_isLoaded;
	float hcalnoise_TS4TS5NoiseSumEt_;
	TBranch *hcalnoise_TS4TS5NoiseSumEt_branch;
	bool hcalnoise_TS4TS5NoiseSumEt_isLoaded;
	float hcalnoise_eventChargeFraction_;
	TBranch *hcalnoise_eventChargeFraction_branch;
	bool hcalnoise_eventChargeFraction_isLoaded;
	float hcalnoise_eventEMEnergy_;
	TBranch *hcalnoise_eventEMEnergy_branch;
	bool hcalnoise_eventEMEnergy_isLoaded;
	float hcalnoise_eventEMFraction_;
	TBranch *hcalnoise_eventEMFraction_branch;
	bool hcalnoise_eventEMFraction_isLoaded;
	float hcalnoise_eventHadEnergy_;
	TBranch *hcalnoise_eventHadEnergy_branch;
	bool hcalnoise_eventHadEnergy_isLoaded;
	float hcalnoise_eventTrackEnergy_;
	TBranch *hcalnoise_eventTrackEnergy_branch;
	bool hcalnoise_eventTrackEnergy_isLoaded;
	float hcalnoise_flatNoiseSumE_;
	TBranch *hcalnoise_flatNoiseSumE_branch;
	bool hcalnoise_flatNoiseSumE_isLoaded;
	float hcalnoise_flatNoiseSumEt_;
	TBranch *hcalnoise_flatNoiseSumEt_branch;
	bool hcalnoise_flatNoiseSumEt_isLoaded;
	float hcalnoise_isolatedNoiseSumE_;
	TBranch *hcalnoise_isolatedNoiseSumE_branch;
	bool hcalnoise_isolatedNoiseSumE_isLoaded;
	float hcalnoise_isolatedNoiseSumEt_;
	TBranch *hcalnoise_isolatedNoiseSumEt_branch;
	bool hcalnoise_isolatedNoiseSumEt_isLoaded;
	float hcalnoise_max10GeVHitTime_;
	TBranch *hcalnoise_max10GeVHitTime_branch;
	bool hcalnoise_max10GeVHitTime_isLoaded;
	float hcalnoise_max25GeVHitTime_;
	TBranch *hcalnoise_max25GeVHitTime_branch;
	bool hcalnoise_max25GeVHitTime_isLoaded;
	float hcalnoise_maxE10TS_;
	TBranch *hcalnoise_maxE10TS_branch;
	bool hcalnoise_maxE10TS_isLoaded;
	float hcalnoise_maxE2Over10TS_;
	TBranch *hcalnoise_maxE2Over10TS_branch;
	bool hcalnoise_maxE2Over10TS_isLoaded;
	float hcalnoise_maxE2TS_;
	TBranch *hcalnoise_maxE2TS_branch;
	bool hcalnoise_maxE2TS_isLoaded;
	float hcalnoise_min10GeVHitTime_;
	TBranch *hcalnoise_min10GeVHitTime_branch;
	bool hcalnoise_min10GeVHitTime_isLoaded;
	float hcalnoise_min25GeVHitTime_;
	TBranch *hcalnoise_min25GeVHitTime_branch;
	bool hcalnoise_min25GeVHitTime_isLoaded;
	float hcalnoise_minE10TS_;
	TBranch *hcalnoise_minE10TS_branch;
	bool hcalnoise_minE10TS_isLoaded;
	float hcalnoise_minE2Over10TS_;
	TBranch *hcalnoise_minE2Over10TS_branch;
	bool hcalnoise_minE2Over10TS_isLoaded;
	float hcalnoise_minE2TS_;
	TBranch *hcalnoise_minE2TS_branch;
	bool hcalnoise_minE2TS_isLoaded;
	float hcalnoise_minHPDEMF_;
	TBranch *hcalnoise_minHPDEMF_branch;
	bool hcalnoise_minHPDEMF_isLoaded;
	float hcalnoise_minRBXEMF_;
	TBranch *hcalnoise_minRBXEMF_branch;
	bool hcalnoise_minRBXEMF_isLoaded;
	float hcalnoise_rms10GeVHitTime_;
	TBranch *hcalnoise_rms10GeVHitTime_branch;
	bool hcalnoise_rms10GeVHitTime_isLoaded;
	float hcalnoise_rms25GeVHitTime_;
	TBranch *hcalnoise_rms25GeVHitTime_branch;
	bool hcalnoise_rms25GeVHitTime_isLoaded;
	float hcalnoise_spikeNoiseSumE_;
	TBranch *hcalnoise_spikeNoiseSumE_branch;
	bool hcalnoise_spikeNoiseSumE_isLoaded;
	float hcalnoise_spikeNoiseSumEt_;
	TBranch *hcalnoise_spikeNoiseSumEt_branch;
	bool hcalnoise_spikeNoiseSumEt_isLoaded;
	float hcalnoise_triangleNoiseSumE_;
	TBranch *hcalnoise_triangleNoiseSumE_branch;
	bool hcalnoise_triangleNoiseSumE_isLoaded;
	float hcalnoise_triangleNoiseSumEt_;
	TBranch *hcalnoise_triangleNoiseSumEt_branch;
	bool hcalnoise_triangleNoiseSumEt_isLoaded;
	float pdfinfo_pdf1_;
	TBranch *pdfinfo_pdf1_branch;
	bool pdfinfo_pdf1_isLoaded;
	float pdfinfo_pdf2_;
	TBranch *pdfinfo_pdf2_branch;
	bool pdfinfo_pdf2_isLoaded;
	float pdfinfo_scale_;
	TBranch *pdfinfo_scale_branch;
	bool pdfinfo_scale_isLoaded;
	float pdfinfo_x1_;
	TBranch *pdfinfo_x1_branch;
	bool pdfinfo_x1_isLoaded;
	float pdfinfo_x2_;
	TBranch *pdfinfo_x2_branch;
	bool pdfinfo_x2_isLoaded;
	float evt_fixgrid_rho_all_;
	TBranch *evt_fixgrid_rho_all_branch;
	bool evt_fixgrid_rho_all_isLoaded;
	float evt_fixgrid_rho_ctr_;
	TBranch *evt_fixgrid_rho_ctr_branch;
	bool evt_fixgrid_rho_ctr_isLoaded;
	float evt_fixgrid_rho_fwd_;
	TBranch *evt_fixgrid_rho_fwd_branch;
	bool evt_fixgrid_rho_fwd_isLoaded;
	float evt_calomet_;
	TBranch *evt_calomet_branch;
	bool evt_calomet_isLoaded;
	float evt_calometPhi_;
	TBranch *evt_calometPhi_branch;
	bool evt_calometPhi_isLoaded;
	float evt_pfmet_;
	TBranch *evt_pfmet_branch;
	bool evt_pfmet_isLoaded;
	float evt_pfmetPhi_;
	TBranch *evt_pfmetPhi_branch;
	bool evt_pfmetPhi_isLoaded;
	float evt_pfmetPhi_raw_;
	TBranch *evt_pfmetPhi_raw_branch;
	bool evt_pfmetPhi_raw_isLoaded;
	float evt_pfmetSig_;
	TBranch *evt_pfmetSig_branch;
	bool evt_pfmetSig_isLoaded;
	float evt_pfmet_raw_;
	TBranch *evt_pfmet_raw_branch;
	bool evt_pfmet_raw_isLoaded;
	float evt_pfsumet_;
	TBranch *evt_pfsumet_branch;
	bool evt_pfsumet_isLoaded;
	float evt_pfsumet_raw_;
	TBranch *evt_pfsumet_raw_branch;
	bool evt_pfsumet_raw_isLoaded;
	float gen_met_;
	TBranch *gen_met_branch;
	bool gen_met_isLoaded;
	float gen_metPhi_;
	TBranch *gen_metPhi_branch;
	bool gen_metPhi_isLoaded;
	float sparm_filterEfficiency_;
	TBranch *sparm_filterEfficiency_branch;
	bool sparm_filterEfficiency_isLoaded;
	float sparm_pdfScale_;
	TBranch *sparm_pdfScale_branch;
	bool sparm_pdfScale_isLoaded;
	float sparm_pdfWeight1_;
	TBranch *sparm_pdfWeight1_branch;
	bool sparm_pdfWeight1_isLoaded;
	float sparm_pdfWeight2_;
	TBranch *sparm_pdfWeight2_branch;
	bool sparm_pdfWeight2_isLoaded;
	float sparm_weight_;
	TBranch *sparm_weight_branch;
	bool sparm_weight_isLoaded;
	float sparm_xsec_;
	TBranch *sparm_xsec_branch;
	bool sparm_xsec_isLoaded;
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  evt_bsp4_;
	TBranch *evt_bsp4_branch;
	bool evt_bsp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > pfjets_nonCHS_p4_;
	TBranch *pfjets_nonCHS_p4_branch;
	bool pfjets_nonCHS_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > ak8jets_mc_gp_p4_;
	TBranch *ak8jets_mc_gp_p4_branch;
	bool ak8jets_mc_gp_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > ak8jets_mc_p4_;
	TBranch *ak8jets_mc_p4_branch;
	bool ak8jets_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_mc_motherp4_;
	TBranch *els_mc_motherp4_branch;
	bool els_mc_motherp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_mc_p4_;
	TBranch *els_mc_p4_branch;
	bool els_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_mc_motherp4_;
	TBranch *mus_mc_motherp4_branch;
	bool mus_mc_motherp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_mc_p4_;
	TBranch *mus_mc_p4_branch;
	bool mus_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > pfjets_mc_gp_p4_;
	TBranch *pfjets_mc_gp_p4_branch;
	bool pfjets_mc_gp_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > pfjets_mc_motherp4_;
	TBranch *pfjets_mc_motherp4_branch;
	bool pfjets_mc_motherp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > pfjets_mc_p4_;
	TBranch *pfjets_mc_p4_branch;
	bool pfjets_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > photons_mc_motherp4_;
	TBranch *photons_mc_motherp4_branch;
	bool photons_mc_motherp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > photons_mc_p4_;
	TBranch *photons_mc_p4_branch;
	bool photons_mc_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_mc_patMatch_p4_;
	TBranch *els_mc_patMatch_p4_branch;
	bool els_mc_patMatch_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_p4_;
	TBranch *els_p4_branch;
	bool els_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_p4In_;
	TBranch *els_p4In_branch;
	bool els_p4In_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_p4Out_;
	TBranch *els_p4Out_branch;
	bool els_p4Out_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_trk_p4_;
	TBranch *els_trk_p4_branch;
	bool els_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_trk_vertex_p4_;
	TBranch *els_trk_vertex_p4_branch;
	bool els_trk_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > els_vertex_p4_;
	TBranch *els_vertex_p4_branch;
	bool els_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > genjets_p4NoMuNoNu_;
	TBranch *genjets_p4NoMuNoNu_branch;
	bool genjets_p4NoMuNoNu_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > genps_p4_;
	TBranch *genps_p4_branch;
	bool genps_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > genps_prod_vtx_;
	TBranch *genps_prod_vtx_branch;
	bool genps_prod_vtx_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > genjets_p4_;
	TBranch *genjets_p4_branch;
	bool genjets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_ll_p4_;
	TBranch *hyp_ll_p4_branch;
	bool hyp_ll_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_lt_p4_;
	TBranch *hyp_lt_p4_branch;
	bool hyp_lt_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > hyp_p4_;
	TBranch *hyp_p4_branch;
	bool hyp_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > isotracks_p4_;
	TBranch *isotracks_p4_branch;
	bool isotracks_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_gfit_p4_;
	TBranch *mus_gfit_p4_branch;
	bool mus_gfit_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_gfit_vertex_p4_;
	TBranch *mus_gfit_vertex_p4_branch;
	bool mus_gfit_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_mc_patMatch_p4_;
	TBranch *mus_mc_patMatch_p4_branch;
	bool mus_mc_patMatch_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_p4_;
	TBranch *mus_p4_branch;
	bool mus_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_pfp4_;
	TBranch *mus_pfp4_branch;
	bool mus_pfp4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_sta_p4_;
	TBranch *mus_sta_p4_branch;
	bool mus_sta_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_sta_vertex_p4_;
	TBranch *mus_sta_vertex_p4_branch;
	bool mus_sta_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_trk_p4_;
	TBranch *mus_trk_p4_branch;
	bool mus_trk_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > mus_vertex_p4_;
	TBranch *mus_vertex_p4_branch;
	bool mus_vertex_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > pfcands_p4_;
	TBranch *pfcands_p4_branch;
	bool pfcands_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > pfjets_p4_;
	TBranch *pfjets_p4_branch;
	bool pfjets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > pfjets_puppi_p4_;
	TBranch *pfjets_puppi_p4_branch;
	bool pfjets_puppi_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > taus_pf_lead_chargecand_p4_;
	TBranch *taus_pf_lead_chargecand_p4_branch;
	bool taus_pf_lead_chargecand_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > taus_pf_lead_neutrcand_p4_;
	TBranch *taus_pf_lead_neutrcand_p4_branch;
	bool taus_pf_lead_neutrcand_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > taus_pf_p4_;
	TBranch *taus_pf_p4_branch;
	bool taus_pf_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > photons_p4_;
	TBranch *photons_p4_branch;
	bool photons_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > svs_p4_;
	TBranch *svs_p4_branch;
	bool svs_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > svs_position_;
	TBranch *svs_position_branch;
	bool svs_position_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > ak8jets_p4_;
	TBranch *ak8jets_p4_branch;
	bool ak8jets_p4_isLoaded;
	vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > vtxs_position_;
	TBranch *vtxs_position_branch;
	bool vtxs_position_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > genps_lepdaughter_p4_;
	TBranch *genps_lepdaughter_p4_branch;
	bool genps_lepdaughter_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > hlt_trigObjs_p4_;
	TBranch *hlt_trigObjs_p4_branch;
	bool hlt_trigObjs_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > taus_pf_isocands_p4_;
	TBranch *taus_pf_isocands_p4_branch;
	bool taus_pf_isocands_p4_isLoaded;
	vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > taus_pf_signalcands_p4_;
	TBranch *taus_pf_signalcands_p4_branch;
	bool taus_pf_signalcands_p4_isLoaded;
	vector<float> pfjets_nonCHS_area_;
	TBranch *pfjets_nonCHS_area_branch;
	bool pfjets_nonCHS_area_isLoaded;
	vector<float> pfjets_nonCHS_chargedEmE_;
	TBranch *pfjets_nonCHS_chargedEmE_branch;
	bool pfjets_nonCHS_chargedEmE_isLoaded;
	vector<float> pfjets_nonCHS_chargedHadronE_;
	TBranch *pfjets_nonCHS_chargedHadronE_branch;
	bool pfjets_nonCHS_chargedHadronE_isLoaded;
	vector<float> pfjets_nonCHS_electronE_;
	TBranch *pfjets_nonCHS_electronE_branch;
	bool pfjets_nonCHS_electronE_isLoaded;
	vector<float> pfjets_nonCHS_hfEmE_;
	TBranch *pfjets_nonCHS_hfEmE_branch;
	bool pfjets_nonCHS_hfEmE_isLoaded;
	vector<float> pfjets_nonCHS_hfHadronE_;
	TBranch *pfjets_nonCHS_hfHadronE_branch;
	bool pfjets_nonCHS_hfHadronE_isLoaded;
	vector<float> pfjets_nonCHS_mass_;
	TBranch *pfjets_nonCHS_mass_branch;
	bool pfjets_nonCHS_mass_isLoaded;
	vector<float> pfjets_nonCHS_muonE_;
	TBranch *pfjets_nonCHS_muonE_branch;
	bool pfjets_nonCHS_muonE_isLoaded;
	vector<float> pfjets_nonCHS_neutralEmE_;
	TBranch *pfjets_nonCHS_neutralEmE_branch;
	bool pfjets_nonCHS_neutralEmE_isLoaded;
	vector<float> pfjets_nonCHS_neutralHadronE_;
	TBranch *pfjets_nonCHS_neutralHadronE_branch;
	bool pfjets_nonCHS_neutralHadronE_isLoaded;
	vector<float> pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_;
	TBranch *pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch;
	bool pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded;
	vector<float> pfjets_nonCHS_photonE_;
	TBranch *pfjets_nonCHS_photonE_branch;
	bool pfjets_nonCHS_photonE_isLoaded;
	vector<float> pfjets_nonCHS_pileupJetId_;
	TBranch *pfjets_nonCHS_pileupJetId_branch;
	bool pfjets_nonCHS_pileupJetId_isLoaded;
	vector<float> pfjets_nonCHS_undoJEC_;
	TBranch *pfjets_nonCHS_undoJEC_branch;
	bool pfjets_nonCHS_undoJEC_isLoaded;
	vector<float> evt_bs_covMatrix_;
	TBranch *evt_bs_covMatrix_branch;
	bool evt_bs_covMatrix_isLoaded;
	vector<float> els_mc3dr_;
	TBranch *els_mc3dr_branch;
	bool els_mc3dr_isLoaded;
	vector<float> els_mcdr_;
	TBranch *els_mcdr_branch;
	bool els_mcdr_isLoaded;
	vector<float> mus_mc3dr_;
	TBranch *mus_mc3dr_branch;
	bool mus_mc3dr_isLoaded;
	vector<float> mus_mcdr_;
	TBranch *mus_mcdr_branch;
	bool mus_mcdr_isLoaded;
	vector<float> pfjets_mc3dr_;
	TBranch *pfjets_mc3dr_branch;
	bool pfjets_mc3dr_isLoaded;
	vector<float> pfjets_mcdr_;
	TBranch *pfjets_mcdr_branch;
	bool pfjets_mcdr_isLoaded;
	vector<float> pfjets_mc_emEnergy_;
	TBranch *pfjets_mc_emEnergy_branch;
	bool pfjets_mc_emEnergy_isLoaded;
	vector<float> pfjets_mc_gpdr_;
	TBranch *pfjets_mc_gpdr_branch;
	bool pfjets_mc_gpdr_isLoaded;
	vector<float> pfjets_mc_hadEnergy_;
	TBranch *pfjets_mc_hadEnergy_branch;
	bool pfjets_mc_hadEnergy_isLoaded;
	vector<float> pfjets_mc_invEnergy_;
	TBranch *pfjets_mc_invEnergy_branch;
	bool pfjets_mc_invEnergy_isLoaded;
	vector<float> pfjets_mc_otherEnergy_;
	TBranch *pfjets_mc_otherEnergy_branch;
	bool pfjets_mc_otherEnergy_isLoaded;
	vector<float> photons_mc3dr_;
	TBranch *photons_mc3dr_branch;
	bool photons_mc3dr_isLoaded;
	vector<float> photons_mcdr_;
	TBranch *photons_mcdr_branch;
	bool photons_mcdr_isLoaded;
	vector<float> els_bs2d_;
	TBranch *els_bs2d_branch;
	bool els_bs2d_isLoaded;
	vector<float> els_bs2derr_;
	TBranch *els_bs2derr_branch;
	bool els_bs2derr_isLoaded;
	vector<float> els_bs3d_;
	TBranch *els_bs3d_branch;
	bool els_bs3d_isLoaded;
	vector<float> els_bs3derr_;
	TBranch *els_bs3derr_branch;
	bool els_bs3derr_isLoaded;
	vector<float> els_chi2_;
	TBranch *els_chi2_branch;
	bool els_chi2_isLoaded;
	vector<float> els_ckf_chi2_;
	TBranch *els_ckf_chi2_branch;
	bool els_ckf_chi2_isLoaded;
	vector<float> els_ckf_ndof_;
	TBranch *els_ckf_ndof_branch;
	bool els_ckf_ndof_isLoaded;
	vector<float> els_d0_;
	TBranch *els_d0_branch;
	bool els_d0_isLoaded;
	vector<float> els_d0Err_;
	TBranch *els_d0Err_branch;
	bool els_d0Err_isLoaded;
	vector<float> els_d0corr_;
	TBranch *els_d0corr_branch;
	bool els_d0corr_isLoaded;
	vector<float> els_d0corrPhi_;
	TBranch *els_d0corrPhi_branch;
	bool els_d0corrPhi_isLoaded;
	vector<float> els_d0phiCov_;
	TBranch *els_d0phiCov_branch;
	bool els_d0phiCov_isLoaded;
	vector<float> els_dEtaIn_;
	TBranch *els_dEtaIn_branch;
	bool els_dEtaIn_isLoaded;
	vector<float> els_dEtaOut_;
	TBranch *els_dEtaOut_branch;
	bool els_dEtaOut_isLoaded;
	vector<float> els_dPhiIn_;
	TBranch *els_dPhiIn_branch;
	bool els_dPhiIn_isLoaded;
	vector<float> els_dPhiInPhiOut_;
	TBranch *els_dPhiInPhiOut_branch;
	bool els_dPhiInPhiOut_isLoaded;
	vector<float> els_dPhiOut_;
	TBranch *els_dPhiOut_branch;
	bool els_dPhiOut_isLoaded;
	vector<float> els_deltaEtaEleClusterTrackAtCalo_;
	TBranch *els_deltaEtaEleClusterTrackAtCalo_branch;
	bool els_deltaEtaEleClusterTrackAtCalo_isLoaded;
	vector<float> els_deltaPhiEleClusterTrackAtCalo_;
	TBranch *els_deltaPhiEleClusterTrackAtCalo_branch;
	bool els_deltaPhiEleClusterTrackAtCalo_isLoaded;
	vector<float> els_dxyPV_;
	TBranch *els_dxyPV_branch;
	bool els_dxyPV_isLoaded;
	vector<float> els_dzPV_;
	TBranch *els_dzPV_branch;
	bool els_dzPV_isLoaded;
	vector<float> els_e1x5_;
	TBranch *els_e1x5_branch;
	bool els_e1x5_isLoaded;
	vector<float> els_e1x5_full5x5_;
	TBranch *els_e1x5_full5x5_branch;
	bool els_e1x5_full5x5_isLoaded;
	vector<float> els_e2x5Max_;
	TBranch *els_e2x5Max_branch;
	bool els_e2x5Max_isLoaded;
	vector<float> els_e2x5Max_full5x5_;
	TBranch *els_e2x5Max_full5x5_branch;
	bool els_e2x5Max_full5x5_isLoaded;
	vector<float> els_e5x5_;
	TBranch *els_e5x5_branch;
	bool els_e5x5_isLoaded;
	vector<float> els_e5x5_full5x5_;
	TBranch *els_e5x5_full5x5_branch;
	bool els_e5x5_full5x5_isLoaded;
	vector<float> els_eOverPIn_;
	TBranch *els_eOverPIn_branch;
	bool els_eOverPIn_isLoaded;
	vector<float> els_eOverPOut_;
	TBranch *els_eOverPOut_branch;
	bool els_eOverPOut_isLoaded;
	vector<float> els_eSC_;
	TBranch *els_eSC_branch;
	bool els_eSC_isLoaded;
	vector<float> els_eSCPresh_;
	TBranch *els_eSCPresh_branch;
	bool els_eSCPresh_isLoaded;
	vector<float> els_eSCRaw_;
	TBranch *els_eSCRaw_branch;
	bool els_eSCRaw_isLoaded;
	vector<float> els_eSeed_;
	TBranch *els_eSeed_branch;
	bool els_eSeed_isLoaded;
	vector<float> els_eSeedOverPIn_;
	TBranch *els_eSeedOverPIn_branch;
	bool els_eSeedOverPIn_isLoaded;
	vector<float> els_eSeedOverPOut_;
	TBranch *els_eSeedOverPOut_branch;
	bool els_eSeedOverPOut_isLoaded;
	vector<float> els_ecalEnergy_;
	TBranch *els_ecalEnergy_branch;
	bool els_ecalEnergy_isLoaded;
	vector<float> els_ecalEnergyError_;
	TBranch *els_ecalEnergyError_branch;
	bool els_ecalEnergyError_isLoaded;
	vector<float> els_ecalIso_;
	TBranch *els_ecalIso_branch;
	bool els_ecalIso_isLoaded;
	vector<float> els_ecalIso04_;
	TBranch *els_ecalIso04_branch;
	bool els_ecalIso04_isLoaded;
	vector<float> els_ecalPFClusterIso_;
	TBranch *els_ecalPFClusterIso_branch;
	bool els_ecalPFClusterIso_isLoaded;
	vector<float> els_etaErr_;
	TBranch *els_etaErr_branch;
	bool els_etaErr_isLoaded;
	vector<float> els_etaSC_;
	TBranch *els_etaSC_branch;
	bool els_etaSC_isLoaded;
	vector<float> els_etaSCwidth_;
	TBranch *els_etaSCwidth_branch;
	bool els_etaSCwidth_isLoaded;
	vector<float> els_fbrem_;
	TBranch *els_fbrem_branch;
	bool els_fbrem_isLoaded;
	vector<float> els_hOverE_;
	TBranch *els_hOverE_branch;
	bool els_hOverE_isLoaded;
	vector<float> els_hOverEBC_;
	TBranch *els_hOverEBC_branch;
	bool els_hOverEBC_isLoaded;
	vector<float> els_hcalDepth1OverEcal_;
	TBranch *els_hcalDepth1OverEcal_branch;
	bool els_hcalDepth1OverEcal_isLoaded;
	vector<float> els_hcalDepth1TowerSumEt_;
	TBranch *els_hcalDepth1TowerSumEt_branch;
	bool els_hcalDepth1TowerSumEt_isLoaded;
	vector<float> els_hcalDepth1TowerSumEt04_;
	TBranch *els_hcalDepth1TowerSumEt04_branch;
	bool els_hcalDepth1TowerSumEt04_isLoaded;
	vector<float> els_hcalDepth2OverEcal_;
	TBranch *els_hcalDepth2OverEcal_branch;
	bool els_hcalDepth2OverEcal_isLoaded;
	vector<float> els_hcalDepth2TowerSumEt_;
	TBranch *els_hcalDepth2TowerSumEt_branch;
	bool els_hcalDepth2TowerSumEt_isLoaded;
	vector<float> els_hcalDepth2TowerSumEt04_;
	TBranch *els_hcalDepth2TowerSumEt04_branch;
	bool els_hcalDepth2TowerSumEt04_isLoaded;
	vector<float> els_hcalIso_;
	TBranch *els_hcalIso_branch;
	bool els_hcalIso_isLoaded;
	vector<float> els_hcalIso04_;
	TBranch *els_hcalIso04_branch;
	bool els_hcalIso04_isLoaded;
	vector<float> els_hcalPFClusterIso_;
	TBranch *els_hcalPFClusterIso_branch;
	bool els_hcalPFClusterIso_isLoaded;
	vector<float> els_ip2d_;
	TBranch *els_ip2d_branch;
	bool els_ip2d_isLoaded;
	vector<float> els_ip2derr_;
	TBranch *els_ip2derr_branch;
	bool els_ip2derr_isLoaded;
	vector<float> els_ip3d_;
	TBranch *els_ip3d_branch;
	bool els_ip3d_isLoaded;
	vector<float> els_ip3derr_;
	TBranch *els_ip3derr_branch;
	bool els_ip3derr_isLoaded;
	vector<float> els_mass_;
	TBranch *els_mass_branch;
	bool els_mass_isLoaded;
	vector<float> els_mc_patMatch_dr_;
	TBranch *els_mc_patMatch_dr_branch;
	bool els_mc_patMatch_dr_isLoaded;
	vector<float> els_miniIso_ch_;
	TBranch *els_miniIso_ch_branch;
	bool els_miniIso_ch_isLoaded;
	vector<float> els_miniIso_db_;
	TBranch *els_miniIso_db_branch;
	bool els_miniIso_db_isLoaded;
	vector<float> els_miniIso_em_;
	TBranch *els_miniIso_em_branch;
	bool els_miniIso_em_isLoaded;
	vector<float> els_miniIso_nh_;
	TBranch *els_miniIso_nh_branch;
	bool els_miniIso_nh_isLoaded;
	vector<float> els_miniIso_uncor_;
	TBranch *els_miniIso_uncor_branch;
	bool els_miniIso_uncor_isLoaded;
	vector<float> els_mva_;
	TBranch *els_mva_branch;
	bool els_mva_isLoaded;
	vector<float> els_ndof_;
	TBranch *els_ndof_branch;
	bool els_ndof_isLoaded;
	vector<float> els_pfChargedHadronIso_;
	TBranch *els_pfChargedHadronIso_branch;
	bool els_pfChargedHadronIso_isLoaded;
	vector<float> els_pfNeutralHadronIso_;
	TBranch *els_pfNeutralHadronIso_branch;
	bool els_pfNeutralHadronIso_isLoaded;
	vector<float> els_pfPUIso_;
	TBranch *els_pfPUIso_branch;
	bool els_pfPUIso_isLoaded;
	vector<float> els_pfPhotonIso_;
	TBranch *els_pfPhotonIso_branch;
	bool els_pfPhotonIso_isLoaded;
	vector<float> els_phiErr_;
	TBranch *els_phiErr_branch;
	bool els_phiErr_isLoaded;
	vector<float> els_phiSC_;
	TBranch *els_phiSC_branch;
	bool els_phiSC_isLoaded;
	vector<float> els_phiSCwidth_;
	TBranch *els_phiSCwidth_branch;
	bool els_phiSCwidth_isLoaded;
	vector<float> els_ptErr_;
	TBranch *els_ptErr_branch;
	bool els_ptErr_isLoaded;
	vector<float> els_ptErrGsf_;
	TBranch *els_ptErrGsf_branch;
	bool els_ptErrGsf_isLoaded;
	vector<float> els_r9_;
	TBranch *els_r9_branch;
	bool els_r9_isLoaded;
	vector<float> els_r9_full5x5_;
	TBranch *els_r9_full5x5_branch;
	bool els_r9_full5x5_isLoaded;
	vector<float> els_sigmaEtaEta_;
	TBranch *els_sigmaEtaEta_branch;
	bool els_sigmaEtaEta_isLoaded;
	vector<float> els_sigmaEtaEta_full5x5_;
	TBranch *els_sigmaEtaEta_full5x5_branch;
	bool els_sigmaEtaEta_full5x5_isLoaded;
	vector<float> els_sigmaIEtaIEta_;
	TBranch *els_sigmaIEtaIEta_branch;
	bool els_sigmaIEtaIEta_isLoaded;
	vector<float> els_sigmaIEtaIEta_full5x5_;
	TBranch *els_sigmaIEtaIEta_full5x5_branch;
	bool els_sigmaIEtaIEta_full5x5_isLoaded;
	vector<float> els_sigmaIPhiIPhi_;
	TBranch *els_sigmaIPhiIPhi_branch;
	bool els_sigmaIPhiIPhi_isLoaded;
	vector<float> els_sigmaIPhiIPhi_full5x5_;
	TBranch *els_sigmaIPhiIPhi_full5x5_branch;
	bool els_sigmaIPhiIPhi_full5x5_isLoaded;
	vector<float> els_sigmaIphiIphi_;
	TBranch *els_sigmaIphiIphi_branch;
	bool els_sigmaIphiIphi_isLoaded;
	vector<float> els_tkIso_;
	TBranch *els_tkIso_branch;
	bool els_tkIso_isLoaded;
	vector<float> els_tkIso04_;
	TBranch *els_tkIso04_branch;
	bool els_tkIso04_isLoaded;
	vector<float> els_trackMomentumError_;
	TBranch *els_trackMomentumError_branch;
	bool els_trackMomentumError_isLoaded;
	vector<float> els_trkdr_;
	TBranch *els_trkdr_branch;
	bool els_trkdr_isLoaded;
	vector<float> els_trkshFrac_;
	TBranch *els_trkshFrac_branch;
	bool els_trkshFrac_isLoaded;
	vector<float> els_z0_;
	TBranch *els_z0_branch;
	bool els_z0_isLoaded;
	vector<float> els_z0Err_;
	TBranch *els_z0Err_branch;
	bool els_z0Err_isLoaded;
	vector<float> els_z0corr_;
	TBranch *els_z0corr_branch;
	bool els_z0corr_isLoaded;
	vector<float> genps_charge_;
	TBranch *genps_charge_branch;
	bool genps_charge_isLoaded;
	vector<float> genps_iso_;
	TBranch *genps_iso_branch;
	bool genps_iso_isLoaded;
	vector<float> genps_mass_;
	TBranch *genps_mass_branch;
	bool genps_mass_isLoaded;
	vector<float> genweights_;
	TBranch *genweights_branch;
	bool genweights_isLoaded;
	vector<float> isotracks_dz_;
	TBranch *isotracks_dz_branch;
	bool isotracks_dz_isLoaded;
	vector<float> isotracks_mass_;
	TBranch *isotracks_mass_branch;
	bool isotracks_mass_isLoaded;
	vector<float> isotracks_relIso_;
	TBranch *isotracks_relIso_branch;
	bool isotracks_relIso_isLoaded;
	vector<float> mus_bs2d_;
	TBranch *mus_bs2d_branch;
	bool mus_bs2d_isLoaded;
	vector<float> mus_bs2derr_;
	TBranch *mus_bs2derr_branch;
	bool mus_bs2derr_isLoaded;
	vector<float> mus_bs3d_;
	TBranch *mus_bs3d_branch;
	bool mus_bs3d_isLoaded;
	vector<float> mus_bs3derr_;
	TBranch *mus_bs3derr_branch;
	bool mus_bs3derr_isLoaded;
	vector<float> mus_caloCompatibility_;
	TBranch *mus_caloCompatibility_branch;
	bool mus_caloCompatibility_isLoaded;
	vector<float> mus_chi2_;
	TBranch *mus_chi2_branch;
	bool mus_chi2_isLoaded;
	vector<float> mus_chi2LocalMomentum_;
	TBranch *mus_chi2LocalMomentum_branch;
	bool mus_chi2LocalMomentum_isLoaded;
	vector<float> mus_chi2LocalPosition_;
	TBranch *mus_chi2LocalPosition_branch;
	bool mus_chi2LocalPosition_isLoaded;
	vector<float> mus_d0_;
	TBranch *mus_d0_branch;
	bool mus_d0_isLoaded;
	vector<float> mus_d0Err_;
	TBranch *mus_d0Err_branch;
	bool mus_d0Err_isLoaded;
	vector<float> mus_d0corr_;
	TBranch *mus_d0corr_branch;
	bool mus_d0corr_isLoaded;
	vector<float> mus_d0corrPhi_;
	TBranch *mus_d0corrPhi_branch;
	bool mus_d0corrPhi_isLoaded;
	vector<float> mus_d0phiCov_;
	TBranch *mus_d0phiCov_branch;
	bool mus_d0phiCov_isLoaded;
	vector<float> mus_dxyPV_;
	TBranch *mus_dxyPV_branch;
	bool mus_dxyPV_isLoaded;
	vector<float> mus_dzPV_;
	TBranch *mus_dzPV_branch;
	bool mus_dzPV_isLoaded;
	vector<float> mus_ecal_time_;
	TBranch *mus_ecal_time_branch;
	bool mus_ecal_time_isLoaded;
	vector<float> mus_e_em_;
	TBranch *mus_e_em_branch;
	bool mus_e_em_isLoaded;
	vector<float> mus_e_emS9_;
	TBranch *mus_e_emS9_branch;
	bool mus_e_emS9_isLoaded;
	vector<float> mus_e_had_;
	TBranch *mus_e_had_branch;
	bool mus_e_had_isLoaded;
	vector<float> mus_e_hadS9_;
	TBranch *mus_e_hadS9_branch;
	bool mus_e_hadS9_isLoaded;
	vector<float> mus_e_ho_;
	TBranch *mus_e_ho_branch;
	bool mus_e_ho_isLoaded;
	vector<float> mus_e_hoS9_;
	TBranch *mus_e_hoS9_branch;
	bool mus_e_hoS9_isLoaded;
	vector<float> mus_emMax_;
	TBranch *mus_emMax_branch;
	bool mus_emMax_isLoaded;
	vector<float> mus_emS25_;
	TBranch *mus_emS25_branch;
	bool mus_emS25_isLoaded;
	vector<float> mus_etaErr_;
	TBranch *mus_etaErr_branch;
	bool mus_etaErr_isLoaded;
	vector<float> mus_gfit_chi2_;
	TBranch *mus_gfit_chi2_branch;
	bool mus_gfit_chi2_isLoaded;
	vector<float> mus_gfit_d0_;
	TBranch *mus_gfit_d0_branch;
	bool mus_gfit_d0_isLoaded;
	vector<float> mus_gfit_d0Err_;
	TBranch *mus_gfit_d0Err_branch;
	bool mus_gfit_d0Err_isLoaded;
	vector<float> mus_gfit_d0corr_;
	TBranch *mus_gfit_d0corr_branch;
	bool mus_gfit_d0corr_isLoaded;
	vector<float> mus_gfit_d0corrPhi_;
	TBranch *mus_gfit_d0corrPhi_branch;
	bool mus_gfit_d0corrPhi_isLoaded;
	vector<float> mus_gfit_d0phiCov_;
	TBranch *mus_gfit_d0phiCov_branch;
	bool mus_gfit_d0phiCov_isLoaded;
	vector<float> mus_gfit_ndof_;
	TBranch *mus_gfit_ndof_branch;
	bool mus_gfit_ndof_isLoaded;
	vector<float> mus_gfit_qoverp_;
	TBranch *mus_gfit_qoverp_branch;
	bool mus_gfit_qoverp_isLoaded;
	vector<float> mus_gfit_qoverpError_;
	TBranch *mus_gfit_qoverpError_branch;
	bool mus_gfit_qoverpError_isLoaded;
	vector<float> mus_gfit_z0_;
	TBranch *mus_gfit_z0_branch;
	bool mus_gfit_z0_isLoaded;
	vector<float> mus_gfit_z0Err_;
	TBranch *mus_gfit_z0Err_branch;
	bool mus_gfit_z0Err_isLoaded;
	vector<float> mus_gfit_z0corr_;
	TBranch *mus_gfit_z0corr_branch;
	bool mus_gfit_z0corr_isLoaded;
	vector<float> mus_glbKink_;
	TBranch *mus_glbKink_branch;
	bool mus_glbKink_isLoaded;
	vector<float> mus_glbTrackProbability_;
	TBranch *mus_glbTrackProbability_branch;
	bool mus_glbTrackProbability_isLoaded;
	vector<float> mus_globalDeltaEtaPhi_;
	TBranch *mus_globalDeltaEtaPhi_branch;
	bool mus_globalDeltaEtaPhi_isLoaded;
	vector<float> mus_hadMax_;
	TBranch *mus_hadMax_branch;
	bool mus_hadMax_isLoaded;
	vector<float> mus_hcal_time_;
	TBranch *mus_hcal_time_branch;
	bool mus_hcal_time_isLoaded;
	vector<float> mus_ip2d_;
	TBranch *mus_ip2d_branch;
	bool mus_ip2d_isLoaded;
	vector<float> mus_ip2derr_;
	TBranch *mus_ip2derr_branch;
	bool mus_ip2derr_isLoaded;
	vector<float> mus_ip3d_;
	TBranch *mus_ip3d_branch;
	bool mus_ip3d_isLoaded;
	vector<float> mus_ip3derr_;
	TBranch *mus_ip3derr_branch;
	bool mus_ip3derr_isLoaded;
	vector<float> mus_iso03_emEt_;
	TBranch *mus_iso03_emEt_branch;
	bool mus_iso03_emEt_isLoaded;
	vector<float> mus_iso03_hadEt_;
	TBranch *mus_iso03_hadEt_branch;
	bool mus_iso03_hadEt_isLoaded;
	vector<float> mus_iso03_hoEt_;
	TBranch *mus_iso03_hoEt_branch;
	bool mus_iso03_hoEt_isLoaded;
	vector<float> mus_iso03_sumPt_;
	TBranch *mus_iso03_sumPt_branch;
	bool mus_iso03_sumPt_isLoaded;
	vector<float> mus_iso05_emEt_;
	TBranch *mus_iso05_emEt_branch;
	bool mus_iso05_emEt_isLoaded;
	vector<float> mus_iso05_hadEt_;
	TBranch *mus_iso05_hadEt_branch;
	bool mus_iso05_hadEt_isLoaded;
	vector<float> mus_iso05_hoEt_;
	TBranch *mus_iso05_hoEt_branch;
	bool mus_iso05_hoEt_isLoaded;
	vector<float> mus_iso05_sumPt_;
	TBranch *mus_iso05_sumPt_branch;
	bool mus_iso05_sumPt_isLoaded;
	vector<float> mus_isoMeanDRR03_pf_ChargedHadronPt_;
	TBranch *mus_isoMeanDRR03_pf_ChargedHadronPt_branch;
	bool mus_isoMeanDRR03_pf_ChargedHadronPt_isLoaded;
	vector<float> mus_isoMeanDRR03_pf_ChargedParticlePt_;
	TBranch *mus_isoMeanDRR03_pf_ChargedParticlePt_branch;
	bool mus_isoMeanDRR03_pf_ChargedParticlePt_isLoaded;
	vector<float> mus_isoMeanDRR03_pf_NeutralHadronEt_;
	TBranch *mus_isoMeanDRR03_pf_NeutralHadronEt_branch;
	bool mus_isoMeanDRR03_pf_NeutralHadronEt_isLoaded;
	vector<float> mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_;
	TBranch *mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_branch;
	bool mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_isLoaded;
	vector<float> mus_isoMeanDRR03_pf_PUPt_;
	TBranch *mus_isoMeanDRR03_pf_PUPt_branch;
	bool mus_isoMeanDRR03_pf_PUPt_isLoaded;
	vector<float> mus_isoMeanDRR03_pf_PhotonEt_;
	TBranch *mus_isoMeanDRR03_pf_PhotonEt_branch;
	bool mus_isoMeanDRR03_pf_PhotonEt_isLoaded;
	vector<float> mus_isoMeanDRR03_pf_PhotonEtHighThreshold_;
	TBranch *mus_isoMeanDRR03_pf_PhotonEtHighThreshold_branch;
	bool mus_isoMeanDRR03_pf_PhotonEtHighThreshold_isLoaded;
	vector<float> mus_isoMeanDRR04_pf_ChargedHadronPt_;
	TBranch *mus_isoMeanDRR04_pf_ChargedHadronPt_branch;
	bool mus_isoMeanDRR04_pf_ChargedHadronPt_isLoaded;
	vector<float> mus_isoMeanDRR04_pf_ChargedParticlePt_;
	TBranch *mus_isoMeanDRR04_pf_ChargedParticlePt_branch;
	bool mus_isoMeanDRR04_pf_ChargedParticlePt_isLoaded;
	vector<float> mus_isoMeanDRR04_pf_NeutralHadronEt_;
	TBranch *mus_isoMeanDRR04_pf_NeutralHadronEt_branch;
	bool mus_isoMeanDRR04_pf_NeutralHadronEt_isLoaded;
	vector<float> mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_;
	TBranch *mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_branch;
	bool mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_isLoaded;
	vector<float> mus_isoMeanDRR04_pf_PUPt_;
	TBranch *mus_isoMeanDRR04_pf_PUPt_branch;
	bool mus_isoMeanDRR04_pf_PUPt_isLoaded;
	vector<float> mus_isoMeanDRR04_pf_PhotonEt_;
	TBranch *mus_isoMeanDRR04_pf_PhotonEt_branch;
	bool mus_isoMeanDRR04_pf_PhotonEt_isLoaded;
	vector<float> mus_isoMeanDRR04_pf_PhotonEtHighThreshold_;
	TBranch *mus_isoMeanDRR04_pf_PhotonEtHighThreshold_branch;
	bool mus_isoMeanDRR04_pf_PhotonEtHighThreshold_isLoaded;
	vector<float> mus_isoR03_pf_ChargedHadronPt_;
	TBranch *mus_isoR03_pf_ChargedHadronPt_branch;
	bool mus_isoR03_pf_ChargedHadronPt_isLoaded;
	vector<float> mus_isoR03_pf_ChargedParticlePt_;
	TBranch *mus_isoR03_pf_ChargedParticlePt_branch;
	bool mus_isoR03_pf_ChargedParticlePt_isLoaded;
	vector<float> mus_isoR03_pf_NeutralHadronEt_;
	TBranch *mus_isoR03_pf_NeutralHadronEt_branch;
	bool mus_isoR03_pf_NeutralHadronEt_isLoaded;
	vector<float> mus_isoR03_pf_NeutralHadronEtHighThreshold_;
	TBranch *mus_isoR03_pf_NeutralHadronEtHighThreshold_branch;
	bool mus_isoR03_pf_NeutralHadronEtHighThreshold_isLoaded;
	vector<float> mus_isoR03_pf_PUPt_;
	TBranch *mus_isoR03_pf_PUPt_branch;
	bool mus_isoR03_pf_PUPt_isLoaded;
	vector<float> mus_isoR03_pf_PhotonEt_;
	TBranch *mus_isoR03_pf_PhotonEt_branch;
	bool mus_isoR03_pf_PhotonEt_isLoaded;
	vector<float> mus_isoR03_pf_PhotonEtHighThreshold_;
	TBranch *mus_isoR03_pf_PhotonEtHighThreshold_branch;
	bool mus_isoR03_pf_PhotonEtHighThreshold_isLoaded;
	vector<float> mus_isoR04_pf_ChargedHadronPt_;
	TBranch *mus_isoR04_pf_ChargedHadronPt_branch;
	bool mus_isoR04_pf_ChargedHadronPt_isLoaded;
	vector<float> mus_isoR04_pf_ChargedParticlePt_;
	TBranch *mus_isoR04_pf_ChargedParticlePt_branch;
	bool mus_isoR04_pf_ChargedParticlePt_isLoaded;
	vector<float> mus_isoR04_pf_NeutralHadronEt_;
	TBranch *mus_isoR04_pf_NeutralHadronEt_branch;
	bool mus_isoR04_pf_NeutralHadronEt_isLoaded;
	vector<float> mus_isoR04_pf_NeutralHadronEtHighThreshold_;
	TBranch *mus_isoR04_pf_NeutralHadronEtHighThreshold_branch;
	bool mus_isoR04_pf_NeutralHadronEtHighThreshold_isLoaded;
	vector<float> mus_isoR04_pf_PUPt_;
	TBranch *mus_isoR04_pf_PUPt_branch;
	bool mus_isoR04_pf_PUPt_isLoaded;
	vector<float> mus_isoR04_pf_PhotonEt_;
	TBranch *mus_isoR04_pf_PhotonEt_branch;
	bool mus_isoR04_pf_PhotonEt_isLoaded;
	vector<float> mus_isoR04_pf_PhotonEtHighThreshold_;
	TBranch *mus_isoR04_pf_PhotonEtHighThreshold_branch;
	bool mus_isoR04_pf_PhotonEtHighThreshold_isLoaded;
	vector<float> mus_isoSumDRR03_pf_ChargedHadronPt_;
	TBranch *mus_isoSumDRR03_pf_ChargedHadronPt_branch;
	bool mus_isoSumDRR03_pf_ChargedHadronPt_isLoaded;
	vector<float> mus_isoSumDRR03_pf_ChargedParticlePt_;
	TBranch *mus_isoSumDRR03_pf_ChargedParticlePt_branch;
	bool mus_isoSumDRR03_pf_ChargedParticlePt_isLoaded;
	vector<float> mus_isoSumDRR03_pf_NeutralHadronEt_;
	TBranch *mus_isoSumDRR03_pf_NeutralHadronEt_branch;
	bool mus_isoSumDRR03_pf_NeutralHadronEt_isLoaded;
	vector<float> mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_;
	TBranch *mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_branch;
	bool mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_isLoaded;
	vector<float> mus_isoSumDRR03_pf_PUPt_;
	TBranch *mus_isoSumDRR03_pf_PUPt_branch;
	bool mus_isoSumDRR03_pf_PUPt_isLoaded;
	vector<float> mus_isoSumDRR03_pf_PhotonEt_;
	TBranch *mus_isoSumDRR03_pf_PhotonEt_branch;
	bool mus_isoSumDRR03_pf_PhotonEt_isLoaded;
	vector<float> mus_isoSumDRR03_pf_PhotonEtHighThreshold_;
	TBranch *mus_isoSumDRR03_pf_PhotonEtHighThreshold_branch;
	bool mus_isoSumDRR03_pf_PhotonEtHighThreshold_isLoaded;
	vector<float> mus_isoSumDRR04_pf_ChargedHadronPt_;
	TBranch *mus_isoSumDRR04_pf_ChargedHadronPt_branch;
	bool mus_isoSumDRR04_pf_ChargedHadronPt_isLoaded;
	vector<float> mus_isoSumDRR04_pf_ChargedParticlePt_;
	TBranch *mus_isoSumDRR04_pf_ChargedParticlePt_branch;
	bool mus_isoSumDRR04_pf_ChargedParticlePt_isLoaded;
	vector<float> mus_isoSumDRR04_pf_NeutralHadronEt_;
	TBranch *mus_isoSumDRR04_pf_NeutralHadronEt_branch;
	bool mus_isoSumDRR04_pf_NeutralHadronEt_isLoaded;
	vector<float> mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_;
	TBranch *mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_branch;
	bool mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_isLoaded;
	vector<float> mus_isoSumDRR04_pf_PUPt_;
	TBranch *mus_isoSumDRR04_pf_PUPt_branch;
	bool mus_isoSumDRR04_pf_PUPt_isLoaded;
	vector<float> mus_isoSumDRR04_pf_PhotonEt_;
	TBranch *mus_isoSumDRR04_pf_PhotonEt_branch;
	bool mus_isoSumDRR04_pf_PhotonEt_isLoaded;
	vector<float> mus_isoSumDRR04_pf_PhotonEtHighThreshold_;
	TBranch *mus_isoSumDRR04_pf_PhotonEtHighThreshold_branch;
	bool mus_isoSumDRR04_pf_PhotonEtHighThreshold_isLoaded;
	vector<float> mus_iso_ecalvetoDep_;
	TBranch *mus_iso_ecalvetoDep_branch;
	bool mus_iso_ecalvetoDep_isLoaded;
	vector<float> mus_iso_hcalvetoDep_;
	TBranch *mus_iso_hcalvetoDep_branch;
	bool mus_iso_hcalvetoDep_isLoaded;
	vector<float> mus_iso_hovetoDep_;
	TBranch *mus_iso_hovetoDep_branch;
	bool mus_iso_hovetoDep_isLoaded;
	vector<float> mus_iso_trckvetoDep_;
	TBranch *mus_iso_trckvetoDep_branch;
	bool mus_iso_trckvetoDep_isLoaded;
	vector<float> mus_localDistance_;
	TBranch *mus_localDistance_branch;
	bool mus_localDistance_isLoaded;
	vector<float> mus_mass_;
	TBranch *mus_mass_branch;
	bool mus_mass_isLoaded;
	vector<float> mus_mc_patMatch_dr_;
	TBranch *mus_mc_patMatch_dr_branch;
	bool mus_mc_patMatch_dr_isLoaded;
	vector<float> mus_miniIso_ch_;
	TBranch *mus_miniIso_ch_branch;
	bool mus_miniIso_ch_isLoaded;
	vector<float> mus_miniIso_db_;
	TBranch *mus_miniIso_db_branch;
	bool mus_miniIso_db_isLoaded;
	vector<float> mus_miniIso_em_;
	TBranch *mus_miniIso_em_branch;
	bool mus_miniIso_em_isLoaded;
	vector<float> mus_miniIso_nh_;
	TBranch *mus_miniIso_nh_branch;
	bool mus_miniIso_nh_isLoaded;
	vector<float> mus_miniIso_uncor_;
	TBranch *mus_miniIso_uncor_branch;
	bool mus_miniIso_uncor_isLoaded;
	vector<float> mus_ndof_;
	TBranch *mus_ndof_branch;
	bool mus_ndof_isLoaded;
	vector<float> mus_phiErr_;
	TBranch *mus_phiErr_branch;
	bool mus_phiErr_isLoaded;
	vector<float> mus_ptErr_;
	TBranch *mus_ptErr_branch;
	bool mus_ptErr_isLoaded;
	vector<float> mus_qoverp_;
	TBranch *mus_qoverp_branch;
	bool mus_qoverp_isLoaded;
	vector<float> mus_qoverpError_;
	TBranch *mus_qoverpError_branch;
	bool mus_qoverpError_isLoaded;
	vector<float> mus_segmCompatibility_;
	TBranch *mus_segmCompatibility_branch;
	bool mus_segmCompatibility_isLoaded;
	vector<float> mus_staRelChi2_;
	TBranch *mus_staRelChi2_branch;
	bool mus_staRelChi2_isLoaded;
	vector<float> mus_sta_chi2_;
	TBranch *mus_sta_chi2_branch;
	bool mus_sta_chi2_isLoaded;
	vector<float> mus_sta_d0_;
	TBranch *mus_sta_d0_branch;
	bool mus_sta_d0_isLoaded;
	vector<float> mus_sta_d0Err_;
	TBranch *mus_sta_d0Err_branch;
	bool mus_sta_d0Err_isLoaded;
	vector<float> mus_sta_d0corr_;
	TBranch *mus_sta_d0corr_branch;
	bool mus_sta_d0corr_isLoaded;
	vector<float> mus_sta_d0corrPhi_;
	TBranch *mus_sta_d0corrPhi_branch;
	bool mus_sta_d0corrPhi_isLoaded;
	vector<float> mus_sta_d0phiCov_;
	TBranch *mus_sta_d0phiCov_branch;
	bool mus_sta_d0phiCov_isLoaded;
	vector<float> mus_sta_ndof_;
	TBranch *mus_sta_ndof_branch;
	bool mus_sta_ndof_isLoaded;
	vector<float> mus_sta_qoverp_;
	TBranch *mus_sta_qoverp_branch;
	bool mus_sta_qoverp_isLoaded;
	vector<float> mus_sta_qoverpError_;
	TBranch *mus_sta_qoverpError_branch;
	bool mus_sta_qoverpError_isLoaded;
	vector<float> mus_sta_z0_;
	TBranch *mus_sta_z0_branch;
	bool mus_sta_z0_isLoaded;
	vector<float> mus_sta_z0Err_;
	TBranch *mus_sta_z0Err_branch;
	bool mus_sta_z0Err_isLoaded;
	vector<float> mus_sta_z0corr_;
	TBranch *mus_sta_z0corr_branch;
	bool mus_sta_z0corr_isLoaded;
	vector<float> mus_timeAtIpInOut_;
	TBranch *mus_timeAtIpInOut_branch;
	bool mus_timeAtIpInOut_isLoaded;
	vector<float> mus_timeAtIpInOutErr_;
	TBranch *mus_timeAtIpInOutErr_branch;
	bool mus_timeAtIpInOutErr_isLoaded;
	vector<float> mus_timeAtIpOutIn_;
	TBranch *mus_timeAtIpOutIn_branch;
	bool mus_timeAtIpOutIn_isLoaded;
	vector<float> mus_timeAtIpOutInErr_;
	TBranch *mus_timeAtIpOutInErr_branch;
	bool mus_timeAtIpOutInErr_isLoaded;
	vector<float> mus_trkKink_;
	TBranch *mus_trkKink_branch;
	bool mus_trkKink_isLoaded;
	vector<float> mus_trkRelChi2_;
	TBranch *mus_trkRelChi2_branch;
	bool mus_trkRelChi2_isLoaded;
	vector<float> mus_vertexphi_;
	TBranch *mus_vertexphi_branch;
	bool mus_vertexphi_isLoaded;
	vector<float> mus_z0_;
	TBranch *mus_z0_branch;
	bool mus_z0_isLoaded;
	vector<float> mus_z0Err_;
	TBranch *mus_z0Err_branch;
	bool mus_z0Err_isLoaded;
	vector<float> mus_z0corr_;
	TBranch *mus_z0corr_branch;
	bool mus_z0corr_isLoaded;
	vector<float> pfcands_dz_;
	TBranch *pfcands_dz_branch;
	bool pfcands_dz_isLoaded;
	vector<float> pfcands_mass_;
	TBranch *pfcands_mass_branch;
	bool pfcands_mass_isLoaded;
	vector<float> pfjets_area_;
	TBranch *pfjets_area_branch;
	bool pfjets_area_isLoaded;
	vector<float> pfjets_chargedEmE_;
	TBranch *pfjets_chargedEmE_branch;
	bool pfjets_chargedEmE_isLoaded;
	vector<float> pfjets_chargedHadronE_;
	TBranch *pfjets_chargedHadronE_branch;
	bool pfjets_chargedHadronE_isLoaded;
	vector<float> pfjets_electronE_;
	TBranch *pfjets_electronE_branch;
	bool pfjets_electronE_isLoaded;
	vector<float> pfjets_hfEmE_;
	TBranch *pfjets_hfEmE_branch;
	bool pfjets_hfEmE_isLoaded;
	vector<float> pfjets_hfHadronE_;
	TBranch *pfjets_hfHadronE_branch;
	bool pfjets_hfHadronE_isLoaded;
	vector<float> pfjets_mass_;
	TBranch *pfjets_mass_branch;
	bool pfjets_mass_isLoaded;
	vector<float> pfjets_muonE_;
	TBranch *pfjets_muonE_branch;
	bool pfjets_muonE_isLoaded;
	vector<float> pfjets_neutralEmE_;
	TBranch *pfjets_neutralEmE_branch;
	bool pfjets_neutralEmE_isLoaded;
	vector<float> pfjets_neutralHadronE_;
	TBranch *pfjets_neutralHadronE_branch;
	bool pfjets_neutralHadronE_isLoaded;
	vector<float> pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_;
	TBranch *pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch;
	bool pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded;
	vector<float> pfjets_photonE_;
	TBranch *pfjets_photonE_branch;
	bool pfjets_photonE_isLoaded;
	vector<float> pfjets_pileupJetId_;
	TBranch *pfjets_pileupJetId_branch;
	bool pfjets_pileupJetId_isLoaded;
	vector<float> pfjets_undoJEC_;
	TBranch *pfjets_undoJEC_branch;
	bool pfjets_undoJEC_isLoaded;
	vector<float> pfjets_puppi_area_;
	TBranch *pfjets_puppi_area_branch;
	bool pfjets_puppi_area_isLoaded;
	vector<float> pfjets_puppi_chargedEmE_;
	TBranch *pfjets_puppi_chargedEmE_branch;
	bool pfjets_puppi_chargedEmE_isLoaded;
	vector<float> pfjets_puppi_chargedHadronE_;
	TBranch *pfjets_puppi_chargedHadronE_branch;
	bool pfjets_puppi_chargedHadronE_isLoaded;
	vector<float> pfjets_puppi_electronE_;
	TBranch *pfjets_puppi_electronE_branch;
	bool pfjets_puppi_electronE_isLoaded;
	vector<float> pfjets_puppi_hfEmE_;
	TBranch *pfjets_puppi_hfEmE_branch;
	bool pfjets_puppi_hfEmE_isLoaded;
	vector<float> pfjets_puppi_hfHadronE_;
	TBranch *pfjets_puppi_hfHadronE_branch;
	bool pfjets_puppi_hfHadronE_isLoaded;
	vector<float> pfjets_puppi_mass_;
	TBranch *pfjets_puppi_mass_branch;
	bool pfjets_puppi_mass_isLoaded;
	vector<float> pfjets_puppi_muonE_;
	TBranch *pfjets_puppi_muonE_branch;
	bool pfjets_puppi_muonE_isLoaded;
	vector<float> pfjets_puppi_neutralEmE_;
	TBranch *pfjets_puppi_neutralEmE_branch;
	bool pfjets_puppi_neutralEmE_isLoaded;
	vector<float> pfjets_puppi_neutralHadronE_;
	TBranch *pfjets_puppi_neutralHadronE_branch;
	bool pfjets_puppi_neutralHadronE_isLoaded;
	vector<float> pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_;
	TBranch *pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch;
	bool pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded;
	vector<float> pfjets_puppi_photonE_;
	TBranch *pfjets_puppi_photonE_branch;
	bool pfjets_puppi_photonE_isLoaded;
	vector<float> pfjets_puppi_pileupJetId_;
	TBranch *pfjets_puppi_pileupJetId_branch;
	bool pfjets_puppi_pileupJetId_isLoaded;
	vector<float> pfjets_puppi_undoJEC_;
	TBranch *pfjets_puppi_undoJEC_branch;
	bool pfjets_puppi_undoJEC_isLoaded;
	vector<float> taus_pf_mass_;
	TBranch *taus_pf_mass_branch;
	bool taus_pf_mass_isLoaded;
	vector<float> photons_chargedHadronIso_;
	TBranch *photons_chargedHadronIso_branch;
	bool photons_chargedHadronIso_isLoaded;
	vector<float> photons_e1x5_;
	TBranch *photons_e1x5_branch;
	bool photons_e1x5_isLoaded;
	vector<float> photons_e2x5Max_;
	TBranch *photons_e2x5Max_branch;
	bool photons_e2x5Max_isLoaded;
	vector<float> photons_e3x3_;
	TBranch *photons_e3x3_branch;
	bool photons_e3x3_isLoaded;
	vector<float> photons_e5x5_;
	TBranch *photons_e5x5_branch;
	bool photons_e5x5_isLoaded;
	vector<float> photons_eSC_;
	TBranch *photons_eSC_branch;
	bool photons_eSC_isLoaded;
	vector<float> photons_eSCPresh_;
	TBranch *photons_eSCPresh_branch;
	bool photons_eSCPresh_isLoaded;
	vector<float> photons_eSCRaw_;
	TBranch *photons_eSCRaw_branch;
	bool photons_eSCRaw_isLoaded;
	vector<float> photons_ecalIso03_;
	TBranch *photons_ecalIso03_branch;
	bool photons_ecalIso03_isLoaded;
	vector<float> photons_ecalIso04_;
	TBranch *photons_ecalIso04_branch;
	bool photons_ecalIso04_isLoaded;
	vector<float> photons_ecalPFClusterIso_;
	TBranch *photons_ecalPFClusterIso_branch;
	bool photons_ecalPFClusterIso_isLoaded;
	vector<float> photons_etaSC_;
	TBranch *photons_etaSC_branch;
	bool photons_etaSC_isLoaded;
	vector<float> photons_full3x3_e3x3_;
	TBranch *photons_full3x3_e3x3_branch;
	bool photons_full3x3_e3x3_isLoaded;
	vector<float> photons_full5x5_e1x5_;
	TBranch *photons_full5x5_e1x5_branch;
	bool photons_full5x5_e1x5_isLoaded;
	vector<float> photons_full5x5_e2x5Max_;
	TBranch *photons_full5x5_e2x5Max_branch;
	bool photons_full5x5_e2x5Max_isLoaded;
	vector<float> photons_full5x5_e5x5_;
	TBranch *photons_full5x5_e5x5_branch;
	bool photons_full5x5_e5x5_isLoaded;
	vector<float> photons_full5x5_hOverE_;
	TBranch *photons_full5x5_hOverE_branch;
	bool photons_full5x5_hOverE_isLoaded;
	vector<float> photons_full5x5_hOverEtowBC_;
	TBranch *photons_full5x5_hOverEtowBC_branch;
	bool photons_full5x5_hOverEtowBC_isLoaded;
	vector<float> photons_full5x5_r9_;
	TBranch *photons_full5x5_r9_branch;
	bool photons_full5x5_r9_isLoaded;
	vector<float> photons_full5x5_sigmaEtaEta_;
	TBranch *photons_full5x5_sigmaEtaEta_branch;
	bool photons_full5x5_sigmaEtaEta_isLoaded;
	vector<float> photons_full5x5_sigmaIEtaIEta_;
	TBranch *photons_full5x5_sigmaIEtaIEta_branch;
	bool photons_full5x5_sigmaIEtaIEta_isLoaded;
	vector<float> photons_hOverE_;
	TBranch *photons_hOverE_branch;
	bool photons_hOverE_isLoaded;
	vector<float> photons_hOverEtowBC_;
	TBranch *photons_hOverEtowBC_branch;
	bool photons_hOverEtowBC_isLoaded;
	vector<float> photons_hcalDepth1TowerSumEtBcConeDR03_;
	TBranch *photons_hcalDepth1TowerSumEtBcConeDR03_branch;
	bool photons_hcalDepth1TowerSumEtBcConeDR03_isLoaded;
	vector<float> photons_hcalDepth1TowerSumEtBcConeDR04_;
	TBranch *photons_hcalDepth1TowerSumEtBcConeDR04_branch;
	bool photons_hcalDepth1TowerSumEtBcConeDR04_isLoaded;
	vector<float> photons_hcalDepth2TowerSumEtBcConeDR03_;
	TBranch *photons_hcalDepth2TowerSumEtBcConeDR03_branch;
	bool photons_hcalDepth2TowerSumEtBcConeDR03_isLoaded;
	vector<float> photons_hcalDepth2TowerSumEtBcConeDR04_;
	TBranch *photons_hcalDepth2TowerSumEtBcConeDR04_branch;
	bool photons_hcalDepth2TowerSumEtBcConeDR04_isLoaded;
	vector<float> photons_hcalIso03_;
	TBranch *photons_hcalIso03_branch;
	bool photons_hcalIso03_isLoaded;
	vector<float> photons_hcalIso04_;
	TBranch *photons_hcalIso04_branch;
	bool photons_hcalIso04_isLoaded;
	vector<float> photons_hcalPFClusterIso_;
	TBranch *photons_hcalPFClusterIso_branch;
	bool photons_hcalPFClusterIso_isLoaded;
	vector<float> photons_hcalTowerSumEtBcConeDR03_;
	TBranch *photons_hcalTowerSumEtBcConeDR03_branch;
	bool photons_hcalTowerSumEtBcConeDR03_isLoaded;
	vector<float> photons_hcalTowerSumEtBcConeDR04_;
	TBranch *photons_hcalTowerSumEtBcConeDR04_branch;
	bool photons_hcalTowerSumEtBcConeDR04_isLoaded;
	vector<float> photons_mass_;
	TBranch *photons_mass_branch;
	bool photons_mass_isLoaded;
	vector<float> photons_neutralHadronIso_;
	TBranch *photons_neutralHadronIso_branch;
	bool photons_neutralHadronIso_isLoaded;
	vector<float> photons_ntkIsoHollow03_;
	TBranch *photons_ntkIsoHollow03_branch;
	bool photons_ntkIsoHollow03_isLoaded;
	vector<float> photons_ntkIsoHollow04_;
	TBranch *photons_ntkIsoHollow04_branch;
	bool photons_ntkIsoHollow04_isLoaded;
	vector<float> photons_ntkIsoSolid03_;
	TBranch *photons_ntkIsoSolid03_branch;
	bool photons_ntkIsoSolid03_isLoaded;
	vector<float> photons_ntkIsoSolid04_;
	TBranch *photons_ntkIsoSolid04_branch;
	bool photons_ntkIsoSolid04_isLoaded;
	vector<float> photons_phiSC_;
	TBranch *photons_phiSC_branch;
	bool photons_phiSC_isLoaded;
	vector<float> photons_photonIso_;
	TBranch *photons_photonIso_branch;
	bool photons_photonIso_isLoaded;
	vector<float> photons_recoChargedHadronIso_;
	TBranch *photons_recoChargedHadronIso_branch;
	bool photons_recoChargedHadronIso_isLoaded;
	vector<float> photons_recoNeutralHadronIso_;
	TBranch *photons_recoNeutralHadronIso_branch;
	bool photons_recoNeutralHadronIso_isLoaded;
	vector<float> photons_recoPhotonIso_;
	TBranch *photons_recoPhotonIso_branch;
	bool photons_recoPhotonIso_isLoaded;
	vector<float> photons_sigmaEtaEta_;
	TBranch *photons_sigmaEtaEta_branch;
	bool photons_sigmaEtaEta_isLoaded;
	vector<float> photons_sigmaIEtaIEta_;
	TBranch *photons_sigmaIEtaIEta_branch;
	bool photons_sigmaIEtaIEta_isLoaded;
	vector<float> photons_tkIsoHollow03_;
	TBranch *photons_tkIsoHollow03_branch;
	bool photons_tkIsoHollow03_isLoaded;
	vector<float> photons_tkIsoHollow04_;
	TBranch *photons_tkIsoHollow04_branch;
	bool photons_tkIsoHollow04_isLoaded;
	vector<float> photons_tkIsoSolid03_;
	TBranch *photons_tkIsoSolid03_branch;
	bool photons_tkIsoSolid03_isLoaded;
	vector<float> photons_tkIsoSolid04_;
	TBranch *photons_tkIsoSolid04_branch;
	bool photons_tkIsoSolid04_isLoaded;
	vector<float> puInfo_trueNumInteractions_;
	TBranch *puInfo_trueNumInteractions_branch;
	bool puInfo_trueNumInteractions_isLoaded;
	vector<float> convs_chi2_;
	TBranch *convs_chi2_branch;
	bool convs_chi2_isLoaded;
	vector<float> convs_dl_;
	TBranch *convs_dl_branch;
	bool convs_dl_isLoaded;
	vector<float> convs_ndof_;
	TBranch *convs_ndof_branch;
	bool convs_ndof_isLoaded;
	vector<float> sparm_values_;
	TBranch *sparm_values_branch;
	bool sparm_values_isLoaded;
	vector<float> svs_anglePV_;
	TBranch *svs_anglePV_branch;
	bool svs_anglePV_isLoaded;
	vector<float> svs_chi2_;
	TBranch *svs_chi2_branch;
	bool svs_chi2_isLoaded;
	vector<float> svs_dist3Dsig_;
	TBranch *svs_dist3Dsig_branch;
	bool svs_dist3Dsig_isLoaded;
	vector<float> svs_dist3Dval_;
	TBranch *svs_dist3Dval_branch;
	bool svs_dist3Dval_isLoaded;
	vector<float> svs_distXYsig_;
	TBranch *svs_distXYsig_branch;
	bool svs_distXYsig_isLoaded;
	vector<float> svs_distXYval_;
	TBranch *svs_distXYval_branch;
	bool svs_distXYval_isLoaded;
	vector<float> svs_ndof_;
	TBranch *svs_ndof_branch;
	bool svs_ndof_isLoaded;
	vector<float> svs_prob_;
	TBranch *svs_prob_branch;
	bool svs_prob_isLoaded;
	vector<float> svs_xError_;
	TBranch *svs_xError_branch;
	bool svs_xError_isLoaded;
	vector<float> svs_yError_;
	TBranch *svs_yError_branch;
	bool svs_yError_isLoaded;
	vector<float> svs_zError_;
	TBranch *svs_zError_branch;
	bool svs_zError_isLoaded;
	vector<float> ak8jets_area_;
	TBranch *ak8jets_area_branch;
	bool ak8jets_area_isLoaded;
	vector<float> ak8jets_filteredMass_;
	TBranch *ak8jets_filteredMass_branch;
	bool ak8jets_filteredMass_isLoaded;
	vector<float> ak8jets_mass_;
	TBranch *ak8jets_mass_branch;
	bool ak8jets_mass_isLoaded;
	vector<float> ak8jets_minMass_;
	TBranch *ak8jets_minMass_branch;
	bool ak8jets_minMass_isLoaded;
	vector<float> ak8jets_nJettinessTau1_;
	TBranch *ak8jets_nJettinessTau1_branch;
	bool ak8jets_nJettinessTau1_isLoaded;
	vector<float> ak8jets_nJettinessTau2_;
	TBranch *ak8jets_nJettinessTau2_branch;
	bool ak8jets_nJettinessTau2_isLoaded;
	vector<float> ak8jets_nJettinessTau3_;
	TBranch *ak8jets_nJettinessTau3_branch;
	bool ak8jets_nJettinessTau3_isLoaded;
	vector<float> ak8jets_prunedMass_;
	TBranch *ak8jets_prunedMass_branch;
	bool ak8jets_prunedMass_isLoaded;
	vector<float> ak8jets_softdropMass_;
	TBranch *ak8jets_softdropMass_branch;
	bool ak8jets_softdropMass_isLoaded;
	vector<float> ak8jets_topMass_;
	TBranch *ak8jets_topMass_branch;
	bool ak8jets_topMass_isLoaded;
	vector<float> ak8jets_trimmedMass_;
	TBranch *ak8jets_trimmedMass_branch;
	bool ak8jets_trimmedMass_isLoaded;
	vector<float> ak8jets_undoJEC_;
	TBranch *ak8jets_undoJEC_branch;
	bool ak8jets_undoJEC_isLoaded;
	vector<float> vtxs_chi2_;
	TBranch *vtxs_chi2_branch;
	bool vtxs_chi2_isLoaded;
	vector<float> vtxs_ndof_;
	TBranch *vtxs_ndof_branch;
	bool vtxs_ndof_isLoaded;
	vector<float> vtxs_score_;
	TBranch *vtxs_score_branch;
	bool vtxs_score_isLoaded;
	vector<float> vtxs_xError_;
	TBranch *vtxs_xError_branch;
	bool vtxs_xError_isLoaded;
	vector<float> vtxs_yError_;
	TBranch *vtxs_yError_branch;
	bool vtxs_yError_isLoaded;
	vector<float> vtxs_zError_;
	TBranch *vtxs_zError_branch;
	bool vtxs_zError_isLoaded;
	vector<vector<float> > pfjets_nonCHS_bDiscriminators_;
	TBranch *pfjets_nonCHS_bDiscriminators_branch;
	bool pfjets_nonCHS_bDiscriminators_isLoaded;
	vector<vector<float> > mus_stationShowerDeltaR_;
	TBranch *mus_stationShowerDeltaR_branch;
	bool mus_stationShowerDeltaR_isLoaded;
	vector<vector<float> > mus_stationShowerSizeT_;
	TBranch *mus_stationShowerSizeT_branch;
	bool mus_stationShowerSizeT_isLoaded;
	vector<vector<float> > pfjets_bDiscriminators_;
	TBranch *pfjets_bDiscriminators_branch;
	bool pfjets_bDiscriminators_isLoaded;
	vector<vector<float> > pfjets_puppi_bDiscriminators_;
	TBranch *pfjets_puppi_bDiscriminators_branch;
	bool pfjets_puppi_bDiscriminators_isLoaded;
	vector<vector<float> > taus_pf_IDs_;
	TBranch *taus_pf_IDs_branch;
	bool taus_pf_IDs_isLoaded;
	vector<vector<float> > puInfo_instLumi_;
	TBranch *puInfo_instLumi_branch;
	bool puInfo_instLumi_isLoaded;
	vector<vector<float> > vtxs_covMatrix_;
	TBranch *vtxs_covMatrix_branch;
	bool vtxs_covMatrix_isLoaded;
	int evt_bsType_;
	TBranch *evt_bsType_branch;
	bool evt_bsType_isLoaded;
	int evt_bunchCrossing_;
	TBranch *evt_bunchCrossing_branch;
	bool evt_bunchCrossing_isLoaded;
	int evt_experimentType_;
	TBranch *evt_experimentType_branch;
	bool evt_experimentType_isLoaded;
	int evt_isRealData_;
	TBranch *evt_isRealData_branch;
	bool evt_isRealData_isLoaded;
	int evt_orbitNumber_;
	TBranch *evt_orbitNumber_branch;
	bool evt_orbitNumber_isLoaded;
	int evt_storeNumber_;
	TBranch *evt_storeNumber_branch;
	bool evt_storeNumber_isLoaded;
	int hcalnoise_GetRecHitCount_;
	TBranch *hcalnoise_GetRecHitCount_branch;
	bool hcalnoise_GetRecHitCount_isLoaded;
	int hcalnoise_GetRecHitCount15_;
	TBranch *hcalnoise_GetRecHitCount15_branch;
	bool hcalnoise_GetRecHitCount15_isLoaded;
	int hcalnoise_maxHPDHits_;
	TBranch *hcalnoise_maxHPDHits_branch;
	bool hcalnoise_maxHPDHits_isLoaded;
	int hcalnoise_maxHPDNoOtherHits_;
	TBranch *hcalnoise_maxHPDNoOtherHits_branch;
	bool hcalnoise_maxHPDNoOtherHits_isLoaded;
	int hcalnoise_maxRBXHits_;
	TBranch *hcalnoise_maxRBXHits_branch;
	bool hcalnoise_maxRBXHits_isLoaded;
	int hcalnoise_maxZeros_;
	TBranch *hcalnoise_maxZeros_branch;
	bool hcalnoise_maxZeros_isLoaded;
	int hcalnoise_noiseFilterStatus_;
	TBranch *hcalnoise_noiseFilterStatus_branch;
	bool hcalnoise_noiseFilterStatus_isLoaded;
	int hcalnoise_noiseType_;
	TBranch *hcalnoise_noiseType_branch;
	bool hcalnoise_noiseType_isLoaded;
	int hcalnoise_num10GeVHits_;
	TBranch *hcalnoise_num10GeVHits_branch;
	bool hcalnoise_num10GeVHits_isLoaded;
	int hcalnoise_num25GeVHits_;
	TBranch *hcalnoise_num25GeVHits_branch;
	bool hcalnoise_num25GeVHits_isLoaded;
	int hcalnoise_numFlatNoiseChannels_;
	TBranch *hcalnoise_numFlatNoiseChannels_branch;
	bool hcalnoise_numFlatNoiseChannels_isLoaded;
	int hcalnoise_numIsolatedNoiseChannels_;
	TBranch *hcalnoise_numIsolatedNoiseChannels_branch;
	bool hcalnoise_numIsolatedNoiseChannels_isLoaded;
	int hcalnoise_numProblematicRBXs_;
	TBranch *hcalnoise_numProblematicRBXs_branch;
	bool hcalnoise_numProblematicRBXs_isLoaded;
	int hcalnoise_numSpikeNoiseChannels_;
	TBranch *hcalnoise_numSpikeNoiseChannels_branch;
	bool hcalnoise_numSpikeNoiseChannels_isLoaded;
	int hcalnoise_numTS4TS5NoiseChannels_;
	TBranch *hcalnoise_numTS4TS5NoiseChannels_branch;
	bool hcalnoise_numTS4TS5NoiseChannels_isLoaded;
	int hcalnoise_numTriangleNoiseChannels_;
	TBranch *hcalnoise_numTriangleNoiseChannels_branch;
	bool hcalnoise_numTriangleNoiseChannels_isLoaded;
	int hcalnoise_passHighLevelNoiseFilter_;
	TBranch *hcalnoise_passHighLevelNoiseFilter_branch;
	bool hcalnoise_passHighLevelNoiseFilter_isLoaded;
	int hcalnoise_passLooseNoiseFilter_;
	TBranch *hcalnoise_passLooseNoiseFilter_branch;
	bool hcalnoise_passLooseNoiseFilter_isLoaded;
	int hcalnoise_passTightNoiseFilter_;
	TBranch *hcalnoise_passTightNoiseFilter_branch;
	bool hcalnoise_passTightNoiseFilter_isLoaded;
	int pdfinfo_id1_;
	TBranch *pdfinfo_id1_branch;
	bool pdfinfo_id1_isLoaded;
	int pdfinfo_id2_;
	TBranch *pdfinfo_id2_branch;
	bool pdfinfo_id2_isLoaded;
	int sparm_subProcessId_;
	TBranch *sparm_subProcessId_branch;
	bool sparm_subProcessId_isLoaded;
	vector<int> pfjets_nonCHS_chargedHadronMultiplicity_;
	TBranch *pfjets_nonCHS_chargedHadronMultiplicity_branch;
	bool pfjets_nonCHS_chargedHadronMultiplicity_isLoaded;
	vector<int> pfjets_nonCHS_chargedMultiplicity_;
	TBranch *pfjets_nonCHS_chargedMultiplicity_branch;
	bool pfjets_nonCHS_chargedMultiplicity_isLoaded;
	vector<int> pfjets_nonCHS_electronMultiplicity_;
	TBranch *pfjets_nonCHS_electronMultiplicity_branch;
	bool pfjets_nonCHS_electronMultiplicity_isLoaded;
	vector<int> pfjets_nonCHS_muonMultiplicity_;
	TBranch *pfjets_nonCHS_muonMultiplicity_branch;
	bool pfjets_nonCHS_muonMultiplicity_isLoaded;
	vector<int> pfjets_nonCHS_neutralHadronMultiplicity_;
	TBranch *pfjets_nonCHS_neutralHadronMultiplicity_branch;
	bool pfjets_nonCHS_neutralHadronMultiplicity_isLoaded;
	vector<int> pfjets_nonCHS_neutralMultiplicity_;
	TBranch *pfjets_nonCHS_neutralMultiplicity_branch;
	bool pfjets_nonCHS_neutralMultiplicity_isLoaded;
	vector<int> pfjets_nonCHS_partonFlavour_;
	TBranch *pfjets_nonCHS_partonFlavour_branch;
	bool pfjets_nonCHS_partonFlavour_isLoaded;
	vector<int> pfjets_nonCHS_photonMultiplicity_;
	TBranch *pfjets_nonCHS_photonMultiplicity_branch;
	bool pfjets_nonCHS_photonMultiplicity_isLoaded;
	vector<int> ak8jets_mc_id_;
	TBranch *ak8jets_mc_id_branch;
	bool ak8jets_mc_id_isLoaded;
	vector<int> els_mc3_id_;
	TBranch *els_mc3_id_branch;
	bool els_mc3_id_isLoaded;
	vector<int> els_mc3idx_;
	TBranch *els_mc3idx_branch;
	bool els_mc3idx_isLoaded;
	vector<int> els_mc3_motherid_;
	TBranch *els_mc3_motherid_branch;
	bool els_mc3_motherid_isLoaded;
	vector<int> els_mc3_motheridx_;
	TBranch *els_mc3_motheridx_branch;
	bool els_mc3_motheridx_isLoaded;
	vector<int> els_mc_id_;
	TBranch *els_mc_id_branch;
	bool els_mc_id_isLoaded;
	vector<int> els_mcidx_;
	TBranch *els_mcidx_branch;
	bool els_mcidx_isLoaded;
	vector<int> els_mc_motherid_;
	TBranch *els_mc_motherid_branch;
	bool els_mc_motherid_isLoaded;
	vector<int> mus_mc3_id_;
	TBranch *mus_mc3_id_branch;
	bool mus_mc3_id_isLoaded;
	vector<int> mus_mc3idx_;
	TBranch *mus_mc3idx_branch;
	bool mus_mc3idx_isLoaded;
	vector<int> mus_mc3_motherid_;
	TBranch *mus_mc3_motherid_branch;
	bool mus_mc3_motherid_isLoaded;
	vector<int> mus_mc3_motheridx_;
	TBranch *mus_mc3_motheridx_branch;
	bool mus_mc3_motheridx_isLoaded;
	vector<int> mus_mc_id_;
	TBranch *mus_mc_id_branch;
	bool mus_mc_id_isLoaded;
	vector<int> mus_mcidx_;
	TBranch *mus_mcidx_branch;
	bool mus_mcidx_isLoaded;
	vector<int> mus_mc_motherid_;
	TBranch *mus_mc_motherid_branch;
	bool mus_mc_motherid_isLoaded;
	vector<int> pfjets_mc3_id_;
	TBranch *pfjets_mc3_id_branch;
	bool pfjets_mc3_id_isLoaded;
	vector<int> pfjets_mc3idx_;
	TBranch *pfjets_mc3idx_branch;
	bool pfjets_mc3idx_isLoaded;
	vector<int> pfjets_mc_gpidx_;
	TBranch *pfjets_mc_gpidx_branch;
	bool pfjets_mc_gpidx_isLoaded;
	vector<int> pfjets_mc_id_;
	TBranch *pfjets_mc_id_branch;
	bool pfjets_mc_id_isLoaded;
	vector<int> pfjets_mcidx_;
	TBranch *pfjets_mcidx_branch;
	bool pfjets_mcidx_isLoaded;
	vector<int> pfjets_mc_motherid_;
	TBranch *pfjets_mc_motherid_branch;
	bool pfjets_mc_motherid_isLoaded;
	vector<int> photons_mc3_id_;
	TBranch *photons_mc3_id_branch;
	bool photons_mc3_id_isLoaded;
	vector<int> photons_mc3idx_;
	TBranch *photons_mc3idx_branch;
	bool photons_mc3idx_isLoaded;
	vector<int> photons_mc3_motherid_;
	TBranch *photons_mc3_motherid_branch;
	bool photons_mc3_motherid_isLoaded;
	vector<int> photons_mc3_motheridx_;
	TBranch *photons_mc3_motheridx_branch;
	bool photons_mc3_motheridx_isLoaded;
	vector<int> photons_mc_id_;
	TBranch *photons_mc_id_branch;
	bool photons_mc_id_isLoaded;
	vector<int> photons_mcidx_;
	TBranch *photons_mcidx_branch;
	bool photons_mcidx_isLoaded;
	vector<int> photons_mc_motherid_;
	TBranch *photons_mc_motherid_branch;
	bool photons_mc_motherid_isLoaded;
	vector<int> els_category_;
	TBranch *els_category_branch;
	bool els_category_isLoaded;
	vector<int> els_charge_;
	TBranch *els_charge_branch;
	bool els_charge_isLoaded;
	vector<int> els_ckf_charge_;
	TBranch *els_ckf_charge_branch;
	bool els_ckf_charge_isLoaded;
	vector<int> els_ckf_laywithmeas_;
	TBranch *els_ckf_laywithmeas_branch;
	bool els_ckf_laywithmeas_isLoaded;
	vector<int> els_class_;
	TBranch *els_class_branch;
	bool els_class_isLoaded;
	vector<int> els_exp_innerlayers_;
	TBranch *els_exp_innerlayers_branch;
	bool els_exp_innerlayers_isLoaded;
	vector<int> els_exp_outerlayers_;
	TBranch *els_exp_outerlayers_branch;
	bool els_exp_outerlayers_isLoaded;
	vector<int> els_fiduciality_;
	TBranch *els_fiduciality_branch;
	bool els_fiduciality_isLoaded;
	vector<int> els_lostHits_;
	TBranch *els_lostHits_branch;
	bool els_lostHits_isLoaded;
	vector<int> els_lost_pixelhits_;
	TBranch *els_lost_pixelhits_branch;
	bool els_lost_pixelhits_isLoaded;
	vector<int> els_mc_patMatch_id_;
	TBranch *els_mc_patMatch_id_branch;
	bool els_mc_patMatch_id_isLoaded;
	vector<int> els_nSeed_;
	TBranch *els_nSeed_branch;
	bool els_nSeed_isLoaded;
	vector<int> els_nlayers_;
	TBranch *els_nlayers_branch;
	bool els_nlayers_isLoaded;
	vector<int> els_nlayers3D_;
	TBranch *els_nlayers3D_branch;
	bool els_nlayers3D_isLoaded;
	vector<int> els_nlayersLost_;
	TBranch *els_nlayersLost_branch;
	bool els_nlayersLost_isLoaded;
	vector<int> els_sccharge_;
	TBranch *els_sccharge_branch;
	bool els_sccharge_isLoaded;
	vector<int> els_trk_charge_;
	TBranch *els_trk_charge_branch;
	bool els_trk_charge_isLoaded;
	vector<int> els_type_;
	TBranch *els_type_branch;
	bool els_type_isLoaded;
	vector<int> els_validHits_;
	TBranch *els_validHits_branch;
	bool els_validHits_isLoaded;
	vector<int> els_valid_pixelhits_;
	TBranch *els_valid_pixelhits_branch;
	bool els_valid_pixelhits_isLoaded;
	vector<int> els_passLooseId_;
	TBranch *els_passLooseId_branch;
	bool els_passLooseId_isLoaded;
	vector<int> els_passMediumId_;
	TBranch *els_passMediumId_branch;
	bool els_passMediumId_isLoaded;
	vector<int> els_passTightId_;
	TBranch *els_passTightId_branch;
	bool els_passTightId_isLoaded;
	vector<int> els_passVetoId_;
	TBranch *els_passVetoId_branch;
	bool els_passVetoId_isLoaded;
	vector<int> genps_id_;
	TBranch *genps_id_branch;
	bool genps_id_isLoaded;
	vector<int> genps_id_mother_;
	TBranch *genps_id_mother_branch;
	bool genps_id_mother_isLoaded;
	vector<int> genps_id_simplegrandma_;
	TBranch *genps_id_simplegrandma_branch;
	bool genps_id_simplegrandma_isLoaded;
	vector<int> genps_id_simplemother_;
	TBranch *genps_id_simplemother_branch;
	bool genps_id_simplemother_isLoaded;
	vector<int> genps_idx_mother_;
	TBranch *genps_idx_mother_branch;
	bool genps_idx_mother_isLoaded;
	vector<int> genps_idx_simplemother_;
	TBranch *genps_idx_simplemother_branch;
	bool genps_idx_simplemother_isLoaded;
	vector<int> genps_status_;
	TBranch *genps_status_branch;
	bool genps_status_isLoaded;
	vector<int> hyp_ll_charge_;
	TBranch *hyp_ll_charge_branch;
	bool hyp_ll_charge_isLoaded;
	vector<int> hyp_ll_id_;
	TBranch *hyp_ll_id_branch;
	bool hyp_ll_id_isLoaded;
	vector<int> hyp_ll_index_;
	TBranch *hyp_ll_index_branch;
	bool hyp_ll_index_isLoaded;
	vector<int> hyp_lt_charge_;
	TBranch *hyp_lt_charge_branch;
	bool hyp_lt_charge_isLoaded;
	vector<int> hyp_lt_id_;
	TBranch *hyp_lt_id_branch;
	bool hyp_lt_id_isLoaded;
	vector<int> hyp_lt_index_;
	TBranch *hyp_lt_index_branch;
	bool hyp_lt_index_isLoaded;
	vector<int> hyp_type_;
	TBranch *hyp_type_branch;
	bool hyp_type_isLoaded;
	vector<int> isotracks_charge_;
	TBranch *isotracks_charge_branch;
	bool isotracks_charge_isLoaded;
	vector<int> isotracks_particleId_;
	TBranch *isotracks_particleId_branch;
	bool isotracks_particleId_isLoaded;
	vector<int> mus_algo_;
	TBranch *mus_algo_branch;
	bool mus_algo_isLoaded;
	vector<int> mus_charge_;
	TBranch *mus_charge_branch;
	bool mus_charge_isLoaded;
	vector<int> mus_ecal_rawId_;
	TBranch *mus_ecal_rawId_branch;
	bool mus_ecal_rawId_isLoaded;
	vector<int> mus_exp_innerlayers_;
	TBranch *mus_exp_innerlayers_branch;
	bool mus_exp_innerlayers_isLoaded;
	vector<int> mus_exp_outerlayers_;
	TBranch *mus_exp_outerlayers_branch;
	bool mus_exp_outerlayers_isLoaded;
	vector<int> mus_gfit_algo_;
	TBranch *mus_gfit_algo_branch;
	bool mus_gfit_algo_isLoaded;
	vector<int> mus_gfit_etaErr_;
	TBranch *mus_gfit_etaErr_branch;
	bool mus_gfit_etaErr_isLoaded;
	vector<int> mus_gfit_exp_innerlayer_;
	TBranch *mus_gfit_exp_innerlayer_branch;
	bool mus_gfit_exp_innerlayer_isLoaded;
	vector<int> mus_gfit_exp_outerlayer_;
	TBranch *mus_gfit_exp_outerlayer_branch;
	bool mus_gfit_exp_outerlayer_isLoaded;
	vector<int> mus_gfit_lostHits_;
	TBranch *mus_gfit_lostHits_branch;
	bool mus_gfit_lostHits_isLoaded;
	vector<int> mus_gfit_lostPixelHits_;
	TBranch *mus_gfit_lostPixelHits_branch;
	bool mus_gfit_lostPixelHits_isLoaded;
	vector<int> mus_gfit_nlayers_;
	TBranch *mus_gfit_nlayers_branch;
	bool mus_gfit_nlayers_isLoaded;
	vector<int> mus_gfit_nlayers3D_;
	TBranch *mus_gfit_nlayers3D_branch;
	bool mus_gfit_nlayers3D_isLoaded;
	vector<int> mus_gfit_nlayersLost_;
	TBranch *mus_gfit_nlayersLost_branch;
	bool mus_gfit_nlayersLost_isLoaded;
	vector<int> mus_gfit_phiErr_;
	TBranch *mus_gfit_phiErr_branch;
	bool mus_gfit_phiErr_isLoaded;
	vector<int> mus_gfit_ptErr_;
	TBranch *mus_gfit_ptErr_branch;
	bool mus_gfit_ptErr_isLoaded;
	vector<int> mus_gfit_qualityMask_;
	TBranch *mus_gfit_qualityMask_branch;
	bool mus_gfit_qualityMask_isLoaded;
	vector<int> mus_gfit_trk_charge_;
	TBranch *mus_gfit_trk_charge_branch;
	bool mus_gfit_trk_charge_isLoaded;
	vector<int> mus_gfit_validHits_;
	TBranch *mus_gfit_validHits_branch;
	bool mus_gfit_validHits_isLoaded;
	vector<int> mus_gfit_validPixelHits_;
	TBranch *mus_gfit_validPixelHits_branch;
	bool mus_gfit_validPixelHits_isLoaded;
	vector<int> mus_gfit_validSTAHits_;
	TBranch *mus_gfit_validSTAHits_branch;
	bool mus_gfit_validSTAHits_isLoaded;
	vector<int> mus_gfit_validSiHits_;
	TBranch *mus_gfit_validSiHits_branch;
	bool mus_gfit_validSiHits_isLoaded;
	vector<int> mus_goodmask_;
	TBranch *mus_goodmask_branch;
	bool mus_goodmask_isLoaded;
	vector<int> mus_hcal_rawId_;
	TBranch *mus_hcal_rawId_branch;
	bool mus_hcal_rawId_isLoaded;
	vector<int> mus_iso03_njets_;
	TBranch *mus_iso03_njets_branch;
	bool mus_iso03_njets_isLoaded;
	vector<int> mus_iso03_ntrk_;
	TBranch *mus_iso03_ntrk_branch;
	bool mus_iso03_ntrk_isLoaded;
	vector<int> mus_iso05_ntrk_;
	TBranch *mus_iso05_ntrk_branch;
	bool mus_iso05_ntrk_isLoaded;
	vector<int> mus_lostHits_;
	TBranch *mus_lostHits_branch;
	bool mus_lostHits_isLoaded;
	vector<int> mus_lostPixelHits_;
	TBranch *mus_lostPixelHits_branch;
	bool mus_lostPixelHits_isLoaded;
	vector<int> mus_mc_patMatch_id_;
	TBranch *mus_mc_patMatch_id_branch;
	bool mus_mc_patMatch_id_isLoaded;
	vector<int> mus_muonBestTrackType_;
	TBranch *mus_muonBestTrackType_branch;
	bool mus_muonBestTrackType_isLoaded;
	vector<int> mus_nOverlaps_;
	TBranch *mus_nOverlaps_branch;
	bool mus_nOverlaps_isLoaded;
	vector<int> mus_nlayers_;
	TBranch *mus_nlayers_branch;
	bool mus_nlayers_isLoaded;
	vector<int> mus_nlayers3D_;
	TBranch *mus_nlayers3D_branch;
	bool mus_nlayers3D_isLoaded;
	vector<int> mus_nlayersLost_;
	TBranch *mus_nlayersLost_branch;
	bool mus_nlayersLost_isLoaded;
	vector<int> mus_nmatches_;
	TBranch *mus_nmatches_branch;
	bool mus_nmatches_isLoaded;
	vector<int> mus_numberOfMatchedStations_;
	TBranch *mus_numberOfMatchedStations_branch;
	bool mus_numberOfMatchedStations_isLoaded;
	vector<int> mus_overlap0_;
	TBranch *mus_overlap0_branch;
	bool mus_overlap0_isLoaded;
	vector<int> mus_overlap1_;
	TBranch *mus_overlap1_branch;
	bool mus_overlap1_isLoaded;
	vector<int> mus_pfcharge_;
	TBranch *mus_pfcharge_branch;
	bool mus_pfcharge_isLoaded;
	vector<int> mus_pfidx_;
	TBranch *mus_pfidx_branch;
	bool mus_pfidx_isLoaded;
	vector<int> mus_pfparticleId_;
	TBranch *mus_pfparticleId_branch;
	bool mus_pfparticleId_isLoaded;
	vector<int> mus_pid_PFMuon_;
	TBranch *mus_pid_PFMuon_branch;
	bool mus_pid_PFMuon_isLoaded;
	vector<int> mus_pid_TM2DCompatibilityLoose_;
	TBranch *mus_pid_TM2DCompatibilityLoose_branch;
	bool mus_pid_TM2DCompatibilityLoose_isLoaded;
	vector<int> mus_pid_TM2DCompatibilityTight_;
	TBranch *mus_pid_TM2DCompatibilityTight_branch;
	bool mus_pid_TM2DCompatibilityTight_isLoaded;
	vector<int> mus_pid_TMLastStationLoose_;
	TBranch *mus_pid_TMLastStationLoose_branch;
	bool mus_pid_TMLastStationLoose_isLoaded;
	vector<int> mus_pid_TMLastStationTight_;
	TBranch *mus_pid_TMLastStationTight_branch;
	bool mus_pid_TMLastStationTight_isLoaded;
	vector<int> mus_qualityMask_;
	TBranch *mus_qualityMask_branch;
	bool mus_qualityMask_isLoaded;
	vector<int> mus_sta_algo_;
	TBranch *mus_sta_algo_branch;
	bool mus_sta_algo_isLoaded;
	vector<int> mus_sta_etaErr_;
	TBranch *mus_sta_etaErr_branch;
	bool mus_sta_etaErr_isLoaded;
	vector<int> mus_sta_exp_innerlayer_;
	TBranch *mus_sta_exp_innerlayer_branch;
	bool mus_sta_exp_innerlayer_isLoaded;
	vector<int> mus_sta_exp_outerlayer_;
	TBranch *mus_sta_exp_outerlayer_branch;
	bool mus_sta_exp_outerlayer_isLoaded;
	vector<int> mus_sta_lostHits_;
	TBranch *mus_sta_lostHits_branch;
	bool mus_sta_lostHits_isLoaded;
	vector<int> mus_sta_lostPixelHits_;
	TBranch *mus_sta_lostPixelHits_branch;
	bool mus_sta_lostPixelHits_isLoaded;
	vector<int> mus_sta_nlayers_;
	TBranch *mus_sta_nlayers_branch;
	bool mus_sta_nlayers_isLoaded;
	vector<int> mus_sta_nlayers3D_;
	TBranch *mus_sta_nlayers3D_branch;
	bool mus_sta_nlayers3D_isLoaded;
	vector<int> mus_sta_nlayersLost_;
	TBranch *mus_sta_nlayersLost_branch;
	bool mus_sta_nlayersLost_isLoaded;
	vector<int> mus_sta_phiErr_;
	TBranch *mus_sta_phiErr_branch;
	bool mus_sta_phiErr_isLoaded;
	vector<int> mus_sta_ptErr_;
	TBranch *mus_sta_ptErr_branch;
	bool mus_sta_ptErr_isLoaded;
	vector<int> mus_sta_qualityMask_;
	TBranch *mus_sta_qualityMask_branch;
	bool mus_sta_qualityMask_isLoaded;
	vector<int> mus_sta_trk_charge_;
	TBranch *mus_sta_trk_charge_branch;
	bool mus_sta_trk_charge_isLoaded;
	vector<int> mus_sta_validHits_;
	TBranch *mus_sta_validHits_branch;
	bool mus_sta_validHits_isLoaded;
	vector<int> mus_sta_validPixelHits_;
	TBranch *mus_sta_validPixelHits_branch;
	bool mus_sta_validPixelHits_isLoaded;
	vector<int> mus_timeDirection_;
	TBranch *mus_timeDirection_branch;
	bool mus_timeDirection_isLoaded;
	vector<int> mus_timeNumStationsUsed_;
	TBranch *mus_timeNumStationsUsed_branch;
	bool mus_timeNumStationsUsed_isLoaded;
	vector<int> mus_trk_charge_;
	TBranch *mus_trk_charge_branch;
	bool mus_trk_charge_isLoaded;
	vector<int> mus_type_;
	TBranch *mus_type_branch;
	bool mus_type_isLoaded;
	vector<int> mus_validHits_;
	TBranch *mus_validHits_branch;
	bool mus_validHits_isLoaded;
	vector<int> mus_validPixelHits_;
	TBranch *mus_validPixelHits_branch;
	bool mus_validPixelHits_isLoaded;
	vector<int> pfcands_charge_;
	TBranch *pfcands_charge_branch;
	bool pfcands_charge_isLoaded;
	vector<int> pfcands_particleId_;
	TBranch *pfcands_particleId_branch;
	bool pfcands_particleId_isLoaded;
	vector<int> pfjets_chargedHadronMultiplicity_;
	TBranch *pfjets_chargedHadronMultiplicity_branch;
	bool pfjets_chargedHadronMultiplicity_isLoaded;
	vector<int> pfjets_chargedMultiplicity_;
	TBranch *pfjets_chargedMultiplicity_branch;
	bool pfjets_chargedMultiplicity_isLoaded;
	vector<int> pfjets_electronMultiplicity_;
	TBranch *pfjets_electronMultiplicity_branch;
	bool pfjets_electronMultiplicity_isLoaded;
	vector<int> pfjets_muonMultiplicity_;
	TBranch *pfjets_muonMultiplicity_branch;
	bool pfjets_muonMultiplicity_isLoaded;
	vector<int> pfjets_neutralHadronMultiplicity_;
	TBranch *pfjets_neutralHadronMultiplicity_branch;
	bool pfjets_neutralHadronMultiplicity_isLoaded;
	vector<int> pfjets_neutralMultiplicity_;
	TBranch *pfjets_neutralMultiplicity_branch;
	bool pfjets_neutralMultiplicity_isLoaded;
	vector<int> pfjets_partonFlavour_;
	TBranch *pfjets_partonFlavour_branch;
	bool pfjets_partonFlavour_isLoaded;
	vector<int> pfjets_photonMultiplicity_;
	TBranch *pfjets_photonMultiplicity_branch;
	bool pfjets_photonMultiplicity_isLoaded;
	vector<int> pfjets_puppi_chargedHadronMultiplicity_;
	TBranch *pfjets_puppi_chargedHadronMultiplicity_branch;
	bool pfjets_puppi_chargedHadronMultiplicity_isLoaded;
	vector<int> pfjets_puppi_chargedMultiplicity_;
	TBranch *pfjets_puppi_chargedMultiplicity_branch;
	bool pfjets_puppi_chargedMultiplicity_isLoaded;
	vector<int> pfjets_puppi_electronMultiplicity_;
	TBranch *pfjets_puppi_electronMultiplicity_branch;
	bool pfjets_puppi_electronMultiplicity_isLoaded;
	vector<int> pfjets_puppi_muonMultiplicity_;
	TBranch *pfjets_puppi_muonMultiplicity_branch;
	bool pfjets_puppi_muonMultiplicity_isLoaded;
	vector<int> pfjets_puppi_neutralHadronMultiplicity_;
	TBranch *pfjets_puppi_neutralHadronMultiplicity_branch;
	bool pfjets_puppi_neutralHadronMultiplicity_isLoaded;
	vector<int> pfjets_puppi_neutralMultiplicity_;
	TBranch *pfjets_puppi_neutralMultiplicity_branch;
	bool pfjets_puppi_neutralMultiplicity_isLoaded;
	vector<int> pfjets_puppi_partonFlavour_;
	TBranch *pfjets_puppi_partonFlavour_branch;
	bool pfjets_puppi_partonFlavour_isLoaded;
	vector<int> pfjets_puppi_photonMultiplicity_;
	TBranch *pfjets_puppi_photonMultiplicity_branch;
	bool pfjets_puppi_photonMultiplicity_isLoaded;
	vector<int> taus_pf_charge_;
	TBranch *taus_pf_charge_branch;
	bool taus_pf_charge_isLoaded;
	vector<int> photons_fiduciality_;
	TBranch *photons_fiduciality_branch;
	bool photons_fiduciality_isLoaded;
	vector<int> photons_photonID_loose_;
	TBranch *photons_photonID_loose_branch;
	bool photons_photonID_loose_isLoaded;
	vector<int> photons_photonID_tight_;
	TBranch *photons_photonID_tight_branch;
	bool photons_photonID_tight_isLoaded;
	vector<int> puInfo_bunchCrossing_;
	TBranch *puInfo_bunchCrossing_branch;
	bool puInfo_bunchCrossing_isLoaded;
	vector<int> puInfo_nPUvertices_;
	TBranch *puInfo_nPUvertices_branch;
	bool puInfo_nPUvertices_isLoaded;
	vector<int> convs_algo_;
	TBranch *convs_algo_branch;
	bool convs_algo_isLoaded;
	vector<int> convs_isConverted_;
	TBranch *convs_isConverted_branch;
	bool convs_isConverted_isLoaded;
	vector<int> convs_quality_;
	TBranch *convs_quality_branch;
	bool convs_quality_isLoaded;
	vector<int> svs_nTrks_;
	TBranch *svs_nTrks_branch;
	bool svs_nTrks_isLoaded;
	vector<int> ak8jets_nSubJets_;
	TBranch *ak8jets_nSubJets_branch;
	bool ak8jets_nSubJets_isLoaded;
	vector<int> ak8jets_partonFlavour_;
	TBranch *ak8jets_partonFlavour_branch;
	bool ak8jets_partonFlavour_isLoaded;
	vector<int> vtxs_isFake_;
	TBranch *vtxs_isFake_branch;
	bool vtxs_isFake_isLoaded;
	vector<int> vtxs_isValid_;
	TBranch *vtxs_isValid_branch;
	bool vtxs_isValid_isLoaded;
	vector<vector<int> > pfjets_nonCHS_pfcandIndicies_;
	TBranch *pfjets_nonCHS_pfcandIndicies_branch;
	bool pfjets_nonCHS_pfcandIndicies_isLoaded;
	vector<vector<int> > els_PFCand_idx_;
	TBranch *els_PFCand_idx_branch;
	bool els_PFCand_idx_isLoaded;
	vector<vector<int> > genps_lepdaughter_id_;
	TBranch *genps_lepdaughter_id_branch;
	bool genps_lepdaughter_id_isLoaded;
	vector<vector<int> > genps_lepdaughter_idx_;
	TBranch *genps_lepdaughter_idx_branch;
	bool genps_lepdaughter_idx_isLoaded;
	vector<vector<int> > hlt_trigObjs_id_;
	TBranch *hlt_trigObjs_id_branch;
	bool hlt_trigObjs_id_isLoaded;
	vector<vector<int> > mus_nStationCorrelatedHits_;
	TBranch *mus_nStationCorrelatedHits_branch;
	bool mus_nStationCorrelatedHits_isLoaded;
	vector<vector<int> > mus_nStationHits_;
	TBranch *mus_nStationHits_branch;
	bool mus_nStationHits_isLoaded;
	vector<vector<int> > pfjets_pfcandIndicies_;
	TBranch *pfjets_pfcandIndicies_branch;
	bool pfjets_pfcandIndicies_isLoaded;
	vector<vector<int> > pfjets_puppi_pfcandIndicies_;
	TBranch *pfjets_puppi_pfcandIndicies_branch;
	bool pfjets_puppi_pfcandIndicies_isLoaded;
	vector<vector<int> > photons_PFCand_idx_;
	TBranch *photons_PFCand_idx_branch;
	bool photons_PFCand_idx_isLoaded;
	vector<vector<int> > convs_nHitsBeforeVtx_;
	TBranch *convs_nHitsBeforeVtx_branch;
	bool convs_nHitsBeforeVtx_isLoaded;
	vector<vector<int> > convs_tkalgo_;
	TBranch *convs_tkalgo_branch;
	bool convs_tkalgo_isLoaded;
	vector<vector<int> > convs_tkidx_;
	TBranch *convs_tkidx_branch;
	bool convs_tkidx_isLoaded;
	vector<vector<int> > ak8jets_pfcandIndicies_;
	TBranch *ak8jets_pfcandIndicies_branch;
	bool ak8jets_pfcandIndicies_isLoaded;
	vector<unsigned char> isotracks_fromPV_;
	TBranch *isotracks_fromPV_branch;
	bool isotracks_fromPV_isLoaded;
	vector<unsigned char> pfcands_fromPV_;
	TBranch *pfcands_fromPV_branch;
	bool pfcands_fromPV_isLoaded;
	unsigned int els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_;
	TBranch *els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch;
	bool els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_;
	TBranch *els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_branch;
	bool els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_;
	TBranch *els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_branch;
	bool els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_;
	TBranch *els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch;
	bool els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	TBranch *els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch;
	bool els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_;
	TBranch *els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_branch;
	bool els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_isLoaded;
	unsigned int els_HLT_Ele17_Ele8_LeadingLeg_version_;
	TBranch *els_HLT_Ele17_Ele8_LeadingLeg_version_branch;
	bool els_HLT_Ele17_Ele8_LeadingLeg_version_isLoaded;
	unsigned int els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_;
	TBranch *els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_branch;
	bool els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_isLoaded;
	unsigned int els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_;
	TBranch *els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_branch;
	bool els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_isLoaded;
	unsigned int els_HLT_Ele17_Ele8_TrailingLeg_version_;
	TBranch *els_HLT_Ele17_Ele8_TrailingLeg_version_branch;
	bool els_HLT_Ele17_Ele8_TrailingLeg_version_isLoaded;
	unsigned int els_HLT_Ele17_Ele8_version_;
	TBranch *els_HLT_Ele17_Ele8_version_branch;
	bool els_HLT_Ele17_Ele8_version_isLoaded;
	unsigned int els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_;
	TBranch *els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch;
	bool els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	TBranch *els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch;
	bool els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_;
	TBranch *els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_branch;
	bool els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_isLoaded;
	unsigned int els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_;
	TBranch *els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_branch;
	bool els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_isLoaded;
	unsigned int els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_;
	TBranch *els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch;
	bool els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	TBranch *els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch;
	bool els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_;
	TBranch *els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_branch;
	bool els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_isLoaded;
	unsigned int els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_;
	TBranch *els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_branch;
	bool els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_isLoaded;
	unsigned int els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_;
	TBranch *els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_branch;
	bool els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_isLoaded;
	unsigned int els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_;
	TBranch *els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_branch;
	bool els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_isLoaded;
	unsigned int els_HLT_Ele25WP60_Ele8_Mass55_version_;
	TBranch *els_HLT_Ele25WP60_Ele8_Mass55_version_branch;
	bool els_HLT_Ele25WP60_Ele8_Mass55_version_isLoaded;
	unsigned int els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_;
	TBranch *els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_branch;
	bool els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_isLoaded;
	unsigned int els_HLT_Ele25WP60_SC4_Mass55_version_;
	TBranch *els_HLT_Ele25WP60_SC4_Mass55_version_branch;
	bool els_HLT_Ele25WP60_SC4_Mass55_version_isLoaded;
	unsigned int els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_;
	TBranch *els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_branch;
	bool els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_isLoaded;
	unsigned int els_HLT_Ele27_WP80_version_;
	TBranch *els_HLT_Ele27_WP80_version_branch;
	bool els_HLT_Ele27_WP80_version_isLoaded;
	unsigned int els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_;
	TBranch *els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_branch;
	bool els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_isLoaded;
	unsigned int els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_;
	TBranch *els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_branch;
	bool els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_isLoaded;
	unsigned int els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_;
	TBranch *els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch;
	bool els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	TBranch *els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch;
	bool els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_;
	TBranch *els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_branch;
	bool els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_isLoaded;
	unsigned int els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_;
	TBranch *els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_branch;
	bool els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_isLoaded;
	unsigned int els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	TBranch *els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch;
	bool els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Mu17_Ele8_TrailingLeg_version_;
	TBranch *els_HLT_Mu17_Ele8_TrailingLeg_version_branch;
	bool els_HLT_Mu17_Ele8_TrailingLeg_version_isLoaded;
	unsigned int els_HLT_Mu17_Ele8_version_;
	TBranch *els_HLT_Mu17_Ele8_version_branch;
	bool els_HLT_Mu17_Ele8_version_isLoaded;
	unsigned int els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_;
	TBranch *els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch;
	bool els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Mu8_Ele17_version_;
	TBranch *els_HLT_Mu8_Ele17_version_branch;
	bool els_HLT_Mu8_Ele17_version_isLoaded;
	unsigned int els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_;
	TBranch *els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch;
	bool els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_isLoaded;
	unsigned int els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_;
	TBranch *els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch;
	bool els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_isLoaded;
	unsigned int evt_nels_;
	TBranch *evt_nels_branch;
	bool evt_nels_isLoaded;
	unsigned int evt_detectorStatus_;
	TBranch *evt_detectorStatus_branch;
	bool evt_detectorStatus_isLoaded;
	unsigned int evt_lumiBlock_;
	TBranch *evt_lumiBlock_branch;
	bool evt_lumiBlock_isLoaded;
	unsigned int evt_run_;
	TBranch *evt_run_branch;
	bool evt_run_isLoaded;
	unsigned int evt_ngenjetsNoMuNoNu_;
	TBranch *evt_ngenjetsNoMuNoNu_branch;
	bool evt_ngenjetsNoMuNoNu_isLoaded;
	unsigned int genps_signalProcessID_;
	TBranch *genps_signalProcessID_branch;
	bool genps_signalProcessID_isLoaded;
	unsigned int evt_ngenjets_;
	TBranch *evt_ngenjets_branch;
	bool evt_ngenjets_isLoaded;
	unsigned int mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_;
	TBranch *mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_branch;
	bool mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_isLoaded;
	unsigned int mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_;
	TBranch *mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_branch;
	bool mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_isLoaded;
	unsigned int mus_HLT_IsoMu24_eta2p1_version_;
	TBranch *mus_HLT_IsoMu24_eta2p1_version_branch;
	bool mus_HLT_IsoMu24_eta2p1_version_isLoaded;
	unsigned int mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_;
	TBranch *mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_branch;
	bool mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_isLoaded;
	unsigned int mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_;
	TBranch *mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_branch;
	bool mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_Ele8_LeadingLeg_version_;
	TBranch *mus_HLT_Mu17_Ele8_LeadingLeg_version_branch;
	bool mus_HLT_Mu17_Ele8_LeadingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_Ele8_version_;
	TBranch *mus_HLT_Mu17_Ele8_version_branch;
	bool mus_HLT_Mu17_Ele8_version_isLoaded;
	unsigned int mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_;
	TBranch *mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_branch;
	bool mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_isLoaded;
	unsigned int mus_HLT_Mu17_Mu8_LeadingLeg_version_;
	TBranch *mus_HLT_Mu17_Mu8_LeadingLeg_version_branch;
	bool mus_HLT_Mu17_Mu8_LeadingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_Mu8_TrailingLeg_version_;
	TBranch *mus_HLT_Mu17_Mu8_TrailingLeg_version_branch;
	bool mus_HLT_Mu17_Mu8_TrailingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_Mu8_version_;
	TBranch *mus_HLT_Mu17_Mu8_version_branch;
	bool mus_HLT_Mu17_Mu8_version_isLoaded;
	unsigned int mus_HLT_Mu17_TkMu8_LeadingLeg_version_;
	TBranch *mus_HLT_Mu17_TkMu8_LeadingLeg_version_branch;
	bool mus_HLT_Mu17_TkMu8_LeadingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_;
	TBranch *mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_branch;
	bool mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_isLoaded;
	unsigned int mus_HLT_Mu17_TkMu8_TrailingLeg_version_;
	TBranch *mus_HLT_Mu17_TkMu8_TrailingLeg_version_branch;
	bool mus_HLT_Mu17_TkMu8_TrailingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_TkMu8_version_;
	TBranch *mus_HLT_Mu17_TkMu8_version_branch;
	bool mus_HLT_Mu17_TkMu8_version_isLoaded;
	unsigned int mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_isLoaded;
	unsigned int mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_isLoaded;
	unsigned int mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_;
	TBranch *mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch;
	bool mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_isLoaded;
	unsigned int mus_HLT_Mu8_Ele17_TrailingLeg_version_;
	TBranch *mus_HLT_Mu8_Ele17_TrailingLeg_version_branch;
	bool mus_HLT_Mu8_Ele17_TrailingLeg_version_isLoaded;
	unsigned int mus_HLT_Mu8_Ele17_version_;
	TBranch *mus_HLT_Mu8_Ele17_version_branch;
	bool mus_HLT_Mu8_Ele17_version_isLoaded;
	unsigned int mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_;
	TBranch *mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_branch;
	bool mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_isLoaded;
	unsigned int mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_;
	TBranch *mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch;
	bool mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_isLoaded;
	unsigned int evt_nphotons_;
	TBranch *evt_nphotons_branch;
	bool evt_nphotons_isLoaded;
	unsigned int evt_nvtxs_;
	TBranch *evt_nvtxs_branch;
	bool evt_nvtxs_isLoaded;
	vector<unsigned int> els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_;
	TBranch *els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch;
	bool els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_;
	TBranch *els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_branch;
	bool els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_;
	TBranch *els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_branch;
	bool els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_;
	TBranch *els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch;
	bool els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	TBranch *els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch;
	bool els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele17_Ele8_;
	TBranch *els_HLT_Ele17_Ele8_branch;
	bool els_HLT_Ele17_Ele8_isLoaded;
	vector<unsigned int> els_HLT_Ele17_Ele8_L1sL1DoubleEG137_;
	TBranch *els_HLT_Ele17_Ele8_L1sL1DoubleEG137_branch;
	bool els_HLT_Ele17_Ele8_L1sL1DoubleEG137_isLoaded;
	vector<unsigned int> els_HLT_Ele17_Ele8_LeadingLeg_;
	TBranch *els_HLT_Ele17_Ele8_LeadingLeg_branch;
	bool els_HLT_Ele17_Ele8_LeadingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele17_Ele8_Mass50_LeadingLeg_;
	TBranch *els_HLT_Ele17_Ele8_Mass50_LeadingLeg_branch;
	bool els_HLT_Ele17_Ele8_Mass50_LeadingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele17_Ele8_Mass50_TrailingLeg_;
	TBranch *els_HLT_Ele17_Ele8_Mass50_TrailingLeg_branch;
	bool els_HLT_Ele17_Ele8_Mass50_TrailingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele17_Ele8_TrailingLeg_;
	TBranch *els_HLT_Ele17_Ele8_TrailingLeg_branch;
	bool els_HLT_Ele17_Ele8_TrailingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_;
	TBranch *els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch;
	bool els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	TBranch *els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch;
	bool els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele20_SC4_Mass50_LeadingLeg_;
	TBranch *els_HLT_Ele20_SC4_Mass50_LeadingLeg_branch;
	bool els_HLT_Ele20_SC4_Mass50_LeadingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele20_SC4_Mass50_TrailingLeg_;
	TBranch *els_HLT_Ele20_SC4_Mass50_TrailingLeg_branch;
	bool els_HLT_Ele20_SC4_Mass50_TrailingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_;
	TBranch *els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch;
	bool els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	TBranch *els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch;
	bool els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_;
	TBranch *els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch;
	bool els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_isLoaded;
	vector<unsigned int> els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_;
	TBranch *els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_branch;
	bool els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_;
	TBranch *els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_branch;
	bool els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele25WP60_Ele8_Mass55_;
	TBranch *els_HLT_Ele25WP60_Ele8_Mass55_branch;
	bool els_HLT_Ele25WP60_Ele8_Mass55_isLoaded;
	vector<unsigned int> els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_;
	TBranch *els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_branch;
	bool els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele25WP60_SC4_Mass55_;
	TBranch *els_HLT_Ele25WP60_SC4_Mass55_branch;
	bool els_HLT_Ele25WP60_SC4_Mass55_isLoaded;
	vector<unsigned int> els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_;
	TBranch *els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_branch;
	bool els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele27_WP80_;
	TBranch *els_HLT_Ele27_WP80_branch;
	bool els_HLT_Ele27_WP80_isLoaded;
	vector<unsigned int> els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_;
	TBranch *els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_branch;
	bool els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_isLoaded;
	vector<unsigned int> els_HLT_Ele32_SC17_Mass50_LeadingLeg_;
	TBranch *els_HLT_Ele32_SC17_Mass50_LeadingLeg_branch;
	bool els_HLT_Ele32_SC17_Mass50_LeadingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele32_SC17_Mass50_TrailingLeg_;
	TBranch *els_HLT_Ele32_SC17_Mass50_TrailingLeg_branch;
	bool els_HLT_Ele32_SC17_Mass50_TrailingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_;
	TBranch *els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch;
	bool els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	TBranch *els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch;
	bool els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele5_SC5_JPsi_Mass2to4p5_;
	TBranch *els_HLT_Ele5_SC5_JPsi_Mass2to4p5_branch;
	bool els_HLT_Ele5_SC5_JPsi_Mass2to4p5_isLoaded;
	vector<unsigned int> els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_;
	TBranch *els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_branch;
	bool els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_isLoaded;
	vector<unsigned int> els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	TBranch *els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch;
	bool els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Mu17_Ele8_;
	TBranch *els_HLT_Mu17_Ele8_branch;
	bool els_HLT_Mu17_Ele8_isLoaded;
	vector<unsigned int> els_HLT_Mu17_Ele8_TrailingLeg_;
	TBranch *els_HLT_Mu17_Ele8_TrailingLeg_branch;
	bool els_HLT_Mu17_Ele8_TrailingLeg_isLoaded;
	vector<unsigned int> els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_;
	TBranch *els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch;
	bool els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Mu8_Ele17_;
	TBranch *els_HLT_Mu8_Ele17_branch;
	bool els_HLT_Mu8_Ele17_isLoaded;
	vector<unsigned int> els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_;
	TBranch *els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch;
	bool els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_isLoaded;
	vector<unsigned int> els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_;
	TBranch *els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch;
	bool els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_isLoaded;
	vector<unsigned int> hlt_prescales_;
	TBranch *hlt_prescales_branch;
	bool hlt_prescales_isLoaded;
	vector<unsigned int> mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_;
	TBranch *mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_branch;
	bool mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_isLoaded;
	vector<unsigned int> mus_HLT_IsoMu24_eta2p1_;
	TBranch *mus_HLT_IsoMu24_eta2p1_branch;
	bool mus_HLT_IsoMu24_eta2p1_isLoaded;
	vector<unsigned int> mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_;
	TBranch *mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_branch;
	bool mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_isLoaded;
	vector<unsigned int> mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_;
	TBranch *mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_branch;
	bool mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_;
	TBranch *mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_branch;
	bool mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_Ele8_;
	TBranch *mus_HLT_Mu17_Ele8_branch;
	bool mus_HLT_Mu17_Ele8_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_Ele8_LeadingLeg_;
	TBranch *mus_HLT_Mu17_Ele8_LeadingLeg_branch;
	bool mus_HLT_Mu17_Ele8_LeadingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_Mu8_;
	TBranch *mus_HLT_Mu17_Mu8_branch;
	bool mus_HLT_Mu17_Mu8_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_;
	TBranch *mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_branch;
	bool mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_Mu8_LeadingLeg_;
	TBranch *mus_HLT_Mu17_Mu8_LeadingLeg_branch;
	bool mus_HLT_Mu17_Mu8_LeadingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_Mu8_TrailingLeg_;
	TBranch *mus_HLT_Mu17_Mu8_TrailingLeg_branch;
	bool mus_HLT_Mu17_Mu8_TrailingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TkMu8_;
	TBranch *mus_HLT_Mu17_TkMu8_branch;
	bool mus_HLT_Mu17_TkMu8_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TkMu8_LeadingLeg_;
	TBranch *mus_HLT_Mu17_TkMu8_LeadingLeg_branch;
	bool mus_HLT_Mu17_TkMu8_LeadingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TkMu8_TrailingLeg_;
	TBranch *mus_HLT_Mu17_TkMu8_TrailingLeg_branch;
	bool mus_HLT_Mu17_TkMu8_TrailingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_;
	TBranch *mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_branch;
	bool mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_;
	TBranch *mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_branch;
	bool mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_;
	TBranch *mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch;
	bool mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu8_Ele17_;
	TBranch *mus_HLT_Mu8_Ele17_branch;
	bool mus_HLT_Mu8_Ele17_isLoaded;
	vector<unsigned int> mus_HLT_Mu8_Ele17_TrailingLeg_;
	TBranch *mus_HLT_Mu8_Ele17_TrailingLeg_branch;
	bool mus_HLT_Mu8_Ele17_TrailingLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_;
	TBranch *mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_branch;
	bool mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_isLoaded;
	vector<unsigned int> mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_;
	TBranch *mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch;
	bool mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_isLoaded;
	ULong64_t evt_event_;
	TBranch *evt_event_branch;
	bool evt_event_isLoaded;
	vector<ULong64_t> evt_timestamp_;
	TBranch *evt_timestamp_branch;
	bool evt_timestamp_isLoaded;
	unsigned long long	evt_nEvts_;
	TBranch *evt_nEvts_branch;
	bool evt_nEvts_isLoaded;
	unsigned long long	evt_nEvts_effective_;
	TBranch *evt_nEvts_effective_branch;
	bool evt_nEvts_effective_isLoaded;
	float	evt_filt_eff_;
	TBranch *evt_filt_eff_branch;
	bool evt_filt_eff_isLoaded;
public: 
void Init(TTree *tree) {
	hlt_bits_branch = 0;
	if (tree->GetAlias("hlt_bits") != 0) {
		hlt_bits_branch = tree->GetBranch(tree->GetAlias("hlt_bits"));
		if (hlt_bits_branch) {hlt_bits_branch->SetAddress(&hlt_bits_);}
	}
	evt_bsp4_branch = 0;
	if (tree->GetAlias("evt_bsp4") != 0) {
		evt_bsp4_branch = tree->GetBranch(tree->GetAlias("evt_bsp4"));
		if (evt_bsp4_branch) {evt_bsp4_branch->SetAddress(&evt_bsp4_);}
	}
	pfjets_nonCHS_p4_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_p4") != 0) {
		pfjets_nonCHS_p4_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_p4"));
		if (pfjets_nonCHS_p4_branch) {pfjets_nonCHS_p4_branch->SetAddress(&pfjets_nonCHS_p4_);}
	}
	ak8jets_mc_gp_p4_branch = 0;
	if (tree->GetAlias("ak8jets_mc_gp_p4") != 0) {
		ak8jets_mc_gp_p4_branch = tree->GetBranch(tree->GetAlias("ak8jets_mc_gp_p4"));
		if (ak8jets_mc_gp_p4_branch) {ak8jets_mc_gp_p4_branch->SetAddress(&ak8jets_mc_gp_p4_);}
	}
	ak8jets_mc_p4_branch = 0;
	if (tree->GetAlias("ak8jets_mc_p4") != 0) {
		ak8jets_mc_p4_branch = tree->GetBranch(tree->GetAlias("ak8jets_mc_p4"));
		if (ak8jets_mc_p4_branch) {ak8jets_mc_p4_branch->SetAddress(&ak8jets_mc_p4_);}
	}
	els_mc_motherp4_branch = 0;
	if (tree->GetAlias("els_mc_motherp4") != 0) {
		els_mc_motherp4_branch = tree->GetBranch(tree->GetAlias("els_mc_motherp4"));
		if (els_mc_motherp4_branch) {els_mc_motherp4_branch->SetAddress(&els_mc_motherp4_);}
	}
	els_mc_p4_branch = 0;
	if (tree->GetAlias("els_mc_p4") != 0) {
		els_mc_p4_branch = tree->GetBranch(tree->GetAlias("els_mc_p4"));
		if (els_mc_p4_branch) {els_mc_p4_branch->SetAddress(&els_mc_p4_);}
	}
	mus_mc_motherp4_branch = 0;
	if (tree->GetAlias("mus_mc_motherp4") != 0) {
		mus_mc_motherp4_branch = tree->GetBranch(tree->GetAlias("mus_mc_motherp4"));
		if (mus_mc_motherp4_branch) {mus_mc_motherp4_branch->SetAddress(&mus_mc_motherp4_);}
	}
	mus_mc_p4_branch = 0;
	if (tree->GetAlias("mus_mc_p4") != 0) {
		mus_mc_p4_branch = tree->GetBranch(tree->GetAlias("mus_mc_p4"));
		if (mus_mc_p4_branch) {mus_mc_p4_branch->SetAddress(&mus_mc_p4_);}
	}
	pfjets_mc_gp_p4_branch = 0;
	if (tree->GetAlias("pfjets_mc_gp_p4") != 0) {
		pfjets_mc_gp_p4_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_gp_p4"));
		if (pfjets_mc_gp_p4_branch) {pfjets_mc_gp_p4_branch->SetAddress(&pfjets_mc_gp_p4_);}
	}
	pfjets_mc_motherp4_branch = 0;
	if (tree->GetAlias("pfjets_mc_motherp4") != 0) {
		pfjets_mc_motherp4_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_motherp4"));
		if (pfjets_mc_motherp4_branch) {pfjets_mc_motherp4_branch->SetAddress(&pfjets_mc_motherp4_);}
	}
	pfjets_mc_p4_branch = 0;
	if (tree->GetAlias("pfjets_mc_p4") != 0) {
		pfjets_mc_p4_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_p4"));
		if (pfjets_mc_p4_branch) {pfjets_mc_p4_branch->SetAddress(&pfjets_mc_p4_);}
	}
	photons_mc_motherp4_branch = 0;
	if (tree->GetAlias("photons_mc_motherp4") != 0) {
		photons_mc_motherp4_branch = tree->GetBranch(tree->GetAlias("photons_mc_motherp4"));
		if (photons_mc_motherp4_branch) {photons_mc_motherp4_branch->SetAddress(&photons_mc_motherp4_);}
	}
	photons_mc_p4_branch = 0;
	if (tree->GetAlias("photons_mc_p4") != 0) {
		photons_mc_p4_branch = tree->GetBranch(tree->GetAlias("photons_mc_p4"));
		if (photons_mc_p4_branch) {photons_mc_p4_branch->SetAddress(&photons_mc_p4_);}
	}
	els_mc_patMatch_p4_branch = 0;
	if (tree->GetAlias("els_mc_patMatch_p4") != 0) {
		els_mc_patMatch_p4_branch = tree->GetBranch(tree->GetAlias("els_mc_patMatch_p4"));
		if (els_mc_patMatch_p4_branch) {els_mc_patMatch_p4_branch->SetAddress(&els_mc_patMatch_p4_);}
	}
	els_p4_branch = 0;
	if (tree->GetAlias("els_p4") != 0) {
		els_p4_branch = tree->GetBranch(tree->GetAlias("els_p4"));
		if (els_p4_branch) {els_p4_branch->SetAddress(&els_p4_);}
	}
	els_p4In_branch = 0;
	if (tree->GetAlias("els_p4In") != 0) {
		els_p4In_branch = tree->GetBranch(tree->GetAlias("els_p4In"));
		if (els_p4In_branch) {els_p4In_branch->SetAddress(&els_p4In_);}
	}
	els_p4Out_branch = 0;
	if (tree->GetAlias("els_p4Out") != 0) {
		els_p4Out_branch = tree->GetBranch(tree->GetAlias("els_p4Out"));
		if (els_p4Out_branch) {els_p4Out_branch->SetAddress(&els_p4Out_);}
	}
	els_trk_p4_branch = 0;
	if (tree->GetAlias("els_trk_p4") != 0) {
		els_trk_p4_branch = tree->GetBranch(tree->GetAlias("els_trk_p4"));
		if (els_trk_p4_branch) {els_trk_p4_branch->SetAddress(&els_trk_p4_);}
	}
	els_trk_vertex_p4_branch = 0;
	if (tree->GetAlias("els_trk_vertex_p4") != 0) {
		els_trk_vertex_p4_branch = tree->GetBranch(tree->GetAlias("els_trk_vertex_p4"));
		if (els_trk_vertex_p4_branch) {els_trk_vertex_p4_branch->SetAddress(&els_trk_vertex_p4_);}
	}
	els_vertex_p4_branch = 0;
	if (tree->GetAlias("els_vertex_p4") != 0) {
		els_vertex_p4_branch = tree->GetBranch(tree->GetAlias("els_vertex_p4"));
		if (els_vertex_p4_branch) {els_vertex_p4_branch->SetAddress(&els_vertex_p4_);}
	}
	genjets_p4NoMuNoNu_branch = 0;
	if (tree->GetAlias("genjets_p4NoMuNoNu") != 0) {
		genjets_p4NoMuNoNu_branch = tree->GetBranch(tree->GetAlias("genjets_p4NoMuNoNu"));
		if (genjets_p4NoMuNoNu_branch) {genjets_p4NoMuNoNu_branch->SetAddress(&genjets_p4NoMuNoNu_);}
	}
	genps_p4_branch = 0;
	if (tree->GetAlias("genps_p4") != 0) {
		genps_p4_branch = tree->GetBranch(tree->GetAlias("genps_p4"));
		if (genps_p4_branch) {genps_p4_branch->SetAddress(&genps_p4_);}
	}
	genps_prod_vtx_branch = 0;
	if (tree->GetAlias("genps_prod_vtx") != 0) {
		genps_prod_vtx_branch = tree->GetBranch(tree->GetAlias("genps_prod_vtx"));
		if (genps_prod_vtx_branch) {genps_prod_vtx_branch->SetAddress(&genps_prod_vtx_);}
	}
	genjets_p4_branch = 0;
	if (tree->GetAlias("genjets_p4") != 0) {
		genjets_p4_branch = tree->GetBranch(tree->GetAlias("genjets_p4"));
		if (genjets_p4_branch) {genjets_p4_branch->SetAddress(&genjets_p4_);}
	}
	hyp_ll_p4_branch = 0;
	if (tree->GetAlias("hyp_ll_p4") != 0) {
		hyp_ll_p4_branch = tree->GetBranch(tree->GetAlias("hyp_ll_p4"));
		if (hyp_ll_p4_branch) {hyp_ll_p4_branch->SetAddress(&hyp_ll_p4_);}
	}
	hyp_lt_p4_branch = 0;
	if (tree->GetAlias("hyp_lt_p4") != 0) {
		hyp_lt_p4_branch = tree->GetBranch(tree->GetAlias("hyp_lt_p4"));
		if (hyp_lt_p4_branch) {hyp_lt_p4_branch->SetAddress(&hyp_lt_p4_);}
	}
	hyp_p4_branch = 0;
	if (tree->GetAlias("hyp_p4") != 0) {
		hyp_p4_branch = tree->GetBranch(tree->GetAlias("hyp_p4"));
		if (hyp_p4_branch) {hyp_p4_branch->SetAddress(&hyp_p4_);}
	}
	isotracks_p4_branch = 0;
	if (tree->GetAlias("isotracks_p4") != 0) {
		isotracks_p4_branch = tree->GetBranch(tree->GetAlias("isotracks_p4"));
		if (isotracks_p4_branch) {isotracks_p4_branch->SetAddress(&isotracks_p4_);}
	}
	mus_gfit_p4_branch = 0;
	if (tree->GetAlias("mus_gfit_p4") != 0) {
		mus_gfit_p4_branch = tree->GetBranch(tree->GetAlias("mus_gfit_p4"));
		if (mus_gfit_p4_branch) {mus_gfit_p4_branch->SetAddress(&mus_gfit_p4_);}
	}
	mus_gfit_vertex_p4_branch = 0;
	if (tree->GetAlias("mus_gfit_vertex_p4") != 0) {
		mus_gfit_vertex_p4_branch = tree->GetBranch(tree->GetAlias("mus_gfit_vertex_p4"));
		if (mus_gfit_vertex_p4_branch) {mus_gfit_vertex_p4_branch->SetAddress(&mus_gfit_vertex_p4_);}
	}
	mus_mc_patMatch_p4_branch = 0;
	if (tree->GetAlias("mus_mc_patMatch_p4") != 0) {
		mus_mc_patMatch_p4_branch = tree->GetBranch(tree->GetAlias("mus_mc_patMatch_p4"));
		if (mus_mc_patMatch_p4_branch) {mus_mc_patMatch_p4_branch->SetAddress(&mus_mc_patMatch_p4_);}
	}
	mus_p4_branch = 0;
	if (tree->GetAlias("mus_p4") != 0) {
		mus_p4_branch = tree->GetBranch(tree->GetAlias("mus_p4"));
		if (mus_p4_branch) {mus_p4_branch->SetAddress(&mus_p4_);}
	}
	mus_pfp4_branch = 0;
	if (tree->GetAlias("mus_pfp4") != 0) {
		mus_pfp4_branch = tree->GetBranch(tree->GetAlias("mus_pfp4"));
		if (mus_pfp4_branch) {mus_pfp4_branch->SetAddress(&mus_pfp4_);}
	}
	mus_sta_p4_branch = 0;
	if (tree->GetAlias("mus_sta_p4") != 0) {
		mus_sta_p4_branch = tree->GetBranch(tree->GetAlias("mus_sta_p4"));
		if (mus_sta_p4_branch) {mus_sta_p4_branch->SetAddress(&mus_sta_p4_);}
	}
	mus_sta_vertex_p4_branch = 0;
	if (tree->GetAlias("mus_sta_vertex_p4") != 0) {
		mus_sta_vertex_p4_branch = tree->GetBranch(tree->GetAlias("mus_sta_vertex_p4"));
		if (mus_sta_vertex_p4_branch) {mus_sta_vertex_p4_branch->SetAddress(&mus_sta_vertex_p4_);}
	}
	mus_trk_p4_branch = 0;
	if (tree->GetAlias("mus_trk_p4") != 0) {
		mus_trk_p4_branch = tree->GetBranch(tree->GetAlias("mus_trk_p4"));
		if (mus_trk_p4_branch) {mus_trk_p4_branch->SetAddress(&mus_trk_p4_);}
	}
	mus_vertex_p4_branch = 0;
	if (tree->GetAlias("mus_vertex_p4") != 0) {
		mus_vertex_p4_branch = tree->GetBranch(tree->GetAlias("mus_vertex_p4"));
		if (mus_vertex_p4_branch) {mus_vertex_p4_branch->SetAddress(&mus_vertex_p4_);}
	}
	pfcands_p4_branch = 0;
	if (tree->GetAlias("pfcands_p4") != 0) {
		pfcands_p4_branch = tree->GetBranch(tree->GetAlias("pfcands_p4"));
		if (pfcands_p4_branch) {pfcands_p4_branch->SetAddress(&pfcands_p4_);}
	}
	pfjets_p4_branch = 0;
	if (tree->GetAlias("pfjets_p4") != 0) {
		pfjets_p4_branch = tree->GetBranch(tree->GetAlias("pfjets_p4"));
		if (pfjets_p4_branch) {pfjets_p4_branch->SetAddress(&pfjets_p4_);}
	}
	pfjets_puppi_p4_branch = 0;
	if (tree->GetAlias("pfjets_puppi_p4") != 0) {
		pfjets_puppi_p4_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_p4"));
		if (pfjets_puppi_p4_branch) {pfjets_puppi_p4_branch->SetAddress(&pfjets_puppi_p4_);}
	}
	taus_pf_lead_chargecand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_lead_chargecand_p4") != 0) {
		taus_pf_lead_chargecand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_lead_chargecand_p4"));
		if (taus_pf_lead_chargecand_p4_branch) {taus_pf_lead_chargecand_p4_branch->SetAddress(&taus_pf_lead_chargecand_p4_);}
	}
	taus_pf_lead_neutrcand_p4_branch = 0;
	if (tree->GetAlias("taus_pf_lead_neutrcand_p4") != 0) {
		taus_pf_lead_neutrcand_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_lead_neutrcand_p4"));
		if (taus_pf_lead_neutrcand_p4_branch) {taus_pf_lead_neutrcand_p4_branch->SetAddress(&taus_pf_lead_neutrcand_p4_);}
	}
	taus_pf_p4_branch = 0;
	if (tree->GetAlias("taus_pf_p4") != 0) {
		taus_pf_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_p4"));
		if (taus_pf_p4_branch) {taus_pf_p4_branch->SetAddress(&taus_pf_p4_);}
	}
	photons_p4_branch = 0;
	if (tree->GetAlias("photons_p4") != 0) {
		photons_p4_branch = tree->GetBranch(tree->GetAlias("photons_p4"));
		if (photons_p4_branch) {photons_p4_branch->SetAddress(&photons_p4_);}
	}
	svs_p4_branch = 0;
	if (tree->GetAlias("svs_p4") != 0) {
		svs_p4_branch = tree->GetBranch(tree->GetAlias("svs_p4"));
		if (svs_p4_branch) {svs_p4_branch->SetAddress(&svs_p4_);}
	}
	svs_position_branch = 0;
	if (tree->GetAlias("svs_position") != 0) {
		svs_position_branch = tree->GetBranch(tree->GetAlias("svs_position"));
		if (svs_position_branch) {svs_position_branch->SetAddress(&svs_position_);}
	}
	ak8jets_p4_branch = 0;
	if (tree->GetAlias("ak8jets_p4") != 0) {
		ak8jets_p4_branch = tree->GetBranch(tree->GetAlias("ak8jets_p4"));
		if (ak8jets_p4_branch) {ak8jets_p4_branch->SetAddress(&ak8jets_p4_);}
	}
	vtxs_position_branch = 0;
	if (tree->GetAlias("vtxs_position") != 0) {
		vtxs_position_branch = tree->GetBranch(tree->GetAlias("vtxs_position"));
		if (vtxs_position_branch) {vtxs_position_branch->SetAddress(&vtxs_position_);}
	}
  tree->SetMakeClass(1);
	genweightsID_branch = 0;
	if (tree->GetAlias("genweightsID") != 0) {
		genweightsID_branch = tree->GetBranch(tree->GetAlias("genweightsID"));
		if (genweightsID_branch) {genweightsID_branch->SetAddress(&genweightsID_);}
	}
	pfjets_nonCHS_bDiscriminatorNames_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_bDiscriminatorNames") != 0) {
		pfjets_nonCHS_bDiscriminatorNames_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_bDiscriminatorNames"));
		if (pfjets_nonCHS_bDiscriminatorNames_branch) {pfjets_nonCHS_bDiscriminatorNames_branch->SetAddress(&pfjets_nonCHS_bDiscriminatorNames_);}
	}
	evt_CMS3tag_branch = 0;
	if (tree->GetAlias("evt_CMS3tag") != 0) {
		evt_CMS3tag_branch = tree->GetBranch(tree->GetAlias("evt_CMS3tag"));
		if (evt_CMS3tag_branch) {evt_CMS3tag_branch->SetAddress(&evt_CMS3tag_);}
	}
	evt_dataset_branch = 0;
	if (tree->GetAlias("evt_dataset") != 0) {
		evt_dataset_branch = tree->GetBranch(tree->GetAlias("evt_dataset"));
		if (evt_dataset_branch) {evt_dataset_branch->SetAddress(&evt_dataset_);}
	}
	hlt_trigNames_branch = 0;
	if (tree->GetAlias("hlt_trigNames") != 0) {
		hlt_trigNames_branch = tree->GetBranch(tree->GetAlias("hlt_trigNames"));
		if (hlt_trigNames_branch) {hlt_trigNames_branch->SetAddress(&hlt_trigNames_);}
	}
	pfjets_bDiscriminatorNames_branch = 0;
	if (tree->GetAlias("pfjets_bDiscriminatorNames") != 0) {
		pfjets_bDiscriminatorNames_branch = tree->GetBranch(tree->GetAlias("pfjets_bDiscriminatorNames"));
		if (pfjets_bDiscriminatorNames_branch) {pfjets_bDiscriminatorNames_branch->SetAddress(&pfjets_bDiscriminatorNames_);}
	}
	pfjets_puppi_bDiscriminatorNames_branch = 0;
	if (tree->GetAlias("pfjets_puppi_bDiscriminatorNames") != 0) {
		pfjets_puppi_bDiscriminatorNames_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_bDiscriminatorNames"));
		if (pfjets_puppi_bDiscriminatorNames_branch) {pfjets_puppi_bDiscriminatorNames_branch->SetAddress(&pfjets_puppi_bDiscriminatorNames_);}
	}
	taus_pf_IDnames_branch = 0;
	if (tree->GetAlias("taus_pf_IDnames") != 0) {
		taus_pf_IDnames_branch = tree->GetBranch(tree->GetAlias("taus_pf_IDnames"));
		if (taus_pf_IDnames_branch) {taus_pf_IDnames_branch->SetAddress(&taus_pf_IDnames_);}
	}
	sparm_comment_branch = 0;
	if (tree->GetAlias("sparm_comment") != 0) {
		sparm_comment_branch = tree->GetBranch(tree->GetAlias("sparm_comment"));
		if (sparm_comment_branch) {sparm_comment_branch->SetAddress(&sparm_comment_);}
	}
	sparm_names_branch = 0;
	if (tree->GetAlias("sparm_names") != 0) {
		sparm_names_branch = tree->GetBranch(tree->GetAlias("sparm_names"));
		if (sparm_names_branch) {sparm_names_branch->SetAddress(&sparm_names_);}
	}
	hcalnoise_HasBadRBXTS4TS5_branch = 0;
	if (tree->GetAlias("hcalnoise_HasBadRBXTS4TS5") != 0) {
		hcalnoise_HasBadRBXTS4TS5_branch = tree->GetBranch(tree->GetAlias("hcalnoise_HasBadRBXTS4TS5"));
		if (hcalnoise_HasBadRBXTS4TS5_branch) {hcalnoise_HasBadRBXTS4TS5_branch->SetAddress(&hcalnoise_HasBadRBXTS4TS5_);}
	}
	evt_cscTightHaloId_branch = 0;
	if (tree->GetAlias("evt_cscTightHaloId") != 0) {
		evt_cscTightHaloId_branch = tree->GetBranch(tree->GetAlias("evt_cscTightHaloId"));
		if (evt_cscTightHaloId_branch) {evt_cscTightHaloId_branch->SetAddress(&evt_cscTightHaloId_);}
	}
	evt_hbheFilter_branch = 0;
	if (tree->GetAlias("evt_hbheFilter") != 0) {
		evt_hbheFilter_branch = tree->GetBranch(tree->GetAlias("evt_hbheFilter"));
		if (evt_hbheFilter_branch) {evt_hbheFilter_branch->SetAddress(&evt_hbheFilter_);}
	}
	filt_cscBeamHalo_branch = 0;
	if (tree->GetAlias("filt_cscBeamHalo") != 0) {
		filt_cscBeamHalo_branch = tree->GetBranch(tree->GetAlias("filt_cscBeamHalo"));
		if (filt_cscBeamHalo_branch) {filt_cscBeamHalo_branch->SetAddress(&filt_cscBeamHalo_);}
	}
	filt_ecalLaser_branch = 0;
	if (tree->GetAlias("filt_ecalLaser") != 0) {
		filt_ecalLaser_branch = tree->GetBranch(tree->GetAlias("filt_ecalLaser"));
		if (filt_ecalLaser_branch) {filt_ecalLaser_branch->SetAddress(&filt_ecalLaser_);}
	}
	filt_ecalTP_branch = 0;
	if (tree->GetAlias("filt_ecalTP") != 0) {
		filt_ecalTP_branch = tree->GetBranch(tree->GetAlias("filt_ecalTP"));
		if (filt_ecalTP_branch) {filt_ecalTP_branch->SetAddress(&filt_ecalTP_);}
	}
	filt_eeBadSc_branch = 0;
	if (tree->GetAlias("filt_eeBadSc") != 0) {
		filt_eeBadSc_branch = tree->GetBranch(tree->GetAlias("filt_eeBadSc"));
		if (filt_eeBadSc_branch) {filt_eeBadSc_branch->SetAddress(&filt_eeBadSc_);}
	}
	filt_goodVertices_branch = 0;
	if (tree->GetAlias("filt_goodVertices") != 0) {
		filt_goodVertices_branch = tree->GetBranch(tree->GetAlias("filt_goodVertices"));
		if (filt_goodVertices_branch) {filt_goodVertices_branch->SetAddress(&filt_goodVertices_);}
	}
	filt_hbheNoise_branch = 0;
	if (tree->GetAlias("filt_hbheNoise") != 0) {
		filt_hbheNoise_branch = tree->GetBranch(tree->GetAlias("filt_hbheNoise"));
		if (filt_hbheNoise_branch) {filt_hbheNoise_branch->SetAddress(&filt_hbheNoise_);}
	}
	filt_hcalLaser_branch = 0;
	if (tree->GetAlias("filt_hcalLaser") != 0) {
		filt_hcalLaser_branch = tree->GetBranch(tree->GetAlias("filt_hcalLaser"));
		if (filt_hcalLaser_branch) {filt_hcalLaser_branch->SetAddress(&filt_hcalLaser_);}
	}
	filt_metfilter_branch = 0;
	if (tree->GetAlias("filt_metfilter") != 0) {
		filt_metfilter_branch = tree->GetBranch(tree->GetAlias("filt_metfilter"));
		if (filt_metfilter_branch) {filt_metfilter_branch->SetAddress(&filt_metfilter_);}
	}
	filt_trackingFailure_branch = 0;
	if (tree->GetAlias("filt_trackingFailure") != 0) {
		filt_trackingFailure_branch = tree->GetBranch(tree->GetAlias("filt_trackingFailure"));
		if (filt_trackingFailure_branch) {filt_trackingFailure_branch->SetAddress(&filt_trackingFailure_);}
	}
	filt_trkPOGFilters_branch = 0;
	if (tree->GetAlias("filt_trkPOGFilters") != 0) {
		filt_trkPOGFilters_branch = tree->GetBranch(tree->GetAlias("filt_trkPOGFilters"));
		if (filt_trkPOGFilters_branch) {filt_trkPOGFilters_branch->SetAddress(&filt_trkPOGFilters_);}
	}
	filt_trkPOG_logErrorTooManyClusters_branch = 0;
	if (tree->GetAlias("filt_trkPOG_logErrorTooManyClusters") != 0) {
		filt_trkPOG_logErrorTooManyClusters_branch = tree->GetBranch(tree->GetAlias("filt_trkPOG_logErrorTooManyClusters"));
		if (filt_trkPOG_logErrorTooManyClusters_branch) {filt_trkPOG_logErrorTooManyClusters_branch->SetAddress(&filt_trkPOG_logErrorTooManyClusters_);}
	}
	filt_trkPOG_manystripclus53X_branch = 0;
	if (tree->GetAlias("filt_trkPOG_manystripclus53X") != 0) {
		filt_trkPOG_manystripclus53X_branch = tree->GetBranch(tree->GetAlias("filt_trkPOG_manystripclus53X"));
		if (filt_trkPOG_manystripclus53X_branch) {filt_trkPOG_manystripclus53X_branch->SetAddress(&filt_trkPOG_manystripclus53X_);}
	}
	filt_trkPOG_toomanystripclus53X_branch = 0;
	if (tree->GetAlias("filt_trkPOG_toomanystripclus53X") != 0) {
		filt_trkPOG_toomanystripclus53X_branch = tree->GetBranch(tree->GetAlias("filt_trkPOG_toomanystripclus53X"));
		if (filt_trkPOG_toomanystripclus53X_branch) {filt_trkPOG_toomanystripclus53X_branch->SetAddress(&filt_trkPOG_toomanystripclus53X_);}
	}
	els_conv_vtx_flag_branch = 0;
	if (tree->GetAlias("els_conv_vtx_flag") != 0) {
		els_conv_vtx_flag_branch = tree->GetBranch(tree->GetAlias("els_conv_vtx_flag"));
		if (els_conv_vtx_flag_branch) {els_conv_vtx_flag_branch->SetAddress(&els_conv_vtx_flag_);}
	}
	els_isGsfCtfScPixChargeConsistent_branch = 0;
	if (tree->GetAlias("els_isGsfCtfScPixChargeConsistent") != 0) {
		els_isGsfCtfScPixChargeConsistent_branch = tree->GetBranch(tree->GetAlias("els_isGsfCtfScPixChargeConsistent"));
		if (els_isGsfCtfScPixChargeConsistent_branch) {els_isGsfCtfScPixChargeConsistent_branch->SetAddress(&els_isGsfCtfScPixChargeConsistent_);}
	}
	els_passingMvaPreselection_branch = 0;
	if (tree->GetAlias("els_passingMvaPreselection") != 0) {
		els_passingMvaPreselection_branch = tree->GetBranch(tree->GetAlias("els_passingMvaPreselection"));
		if (els_passingMvaPreselection_branch) {els_passingMvaPreselection_branch->SetAddress(&els_passingMvaPreselection_);}
	}
	els_passingPflowPreselection_branch = 0;
	if (tree->GetAlias("els_passingPflowPreselection") != 0) {
		els_passingPflowPreselection_branch = tree->GetBranch(tree->GetAlias("els_passingPflowPreselection"));
		if (els_passingPflowPreselection_branch) {els_passingPflowPreselection_branch->SetAddress(&els_passingPflowPreselection_);}
	}
	genps_fromHardProcessBeforeFSR_branch = 0;
	if (tree->GetAlias("genps_fromHardProcessBeforeFSR") != 0) {
		genps_fromHardProcessBeforeFSR_branch = tree->GetBranch(tree->GetAlias("genps_fromHardProcessBeforeFSR"));
		if (genps_fromHardProcessBeforeFSR_branch) {genps_fromHardProcessBeforeFSR_branch->SetAddress(&genps_fromHardProcessBeforeFSR_);}
	}
	genps_fromHardProcessDecayed_branch = 0;
	if (tree->GetAlias("genps_fromHardProcessDecayed") != 0) {
		genps_fromHardProcessDecayed_branch = tree->GetBranch(tree->GetAlias("genps_fromHardProcessDecayed"));
		if (genps_fromHardProcessDecayed_branch) {genps_fromHardProcessDecayed_branch->SetAddress(&genps_fromHardProcessDecayed_);}
	}
	genps_fromHardProcessFinalState_branch = 0;
	if (tree->GetAlias("genps_fromHardProcessFinalState") != 0) {
		genps_fromHardProcessFinalState_branch = tree->GetBranch(tree->GetAlias("genps_fromHardProcessFinalState"));
		if (genps_fromHardProcessFinalState_branch) {genps_fromHardProcessFinalState_branch->SetAddress(&genps_fromHardProcessFinalState_);}
	}
	genps_isDirectHardProcessTauDecayProductFinalState_branch = 0;
	if (tree->GetAlias("genps_isDirectHardProcessTauDecayProductFinalState") != 0) {
		genps_isDirectHardProcessTauDecayProductFinalState_branch = tree->GetBranch(tree->GetAlias("genps_isDirectHardProcessTauDecayProductFinalState"));
		if (genps_isDirectHardProcessTauDecayProductFinalState_branch) {genps_isDirectHardProcessTauDecayProductFinalState_branch->SetAddress(&genps_isDirectHardProcessTauDecayProductFinalState_);}
	}
	genps_isDirectPromptTauDecayProductFinalState_branch = 0;
	if (tree->GetAlias("genps_isDirectPromptTauDecayProductFinalState") != 0) {
		genps_isDirectPromptTauDecayProductFinalState_branch = tree->GetBranch(tree->GetAlias("genps_isDirectPromptTauDecayProductFinalState"));
		if (genps_isDirectPromptTauDecayProductFinalState_branch) {genps_isDirectPromptTauDecayProductFinalState_branch->SetAddress(&genps_isDirectPromptTauDecayProductFinalState_);}
	}
	genps_isHardProcess_branch = 0;
	if (tree->GetAlias("genps_isHardProcess") != 0) {
		genps_isHardProcess_branch = tree->GetBranch(tree->GetAlias("genps_isHardProcess"));
		if (genps_isHardProcess_branch) {genps_isHardProcess_branch->SetAddress(&genps_isHardProcess_);}
	}
	genps_isLastCopy_branch = 0;
	if (tree->GetAlias("genps_isLastCopy") != 0) {
		genps_isLastCopy_branch = tree->GetBranch(tree->GetAlias("genps_isLastCopy"));
		if (genps_isLastCopy_branch) {genps_isLastCopy_branch->SetAddress(&genps_isLastCopy_);}
	}
	genps_isLastCopyBeforeFSR_branch = 0;
	if (tree->GetAlias("genps_isLastCopyBeforeFSR") != 0) {
		genps_isLastCopyBeforeFSR_branch = tree->GetBranch(tree->GetAlias("genps_isLastCopyBeforeFSR"));
		if (genps_isLastCopyBeforeFSR_branch) {genps_isLastCopyBeforeFSR_branch->SetAddress(&genps_isLastCopyBeforeFSR_);}
	}
	genps_isMostlyLikePythia6Status3_branch = 0;
	if (tree->GetAlias("genps_isMostlyLikePythia6Status3") != 0) {
		genps_isMostlyLikePythia6Status3_branch = tree->GetBranch(tree->GetAlias("genps_isMostlyLikePythia6Status3"));
		if (genps_isMostlyLikePythia6Status3_branch) {genps_isMostlyLikePythia6Status3_branch->SetAddress(&genps_isMostlyLikePythia6Status3_);}
	}
	genps_isPromptDecayed_branch = 0;
	if (tree->GetAlias("genps_isPromptDecayed") != 0) {
		genps_isPromptDecayed_branch = tree->GetBranch(tree->GetAlias("genps_isPromptDecayed"));
		if (genps_isPromptDecayed_branch) {genps_isPromptDecayed_branch->SetAddress(&genps_isPromptDecayed_);}
	}
	genps_isPromptFinalState_branch = 0;
	if (tree->GetAlias("genps_isPromptFinalState") != 0) {
		genps_isPromptFinalState_branch = tree->GetBranch(tree->GetAlias("genps_isPromptFinalState"));
		if (genps_isPromptFinalState_branch) {genps_isPromptFinalState_branch->SetAddress(&genps_isPromptFinalState_);}
	}
	mus_isRPCMuon_branch = 0;
	if (tree->GetAlias("mus_isRPCMuon") != 0) {
		mus_isRPCMuon_branch = tree->GetBranch(tree->GetAlias("mus_isRPCMuon"));
		if (mus_isRPCMuon_branch) {mus_isRPCMuon_branch->SetAddress(&mus_isRPCMuon_);}
	}
	mus_tightMatch_branch = 0;
	if (tree->GetAlias("mus_tightMatch") != 0) {
		mus_tightMatch_branch = tree->GetBranch(tree->GetAlias("mus_tightMatch"));
		if (mus_tightMatch_branch) {mus_tightMatch_branch->SetAddress(&mus_tightMatch_);}
	}
	mus_updatedSta_branch = 0;
	if (tree->GetAlias("mus_updatedSta") != 0) {
		mus_updatedSta_branch = tree->GetBranch(tree->GetAlias("mus_updatedSta"));
		if (mus_updatedSta_branch) {mus_updatedSta_branch->SetAddress(&mus_updatedSta_);}
	}
	photons_haspixelSeed_branch = 0;
	if (tree->GetAlias("photons_haspixelSeed") != 0) {
		photons_haspixelSeed_branch = tree->GetBranch(tree->GetAlias("photons_haspixelSeed"));
		if (photons_haspixelSeed_branch) {photons_haspixelSeed_branch->SetAddress(&photons_haspixelSeed_);}
	}
	evt_bs_Xwidth_branch = 0;
	if (tree->GetAlias("evt_bs_Xwidth") != 0) {
		evt_bs_Xwidth_branch = tree->GetBranch(tree->GetAlias("evt_bs_Xwidth"));
		if (evt_bs_Xwidth_branch) {evt_bs_Xwidth_branch->SetAddress(&evt_bs_Xwidth_);}
	}
	evt_bs_XwidthErr_branch = 0;
	if (tree->GetAlias("evt_bs_XwidthErr") != 0) {
		evt_bs_XwidthErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_XwidthErr"));
		if (evt_bs_XwidthErr_branch) {evt_bs_XwidthErr_branch->SetAddress(&evt_bs_XwidthErr_);}
	}
	evt_bs_Ywidth_branch = 0;
	if (tree->GetAlias("evt_bs_Ywidth") != 0) {
		evt_bs_Ywidth_branch = tree->GetBranch(tree->GetAlias("evt_bs_Ywidth"));
		if (evt_bs_Ywidth_branch) {evt_bs_Ywidth_branch->SetAddress(&evt_bs_Ywidth_);}
	}
	evt_bs_YwidthErr_branch = 0;
	if (tree->GetAlias("evt_bs_YwidthErr") != 0) {
		evt_bs_YwidthErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_YwidthErr"));
		if (evt_bs_YwidthErr_branch) {evt_bs_YwidthErr_branch->SetAddress(&evt_bs_YwidthErr_);}
	}
	evt_bs_dxdz_branch = 0;
	if (tree->GetAlias("evt_bs_dxdz") != 0) {
		evt_bs_dxdz_branch = tree->GetBranch(tree->GetAlias("evt_bs_dxdz"));
		if (evt_bs_dxdz_branch) {evt_bs_dxdz_branch->SetAddress(&evt_bs_dxdz_);}
	}
	evt_bs_dxdzErr_branch = 0;
	if (tree->GetAlias("evt_bs_dxdzErr") != 0) {
		evt_bs_dxdzErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_dxdzErr"));
		if (evt_bs_dxdzErr_branch) {evt_bs_dxdzErr_branch->SetAddress(&evt_bs_dxdzErr_);}
	}
	evt_bs_dydz_branch = 0;
	if (tree->GetAlias("evt_bs_dydz") != 0) {
		evt_bs_dydz_branch = tree->GetBranch(tree->GetAlias("evt_bs_dydz"));
		if (evt_bs_dydz_branch) {evt_bs_dydz_branch->SetAddress(&evt_bs_dydz_);}
	}
	evt_bs_dydzErr_branch = 0;
	if (tree->GetAlias("evt_bs_dydzErr") != 0) {
		evt_bs_dydzErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_dydzErr"));
		if (evt_bs_dydzErr_branch) {evt_bs_dydzErr_branch->SetAddress(&evt_bs_dydzErr_);}
	}
	evt_bs_sigmaZ_branch = 0;
	if (tree->GetAlias("evt_bs_sigmaZ") != 0) {
		evt_bs_sigmaZ_branch = tree->GetBranch(tree->GetAlias("evt_bs_sigmaZ"));
		if (evt_bs_sigmaZ_branch) {evt_bs_sigmaZ_branch->SetAddress(&evt_bs_sigmaZ_);}
	}
	evt_bs_sigmaZErr_branch = 0;
	if (tree->GetAlias("evt_bs_sigmaZErr") != 0) {
		evt_bs_sigmaZErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_sigmaZErr"));
		if (evt_bs_sigmaZErr_branch) {evt_bs_sigmaZErr_branch->SetAddress(&evt_bs_sigmaZErr_);}
	}
	evt_bs_xErr_branch = 0;
	if (tree->GetAlias("evt_bs_xErr") != 0) {
		evt_bs_xErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_xErr"));
		if (evt_bs_xErr_branch) {evt_bs_xErr_branch->SetAddress(&evt_bs_xErr_);}
	}
	evt_bs_yErr_branch = 0;
	if (tree->GetAlias("evt_bs_yErr") != 0) {
		evt_bs_yErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_yErr"));
		if (evt_bs_yErr_branch) {evt_bs_yErr_branch->SetAddress(&evt_bs_yErr_);}
	}
	evt_bs_zErr_branch = 0;
	if (tree->GetAlias("evt_bs_zErr") != 0) {
		evt_bs_zErr_branch = tree->GetBranch(tree->GetAlias("evt_bs_zErr"));
		if (evt_bs_zErr_branch) {evt_bs_zErr_branch->SetAddress(&evt_bs_zErr_);}
	}
	evt_bField_branch = 0;
	if (tree->GetAlias("evt_bField") != 0) {
		evt_bField_branch = tree->GetBranch(tree->GetAlias("evt_bField"));
		if (evt_bField_branch) {evt_bField_branch->SetAddress(&evt_bField_);}
	}
	evt_fixgrid_all_rho_branch = 0;
	if (tree->GetAlias("evt_fixgrid_all_rho") != 0) {
		evt_fixgrid_all_rho_branch = tree->GetBranch(tree->GetAlias("evt_fixgrid_all_rho"));
		if (evt_fixgrid_all_rho_branch) {evt_fixgrid_all_rho_branch->SetAddress(&evt_fixgrid_all_rho_);}
	}
	evt_fixgridfastjet_allcalo_rho_branch = 0;
	if (tree->GetAlias("evt_fixgridfastjet_allcalo_rho") != 0) {
		evt_fixgridfastjet_allcalo_rho_branch = tree->GetBranch(tree->GetAlias("evt_fixgridfastjet_allcalo_rho"));
		if (evt_fixgridfastjet_allcalo_rho_branch) {evt_fixgridfastjet_allcalo_rho_branch->SetAddress(&evt_fixgridfastjet_allcalo_rho_);}
	}
	evt_fixgridfastjet_all_rho_branch = 0;
	if (tree->GetAlias("evt_fixgridfastjet_all_rho") != 0) {
		evt_fixgridfastjet_all_rho_branch = tree->GetBranch(tree->GetAlias("evt_fixgridfastjet_all_rho"));
		if (evt_fixgridfastjet_all_rho_branch) {evt_fixgridfastjet_all_rho_branch->SetAddress(&evt_fixgridfastjet_all_rho_);}
	}
	evt_fixgridfastjet_centralcalo_rho_branch = 0;
	if (tree->GetAlias("evt_fixgridfastjet_centralcalo_rho") != 0) {
		evt_fixgridfastjet_centralcalo_rho_branch = tree->GetBranch(tree->GetAlias("evt_fixgridfastjet_centralcalo_rho"));
		if (evt_fixgridfastjet_centralcalo_rho_branch) {evt_fixgridfastjet_centralcalo_rho_branch->SetAddress(&evt_fixgridfastjet_centralcalo_rho_);}
	}
	evt_fixgridfastjet_centralchargedpileup_rho_branch = 0;
	if (tree->GetAlias("evt_fixgridfastjet_centralchargedpileup_rho") != 0) {
		evt_fixgridfastjet_centralchargedpileup_rho_branch = tree->GetBranch(tree->GetAlias("evt_fixgridfastjet_centralchargedpileup_rho"));
		if (evt_fixgridfastjet_centralchargedpileup_rho_branch) {evt_fixgridfastjet_centralchargedpileup_rho_branch->SetAddress(&evt_fixgridfastjet_centralchargedpileup_rho_);}
	}
	evt_fixgridfastjet_centralneutral_rho_branch = 0;
	if (tree->GetAlias("evt_fixgridfastjet_centralneutral_rho") != 0) {
		evt_fixgridfastjet_centralneutral_rho_branch = tree->GetBranch(tree->GetAlias("evt_fixgridfastjet_centralneutral_rho"));
		if (evt_fixgridfastjet_centralneutral_rho_branch) {evt_fixgridfastjet_centralneutral_rho_branch->SetAddress(&evt_fixgridfastjet_centralneutral_rho_);}
	}
	evt_kfactor_branch = 0;
	if (tree->GetAlias("evt_kfactor") != 0) {
		evt_kfactor_branch = tree->GetBranch(tree->GetAlias("evt_kfactor"));
		if (evt_kfactor_branch) {evt_kfactor_branch->SetAddress(&evt_kfactor_);}
	}
	evt_scale1fb_branch = 0;
	if (tree->GetAlias("evt_scale1fb") != 0) {
		evt_scale1fb_branch = tree->GetBranch(tree->GetAlias("evt_scale1fb"));
		if (evt_scale1fb_branch) {evt_scale1fb_branch->SetAddress(&evt_scale1fb_);}
	}
	evt_xsec_excl_branch = 0;
	if (tree->GetAlias("evt_xsec_excl") != 0) {
		evt_xsec_excl_branch = tree->GetBranch(tree->GetAlias("evt_xsec_excl"));
		if (evt_xsec_excl_branch) {evt_xsec_excl_branch->SetAddress(&evt_xsec_excl_);}
	}
	evt_xsec_incl_branch = 0;
	if (tree->GetAlias("evt_xsec_incl") != 0) {
		evt_xsec_incl_branch = tree->GetBranch(tree->GetAlias("evt_xsec_incl"));
		if (evt_xsec_incl_branch) {evt_xsec_incl_branch->SetAddress(&evt_xsec_incl_);}
	}
	genps_alphaQCD_branch = 0;
	if (tree->GetAlias("genps_alphaQCD") != 0) {
		genps_alphaQCD_branch = tree->GetBranch(tree->GetAlias("genps_alphaQCD"));
		if (genps_alphaQCD_branch) {genps_alphaQCD_branch->SetAddress(&genps_alphaQCD_);}
	}
	genps_pthat_branch = 0;
	if (tree->GetAlias("genps_pthat") != 0) {
		genps_pthat_branch = tree->GetBranch(tree->GetAlias("genps_pthat"));
		if (genps_pthat_branch) {genps_pthat_branch->SetAddress(&genps_pthat_);}
	}
	genps_qScale_branch = 0;
	if (tree->GetAlias("genps_qScale") != 0) {
		genps_qScale_branch = tree->GetBranch(tree->GetAlias("genps_qScale"));
		if (genps_qScale_branch) {genps_qScale_branch->SetAddress(&genps_qScale_);}
	}
	genps_weight_branch = 0;
	if (tree->GetAlias("genps_weight") != 0) {
		genps_weight_branch = tree->GetBranch(tree->GetAlias("genps_weight"));
		if (genps_weight_branch) {genps_weight_branch->SetAddress(&genps_weight_);}
	}
	gen_sumEt_branch = 0;
	if (tree->GetAlias("gen_sumEt") != 0) {
		gen_sumEt_branch = tree->GetBranch(tree->GetAlias("gen_sumEt"));
		if (gen_sumEt_branch) {gen_sumEt_branch->SetAddress(&gen_sumEt_);}
	}
	hcalnoise_GetRecHitEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_GetRecHitEnergy") != 0) {
		hcalnoise_GetRecHitEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_GetRecHitEnergy"));
		if (hcalnoise_GetRecHitEnergy_branch) {hcalnoise_GetRecHitEnergy_branch->SetAddress(&hcalnoise_GetRecHitEnergy_);}
	}
	hcalnoise_GetRecHitEnergy15_branch = 0;
	if (tree->GetAlias("hcalnoise_GetRecHitEnergy15") != 0) {
		hcalnoise_GetRecHitEnergy15_branch = tree->GetBranch(tree->GetAlias("hcalnoise_GetRecHitEnergy15"));
		if (hcalnoise_GetRecHitEnergy15_branch) {hcalnoise_GetRecHitEnergy15_branch->SetAddress(&hcalnoise_GetRecHitEnergy15_);}
	}
	hcalnoise_GetTotalCalibCharge_branch = 0;
	if (tree->GetAlias("hcalnoise_GetTotalCalibCharge") != 0) {
		hcalnoise_GetTotalCalibCharge_branch = tree->GetBranch(tree->GetAlias("hcalnoise_GetTotalCalibCharge"));
		if (hcalnoise_GetTotalCalibCharge_branch) {hcalnoise_GetTotalCalibCharge_branch->SetAddress(&hcalnoise_GetTotalCalibCharge_);}
	}
	hcalnoise_TS4TS5NoiseSumE_branch = 0;
	if (tree->GetAlias("hcalnoise_TS4TS5NoiseSumE") != 0) {
		hcalnoise_TS4TS5NoiseSumE_branch = tree->GetBranch(tree->GetAlias("hcalnoise_TS4TS5NoiseSumE"));
		if (hcalnoise_TS4TS5NoiseSumE_branch) {hcalnoise_TS4TS5NoiseSumE_branch->SetAddress(&hcalnoise_TS4TS5NoiseSumE_);}
	}
	hcalnoise_TS4TS5NoiseSumEt_branch = 0;
	if (tree->GetAlias("hcalnoise_TS4TS5NoiseSumEt") != 0) {
		hcalnoise_TS4TS5NoiseSumEt_branch = tree->GetBranch(tree->GetAlias("hcalnoise_TS4TS5NoiseSumEt"));
		if (hcalnoise_TS4TS5NoiseSumEt_branch) {hcalnoise_TS4TS5NoiseSumEt_branch->SetAddress(&hcalnoise_TS4TS5NoiseSumEt_);}
	}
	hcalnoise_eventChargeFraction_branch = 0;
	if (tree->GetAlias("hcalnoise_eventChargeFraction") != 0) {
		hcalnoise_eventChargeFraction_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventChargeFraction"));
		if (hcalnoise_eventChargeFraction_branch) {hcalnoise_eventChargeFraction_branch->SetAddress(&hcalnoise_eventChargeFraction_);}
	}
	hcalnoise_eventEMEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_eventEMEnergy") != 0) {
		hcalnoise_eventEMEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventEMEnergy"));
		if (hcalnoise_eventEMEnergy_branch) {hcalnoise_eventEMEnergy_branch->SetAddress(&hcalnoise_eventEMEnergy_);}
	}
	hcalnoise_eventEMFraction_branch = 0;
	if (tree->GetAlias("hcalnoise_eventEMFraction") != 0) {
		hcalnoise_eventEMFraction_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventEMFraction"));
		if (hcalnoise_eventEMFraction_branch) {hcalnoise_eventEMFraction_branch->SetAddress(&hcalnoise_eventEMFraction_);}
	}
	hcalnoise_eventHadEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_eventHadEnergy") != 0) {
		hcalnoise_eventHadEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventHadEnergy"));
		if (hcalnoise_eventHadEnergy_branch) {hcalnoise_eventHadEnergy_branch->SetAddress(&hcalnoise_eventHadEnergy_);}
	}
	hcalnoise_eventTrackEnergy_branch = 0;
	if (tree->GetAlias("hcalnoise_eventTrackEnergy") != 0) {
		hcalnoise_eventTrackEnergy_branch = tree->GetBranch(tree->GetAlias("hcalnoise_eventTrackEnergy"));
		if (hcalnoise_eventTrackEnergy_branch) {hcalnoise_eventTrackEnergy_branch->SetAddress(&hcalnoise_eventTrackEnergy_);}
	}
	hcalnoise_flatNoiseSumE_branch = 0;
	if (tree->GetAlias("hcalnoise_flatNoiseSumE") != 0) {
		hcalnoise_flatNoiseSumE_branch = tree->GetBranch(tree->GetAlias("hcalnoise_flatNoiseSumE"));
		if (hcalnoise_flatNoiseSumE_branch) {hcalnoise_flatNoiseSumE_branch->SetAddress(&hcalnoise_flatNoiseSumE_);}
	}
	hcalnoise_flatNoiseSumEt_branch = 0;
	if (tree->GetAlias("hcalnoise_flatNoiseSumEt") != 0) {
		hcalnoise_flatNoiseSumEt_branch = tree->GetBranch(tree->GetAlias("hcalnoise_flatNoiseSumEt"));
		if (hcalnoise_flatNoiseSumEt_branch) {hcalnoise_flatNoiseSumEt_branch->SetAddress(&hcalnoise_flatNoiseSumEt_);}
	}
	hcalnoise_isolatedNoiseSumE_branch = 0;
	if (tree->GetAlias("hcalnoise_isolatedNoiseSumE") != 0) {
		hcalnoise_isolatedNoiseSumE_branch = tree->GetBranch(tree->GetAlias("hcalnoise_isolatedNoiseSumE"));
		if (hcalnoise_isolatedNoiseSumE_branch) {hcalnoise_isolatedNoiseSumE_branch->SetAddress(&hcalnoise_isolatedNoiseSumE_);}
	}
	hcalnoise_isolatedNoiseSumEt_branch = 0;
	if (tree->GetAlias("hcalnoise_isolatedNoiseSumEt") != 0) {
		hcalnoise_isolatedNoiseSumEt_branch = tree->GetBranch(tree->GetAlias("hcalnoise_isolatedNoiseSumEt"));
		if (hcalnoise_isolatedNoiseSumEt_branch) {hcalnoise_isolatedNoiseSumEt_branch->SetAddress(&hcalnoise_isolatedNoiseSumEt_);}
	}
	hcalnoise_max10GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_max10GeVHitTime") != 0) {
		hcalnoise_max10GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_max10GeVHitTime"));
		if (hcalnoise_max10GeVHitTime_branch) {hcalnoise_max10GeVHitTime_branch->SetAddress(&hcalnoise_max10GeVHitTime_);}
	}
	hcalnoise_max25GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_max25GeVHitTime") != 0) {
		hcalnoise_max25GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_max25GeVHitTime"));
		if (hcalnoise_max25GeVHitTime_branch) {hcalnoise_max25GeVHitTime_branch->SetAddress(&hcalnoise_max25GeVHitTime_);}
	}
	hcalnoise_maxE10TS_branch = 0;
	if (tree->GetAlias("hcalnoise_maxE10TS") != 0) {
		hcalnoise_maxE10TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxE10TS"));
		if (hcalnoise_maxE10TS_branch) {hcalnoise_maxE10TS_branch->SetAddress(&hcalnoise_maxE10TS_);}
	}
	hcalnoise_maxE2Over10TS_branch = 0;
	if (tree->GetAlias("hcalnoise_maxE2Over10TS") != 0) {
		hcalnoise_maxE2Over10TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxE2Over10TS"));
		if (hcalnoise_maxE2Over10TS_branch) {hcalnoise_maxE2Over10TS_branch->SetAddress(&hcalnoise_maxE2Over10TS_);}
	}
	hcalnoise_maxE2TS_branch = 0;
	if (tree->GetAlias("hcalnoise_maxE2TS") != 0) {
		hcalnoise_maxE2TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxE2TS"));
		if (hcalnoise_maxE2TS_branch) {hcalnoise_maxE2TS_branch->SetAddress(&hcalnoise_maxE2TS_);}
	}
	hcalnoise_min10GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_min10GeVHitTime") != 0) {
		hcalnoise_min10GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_min10GeVHitTime"));
		if (hcalnoise_min10GeVHitTime_branch) {hcalnoise_min10GeVHitTime_branch->SetAddress(&hcalnoise_min10GeVHitTime_);}
	}
	hcalnoise_min25GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_min25GeVHitTime") != 0) {
		hcalnoise_min25GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_min25GeVHitTime"));
		if (hcalnoise_min25GeVHitTime_branch) {hcalnoise_min25GeVHitTime_branch->SetAddress(&hcalnoise_min25GeVHitTime_);}
	}
	hcalnoise_minE10TS_branch = 0;
	if (tree->GetAlias("hcalnoise_minE10TS") != 0) {
		hcalnoise_minE10TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minE10TS"));
		if (hcalnoise_minE10TS_branch) {hcalnoise_minE10TS_branch->SetAddress(&hcalnoise_minE10TS_);}
	}
	hcalnoise_minE2Over10TS_branch = 0;
	if (tree->GetAlias("hcalnoise_minE2Over10TS") != 0) {
		hcalnoise_minE2Over10TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minE2Over10TS"));
		if (hcalnoise_minE2Over10TS_branch) {hcalnoise_minE2Over10TS_branch->SetAddress(&hcalnoise_minE2Over10TS_);}
	}
	hcalnoise_minE2TS_branch = 0;
	if (tree->GetAlias("hcalnoise_minE2TS") != 0) {
		hcalnoise_minE2TS_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minE2TS"));
		if (hcalnoise_minE2TS_branch) {hcalnoise_minE2TS_branch->SetAddress(&hcalnoise_minE2TS_);}
	}
	hcalnoise_minHPDEMF_branch = 0;
	if (tree->GetAlias("hcalnoise_minHPDEMF") != 0) {
		hcalnoise_minHPDEMF_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minHPDEMF"));
		if (hcalnoise_minHPDEMF_branch) {hcalnoise_minHPDEMF_branch->SetAddress(&hcalnoise_minHPDEMF_);}
	}
	hcalnoise_minRBXEMF_branch = 0;
	if (tree->GetAlias("hcalnoise_minRBXEMF") != 0) {
		hcalnoise_minRBXEMF_branch = tree->GetBranch(tree->GetAlias("hcalnoise_minRBXEMF"));
		if (hcalnoise_minRBXEMF_branch) {hcalnoise_minRBXEMF_branch->SetAddress(&hcalnoise_minRBXEMF_);}
	}
	hcalnoise_rms10GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_rms10GeVHitTime") != 0) {
		hcalnoise_rms10GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_rms10GeVHitTime"));
		if (hcalnoise_rms10GeVHitTime_branch) {hcalnoise_rms10GeVHitTime_branch->SetAddress(&hcalnoise_rms10GeVHitTime_);}
	}
	hcalnoise_rms25GeVHitTime_branch = 0;
	if (tree->GetAlias("hcalnoise_rms25GeVHitTime") != 0) {
		hcalnoise_rms25GeVHitTime_branch = tree->GetBranch(tree->GetAlias("hcalnoise_rms25GeVHitTime"));
		if (hcalnoise_rms25GeVHitTime_branch) {hcalnoise_rms25GeVHitTime_branch->SetAddress(&hcalnoise_rms25GeVHitTime_);}
	}
	hcalnoise_spikeNoiseSumE_branch = 0;
	if (tree->GetAlias("hcalnoise_spikeNoiseSumE") != 0) {
		hcalnoise_spikeNoiseSumE_branch = tree->GetBranch(tree->GetAlias("hcalnoise_spikeNoiseSumE"));
		if (hcalnoise_spikeNoiseSumE_branch) {hcalnoise_spikeNoiseSumE_branch->SetAddress(&hcalnoise_spikeNoiseSumE_);}
	}
	hcalnoise_spikeNoiseSumEt_branch = 0;
	if (tree->GetAlias("hcalnoise_spikeNoiseSumEt") != 0) {
		hcalnoise_spikeNoiseSumEt_branch = tree->GetBranch(tree->GetAlias("hcalnoise_spikeNoiseSumEt"));
		if (hcalnoise_spikeNoiseSumEt_branch) {hcalnoise_spikeNoiseSumEt_branch->SetAddress(&hcalnoise_spikeNoiseSumEt_);}
	}
	hcalnoise_triangleNoiseSumE_branch = 0;
	if (tree->GetAlias("hcalnoise_triangleNoiseSumE") != 0) {
		hcalnoise_triangleNoiseSumE_branch = tree->GetBranch(tree->GetAlias("hcalnoise_triangleNoiseSumE"));
		if (hcalnoise_triangleNoiseSumE_branch) {hcalnoise_triangleNoiseSumE_branch->SetAddress(&hcalnoise_triangleNoiseSumE_);}
	}
	hcalnoise_triangleNoiseSumEt_branch = 0;
	if (tree->GetAlias("hcalnoise_triangleNoiseSumEt") != 0) {
		hcalnoise_triangleNoiseSumEt_branch = tree->GetBranch(tree->GetAlias("hcalnoise_triangleNoiseSumEt"));
		if (hcalnoise_triangleNoiseSumEt_branch) {hcalnoise_triangleNoiseSumEt_branch->SetAddress(&hcalnoise_triangleNoiseSumEt_);}
	}
	pdfinfo_pdf1_branch = 0;
	if (tree->GetAlias("pdfinfo_pdf1") != 0) {
		pdfinfo_pdf1_branch = tree->GetBranch(tree->GetAlias("pdfinfo_pdf1"));
		if (pdfinfo_pdf1_branch) {pdfinfo_pdf1_branch->SetAddress(&pdfinfo_pdf1_);}
	}
	pdfinfo_pdf2_branch = 0;
	if (tree->GetAlias("pdfinfo_pdf2") != 0) {
		pdfinfo_pdf2_branch = tree->GetBranch(tree->GetAlias("pdfinfo_pdf2"));
		if (pdfinfo_pdf2_branch) {pdfinfo_pdf2_branch->SetAddress(&pdfinfo_pdf2_);}
	}
	pdfinfo_scale_branch = 0;
	if (tree->GetAlias("pdfinfo_scale") != 0) {
		pdfinfo_scale_branch = tree->GetBranch(tree->GetAlias("pdfinfo_scale"));
		if (pdfinfo_scale_branch) {pdfinfo_scale_branch->SetAddress(&pdfinfo_scale_);}
	}
	pdfinfo_x1_branch = 0;
	if (tree->GetAlias("pdfinfo_x1") != 0) {
		pdfinfo_x1_branch = tree->GetBranch(tree->GetAlias("pdfinfo_x1"));
		if (pdfinfo_x1_branch) {pdfinfo_x1_branch->SetAddress(&pdfinfo_x1_);}
	}
	pdfinfo_x2_branch = 0;
	if (tree->GetAlias("pdfinfo_x2") != 0) {
		pdfinfo_x2_branch = tree->GetBranch(tree->GetAlias("pdfinfo_x2"));
		if (pdfinfo_x2_branch) {pdfinfo_x2_branch->SetAddress(&pdfinfo_x2_);}
	}
	evt_fixgrid_rho_all_branch = 0;
	if (tree->GetAlias("evt_fixgrid_rho_all") != 0) {
		evt_fixgrid_rho_all_branch = tree->GetBranch(tree->GetAlias("evt_fixgrid_rho_all"));
		if (evt_fixgrid_rho_all_branch) {evt_fixgrid_rho_all_branch->SetAddress(&evt_fixgrid_rho_all_);}
	}
	evt_fixgrid_rho_ctr_branch = 0;
	if (tree->GetAlias("evt_fixgrid_rho_ctr") != 0) {
		evt_fixgrid_rho_ctr_branch = tree->GetBranch(tree->GetAlias("evt_fixgrid_rho_ctr"));
		if (evt_fixgrid_rho_ctr_branch) {evt_fixgrid_rho_ctr_branch->SetAddress(&evt_fixgrid_rho_ctr_);}
	}
	evt_fixgrid_rho_fwd_branch = 0;
	if (tree->GetAlias("evt_fixgrid_rho_fwd") != 0) {
		evt_fixgrid_rho_fwd_branch = tree->GetBranch(tree->GetAlias("evt_fixgrid_rho_fwd"));
		if (evt_fixgrid_rho_fwd_branch) {evt_fixgrid_rho_fwd_branch->SetAddress(&evt_fixgrid_rho_fwd_);}
	}
	evt_calomet_branch = 0;
	if (tree->GetAlias("evt_calomet") != 0) {
		evt_calomet_branch = tree->GetBranch(tree->GetAlias("evt_calomet"));
		if (evt_calomet_branch) {evt_calomet_branch->SetAddress(&evt_calomet_);}
	}
	evt_calometPhi_branch = 0;
	if (tree->GetAlias("evt_calometPhi") != 0) {
		evt_calometPhi_branch = tree->GetBranch(tree->GetAlias("evt_calometPhi"));
		if (evt_calometPhi_branch) {evt_calometPhi_branch->SetAddress(&evt_calometPhi_);}
	}
	evt_pfmet_branch = 0;
	if (tree->GetAlias("evt_pfmet") != 0) {
		evt_pfmet_branch = tree->GetBranch(tree->GetAlias("evt_pfmet"));
		if (evt_pfmet_branch) {evt_pfmet_branch->SetAddress(&evt_pfmet_);}
	}
	evt_pfmetPhi_branch = 0;
	if (tree->GetAlias("evt_pfmetPhi") != 0) {
		evt_pfmetPhi_branch = tree->GetBranch(tree->GetAlias("evt_pfmetPhi"));
		if (evt_pfmetPhi_branch) {evt_pfmetPhi_branch->SetAddress(&evt_pfmetPhi_);}
	}
	evt_pfmetPhi_raw_branch = 0;
	if (tree->GetAlias("evt_pfmetPhi_raw") != 0) {
		evt_pfmetPhi_raw_branch = tree->GetBranch(tree->GetAlias("evt_pfmetPhi_raw"));
		if (evt_pfmetPhi_raw_branch) {evt_pfmetPhi_raw_branch->SetAddress(&evt_pfmetPhi_raw_);}
	}
	evt_pfmetSig_branch = 0;
	if (tree->GetAlias("evt_pfmetSig") != 0) {
		evt_pfmetSig_branch = tree->GetBranch(tree->GetAlias("evt_pfmetSig"));
		if (evt_pfmetSig_branch) {evt_pfmetSig_branch->SetAddress(&evt_pfmetSig_);}
	}
	evt_pfmet_raw_branch = 0;
	if (tree->GetAlias("evt_pfmet_raw") != 0) {
		evt_pfmet_raw_branch = tree->GetBranch(tree->GetAlias("evt_pfmet_raw"));
		if (evt_pfmet_raw_branch) {evt_pfmet_raw_branch->SetAddress(&evt_pfmet_raw_);}
	}
	evt_pfsumet_branch = 0;
	if (tree->GetAlias("evt_pfsumet") != 0) {
		evt_pfsumet_branch = tree->GetBranch(tree->GetAlias("evt_pfsumet"));
		if (evt_pfsumet_branch) {evt_pfsumet_branch->SetAddress(&evt_pfsumet_);}
	}
	evt_pfsumet_raw_branch = 0;
	if (tree->GetAlias("evt_pfsumet_raw") != 0) {
		evt_pfsumet_raw_branch = tree->GetBranch(tree->GetAlias("evt_pfsumet_raw"));
		if (evt_pfsumet_raw_branch) {evt_pfsumet_raw_branch->SetAddress(&evt_pfsumet_raw_);}
	}
	gen_met_branch = 0;
	if (tree->GetAlias("gen_met") != 0) {
		gen_met_branch = tree->GetBranch(tree->GetAlias("gen_met"));
		if (gen_met_branch) {gen_met_branch->SetAddress(&gen_met_);}
	}
	gen_metPhi_branch = 0;
	if (tree->GetAlias("gen_metPhi") != 0) {
		gen_metPhi_branch = tree->GetBranch(tree->GetAlias("gen_metPhi"));
		if (gen_metPhi_branch) {gen_metPhi_branch->SetAddress(&gen_metPhi_);}
	}
	sparm_filterEfficiency_branch = 0;
	if (tree->GetAlias("sparm_filterEfficiency") != 0) {
		sparm_filterEfficiency_branch = tree->GetBranch(tree->GetAlias("sparm_filterEfficiency"));
		if (sparm_filterEfficiency_branch) {sparm_filterEfficiency_branch->SetAddress(&sparm_filterEfficiency_);}
	}
	sparm_pdfScale_branch = 0;
	if (tree->GetAlias("sparm_pdfScale") != 0) {
		sparm_pdfScale_branch = tree->GetBranch(tree->GetAlias("sparm_pdfScale"));
		if (sparm_pdfScale_branch) {sparm_pdfScale_branch->SetAddress(&sparm_pdfScale_);}
	}
	sparm_pdfWeight1_branch = 0;
	if (tree->GetAlias("sparm_pdfWeight1") != 0) {
		sparm_pdfWeight1_branch = tree->GetBranch(tree->GetAlias("sparm_pdfWeight1"));
		if (sparm_pdfWeight1_branch) {sparm_pdfWeight1_branch->SetAddress(&sparm_pdfWeight1_);}
	}
	sparm_pdfWeight2_branch = 0;
	if (tree->GetAlias("sparm_pdfWeight2") != 0) {
		sparm_pdfWeight2_branch = tree->GetBranch(tree->GetAlias("sparm_pdfWeight2"));
		if (sparm_pdfWeight2_branch) {sparm_pdfWeight2_branch->SetAddress(&sparm_pdfWeight2_);}
	}
	sparm_weight_branch = 0;
	if (tree->GetAlias("sparm_weight") != 0) {
		sparm_weight_branch = tree->GetBranch(tree->GetAlias("sparm_weight"));
		if (sparm_weight_branch) {sparm_weight_branch->SetAddress(&sparm_weight_);}
	}
	sparm_xsec_branch = 0;
	if (tree->GetAlias("sparm_xsec") != 0) {
		sparm_xsec_branch = tree->GetBranch(tree->GetAlias("sparm_xsec"));
		if (sparm_xsec_branch) {sparm_xsec_branch->SetAddress(&sparm_xsec_);}
	}
	genps_lepdaughter_p4_branch = 0;
	if (tree->GetAlias("genps_lepdaughter_p4") != 0) {
		genps_lepdaughter_p4_branch = tree->GetBranch(tree->GetAlias("genps_lepdaughter_p4"));
		if (genps_lepdaughter_p4_branch) {genps_lepdaughter_p4_branch->SetAddress(&genps_lepdaughter_p4_);}
	}
	hlt_trigObjs_p4_branch = 0;
	if (tree->GetAlias("hlt_trigObjs_p4") != 0) {
		hlt_trigObjs_p4_branch = tree->GetBranch(tree->GetAlias("hlt_trigObjs_p4"));
		if (hlt_trigObjs_p4_branch) {hlt_trigObjs_p4_branch->SetAddress(&hlt_trigObjs_p4_);}
	}
	taus_pf_isocands_p4_branch = 0;
	if (tree->GetAlias("taus_pf_isocands_p4") != 0) {
		taus_pf_isocands_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_isocands_p4"));
		if (taus_pf_isocands_p4_branch) {taus_pf_isocands_p4_branch->SetAddress(&taus_pf_isocands_p4_);}
	}
	taus_pf_signalcands_p4_branch = 0;
	if (tree->GetAlias("taus_pf_signalcands_p4") != 0) {
		taus_pf_signalcands_p4_branch = tree->GetBranch(tree->GetAlias("taus_pf_signalcands_p4"));
		if (taus_pf_signalcands_p4_branch) {taus_pf_signalcands_p4_branch->SetAddress(&taus_pf_signalcands_p4_);}
	}
	pfjets_nonCHS_area_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_area") != 0) {
		pfjets_nonCHS_area_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_area"));
		if (pfjets_nonCHS_area_branch) {pfjets_nonCHS_area_branch->SetAddress(&pfjets_nonCHS_area_);}
	}
	pfjets_nonCHS_chargedEmE_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_chargedEmE") != 0) {
		pfjets_nonCHS_chargedEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_chargedEmE"));
		if (pfjets_nonCHS_chargedEmE_branch) {pfjets_nonCHS_chargedEmE_branch->SetAddress(&pfjets_nonCHS_chargedEmE_);}
	}
	pfjets_nonCHS_chargedHadronE_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_chargedHadronE") != 0) {
		pfjets_nonCHS_chargedHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_chargedHadronE"));
		if (pfjets_nonCHS_chargedHadronE_branch) {pfjets_nonCHS_chargedHadronE_branch->SetAddress(&pfjets_nonCHS_chargedHadronE_);}
	}
	pfjets_nonCHS_electronE_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_electronE") != 0) {
		pfjets_nonCHS_electronE_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_electronE"));
		if (pfjets_nonCHS_electronE_branch) {pfjets_nonCHS_electronE_branch->SetAddress(&pfjets_nonCHS_electronE_);}
	}
	pfjets_nonCHS_hfEmE_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_hfEmE") != 0) {
		pfjets_nonCHS_hfEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_hfEmE"));
		if (pfjets_nonCHS_hfEmE_branch) {pfjets_nonCHS_hfEmE_branch->SetAddress(&pfjets_nonCHS_hfEmE_);}
	}
	pfjets_nonCHS_hfHadronE_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_hfHadronE") != 0) {
		pfjets_nonCHS_hfHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_hfHadronE"));
		if (pfjets_nonCHS_hfHadronE_branch) {pfjets_nonCHS_hfHadronE_branch->SetAddress(&pfjets_nonCHS_hfHadronE_);}
	}
	pfjets_nonCHS_mass_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_mass") != 0) {
		pfjets_nonCHS_mass_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_mass"));
		if (pfjets_nonCHS_mass_branch) {pfjets_nonCHS_mass_branch->SetAddress(&pfjets_nonCHS_mass_);}
	}
	pfjets_nonCHS_muonE_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_muonE") != 0) {
		pfjets_nonCHS_muonE_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_muonE"));
		if (pfjets_nonCHS_muonE_branch) {pfjets_nonCHS_muonE_branch->SetAddress(&pfjets_nonCHS_muonE_);}
	}
	pfjets_nonCHS_neutralEmE_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_neutralEmE") != 0) {
		pfjets_nonCHS_neutralEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_neutralEmE"));
		if (pfjets_nonCHS_neutralEmE_branch) {pfjets_nonCHS_neutralEmE_branch->SetAddress(&pfjets_nonCHS_neutralEmE_);}
	}
	pfjets_nonCHS_neutralHadronE_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_neutralHadronE") != 0) {
		pfjets_nonCHS_neutralHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_neutralHadronE"));
		if (pfjets_nonCHS_neutralHadronE_branch) {pfjets_nonCHS_neutralHadronE_branch->SetAddress(&pfjets_nonCHS_neutralHadronE_);}
	}
	pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag") != 0) {
		pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag"));
		if (pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch) {pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch->SetAddress(&pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_);}
	}
	pfjets_nonCHS_photonE_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_photonE") != 0) {
		pfjets_nonCHS_photonE_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_photonE"));
		if (pfjets_nonCHS_photonE_branch) {pfjets_nonCHS_photonE_branch->SetAddress(&pfjets_nonCHS_photonE_);}
	}
	pfjets_nonCHS_pileupJetId_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_pileupJetId") != 0) {
		pfjets_nonCHS_pileupJetId_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_pileupJetId"));
		if (pfjets_nonCHS_pileupJetId_branch) {pfjets_nonCHS_pileupJetId_branch->SetAddress(&pfjets_nonCHS_pileupJetId_);}
	}
	pfjets_nonCHS_undoJEC_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_undoJEC") != 0) {
		pfjets_nonCHS_undoJEC_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_undoJEC"));
		if (pfjets_nonCHS_undoJEC_branch) {pfjets_nonCHS_undoJEC_branch->SetAddress(&pfjets_nonCHS_undoJEC_);}
	}
	evt_bs_covMatrix_branch = 0;
	if (tree->GetAlias("evt_bs_covMatrix") != 0) {
		evt_bs_covMatrix_branch = tree->GetBranch(tree->GetAlias("evt_bs_covMatrix"));
		if (evt_bs_covMatrix_branch) {evt_bs_covMatrix_branch->SetAddress(&evt_bs_covMatrix_);}
	}
	els_mc3dr_branch = 0;
	if (tree->GetAlias("els_mc3dr") != 0) {
		els_mc3dr_branch = tree->GetBranch(tree->GetAlias("els_mc3dr"));
		if (els_mc3dr_branch) {els_mc3dr_branch->SetAddress(&els_mc3dr_);}
	}
	els_mcdr_branch = 0;
	if (tree->GetAlias("els_mcdr") != 0) {
		els_mcdr_branch = tree->GetBranch(tree->GetAlias("els_mcdr"));
		if (els_mcdr_branch) {els_mcdr_branch->SetAddress(&els_mcdr_);}
	}
	mus_mc3dr_branch = 0;
	if (tree->GetAlias("mus_mc3dr") != 0) {
		mus_mc3dr_branch = tree->GetBranch(tree->GetAlias("mus_mc3dr"));
		if (mus_mc3dr_branch) {mus_mc3dr_branch->SetAddress(&mus_mc3dr_);}
	}
	mus_mcdr_branch = 0;
	if (tree->GetAlias("mus_mcdr") != 0) {
		mus_mcdr_branch = tree->GetBranch(tree->GetAlias("mus_mcdr"));
		if (mus_mcdr_branch) {mus_mcdr_branch->SetAddress(&mus_mcdr_);}
	}
	pfjets_mc3dr_branch = 0;
	if (tree->GetAlias("pfjets_mc3dr") != 0) {
		pfjets_mc3dr_branch = tree->GetBranch(tree->GetAlias("pfjets_mc3dr"));
		if (pfjets_mc3dr_branch) {pfjets_mc3dr_branch->SetAddress(&pfjets_mc3dr_);}
	}
	pfjets_mcdr_branch = 0;
	if (tree->GetAlias("pfjets_mcdr") != 0) {
		pfjets_mcdr_branch = tree->GetBranch(tree->GetAlias("pfjets_mcdr"));
		if (pfjets_mcdr_branch) {pfjets_mcdr_branch->SetAddress(&pfjets_mcdr_);}
	}
	pfjets_mc_emEnergy_branch = 0;
	if (tree->GetAlias("pfjets_mc_emEnergy") != 0) {
		pfjets_mc_emEnergy_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_emEnergy"));
		if (pfjets_mc_emEnergy_branch) {pfjets_mc_emEnergy_branch->SetAddress(&pfjets_mc_emEnergy_);}
	}
	pfjets_mc_gpdr_branch = 0;
	if (tree->GetAlias("pfjets_mc_gpdr") != 0) {
		pfjets_mc_gpdr_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_gpdr"));
		if (pfjets_mc_gpdr_branch) {pfjets_mc_gpdr_branch->SetAddress(&pfjets_mc_gpdr_);}
	}
	pfjets_mc_hadEnergy_branch = 0;
	if (tree->GetAlias("pfjets_mc_hadEnergy") != 0) {
		pfjets_mc_hadEnergy_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_hadEnergy"));
		if (pfjets_mc_hadEnergy_branch) {pfjets_mc_hadEnergy_branch->SetAddress(&pfjets_mc_hadEnergy_);}
	}
	pfjets_mc_invEnergy_branch = 0;
	if (tree->GetAlias("pfjets_mc_invEnergy") != 0) {
		pfjets_mc_invEnergy_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_invEnergy"));
		if (pfjets_mc_invEnergy_branch) {pfjets_mc_invEnergy_branch->SetAddress(&pfjets_mc_invEnergy_);}
	}
	pfjets_mc_otherEnergy_branch = 0;
	if (tree->GetAlias("pfjets_mc_otherEnergy") != 0) {
		pfjets_mc_otherEnergy_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_otherEnergy"));
		if (pfjets_mc_otherEnergy_branch) {pfjets_mc_otherEnergy_branch->SetAddress(&pfjets_mc_otherEnergy_);}
	}
	photons_mc3dr_branch = 0;
	if (tree->GetAlias("photons_mc3dr") != 0) {
		photons_mc3dr_branch = tree->GetBranch(tree->GetAlias("photons_mc3dr"));
		if (photons_mc3dr_branch) {photons_mc3dr_branch->SetAddress(&photons_mc3dr_);}
	}
	photons_mcdr_branch = 0;
	if (tree->GetAlias("photons_mcdr") != 0) {
		photons_mcdr_branch = tree->GetBranch(tree->GetAlias("photons_mcdr"));
		if (photons_mcdr_branch) {photons_mcdr_branch->SetAddress(&photons_mcdr_);}
	}
	els_bs2d_branch = 0;
	if (tree->GetAlias("els_bs2d") != 0) {
		els_bs2d_branch = tree->GetBranch(tree->GetAlias("els_bs2d"));
		if (els_bs2d_branch) {els_bs2d_branch->SetAddress(&els_bs2d_);}
	}
	els_bs2derr_branch = 0;
	if (tree->GetAlias("els_bs2derr") != 0) {
		els_bs2derr_branch = tree->GetBranch(tree->GetAlias("els_bs2derr"));
		if (els_bs2derr_branch) {els_bs2derr_branch->SetAddress(&els_bs2derr_);}
	}
	els_bs3d_branch = 0;
	if (tree->GetAlias("els_bs3d") != 0) {
		els_bs3d_branch = tree->GetBranch(tree->GetAlias("els_bs3d"));
		if (els_bs3d_branch) {els_bs3d_branch->SetAddress(&els_bs3d_);}
	}
	els_bs3derr_branch = 0;
	if (tree->GetAlias("els_bs3derr") != 0) {
		els_bs3derr_branch = tree->GetBranch(tree->GetAlias("els_bs3derr"));
		if (els_bs3derr_branch) {els_bs3derr_branch->SetAddress(&els_bs3derr_);}
	}
	els_chi2_branch = 0;
	if (tree->GetAlias("els_chi2") != 0) {
		els_chi2_branch = tree->GetBranch(tree->GetAlias("els_chi2"));
		if (els_chi2_branch) {els_chi2_branch->SetAddress(&els_chi2_);}
	}
	els_ckf_chi2_branch = 0;
	if (tree->GetAlias("els_ckf_chi2") != 0) {
		els_ckf_chi2_branch = tree->GetBranch(tree->GetAlias("els_ckf_chi2"));
		if (els_ckf_chi2_branch) {els_ckf_chi2_branch->SetAddress(&els_ckf_chi2_);}
	}
	els_ckf_ndof_branch = 0;
	if (tree->GetAlias("els_ckf_ndof") != 0) {
		els_ckf_ndof_branch = tree->GetBranch(tree->GetAlias("els_ckf_ndof"));
		if (els_ckf_ndof_branch) {els_ckf_ndof_branch->SetAddress(&els_ckf_ndof_);}
	}
	els_d0_branch = 0;
	if (tree->GetAlias("els_d0") != 0) {
		els_d0_branch = tree->GetBranch(tree->GetAlias("els_d0"));
		if (els_d0_branch) {els_d0_branch->SetAddress(&els_d0_);}
	}
	els_d0Err_branch = 0;
	if (tree->GetAlias("els_d0Err") != 0) {
		els_d0Err_branch = tree->GetBranch(tree->GetAlias("els_d0Err"));
		if (els_d0Err_branch) {els_d0Err_branch->SetAddress(&els_d0Err_);}
	}
	els_d0corr_branch = 0;
	if (tree->GetAlias("els_d0corr") != 0) {
		els_d0corr_branch = tree->GetBranch(tree->GetAlias("els_d0corr"));
		if (els_d0corr_branch) {els_d0corr_branch->SetAddress(&els_d0corr_);}
	}
	els_d0corrPhi_branch = 0;
	if (tree->GetAlias("els_d0corrPhi") != 0) {
		els_d0corrPhi_branch = tree->GetBranch(tree->GetAlias("els_d0corrPhi"));
		if (els_d0corrPhi_branch) {els_d0corrPhi_branch->SetAddress(&els_d0corrPhi_);}
	}
	els_d0phiCov_branch = 0;
	if (tree->GetAlias("els_d0phiCov") != 0) {
		els_d0phiCov_branch = tree->GetBranch(tree->GetAlias("els_d0phiCov"));
		if (els_d0phiCov_branch) {els_d0phiCov_branch->SetAddress(&els_d0phiCov_);}
	}
	els_dEtaIn_branch = 0;
	if (tree->GetAlias("els_dEtaIn") != 0) {
		els_dEtaIn_branch = tree->GetBranch(tree->GetAlias("els_dEtaIn"));
		if (els_dEtaIn_branch) {els_dEtaIn_branch->SetAddress(&els_dEtaIn_);}
	}
	els_dEtaOut_branch = 0;
	if (tree->GetAlias("els_dEtaOut") != 0) {
		els_dEtaOut_branch = tree->GetBranch(tree->GetAlias("els_dEtaOut"));
		if (els_dEtaOut_branch) {els_dEtaOut_branch->SetAddress(&els_dEtaOut_);}
	}
	els_dPhiIn_branch = 0;
	if (tree->GetAlias("els_dPhiIn") != 0) {
		els_dPhiIn_branch = tree->GetBranch(tree->GetAlias("els_dPhiIn"));
		if (els_dPhiIn_branch) {els_dPhiIn_branch->SetAddress(&els_dPhiIn_);}
	}
	els_dPhiInPhiOut_branch = 0;
	if (tree->GetAlias("els_dPhiInPhiOut") != 0) {
		els_dPhiInPhiOut_branch = tree->GetBranch(tree->GetAlias("els_dPhiInPhiOut"));
		if (els_dPhiInPhiOut_branch) {els_dPhiInPhiOut_branch->SetAddress(&els_dPhiInPhiOut_);}
	}
	els_dPhiOut_branch = 0;
	if (tree->GetAlias("els_dPhiOut") != 0) {
		els_dPhiOut_branch = tree->GetBranch(tree->GetAlias("els_dPhiOut"));
		if (els_dPhiOut_branch) {els_dPhiOut_branch->SetAddress(&els_dPhiOut_);}
	}
	els_deltaEtaEleClusterTrackAtCalo_branch = 0;
	if (tree->GetAlias("els_deltaEtaEleClusterTrackAtCalo") != 0) {
		els_deltaEtaEleClusterTrackAtCalo_branch = tree->GetBranch(tree->GetAlias("els_deltaEtaEleClusterTrackAtCalo"));
		if (els_deltaEtaEleClusterTrackAtCalo_branch) {els_deltaEtaEleClusterTrackAtCalo_branch->SetAddress(&els_deltaEtaEleClusterTrackAtCalo_);}
	}
	els_deltaPhiEleClusterTrackAtCalo_branch = 0;
	if (tree->GetAlias("els_deltaPhiEleClusterTrackAtCalo") != 0) {
		els_deltaPhiEleClusterTrackAtCalo_branch = tree->GetBranch(tree->GetAlias("els_deltaPhiEleClusterTrackAtCalo"));
		if (els_deltaPhiEleClusterTrackAtCalo_branch) {els_deltaPhiEleClusterTrackAtCalo_branch->SetAddress(&els_deltaPhiEleClusterTrackAtCalo_);}
	}
	els_dxyPV_branch = 0;
	if (tree->GetAlias("els_dxyPV") != 0) {
		els_dxyPV_branch = tree->GetBranch(tree->GetAlias("els_dxyPV"));
		if (els_dxyPV_branch) {els_dxyPV_branch->SetAddress(&els_dxyPV_);}
	}
	els_dzPV_branch = 0;
	if (tree->GetAlias("els_dzPV") != 0) {
		els_dzPV_branch = tree->GetBranch(tree->GetAlias("els_dzPV"));
		if (els_dzPV_branch) {els_dzPV_branch->SetAddress(&els_dzPV_);}
	}
	els_e1x5_branch = 0;
	if (tree->GetAlias("els_e1x5") != 0) {
		els_e1x5_branch = tree->GetBranch(tree->GetAlias("els_e1x5"));
		if (els_e1x5_branch) {els_e1x5_branch->SetAddress(&els_e1x5_);}
	}
	els_e1x5_full5x5_branch = 0;
	if (tree->GetAlias("els_e1x5_full5x5") != 0) {
		els_e1x5_full5x5_branch = tree->GetBranch(tree->GetAlias("els_e1x5_full5x5"));
		if (els_e1x5_full5x5_branch) {els_e1x5_full5x5_branch->SetAddress(&els_e1x5_full5x5_);}
	}
	els_e2x5Max_branch = 0;
	if (tree->GetAlias("els_e2x5Max") != 0) {
		els_e2x5Max_branch = tree->GetBranch(tree->GetAlias("els_e2x5Max"));
		if (els_e2x5Max_branch) {els_e2x5Max_branch->SetAddress(&els_e2x5Max_);}
	}
	els_e2x5Max_full5x5_branch = 0;
	if (tree->GetAlias("els_e2x5Max_full5x5") != 0) {
		els_e2x5Max_full5x5_branch = tree->GetBranch(tree->GetAlias("els_e2x5Max_full5x5"));
		if (els_e2x5Max_full5x5_branch) {els_e2x5Max_full5x5_branch->SetAddress(&els_e2x5Max_full5x5_);}
	}
	els_e5x5_branch = 0;
	if (tree->GetAlias("els_e5x5") != 0) {
		els_e5x5_branch = tree->GetBranch(tree->GetAlias("els_e5x5"));
		if (els_e5x5_branch) {els_e5x5_branch->SetAddress(&els_e5x5_);}
	}
	els_e5x5_full5x5_branch = 0;
	if (tree->GetAlias("els_e5x5_full5x5") != 0) {
		els_e5x5_full5x5_branch = tree->GetBranch(tree->GetAlias("els_e5x5_full5x5"));
		if (els_e5x5_full5x5_branch) {els_e5x5_full5x5_branch->SetAddress(&els_e5x5_full5x5_);}
	}
	els_eOverPIn_branch = 0;
	if (tree->GetAlias("els_eOverPIn") != 0) {
		els_eOverPIn_branch = tree->GetBranch(tree->GetAlias("els_eOverPIn"));
		if (els_eOverPIn_branch) {els_eOverPIn_branch->SetAddress(&els_eOverPIn_);}
	}
	els_eOverPOut_branch = 0;
	if (tree->GetAlias("els_eOverPOut") != 0) {
		els_eOverPOut_branch = tree->GetBranch(tree->GetAlias("els_eOverPOut"));
		if (els_eOverPOut_branch) {els_eOverPOut_branch->SetAddress(&els_eOverPOut_);}
	}
	els_eSC_branch = 0;
	if (tree->GetAlias("els_eSC") != 0) {
		els_eSC_branch = tree->GetBranch(tree->GetAlias("els_eSC"));
		if (els_eSC_branch) {els_eSC_branch->SetAddress(&els_eSC_);}
	}
	els_eSCPresh_branch = 0;
	if (tree->GetAlias("els_eSCPresh") != 0) {
		els_eSCPresh_branch = tree->GetBranch(tree->GetAlias("els_eSCPresh"));
		if (els_eSCPresh_branch) {els_eSCPresh_branch->SetAddress(&els_eSCPresh_);}
	}
	els_eSCRaw_branch = 0;
	if (tree->GetAlias("els_eSCRaw") != 0) {
		els_eSCRaw_branch = tree->GetBranch(tree->GetAlias("els_eSCRaw"));
		if (els_eSCRaw_branch) {els_eSCRaw_branch->SetAddress(&els_eSCRaw_);}
	}
	els_eSeed_branch = 0;
	if (tree->GetAlias("els_eSeed") != 0) {
		els_eSeed_branch = tree->GetBranch(tree->GetAlias("els_eSeed"));
		if (els_eSeed_branch) {els_eSeed_branch->SetAddress(&els_eSeed_);}
	}
	els_eSeedOverPIn_branch = 0;
	if (tree->GetAlias("els_eSeedOverPIn") != 0) {
		els_eSeedOverPIn_branch = tree->GetBranch(tree->GetAlias("els_eSeedOverPIn"));
		if (els_eSeedOverPIn_branch) {els_eSeedOverPIn_branch->SetAddress(&els_eSeedOverPIn_);}
	}
	els_eSeedOverPOut_branch = 0;
	if (tree->GetAlias("els_eSeedOverPOut") != 0) {
		els_eSeedOverPOut_branch = tree->GetBranch(tree->GetAlias("els_eSeedOverPOut"));
		if (els_eSeedOverPOut_branch) {els_eSeedOverPOut_branch->SetAddress(&els_eSeedOverPOut_);}
	}
	els_ecalEnergy_branch = 0;
	if (tree->GetAlias("els_ecalEnergy") != 0) {
		els_ecalEnergy_branch = tree->GetBranch(tree->GetAlias("els_ecalEnergy"));
		if (els_ecalEnergy_branch) {els_ecalEnergy_branch->SetAddress(&els_ecalEnergy_);}
	}
	els_ecalEnergyError_branch = 0;
	if (tree->GetAlias("els_ecalEnergyError") != 0) {
		els_ecalEnergyError_branch = tree->GetBranch(tree->GetAlias("els_ecalEnergyError"));
		if (els_ecalEnergyError_branch) {els_ecalEnergyError_branch->SetAddress(&els_ecalEnergyError_);}
	}
	els_ecalIso_branch = 0;
	if (tree->GetAlias("els_ecalIso") != 0) {
		els_ecalIso_branch = tree->GetBranch(tree->GetAlias("els_ecalIso"));
		if (els_ecalIso_branch) {els_ecalIso_branch->SetAddress(&els_ecalIso_);}
	}
	els_ecalIso04_branch = 0;
	if (tree->GetAlias("els_ecalIso04") != 0) {
		els_ecalIso04_branch = tree->GetBranch(tree->GetAlias("els_ecalIso04"));
		if (els_ecalIso04_branch) {els_ecalIso04_branch->SetAddress(&els_ecalIso04_);}
	}
	els_ecalPFClusterIso_branch = 0;
	if (tree->GetAlias("els_ecalPFClusterIso") != 0) {
		els_ecalPFClusterIso_branch = tree->GetBranch(tree->GetAlias("els_ecalPFClusterIso"));
		if (els_ecalPFClusterIso_branch) {els_ecalPFClusterIso_branch->SetAddress(&els_ecalPFClusterIso_);}
	}
	els_etaErr_branch = 0;
	if (tree->GetAlias("els_etaErr") != 0) {
		els_etaErr_branch = tree->GetBranch(tree->GetAlias("els_etaErr"));
		if (els_etaErr_branch) {els_etaErr_branch->SetAddress(&els_etaErr_);}
	}
	els_etaSC_branch = 0;
	if (tree->GetAlias("els_etaSC") != 0) {
		els_etaSC_branch = tree->GetBranch(tree->GetAlias("els_etaSC"));
		if (els_etaSC_branch) {els_etaSC_branch->SetAddress(&els_etaSC_);}
	}
	els_etaSCwidth_branch = 0;
	if (tree->GetAlias("els_etaSCwidth") != 0) {
		els_etaSCwidth_branch = tree->GetBranch(tree->GetAlias("els_etaSCwidth"));
		if (els_etaSCwidth_branch) {els_etaSCwidth_branch->SetAddress(&els_etaSCwidth_);}
	}
	els_fbrem_branch = 0;
	if (tree->GetAlias("els_fbrem") != 0) {
		els_fbrem_branch = tree->GetBranch(tree->GetAlias("els_fbrem"));
		if (els_fbrem_branch) {els_fbrem_branch->SetAddress(&els_fbrem_);}
	}
	els_hOverE_branch = 0;
	if (tree->GetAlias("els_hOverE") != 0) {
		els_hOverE_branch = tree->GetBranch(tree->GetAlias("els_hOverE"));
		if (els_hOverE_branch) {els_hOverE_branch->SetAddress(&els_hOverE_);}
	}
	els_hOverEBC_branch = 0;
	if (tree->GetAlias("els_hOverEBC") != 0) {
		els_hOverEBC_branch = tree->GetBranch(tree->GetAlias("els_hOverEBC"));
		if (els_hOverEBC_branch) {els_hOverEBC_branch->SetAddress(&els_hOverEBC_);}
	}
	els_hcalDepth1OverEcal_branch = 0;
	if (tree->GetAlias("els_hcalDepth1OverEcal") != 0) {
		els_hcalDepth1OverEcal_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth1OverEcal"));
		if (els_hcalDepth1OverEcal_branch) {els_hcalDepth1OverEcal_branch->SetAddress(&els_hcalDepth1OverEcal_);}
	}
	els_hcalDepth1TowerSumEt_branch = 0;
	if (tree->GetAlias("els_hcalDepth1TowerSumEt") != 0) {
		els_hcalDepth1TowerSumEt_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth1TowerSumEt"));
		if (els_hcalDepth1TowerSumEt_branch) {els_hcalDepth1TowerSumEt_branch->SetAddress(&els_hcalDepth1TowerSumEt_);}
	}
	els_hcalDepth1TowerSumEt04_branch = 0;
	if (tree->GetAlias("els_hcalDepth1TowerSumEt04") != 0) {
		els_hcalDepth1TowerSumEt04_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth1TowerSumEt04"));
		if (els_hcalDepth1TowerSumEt04_branch) {els_hcalDepth1TowerSumEt04_branch->SetAddress(&els_hcalDepth1TowerSumEt04_);}
	}
	els_hcalDepth2OverEcal_branch = 0;
	if (tree->GetAlias("els_hcalDepth2OverEcal") != 0) {
		els_hcalDepth2OverEcal_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth2OverEcal"));
		if (els_hcalDepth2OverEcal_branch) {els_hcalDepth2OverEcal_branch->SetAddress(&els_hcalDepth2OverEcal_);}
	}
	els_hcalDepth2TowerSumEt_branch = 0;
	if (tree->GetAlias("els_hcalDepth2TowerSumEt") != 0) {
		els_hcalDepth2TowerSumEt_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth2TowerSumEt"));
		if (els_hcalDepth2TowerSumEt_branch) {els_hcalDepth2TowerSumEt_branch->SetAddress(&els_hcalDepth2TowerSumEt_);}
	}
	els_hcalDepth2TowerSumEt04_branch = 0;
	if (tree->GetAlias("els_hcalDepth2TowerSumEt04") != 0) {
		els_hcalDepth2TowerSumEt04_branch = tree->GetBranch(tree->GetAlias("els_hcalDepth2TowerSumEt04"));
		if (els_hcalDepth2TowerSumEt04_branch) {els_hcalDepth2TowerSumEt04_branch->SetAddress(&els_hcalDepth2TowerSumEt04_);}
	}
	els_hcalIso_branch = 0;
	if (tree->GetAlias("els_hcalIso") != 0) {
		els_hcalIso_branch = tree->GetBranch(tree->GetAlias("els_hcalIso"));
		if (els_hcalIso_branch) {els_hcalIso_branch->SetAddress(&els_hcalIso_);}
	}
	els_hcalIso04_branch = 0;
	if (tree->GetAlias("els_hcalIso04") != 0) {
		els_hcalIso04_branch = tree->GetBranch(tree->GetAlias("els_hcalIso04"));
		if (els_hcalIso04_branch) {els_hcalIso04_branch->SetAddress(&els_hcalIso04_);}
	}
	els_hcalPFClusterIso_branch = 0;
	if (tree->GetAlias("els_hcalPFClusterIso") != 0) {
		els_hcalPFClusterIso_branch = tree->GetBranch(tree->GetAlias("els_hcalPFClusterIso"));
		if (els_hcalPFClusterIso_branch) {els_hcalPFClusterIso_branch->SetAddress(&els_hcalPFClusterIso_);}
	}
	els_ip2d_branch = 0;
	if (tree->GetAlias("els_ip2d") != 0) {
		els_ip2d_branch = tree->GetBranch(tree->GetAlias("els_ip2d"));
		if (els_ip2d_branch) {els_ip2d_branch->SetAddress(&els_ip2d_);}
	}
	els_ip2derr_branch = 0;
	if (tree->GetAlias("els_ip2derr") != 0) {
		els_ip2derr_branch = tree->GetBranch(tree->GetAlias("els_ip2derr"));
		if (els_ip2derr_branch) {els_ip2derr_branch->SetAddress(&els_ip2derr_);}
	}
	els_ip3d_branch = 0;
	if (tree->GetAlias("els_ip3d") != 0) {
		els_ip3d_branch = tree->GetBranch(tree->GetAlias("els_ip3d"));
		if (els_ip3d_branch) {els_ip3d_branch->SetAddress(&els_ip3d_);}
	}
	els_ip3derr_branch = 0;
	if (tree->GetAlias("els_ip3derr") != 0) {
		els_ip3derr_branch = tree->GetBranch(tree->GetAlias("els_ip3derr"));
		if (els_ip3derr_branch) {els_ip3derr_branch->SetAddress(&els_ip3derr_);}
	}
	els_mass_branch = 0;
	if (tree->GetAlias("els_mass") != 0) {
		els_mass_branch = tree->GetBranch(tree->GetAlias("els_mass"));
		if (els_mass_branch) {els_mass_branch->SetAddress(&els_mass_);}
	}
	els_mc_patMatch_dr_branch = 0;
	if (tree->GetAlias("els_mc_patMatch_dr") != 0) {
		els_mc_patMatch_dr_branch = tree->GetBranch(tree->GetAlias("els_mc_patMatch_dr"));
		if (els_mc_patMatch_dr_branch) {els_mc_patMatch_dr_branch->SetAddress(&els_mc_patMatch_dr_);}
	}
	els_miniIso_ch_branch = 0;
	if (tree->GetAlias("els_miniIso_ch") != 0) {
		els_miniIso_ch_branch = tree->GetBranch(tree->GetAlias("els_miniIso_ch"));
		if (els_miniIso_ch_branch) {els_miniIso_ch_branch->SetAddress(&els_miniIso_ch_);}
	}
	els_miniIso_db_branch = 0;
	if (tree->GetAlias("els_miniIso_db") != 0) {
		els_miniIso_db_branch = tree->GetBranch(tree->GetAlias("els_miniIso_db"));
		if (els_miniIso_db_branch) {els_miniIso_db_branch->SetAddress(&els_miniIso_db_);}
	}
	els_miniIso_em_branch = 0;
	if (tree->GetAlias("els_miniIso_em") != 0) {
		els_miniIso_em_branch = tree->GetBranch(tree->GetAlias("els_miniIso_em"));
		if (els_miniIso_em_branch) {els_miniIso_em_branch->SetAddress(&els_miniIso_em_);}
	}
	els_miniIso_nh_branch = 0;
	if (tree->GetAlias("els_miniIso_nh") != 0) {
		els_miniIso_nh_branch = tree->GetBranch(tree->GetAlias("els_miniIso_nh"));
		if (els_miniIso_nh_branch) {els_miniIso_nh_branch->SetAddress(&els_miniIso_nh_);}
	}
	els_miniIso_uncor_branch = 0;
	if (tree->GetAlias("els_miniIso_uncor") != 0) {
		els_miniIso_uncor_branch = tree->GetBranch(tree->GetAlias("els_miniIso_uncor"));
		if (els_miniIso_uncor_branch) {els_miniIso_uncor_branch->SetAddress(&els_miniIso_uncor_);}
	}
	els_mva_branch = 0;
	if (tree->GetAlias("els_mva") != 0) {
		els_mva_branch = tree->GetBranch(tree->GetAlias("els_mva"));
		if (els_mva_branch) {els_mva_branch->SetAddress(&els_mva_);}
	}
	els_ndof_branch = 0;
	if (tree->GetAlias("els_ndof") != 0) {
		els_ndof_branch = tree->GetBranch(tree->GetAlias("els_ndof"));
		if (els_ndof_branch) {els_ndof_branch->SetAddress(&els_ndof_);}
	}
	els_pfChargedHadronIso_branch = 0;
	if (tree->GetAlias("els_pfChargedHadronIso") != 0) {
		els_pfChargedHadronIso_branch = tree->GetBranch(tree->GetAlias("els_pfChargedHadronIso"));
		if (els_pfChargedHadronIso_branch) {els_pfChargedHadronIso_branch->SetAddress(&els_pfChargedHadronIso_);}
	}
	els_pfNeutralHadronIso_branch = 0;
	if (tree->GetAlias("els_pfNeutralHadronIso") != 0) {
		els_pfNeutralHadronIso_branch = tree->GetBranch(tree->GetAlias("els_pfNeutralHadronIso"));
		if (els_pfNeutralHadronIso_branch) {els_pfNeutralHadronIso_branch->SetAddress(&els_pfNeutralHadronIso_);}
	}
	els_pfPUIso_branch = 0;
	if (tree->GetAlias("els_pfPUIso") != 0) {
		els_pfPUIso_branch = tree->GetBranch(tree->GetAlias("els_pfPUIso"));
		if (els_pfPUIso_branch) {els_pfPUIso_branch->SetAddress(&els_pfPUIso_);}
	}
	els_pfPhotonIso_branch = 0;
	if (tree->GetAlias("els_pfPhotonIso") != 0) {
		els_pfPhotonIso_branch = tree->GetBranch(tree->GetAlias("els_pfPhotonIso"));
		if (els_pfPhotonIso_branch) {els_pfPhotonIso_branch->SetAddress(&els_pfPhotonIso_);}
	}
	els_phiErr_branch = 0;
	if (tree->GetAlias("els_phiErr") != 0) {
		els_phiErr_branch = tree->GetBranch(tree->GetAlias("els_phiErr"));
		if (els_phiErr_branch) {els_phiErr_branch->SetAddress(&els_phiErr_);}
	}
	els_phiSC_branch = 0;
	if (tree->GetAlias("els_phiSC") != 0) {
		els_phiSC_branch = tree->GetBranch(tree->GetAlias("els_phiSC"));
		if (els_phiSC_branch) {els_phiSC_branch->SetAddress(&els_phiSC_);}
	}
	els_phiSCwidth_branch = 0;
	if (tree->GetAlias("els_phiSCwidth") != 0) {
		els_phiSCwidth_branch = tree->GetBranch(tree->GetAlias("els_phiSCwidth"));
		if (els_phiSCwidth_branch) {els_phiSCwidth_branch->SetAddress(&els_phiSCwidth_);}
	}
	els_ptErr_branch = 0;
	if (tree->GetAlias("els_ptErr") != 0) {
		els_ptErr_branch = tree->GetBranch(tree->GetAlias("els_ptErr"));
		if (els_ptErr_branch) {els_ptErr_branch->SetAddress(&els_ptErr_);}
	}
	els_ptErrGsf_branch = 0;
	if (tree->GetAlias("els_ptErrGsf") != 0) {
		els_ptErrGsf_branch = tree->GetBranch(tree->GetAlias("els_ptErrGsf"));
		if (els_ptErrGsf_branch) {els_ptErrGsf_branch->SetAddress(&els_ptErrGsf_);}
	}
	els_r9_branch = 0;
	if (tree->GetAlias("els_r9") != 0) {
		els_r9_branch = tree->GetBranch(tree->GetAlias("els_r9"));
		if (els_r9_branch) {els_r9_branch->SetAddress(&els_r9_);}
	}
	els_r9_full5x5_branch = 0;
	if (tree->GetAlias("els_r9_full5x5") != 0) {
		els_r9_full5x5_branch = tree->GetBranch(tree->GetAlias("els_r9_full5x5"));
		if (els_r9_full5x5_branch) {els_r9_full5x5_branch->SetAddress(&els_r9_full5x5_);}
	}
	els_sigmaEtaEta_branch = 0;
	if (tree->GetAlias("els_sigmaEtaEta") != 0) {
		els_sigmaEtaEta_branch = tree->GetBranch(tree->GetAlias("els_sigmaEtaEta"));
		if (els_sigmaEtaEta_branch) {els_sigmaEtaEta_branch->SetAddress(&els_sigmaEtaEta_);}
	}
	els_sigmaEtaEta_full5x5_branch = 0;
	if (tree->GetAlias("els_sigmaEtaEta_full5x5") != 0) {
		els_sigmaEtaEta_full5x5_branch = tree->GetBranch(tree->GetAlias("els_sigmaEtaEta_full5x5"));
		if (els_sigmaEtaEta_full5x5_branch) {els_sigmaEtaEta_full5x5_branch->SetAddress(&els_sigmaEtaEta_full5x5_);}
	}
	els_sigmaIEtaIEta_branch = 0;
	if (tree->GetAlias("els_sigmaIEtaIEta") != 0) {
		els_sigmaIEtaIEta_branch = tree->GetBranch(tree->GetAlias("els_sigmaIEtaIEta"));
		if (els_sigmaIEtaIEta_branch) {els_sigmaIEtaIEta_branch->SetAddress(&els_sigmaIEtaIEta_);}
	}
	els_sigmaIEtaIEta_full5x5_branch = 0;
	if (tree->GetAlias("els_sigmaIEtaIEta_full5x5") != 0) {
		els_sigmaIEtaIEta_full5x5_branch = tree->GetBranch(tree->GetAlias("els_sigmaIEtaIEta_full5x5"));
		if (els_sigmaIEtaIEta_full5x5_branch) {els_sigmaIEtaIEta_full5x5_branch->SetAddress(&els_sigmaIEtaIEta_full5x5_);}
	}
	els_sigmaIPhiIPhi_branch = 0;
	if (tree->GetAlias("els_sigmaIPhiIPhi") != 0) {
		els_sigmaIPhiIPhi_branch = tree->GetBranch(tree->GetAlias("els_sigmaIPhiIPhi"));
		if (els_sigmaIPhiIPhi_branch) {els_sigmaIPhiIPhi_branch->SetAddress(&els_sigmaIPhiIPhi_);}
	}
	els_sigmaIPhiIPhi_full5x5_branch = 0;
	if (tree->GetAlias("els_sigmaIPhiIPhi_full5x5") != 0) {
		els_sigmaIPhiIPhi_full5x5_branch = tree->GetBranch(tree->GetAlias("els_sigmaIPhiIPhi_full5x5"));
		if (els_sigmaIPhiIPhi_full5x5_branch) {els_sigmaIPhiIPhi_full5x5_branch->SetAddress(&els_sigmaIPhiIPhi_full5x5_);}
	}
	els_sigmaIphiIphi_branch = 0;
	if (tree->GetAlias("els_sigmaIphiIphi") != 0) {
		els_sigmaIphiIphi_branch = tree->GetBranch(tree->GetAlias("els_sigmaIphiIphi"));
		if (els_sigmaIphiIphi_branch) {els_sigmaIphiIphi_branch->SetAddress(&els_sigmaIphiIphi_);}
	}
	els_tkIso_branch = 0;
	if (tree->GetAlias("els_tkIso") != 0) {
		els_tkIso_branch = tree->GetBranch(tree->GetAlias("els_tkIso"));
		if (els_tkIso_branch) {els_tkIso_branch->SetAddress(&els_tkIso_);}
	}
	els_tkIso04_branch = 0;
	if (tree->GetAlias("els_tkIso04") != 0) {
		els_tkIso04_branch = tree->GetBranch(tree->GetAlias("els_tkIso04"));
		if (els_tkIso04_branch) {els_tkIso04_branch->SetAddress(&els_tkIso04_);}
	}
	els_trackMomentumError_branch = 0;
	if (tree->GetAlias("els_trackMomentumError") != 0) {
		els_trackMomentumError_branch = tree->GetBranch(tree->GetAlias("els_trackMomentumError"));
		if (els_trackMomentumError_branch) {els_trackMomentumError_branch->SetAddress(&els_trackMomentumError_);}
	}
	els_trkdr_branch = 0;
	if (tree->GetAlias("els_trkdr") != 0) {
		els_trkdr_branch = tree->GetBranch(tree->GetAlias("els_trkdr"));
		if (els_trkdr_branch) {els_trkdr_branch->SetAddress(&els_trkdr_);}
	}
	els_trkshFrac_branch = 0;
	if (tree->GetAlias("els_trkshFrac") != 0) {
		els_trkshFrac_branch = tree->GetBranch(tree->GetAlias("els_trkshFrac"));
		if (els_trkshFrac_branch) {els_trkshFrac_branch->SetAddress(&els_trkshFrac_);}
	}
	els_z0_branch = 0;
	if (tree->GetAlias("els_z0") != 0) {
		els_z0_branch = tree->GetBranch(tree->GetAlias("els_z0"));
		if (els_z0_branch) {els_z0_branch->SetAddress(&els_z0_);}
	}
	els_z0Err_branch = 0;
	if (tree->GetAlias("els_z0Err") != 0) {
		els_z0Err_branch = tree->GetBranch(tree->GetAlias("els_z0Err"));
		if (els_z0Err_branch) {els_z0Err_branch->SetAddress(&els_z0Err_);}
	}
	els_z0corr_branch = 0;
	if (tree->GetAlias("els_z0corr") != 0) {
		els_z0corr_branch = tree->GetBranch(tree->GetAlias("els_z0corr"));
		if (els_z0corr_branch) {els_z0corr_branch->SetAddress(&els_z0corr_);}
	}
	genps_charge_branch = 0;
	if (tree->GetAlias("genps_charge") != 0) {
		genps_charge_branch = tree->GetBranch(tree->GetAlias("genps_charge"));
		if (genps_charge_branch) {genps_charge_branch->SetAddress(&genps_charge_);}
	}
	genps_iso_branch = 0;
	if (tree->GetAlias("genps_iso") != 0) {
		genps_iso_branch = tree->GetBranch(tree->GetAlias("genps_iso"));
		if (genps_iso_branch) {genps_iso_branch->SetAddress(&genps_iso_);}
	}
	genps_mass_branch = 0;
	if (tree->GetAlias("genps_mass") != 0) {
		genps_mass_branch = tree->GetBranch(tree->GetAlias("genps_mass"));
		if (genps_mass_branch) {genps_mass_branch->SetAddress(&genps_mass_);}
	}
	genweights_branch = 0;
	if (tree->GetAlias("genweights") != 0) {
		genweights_branch = tree->GetBranch(tree->GetAlias("genweights"));
		if (genweights_branch) {genweights_branch->SetAddress(&genweights_);}
	}
	isotracks_dz_branch = 0;
	if (tree->GetAlias("isotracks_dz") != 0) {
		isotracks_dz_branch = tree->GetBranch(tree->GetAlias("isotracks_dz"));
		if (isotracks_dz_branch) {isotracks_dz_branch->SetAddress(&isotracks_dz_);}
	}
	isotracks_mass_branch = 0;
	if (tree->GetAlias("isotracks_mass") != 0) {
		isotracks_mass_branch = tree->GetBranch(tree->GetAlias("isotracks_mass"));
		if (isotracks_mass_branch) {isotracks_mass_branch->SetAddress(&isotracks_mass_);}
	}
	isotracks_relIso_branch = 0;
	if (tree->GetAlias("isotracks_relIso") != 0) {
		isotracks_relIso_branch = tree->GetBranch(tree->GetAlias("isotracks_relIso"));
		if (isotracks_relIso_branch) {isotracks_relIso_branch->SetAddress(&isotracks_relIso_);}
	}
	mus_bs2d_branch = 0;
	if (tree->GetAlias("mus_bs2d") != 0) {
		mus_bs2d_branch = tree->GetBranch(tree->GetAlias("mus_bs2d"));
		if (mus_bs2d_branch) {mus_bs2d_branch->SetAddress(&mus_bs2d_);}
	}
	mus_bs2derr_branch = 0;
	if (tree->GetAlias("mus_bs2derr") != 0) {
		mus_bs2derr_branch = tree->GetBranch(tree->GetAlias("mus_bs2derr"));
		if (mus_bs2derr_branch) {mus_bs2derr_branch->SetAddress(&mus_bs2derr_);}
	}
	mus_bs3d_branch = 0;
	if (tree->GetAlias("mus_bs3d") != 0) {
		mus_bs3d_branch = tree->GetBranch(tree->GetAlias("mus_bs3d"));
		if (mus_bs3d_branch) {mus_bs3d_branch->SetAddress(&mus_bs3d_);}
	}
	mus_bs3derr_branch = 0;
	if (tree->GetAlias("mus_bs3derr") != 0) {
		mus_bs3derr_branch = tree->GetBranch(tree->GetAlias("mus_bs3derr"));
		if (mus_bs3derr_branch) {mus_bs3derr_branch->SetAddress(&mus_bs3derr_);}
	}
	mus_caloCompatibility_branch = 0;
	if (tree->GetAlias("mus_caloCompatibility") != 0) {
		mus_caloCompatibility_branch = tree->GetBranch(tree->GetAlias("mus_caloCompatibility"));
		if (mus_caloCompatibility_branch) {mus_caloCompatibility_branch->SetAddress(&mus_caloCompatibility_);}
	}
	mus_chi2_branch = 0;
	if (tree->GetAlias("mus_chi2") != 0) {
		mus_chi2_branch = tree->GetBranch(tree->GetAlias("mus_chi2"));
		if (mus_chi2_branch) {mus_chi2_branch->SetAddress(&mus_chi2_);}
	}
	mus_chi2LocalMomentum_branch = 0;
	if (tree->GetAlias("mus_chi2LocalMomentum") != 0) {
		mus_chi2LocalMomentum_branch = tree->GetBranch(tree->GetAlias("mus_chi2LocalMomentum"));
		if (mus_chi2LocalMomentum_branch) {mus_chi2LocalMomentum_branch->SetAddress(&mus_chi2LocalMomentum_);}
	}
	mus_chi2LocalPosition_branch = 0;
	if (tree->GetAlias("mus_chi2LocalPosition") != 0) {
		mus_chi2LocalPosition_branch = tree->GetBranch(tree->GetAlias("mus_chi2LocalPosition"));
		if (mus_chi2LocalPosition_branch) {mus_chi2LocalPosition_branch->SetAddress(&mus_chi2LocalPosition_);}
	}
	mus_d0_branch = 0;
	if (tree->GetAlias("mus_d0") != 0) {
		mus_d0_branch = tree->GetBranch(tree->GetAlias("mus_d0"));
		if (mus_d0_branch) {mus_d0_branch->SetAddress(&mus_d0_);}
	}
	mus_d0Err_branch = 0;
	if (tree->GetAlias("mus_d0Err") != 0) {
		mus_d0Err_branch = tree->GetBranch(tree->GetAlias("mus_d0Err"));
		if (mus_d0Err_branch) {mus_d0Err_branch->SetAddress(&mus_d0Err_);}
	}
	mus_d0corr_branch = 0;
	if (tree->GetAlias("mus_d0corr") != 0) {
		mus_d0corr_branch = tree->GetBranch(tree->GetAlias("mus_d0corr"));
		if (mus_d0corr_branch) {mus_d0corr_branch->SetAddress(&mus_d0corr_);}
	}
	mus_d0corrPhi_branch = 0;
	if (tree->GetAlias("mus_d0corrPhi") != 0) {
		mus_d0corrPhi_branch = tree->GetBranch(tree->GetAlias("mus_d0corrPhi"));
		if (mus_d0corrPhi_branch) {mus_d0corrPhi_branch->SetAddress(&mus_d0corrPhi_);}
	}
	mus_d0phiCov_branch = 0;
	if (tree->GetAlias("mus_d0phiCov") != 0) {
		mus_d0phiCov_branch = tree->GetBranch(tree->GetAlias("mus_d0phiCov"));
		if (mus_d0phiCov_branch) {mus_d0phiCov_branch->SetAddress(&mus_d0phiCov_);}
	}
	mus_dxyPV_branch = 0;
	if (tree->GetAlias("mus_dxyPV") != 0) {
		mus_dxyPV_branch = tree->GetBranch(tree->GetAlias("mus_dxyPV"));
		if (mus_dxyPV_branch) {mus_dxyPV_branch->SetAddress(&mus_dxyPV_);}
	}
	mus_dzPV_branch = 0;
	if (tree->GetAlias("mus_dzPV") != 0) {
		mus_dzPV_branch = tree->GetBranch(tree->GetAlias("mus_dzPV"));
		if (mus_dzPV_branch) {mus_dzPV_branch->SetAddress(&mus_dzPV_);}
	}
	mus_ecal_time_branch = 0;
	if (tree->GetAlias("mus_ecal_time") != 0) {
		mus_ecal_time_branch = tree->GetBranch(tree->GetAlias("mus_ecal_time"));
		if (mus_ecal_time_branch) {mus_ecal_time_branch->SetAddress(&mus_ecal_time_);}
	}
	mus_e_em_branch = 0;
	if (tree->GetAlias("mus_e_em") != 0) {
		mus_e_em_branch = tree->GetBranch(tree->GetAlias("mus_e_em"));
		if (mus_e_em_branch) {mus_e_em_branch->SetAddress(&mus_e_em_);}
	}
	mus_e_emS9_branch = 0;
	if (tree->GetAlias("mus_e_emS9") != 0) {
		mus_e_emS9_branch = tree->GetBranch(tree->GetAlias("mus_e_emS9"));
		if (mus_e_emS9_branch) {mus_e_emS9_branch->SetAddress(&mus_e_emS9_);}
	}
	mus_e_had_branch = 0;
	if (tree->GetAlias("mus_e_had") != 0) {
		mus_e_had_branch = tree->GetBranch(tree->GetAlias("mus_e_had"));
		if (mus_e_had_branch) {mus_e_had_branch->SetAddress(&mus_e_had_);}
	}
	mus_e_hadS9_branch = 0;
	if (tree->GetAlias("mus_e_hadS9") != 0) {
		mus_e_hadS9_branch = tree->GetBranch(tree->GetAlias("mus_e_hadS9"));
		if (mus_e_hadS9_branch) {mus_e_hadS9_branch->SetAddress(&mus_e_hadS9_);}
	}
	mus_e_ho_branch = 0;
	if (tree->GetAlias("mus_e_ho") != 0) {
		mus_e_ho_branch = tree->GetBranch(tree->GetAlias("mus_e_ho"));
		if (mus_e_ho_branch) {mus_e_ho_branch->SetAddress(&mus_e_ho_);}
	}
	mus_e_hoS9_branch = 0;
	if (tree->GetAlias("mus_e_hoS9") != 0) {
		mus_e_hoS9_branch = tree->GetBranch(tree->GetAlias("mus_e_hoS9"));
		if (mus_e_hoS9_branch) {mus_e_hoS9_branch->SetAddress(&mus_e_hoS9_);}
	}
	mus_emMax_branch = 0;
	if (tree->GetAlias("mus_emMax") != 0) {
		mus_emMax_branch = tree->GetBranch(tree->GetAlias("mus_emMax"));
		if (mus_emMax_branch) {mus_emMax_branch->SetAddress(&mus_emMax_);}
	}
	mus_emS25_branch = 0;
	if (tree->GetAlias("mus_emS25") != 0) {
		mus_emS25_branch = tree->GetBranch(tree->GetAlias("mus_emS25"));
		if (mus_emS25_branch) {mus_emS25_branch->SetAddress(&mus_emS25_);}
	}
	mus_etaErr_branch = 0;
	if (tree->GetAlias("mus_etaErr") != 0) {
		mus_etaErr_branch = tree->GetBranch(tree->GetAlias("mus_etaErr"));
		if (mus_etaErr_branch) {mus_etaErr_branch->SetAddress(&mus_etaErr_);}
	}
	mus_gfit_chi2_branch = 0;
	if (tree->GetAlias("mus_gfit_chi2") != 0) {
		mus_gfit_chi2_branch = tree->GetBranch(tree->GetAlias("mus_gfit_chi2"));
		if (mus_gfit_chi2_branch) {mus_gfit_chi2_branch->SetAddress(&mus_gfit_chi2_);}
	}
	mus_gfit_d0_branch = 0;
	if (tree->GetAlias("mus_gfit_d0") != 0) {
		mus_gfit_d0_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0"));
		if (mus_gfit_d0_branch) {mus_gfit_d0_branch->SetAddress(&mus_gfit_d0_);}
	}
	mus_gfit_d0Err_branch = 0;
	if (tree->GetAlias("mus_gfit_d0Err") != 0) {
		mus_gfit_d0Err_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0Err"));
		if (mus_gfit_d0Err_branch) {mus_gfit_d0Err_branch->SetAddress(&mus_gfit_d0Err_);}
	}
	mus_gfit_d0corr_branch = 0;
	if (tree->GetAlias("mus_gfit_d0corr") != 0) {
		mus_gfit_d0corr_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0corr"));
		if (mus_gfit_d0corr_branch) {mus_gfit_d0corr_branch->SetAddress(&mus_gfit_d0corr_);}
	}
	mus_gfit_d0corrPhi_branch = 0;
	if (tree->GetAlias("mus_gfit_d0corrPhi") != 0) {
		mus_gfit_d0corrPhi_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0corrPhi"));
		if (mus_gfit_d0corrPhi_branch) {mus_gfit_d0corrPhi_branch->SetAddress(&mus_gfit_d0corrPhi_);}
	}
	mus_gfit_d0phiCov_branch = 0;
	if (tree->GetAlias("mus_gfit_d0phiCov") != 0) {
		mus_gfit_d0phiCov_branch = tree->GetBranch(tree->GetAlias("mus_gfit_d0phiCov"));
		if (mus_gfit_d0phiCov_branch) {mus_gfit_d0phiCov_branch->SetAddress(&mus_gfit_d0phiCov_);}
	}
	mus_gfit_ndof_branch = 0;
	if (tree->GetAlias("mus_gfit_ndof") != 0) {
		mus_gfit_ndof_branch = tree->GetBranch(tree->GetAlias("mus_gfit_ndof"));
		if (mus_gfit_ndof_branch) {mus_gfit_ndof_branch->SetAddress(&mus_gfit_ndof_);}
	}
	mus_gfit_qoverp_branch = 0;
	if (tree->GetAlias("mus_gfit_qoverp") != 0) {
		mus_gfit_qoverp_branch = tree->GetBranch(tree->GetAlias("mus_gfit_qoverp"));
		if (mus_gfit_qoverp_branch) {mus_gfit_qoverp_branch->SetAddress(&mus_gfit_qoverp_);}
	}
	mus_gfit_qoverpError_branch = 0;
	if (tree->GetAlias("mus_gfit_qoverpError") != 0) {
		mus_gfit_qoverpError_branch = tree->GetBranch(tree->GetAlias("mus_gfit_qoverpError"));
		if (mus_gfit_qoverpError_branch) {mus_gfit_qoverpError_branch->SetAddress(&mus_gfit_qoverpError_);}
	}
	mus_gfit_z0_branch = 0;
	if (tree->GetAlias("mus_gfit_z0") != 0) {
		mus_gfit_z0_branch = tree->GetBranch(tree->GetAlias("mus_gfit_z0"));
		if (mus_gfit_z0_branch) {mus_gfit_z0_branch->SetAddress(&mus_gfit_z0_);}
	}
	mus_gfit_z0Err_branch = 0;
	if (tree->GetAlias("mus_gfit_z0Err") != 0) {
		mus_gfit_z0Err_branch = tree->GetBranch(tree->GetAlias("mus_gfit_z0Err"));
		if (mus_gfit_z0Err_branch) {mus_gfit_z0Err_branch->SetAddress(&mus_gfit_z0Err_);}
	}
	mus_gfit_z0corr_branch = 0;
	if (tree->GetAlias("mus_gfit_z0corr") != 0) {
		mus_gfit_z0corr_branch = tree->GetBranch(tree->GetAlias("mus_gfit_z0corr"));
		if (mus_gfit_z0corr_branch) {mus_gfit_z0corr_branch->SetAddress(&mus_gfit_z0corr_);}
	}
	mus_glbKink_branch = 0;
	if (tree->GetAlias("mus_glbKink") != 0) {
		mus_glbKink_branch = tree->GetBranch(tree->GetAlias("mus_glbKink"));
		if (mus_glbKink_branch) {mus_glbKink_branch->SetAddress(&mus_glbKink_);}
	}
	mus_glbTrackProbability_branch = 0;
	if (tree->GetAlias("mus_glbTrackProbability") != 0) {
		mus_glbTrackProbability_branch = tree->GetBranch(tree->GetAlias("mus_glbTrackProbability"));
		if (mus_glbTrackProbability_branch) {mus_glbTrackProbability_branch->SetAddress(&mus_glbTrackProbability_);}
	}
	mus_globalDeltaEtaPhi_branch = 0;
	if (tree->GetAlias("mus_globalDeltaEtaPhi") != 0) {
		mus_globalDeltaEtaPhi_branch = tree->GetBranch(tree->GetAlias("mus_globalDeltaEtaPhi"));
		if (mus_globalDeltaEtaPhi_branch) {mus_globalDeltaEtaPhi_branch->SetAddress(&mus_globalDeltaEtaPhi_);}
	}
	mus_hadMax_branch = 0;
	if (tree->GetAlias("mus_hadMax") != 0) {
		mus_hadMax_branch = tree->GetBranch(tree->GetAlias("mus_hadMax"));
		if (mus_hadMax_branch) {mus_hadMax_branch->SetAddress(&mus_hadMax_);}
	}
	mus_hcal_time_branch = 0;
	if (tree->GetAlias("mus_hcal_time") != 0) {
		mus_hcal_time_branch = tree->GetBranch(tree->GetAlias("mus_hcal_time"));
		if (mus_hcal_time_branch) {mus_hcal_time_branch->SetAddress(&mus_hcal_time_);}
	}
	mus_ip2d_branch = 0;
	if (tree->GetAlias("mus_ip2d") != 0) {
		mus_ip2d_branch = tree->GetBranch(tree->GetAlias("mus_ip2d"));
		if (mus_ip2d_branch) {mus_ip2d_branch->SetAddress(&mus_ip2d_);}
	}
	mus_ip2derr_branch = 0;
	if (tree->GetAlias("mus_ip2derr") != 0) {
		mus_ip2derr_branch = tree->GetBranch(tree->GetAlias("mus_ip2derr"));
		if (mus_ip2derr_branch) {mus_ip2derr_branch->SetAddress(&mus_ip2derr_);}
	}
	mus_ip3d_branch = 0;
	if (tree->GetAlias("mus_ip3d") != 0) {
		mus_ip3d_branch = tree->GetBranch(tree->GetAlias("mus_ip3d"));
		if (mus_ip3d_branch) {mus_ip3d_branch->SetAddress(&mus_ip3d_);}
	}
	mus_ip3derr_branch = 0;
	if (tree->GetAlias("mus_ip3derr") != 0) {
		mus_ip3derr_branch = tree->GetBranch(tree->GetAlias("mus_ip3derr"));
		if (mus_ip3derr_branch) {mus_ip3derr_branch->SetAddress(&mus_ip3derr_);}
	}
	mus_iso03_emEt_branch = 0;
	if (tree->GetAlias("mus_iso03_emEt") != 0) {
		mus_iso03_emEt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_emEt"));
		if (mus_iso03_emEt_branch) {mus_iso03_emEt_branch->SetAddress(&mus_iso03_emEt_);}
	}
	mus_iso03_hadEt_branch = 0;
	if (tree->GetAlias("mus_iso03_hadEt") != 0) {
		mus_iso03_hadEt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_hadEt"));
		if (mus_iso03_hadEt_branch) {mus_iso03_hadEt_branch->SetAddress(&mus_iso03_hadEt_);}
	}
	mus_iso03_hoEt_branch = 0;
	if (tree->GetAlias("mus_iso03_hoEt") != 0) {
		mus_iso03_hoEt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_hoEt"));
		if (mus_iso03_hoEt_branch) {mus_iso03_hoEt_branch->SetAddress(&mus_iso03_hoEt_);}
	}
	mus_iso03_sumPt_branch = 0;
	if (tree->GetAlias("mus_iso03_sumPt") != 0) {
		mus_iso03_sumPt_branch = tree->GetBranch(tree->GetAlias("mus_iso03_sumPt"));
		if (mus_iso03_sumPt_branch) {mus_iso03_sumPt_branch->SetAddress(&mus_iso03_sumPt_);}
	}
	mus_iso05_emEt_branch = 0;
	if (tree->GetAlias("mus_iso05_emEt") != 0) {
		mus_iso05_emEt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_emEt"));
		if (mus_iso05_emEt_branch) {mus_iso05_emEt_branch->SetAddress(&mus_iso05_emEt_);}
	}
	mus_iso05_hadEt_branch = 0;
	if (tree->GetAlias("mus_iso05_hadEt") != 0) {
		mus_iso05_hadEt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_hadEt"));
		if (mus_iso05_hadEt_branch) {mus_iso05_hadEt_branch->SetAddress(&mus_iso05_hadEt_);}
	}
	mus_iso05_hoEt_branch = 0;
	if (tree->GetAlias("mus_iso05_hoEt") != 0) {
		mus_iso05_hoEt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_hoEt"));
		if (mus_iso05_hoEt_branch) {mus_iso05_hoEt_branch->SetAddress(&mus_iso05_hoEt_);}
	}
	mus_iso05_sumPt_branch = 0;
	if (tree->GetAlias("mus_iso05_sumPt") != 0) {
		mus_iso05_sumPt_branch = tree->GetBranch(tree->GetAlias("mus_iso05_sumPt"));
		if (mus_iso05_sumPt_branch) {mus_iso05_sumPt_branch->SetAddress(&mus_iso05_sumPt_);}
	}
	mus_isoMeanDRR03_pf_ChargedHadronPt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR03_pf_ChargedHadronPt") != 0) {
		mus_isoMeanDRR03_pf_ChargedHadronPt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR03_pf_ChargedHadronPt"));
		if (mus_isoMeanDRR03_pf_ChargedHadronPt_branch) {mus_isoMeanDRR03_pf_ChargedHadronPt_branch->SetAddress(&mus_isoMeanDRR03_pf_ChargedHadronPt_);}
	}
	mus_isoMeanDRR03_pf_ChargedParticlePt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR03_pf_ChargedParticlePt") != 0) {
		mus_isoMeanDRR03_pf_ChargedParticlePt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR03_pf_ChargedParticlePt"));
		if (mus_isoMeanDRR03_pf_ChargedParticlePt_branch) {mus_isoMeanDRR03_pf_ChargedParticlePt_branch->SetAddress(&mus_isoMeanDRR03_pf_ChargedParticlePt_);}
	}
	mus_isoMeanDRR03_pf_NeutralHadronEt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR03_pf_NeutralHadronEt") != 0) {
		mus_isoMeanDRR03_pf_NeutralHadronEt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR03_pf_NeutralHadronEt"));
		if (mus_isoMeanDRR03_pf_NeutralHadronEt_branch) {mus_isoMeanDRR03_pf_NeutralHadronEt_branch->SetAddress(&mus_isoMeanDRR03_pf_NeutralHadronEt_);}
	}
	mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold") != 0) {
		mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold"));
		if (mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_branch) {mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_branch->SetAddress(&mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_);}
	}
	mus_isoMeanDRR03_pf_PUPt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR03_pf_PUPt") != 0) {
		mus_isoMeanDRR03_pf_PUPt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR03_pf_PUPt"));
		if (mus_isoMeanDRR03_pf_PUPt_branch) {mus_isoMeanDRR03_pf_PUPt_branch->SetAddress(&mus_isoMeanDRR03_pf_PUPt_);}
	}
	mus_isoMeanDRR03_pf_PhotonEt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR03_pf_PhotonEt") != 0) {
		mus_isoMeanDRR03_pf_PhotonEt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR03_pf_PhotonEt"));
		if (mus_isoMeanDRR03_pf_PhotonEt_branch) {mus_isoMeanDRR03_pf_PhotonEt_branch->SetAddress(&mus_isoMeanDRR03_pf_PhotonEt_);}
	}
	mus_isoMeanDRR03_pf_PhotonEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR03_pf_PhotonEtHighThreshold") != 0) {
		mus_isoMeanDRR03_pf_PhotonEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR03_pf_PhotonEtHighThreshold"));
		if (mus_isoMeanDRR03_pf_PhotonEtHighThreshold_branch) {mus_isoMeanDRR03_pf_PhotonEtHighThreshold_branch->SetAddress(&mus_isoMeanDRR03_pf_PhotonEtHighThreshold_);}
	}
	mus_isoMeanDRR04_pf_ChargedHadronPt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR04_pf_ChargedHadronPt") != 0) {
		mus_isoMeanDRR04_pf_ChargedHadronPt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR04_pf_ChargedHadronPt"));
		if (mus_isoMeanDRR04_pf_ChargedHadronPt_branch) {mus_isoMeanDRR04_pf_ChargedHadronPt_branch->SetAddress(&mus_isoMeanDRR04_pf_ChargedHadronPt_);}
	}
	mus_isoMeanDRR04_pf_ChargedParticlePt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR04_pf_ChargedParticlePt") != 0) {
		mus_isoMeanDRR04_pf_ChargedParticlePt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR04_pf_ChargedParticlePt"));
		if (mus_isoMeanDRR04_pf_ChargedParticlePt_branch) {mus_isoMeanDRR04_pf_ChargedParticlePt_branch->SetAddress(&mus_isoMeanDRR04_pf_ChargedParticlePt_);}
	}
	mus_isoMeanDRR04_pf_NeutralHadronEt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR04_pf_NeutralHadronEt") != 0) {
		mus_isoMeanDRR04_pf_NeutralHadronEt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR04_pf_NeutralHadronEt"));
		if (mus_isoMeanDRR04_pf_NeutralHadronEt_branch) {mus_isoMeanDRR04_pf_NeutralHadronEt_branch->SetAddress(&mus_isoMeanDRR04_pf_NeutralHadronEt_);}
	}
	mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold") != 0) {
		mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold"));
		if (mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_branch) {mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_branch->SetAddress(&mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_);}
	}
	mus_isoMeanDRR04_pf_PUPt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR04_pf_PUPt") != 0) {
		mus_isoMeanDRR04_pf_PUPt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR04_pf_PUPt"));
		if (mus_isoMeanDRR04_pf_PUPt_branch) {mus_isoMeanDRR04_pf_PUPt_branch->SetAddress(&mus_isoMeanDRR04_pf_PUPt_);}
	}
	mus_isoMeanDRR04_pf_PhotonEt_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR04_pf_PhotonEt") != 0) {
		mus_isoMeanDRR04_pf_PhotonEt_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR04_pf_PhotonEt"));
		if (mus_isoMeanDRR04_pf_PhotonEt_branch) {mus_isoMeanDRR04_pf_PhotonEt_branch->SetAddress(&mus_isoMeanDRR04_pf_PhotonEt_);}
	}
	mus_isoMeanDRR04_pf_PhotonEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoMeanDRR04_pf_PhotonEtHighThreshold") != 0) {
		mus_isoMeanDRR04_pf_PhotonEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoMeanDRR04_pf_PhotonEtHighThreshold"));
		if (mus_isoMeanDRR04_pf_PhotonEtHighThreshold_branch) {mus_isoMeanDRR04_pf_PhotonEtHighThreshold_branch->SetAddress(&mus_isoMeanDRR04_pf_PhotonEtHighThreshold_);}
	}
	mus_isoR03_pf_ChargedHadronPt_branch = 0;
	if (tree->GetAlias("mus_isoR03_pf_ChargedHadronPt") != 0) {
		mus_isoR03_pf_ChargedHadronPt_branch = tree->GetBranch(tree->GetAlias("mus_isoR03_pf_ChargedHadronPt"));
		if (mus_isoR03_pf_ChargedHadronPt_branch) {mus_isoR03_pf_ChargedHadronPt_branch->SetAddress(&mus_isoR03_pf_ChargedHadronPt_);}
	}
	mus_isoR03_pf_ChargedParticlePt_branch = 0;
	if (tree->GetAlias("mus_isoR03_pf_ChargedParticlePt") != 0) {
		mus_isoR03_pf_ChargedParticlePt_branch = tree->GetBranch(tree->GetAlias("mus_isoR03_pf_ChargedParticlePt"));
		if (mus_isoR03_pf_ChargedParticlePt_branch) {mus_isoR03_pf_ChargedParticlePt_branch->SetAddress(&mus_isoR03_pf_ChargedParticlePt_);}
	}
	mus_isoR03_pf_NeutralHadronEt_branch = 0;
	if (tree->GetAlias("mus_isoR03_pf_NeutralHadronEt") != 0) {
		mus_isoR03_pf_NeutralHadronEt_branch = tree->GetBranch(tree->GetAlias("mus_isoR03_pf_NeutralHadronEt"));
		if (mus_isoR03_pf_NeutralHadronEt_branch) {mus_isoR03_pf_NeutralHadronEt_branch->SetAddress(&mus_isoR03_pf_NeutralHadronEt_);}
	}
	mus_isoR03_pf_NeutralHadronEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoR03_pf_NeutralHadronEtHighThreshold") != 0) {
		mus_isoR03_pf_NeutralHadronEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoR03_pf_NeutralHadronEtHighThreshold"));
		if (mus_isoR03_pf_NeutralHadronEtHighThreshold_branch) {mus_isoR03_pf_NeutralHadronEtHighThreshold_branch->SetAddress(&mus_isoR03_pf_NeutralHadronEtHighThreshold_);}
	}
	mus_isoR03_pf_PUPt_branch = 0;
	if (tree->GetAlias("mus_isoR03_pf_PUPt") != 0) {
		mus_isoR03_pf_PUPt_branch = tree->GetBranch(tree->GetAlias("mus_isoR03_pf_PUPt"));
		if (mus_isoR03_pf_PUPt_branch) {mus_isoR03_pf_PUPt_branch->SetAddress(&mus_isoR03_pf_PUPt_);}
	}
	mus_isoR03_pf_PhotonEt_branch = 0;
	if (tree->GetAlias("mus_isoR03_pf_PhotonEt") != 0) {
		mus_isoR03_pf_PhotonEt_branch = tree->GetBranch(tree->GetAlias("mus_isoR03_pf_PhotonEt"));
		if (mus_isoR03_pf_PhotonEt_branch) {mus_isoR03_pf_PhotonEt_branch->SetAddress(&mus_isoR03_pf_PhotonEt_);}
	}
	mus_isoR03_pf_PhotonEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoR03_pf_PhotonEtHighThreshold") != 0) {
		mus_isoR03_pf_PhotonEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoR03_pf_PhotonEtHighThreshold"));
		if (mus_isoR03_pf_PhotonEtHighThreshold_branch) {mus_isoR03_pf_PhotonEtHighThreshold_branch->SetAddress(&mus_isoR03_pf_PhotonEtHighThreshold_);}
	}
	mus_isoR04_pf_ChargedHadronPt_branch = 0;
	if (tree->GetAlias("mus_isoR04_pf_ChargedHadronPt") != 0) {
		mus_isoR04_pf_ChargedHadronPt_branch = tree->GetBranch(tree->GetAlias("mus_isoR04_pf_ChargedHadronPt"));
		if (mus_isoR04_pf_ChargedHadronPt_branch) {mus_isoR04_pf_ChargedHadronPt_branch->SetAddress(&mus_isoR04_pf_ChargedHadronPt_);}
	}
	mus_isoR04_pf_ChargedParticlePt_branch = 0;
	if (tree->GetAlias("mus_isoR04_pf_ChargedParticlePt") != 0) {
		mus_isoR04_pf_ChargedParticlePt_branch = tree->GetBranch(tree->GetAlias("mus_isoR04_pf_ChargedParticlePt"));
		if (mus_isoR04_pf_ChargedParticlePt_branch) {mus_isoR04_pf_ChargedParticlePt_branch->SetAddress(&mus_isoR04_pf_ChargedParticlePt_);}
	}
	mus_isoR04_pf_NeutralHadronEt_branch = 0;
	if (tree->GetAlias("mus_isoR04_pf_NeutralHadronEt") != 0) {
		mus_isoR04_pf_NeutralHadronEt_branch = tree->GetBranch(tree->GetAlias("mus_isoR04_pf_NeutralHadronEt"));
		if (mus_isoR04_pf_NeutralHadronEt_branch) {mus_isoR04_pf_NeutralHadronEt_branch->SetAddress(&mus_isoR04_pf_NeutralHadronEt_);}
	}
	mus_isoR04_pf_NeutralHadronEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoR04_pf_NeutralHadronEtHighThreshold") != 0) {
		mus_isoR04_pf_NeutralHadronEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoR04_pf_NeutralHadronEtHighThreshold"));
		if (mus_isoR04_pf_NeutralHadronEtHighThreshold_branch) {mus_isoR04_pf_NeutralHadronEtHighThreshold_branch->SetAddress(&mus_isoR04_pf_NeutralHadronEtHighThreshold_);}
	}
	mus_isoR04_pf_PUPt_branch = 0;
	if (tree->GetAlias("mus_isoR04_pf_PUPt") != 0) {
		mus_isoR04_pf_PUPt_branch = tree->GetBranch(tree->GetAlias("mus_isoR04_pf_PUPt"));
		if (mus_isoR04_pf_PUPt_branch) {mus_isoR04_pf_PUPt_branch->SetAddress(&mus_isoR04_pf_PUPt_);}
	}
	mus_isoR04_pf_PhotonEt_branch = 0;
	if (tree->GetAlias("mus_isoR04_pf_PhotonEt") != 0) {
		mus_isoR04_pf_PhotonEt_branch = tree->GetBranch(tree->GetAlias("mus_isoR04_pf_PhotonEt"));
		if (mus_isoR04_pf_PhotonEt_branch) {mus_isoR04_pf_PhotonEt_branch->SetAddress(&mus_isoR04_pf_PhotonEt_);}
	}
	mus_isoR04_pf_PhotonEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoR04_pf_PhotonEtHighThreshold") != 0) {
		mus_isoR04_pf_PhotonEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoR04_pf_PhotonEtHighThreshold"));
		if (mus_isoR04_pf_PhotonEtHighThreshold_branch) {mus_isoR04_pf_PhotonEtHighThreshold_branch->SetAddress(&mus_isoR04_pf_PhotonEtHighThreshold_);}
	}
	mus_isoSumDRR03_pf_ChargedHadronPt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR03_pf_ChargedHadronPt") != 0) {
		mus_isoSumDRR03_pf_ChargedHadronPt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR03_pf_ChargedHadronPt"));
		if (mus_isoSumDRR03_pf_ChargedHadronPt_branch) {mus_isoSumDRR03_pf_ChargedHadronPt_branch->SetAddress(&mus_isoSumDRR03_pf_ChargedHadronPt_);}
	}
	mus_isoSumDRR03_pf_ChargedParticlePt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR03_pf_ChargedParticlePt") != 0) {
		mus_isoSumDRR03_pf_ChargedParticlePt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR03_pf_ChargedParticlePt"));
		if (mus_isoSumDRR03_pf_ChargedParticlePt_branch) {mus_isoSumDRR03_pf_ChargedParticlePt_branch->SetAddress(&mus_isoSumDRR03_pf_ChargedParticlePt_);}
	}
	mus_isoSumDRR03_pf_NeutralHadronEt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR03_pf_NeutralHadronEt") != 0) {
		mus_isoSumDRR03_pf_NeutralHadronEt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR03_pf_NeutralHadronEt"));
		if (mus_isoSumDRR03_pf_NeutralHadronEt_branch) {mus_isoSumDRR03_pf_NeutralHadronEt_branch->SetAddress(&mus_isoSumDRR03_pf_NeutralHadronEt_);}
	}
	mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold") != 0) {
		mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold"));
		if (mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_branch) {mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_branch->SetAddress(&mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_);}
	}
	mus_isoSumDRR03_pf_PUPt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR03_pf_PUPt") != 0) {
		mus_isoSumDRR03_pf_PUPt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR03_pf_PUPt"));
		if (mus_isoSumDRR03_pf_PUPt_branch) {mus_isoSumDRR03_pf_PUPt_branch->SetAddress(&mus_isoSumDRR03_pf_PUPt_);}
	}
	mus_isoSumDRR03_pf_PhotonEt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR03_pf_PhotonEt") != 0) {
		mus_isoSumDRR03_pf_PhotonEt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR03_pf_PhotonEt"));
		if (mus_isoSumDRR03_pf_PhotonEt_branch) {mus_isoSumDRR03_pf_PhotonEt_branch->SetAddress(&mus_isoSumDRR03_pf_PhotonEt_);}
	}
	mus_isoSumDRR03_pf_PhotonEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR03_pf_PhotonEtHighThreshold") != 0) {
		mus_isoSumDRR03_pf_PhotonEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR03_pf_PhotonEtHighThreshold"));
		if (mus_isoSumDRR03_pf_PhotonEtHighThreshold_branch) {mus_isoSumDRR03_pf_PhotonEtHighThreshold_branch->SetAddress(&mus_isoSumDRR03_pf_PhotonEtHighThreshold_);}
	}
	mus_isoSumDRR04_pf_ChargedHadronPt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR04_pf_ChargedHadronPt") != 0) {
		mus_isoSumDRR04_pf_ChargedHadronPt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR04_pf_ChargedHadronPt"));
		if (mus_isoSumDRR04_pf_ChargedHadronPt_branch) {mus_isoSumDRR04_pf_ChargedHadronPt_branch->SetAddress(&mus_isoSumDRR04_pf_ChargedHadronPt_);}
	}
	mus_isoSumDRR04_pf_ChargedParticlePt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR04_pf_ChargedParticlePt") != 0) {
		mus_isoSumDRR04_pf_ChargedParticlePt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR04_pf_ChargedParticlePt"));
		if (mus_isoSumDRR04_pf_ChargedParticlePt_branch) {mus_isoSumDRR04_pf_ChargedParticlePt_branch->SetAddress(&mus_isoSumDRR04_pf_ChargedParticlePt_);}
	}
	mus_isoSumDRR04_pf_NeutralHadronEt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR04_pf_NeutralHadronEt") != 0) {
		mus_isoSumDRR04_pf_NeutralHadronEt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR04_pf_NeutralHadronEt"));
		if (mus_isoSumDRR04_pf_NeutralHadronEt_branch) {mus_isoSumDRR04_pf_NeutralHadronEt_branch->SetAddress(&mus_isoSumDRR04_pf_NeutralHadronEt_);}
	}
	mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold") != 0) {
		mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold"));
		if (mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_branch) {mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_branch->SetAddress(&mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_);}
	}
	mus_isoSumDRR04_pf_PUPt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR04_pf_PUPt") != 0) {
		mus_isoSumDRR04_pf_PUPt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR04_pf_PUPt"));
		if (mus_isoSumDRR04_pf_PUPt_branch) {mus_isoSumDRR04_pf_PUPt_branch->SetAddress(&mus_isoSumDRR04_pf_PUPt_);}
	}
	mus_isoSumDRR04_pf_PhotonEt_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR04_pf_PhotonEt") != 0) {
		mus_isoSumDRR04_pf_PhotonEt_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR04_pf_PhotonEt"));
		if (mus_isoSumDRR04_pf_PhotonEt_branch) {mus_isoSumDRR04_pf_PhotonEt_branch->SetAddress(&mus_isoSumDRR04_pf_PhotonEt_);}
	}
	mus_isoSumDRR04_pf_PhotonEtHighThreshold_branch = 0;
	if (tree->GetAlias("mus_isoSumDRR04_pf_PhotonEtHighThreshold") != 0) {
		mus_isoSumDRR04_pf_PhotonEtHighThreshold_branch = tree->GetBranch(tree->GetAlias("mus_isoSumDRR04_pf_PhotonEtHighThreshold"));
		if (mus_isoSumDRR04_pf_PhotonEtHighThreshold_branch) {mus_isoSumDRR04_pf_PhotonEtHighThreshold_branch->SetAddress(&mus_isoSumDRR04_pf_PhotonEtHighThreshold_);}
	}
	mus_iso_ecalvetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_ecalvetoDep") != 0) {
		mus_iso_ecalvetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_ecalvetoDep"));
		if (mus_iso_ecalvetoDep_branch) {mus_iso_ecalvetoDep_branch->SetAddress(&mus_iso_ecalvetoDep_);}
	}
	mus_iso_hcalvetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_hcalvetoDep") != 0) {
		mus_iso_hcalvetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_hcalvetoDep"));
		if (mus_iso_hcalvetoDep_branch) {mus_iso_hcalvetoDep_branch->SetAddress(&mus_iso_hcalvetoDep_);}
	}
	mus_iso_hovetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_hovetoDep") != 0) {
		mus_iso_hovetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_hovetoDep"));
		if (mus_iso_hovetoDep_branch) {mus_iso_hovetoDep_branch->SetAddress(&mus_iso_hovetoDep_);}
	}
	mus_iso_trckvetoDep_branch = 0;
	if (tree->GetAlias("mus_iso_trckvetoDep") != 0) {
		mus_iso_trckvetoDep_branch = tree->GetBranch(tree->GetAlias("mus_iso_trckvetoDep"));
		if (mus_iso_trckvetoDep_branch) {mus_iso_trckvetoDep_branch->SetAddress(&mus_iso_trckvetoDep_);}
	}
	mus_localDistance_branch = 0;
	if (tree->GetAlias("mus_localDistance") != 0) {
		mus_localDistance_branch = tree->GetBranch(tree->GetAlias("mus_localDistance"));
		if (mus_localDistance_branch) {mus_localDistance_branch->SetAddress(&mus_localDistance_);}
	}
	mus_mass_branch = 0;
	if (tree->GetAlias("mus_mass") != 0) {
		mus_mass_branch = tree->GetBranch(tree->GetAlias("mus_mass"));
		if (mus_mass_branch) {mus_mass_branch->SetAddress(&mus_mass_);}
	}
	mus_mc_patMatch_dr_branch = 0;
	if (tree->GetAlias("mus_mc_patMatch_dr") != 0) {
		mus_mc_patMatch_dr_branch = tree->GetBranch(tree->GetAlias("mus_mc_patMatch_dr"));
		if (mus_mc_patMatch_dr_branch) {mus_mc_patMatch_dr_branch->SetAddress(&mus_mc_patMatch_dr_);}
	}
	mus_miniIso_ch_branch = 0;
	if (tree->GetAlias("mus_miniIso_ch") != 0) {
		mus_miniIso_ch_branch = tree->GetBranch(tree->GetAlias("mus_miniIso_ch"));
		if (mus_miniIso_ch_branch) {mus_miniIso_ch_branch->SetAddress(&mus_miniIso_ch_);}
	}
	mus_miniIso_db_branch = 0;
	if (tree->GetAlias("mus_miniIso_db") != 0) {
		mus_miniIso_db_branch = tree->GetBranch(tree->GetAlias("mus_miniIso_db"));
		if (mus_miniIso_db_branch) {mus_miniIso_db_branch->SetAddress(&mus_miniIso_db_);}
	}
	mus_miniIso_em_branch = 0;
	if (tree->GetAlias("mus_miniIso_em") != 0) {
		mus_miniIso_em_branch = tree->GetBranch(tree->GetAlias("mus_miniIso_em"));
		if (mus_miniIso_em_branch) {mus_miniIso_em_branch->SetAddress(&mus_miniIso_em_);}
	}
	mus_miniIso_nh_branch = 0;
	if (tree->GetAlias("mus_miniIso_nh") != 0) {
		mus_miniIso_nh_branch = tree->GetBranch(tree->GetAlias("mus_miniIso_nh"));
		if (mus_miniIso_nh_branch) {mus_miniIso_nh_branch->SetAddress(&mus_miniIso_nh_);}
	}
	mus_miniIso_uncor_branch = 0;
	if (tree->GetAlias("mus_miniIso_uncor") != 0) {
		mus_miniIso_uncor_branch = tree->GetBranch(tree->GetAlias("mus_miniIso_uncor"));
		if (mus_miniIso_uncor_branch) {mus_miniIso_uncor_branch->SetAddress(&mus_miniIso_uncor_);}
	}
	mus_ndof_branch = 0;
	if (tree->GetAlias("mus_ndof") != 0) {
		mus_ndof_branch = tree->GetBranch(tree->GetAlias("mus_ndof"));
		if (mus_ndof_branch) {mus_ndof_branch->SetAddress(&mus_ndof_);}
	}
	mus_phiErr_branch = 0;
	if (tree->GetAlias("mus_phiErr") != 0) {
		mus_phiErr_branch = tree->GetBranch(tree->GetAlias("mus_phiErr"));
		if (mus_phiErr_branch) {mus_phiErr_branch->SetAddress(&mus_phiErr_);}
	}
	mus_ptErr_branch = 0;
	if (tree->GetAlias("mus_ptErr") != 0) {
		mus_ptErr_branch = tree->GetBranch(tree->GetAlias("mus_ptErr"));
		if (mus_ptErr_branch) {mus_ptErr_branch->SetAddress(&mus_ptErr_);}
	}
	mus_qoverp_branch = 0;
	if (tree->GetAlias("mus_qoverp") != 0) {
		mus_qoverp_branch = tree->GetBranch(tree->GetAlias("mus_qoverp"));
		if (mus_qoverp_branch) {mus_qoverp_branch->SetAddress(&mus_qoverp_);}
	}
	mus_qoverpError_branch = 0;
	if (tree->GetAlias("mus_qoverpError") != 0) {
		mus_qoverpError_branch = tree->GetBranch(tree->GetAlias("mus_qoverpError"));
		if (mus_qoverpError_branch) {mus_qoverpError_branch->SetAddress(&mus_qoverpError_);}
	}
	mus_segmCompatibility_branch = 0;
	if (tree->GetAlias("mus_segmCompatibility") != 0) {
		mus_segmCompatibility_branch = tree->GetBranch(tree->GetAlias("mus_segmCompatibility"));
		if (mus_segmCompatibility_branch) {mus_segmCompatibility_branch->SetAddress(&mus_segmCompatibility_);}
	}
	mus_staRelChi2_branch = 0;
	if (tree->GetAlias("mus_staRelChi2") != 0) {
		mus_staRelChi2_branch = tree->GetBranch(tree->GetAlias("mus_staRelChi2"));
		if (mus_staRelChi2_branch) {mus_staRelChi2_branch->SetAddress(&mus_staRelChi2_);}
	}
	mus_sta_chi2_branch = 0;
	if (tree->GetAlias("mus_sta_chi2") != 0) {
		mus_sta_chi2_branch = tree->GetBranch(tree->GetAlias("mus_sta_chi2"));
		if (mus_sta_chi2_branch) {mus_sta_chi2_branch->SetAddress(&mus_sta_chi2_);}
	}
	mus_sta_d0_branch = 0;
	if (tree->GetAlias("mus_sta_d0") != 0) {
		mus_sta_d0_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0"));
		if (mus_sta_d0_branch) {mus_sta_d0_branch->SetAddress(&mus_sta_d0_);}
	}
	mus_sta_d0Err_branch = 0;
	if (tree->GetAlias("mus_sta_d0Err") != 0) {
		mus_sta_d0Err_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0Err"));
		if (mus_sta_d0Err_branch) {mus_sta_d0Err_branch->SetAddress(&mus_sta_d0Err_);}
	}
	mus_sta_d0corr_branch = 0;
	if (tree->GetAlias("mus_sta_d0corr") != 0) {
		mus_sta_d0corr_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0corr"));
		if (mus_sta_d0corr_branch) {mus_sta_d0corr_branch->SetAddress(&mus_sta_d0corr_);}
	}
	mus_sta_d0corrPhi_branch = 0;
	if (tree->GetAlias("mus_sta_d0corrPhi") != 0) {
		mus_sta_d0corrPhi_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0corrPhi"));
		if (mus_sta_d0corrPhi_branch) {mus_sta_d0corrPhi_branch->SetAddress(&mus_sta_d0corrPhi_);}
	}
	mus_sta_d0phiCov_branch = 0;
	if (tree->GetAlias("mus_sta_d0phiCov") != 0) {
		mus_sta_d0phiCov_branch = tree->GetBranch(tree->GetAlias("mus_sta_d0phiCov"));
		if (mus_sta_d0phiCov_branch) {mus_sta_d0phiCov_branch->SetAddress(&mus_sta_d0phiCov_);}
	}
	mus_sta_ndof_branch = 0;
	if (tree->GetAlias("mus_sta_ndof") != 0) {
		mus_sta_ndof_branch = tree->GetBranch(tree->GetAlias("mus_sta_ndof"));
		if (mus_sta_ndof_branch) {mus_sta_ndof_branch->SetAddress(&mus_sta_ndof_);}
	}
	mus_sta_qoverp_branch = 0;
	if (tree->GetAlias("mus_sta_qoverp") != 0) {
		mus_sta_qoverp_branch = tree->GetBranch(tree->GetAlias("mus_sta_qoverp"));
		if (mus_sta_qoverp_branch) {mus_sta_qoverp_branch->SetAddress(&mus_sta_qoverp_);}
	}
	mus_sta_qoverpError_branch = 0;
	if (tree->GetAlias("mus_sta_qoverpError") != 0) {
		mus_sta_qoverpError_branch = tree->GetBranch(tree->GetAlias("mus_sta_qoverpError"));
		if (mus_sta_qoverpError_branch) {mus_sta_qoverpError_branch->SetAddress(&mus_sta_qoverpError_);}
	}
	mus_sta_z0_branch = 0;
	if (tree->GetAlias("mus_sta_z0") != 0) {
		mus_sta_z0_branch = tree->GetBranch(tree->GetAlias("mus_sta_z0"));
		if (mus_sta_z0_branch) {mus_sta_z0_branch->SetAddress(&mus_sta_z0_);}
	}
	mus_sta_z0Err_branch = 0;
	if (tree->GetAlias("mus_sta_z0Err") != 0) {
		mus_sta_z0Err_branch = tree->GetBranch(tree->GetAlias("mus_sta_z0Err"));
		if (mus_sta_z0Err_branch) {mus_sta_z0Err_branch->SetAddress(&mus_sta_z0Err_);}
	}
	mus_sta_z0corr_branch = 0;
	if (tree->GetAlias("mus_sta_z0corr") != 0) {
		mus_sta_z0corr_branch = tree->GetBranch(tree->GetAlias("mus_sta_z0corr"));
		if (mus_sta_z0corr_branch) {mus_sta_z0corr_branch->SetAddress(&mus_sta_z0corr_);}
	}
	mus_timeAtIpInOut_branch = 0;
	if (tree->GetAlias("mus_timeAtIpInOut") != 0) {
		mus_timeAtIpInOut_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpInOut"));
		if (mus_timeAtIpInOut_branch) {mus_timeAtIpInOut_branch->SetAddress(&mus_timeAtIpInOut_);}
	}
	mus_timeAtIpInOutErr_branch = 0;
	if (tree->GetAlias("mus_timeAtIpInOutErr") != 0) {
		mus_timeAtIpInOutErr_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpInOutErr"));
		if (mus_timeAtIpInOutErr_branch) {mus_timeAtIpInOutErr_branch->SetAddress(&mus_timeAtIpInOutErr_);}
	}
	mus_timeAtIpOutIn_branch = 0;
	if (tree->GetAlias("mus_timeAtIpOutIn") != 0) {
		mus_timeAtIpOutIn_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpOutIn"));
		if (mus_timeAtIpOutIn_branch) {mus_timeAtIpOutIn_branch->SetAddress(&mus_timeAtIpOutIn_);}
	}
	mus_timeAtIpOutInErr_branch = 0;
	if (tree->GetAlias("mus_timeAtIpOutInErr") != 0) {
		mus_timeAtIpOutInErr_branch = tree->GetBranch(tree->GetAlias("mus_timeAtIpOutInErr"));
		if (mus_timeAtIpOutInErr_branch) {mus_timeAtIpOutInErr_branch->SetAddress(&mus_timeAtIpOutInErr_);}
	}
	mus_trkKink_branch = 0;
	if (tree->GetAlias("mus_trkKink") != 0) {
		mus_trkKink_branch = tree->GetBranch(tree->GetAlias("mus_trkKink"));
		if (mus_trkKink_branch) {mus_trkKink_branch->SetAddress(&mus_trkKink_);}
	}
	mus_trkRelChi2_branch = 0;
	if (tree->GetAlias("mus_trkRelChi2") != 0) {
		mus_trkRelChi2_branch = tree->GetBranch(tree->GetAlias("mus_trkRelChi2"));
		if (mus_trkRelChi2_branch) {mus_trkRelChi2_branch->SetAddress(&mus_trkRelChi2_);}
	}
	mus_vertexphi_branch = 0;
	if (tree->GetAlias("mus_vertexphi") != 0) {
		mus_vertexphi_branch = tree->GetBranch(tree->GetAlias("mus_vertexphi"));
		if (mus_vertexphi_branch) {mus_vertexphi_branch->SetAddress(&mus_vertexphi_);}
	}
	mus_z0_branch = 0;
	if (tree->GetAlias("mus_z0") != 0) {
		mus_z0_branch = tree->GetBranch(tree->GetAlias("mus_z0"));
		if (mus_z0_branch) {mus_z0_branch->SetAddress(&mus_z0_);}
	}
	mus_z0Err_branch = 0;
	if (tree->GetAlias("mus_z0Err") != 0) {
		mus_z0Err_branch = tree->GetBranch(tree->GetAlias("mus_z0Err"));
		if (mus_z0Err_branch) {mus_z0Err_branch->SetAddress(&mus_z0Err_);}
	}
	mus_z0corr_branch = 0;
	if (tree->GetAlias("mus_z0corr") != 0) {
		mus_z0corr_branch = tree->GetBranch(tree->GetAlias("mus_z0corr"));
		if (mus_z0corr_branch) {mus_z0corr_branch->SetAddress(&mus_z0corr_);}
	}
	pfcands_dz_branch = 0;
	if (tree->GetAlias("pfcands_dz") != 0) {
		pfcands_dz_branch = tree->GetBranch(tree->GetAlias("pfcands_dz"));
		if (pfcands_dz_branch) {pfcands_dz_branch->SetAddress(&pfcands_dz_);}
	}
	pfcands_mass_branch = 0;
	if (tree->GetAlias("pfcands_mass") != 0) {
		pfcands_mass_branch = tree->GetBranch(tree->GetAlias("pfcands_mass"));
		if (pfcands_mass_branch) {pfcands_mass_branch->SetAddress(&pfcands_mass_);}
	}
	pfjets_area_branch = 0;
	if (tree->GetAlias("pfjets_area") != 0) {
		pfjets_area_branch = tree->GetBranch(tree->GetAlias("pfjets_area"));
		if (pfjets_area_branch) {pfjets_area_branch->SetAddress(&pfjets_area_);}
	}
	pfjets_chargedEmE_branch = 0;
	if (tree->GetAlias("pfjets_chargedEmE") != 0) {
		pfjets_chargedEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedEmE"));
		if (pfjets_chargedEmE_branch) {pfjets_chargedEmE_branch->SetAddress(&pfjets_chargedEmE_);}
	}
	pfjets_chargedHadronE_branch = 0;
	if (tree->GetAlias("pfjets_chargedHadronE") != 0) {
		pfjets_chargedHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedHadronE"));
		if (pfjets_chargedHadronE_branch) {pfjets_chargedHadronE_branch->SetAddress(&pfjets_chargedHadronE_);}
	}
	pfjets_electronE_branch = 0;
	if (tree->GetAlias("pfjets_electronE") != 0) {
		pfjets_electronE_branch = tree->GetBranch(tree->GetAlias("pfjets_electronE"));
		if (pfjets_electronE_branch) {pfjets_electronE_branch->SetAddress(&pfjets_electronE_);}
	}
	pfjets_hfEmE_branch = 0;
	if (tree->GetAlias("pfjets_hfEmE") != 0) {
		pfjets_hfEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_hfEmE"));
		if (pfjets_hfEmE_branch) {pfjets_hfEmE_branch->SetAddress(&pfjets_hfEmE_);}
	}
	pfjets_hfHadronE_branch = 0;
	if (tree->GetAlias("pfjets_hfHadronE") != 0) {
		pfjets_hfHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_hfHadronE"));
		if (pfjets_hfHadronE_branch) {pfjets_hfHadronE_branch->SetAddress(&pfjets_hfHadronE_);}
	}
	pfjets_mass_branch = 0;
	if (tree->GetAlias("pfjets_mass") != 0) {
		pfjets_mass_branch = tree->GetBranch(tree->GetAlias("pfjets_mass"));
		if (pfjets_mass_branch) {pfjets_mass_branch->SetAddress(&pfjets_mass_);}
	}
	pfjets_muonE_branch = 0;
	if (tree->GetAlias("pfjets_muonE") != 0) {
		pfjets_muonE_branch = tree->GetBranch(tree->GetAlias("pfjets_muonE"));
		if (pfjets_muonE_branch) {pfjets_muonE_branch->SetAddress(&pfjets_muonE_);}
	}
	pfjets_neutralEmE_branch = 0;
	if (tree->GetAlias("pfjets_neutralEmE") != 0) {
		pfjets_neutralEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralEmE"));
		if (pfjets_neutralEmE_branch) {pfjets_neutralEmE_branch->SetAddress(&pfjets_neutralEmE_);}
	}
	pfjets_neutralHadronE_branch = 0;
	if (tree->GetAlias("pfjets_neutralHadronE") != 0) {
		pfjets_neutralHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralHadronE"));
		if (pfjets_neutralHadronE_branch) {pfjets_neutralHadronE_branch->SetAddress(&pfjets_neutralHadronE_);}
	}
	pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch = 0;
	if (tree->GetAlias("pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag") != 0) {
		pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch = tree->GetBranch(tree->GetAlias("pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag"));
		if (pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch) {pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch->SetAddress(&pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_);}
	}
	pfjets_photonE_branch = 0;
	if (tree->GetAlias("pfjets_photonE") != 0) {
		pfjets_photonE_branch = tree->GetBranch(tree->GetAlias("pfjets_photonE"));
		if (pfjets_photonE_branch) {pfjets_photonE_branch->SetAddress(&pfjets_photonE_);}
	}
	pfjets_pileupJetId_branch = 0;
	if (tree->GetAlias("pfjets_pileupJetId") != 0) {
		pfjets_pileupJetId_branch = tree->GetBranch(tree->GetAlias("pfjets_pileupJetId"));
		if (pfjets_pileupJetId_branch) {pfjets_pileupJetId_branch->SetAddress(&pfjets_pileupJetId_);}
	}
	pfjets_undoJEC_branch = 0;
	if (tree->GetAlias("pfjets_undoJEC") != 0) {
		pfjets_undoJEC_branch = tree->GetBranch(tree->GetAlias("pfjets_undoJEC"));
		if (pfjets_undoJEC_branch) {pfjets_undoJEC_branch->SetAddress(&pfjets_undoJEC_);}
	}
	pfjets_puppi_area_branch = 0;
	if (tree->GetAlias("pfjets_puppi_area") != 0) {
		pfjets_puppi_area_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_area"));
		if (pfjets_puppi_area_branch) {pfjets_puppi_area_branch->SetAddress(&pfjets_puppi_area_);}
	}
	pfjets_puppi_chargedEmE_branch = 0;
	if (tree->GetAlias("pfjets_puppi_chargedEmE") != 0) {
		pfjets_puppi_chargedEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_chargedEmE"));
		if (pfjets_puppi_chargedEmE_branch) {pfjets_puppi_chargedEmE_branch->SetAddress(&pfjets_puppi_chargedEmE_);}
	}
	pfjets_puppi_chargedHadronE_branch = 0;
	if (tree->GetAlias("pfjets_puppi_chargedHadronE") != 0) {
		pfjets_puppi_chargedHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_chargedHadronE"));
		if (pfjets_puppi_chargedHadronE_branch) {pfjets_puppi_chargedHadronE_branch->SetAddress(&pfjets_puppi_chargedHadronE_);}
	}
	pfjets_puppi_electronE_branch = 0;
	if (tree->GetAlias("pfjets_puppi_electronE") != 0) {
		pfjets_puppi_electronE_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_electronE"));
		if (pfjets_puppi_electronE_branch) {pfjets_puppi_electronE_branch->SetAddress(&pfjets_puppi_electronE_);}
	}
	pfjets_puppi_hfEmE_branch = 0;
	if (tree->GetAlias("pfjets_puppi_hfEmE") != 0) {
		pfjets_puppi_hfEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_hfEmE"));
		if (pfjets_puppi_hfEmE_branch) {pfjets_puppi_hfEmE_branch->SetAddress(&pfjets_puppi_hfEmE_);}
	}
	pfjets_puppi_hfHadronE_branch = 0;
	if (tree->GetAlias("pfjets_puppi_hfHadronE") != 0) {
		pfjets_puppi_hfHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_hfHadronE"));
		if (pfjets_puppi_hfHadronE_branch) {pfjets_puppi_hfHadronE_branch->SetAddress(&pfjets_puppi_hfHadronE_);}
	}
	pfjets_puppi_mass_branch = 0;
	if (tree->GetAlias("pfjets_puppi_mass") != 0) {
		pfjets_puppi_mass_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_mass"));
		if (pfjets_puppi_mass_branch) {pfjets_puppi_mass_branch->SetAddress(&pfjets_puppi_mass_);}
	}
	pfjets_puppi_muonE_branch = 0;
	if (tree->GetAlias("pfjets_puppi_muonE") != 0) {
		pfjets_puppi_muonE_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_muonE"));
		if (pfjets_puppi_muonE_branch) {pfjets_puppi_muonE_branch->SetAddress(&pfjets_puppi_muonE_);}
	}
	pfjets_puppi_neutralEmE_branch = 0;
	if (tree->GetAlias("pfjets_puppi_neutralEmE") != 0) {
		pfjets_puppi_neutralEmE_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_neutralEmE"));
		if (pfjets_puppi_neutralEmE_branch) {pfjets_puppi_neutralEmE_branch->SetAddress(&pfjets_puppi_neutralEmE_);}
	}
	pfjets_puppi_neutralHadronE_branch = 0;
	if (tree->GetAlias("pfjets_puppi_neutralHadronE") != 0) {
		pfjets_puppi_neutralHadronE_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_neutralHadronE"));
		if (pfjets_puppi_neutralHadronE_branch) {pfjets_puppi_neutralHadronE_branch->SetAddress(&pfjets_puppi_neutralHadronE_);}
	}
	pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch = 0;
	if (tree->GetAlias("pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag") != 0) {
		pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag"));
		if (pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch) {pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch->SetAddress(&pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_);}
	}
	pfjets_puppi_photonE_branch = 0;
	if (tree->GetAlias("pfjets_puppi_photonE") != 0) {
		pfjets_puppi_photonE_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_photonE"));
		if (pfjets_puppi_photonE_branch) {pfjets_puppi_photonE_branch->SetAddress(&pfjets_puppi_photonE_);}
	}
	pfjets_puppi_pileupJetId_branch = 0;
	if (tree->GetAlias("pfjets_puppi_pileupJetId") != 0) {
		pfjets_puppi_pileupJetId_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_pileupJetId"));
		if (pfjets_puppi_pileupJetId_branch) {pfjets_puppi_pileupJetId_branch->SetAddress(&pfjets_puppi_pileupJetId_);}
	}
	pfjets_puppi_undoJEC_branch = 0;
	if (tree->GetAlias("pfjets_puppi_undoJEC") != 0) {
		pfjets_puppi_undoJEC_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_undoJEC"));
		if (pfjets_puppi_undoJEC_branch) {pfjets_puppi_undoJEC_branch->SetAddress(&pfjets_puppi_undoJEC_);}
	}
	taus_pf_mass_branch = 0;
	if (tree->GetAlias("taus_pf_mass") != 0) {
		taus_pf_mass_branch = tree->GetBranch(tree->GetAlias("taus_pf_mass"));
		if (taus_pf_mass_branch) {taus_pf_mass_branch->SetAddress(&taus_pf_mass_);}
	}
	photons_chargedHadronIso_branch = 0;
	if (tree->GetAlias("photons_chargedHadronIso") != 0) {
		photons_chargedHadronIso_branch = tree->GetBranch(tree->GetAlias("photons_chargedHadronIso"));
		if (photons_chargedHadronIso_branch) {photons_chargedHadronIso_branch->SetAddress(&photons_chargedHadronIso_);}
	}
	photons_e1x5_branch = 0;
	if (tree->GetAlias("photons_e1x5") != 0) {
		photons_e1x5_branch = tree->GetBranch(tree->GetAlias("photons_e1x5"));
		if (photons_e1x5_branch) {photons_e1x5_branch->SetAddress(&photons_e1x5_);}
	}
	photons_e2x5Max_branch = 0;
	if (tree->GetAlias("photons_e2x5Max") != 0) {
		photons_e2x5Max_branch = tree->GetBranch(tree->GetAlias("photons_e2x5Max"));
		if (photons_e2x5Max_branch) {photons_e2x5Max_branch->SetAddress(&photons_e2x5Max_);}
	}
	photons_e3x3_branch = 0;
	if (tree->GetAlias("photons_e3x3") != 0) {
		photons_e3x3_branch = tree->GetBranch(tree->GetAlias("photons_e3x3"));
		if (photons_e3x3_branch) {photons_e3x3_branch->SetAddress(&photons_e3x3_);}
	}
	photons_e5x5_branch = 0;
	if (tree->GetAlias("photons_e5x5") != 0) {
		photons_e5x5_branch = tree->GetBranch(tree->GetAlias("photons_e5x5"));
		if (photons_e5x5_branch) {photons_e5x5_branch->SetAddress(&photons_e5x5_);}
	}
	photons_eSC_branch = 0;
	if (tree->GetAlias("photons_eSC") != 0) {
		photons_eSC_branch = tree->GetBranch(tree->GetAlias("photons_eSC"));
		if (photons_eSC_branch) {photons_eSC_branch->SetAddress(&photons_eSC_);}
	}
	photons_eSCPresh_branch = 0;
	if (tree->GetAlias("photons_eSCPresh") != 0) {
		photons_eSCPresh_branch = tree->GetBranch(tree->GetAlias("photons_eSCPresh"));
		if (photons_eSCPresh_branch) {photons_eSCPresh_branch->SetAddress(&photons_eSCPresh_);}
	}
	photons_eSCRaw_branch = 0;
	if (tree->GetAlias("photons_eSCRaw") != 0) {
		photons_eSCRaw_branch = tree->GetBranch(tree->GetAlias("photons_eSCRaw"));
		if (photons_eSCRaw_branch) {photons_eSCRaw_branch->SetAddress(&photons_eSCRaw_);}
	}
	photons_ecalIso03_branch = 0;
	if (tree->GetAlias("photons_ecalIso03") != 0) {
		photons_ecalIso03_branch = tree->GetBranch(tree->GetAlias("photons_ecalIso03"));
		if (photons_ecalIso03_branch) {photons_ecalIso03_branch->SetAddress(&photons_ecalIso03_);}
	}
	photons_ecalIso04_branch = 0;
	if (tree->GetAlias("photons_ecalIso04") != 0) {
		photons_ecalIso04_branch = tree->GetBranch(tree->GetAlias("photons_ecalIso04"));
		if (photons_ecalIso04_branch) {photons_ecalIso04_branch->SetAddress(&photons_ecalIso04_);}
	}
	photons_ecalPFClusterIso_branch = 0;
	if (tree->GetAlias("photons_ecalPFClusterIso") != 0) {
		photons_ecalPFClusterIso_branch = tree->GetBranch(tree->GetAlias("photons_ecalPFClusterIso"));
		if (photons_ecalPFClusterIso_branch) {photons_ecalPFClusterIso_branch->SetAddress(&photons_ecalPFClusterIso_);}
	}
	photons_etaSC_branch = 0;
	if (tree->GetAlias("photons_etaSC") != 0) {
		photons_etaSC_branch = tree->GetBranch(tree->GetAlias("photons_etaSC"));
		if (photons_etaSC_branch) {photons_etaSC_branch->SetAddress(&photons_etaSC_);}
	}
	photons_full3x3_e3x3_branch = 0;
	if (tree->GetAlias("photons_full3x3_e3x3") != 0) {
		photons_full3x3_e3x3_branch = tree->GetBranch(tree->GetAlias("photons_full3x3_e3x3"));
		if (photons_full3x3_e3x3_branch) {photons_full3x3_e3x3_branch->SetAddress(&photons_full3x3_e3x3_);}
	}
	photons_full5x5_e1x5_branch = 0;
	if (tree->GetAlias("photons_full5x5_e1x5") != 0) {
		photons_full5x5_e1x5_branch = tree->GetBranch(tree->GetAlias("photons_full5x5_e1x5"));
		if (photons_full5x5_e1x5_branch) {photons_full5x5_e1x5_branch->SetAddress(&photons_full5x5_e1x5_);}
	}
	photons_full5x5_e2x5Max_branch = 0;
	if (tree->GetAlias("photons_full5x5_e2x5Max") != 0) {
		photons_full5x5_e2x5Max_branch = tree->GetBranch(tree->GetAlias("photons_full5x5_e2x5Max"));
		if (photons_full5x5_e2x5Max_branch) {photons_full5x5_e2x5Max_branch->SetAddress(&photons_full5x5_e2x5Max_);}
	}
	photons_full5x5_e5x5_branch = 0;
	if (tree->GetAlias("photons_full5x5_e5x5") != 0) {
		photons_full5x5_e5x5_branch = tree->GetBranch(tree->GetAlias("photons_full5x5_e5x5"));
		if (photons_full5x5_e5x5_branch) {photons_full5x5_e5x5_branch->SetAddress(&photons_full5x5_e5x5_);}
	}
	photons_full5x5_hOverE_branch = 0;
	if (tree->GetAlias("photons_full5x5_hOverE") != 0) {
		photons_full5x5_hOverE_branch = tree->GetBranch(tree->GetAlias("photons_full5x5_hOverE"));
		if (photons_full5x5_hOverE_branch) {photons_full5x5_hOverE_branch->SetAddress(&photons_full5x5_hOverE_);}
	}
	photons_full5x5_hOverEtowBC_branch = 0;
	if (tree->GetAlias("photons_full5x5_hOverEtowBC") != 0) {
		photons_full5x5_hOverEtowBC_branch = tree->GetBranch(tree->GetAlias("photons_full5x5_hOverEtowBC"));
		if (photons_full5x5_hOverEtowBC_branch) {photons_full5x5_hOverEtowBC_branch->SetAddress(&photons_full5x5_hOverEtowBC_);}
	}
	photons_full5x5_r9_branch = 0;
	if (tree->GetAlias("photons_full5x5_r9") != 0) {
		photons_full5x5_r9_branch = tree->GetBranch(tree->GetAlias("photons_full5x5_r9"));
		if (photons_full5x5_r9_branch) {photons_full5x5_r9_branch->SetAddress(&photons_full5x5_r9_);}
	}
	photons_full5x5_sigmaEtaEta_branch = 0;
	if (tree->GetAlias("photons_full5x5_sigmaEtaEta") != 0) {
		photons_full5x5_sigmaEtaEta_branch = tree->GetBranch(tree->GetAlias("photons_full5x5_sigmaEtaEta"));
		if (photons_full5x5_sigmaEtaEta_branch) {photons_full5x5_sigmaEtaEta_branch->SetAddress(&photons_full5x5_sigmaEtaEta_);}
	}
	photons_full5x5_sigmaIEtaIEta_branch = 0;
	if (tree->GetAlias("photons_full5x5_sigmaIEtaIEta") != 0) {
		photons_full5x5_sigmaIEtaIEta_branch = tree->GetBranch(tree->GetAlias("photons_full5x5_sigmaIEtaIEta"));
		if (photons_full5x5_sigmaIEtaIEta_branch) {photons_full5x5_sigmaIEtaIEta_branch->SetAddress(&photons_full5x5_sigmaIEtaIEta_);}
	}
	photons_hOverE_branch = 0;
	if (tree->GetAlias("photons_hOverE") != 0) {
		photons_hOverE_branch = tree->GetBranch(tree->GetAlias("photons_hOverE"));
		if (photons_hOverE_branch) {photons_hOverE_branch->SetAddress(&photons_hOverE_);}
	}
	photons_hOverEtowBC_branch = 0;
	if (tree->GetAlias("photons_hOverEtowBC") != 0) {
		photons_hOverEtowBC_branch = tree->GetBranch(tree->GetAlias("photons_hOverEtowBC"));
		if (photons_hOverEtowBC_branch) {photons_hOverEtowBC_branch->SetAddress(&photons_hOverEtowBC_);}
	}
	photons_hcalDepth1TowerSumEtBcConeDR03_branch = 0;
	if (tree->GetAlias("photons_hcalDepth1TowerSumEtBcConeDR03") != 0) {
		photons_hcalDepth1TowerSumEtBcConeDR03_branch = tree->GetBranch(tree->GetAlias("photons_hcalDepth1TowerSumEtBcConeDR03"));
		if (photons_hcalDepth1TowerSumEtBcConeDR03_branch) {photons_hcalDepth1TowerSumEtBcConeDR03_branch->SetAddress(&photons_hcalDepth1TowerSumEtBcConeDR03_);}
	}
	photons_hcalDepth1TowerSumEtBcConeDR04_branch = 0;
	if (tree->GetAlias("photons_hcalDepth1TowerSumEtBcConeDR04") != 0) {
		photons_hcalDepth1TowerSumEtBcConeDR04_branch = tree->GetBranch(tree->GetAlias("photons_hcalDepth1TowerSumEtBcConeDR04"));
		if (photons_hcalDepth1TowerSumEtBcConeDR04_branch) {photons_hcalDepth1TowerSumEtBcConeDR04_branch->SetAddress(&photons_hcalDepth1TowerSumEtBcConeDR04_);}
	}
	photons_hcalDepth2TowerSumEtBcConeDR03_branch = 0;
	if (tree->GetAlias("photons_hcalDepth2TowerSumEtBcConeDR03") != 0) {
		photons_hcalDepth2TowerSumEtBcConeDR03_branch = tree->GetBranch(tree->GetAlias("photons_hcalDepth2TowerSumEtBcConeDR03"));
		if (photons_hcalDepth2TowerSumEtBcConeDR03_branch) {photons_hcalDepth2TowerSumEtBcConeDR03_branch->SetAddress(&photons_hcalDepth2TowerSumEtBcConeDR03_);}
	}
	photons_hcalDepth2TowerSumEtBcConeDR04_branch = 0;
	if (tree->GetAlias("photons_hcalDepth2TowerSumEtBcConeDR04") != 0) {
		photons_hcalDepth2TowerSumEtBcConeDR04_branch = tree->GetBranch(tree->GetAlias("photons_hcalDepth2TowerSumEtBcConeDR04"));
		if (photons_hcalDepth2TowerSumEtBcConeDR04_branch) {photons_hcalDepth2TowerSumEtBcConeDR04_branch->SetAddress(&photons_hcalDepth2TowerSumEtBcConeDR04_);}
	}
	photons_hcalIso03_branch = 0;
	if (tree->GetAlias("photons_hcalIso03") != 0) {
		photons_hcalIso03_branch = tree->GetBranch(tree->GetAlias("photons_hcalIso03"));
		if (photons_hcalIso03_branch) {photons_hcalIso03_branch->SetAddress(&photons_hcalIso03_);}
	}
	photons_hcalIso04_branch = 0;
	if (tree->GetAlias("photons_hcalIso04") != 0) {
		photons_hcalIso04_branch = tree->GetBranch(tree->GetAlias("photons_hcalIso04"));
		if (photons_hcalIso04_branch) {photons_hcalIso04_branch->SetAddress(&photons_hcalIso04_);}
	}
	photons_hcalPFClusterIso_branch = 0;
	if (tree->GetAlias("photons_hcalPFClusterIso") != 0) {
		photons_hcalPFClusterIso_branch = tree->GetBranch(tree->GetAlias("photons_hcalPFClusterIso"));
		if (photons_hcalPFClusterIso_branch) {photons_hcalPFClusterIso_branch->SetAddress(&photons_hcalPFClusterIso_);}
	}
	photons_hcalTowerSumEtBcConeDR03_branch = 0;
	if (tree->GetAlias("photons_hcalTowerSumEtBcConeDR03") != 0) {
		photons_hcalTowerSumEtBcConeDR03_branch = tree->GetBranch(tree->GetAlias("photons_hcalTowerSumEtBcConeDR03"));
		if (photons_hcalTowerSumEtBcConeDR03_branch) {photons_hcalTowerSumEtBcConeDR03_branch->SetAddress(&photons_hcalTowerSumEtBcConeDR03_);}
	}
	photons_hcalTowerSumEtBcConeDR04_branch = 0;
	if (tree->GetAlias("photons_hcalTowerSumEtBcConeDR04") != 0) {
		photons_hcalTowerSumEtBcConeDR04_branch = tree->GetBranch(tree->GetAlias("photons_hcalTowerSumEtBcConeDR04"));
		if (photons_hcalTowerSumEtBcConeDR04_branch) {photons_hcalTowerSumEtBcConeDR04_branch->SetAddress(&photons_hcalTowerSumEtBcConeDR04_);}
	}
	photons_mass_branch = 0;
	if (tree->GetAlias("photons_mass") != 0) {
		photons_mass_branch = tree->GetBranch(tree->GetAlias("photons_mass"));
		if (photons_mass_branch) {photons_mass_branch->SetAddress(&photons_mass_);}
	}
	photons_neutralHadronIso_branch = 0;
	if (tree->GetAlias("photons_neutralHadronIso") != 0) {
		photons_neutralHadronIso_branch = tree->GetBranch(tree->GetAlias("photons_neutralHadronIso"));
		if (photons_neutralHadronIso_branch) {photons_neutralHadronIso_branch->SetAddress(&photons_neutralHadronIso_);}
	}
	photons_ntkIsoHollow03_branch = 0;
	if (tree->GetAlias("photons_ntkIsoHollow03") != 0) {
		photons_ntkIsoHollow03_branch = tree->GetBranch(tree->GetAlias("photons_ntkIsoHollow03"));
		if (photons_ntkIsoHollow03_branch) {photons_ntkIsoHollow03_branch->SetAddress(&photons_ntkIsoHollow03_);}
	}
	photons_ntkIsoHollow04_branch = 0;
	if (tree->GetAlias("photons_ntkIsoHollow04") != 0) {
		photons_ntkIsoHollow04_branch = tree->GetBranch(tree->GetAlias("photons_ntkIsoHollow04"));
		if (photons_ntkIsoHollow04_branch) {photons_ntkIsoHollow04_branch->SetAddress(&photons_ntkIsoHollow04_);}
	}
	photons_ntkIsoSolid03_branch = 0;
	if (tree->GetAlias("photons_ntkIsoSolid03") != 0) {
		photons_ntkIsoSolid03_branch = tree->GetBranch(tree->GetAlias("photons_ntkIsoSolid03"));
		if (photons_ntkIsoSolid03_branch) {photons_ntkIsoSolid03_branch->SetAddress(&photons_ntkIsoSolid03_);}
	}
	photons_ntkIsoSolid04_branch = 0;
	if (tree->GetAlias("photons_ntkIsoSolid04") != 0) {
		photons_ntkIsoSolid04_branch = tree->GetBranch(tree->GetAlias("photons_ntkIsoSolid04"));
		if (photons_ntkIsoSolid04_branch) {photons_ntkIsoSolid04_branch->SetAddress(&photons_ntkIsoSolid04_);}
	}
	photons_phiSC_branch = 0;
	if (tree->GetAlias("photons_phiSC") != 0) {
		photons_phiSC_branch = tree->GetBranch(tree->GetAlias("photons_phiSC"));
		if (photons_phiSC_branch) {photons_phiSC_branch->SetAddress(&photons_phiSC_);}
	}
	photons_photonIso_branch = 0;
	if (tree->GetAlias("photons_photonIso") != 0) {
		photons_photonIso_branch = tree->GetBranch(tree->GetAlias("photons_photonIso"));
		if (photons_photonIso_branch) {photons_photonIso_branch->SetAddress(&photons_photonIso_);}
	}
	photons_recoChargedHadronIso_branch = 0;
	if (tree->GetAlias("photons_recoChargedHadronIso") != 0) {
		photons_recoChargedHadronIso_branch = tree->GetBranch(tree->GetAlias("photons_recoChargedHadronIso"));
		if (photons_recoChargedHadronIso_branch) {photons_recoChargedHadronIso_branch->SetAddress(&photons_recoChargedHadronIso_);}
	}
	photons_recoNeutralHadronIso_branch = 0;
	if (tree->GetAlias("photons_recoNeutralHadronIso") != 0) {
		photons_recoNeutralHadronIso_branch = tree->GetBranch(tree->GetAlias("photons_recoNeutralHadronIso"));
		if (photons_recoNeutralHadronIso_branch) {photons_recoNeutralHadronIso_branch->SetAddress(&photons_recoNeutralHadronIso_);}
	}
	photons_recoPhotonIso_branch = 0;
	if (tree->GetAlias("photons_recoPhotonIso") != 0) {
		photons_recoPhotonIso_branch = tree->GetBranch(tree->GetAlias("photons_recoPhotonIso"));
		if (photons_recoPhotonIso_branch) {photons_recoPhotonIso_branch->SetAddress(&photons_recoPhotonIso_);}
	}
	photons_sigmaEtaEta_branch = 0;
	if (tree->GetAlias("photons_sigmaEtaEta") != 0) {
		photons_sigmaEtaEta_branch = tree->GetBranch(tree->GetAlias("photons_sigmaEtaEta"));
		if (photons_sigmaEtaEta_branch) {photons_sigmaEtaEta_branch->SetAddress(&photons_sigmaEtaEta_);}
	}
	photons_sigmaIEtaIEta_branch = 0;
	if (tree->GetAlias("photons_sigmaIEtaIEta") != 0) {
		photons_sigmaIEtaIEta_branch = tree->GetBranch(tree->GetAlias("photons_sigmaIEtaIEta"));
		if (photons_sigmaIEtaIEta_branch) {photons_sigmaIEtaIEta_branch->SetAddress(&photons_sigmaIEtaIEta_);}
	}
	photons_tkIsoHollow03_branch = 0;
	if (tree->GetAlias("photons_tkIsoHollow03") != 0) {
		photons_tkIsoHollow03_branch = tree->GetBranch(tree->GetAlias("photons_tkIsoHollow03"));
		if (photons_tkIsoHollow03_branch) {photons_tkIsoHollow03_branch->SetAddress(&photons_tkIsoHollow03_);}
	}
	photons_tkIsoHollow04_branch = 0;
	if (tree->GetAlias("photons_tkIsoHollow04") != 0) {
		photons_tkIsoHollow04_branch = tree->GetBranch(tree->GetAlias("photons_tkIsoHollow04"));
		if (photons_tkIsoHollow04_branch) {photons_tkIsoHollow04_branch->SetAddress(&photons_tkIsoHollow04_);}
	}
	photons_tkIsoSolid03_branch = 0;
	if (tree->GetAlias("photons_tkIsoSolid03") != 0) {
		photons_tkIsoSolid03_branch = tree->GetBranch(tree->GetAlias("photons_tkIsoSolid03"));
		if (photons_tkIsoSolid03_branch) {photons_tkIsoSolid03_branch->SetAddress(&photons_tkIsoSolid03_);}
	}
	photons_tkIsoSolid04_branch = 0;
	if (tree->GetAlias("photons_tkIsoSolid04") != 0) {
		photons_tkIsoSolid04_branch = tree->GetBranch(tree->GetAlias("photons_tkIsoSolid04"));
		if (photons_tkIsoSolid04_branch) {photons_tkIsoSolid04_branch->SetAddress(&photons_tkIsoSolid04_);}
	}
	puInfo_trueNumInteractions_branch = 0;
	if (tree->GetAlias("puInfo_trueNumInteractions") != 0) {
		puInfo_trueNumInteractions_branch = tree->GetBranch(tree->GetAlias("puInfo_trueNumInteractions"));
		if (puInfo_trueNumInteractions_branch) {puInfo_trueNumInteractions_branch->SetAddress(&puInfo_trueNumInteractions_);}
	}
	convs_chi2_branch = 0;
	if (tree->GetAlias("convs_chi2") != 0) {
		convs_chi2_branch = tree->GetBranch(tree->GetAlias("convs_chi2"));
		if (convs_chi2_branch) {convs_chi2_branch->SetAddress(&convs_chi2_);}
	}
	convs_dl_branch = 0;
	if (tree->GetAlias("convs_dl") != 0) {
		convs_dl_branch = tree->GetBranch(tree->GetAlias("convs_dl"));
		if (convs_dl_branch) {convs_dl_branch->SetAddress(&convs_dl_);}
	}
	convs_ndof_branch = 0;
	if (tree->GetAlias("convs_ndof") != 0) {
		convs_ndof_branch = tree->GetBranch(tree->GetAlias("convs_ndof"));
		if (convs_ndof_branch) {convs_ndof_branch->SetAddress(&convs_ndof_);}
	}
	sparm_values_branch = 0;
	if (tree->GetAlias("sparm_values") != 0) {
		sparm_values_branch = tree->GetBranch(tree->GetAlias("sparm_values"));
		if (sparm_values_branch) {sparm_values_branch->SetAddress(&sparm_values_);}
	}
	svs_anglePV_branch = 0;
	if (tree->GetAlias("svs_anglePV") != 0) {
		svs_anglePV_branch = tree->GetBranch(tree->GetAlias("svs_anglePV"));
		if (svs_anglePV_branch) {svs_anglePV_branch->SetAddress(&svs_anglePV_);}
	}
	svs_chi2_branch = 0;
	if (tree->GetAlias("svs_chi2") != 0) {
		svs_chi2_branch = tree->GetBranch(tree->GetAlias("svs_chi2"));
		if (svs_chi2_branch) {svs_chi2_branch->SetAddress(&svs_chi2_);}
	}
	svs_dist3Dsig_branch = 0;
	if (tree->GetAlias("svs_dist3Dsig") != 0) {
		svs_dist3Dsig_branch = tree->GetBranch(tree->GetAlias("svs_dist3Dsig"));
		if (svs_dist3Dsig_branch) {svs_dist3Dsig_branch->SetAddress(&svs_dist3Dsig_);}
	}
	svs_dist3Dval_branch = 0;
	if (tree->GetAlias("svs_dist3Dval") != 0) {
		svs_dist3Dval_branch = tree->GetBranch(tree->GetAlias("svs_dist3Dval"));
		if (svs_dist3Dval_branch) {svs_dist3Dval_branch->SetAddress(&svs_dist3Dval_);}
	}
	svs_distXYsig_branch = 0;
	if (tree->GetAlias("svs_distXYsig") != 0) {
		svs_distXYsig_branch = tree->GetBranch(tree->GetAlias("svs_distXYsig"));
		if (svs_distXYsig_branch) {svs_distXYsig_branch->SetAddress(&svs_distXYsig_);}
	}
	svs_distXYval_branch = 0;
	if (tree->GetAlias("svs_distXYval") != 0) {
		svs_distXYval_branch = tree->GetBranch(tree->GetAlias("svs_distXYval"));
		if (svs_distXYval_branch) {svs_distXYval_branch->SetAddress(&svs_distXYval_);}
	}
	svs_ndof_branch = 0;
	if (tree->GetAlias("svs_ndof") != 0) {
		svs_ndof_branch = tree->GetBranch(tree->GetAlias("svs_ndof"));
		if (svs_ndof_branch) {svs_ndof_branch->SetAddress(&svs_ndof_);}
	}
	svs_prob_branch = 0;
	if (tree->GetAlias("svs_prob") != 0) {
		svs_prob_branch = tree->GetBranch(tree->GetAlias("svs_prob"));
		if (svs_prob_branch) {svs_prob_branch->SetAddress(&svs_prob_);}
	}
	svs_xError_branch = 0;
	if (tree->GetAlias("svs_xError") != 0) {
		svs_xError_branch = tree->GetBranch(tree->GetAlias("svs_xError"));
		if (svs_xError_branch) {svs_xError_branch->SetAddress(&svs_xError_);}
	}
	svs_yError_branch = 0;
	if (tree->GetAlias("svs_yError") != 0) {
		svs_yError_branch = tree->GetBranch(tree->GetAlias("svs_yError"));
		if (svs_yError_branch) {svs_yError_branch->SetAddress(&svs_yError_);}
	}
	svs_zError_branch = 0;
	if (tree->GetAlias("svs_zError") != 0) {
		svs_zError_branch = tree->GetBranch(tree->GetAlias("svs_zError"));
		if (svs_zError_branch) {svs_zError_branch->SetAddress(&svs_zError_);}
	}
	ak8jets_area_branch = 0;
	if (tree->GetAlias("ak8jets_area") != 0) {
		ak8jets_area_branch = tree->GetBranch(tree->GetAlias("ak8jets_area"));
		if (ak8jets_area_branch) {ak8jets_area_branch->SetAddress(&ak8jets_area_);}
	}
	ak8jets_filteredMass_branch = 0;
	if (tree->GetAlias("ak8jets_filteredMass") != 0) {
		ak8jets_filteredMass_branch = tree->GetBranch(tree->GetAlias("ak8jets_filteredMass"));
		if (ak8jets_filteredMass_branch) {ak8jets_filteredMass_branch->SetAddress(&ak8jets_filteredMass_);}
	}
	ak8jets_mass_branch = 0;
	if (tree->GetAlias("ak8jets_mass") != 0) {
		ak8jets_mass_branch = tree->GetBranch(tree->GetAlias("ak8jets_mass"));
		if (ak8jets_mass_branch) {ak8jets_mass_branch->SetAddress(&ak8jets_mass_);}
	}
	ak8jets_minMass_branch = 0;
	if (tree->GetAlias("ak8jets_minMass") != 0) {
		ak8jets_minMass_branch = tree->GetBranch(tree->GetAlias("ak8jets_minMass"));
		if (ak8jets_minMass_branch) {ak8jets_minMass_branch->SetAddress(&ak8jets_minMass_);}
	}
	ak8jets_nJettinessTau1_branch = 0;
	if (tree->GetAlias("ak8jets_nJettinessTau1") != 0) {
		ak8jets_nJettinessTau1_branch = tree->GetBranch(tree->GetAlias("ak8jets_nJettinessTau1"));
		if (ak8jets_nJettinessTau1_branch) {ak8jets_nJettinessTau1_branch->SetAddress(&ak8jets_nJettinessTau1_);}
	}
	ak8jets_nJettinessTau2_branch = 0;
	if (tree->GetAlias("ak8jets_nJettinessTau2") != 0) {
		ak8jets_nJettinessTau2_branch = tree->GetBranch(tree->GetAlias("ak8jets_nJettinessTau2"));
		if (ak8jets_nJettinessTau2_branch) {ak8jets_nJettinessTau2_branch->SetAddress(&ak8jets_nJettinessTau2_);}
	}
	ak8jets_nJettinessTau3_branch = 0;
	if (tree->GetAlias("ak8jets_nJettinessTau3") != 0) {
		ak8jets_nJettinessTau3_branch = tree->GetBranch(tree->GetAlias("ak8jets_nJettinessTau3"));
		if (ak8jets_nJettinessTau3_branch) {ak8jets_nJettinessTau3_branch->SetAddress(&ak8jets_nJettinessTau3_);}
	}
	ak8jets_prunedMass_branch = 0;
	if (tree->GetAlias("ak8jets_prunedMass") != 0) {
		ak8jets_prunedMass_branch = tree->GetBranch(tree->GetAlias("ak8jets_prunedMass"));
		if (ak8jets_prunedMass_branch) {ak8jets_prunedMass_branch->SetAddress(&ak8jets_prunedMass_);}
	}
	ak8jets_softdropMass_branch = 0;
	if (tree->GetAlias("ak8jets_softdropMass") != 0) {
		ak8jets_softdropMass_branch = tree->GetBranch(tree->GetAlias("ak8jets_softdropMass"));
		if (ak8jets_softdropMass_branch) {ak8jets_softdropMass_branch->SetAddress(&ak8jets_softdropMass_);}
	}
	ak8jets_topMass_branch = 0;
	if (tree->GetAlias("ak8jets_topMass") != 0) {
		ak8jets_topMass_branch = tree->GetBranch(tree->GetAlias("ak8jets_topMass"));
		if (ak8jets_topMass_branch) {ak8jets_topMass_branch->SetAddress(&ak8jets_topMass_);}
	}
	ak8jets_trimmedMass_branch = 0;
	if (tree->GetAlias("ak8jets_trimmedMass") != 0) {
		ak8jets_trimmedMass_branch = tree->GetBranch(tree->GetAlias("ak8jets_trimmedMass"));
		if (ak8jets_trimmedMass_branch) {ak8jets_trimmedMass_branch->SetAddress(&ak8jets_trimmedMass_);}
	}
	ak8jets_undoJEC_branch = 0;
	if (tree->GetAlias("ak8jets_undoJEC") != 0) {
		ak8jets_undoJEC_branch = tree->GetBranch(tree->GetAlias("ak8jets_undoJEC"));
		if (ak8jets_undoJEC_branch) {ak8jets_undoJEC_branch->SetAddress(&ak8jets_undoJEC_);}
	}
	vtxs_chi2_branch = 0;
	if (tree->GetAlias("vtxs_chi2") != 0) {
		vtxs_chi2_branch = tree->GetBranch(tree->GetAlias("vtxs_chi2"));
		if (vtxs_chi2_branch) {vtxs_chi2_branch->SetAddress(&vtxs_chi2_);}
	}
	vtxs_ndof_branch = 0;
	if (tree->GetAlias("vtxs_ndof") != 0) {
		vtxs_ndof_branch = tree->GetBranch(tree->GetAlias("vtxs_ndof"));
		if (vtxs_ndof_branch) {vtxs_ndof_branch->SetAddress(&vtxs_ndof_);}
	}
	vtxs_score_branch = 0;
	if (tree->GetAlias("vtxs_score") != 0) {
		vtxs_score_branch = tree->GetBranch(tree->GetAlias("vtxs_score"));
		if (vtxs_score_branch) {vtxs_score_branch->SetAddress(&vtxs_score_);}
	}
	vtxs_xError_branch = 0;
	if (tree->GetAlias("vtxs_xError") != 0) {
		vtxs_xError_branch = tree->GetBranch(tree->GetAlias("vtxs_xError"));
		if (vtxs_xError_branch) {vtxs_xError_branch->SetAddress(&vtxs_xError_);}
	}
	vtxs_yError_branch = 0;
	if (tree->GetAlias("vtxs_yError") != 0) {
		vtxs_yError_branch = tree->GetBranch(tree->GetAlias("vtxs_yError"));
		if (vtxs_yError_branch) {vtxs_yError_branch->SetAddress(&vtxs_yError_);}
	}
	vtxs_zError_branch = 0;
	if (tree->GetAlias("vtxs_zError") != 0) {
		vtxs_zError_branch = tree->GetBranch(tree->GetAlias("vtxs_zError"));
		if (vtxs_zError_branch) {vtxs_zError_branch->SetAddress(&vtxs_zError_);}
	}
	pfjets_nonCHS_bDiscriminators_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_bDiscriminators") != 0) {
		pfjets_nonCHS_bDiscriminators_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_bDiscriminators"));
		if (pfjets_nonCHS_bDiscriminators_branch) {pfjets_nonCHS_bDiscriminators_branch->SetAddress(&pfjets_nonCHS_bDiscriminators_);}
	}
	mus_stationShowerDeltaR_branch = 0;
	if (tree->GetAlias("mus_stationShowerDeltaR") != 0) {
		mus_stationShowerDeltaR_branch = tree->GetBranch(tree->GetAlias("mus_stationShowerDeltaR"));
		if (mus_stationShowerDeltaR_branch) {mus_stationShowerDeltaR_branch->SetAddress(&mus_stationShowerDeltaR_);}
	}
	mus_stationShowerSizeT_branch = 0;
	if (tree->GetAlias("mus_stationShowerSizeT") != 0) {
		mus_stationShowerSizeT_branch = tree->GetBranch(tree->GetAlias("mus_stationShowerSizeT"));
		if (mus_stationShowerSizeT_branch) {mus_stationShowerSizeT_branch->SetAddress(&mus_stationShowerSizeT_);}
	}
	pfjets_bDiscriminators_branch = 0;
	if (tree->GetAlias("pfjets_bDiscriminators") != 0) {
		pfjets_bDiscriminators_branch = tree->GetBranch(tree->GetAlias("pfjets_bDiscriminators"));
		if (pfjets_bDiscriminators_branch) {pfjets_bDiscriminators_branch->SetAddress(&pfjets_bDiscriminators_);}
	}
	pfjets_puppi_bDiscriminators_branch = 0;
	if (tree->GetAlias("pfjets_puppi_bDiscriminators") != 0) {
		pfjets_puppi_bDiscriminators_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_bDiscriminators"));
		if (pfjets_puppi_bDiscriminators_branch) {pfjets_puppi_bDiscriminators_branch->SetAddress(&pfjets_puppi_bDiscriminators_);}
	}
	taus_pf_IDs_branch = 0;
	if (tree->GetAlias("taus_pf_IDs") != 0) {
		taus_pf_IDs_branch = tree->GetBranch(tree->GetAlias("taus_pf_IDs"));
		if (taus_pf_IDs_branch) {taus_pf_IDs_branch->SetAddress(&taus_pf_IDs_);}
	}
	puInfo_instLumi_branch = 0;
	if (tree->GetAlias("puInfo_instLumi") != 0) {
		puInfo_instLumi_branch = tree->GetBranch(tree->GetAlias("puInfo_instLumi"));
		if (puInfo_instLumi_branch) {puInfo_instLumi_branch->SetAddress(&puInfo_instLumi_);}
	}
	vtxs_covMatrix_branch = 0;
	if (tree->GetAlias("vtxs_covMatrix") != 0) {
		vtxs_covMatrix_branch = tree->GetBranch(tree->GetAlias("vtxs_covMatrix"));
		if (vtxs_covMatrix_branch) {vtxs_covMatrix_branch->SetAddress(&vtxs_covMatrix_);}
	}
	evt_bsType_branch = 0;
	if (tree->GetAlias("evt_bsType") != 0) {
		evt_bsType_branch = tree->GetBranch(tree->GetAlias("evt_bsType"));
		if (evt_bsType_branch) {evt_bsType_branch->SetAddress(&evt_bsType_);}
	}
	evt_bunchCrossing_branch = 0;
	if (tree->GetAlias("evt_bunchCrossing") != 0) {
		evt_bunchCrossing_branch = tree->GetBranch(tree->GetAlias("evt_bunchCrossing"));
		if (evt_bunchCrossing_branch) {evt_bunchCrossing_branch->SetAddress(&evt_bunchCrossing_);}
	}
	evt_experimentType_branch = 0;
	if (tree->GetAlias("evt_experimentType") != 0) {
		evt_experimentType_branch = tree->GetBranch(tree->GetAlias("evt_experimentType"));
		if (evt_experimentType_branch) {evt_experimentType_branch->SetAddress(&evt_experimentType_);}
	}
	evt_isRealData_branch = 0;
	if (tree->GetAlias("evt_isRealData") != 0) {
		evt_isRealData_branch = tree->GetBranch(tree->GetAlias("evt_isRealData"));
		if (evt_isRealData_branch) {evt_isRealData_branch->SetAddress(&evt_isRealData_);}
	}
	evt_orbitNumber_branch = 0;
	if (tree->GetAlias("evt_orbitNumber") != 0) {
		evt_orbitNumber_branch = tree->GetBranch(tree->GetAlias("evt_orbitNumber"));
		if (evt_orbitNumber_branch) {evt_orbitNumber_branch->SetAddress(&evt_orbitNumber_);}
	}
	evt_storeNumber_branch = 0;
	if (tree->GetAlias("evt_storeNumber") != 0) {
		evt_storeNumber_branch = tree->GetBranch(tree->GetAlias("evt_storeNumber"));
		if (evt_storeNumber_branch) {evt_storeNumber_branch->SetAddress(&evt_storeNumber_);}
	}
	hcalnoise_GetRecHitCount_branch = 0;
	if (tree->GetAlias("hcalnoise_GetRecHitCount") != 0) {
		hcalnoise_GetRecHitCount_branch = tree->GetBranch(tree->GetAlias("hcalnoise_GetRecHitCount"));
		if (hcalnoise_GetRecHitCount_branch) {hcalnoise_GetRecHitCount_branch->SetAddress(&hcalnoise_GetRecHitCount_);}
	}
	hcalnoise_GetRecHitCount15_branch = 0;
	if (tree->GetAlias("hcalnoise_GetRecHitCount15") != 0) {
		hcalnoise_GetRecHitCount15_branch = tree->GetBranch(tree->GetAlias("hcalnoise_GetRecHitCount15"));
		if (hcalnoise_GetRecHitCount15_branch) {hcalnoise_GetRecHitCount15_branch->SetAddress(&hcalnoise_GetRecHitCount15_);}
	}
	hcalnoise_maxHPDHits_branch = 0;
	if (tree->GetAlias("hcalnoise_maxHPDHits") != 0) {
		hcalnoise_maxHPDHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxHPDHits"));
		if (hcalnoise_maxHPDHits_branch) {hcalnoise_maxHPDHits_branch->SetAddress(&hcalnoise_maxHPDHits_);}
	}
	hcalnoise_maxHPDNoOtherHits_branch = 0;
	if (tree->GetAlias("hcalnoise_maxHPDNoOtherHits") != 0) {
		hcalnoise_maxHPDNoOtherHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxHPDNoOtherHits"));
		if (hcalnoise_maxHPDNoOtherHits_branch) {hcalnoise_maxHPDNoOtherHits_branch->SetAddress(&hcalnoise_maxHPDNoOtherHits_);}
	}
	hcalnoise_maxRBXHits_branch = 0;
	if (tree->GetAlias("hcalnoise_maxRBXHits") != 0) {
		hcalnoise_maxRBXHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxRBXHits"));
		if (hcalnoise_maxRBXHits_branch) {hcalnoise_maxRBXHits_branch->SetAddress(&hcalnoise_maxRBXHits_);}
	}
	hcalnoise_maxZeros_branch = 0;
	if (tree->GetAlias("hcalnoise_maxZeros") != 0) {
		hcalnoise_maxZeros_branch = tree->GetBranch(tree->GetAlias("hcalnoise_maxZeros"));
		if (hcalnoise_maxZeros_branch) {hcalnoise_maxZeros_branch->SetAddress(&hcalnoise_maxZeros_);}
	}
	hcalnoise_noiseFilterStatus_branch = 0;
	if (tree->GetAlias("hcalnoise_noiseFilterStatus") != 0) {
		hcalnoise_noiseFilterStatus_branch = tree->GetBranch(tree->GetAlias("hcalnoise_noiseFilterStatus"));
		if (hcalnoise_noiseFilterStatus_branch) {hcalnoise_noiseFilterStatus_branch->SetAddress(&hcalnoise_noiseFilterStatus_);}
	}
	hcalnoise_noiseType_branch = 0;
	if (tree->GetAlias("hcalnoise_noiseType") != 0) {
		hcalnoise_noiseType_branch = tree->GetBranch(tree->GetAlias("hcalnoise_noiseType"));
		if (hcalnoise_noiseType_branch) {hcalnoise_noiseType_branch->SetAddress(&hcalnoise_noiseType_);}
	}
	hcalnoise_num10GeVHits_branch = 0;
	if (tree->GetAlias("hcalnoise_num10GeVHits") != 0) {
		hcalnoise_num10GeVHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_num10GeVHits"));
		if (hcalnoise_num10GeVHits_branch) {hcalnoise_num10GeVHits_branch->SetAddress(&hcalnoise_num10GeVHits_);}
	}
	hcalnoise_num25GeVHits_branch = 0;
	if (tree->GetAlias("hcalnoise_num25GeVHits") != 0) {
		hcalnoise_num25GeVHits_branch = tree->GetBranch(tree->GetAlias("hcalnoise_num25GeVHits"));
		if (hcalnoise_num25GeVHits_branch) {hcalnoise_num25GeVHits_branch->SetAddress(&hcalnoise_num25GeVHits_);}
	}
	hcalnoise_numFlatNoiseChannels_branch = 0;
	if (tree->GetAlias("hcalnoise_numFlatNoiseChannels") != 0) {
		hcalnoise_numFlatNoiseChannels_branch = tree->GetBranch(tree->GetAlias("hcalnoise_numFlatNoiseChannels"));
		if (hcalnoise_numFlatNoiseChannels_branch) {hcalnoise_numFlatNoiseChannels_branch->SetAddress(&hcalnoise_numFlatNoiseChannels_);}
	}
	hcalnoise_numIsolatedNoiseChannels_branch = 0;
	if (tree->GetAlias("hcalnoise_numIsolatedNoiseChannels") != 0) {
		hcalnoise_numIsolatedNoiseChannels_branch = tree->GetBranch(tree->GetAlias("hcalnoise_numIsolatedNoiseChannels"));
		if (hcalnoise_numIsolatedNoiseChannels_branch) {hcalnoise_numIsolatedNoiseChannels_branch->SetAddress(&hcalnoise_numIsolatedNoiseChannels_);}
	}
	hcalnoise_numProblematicRBXs_branch = 0;
	if (tree->GetAlias("hcalnoise_numProblematicRBXs") != 0) {
		hcalnoise_numProblematicRBXs_branch = tree->GetBranch(tree->GetAlias("hcalnoise_numProblematicRBXs"));
		if (hcalnoise_numProblematicRBXs_branch) {hcalnoise_numProblematicRBXs_branch->SetAddress(&hcalnoise_numProblematicRBXs_);}
	}
	hcalnoise_numSpikeNoiseChannels_branch = 0;
	if (tree->GetAlias("hcalnoise_numSpikeNoiseChannels") != 0) {
		hcalnoise_numSpikeNoiseChannels_branch = tree->GetBranch(tree->GetAlias("hcalnoise_numSpikeNoiseChannels"));
		if (hcalnoise_numSpikeNoiseChannels_branch) {hcalnoise_numSpikeNoiseChannels_branch->SetAddress(&hcalnoise_numSpikeNoiseChannels_);}
	}
	hcalnoise_numTS4TS5NoiseChannels_branch = 0;
	if (tree->GetAlias("hcalnoise_numTS4TS5NoiseChannels") != 0) {
		hcalnoise_numTS4TS5NoiseChannels_branch = tree->GetBranch(tree->GetAlias("hcalnoise_numTS4TS5NoiseChannels"));
		if (hcalnoise_numTS4TS5NoiseChannels_branch) {hcalnoise_numTS4TS5NoiseChannels_branch->SetAddress(&hcalnoise_numTS4TS5NoiseChannels_);}
	}
	hcalnoise_numTriangleNoiseChannels_branch = 0;
	if (tree->GetAlias("hcalnoise_numTriangleNoiseChannels") != 0) {
		hcalnoise_numTriangleNoiseChannels_branch = tree->GetBranch(tree->GetAlias("hcalnoise_numTriangleNoiseChannels"));
		if (hcalnoise_numTriangleNoiseChannels_branch) {hcalnoise_numTriangleNoiseChannels_branch->SetAddress(&hcalnoise_numTriangleNoiseChannels_);}
	}
	hcalnoise_passHighLevelNoiseFilter_branch = 0;
	if (tree->GetAlias("hcalnoise_passHighLevelNoiseFilter") != 0) {
		hcalnoise_passHighLevelNoiseFilter_branch = tree->GetBranch(tree->GetAlias("hcalnoise_passHighLevelNoiseFilter"));
		if (hcalnoise_passHighLevelNoiseFilter_branch) {hcalnoise_passHighLevelNoiseFilter_branch->SetAddress(&hcalnoise_passHighLevelNoiseFilter_);}
	}
	hcalnoise_passLooseNoiseFilter_branch = 0;
	if (tree->GetAlias("hcalnoise_passLooseNoiseFilter") != 0) {
		hcalnoise_passLooseNoiseFilter_branch = tree->GetBranch(tree->GetAlias("hcalnoise_passLooseNoiseFilter"));
		if (hcalnoise_passLooseNoiseFilter_branch) {hcalnoise_passLooseNoiseFilter_branch->SetAddress(&hcalnoise_passLooseNoiseFilter_);}
	}
	hcalnoise_passTightNoiseFilter_branch = 0;
	if (tree->GetAlias("hcalnoise_passTightNoiseFilter") != 0) {
		hcalnoise_passTightNoiseFilter_branch = tree->GetBranch(tree->GetAlias("hcalnoise_passTightNoiseFilter"));
		if (hcalnoise_passTightNoiseFilter_branch) {hcalnoise_passTightNoiseFilter_branch->SetAddress(&hcalnoise_passTightNoiseFilter_);}
	}
	pdfinfo_id1_branch = 0;
	if (tree->GetAlias("pdfinfo_id1") != 0) {
		pdfinfo_id1_branch = tree->GetBranch(tree->GetAlias("pdfinfo_id1"));
		if (pdfinfo_id1_branch) {pdfinfo_id1_branch->SetAddress(&pdfinfo_id1_);}
	}
	pdfinfo_id2_branch = 0;
	if (tree->GetAlias("pdfinfo_id2") != 0) {
		pdfinfo_id2_branch = tree->GetBranch(tree->GetAlias("pdfinfo_id2"));
		if (pdfinfo_id2_branch) {pdfinfo_id2_branch->SetAddress(&pdfinfo_id2_);}
	}
	sparm_subProcessId_branch = 0;
	if (tree->GetAlias("sparm_subProcessId") != 0) {
		sparm_subProcessId_branch = tree->GetBranch(tree->GetAlias("sparm_subProcessId"));
		if (sparm_subProcessId_branch) {sparm_subProcessId_branch->SetAddress(&sparm_subProcessId_);}
	}
	pfjets_nonCHS_chargedHadronMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_chargedHadronMultiplicity") != 0) {
		pfjets_nonCHS_chargedHadronMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_chargedHadronMultiplicity"));
		if (pfjets_nonCHS_chargedHadronMultiplicity_branch) {pfjets_nonCHS_chargedHadronMultiplicity_branch->SetAddress(&pfjets_nonCHS_chargedHadronMultiplicity_);}
	}
	pfjets_nonCHS_chargedMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_chargedMultiplicity") != 0) {
		pfjets_nonCHS_chargedMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_chargedMultiplicity"));
		if (pfjets_nonCHS_chargedMultiplicity_branch) {pfjets_nonCHS_chargedMultiplicity_branch->SetAddress(&pfjets_nonCHS_chargedMultiplicity_);}
	}
	pfjets_nonCHS_electronMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_electronMultiplicity") != 0) {
		pfjets_nonCHS_electronMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_electronMultiplicity"));
		if (pfjets_nonCHS_electronMultiplicity_branch) {pfjets_nonCHS_electronMultiplicity_branch->SetAddress(&pfjets_nonCHS_electronMultiplicity_);}
	}
	pfjets_nonCHS_muonMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_muonMultiplicity") != 0) {
		pfjets_nonCHS_muonMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_muonMultiplicity"));
		if (pfjets_nonCHS_muonMultiplicity_branch) {pfjets_nonCHS_muonMultiplicity_branch->SetAddress(&pfjets_nonCHS_muonMultiplicity_);}
	}
	pfjets_nonCHS_neutralHadronMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_neutralHadronMultiplicity") != 0) {
		pfjets_nonCHS_neutralHadronMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_neutralHadronMultiplicity"));
		if (pfjets_nonCHS_neutralHadronMultiplicity_branch) {pfjets_nonCHS_neutralHadronMultiplicity_branch->SetAddress(&pfjets_nonCHS_neutralHadronMultiplicity_);}
	}
	pfjets_nonCHS_neutralMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_neutralMultiplicity") != 0) {
		pfjets_nonCHS_neutralMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_neutralMultiplicity"));
		if (pfjets_nonCHS_neutralMultiplicity_branch) {pfjets_nonCHS_neutralMultiplicity_branch->SetAddress(&pfjets_nonCHS_neutralMultiplicity_);}
	}
	pfjets_nonCHS_partonFlavour_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_partonFlavour") != 0) {
		pfjets_nonCHS_partonFlavour_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_partonFlavour"));
		if (pfjets_nonCHS_partonFlavour_branch) {pfjets_nonCHS_partonFlavour_branch->SetAddress(&pfjets_nonCHS_partonFlavour_);}
	}
	pfjets_nonCHS_photonMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_photonMultiplicity") != 0) {
		pfjets_nonCHS_photonMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_photonMultiplicity"));
		if (pfjets_nonCHS_photonMultiplicity_branch) {pfjets_nonCHS_photonMultiplicity_branch->SetAddress(&pfjets_nonCHS_photonMultiplicity_);}
	}
	ak8jets_mc_id_branch = 0;
	if (tree->GetAlias("ak8jets_mc_id") != 0) {
		ak8jets_mc_id_branch = tree->GetBranch(tree->GetAlias("ak8jets_mc_id"));
		if (ak8jets_mc_id_branch) {ak8jets_mc_id_branch->SetAddress(&ak8jets_mc_id_);}
	}
	els_mc3_id_branch = 0;
	if (tree->GetAlias("els_mc3_id") != 0) {
		els_mc3_id_branch = tree->GetBranch(tree->GetAlias("els_mc3_id"));
		if (els_mc3_id_branch) {els_mc3_id_branch->SetAddress(&els_mc3_id_);}
	}
	els_mc3idx_branch = 0;
	if (tree->GetAlias("els_mc3idx") != 0) {
		els_mc3idx_branch = tree->GetBranch(tree->GetAlias("els_mc3idx"));
		if (els_mc3idx_branch) {els_mc3idx_branch->SetAddress(&els_mc3idx_);}
	}
	els_mc3_motherid_branch = 0;
	if (tree->GetAlias("els_mc3_motherid") != 0) {
		els_mc3_motherid_branch = tree->GetBranch(tree->GetAlias("els_mc3_motherid"));
		if (els_mc3_motherid_branch) {els_mc3_motherid_branch->SetAddress(&els_mc3_motherid_);}
	}
	els_mc3_motheridx_branch = 0;
	if (tree->GetAlias("els_mc3_motheridx") != 0) {
		els_mc3_motheridx_branch = tree->GetBranch(tree->GetAlias("els_mc3_motheridx"));
		if (els_mc3_motheridx_branch) {els_mc3_motheridx_branch->SetAddress(&els_mc3_motheridx_);}
	}
	els_mc_id_branch = 0;
	if (tree->GetAlias("els_mc_id") != 0) {
		els_mc_id_branch = tree->GetBranch(tree->GetAlias("els_mc_id"));
		if (els_mc_id_branch) {els_mc_id_branch->SetAddress(&els_mc_id_);}
	}
	els_mcidx_branch = 0;
	if (tree->GetAlias("els_mcidx") != 0) {
		els_mcidx_branch = tree->GetBranch(tree->GetAlias("els_mcidx"));
		if (els_mcidx_branch) {els_mcidx_branch->SetAddress(&els_mcidx_);}
	}
	els_mc_motherid_branch = 0;
	if (tree->GetAlias("els_mc_motherid") != 0) {
		els_mc_motherid_branch = tree->GetBranch(tree->GetAlias("els_mc_motherid"));
		if (els_mc_motherid_branch) {els_mc_motherid_branch->SetAddress(&els_mc_motherid_);}
	}
	mus_mc3_id_branch = 0;
	if (tree->GetAlias("mus_mc3_id") != 0) {
		mus_mc3_id_branch = tree->GetBranch(tree->GetAlias("mus_mc3_id"));
		if (mus_mc3_id_branch) {mus_mc3_id_branch->SetAddress(&mus_mc3_id_);}
	}
	mus_mc3idx_branch = 0;
	if (tree->GetAlias("mus_mc3idx") != 0) {
		mus_mc3idx_branch = tree->GetBranch(tree->GetAlias("mus_mc3idx"));
		if (mus_mc3idx_branch) {mus_mc3idx_branch->SetAddress(&mus_mc3idx_);}
	}
	mus_mc3_motherid_branch = 0;
	if (tree->GetAlias("mus_mc3_motherid") != 0) {
		mus_mc3_motherid_branch = tree->GetBranch(tree->GetAlias("mus_mc3_motherid"));
		if (mus_mc3_motherid_branch) {mus_mc3_motherid_branch->SetAddress(&mus_mc3_motherid_);}
	}
	mus_mc3_motheridx_branch = 0;
	if (tree->GetAlias("mus_mc3_motheridx") != 0) {
		mus_mc3_motheridx_branch = tree->GetBranch(tree->GetAlias("mus_mc3_motheridx"));
		if (mus_mc3_motheridx_branch) {mus_mc3_motheridx_branch->SetAddress(&mus_mc3_motheridx_);}
	}
	mus_mc_id_branch = 0;
	if (tree->GetAlias("mus_mc_id") != 0) {
		mus_mc_id_branch = tree->GetBranch(tree->GetAlias("mus_mc_id"));
		if (mus_mc_id_branch) {mus_mc_id_branch->SetAddress(&mus_mc_id_);}
	}
	mus_mcidx_branch = 0;
	if (tree->GetAlias("mus_mcidx") != 0) {
		mus_mcidx_branch = tree->GetBranch(tree->GetAlias("mus_mcidx"));
		if (mus_mcidx_branch) {mus_mcidx_branch->SetAddress(&mus_mcidx_);}
	}
	mus_mc_motherid_branch = 0;
	if (tree->GetAlias("mus_mc_motherid") != 0) {
		mus_mc_motherid_branch = tree->GetBranch(tree->GetAlias("mus_mc_motherid"));
		if (mus_mc_motherid_branch) {mus_mc_motherid_branch->SetAddress(&mus_mc_motherid_);}
	}
	pfjets_mc3_id_branch = 0;
	if (tree->GetAlias("pfjets_mc3_id") != 0) {
		pfjets_mc3_id_branch = tree->GetBranch(tree->GetAlias("pfjets_mc3_id"));
		if (pfjets_mc3_id_branch) {pfjets_mc3_id_branch->SetAddress(&pfjets_mc3_id_);}
	}
	pfjets_mc3idx_branch = 0;
	if (tree->GetAlias("pfjets_mc3idx") != 0) {
		pfjets_mc3idx_branch = tree->GetBranch(tree->GetAlias("pfjets_mc3idx"));
		if (pfjets_mc3idx_branch) {pfjets_mc3idx_branch->SetAddress(&pfjets_mc3idx_);}
	}
	pfjets_mc_gpidx_branch = 0;
	if (tree->GetAlias("pfjets_mc_gpidx") != 0) {
		pfjets_mc_gpidx_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_gpidx"));
		if (pfjets_mc_gpidx_branch) {pfjets_mc_gpidx_branch->SetAddress(&pfjets_mc_gpidx_);}
	}
	pfjets_mc_id_branch = 0;
	if (tree->GetAlias("pfjets_mc_id") != 0) {
		pfjets_mc_id_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_id"));
		if (pfjets_mc_id_branch) {pfjets_mc_id_branch->SetAddress(&pfjets_mc_id_);}
	}
	pfjets_mcidx_branch = 0;
	if (tree->GetAlias("pfjets_mcidx") != 0) {
		pfjets_mcidx_branch = tree->GetBranch(tree->GetAlias("pfjets_mcidx"));
		if (pfjets_mcidx_branch) {pfjets_mcidx_branch->SetAddress(&pfjets_mcidx_);}
	}
	pfjets_mc_motherid_branch = 0;
	if (tree->GetAlias("pfjets_mc_motherid") != 0) {
		pfjets_mc_motherid_branch = tree->GetBranch(tree->GetAlias("pfjets_mc_motherid"));
		if (pfjets_mc_motherid_branch) {pfjets_mc_motherid_branch->SetAddress(&pfjets_mc_motherid_);}
	}
	photons_mc3_id_branch = 0;
	if (tree->GetAlias("photons_mc3_id") != 0) {
		photons_mc3_id_branch = tree->GetBranch(tree->GetAlias("photons_mc3_id"));
		if (photons_mc3_id_branch) {photons_mc3_id_branch->SetAddress(&photons_mc3_id_);}
	}
	photons_mc3idx_branch = 0;
	if (tree->GetAlias("photons_mc3idx") != 0) {
		photons_mc3idx_branch = tree->GetBranch(tree->GetAlias("photons_mc3idx"));
		if (photons_mc3idx_branch) {photons_mc3idx_branch->SetAddress(&photons_mc3idx_);}
	}
	photons_mc3_motherid_branch = 0;
	if (tree->GetAlias("photons_mc3_motherid") != 0) {
		photons_mc3_motherid_branch = tree->GetBranch(tree->GetAlias("photons_mc3_motherid"));
		if (photons_mc3_motherid_branch) {photons_mc3_motherid_branch->SetAddress(&photons_mc3_motherid_);}
	}
	photons_mc3_motheridx_branch = 0;
	if (tree->GetAlias("photons_mc3_motheridx") != 0) {
		photons_mc3_motheridx_branch = tree->GetBranch(tree->GetAlias("photons_mc3_motheridx"));
		if (photons_mc3_motheridx_branch) {photons_mc3_motheridx_branch->SetAddress(&photons_mc3_motheridx_);}
	}
	photons_mc_id_branch = 0;
	if (tree->GetAlias("photons_mc_id") != 0) {
		photons_mc_id_branch = tree->GetBranch(tree->GetAlias("photons_mc_id"));
		if (photons_mc_id_branch) {photons_mc_id_branch->SetAddress(&photons_mc_id_);}
	}
	photons_mcidx_branch = 0;
	if (tree->GetAlias("photons_mcidx") != 0) {
		photons_mcidx_branch = tree->GetBranch(tree->GetAlias("photons_mcidx"));
		if (photons_mcidx_branch) {photons_mcidx_branch->SetAddress(&photons_mcidx_);}
	}
	photons_mc_motherid_branch = 0;
	if (tree->GetAlias("photons_mc_motherid") != 0) {
		photons_mc_motherid_branch = tree->GetBranch(tree->GetAlias("photons_mc_motherid"));
		if (photons_mc_motherid_branch) {photons_mc_motherid_branch->SetAddress(&photons_mc_motherid_);}
	}
	els_category_branch = 0;
	if (tree->GetAlias("els_category") != 0) {
		els_category_branch = tree->GetBranch(tree->GetAlias("els_category"));
		if (els_category_branch) {els_category_branch->SetAddress(&els_category_);}
	}
	els_charge_branch = 0;
	if (tree->GetAlias("els_charge") != 0) {
		els_charge_branch = tree->GetBranch(tree->GetAlias("els_charge"));
		if (els_charge_branch) {els_charge_branch->SetAddress(&els_charge_);}
	}
	els_ckf_charge_branch = 0;
	if (tree->GetAlias("els_ckf_charge") != 0) {
		els_ckf_charge_branch = tree->GetBranch(tree->GetAlias("els_ckf_charge"));
		if (els_ckf_charge_branch) {els_ckf_charge_branch->SetAddress(&els_ckf_charge_);}
	}
	els_ckf_laywithmeas_branch = 0;
	if (tree->GetAlias("els_ckf_laywithmeas") != 0) {
		els_ckf_laywithmeas_branch = tree->GetBranch(tree->GetAlias("els_ckf_laywithmeas"));
		if (els_ckf_laywithmeas_branch) {els_ckf_laywithmeas_branch->SetAddress(&els_ckf_laywithmeas_);}
	}
	els_class_branch = 0;
	if (tree->GetAlias("els_class") != 0) {
		els_class_branch = tree->GetBranch(tree->GetAlias("els_class"));
		if (els_class_branch) {els_class_branch->SetAddress(&els_class_);}
	}
	els_exp_innerlayers_branch = 0;
	if (tree->GetAlias("els_exp_innerlayers") != 0) {
		els_exp_innerlayers_branch = tree->GetBranch(tree->GetAlias("els_exp_innerlayers"));
		if (els_exp_innerlayers_branch) {els_exp_innerlayers_branch->SetAddress(&els_exp_innerlayers_);}
	}
	els_exp_outerlayers_branch = 0;
	if (tree->GetAlias("els_exp_outerlayers") != 0) {
		els_exp_outerlayers_branch = tree->GetBranch(tree->GetAlias("els_exp_outerlayers"));
		if (els_exp_outerlayers_branch) {els_exp_outerlayers_branch->SetAddress(&els_exp_outerlayers_);}
	}
	els_fiduciality_branch = 0;
	if (tree->GetAlias("els_fiduciality") != 0) {
		els_fiduciality_branch = tree->GetBranch(tree->GetAlias("els_fiduciality"));
		if (els_fiduciality_branch) {els_fiduciality_branch->SetAddress(&els_fiduciality_);}
	}
	els_lostHits_branch = 0;
	if (tree->GetAlias("els_lostHits") != 0) {
		els_lostHits_branch = tree->GetBranch(tree->GetAlias("els_lostHits"));
		if (els_lostHits_branch) {els_lostHits_branch->SetAddress(&els_lostHits_);}
	}
	els_lost_pixelhits_branch = 0;
	if (tree->GetAlias("els_lost_pixelhits") != 0) {
		els_lost_pixelhits_branch = tree->GetBranch(tree->GetAlias("els_lost_pixelhits"));
		if (els_lost_pixelhits_branch) {els_lost_pixelhits_branch->SetAddress(&els_lost_pixelhits_);}
	}
	els_mc_patMatch_id_branch = 0;
	if (tree->GetAlias("els_mc_patMatch_id") != 0) {
		els_mc_patMatch_id_branch = tree->GetBranch(tree->GetAlias("els_mc_patMatch_id"));
		if (els_mc_patMatch_id_branch) {els_mc_patMatch_id_branch->SetAddress(&els_mc_patMatch_id_);}
	}
	els_nSeed_branch = 0;
	if (tree->GetAlias("els_nSeed") != 0) {
		els_nSeed_branch = tree->GetBranch(tree->GetAlias("els_nSeed"));
		if (els_nSeed_branch) {els_nSeed_branch->SetAddress(&els_nSeed_);}
	}
	els_nlayers_branch = 0;
	if (tree->GetAlias("els_nlayers") != 0) {
		els_nlayers_branch = tree->GetBranch(tree->GetAlias("els_nlayers"));
		if (els_nlayers_branch) {els_nlayers_branch->SetAddress(&els_nlayers_);}
	}
	els_nlayers3D_branch = 0;
	if (tree->GetAlias("els_nlayers3D") != 0) {
		els_nlayers3D_branch = tree->GetBranch(tree->GetAlias("els_nlayers3D"));
		if (els_nlayers3D_branch) {els_nlayers3D_branch->SetAddress(&els_nlayers3D_);}
	}
	els_nlayersLost_branch = 0;
	if (tree->GetAlias("els_nlayersLost") != 0) {
		els_nlayersLost_branch = tree->GetBranch(tree->GetAlias("els_nlayersLost"));
		if (els_nlayersLost_branch) {els_nlayersLost_branch->SetAddress(&els_nlayersLost_);}
	}
	els_sccharge_branch = 0;
	if (tree->GetAlias("els_sccharge") != 0) {
		els_sccharge_branch = tree->GetBranch(tree->GetAlias("els_sccharge"));
		if (els_sccharge_branch) {els_sccharge_branch->SetAddress(&els_sccharge_);}
	}
	els_trk_charge_branch = 0;
	if (tree->GetAlias("els_trk_charge") != 0) {
		els_trk_charge_branch = tree->GetBranch(tree->GetAlias("els_trk_charge"));
		if (els_trk_charge_branch) {els_trk_charge_branch->SetAddress(&els_trk_charge_);}
	}
	els_type_branch = 0;
	if (tree->GetAlias("els_type") != 0) {
		els_type_branch = tree->GetBranch(tree->GetAlias("els_type"));
		if (els_type_branch) {els_type_branch->SetAddress(&els_type_);}
	}
	els_validHits_branch = 0;
	if (tree->GetAlias("els_validHits") != 0) {
		els_validHits_branch = tree->GetBranch(tree->GetAlias("els_validHits"));
		if (els_validHits_branch) {els_validHits_branch->SetAddress(&els_validHits_);}
	}
	els_valid_pixelhits_branch = 0;
	if (tree->GetAlias("els_valid_pixelhits") != 0) {
		els_valid_pixelhits_branch = tree->GetBranch(tree->GetAlias("els_valid_pixelhits"));
		if (els_valid_pixelhits_branch) {els_valid_pixelhits_branch->SetAddress(&els_valid_pixelhits_);}
	}
	els_passLooseId_branch = 0;
	if (tree->GetAlias("els_passLooseId") != 0) {
		els_passLooseId_branch = tree->GetBranch(tree->GetAlias("els_passLooseId"));
		if (els_passLooseId_branch) {els_passLooseId_branch->SetAddress(&els_passLooseId_);}
	}
	els_passMediumId_branch = 0;
	if (tree->GetAlias("els_passMediumId") != 0) {
		els_passMediumId_branch = tree->GetBranch(tree->GetAlias("els_passMediumId"));
		if (els_passMediumId_branch) {els_passMediumId_branch->SetAddress(&els_passMediumId_);}
	}
	els_passTightId_branch = 0;
	if (tree->GetAlias("els_passTightId") != 0) {
		els_passTightId_branch = tree->GetBranch(tree->GetAlias("els_passTightId"));
		if (els_passTightId_branch) {els_passTightId_branch->SetAddress(&els_passTightId_);}
	}
	els_passVetoId_branch = 0;
	if (tree->GetAlias("els_passVetoId") != 0) {
		els_passVetoId_branch = tree->GetBranch(tree->GetAlias("els_passVetoId"));
		if (els_passVetoId_branch) {els_passVetoId_branch->SetAddress(&els_passVetoId_);}
	}
	genps_id_branch = 0;
	if (tree->GetAlias("genps_id") != 0) {
		genps_id_branch = tree->GetBranch(tree->GetAlias("genps_id"));
		if (genps_id_branch) {genps_id_branch->SetAddress(&genps_id_);}
	}
	genps_id_mother_branch = 0;
	if (tree->GetAlias("genps_id_mother") != 0) {
		genps_id_mother_branch = tree->GetBranch(tree->GetAlias("genps_id_mother"));
		if (genps_id_mother_branch) {genps_id_mother_branch->SetAddress(&genps_id_mother_);}
	}
	genps_id_simplegrandma_branch = 0;
	if (tree->GetAlias("genps_id_simplegrandma") != 0) {
		genps_id_simplegrandma_branch = tree->GetBranch(tree->GetAlias("genps_id_simplegrandma"));
		if (genps_id_simplegrandma_branch) {genps_id_simplegrandma_branch->SetAddress(&genps_id_simplegrandma_);}
	}
	genps_id_simplemother_branch = 0;
	if (tree->GetAlias("genps_id_simplemother") != 0) {
		genps_id_simplemother_branch = tree->GetBranch(tree->GetAlias("genps_id_simplemother"));
		if (genps_id_simplemother_branch) {genps_id_simplemother_branch->SetAddress(&genps_id_simplemother_);}
	}
	genps_idx_mother_branch = 0;
	if (tree->GetAlias("genps_idx_mother") != 0) {
		genps_idx_mother_branch = tree->GetBranch(tree->GetAlias("genps_idx_mother"));
		if (genps_idx_mother_branch) {genps_idx_mother_branch->SetAddress(&genps_idx_mother_);}
	}
	genps_idx_simplemother_branch = 0;
	if (tree->GetAlias("genps_idx_simplemother") != 0) {
		genps_idx_simplemother_branch = tree->GetBranch(tree->GetAlias("genps_idx_simplemother"));
		if (genps_idx_simplemother_branch) {genps_idx_simplemother_branch->SetAddress(&genps_idx_simplemother_);}
	}
	genps_status_branch = 0;
	if (tree->GetAlias("genps_status") != 0) {
		genps_status_branch = tree->GetBranch(tree->GetAlias("genps_status"));
		if (genps_status_branch) {genps_status_branch->SetAddress(&genps_status_);}
	}
	hyp_ll_charge_branch = 0;
	if (tree->GetAlias("hyp_ll_charge") != 0) {
		hyp_ll_charge_branch = tree->GetBranch(tree->GetAlias("hyp_ll_charge"));
		if (hyp_ll_charge_branch) {hyp_ll_charge_branch->SetAddress(&hyp_ll_charge_);}
	}
	hyp_ll_id_branch = 0;
	if (tree->GetAlias("hyp_ll_id") != 0) {
		hyp_ll_id_branch = tree->GetBranch(tree->GetAlias("hyp_ll_id"));
		if (hyp_ll_id_branch) {hyp_ll_id_branch->SetAddress(&hyp_ll_id_);}
	}
	hyp_ll_index_branch = 0;
	if (tree->GetAlias("hyp_ll_index") != 0) {
		hyp_ll_index_branch = tree->GetBranch(tree->GetAlias("hyp_ll_index"));
		if (hyp_ll_index_branch) {hyp_ll_index_branch->SetAddress(&hyp_ll_index_);}
	}
	hyp_lt_charge_branch = 0;
	if (tree->GetAlias("hyp_lt_charge") != 0) {
		hyp_lt_charge_branch = tree->GetBranch(tree->GetAlias("hyp_lt_charge"));
		if (hyp_lt_charge_branch) {hyp_lt_charge_branch->SetAddress(&hyp_lt_charge_);}
	}
	hyp_lt_id_branch = 0;
	if (tree->GetAlias("hyp_lt_id") != 0) {
		hyp_lt_id_branch = tree->GetBranch(tree->GetAlias("hyp_lt_id"));
		if (hyp_lt_id_branch) {hyp_lt_id_branch->SetAddress(&hyp_lt_id_);}
	}
	hyp_lt_index_branch = 0;
	if (tree->GetAlias("hyp_lt_index") != 0) {
		hyp_lt_index_branch = tree->GetBranch(tree->GetAlias("hyp_lt_index"));
		if (hyp_lt_index_branch) {hyp_lt_index_branch->SetAddress(&hyp_lt_index_);}
	}
	hyp_type_branch = 0;
	if (tree->GetAlias("hyp_type") != 0) {
		hyp_type_branch = tree->GetBranch(tree->GetAlias("hyp_type"));
		if (hyp_type_branch) {hyp_type_branch->SetAddress(&hyp_type_);}
	}
	isotracks_charge_branch = 0;
	if (tree->GetAlias("isotracks_charge") != 0) {
		isotracks_charge_branch = tree->GetBranch(tree->GetAlias("isotracks_charge"));
		if (isotracks_charge_branch) {isotracks_charge_branch->SetAddress(&isotracks_charge_);}
	}
	isotracks_particleId_branch = 0;
	if (tree->GetAlias("isotracks_particleId") != 0) {
		isotracks_particleId_branch = tree->GetBranch(tree->GetAlias("isotracks_particleId"));
		if (isotracks_particleId_branch) {isotracks_particleId_branch->SetAddress(&isotracks_particleId_);}
	}
	mus_algo_branch = 0;
	if (tree->GetAlias("mus_algo") != 0) {
		mus_algo_branch = tree->GetBranch(tree->GetAlias("mus_algo"));
		if (mus_algo_branch) {mus_algo_branch->SetAddress(&mus_algo_);}
	}
	mus_charge_branch = 0;
	if (tree->GetAlias("mus_charge") != 0) {
		mus_charge_branch = tree->GetBranch(tree->GetAlias("mus_charge"));
		if (mus_charge_branch) {mus_charge_branch->SetAddress(&mus_charge_);}
	}
	mus_ecal_rawId_branch = 0;
	if (tree->GetAlias("mus_ecal_rawId") != 0) {
		mus_ecal_rawId_branch = tree->GetBranch(tree->GetAlias("mus_ecal_rawId"));
		if (mus_ecal_rawId_branch) {mus_ecal_rawId_branch->SetAddress(&mus_ecal_rawId_);}
	}
	mus_exp_innerlayers_branch = 0;
	if (tree->GetAlias("mus_exp_innerlayers") != 0) {
		mus_exp_innerlayers_branch = tree->GetBranch(tree->GetAlias("mus_exp_innerlayers"));
		if (mus_exp_innerlayers_branch) {mus_exp_innerlayers_branch->SetAddress(&mus_exp_innerlayers_);}
	}
	mus_exp_outerlayers_branch = 0;
	if (tree->GetAlias("mus_exp_outerlayers") != 0) {
		mus_exp_outerlayers_branch = tree->GetBranch(tree->GetAlias("mus_exp_outerlayers"));
		if (mus_exp_outerlayers_branch) {mus_exp_outerlayers_branch->SetAddress(&mus_exp_outerlayers_);}
	}
	mus_gfit_algo_branch = 0;
	if (tree->GetAlias("mus_gfit_algo") != 0) {
		mus_gfit_algo_branch = tree->GetBranch(tree->GetAlias("mus_gfit_algo"));
		if (mus_gfit_algo_branch) {mus_gfit_algo_branch->SetAddress(&mus_gfit_algo_);}
	}
	mus_gfit_etaErr_branch = 0;
	if (tree->GetAlias("mus_gfit_etaErr") != 0) {
		mus_gfit_etaErr_branch = tree->GetBranch(tree->GetAlias("mus_gfit_etaErr"));
		if (mus_gfit_etaErr_branch) {mus_gfit_etaErr_branch->SetAddress(&mus_gfit_etaErr_);}
	}
	mus_gfit_exp_innerlayer_branch = 0;
	if (tree->GetAlias("mus_gfit_exp_innerlayer") != 0) {
		mus_gfit_exp_innerlayer_branch = tree->GetBranch(tree->GetAlias("mus_gfit_exp_innerlayer"));
		if (mus_gfit_exp_innerlayer_branch) {mus_gfit_exp_innerlayer_branch->SetAddress(&mus_gfit_exp_innerlayer_);}
	}
	mus_gfit_exp_outerlayer_branch = 0;
	if (tree->GetAlias("mus_gfit_exp_outerlayer") != 0) {
		mus_gfit_exp_outerlayer_branch = tree->GetBranch(tree->GetAlias("mus_gfit_exp_outerlayer"));
		if (mus_gfit_exp_outerlayer_branch) {mus_gfit_exp_outerlayer_branch->SetAddress(&mus_gfit_exp_outerlayer_);}
	}
	mus_gfit_lostHits_branch = 0;
	if (tree->GetAlias("mus_gfit_lostHits") != 0) {
		mus_gfit_lostHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_lostHits"));
		if (mus_gfit_lostHits_branch) {mus_gfit_lostHits_branch->SetAddress(&mus_gfit_lostHits_);}
	}
	mus_gfit_lostPixelHits_branch = 0;
	if (tree->GetAlias("mus_gfit_lostPixelHits") != 0) {
		mus_gfit_lostPixelHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_lostPixelHits"));
		if (mus_gfit_lostPixelHits_branch) {mus_gfit_lostPixelHits_branch->SetAddress(&mus_gfit_lostPixelHits_);}
	}
	mus_gfit_nlayers_branch = 0;
	if (tree->GetAlias("mus_gfit_nlayers") != 0) {
		mus_gfit_nlayers_branch = tree->GetBranch(tree->GetAlias("mus_gfit_nlayers"));
		if (mus_gfit_nlayers_branch) {mus_gfit_nlayers_branch->SetAddress(&mus_gfit_nlayers_);}
	}
	mus_gfit_nlayers3D_branch = 0;
	if (tree->GetAlias("mus_gfit_nlayers3D") != 0) {
		mus_gfit_nlayers3D_branch = tree->GetBranch(tree->GetAlias("mus_gfit_nlayers3D"));
		if (mus_gfit_nlayers3D_branch) {mus_gfit_nlayers3D_branch->SetAddress(&mus_gfit_nlayers3D_);}
	}
	mus_gfit_nlayersLost_branch = 0;
	if (tree->GetAlias("mus_gfit_nlayersLost") != 0) {
		mus_gfit_nlayersLost_branch = tree->GetBranch(tree->GetAlias("mus_gfit_nlayersLost"));
		if (mus_gfit_nlayersLost_branch) {mus_gfit_nlayersLost_branch->SetAddress(&mus_gfit_nlayersLost_);}
	}
	mus_gfit_phiErr_branch = 0;
	if (tree->GetAlias("mus_gfit_phiErr") != 0) {
		mus_gfit_phiErr_branch = tree->GetBranch(tree->GetAlias("mus_gfit_phiErr"));
		if (mus_gfit_phiErr_branch) {mus_gfit_phiErr_branch->SetAddress(&mus_gfit_phiErr_);}
	}
	mus_gfit_ptErr_branch = 0;
	if (tree->GetAlias("mus_gfit_ptErr") != 0) {
		mus_gfit_ptErr_branch = tree->GetBranch(tree->GetAlias("mus_gfit_ptErr"));
		if (mus_gfit_ptErr_branch) {mus_gfit_ptErr_branch->SetAddress(&mus_gfit_ptErr_);}
	}
	mus_gfit_qualityMask_branch = 0;
	if (tree->GetAlias("mus_gfit_qualityMask") != 0) {
		mus_gfit_qualityMask_branch = tree->GetBranch(tree->GetAlias("mus_gfit_qualityMask"));
		if (mus_gfit_qualityMask_branch) {mus_gfit_qualityMask_branch->SetAddress(&mus_gfit_qualityMask_);}
	}
	mus_gfit_trk_charge_branch = 0;
	if (tree->GetAlias("mus_gfit_trk_charge") != 0) {
		mus_gfit_trk_charge_branch = tree->GetBranch(tree->GetAlias("mus_gfit_trk_charge"));
		if (mus_gfit_trk_charge_branch) {mus_gfit_trk_charge_branch->SetAddress(&mus_gfit_trk_charge_);}
	}
	mus_gfit_validHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validHits") != 0) {
		mus_gfit_validHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validHits"));
		if (mus_gfit_validHits_branch) {mus_gfit_validHits_branch->SetAddress(&mus_gfit_validHits_);}
	}
	mus_gfit_validPixelHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validPixelHits") != 0) {
		mus_gfit_validPixelHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validPixelHits"));
		if (mus_gfit_validPixelHits_branch) {mus_gfit_validPixelHits_branch->SetAddress(&mus_gfit_validPixelHits_);}
	}
	mus_gfit_validSTAHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validSTAHits") != 0) {
		mus_gfit_validSTAHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validSTAHits"));
		if (mus_gfit_validSTAHits_branch) {mus_gfit_validSTAHits_branch->SetAddress(&mus_gfit_validSTAHits_);}
	}
	mus_gfit_validSiHits_branch = 0;
	if (tree->GetAlias("mus_gfit_validSiHits") != 0) {
		mus_gfit_validSiHits_branch = tree->GetBranch(tree->GetAlias("mus_gfit_validSiHits"));
		if (mus_gfit_validSiHits_branch) {mus_gfit_validSiHits_branch->SetAddress(&mus_gfit_validSiHits_);}
	}
	mus_goodmask_branch = 0;
	if (tree->GetAlias("mus_goodmask") != 0) {
		mus_goodmask_branch = tree->GetBranch(tree->GetAlias("mus_goodmask"));
		if (mus_goodmask_branch) {mus_goodmask_branch->SetAddress(&mus_goodmask_);}
	}
	mus_hcal_rawId_branch = 0;
	if (tree->GetAlias("mus_hcal_rawId") != 0) {
		mus_hcal_rawId_branch = tree->GetBranch(tree->GetAlias("mus_hcal_rawId"));
		if (mus_hcal_rawId_branch) {mus_hcal_rawId_branch->SetAddress(&mus_hcal_rawId_);}
	}
	mus_iso03_njets_branch = 0;
	if (tree->GetAlias("mus_iso03_njets") != 0) {
		mus_iso03_njets_branch = tree->GetBranch(tree->GetAlias("mus_iso03_njets"));
		if (mus_iso03_njets_branch) {mus_iso03_njets_branch->SetAddress(&mus_iso03_njets_);}
	}
	mus_iso03_ntrk_branch = 0;
	if (tree->GetAlias("mus_iso03_ntrk") != 0) {
		mus_iso03_ntrk_branch = tree->GetBranch(tree->GetAlias("mus_iso03_ntrk"));
		if (mus_iso03_ntrk_branch) {mus_iso03_ntrk_branch->SetAddress(&mus_iso03_ntrk_);}
	}
	mus_iso05_ntrk_branch = 0;
	if (tree->GetAlias("mus_iso05_ntrk") != 0) {
		mus_iso05_ntrk_branch = tree->GetBranch(tree->GetAlias("mus_iso05_ntrk"));
		if (mus_iso05_ntrk_branch) {mus_iso05_ntrk_branch->SetAddress(&mus_iso05_ntrk_);}
	}
	mus_lostHits_branch = 0;
	if (tree->GetAlias("mus_lostHits") != 0) {
		mus_lostHits_branch = tree->GetBranch(tree->GetAlias("mus_lostHits"));
		if (mus_lostHits_branch) {mus_lostHits_branch->SetAddress(&mus_lostHits_);}
	}
	mus_lostPixelHits_branch = 0;
	if (tree->GetAlias("mus_lostPixelHits") != 0) {
		mus_lostPixelHits_branch = tree->GetBranch(tree->GetAlias("mus_lostPixelHits"));
		if (mus_lostPixelHits_branch) {mus_lostPixelHits_branch->SetAddress(&mus_lostPixelHits_);}
	}
	mus_mc_patMatch_id_branch = 0;
	if (tree->GetAlias("mus_mc_patMatch_id") != 0) {
		mus_mc_patMatch_id_branch = tree->GetBranch(tree->GetAlias("mus_mc_patMatch_id"));
		if (mus_mc_patMatch_id_branch) {mus_mc_patMatch_id_branch->SetAddress(&mus_mc_patMatch_id_);}
	}
	mus_muonBestTrackType_branch = 0;
	if (tree->GetAlias("mus_muonBestTrackType") != 0) {
		mus_muonBestTrackType_branch = tree->GetBranch(tree->GetAlias("mus_muonBestTrackType"));
		if (mus_muonBestTrackType_branch) {mus_muonBestTrackType_branch->SetAddress(&mus_muonBestTrackType_);}
	}
	mus_nOverlaps_branch = 0;
	if (tree->GetAlias("mus_nOverlaps") != 0) {
		mus_nOverlaps_branch = tree->GetBranch(tree->GetAlias("mus_nOverlaps"));
		if (mus_nOverlaps_branch) {mus_nOverlaps_branch->SetAddress(&mus_nOverlaps_);}
	}
	mus_nlayers_branch = 0;
	if (tree->GetAlias("mus_nlayers") != 0) {
		mus_nlayers_branch = tree->GetBranch(tree->GetAlias("mus_nlayers"));
		if (mus_nlayers_branch) {mus_nlayers_branch->SetAddress(&mus_nlayers_);}
	}
	mus_nlayers3D_branch = 0;
	if (tree->GetAlias("mus_nlayers3D") != 0) {
		mus_nlayers3D_branch = tree->GetBranch(tree->GetAlias("mus_nlayers3D"));
		if (mus_nlayers3D_branch) {mus_nlayers3D_branch->SetAddress(&mus_nlayers3D_);}
	}
	mus_nlayersLost_branch = 0;
	if (tree->GetAlias("mus_nlayersLost") != 0) {
		mus_nlayersLost_branch = tree->GetBranch(tree->GetAlias("mus_nlayersLost"));
		if (mus_nlayersLost_branch) {mus_nlayersLost_branch->SetAddress(&mus_nlayersLost_);}
	}
	mus_nmatches_branch = 0;
	if (tree->GetAlias("mus_nmatches") != 0) {
		mus_nmatches_branch = tree->GetBranch(tree->GetAlias("mus_nmatches"));
		if (mus_nmatches_branch) {mus_nmatches_branch->SetAddress(&mus_nmatches_);}
	}
	mus_numberOfMatchedStations_branch = 0;
	if (tree->GetAlias("mus_numberOfMatchedStations") != 0) {
		mus_numberOfMatchedStations_branch = tree->GetBranch(tree->GetAlias("mus_numberOfMatchedStations"));
		if (mus_numberOfMatchedStations_branch) {mus_numberOfMatchedStations_branch->SetAddress(&mus_numberOfMatchedStations_);}
	}
	mus_overlap0_branch = 0;
	if (tree->GetAlias("mus_overlap0") != 0) {
		mus_overlap0_branch = tree->GetBranch(tree->GetAlias("mus_overlap0"));
		if (mus_overlap0_branch) {mus_overlap0_branch->SetAddress(&mus_overlap0_);}
	}
	mus_overlap1_branch = 0;
	if (tree->GetAlias("mus_overlap1") != 0) {
		mus_overlap1_branch = tree->GetBranch(tree->GetAlias("mus_overlap1"));
		if (mus_overlap1_branch) {mus_overlap1_branch->SetAddress(&mus_overlap1_);}
	}
	mus_pfcharge_branch = 0;
	if (tree->GetAlias("mus_pfcharge") != 0) {
		mus_pfcharge_branch = tree->GetBranch(tree->GetAlias("mus_pfcharge"));
		if (mus_pfcharge_branch) {mus_pfcharge_branch->SetAddress(&mus_pfcharge_);}
	}
	mus_pfidx_branch = 0;
	if (tree->GetAlias("mus_pfidx") != 0) {
		mus_pfidx_branch = tree->GetBranch(tree->GetAlias("mus_pfidx"));
		if (mus_pfidx_branch) {mus_pfidx_branch->SetAddress(&mus_pfidx_);}
	}
	mus_pfparticleId_branch = 0;
	if (tree->GetAlias("mus_pfparticleId") != 0) {
		mus_pfparticleId_branch = tree->GetBranch(tree->GetAlias("mus_pfparticleId"));
		if (mus_pfparticleId_branch) {mus_pfparticleId_branch->SetAddress(&mus_pfparticleId_);}
	}
	mus_pid_PFMuon_branch = 0;
	if (tree->GetAlias("mus_pid_PFMuon") != 0) {
		mus_pid_PFMuon_branch = tree->GetBranch(tree->GetAlias("mus_pid_PFMuon"));
		if (mus_pid_PFMuon_branch) {mus_pid_PFMuon_branch->SetAddress(&mus_pid_PFMuon_);}
	}
	mus_pid_TM2DCompatibilityLoose_branch = 0;
	if (tree->GetAlias("mus_pid_TM2DCompatibilityLoose") != 0) {
		mus_pid_TM2DCompatibilityLoose_branch = tree->GetBranch(tree->GetAlias("mus_pid_TM2DCompatibilityLoose"));
		if (mus_pid_TM2DCompatibilityLoose_branch) {mus_pid_TM2DCompatibilityLoose_branch->SetAddress(&mus_pid_TM2DCompatibilityLoose_);}
	}
	mus_pid_TM2DCompatibilityTight_branch = 0;
	if (tree->GetAlias("mus_pid_TM2DCompatibilityTight") != 0) {
		mus_pid_TM2DCompatibilityTight_branch = tree->GetBranch(tree->GetAlias("mus_pid_TM2DCompatibilityTight"));
		if (mus_pid_TM2DCompatibilityTight_branch) {mus_pid_TM2DCompatibilityTight_branch->SetAddress(&mus_pid_TM2DCompatibilityTight_);}
	}
	mus_pid_TMLastStationLoose_branch = 0;
	if (tree->GetAlias("mus_pid_TMLastStationLoose") != 0) {
		mus_pid_TMLastStationLoose_branch = tree->GetBranch(tree->GetAlias("mus_pid_TMLastStationLoose"));
		if (mus_pid_TMLastStationLoose_branch) {mus_pid_TMLastStationLoose_branch->SetAddress(&mus_pid_TMLastStationLoose_);}
	}
	mus_pid_TMLastStationTight_branch = 0;
	if (tree->GetAlias("mus_pid_TMLastStationTight") != 0) {
		mus_pid_TMLastStationTight_branch = tree->GetBranch(tree->GetAlias("mus_pid_TMLastStationTight"));
		if (mus_pid_TMLastStationTight_branch) {mus_pid_TMLastStationTight_branch->SetAddress(&mus_pid_TMLastStationTight_);}
	}
	mus_qualityMask_branch = 0;
	if (tree->GetAlias("mus_qualityMask") != 0) {
		mus_qualityMask_branch = tree->GetBranch(tree->GetAlias("mus_qualityMask"));
		if (mus_qualityMask_branch) {mus_qualityMask_branch->SetAddress(&mus_qualityMask_);}
	}
	mus_sta_algo_branch = 0;
	if (tree->GetAlias("mus_sta_algo") != 0) {
		mus_sta_algo_branch = tree->GetBranch(tree->GetAlias("mus_sta_algo"));
		if (mus_sta_algo_branch) {mus_sta_algo_branch->SetAddress(&mus_sta_algo_);}
	}
	mus_sta_etaErr_branch = 0;
	if (tree->GetAlias("mus_sta_etaErr") != 0) {
		mus_sta_etaErr_branch = tree->GetBranch(tree->GetAlias("mus_sta_etaErr"));
		if (mus_sta_etaErr_branch) {mus_sta_etaErr_branch->SetAddress(&mus_sta_etaErr_);}
	}
	mus_sta_exp_innerlayer_branch = 0;
	if (tree->GetAlias("mus_sta_exp_innerlayer") != 0) {
		mus_sta_exp_innerlayer_branch = tree->GetBranch(tree->GetAlias("mus_sta_exp_innerlayer"));
		if (mus_sta_exp_innerlayer_branch) {mus_sta_exp_innerlayer_branch->SetAddress(&mus_sta_exp_innerlayer_);}
	}
	mus_sta_exp_outerlayer_branch = 0;
	if (tree->GetAlias("mus_sta_exp_outerlayer") != 0) {
		mus_sta_exp_outerlayer_branch = tree->GetBranch(tree->GetAlias("mus_sta_exp_outerlayer"));
		if (mus_sta_exp_outerlayer_branch) {mus_sta_exp_outerlayer_branch->SetAddress(&mus_sta_exp_outerlayer_);}
	}
	mus_sta_lostHits_branch = 0;
	if (tree->GetAlias("mus_sta_lostHits") != 0) {
		mus_sta_lostHits_branch = tree->GetBranch(tree->GetAlias("mus_sta_lostHits"));
		if (mus_sta_lostHits_branch) {mus_sta_lostHits_branch->SetAddress(&mus_sta_lostHits_);}
	}
	mus_sta_lostPixelHits_branch = 0;
	if (tree->GetAlias("mus_sta_lostPixelHits") != 0) {
		mus_sta_lostPixelHits_branch = tree->GetBranch(tree->GetAlias("mus_sta_lostPixelHits"));
		if (mus_sta_lostPixelHits_branch) {mus_sta_lostPixelHits_branch->SetAddress(&mus_sta_lostPixelHits_);}
	}
	mus_sta_nlayers_branch = 0;
	if (tree->GetAlias("mus_sta_nlayers") != 0) {
		mus_sta_nlayers_branch = tree->GetBranch(tree->GetAlias("mus_sta_nlayers"));
		if (mus_sta_nlayers_branch) {mus_sta_nlayers_branch->SetAddress(&mus_sta_nlayers_);}
	}
	mus_sta_nlayers3D_branch = 0;
	if (tree->GetAlias("mus_sta_nlayers3D") != 0) {
		mus_sta_nlayers3D_branch = tree->GetBranch(tree->GetAlias("mus_sta_nlayers3D"));
		if (mus_sta_nlayers3D_branch) {mus_sta_nlayers3D_branch->SetAddress(&mus_sta_nlayers3D_);}
	}
	mus_sta_nlayersLost_branch = 0;
	if (tree->GetAlias("mus_sta_nlayersLost") != 0) {
		mus_sta_nlayersLost_branch = tree->GetBranch(tree->GetAlias("mus_sta_nlayersLost"));
		if (mus_sta_nlayersLost_branch) {mus_sta_nlayersLost_branch->SetAddress(&mus_sta_nlayersLost_);}
	}
	mus_sta_phiErr_branch = 0;
	if (tree->GetAlias("mus_sta_phiErr") != 0) {
		mus_sta_phiErr_branch = tree->GetBranch(tree->GetAlias("mus_sta_phiErr"));
		if (mus_sta_phiErr_branch) {mus_sta_phiErr_branch->SetAddress(&mus_sta_phiErr_);}
	}
	mus_sta_ptErr_branch = 0;
	if (tree->GetAlias("mus_sta_ptErr") != 0) {
		mus_sta_ptErr_branch = tree->GetBranch(tree->GetAlias("mus_sta_ptErr"));
		if (mus_sta_ptErr_branch) {mus_sta_ptErr_branch->SetAddress(&mus_sta_ptErr_);}
	}
	mus_sta_qualityMask_branch = 0;
	if (tree->GetAlias("mus_sta_qualityMask") != 0) {
		mus_sta_qualityMask_branch = tree->GetBranch(tree->GetAlias("mus_sta_qualityMask"));
		if (mus_sta_qualityMask_branch) {mus_sta_qualityMask_branch->SetAddress(&mus_sta_qualityMask_);}
	}
	mus_sta_trk_charge_branch = 0;
	if (tree->GetAlias("mus_sta_trk_charge") != 0) {
		mus_sta_trk_charge_branch = tree->GetBranch(tree->GetAlias("mus_sta_trk_charge"));
		if (mus_sta_trk_charge_branch) {mus_sta_trk_charge_branch->SetAddress(&mus_sta_trk_charge_);}
	}
	mus_sta_validHits_branch = 0;
	if (tree->GetAlias("mus_sta_validHits") != 0) {
		mus_sta_validHits_branch = tree->GetBranch(tree->GetAlias("mus_sta_validHits"));
		if (mus_sta_validHits_branch) {mus_sta_validHits_branch->SetAddress(&mus_sta_validHits_);}
	}
	mus_sta_validPixelHits_branch = 0;
	if (tree->GetAlias("mus_sta_validPixelHits") != 0) {
		mus_sta_validPixelHits_branch = tree->GetBranch(tree->GetAlias("mus_sta_validPixelHits"));
		if (mus_sta_validPixelHits_branch) {mus_sta_validPixelHits_branch->SetAddress(&mus_sta_validPixelHits_);}
	}
	mus_timeDirection_branch = 0;
	if (tree->GetAlias("mus_timeDirection") != 0) {
		mus_timeDirection_branch = tree->GetBranch(tree->GetAlias("mus_timeDirection"));
		if (mus_timeDirection_branch) {mus_timeDirection_branch->SetAddress(&mus_timeDirection_);}
	}
	mus_timeNumStationsUsed_branch = 0;
	if (tree->GetAlias("mus_timeNumStationsUsed") != 0) {
		mus_timeNumStationsUsed_branch = tree->GetBranch(tree->GetAlias("mus_timeNumStationsUsed"));
		if (mus_timeNumStationsUsed_branch) {mus_timeNumStationsUsed_branch->SetAddress(&mus_timeNumStationsUsed_);}
	}
	mus_trk_charge_branch = 0;
	if (tree->GetAlias("mus_trk_charge") != 0) {
		mus_trk_charge_branch = tree->GetBranch(tree->GetAlias("mus_trk_charge"));
		if (mus_trk_charge_branch) {mus_trk_charge_branch->SetAddress(&mus_trk_charge_);}
	}
	mus_type_branch = 0;
	if (tree->GetAlias("mus_type") != 0) {
		mus_type_branch = tree->GetBranch(tree->GetAlias("mus_type"));
		if (mus_type_branch) {mus_type_branch->SetAddress(&mus_type_);}
	}
	mus_validHits_branch = 0;
	if (tree->GetAlias("mus_validHits") != 0) {
		mus_validHits_branch = tree->GetBranch(tree->GetAlias("mus_validHits"));
		if (mus_validHits_branch) {mus_validHits_branch->SetAddress(&mus_validHits_);}
	}
	mus_validPixelHits_branch = 0;
	if (tree->GetAlias("mus_validPixelHits") != 0) {
		mus_validPixelHits_branch = tree->GetBranch(tree->GetAlias("mus_validPixelHits"));
		if (mus_validPixelHits_branch) {mus_validPixelHits_branch->SetAddress(&mus_validPixelHits_);}
	}
	pfcands_charge_branch = 0;
	if (tree->GetAlias("pfcands_charge") != 0) {
		pfcands_charge_branch = tree->GetBranch(tree->GetAlias("pfcands_charge"));
		if (pfcands_charge_branch) {pfcands_charge_branch->SetAddress(&pfcands_charge_);}
	}
	pfcands_particleId_branch = 0;
	if (tree->GetAlias("pfcands_particleId") != 0) {
		pfcands_particleId_branch = tree->GetBranch(tree->GetAlias("pfcands_particleId"));
		if (pfcands_particleId_branch) {pfcands_particleId_branch->SetAddress(&pfcands_particleId_);}
	}
	pfjets_chargedHadronMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_chargedHadronMultiplicity") != 0) {
		pfjets_chargedHadronMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedHadronMultiplicity"));
		if (pfjets_chargedHadronMultiplicity_branch) {pfjets_chargedHadronMultiplicity_branch->SetAddress(&pfjets_chargedHadronMultiplicity_);}
	}
	pfjets_chargedMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_chargedMultiplicity") != 0) {
		pfjets_chargedMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_chargedMultiplicity"));
		if (pfjets_chargedMultiplicity_branch) {pfjets_chargedMultiplicity_branch->SetAddress(&pfjets_chargedMultiplicity_);}
	}
	pfjets_electronMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_electronMultiplicity") != 0) {
		pfjets_electronMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_electronMultiplicity"));
		if (pfjets_electronMultiplicity_branch) {pfjets_electronMultiplicity_branch->SetAddress(&pfjets_electronMultiplicity_);}
	}
	pfjets_muonMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_muonMultiplicity") != 0) {
		pfjets_muonMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_muonMultiplicity"));
		if (pfjets_muonMultiplicity_branch) {pfjets_muonMultiplicity_branch->SetAddress(&pfjets_muonMultiplicity_);}
	}
	pfjets_neutralHadronMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_neutralHadronMultiplicity") != 0) {
		pfjets_neutralHadronMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralHadronMultiplicity"));
		if (pfjets_neutralHadronMultiplicity_branch) {pfjets_neutralHadronMultiplicity_branch->SetAddress(&pfjets_neutralHadronMultiplicity_);}
	}
	pfjets_neutralMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_neutralMultiplicity") != 0) {
		pfjets_neutralMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_neutralMultiplicity"));
		if (pfjets_neutralMultiplicity_branch) {pfjets_neutralMultiplicity_branch->SetAddress(&pfjets_neutralMultiplicity_);}
	}
	pfjets_partonFlavour_branch = 0;
	if (tree->GetAlias("pfjets_partonFlavour") != 0) {
		pfjets_partonFlavour_branch = tree->GetBranch(tree->GetAlias("pfjets_partonFlavour"));
		if (pfjets_partonFlavour_branch) {pfjets_partonFlavour_branch->SetAddress(&pfjets_partonFlavour_);}
	}
	pfjets_photonMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_photonMultiplicity") != 0) {
		pfjets_photonMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_photonMultiplicity"));
		if (pfjets_photonMultiplicity_branch) {pfjets_photonMultiplicity_branch->SetAddress(&pfjets_photonMultiplicity_);}
	}
	pfjets_puppi_chargedHadronMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_puppi_chargedHadronMultiplicity") != 0) {
		pfjets_puppi_chargedHadronMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_chargedHadronMultiplicity"));
		if (pfjets_puppi_chargedHadronMultiplicity_branch) {pfjets_puppi_chargedHadronMultiplicity_branch->SetAddress(&pfjets_puppi_chargedHadronMultiplicity_);}
	}
	pfjets_puppi_chargedMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_puppi_chargedMultiplicity") != 0) {
		pfjets_puppi_chargedMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_chargedMultiplicity"));
		if (pfjets_puppi_chargedMultiplicity_branch) {pfjets_puppi_chargedMultiplicity_branch->SetAddress(&pfjets_puppi_chargedMultiplicity_);}
	}
	pfjets_puppi_electronMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_puppi_electronMultiplicity") != 0) {
		pfjets_puppi_electronMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_electronMultiplicity"));
		if (pfjets_puppi_electronMultiplicity_branch) {pfjets_puppi_electronMultiplicity_branch->SetAddress(&pfjets_puppi_electronMultiplicity_);}
	}
	pfjets_puppi_muonMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_puppi_muonMultiplicity") != 0) {
		pfjets_puppi_muonMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_muonMultiplicity"));
		if (pfjets_puppi_muonMultiplicity_branch) {pfjets_puppi_muonMultiplicity_branch->SetAddress(&pfjets_puppi_muonMultiplicity_);}
	}
	pfjets_puppi_neutralHadronMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_puppi_neutralHadronMultiplicity") != 0) {
		pfjets_puppi_neutralHadronMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_neutralHadronMultiplicity"));
		if (pfjets_puppi_neutralHadronMultiplicity_branch) {pfjets_puppi_neutralHadronMultiplicity_branch->SetAddress(&pfjets_puppi_neutralHadronMultiplicity_);}
	}
	pfjets_puppi_neutralMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_puppi_neutralMultiplicity") != 0) {
		pfjets_puppi_neutralMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_neutralMultiplicity"));
		if (pfjets_puppi_neutralMultiplicity_branch) {pfjets_puppi_neutralMultiplicity_branch->SetAddress(&pfjets_puppi_neutralMultiplicity_);}
	}
	pfjets_puppi_partonFlavour_branch = 0;
	if (tree->GetAlias("pfjets_puppi_partonFlavour") != 0) {
		pfjets_puppi_partonFlavour_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_partonFlavour"));
		if (pfjets_puppi_partonFlavour_branch) {pfjets_puppi_partonFlavour_branch->SetAddress(&pfjets_puppi_partonFlavour_);}
	}
	pfjets_puppi_photonMultiplicity_branch = 0;
	if (tree->GetAlias("pfjets_puppi_photonMultiplicity") != 0) {
		pfjets_puppi_photonMultiplicity_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_photonMultiplicity"));
		if (pfjets_puppi_photonMultiplicity_branch) {pfjets_puppi_photonMultiplicity_branch->SetAddress(&pfjets_puppi_photonMultiplicity_);}
	}
	taus_pf_charge_branch = 0;
	if (tree->GetAlias("taus_pf_charge") != 0) {
		taus_pf_charge_branch = tree->GetBranch(tree->GetAlias("taus_pf_charge"));
		if (taus_pf_charge_branch) {taus_pf_charge_branch->SetAddress(&taus_pf_charge_);}
	}
	photons_fiduciality_branch = 0;
	if (tree->GetAlias("photons_fiduciality") != 0) {
		photons_fiduciality_branch = tree->GetBranch(tree->GetAlias("photons_fiduciality"));
		if (photons_fiduciality_branch) {photons_fiduciality_branch->SetAddress(&photons_fiduciality_);}
	}
	photons_photonID_loose_branch = 0;
	if (tree->GetAlias("photons_photonID_loose") != 0) {
		photons_photonID_loose_branch = tree->GetBranch(tree->GetAlias("photons_photonID_loose"));
		if (photons_photonID_loose_branch) {photons_photonID_loose_branch->SetAddress(&photons_photonID_loose_);}
	}
	photons_photonID_tight_branch = 0;
	if (tree->GetAlias("photons_photonID_tight") != 0) {
		photons_photonID_tight_branch = tree->GetBranch(tree->GetAlias("photons_photonID_tight"));
		if (photons_photonID_tight_branch) {photons_photonID_tight_branch->SetAddress(&photons_photonID_tight_);}
	}
	puInfo_bunchCrossing_branch = 0;
	if (tree->GetAlias("puInfo_bunchCrossing") != 0) {
		puInfo_bunchCrossing_branch = tree->GetBranch(tree->GetAlias("puInfo_bunchCrossing"));
		if (puInfo_bunchCrossing_branch) {puInfo_bunchCrossing_branch->SetAddress(&puInfo_bunchCrossing_);}
	}
	puInfo_nPUvertices_branch = 0;
	if (tree->GetAlias("puInfo_nPUvertices") != 0) {
		puInfo_nPUvertices_branch = tree->GetBranch(tree->GetAlias("puInfo_nPUvertices"));
		if (puInfo_nPUvertices_branch) {puInfo_nPUvertices_branch->SetAddress(&puInfo_nPUvertices_);}
	}
	convs_algo_branch = 0;
	if (tree->GetAlias("convs_algo") != 0) {
		convs_algo_branch = tree->GetBranch(tree->GetAlias("convs_algo"));
		if (convs_algo_branch) {convs_algo_branch->SetAddress(&convs_algo_);}
	}
	convs_isConverted_branch = 0;
	if (tree->GetAlias("convs_isConverted") != 0) {
		convs_isConverted_branch = tree->GetBranch(tree->GetAlias("convs_isConverted"));
		if (convs_isConverted_branch) {convs_isConverted_branch->SetAddress(&convs_isConverted_);}
	}
	convs_quality_branch = 0;
	if (tree->GetAlias("convs_quality") != 0) {
		convs_quality_branch = tree->GetBranch(tree->GetAlias("convs_quality"));
		if (convs_quality_branch) {convs_quality_branch->SetAddress(&convs_quality_);}
	}
	svs_nTrks_branch = 0;
	if (tree->GetAlias("svs_nTrks") != 0) {
		svs_nTrks_branch = tree->GetBranch(tree->GetAlias("svs_nTrks"));
		if (svs_nTrks_branch) {svs_nTrks_branch->SetAddress(&svs_nTrks_);}
	}
	ak8jets_nSubJets_branch = 0;
	if (tree->GetAlias("ak8jets_nSubJets") != 0) {
		ak8jets_nSubJets_branch = tree->GetBranch(tree->GetAlias("ak8jets_nSubJets"));
		if (ak8jets_nSubJets_branch) {ak8jets_nSubJets_branch->SetAddress(&ak8jets_nSubJets_);}
	}
	ak8jets_partonFlavour_branch = 0;
	if (tree->GetAlias("ak8jets_partonFlavour") != 0) {
		ak8jets_partonFlavour_branch = tree->GetBranch(tree->GetAlias("ak8jets_partonFlavour"));
		if (ak8jets_partonFlavour_branch) {ak8jets_partonFlavour_branch->SetAddress(&ak8jets_partonFlavour_);}
	}
	vtxs_isFake_branch = 0;
	if (tree->GetAlias("vtxs_isFake") != 0) {
		vtxs_isFake_branch = tree->GetBranch(tree->GetAlias("vtxs_isFake"));
		if (vtxs_isFake_branch) {vtxs_isFake_branch->SetAddress(&vtxs_isFake_);}
	}
	vtxs_isValid_branch = 0;
	if (tree->GetAlias("vtxs_isValid") != 0) {
		vtxs_isValid_branch = tree->GetBranch(tree->GetAlias("vtxs_isValid"));
		if (vtxs_isValid_branch) {vtxs_isValid_branch->SetAddress(&vtxs_isValid_);}
	}
	pfjets_nonCHS_pfcandIndicies_branch = 0;
	if (tree->GetAlias("pfjets_nonCHS_pfcandIndicies") != 0) {
		pfjets_nonCHS_pfcandIndicies_branch = tree->GetBranch(tree->GetAlias("pfjets_nonCHS_pfcandIndicies"));
		if (pfjets_nonCHS_pfcandIndicies_branch) {pfjets_nonCHS_pfcandIndicies_branch->SetAddress(&pfjets_nonCHS_pfcandIndicies_);}
	}
	els_PFCand_idx_branch = 0;
	if (tree->GetAlias("els_PFCand_idx") != 0) {
		els_PFCand_idx_branch = tree->GetBranch(tree->GetAlias("els_PFCand_idx"));
		if (els_PFCand_idx_branch) {els_PFCand_idx_branch->SetAddress(&els_PFCand_idx_);}
	}
	genps_lepdaughter_id_branch = 0;
	if (tree->GetAlias("genps_lepdaughter_id") != 0) {
		genps_lepdaughter_id_branch = tree->GetBranch(tree->GetAlias("genps_lepdaughter_id"));
		if (genps_lepdaughter_id_branch) {genps_lepdaughter_id_branch->SetAddress(&genps_lepdaughter_id_);}
	}
	genps_lepdaughter_idx_branch = 0;
	if (tree->GetAlias("genps_lepdaughter_idx") != 0) {
		genps_lepdaughter_idx_branch = tree->GetBranch(tree->GetAlias("genps_lepdaughter_idx"));
		if (genps_lepdaughter_idx_branch) {genps_lepdaughter_idx_branch->SetAddress(&genps_lepdaughter_idx_);}
	}
	hlt_trigObjs_id_branch = 0;
	if (tree->GetAlias("hlt_trigObjs_id") != 0) {
		hlt_trigObjs_id_branch = tree->GetBranch(tree->GetAlias("hlt_trigObjs_id"));
		if (hlt_trigObjs_id_branch) {hlt_trigObjs_id_branch->SetAddress(&hlt_trigObjs_id_);}
	}
	mus_nStationCorrelatedHits_branch = 0;
	if (tree->GetAlias("mus_nStationCorrelatedHits") != 0) {
		mus_nStationCorrelatedHits_branch = tree->GetBranch(tree->GetAlias("mus_nStationCorrelatedHits"));
		if (mus_nStationCorrelatedHits_branch) {mus_nStationCorrelatedHits_branch->SetAddress(&mus_nStationCorrelatedHits_);}
	}
	mus_nStationHits_branch = 0;
	if (tree->GetAlias("mus_nStationHits") != 0) {
		mus_nStationHits_branch = tree->GetBranch(tree->GetAlias("mus_nStationHits"));
		if (mus_nStationHits_branch) {mus_nStationHits_branch->SetAddress(&mus_nStationHits_);}
	}
	pfjets_pfcandIndicies_branch = 0;
	if (tree->GetAlias("pfjets_pfcandIndicies") != 0) {
		pfjets_pfcandIndicies_branch = tree->GetBranch(tree->GetAlias("pfjets_pfcandIndicies"));
		if (pfjets_pfcandIndicies_branch) {pfjets_pfcandIndicies_branch->SetAddress(&pfjets_pfcandIndicies_);}
	}
	pfjets_puppi_pfcandIndicies_branch = 0;
	if (tree->GetAlias("pfjets_puppi_pfcandIndicies") != 0) {
		pfjets_puppi_pfcandIndicies_branch = tree->GetBranch(tree->GetAlias("pfjets_puppi_pfcandIndicies"));
		if (pfjets_puppi_pfcandIndicies_branch) {pfjets_puppi_pfcandIndicies_branch->SetAddress(&pfjets_puppi_pfcandIndicies_);}
	}
	photons_PFCand_idx_branch = 0;
	if (tree->GetAlias("photons_PFCand_idx") != 0) {
		photons_PFCand_idx_branch = tree->GetBranch(tree->GetAlias("photons_PFCand_idx"));
		if (photons_PFCand_idx_branch) {photons_PFCand_idx_branch->SetAddress(&photons_PFCand_idx_);}
	}
	convs_nHitsBeforeVtx_branch = 0;
	if (tree->GetAlias("convs_nHitsBeforeVtx") != 0) {
		convs_nHitsBeforeVtx_branch = tree->GetBranch(tree->GetAlias("convs_nHitsBeforeVtx"));
		if (convs_nHitsBeforeVtx_branch) {convs_nHitsBeforeVtx_branch->SetAddress(&convs_nHitsBeforeVtx_);}
	}
	convs_tkalgo_branch = 0;
	if (tree->GetAlias("convs_tkalgo") != 0) {
		convs_tkalgo_branch = tree->GetBranch(tree->GetAlias("convs_tkalgo"));
		if (convs_tkalgo_branch) {convs_tkalgo_branch->SetAddress(&convs_tkalgo_);}
	}
	convs_tkidx_branch = 0;
	if (tree->GetAlias("convs_tkidx") != 0) {
		convs_tkidx_branch = tree->GetBranch(tree->GetAlias("convs_tkidx"));
		if (convs_tkidx_branch) {convs_tkidx_branch->SetAddress(&convs_tkidx_);}
	}
	ak8jets_pfcandIndicies_branch = 0;
	if (tree->GetAlias("ak8jets_pfcandIndicies") != 0) {
		ak8jets_pfcandIndicies_branch = tree->GetBranch(tree->GetAlias("ak8jets_pfcandIndicies"));
		if (ak8jets_pfcandIndicies_branch) {ak8jets_pfcandIndicies_branch->SetAddress(&ak8jets_pfcandIndicies_);}
	}
	isotracks_fromPV_branch = 0;
	if (tree->GetAlias("isotracks_fromPV") != 0) {
		isotracks_fromPV_branch = tree->GetBranch(tree->GetAlias("isotracks_fromPV"));
		if (isotracks_fromPV_branch) {isotracks_fromPV_branch->SetAddress(&isotracks_fromPV_);}
	}
	pfcands_fromPV_branch = 0;
	if (tree->GetAlias("pfcands_fromPV") != 0) {
		pfcands_fromPV_branch = tree->GetBranch(tree->GetAlias("pfcands_fromPV"));
		if (pfcands_fromPV_branch) {pfcands_fromPV_branch->SetAddress(&pfcands_fromPV_);}
	}
	els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version") != 0) {
		els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version"));
		if (els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch) {els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch->SetAddress(&els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_);}
	}
	els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version") != 0) {
		els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version"));
		if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_branch) {els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_);}
	}
	els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version") != 0) {
		els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version"));
		if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_branch) {els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_);}
	}
	els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version") != 0) {
		els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version"));
		if (els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch) {els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_);}
	}
	els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version") != 0) {
		els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version"));
		if (els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch) {els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_);}
	}
	els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version") != 0) {
		els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version"));
		if (els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_branch) {els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_branch->SetAddress(&els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_);}
	}
	els_HLT_Ele17_Ele8_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_LeadingLeg_version") != 0) {
		els_HLT_Ele17_Ele8_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_LeadingLeg_version"));
		if (els_HLT_Ele17_Ele8_LeadingLeg_version_branch) {els_HLT_Ele17_Ele8_LeadingLeg_version_branch->SetAddress(&els_HLT_Ele17_Ele8_LeadingLeg_version_);}
	}
	els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version") != 0) {
		els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version"));
		if (els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_branch) {els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_branch->SetAddress(&els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_);}
	}
	els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version") != 0) {
		els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version"));
		if (els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_branch) {els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_branch->SetAddress(&els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_);}
	}
	els_HLT_Ele17_Ele8_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_TrailingLeg_version") != 0) {
		els_HLT_Ele17_Ele8_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_TrailingLeg_version"));
		if (els_HLT_Ele17_Ele8_TrailingLeg_version_branch) {els_HLT_Ele17_Ele8_TrailingLeg_version_branch->SetAddress(&els_HLT_Ele17_Ele8_TrailingLeg_version_);}
	}
	els_HLT_Ele17_Ele8_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_version") != 0) {
		els_HLT_Ele17_Ele8_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_version"));
		if (els_HLT_Ele17_Ele8_version_branch) {els_HLT_Ele17_Ele8_version_branch->SetAddress(&els_HLT_Ele17_Ele8_version_);}
	}
	els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version") != 0) {
		els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version"));
		if (els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch) {els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_);}
	}
	els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version") != 0) {
		els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version"));
		if (els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch) {els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_);}
	}
	els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele20_SC4_Mass50_LeadingLeg_version") != 0) {
		els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele20_SC4_Mass50_LeadingLeg_version"));
		if (els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_branch) {els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_branch->SetAddress(&els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_);}
	}
	els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele20_SC4_Mass50_TrailingLeg_version") != 0) {
		els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele20_SC4_Mass50_TrailingLeg_version"));
		if (els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_branch) {els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_branch->SetAddress(&els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_);}
	}
	els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version") != 0) {
		els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version"));
		if (els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch) {els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_);}
	}
	els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version") != 0) {
		els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version"));
		if (els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch) {els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_);}
	}
	els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version") != 0) {
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version"));
		if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_branch) {els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_branch->SetAddress(&els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_);}
	}
	els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version") != 0) {
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version"));
		if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_branch) {els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_branch->SetAddress(&els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_);}
	}
	els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version") != 0) {
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version"));
		if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_branch) {els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_branch->SetAddress(&els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_);}
	}
	els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version") != 0) {
		els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version"));
		if (els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_branch) {els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_branch->SetAddress(&els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_);}
	}
	els_HLT_Ele25WP60_Ele8_Mass55_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele25WP60_Ele8_Mass55_version") != 0) {
		els_HLT_Ele25WP60_Ele8_Mass55_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele25WP60_Ele8_Mass55_version"));
		if (els_HLT_Ele25WP60_Ele8_Mass55_version_branch) {els_HLT_Ele25WP60_Ele8_Mass55_version_branch->SetAddress(&els_HLT_Ele25WP60_Ele8_Mass55_version_);}
	}
	els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version") != 0) {
		els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version"));
		if (els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_branch) {els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_branch->SetAddress(&els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_);}
	}
	els_HLT_Ele25WP60_SC4_Mass55_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele25WP60_SC4_Mass55_version") != 0) {
		els_HLT_Ele25WP60_SC4_Mass55_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele25WP60_SC4_Mass55_version"));
		if (els_HLT_Ele25WP60_SC4_Mass55_version_branch) {els_HLT_Ele25WP60_SC4_Mass55_version_branch->SetAddress(&els_HLT_Ele25WP60_SC4_Mass55_version_);}
	}
	els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version") != 0) {
		els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version"));
		if (els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_branch) {els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_branch->SetAddress(&els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_);}
	}
	els_HLT_Ele27_WP80_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele27_WP80_version") != 0) {
		els_HLT_Ele27_WP80_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele27_WP80_version"));
		if (els_HLT_Ele27_WP80_version_branch) {els_HLT_Ele27_WP80_version_branch->SetAddress(&els_HLT_Ele27_WP80_version_);}
	}
	els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele32_SC17_Mass50_LeadingLeg_version") != 0) {
		els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele32_SC17_Mass50_LeadingLeg_version"));
		if (els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_branch) {els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_branch->SetAddress(&els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_);}
	}
	els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele32_SC17_Mass50_TrailingLeg_version") != 0) {
		els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele32_SC17_Mass50_TrailingLeg_version"));
		if (els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_branch) {els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_branch->SetAddress(&els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_);}
	}
	els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version") != 0) {
		els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version"));
		if (els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch) {els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_);}
	}
	els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version") != 0) {
		els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version"));
		if (els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch) {els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_);}
	}
	els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version") != 0) {
		els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version"));
		if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_branch) {els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_branch->SetAddress(&els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_);}
	}
	els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version") != 0) {
		els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version"));
		if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_branch) {els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_branch->SetAddress(&els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_);}
	}
	els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version") != 0) {
		els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version"));
		if (els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch) {els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->SetAddress(&els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_);}
	}
	els_HLT_Mu17_Ele8_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Mu17_Ele8_TrailingLeg_version") != 0) {
		els_HLT_Mu17_Ele8_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu17_Ele8_TrailingLeg_version"));
		if (els_HLT_Mu17_Ele8_TrailingLeg_version_branch) {els_HLT_Mu17_Ele8_TrailingLeg_version_branch->SetAddress(&els_HLT_Mu17_Ele8_TrailingLeg_version_);}
	}
	els_HLT_Mu17_Ele8_version_branch = 0;
	if (tree->GetAlias("els_HLT_Mu17_Ele8_version") != 0) {
		els_HLT_Mu17_Ele8_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu17_Ele8_version"));
		if (els_HLT_Mu17_Ele8_version_branch) {els_HLT_Mu17_Ele8_version_branch->SetAddress(&els_HLT_Mu17_Ele8_version_);}
	}
	els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version") != 0) {
		els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version"));
		if (els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch) {els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch->SetAddress(&els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_);}
	}
	els_HLT_Mu8_Ele17_version_branch = 0;
	if (tree->GetAlias("els_HLT_Mu8_Ele17_version") != 0) {
		els_HLT_Mu8_Ele17_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu8_Ele17_version"));
		if (els_HLT_Mu8_Ele17_version_branch) {els_HLT_Mu8_Ele17_version_branch->SetAddress(&els_HLT_Mu8_Ele17_version_);}
	}
	els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version") != 0) {
		els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version"));
		if (els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch) {els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch->SetAddress(&els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_);}
	}
	els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch = 0;
	if (tree->GetAlias("els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version") != 0) {
		els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version"));
		if (els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch) {els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch->SetAddress(&els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_);}
	}
	evt_nels_branch = 0;
	if (tree->GetAlias("evt_nels") != 0) {
		evt_nels_branch = tree->GetBranch(tree->GetAlias("evt_nels"));
		if (evt_nels_branch) {evt_nels_branch->SetAddress(&evt_nels_);}
	}
	evt_detectorStatus_branch = 0;
	if (tree->GetAlias("evt_detectorStatus") != 0) {
		evt_detectorStatus_branch = tree->GetBranch(tree->GetAlias("evt_detectorStatus"));
		if (evt_detectorStatus_branch) {evt_detectorStatus_branch->SetAddress(&evt_detectorStatus_);}
	}
	evt_lumiBlock_branch = 0;
	if (tree->GetAlias("evt_lumiBlock") != 0) {
		evt_lumiBlock_branch = tree->GetBranch(tree->GetAlias("evt_lumiBlock"));
		if (evt_lumiBlock_branch) {evt_lumiBlock_branch->SetAddress(&evt_lumiBlock_);}
	}
	evt_run_branch = 0;
	if (tree->GetAlias("evt_run") != 0) {
		evt_run_branch = tree->GetBranch(tree->GetAlias("evt_run"));
		if (evt_run_branch) {evt_run_branch->SetAddress(&evt_run_);}
	}
	evt_ngenjetsNoMuNoNu_branch = 0;
	if (tree->GetAlias("evt_ngenjetsNoMuNoNu") != 0) {
		evt_ngenjetsNoMuNoNu_branch = tree->GetBranch(tree->GetAlias("evt_ngenjetsNoMuNoNu"));
		if (evt_ngenjetsNoMuNoNu_branch) {evt_ngenjetsNoMuNoNu_branch->SetAddress(&evt_ngenjetsNoMuNoNu_);}
	}
	genps_signalProcessID_branch = 0;
	if (tree->GetAlias("genps_signalProcessID") != 0) {
		genps_signalProcessID_branch = tree->GetBranch(tree->GetAlias("genps_signalProcessID"));
		if (genps_signalProcessID_branch) {genps_signalProcessID_branch->SetAddress(&genps_signalProcessID_);}
	}
	evt_ngenjets_branch = 0;
	if (tree->GetAlias("evt_ngenjets") != 0) {
		evt_ngenjets_branch = tree->GetBranch(tree->GetAlias("evt_ngenjets"));
		if (evt_ngenjets_branch) {evt_ngenjets_branch->SetAddress(&evt_ngenjets_);}
	}
	mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version") != 0) {
		mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version"));
		if (mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_branch) {mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_branch->SetAddress(&mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_);}
	}
	mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_branch = 0;
	if (tree->GetAlias("mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version") != 0) {
		mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version"));
		if (mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_branch) {mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_branch->SetAddress(&mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_);}
	}
	mus_HLT_IsoMu24_eta2p1_version_branch = 0;
	if (tree->GetAlias("mus_HLT_IsoMu24_eta2p1_version") != 0) {
		mus_HLT_IsoMu24_eta2p1_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_IsoMu24_eta2p1_version"));
		if (mus_HLT_IsoMu24_eta2p1_version_branch) {mus_HLT_IsoMu24_eta2p1_version_branch->SetAddress(&mus_HLT_IsoMu24_eta2p1_version_);}
	}
	mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version") != 0) {
		mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version"));
		if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_branch) {mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_branch->SetAddress(&mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_);}
	}
	mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version") != 0) {
		mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version"));
		if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_branch) {mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_branch->SetAddress(&mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_);}
	}
	mus_HLT_Mu17_Ele8_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Ele8_LeadingLeg_version") != 0) {
		mus_HLT_Mu17_Ele8_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Ele8_LeadingLeg_version"));
		if (mus_HLT_Mu17_Ele8_LeadingLeg_version_branch) {mus_HLT_Mu17_Ele8_LeadingLeg_version_branch->SetAddress(&mus_HLT_Mu17_Ele8_LeadingLeg_version_);}
	}
	mus_HLT_Mu17_Ele8_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Ele8_version") != 0) {
		mus_HLT_Mu17_Ele8_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Ele8_version"));
		if (mus_HLT_Mu17_Ele8_version_branch) {mus_HLT_Mu17_Ele8_version_branch->SetAddress(&mus_HLT_Mu17_Ele8_version_);}
	}
	mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version") != 0) {
		mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version"));
		if (mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_branch) {mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_branch->SetAddress(&mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_);}
	}
	mus_HLT_Mu17_Mu8_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Mu8_LeadingLeg_version") != 0) {
		mus_HLT_Mu17_Mu8_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Mu8_LeadingLeg_version"));
		if (mus_HLT_Mu17_Mu8_LeadingLeg_version_branch) {mus_HLT_Mu17_Mu8_LeadingLeg_version_branch->SetAddress(&mus_HLT_Mu17_Mu8_LeadingLeg_version_);}
	}
	mus_HLT_Mu17_Mu8_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Mu8_TrailingLeg_version") != 0) {
		mus_HLT_Mu17_Mu8_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Mu8_TrailingLeg_version"));
		if (mus_HLT_Mu17_Mu8_TrailingLeg_version_branch) {mus_HLT_Mu17_Mu8_TrailingLeg_version_branch->SetAddress(&mus_HLT_Mu17_Mu8_TrailingLeg_version_);}
	}
	mus_HLT_Mu17_Mu8_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Mu8_version") != 0) {
		mus_HLT_Mu17_Mu8_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Mu8_version"));
		if (mus_HLT_Mu17_Mu8_version_branch) {mus_HLT_Mu17_Mu8_version_branch->SetAddress(&mus_HLT_Mu17_Mu8_version_);}
	}
	mus_HLT_Mu17_TkMu8_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TkMu8_LeadingLeg_version") != 0) {
		mus_HLT_Mu17_TkMu8_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TkMu8_LeadingLeg_version"));
		if (mus_HLT_Mu17_TkMu8_LeadingLeg_version_branch) {mus_HLT_Mu17_TkMu8_LeadingLeg_version_branch->SetAddress(&mus_HLT_Mu17_TkMu8_LeadingLeg_version_);}
	}
	mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version") != 0) {
		mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version"));
		if (mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_branch) {mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_branch->SetAddress(&mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_);}
	}
	mus_HLT_Mu17_TkMu8_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TkMu8_TrailingLeg_version") != 0) {
		mus_HLT_Mu17_TkMu8_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TkMu8_TrailingLeg_version"));
		if (mus_HLT_Mu17_TkMu8_TrailingLeg_version_branch) {mus_HLT_Mu17_TkMu8_TrailingLeg_version_branch->SetAddress(&mus_HLT_Mu17_TkMu8_TrailingLeg_version_);}
	}
	mus_HLT_Mu17_TkMu8_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TkMu8_version") != 0) {
		mus_HLT_Mu17_TkMu8_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TkMu8_version"));
		if (mus_HLT_Mu17_TkMu8_version_branch) {mus_HLT_Mu17_TkMu8_version_branch->SetAddress(&mus_HLT_Mu17_TkMu8_version_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version"));
		if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_branch) {mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version"));
		if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_branch) {mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version"));
		if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_branch) {mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version"));
		if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_branch) {mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version"));
		if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_branch) {mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version"));
		if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_branch) {mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_);}
	}
	mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version") != 0) {
		mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version"));
		if (mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch) {mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch->SetAddress(&mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_);}
	}
	mus_HLT_Mu8_Ele17_TrailingLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu8_Ele17_TrailingLeg_version") != 0) {
		mus_HLT_Mu8_Ele17_TrailingLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu8_Ele17_TrailingLeg_version"));
		if (mus_HLT_Mu8_Ele17_TrailingLeg_version_branch) {mus_HLT_Mu8_Ele17_TrailingLeg_version_branch->SetAddress(&mus_HLT_Mu8_Ele17_TrailingLeg_version_);}
	}
	mus_HLT_Mu8_Ele17_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu8_Ele17_version") != 0) {
		mus_HLT_Mu8_Ele17_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu8_Ele17_version"));
		if (mus_HLT_Mu8_Ele17_version_branch) {mus_HLT_Mu8_Ele17_version_branch->SetAddress(&mus_HLT_Mu8_Ele17_version_);}
	}
	mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version") != 0) {
		mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version"));
		if (mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_branch) {mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_branch->SetAddress(&mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_);}
	}
	mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version") != 0) {
		mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version"));
		if (mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch) {mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch->SetAddress(&mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_);}
	}
	evt_nphotons_branch = 0;
	if (tree->GetAlias("evt_nphotons") != 0) {
		evt_nphotons_branch = tree->GetBranch(tree->GetAlias("evt_nphotons"));
		if (evt_nphotons_branch) {evt_nphotons_branch->SetAddress(&evt_nphotons_);}
	}
	evt_nvtxs_branch = 0;
	if (tree->GetAlias("evt_nvtxs") != 0) {
		evt_nvtxs_branch = tree->GetBranch(tree->GetAlias("evt_nvtxs"));
		if (evt_nvtxs_branch) {evt_nvtxs_branch->SetAddress(&evt_nvtxs_);}
	}
	els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg") != 0) {
		els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg"));
		if (els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch) {els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch->SetAddress(&els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_);}
	}
	els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg") != 0) {
		els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg"));
		if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_branch) {els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_branch->SetAddress(&els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_);}
	}
	els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg") != 0) {
		els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg"));
		if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_branch) {els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_branch->SetAddress(&els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_);}
	}
	els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg") != 0) {
		els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg"));
		if (els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch) {els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch->SetAddress(&els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_);}
	}
	els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg") != 0) {
		els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg"));
		if (els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch) {els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->SetAddress(&els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_);}
	}
	els_HLT_Ele17_Ele8_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8") != 0) {
		els_HLT_Ele17_Ele8_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8"));
		if (els_HLT_Ele17_Ele8_branch) {els_HLT_Ele17_Ele8_branch->SetAddress(&els_HLT_Ele17_Ele8_);}
	}
	els_HLT_Ele17_Ele8_L1sL1DoubleEG137_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_L1sL1DoubleEG137") != 0) {
		els_HLT_Ele17_Ele8_L1sL1DoubleEG137_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_L1sL1DoubleEG137"));
		if (els_HLT_Ele17_Ele8_L1sL1DoubleEG137_branch) {els_HLT_Ele17_Ele8_L1sL1DoubleEG137_branch->SetAddress(&els_HLT_Ele17_Ele8_L1sL1DoubleEG137_);}
	}
	els_HLT_Ele17_Ele8_LeadingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_LeadingLeg") != 0) {
		els_HLT_Ele17_Ele8_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_LeadingLeg"));
		if (els_HLT_Ele17_Ele8_LeadingLeg_branch) {els_HLT_Ele17_Ele8_LeadingLeg_branch->SetAddress(&els_HLT_Ele17_Ele8_LeadingLeg_);}
	}
	els_HLT_Ele17_Ele8_Mass50_LeadingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_Mass50_LeadingLeg") != 0) {
		els_HLT_Ele17_Ele8_Mass50_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_Mass50_LeadingLeg"));
		if (els_HLT_Ele17_Ele8_Mass50_LeadingLeg_branch) {els_HLT_Ele17_Ele8_Mass50_LeadingLeg_branch->SetAddress(&els_HLT_Ele17_Ele8_Mass50_LeadingLeg_);}
	}
	els_HLT_Ele17_Ele8_Mass50_TrailingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_Mass50_TrailingLeg") != 0) {
		els_HLT_Ele17_Ele8_Mass50_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_Mass50_TrailingLeg"));
		if (els_HLT_Ele17_Ele8_Mass50_TrailingLeg_branch) {els_HLT_Ele17_Ele8_Mass50_TrailingLeg_branch->SetAddress(&els_HLT_Ele17_Ele8_Mass50_TrailingLeg_);}
	}
	els_HLT_Ele17_Ele8_TrailingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele17_Ele8_TrailingLeg") != 0) {
		els_HLT_Ele17_Ele8_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele17_Ele8_TrailingLeg"));
		if (els_HLT_Ele17_Ele8_TrailingLeg_branch) {els_HLT_Ele17_Ele8_TrailingLeg_branch->SetAddress(&els_HLT_Ele17_Ele8_TrailingLeg_);}
	}
	els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg") != 0) {
		els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg"));
		if (els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch) {els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch->SetAddress(&els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_);}
	}
	els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg") != 0) {
		els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg"));
		if (els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch) {els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->SetAddress(&els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_);}
	}
	els_HLT_Ele20_SC4_Mass50_LeadingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele20_SC4_Mass50_LeadingLeg") != 0) {
		els_HLT_Ele20_SC4_Mass50_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele20_SC4_Mass50_LeadingLeg"));
		if (els_HLT_Ele20_SC4_Mass50_LeadingLeg_branch) {els_HLT_Ele20_SC4_Mass50_LeadingLeg_branch->SetAddress(&els_HLT_Ele20_SC4_Mass50_LeadingLeg_);}
	}
	els_HLT_Ele20_SC4_Mass50_TrailingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele20_SC4_Mass50_TrailingLeg") != 0) {
		els_HLT_Ele20_SC4_Mass50_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele20_SC4_Mass50_TrailingLeg"));
		if (els_HLT_Ele20_SC4_Mass50_TrailingLeg_branch) {els_HLT_Ele20_SC4_Mass50_TrailingLeg_branch->SetAddress(&els_HLT_Ele20_SC4_Mass50_TrailingLeg_);}
	}
	els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg") != 0) {
		els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg"));
		if (els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch) {els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch->SetAddress(&els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_);}
	}
	els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg") != 0) {
		els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg"));
		if (els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch) {els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->SetAddress(&els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_);}
	}
	els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL") != 0) {
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL"));
		if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch) {els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch->SetAddress(&els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_);}
	}
	els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg") != 0) {
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg"));
		if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_branch) {els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_branch->SetAddress(&els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_);}
	}
	els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg") != 0) {
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg"));
		if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_branch) {els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_branch->SetAddress(&els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_);}
	}
	els_HLT_Ele25WP60_Ele8_Mass55_branch = 0;
	if (tree->GetAlias("els_HLT_Ele25WP60_Ele8_Mass55") != 0) {
		els_HLT_Ele25WP60_Ele8_Mass55_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele25WP60_Ele8_Mass55"));
		if (els_HLT_Ele25WP60_Ele8_Mass55_branch) {els_HLT_Ele25WP60_Ele8_Mass55_branch->SetAddress(&els_HLT_Ele25WP60_Ele8_Mass55_);}
	}
	els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg") != 0) {
		els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg"));
		if (els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_branch) {els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_branch->SetAddress(&els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_);}
	}
	els_HLT_Ele25WP60_SC4_Mass55_branch = 0;
	if (tree->GetAlias("els_HLT_Ele25WP60_SC4_Mass55") != 0) {
		els_HLT_Ele25WP60_SC4_Mass55_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele25WP60_SC4_Mass55"));
		if (els_HLT_Ele25WP60_SC4_Mass55_branch) {els_HLT_Ele25WP60_SC4_Mass55_branch->SetAddress(&els_HLT_Ele25WP60_SC4_Mass55_);}
	}
	els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg") != 0) {
		els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg"));
		if (els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_branch) {els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_branch->SetAddress(&els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_);}
	}
	els_HLT_Ele27_WP80_branch = 0;
	if (tree->GetAlias("els_HLT_Ele27_WP80") != 0) {
		els_HLT_Ele27_WP80_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele27_WP80"));
		if (els_HLT_Ele27_WP80_branch) {els_HLT_Ele27_WP80_branch->SetAddress(&els_HLT_Ele27_WP80_);}
	}
	els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_branch = 0;
	if (tree->GetAlias("els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22") != 0) {
		els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22"));
		if (els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_branch) {els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_branch->SetAddress(&els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_);}
	}
	els_HLT_Ele32_SC17_Mass50_LeadingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele32_SC17_Mass50_LeadingLeg") != 0) {
		els_HLT_Ele32_SC17_Mass50_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele32_SC17_Mass50_LeadingLeg"));
		if (els_HLT_Ele32_SC17_Mass50_LeadingLeg_branch) {els_HLT_Ele32_SC17_Mass50_LeadingLeg_branch->SetAddress(&els_HLT_Ele32_SC17_Mass50_LeadingLeg_);}
	}
	els_HLT_Ele32_SC17_Mass50_TrailingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele32_SC17_Mass50_TrailingLeg") != 0) {
		els_HLT_Ele32_SC17_Mass50_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele32_SC17_Mass50_TrailingLeg"));
		if (els_HLT_Ele32_SC17_Mass50_TrailingLeg_branch) {els_HLT_Ele32_SC17_Mass50_TrailingLeg_branch->SetAddress(&els_HLT_Ele32_SC17_Mass50_TrailingLeg_);}
	}
	els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg") != 0) {
		els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg"));
		if (els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch) {els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch->SetAddress(&els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_);}
	}
	els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg") != 0) {
		els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg"));
		if (els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch) {els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->SetAddress(&els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_);}
	}
	els_HLT_Ele5_SC5_JPsi_Mass2to4p5_branch = 0;
	if (tree->GetAlias("els_HLT_Ele5_SC5_JPsi_Mass2to4p5") != 0) {
		els_HLT_Ele5_SC5_JPsi_Mass2to4p5_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele5_SC5_JPsi_Mass2to4p5"));
		if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_branch) {els_HLT_Ele5_SC5_JPsi_Mass2to4p5_branch->SetAddress(&els_HLT_Ele5_SC5_JPsi_Mass2to4p5_);}
	}
	els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg") != 0) {
		els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg"));
		if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_branch) {els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_branch->SetAddress(&els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_);}
	}
	els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg") != 0) {
		els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg"));
		if (els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch) {els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->SetAddress(&els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_);}
	}
	els_HLT_Mu17_Ele8_branch = 0;
	if (tree->GetAlias("els_HLT_Mu17_Ele8") != 0) {
		els_HLT_Mu17_Ele8_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu17_Ele8"));
		if (els_HLT_Mu17_Ele8_branch) {els_HLT_Mu17_Ele8_branch->SetAddress(&els_HLT_Mu17_Ele8_);}
	}
	els_HLT_Mu17_Ele8_TrailingLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Mu17_Ele8_TrailingLeg") != 0) {
		els_HLT_Mu17_Ele8_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu17_Ele8_TrailingLeg"));
		if (els_HLT_Mu17_Ele8_TrailingLeg_branch) {els_HLT_Mu17_Ele8_TrailingLeg_branch->SetAddress(&els_HLT_Mu17_Ele8_TrailingLeg_);}
	}
	els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg") != 0) {
		els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg"));
		if (els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch) {els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch->SetAddress(&els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_);}
	}
	els_HLT_Mu8_Ele17_branch = 0;
	if (tree->GetAlias("els_HLT_Mu8_Ele17") != 0) {
		els_HLT_Mu8_Ele17_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu8_Ele17"));
		if (els_HLT_Mu8_Ele17_branch) {els_HLT_Mu8_Ele17_branch->SetAddress(&els_HLT_Mu8_Ele17_);}
	}
	els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg") != 0) {
		els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg"));
		if (els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch) {els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch->SetAddress(&els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_);}
	}
	els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch = 0;
	if (tree->GetAlias("els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg") != 0) {
		els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch = tree->GetBranch(tree->GetAlias("els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg"));
		if (els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch) {els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch->SetAddress(&els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_);}
	}
	hlt_prescales_branch = 0;
	if (tree->GetAlias("hlt_prescales") != 0) {
		hlt_prescales_branch = tree->GetBranch(tree->GetAlias("hlt_prescales"));
		if (hlt_prescales_branch) {hlt_prescales_branch->SetAddress(&hlt_prescales_);}
	}
	mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg") != 0) {
		mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg"));
		if (mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_branch) {mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_branch->SetAddress(&mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_);}
	}
	mus_HLT_IsoMu24_eta2p1_branch = 0;
	if (tree->GetAlias("mus_HLT_IsoMu24_eta2p1") != 0) {
		mus_HLT_IsoMu24_eta2p1_branch = tree->GetBranch(tree->GetAlias("mus_HLT_IsoMu24_eta2p1"));
		if (mus_HLT_IsoMu24_eta2p1_branch) {mus_HLT_IsoMu24_eta2p1_branch->SetAddress(&mus_HLT_IsoMu24_eta2p1_);}
	}
	mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_branch = 0;
	if (tree->GetAlias("mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1") != 0) {
		mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_branch = tree->GetBranch(tree->GetAlias("mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1"));
		if (mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_branch) {mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_branch->SetAddress(&mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_);}
	}
	mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg") != 0) {
		mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg"));
		if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_branch) {mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_branch->SetAddress(&mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_);}
	}
	mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg") != 0) {
		mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg"));
		if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_branch) {mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_branch->SetAddress(&mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_);}
	}
	mus_HLT_Mu17_Ele8_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Ele8") != 0) {
		mus_HLT_Mu17_Ele8_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Ele8"));
		if (mus_HLT_Mu17_Ele8_branch) {mus_HLT_Mu17_Ele8_branch->SetAddress(&mus_HLT_Mu17_Ele8_);}
	}
	mus_HLT_Mu17_Ele8_LeadingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Ele8_LeadingLeg") != 0) {
		mus_HLT_Mu17_Ele8_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Ele8_LeadingLeg"));
		if (mus_HLT_Mu17_Ele8_LeadingLeg_branch) {mus_HLT_Mu17_Ele8_LeadingLeg_branch->SetAddress(&mus_HLT_Mu17_Ele8_LeadingLeg_);}
	}
	mus_HLT_Mu17_Mu8_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Mu8") != 0) {
		mus_HLT_Mu17_Mu8_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Mu8"));
		if (mus_HLT_Mu17_Mu8_branch) {mus_HLT_Mu17_Mu8_branch->SetAddress(&mus_HLT_Mu17_Mu8_);}
	}
	mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen") != 0) {
		mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen"));
		if (mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_branch) {mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_branch->SetAddress(&mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_);}
	}
	mus_HLT_Mu17_Mu8_LeadingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Mu8_LeadingLeg") != 0) {
		mus_HLT_Mu17_Mu8_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Mu8_LeadingLeg"));
		if (mus_HLT_Mu17_Mu8_LeadingLeg_branch) {mus_HLT_Mu17_Mu8_LeadingLeg_branch->SetAddress(&mus_HLT_Mu17_Mu8_LeadingLeg_);}
	}
	mus_HLT_Mu17_Mu8_TrailingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_Mu8_TrailingLeg") != 0) {
		mus_HLT_Mu17_Mu8_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_Mu8_TrailingLeg"));
		if (mus_HLT_Mu17_Mu8_TrailingLeg_branch) {mus_HLT_Mu17_Mu8_TrailingLeg_branch->SetAddress(&mus_HLT_Mu17_Mu8_TrailingLeg_);}
	}
	mus_HLT_Mu17_TkMu8_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TkMu8") != 0) {
		mus_HLT_Mu17_TkMu8_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TkMu8"));
		if (mus_HLT_Mu17_TkMu8_branch) {mus_HLT_Mu17_TkMu8_branch->SetAddress(&mus_HLT_Mu17_TkMu8_);}
	}
	mus_HLT_Mu17_TkMu8_LeadingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TkMu8_LeadingLeg") != 0) {
		mus_HLT_Mu17_TkMu8_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TkMu8_LeadingLeg"));
		if (mus_HLT_Mu17_TkMu8_LeadingLeg_branch) {mus_HLT_Mu17_TkMu8_LeadingLeg_branch->SetAddress(&mus_HLT_Mu17_TkMu8_LeadingLeg_);}
	}
	mus_HLT_Mu17_TkMu8_TrailingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TkMu8_TrailingLeg") != 0) {
		mus_HLT_Mu17_TkMu8_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TkMu8_TrailingLeg"));
		if (mus_HLT_Mu17_TkMu8_TrailingLeg_branch) {mus_HLT_Mu17_TkMu8_TrailingLeg_branch->SetAddress(&mus_HLT_Mu17_TkMu8_TrailingLeg_);}
	}
	mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered") != 0) {
		mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered"));
		if (mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_branch) {mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_branch->SetAddress(&mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ"));
		if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch) {mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg"));
		if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_branch) {mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg"));
		if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_branch) {mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ"));
		if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_branch) {mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg"));
		if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_branch) {mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_);}
	}
	mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg") != 0) {
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg"));
		if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_branch) {mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_branch->SetAddress(&mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_);}
	}
	mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg") != 0) {
		mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg"));
		if (mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch) {mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch->SetAddress(&mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_);}
	}
	mus_HLT_Mu8_Ele17_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu8_Ele17") != 0) {
		mus_HLT_Mu8_Ele17_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu8_Ele17"));
		if (mus_HLT_Mu8_Ele17_branch) {mus_HLT_Mu8_Ele17_branch->SetAddress(&mus_HLT_Mu8_Ele17_);}
	}
	mus_HLT_Mu8_Ele17_TrailingLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu8_Ele17_TrailingLeg") != 0) {
		mus_HLT_Mu8_Ele17_TrailingLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu8_Ele17_TrailingLeg"));
		if (mus_HLT_Mu8_Ele17_TrailingLeg_branch) {mus_HLT_Mu8_Ele17_TrailingLeg_branch->SetAddress(&mus_HLT_Mu8_Ele17_TrailingLeg_);}
	}
	mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg") != 0) {
		mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg"));
		if (mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_branch) {mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_branch->SetAddress(&mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_);}
	}
	mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch = 0;
	if (tree->GetAlias("mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg") != 0) {
		mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch = tree->GetBranch(tree->GetAlias("mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg"));
		if (mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch) {mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch->SetAddress(&mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_);}
	}
	evt_event_branch = 0;
	if (tree->GetAlias("evt_event") != 0) {
		evt_event_branch = tree->GetBranch(tree->GetAlias("evt_event"));
		if (evt_event_branch) {evt_event_branch->SetAddress(&evt_event_);}
	}
	evt_timestamp_branch = 0;
	if (tree->GetAlias("evt_timestamp") != 0) {
		evt_timestamp_branch = tree->GetBranch(tree->GetAlias("evt_timestamp"));
		if (evt_timestamp_branch) {evt_timestamp_branch->SetAddress(&evt_timestamp_);}
	}
	evt_nEvts_branch = 0;
	if (tree->GetAlias("evt_nEvts") != 0) {
		evt_nEvts_branch = tree->GetBranch(tree->GetAlias("evt_nEvts"));
		if (evt_nEvts_branch) {evt_nEvts_branch->SetAddress(&evt_nEvts_);}
	}
	evt_nEvts_effective_branch = 0;
	if (tree->GetAlias("evt_nEvts_effective") != 0) {
		evt_nEvts_effective_branch = tree->GetBranch(tree->GetAlias("evt_nEvts_effective"));
		if (evt_nEvts_effective_branch) {evt_nEvts_effective_branch->SetAddress(&evt_nEvts_effective_);}
	}
	evt_filt_eff_branch = 0;
	if (tree->GetAlias("evt_filt_eff") != 0) {
		evt_filt_eff_branch = tree->GetBranch(tree->GetAlias("evt_filt_eff"));
		if (evt_filt_eff_branch) {evt_filt_eff_branch->SetAddress(&evt_filt_eff_);}
	}
  tree->SetMakeClass(0);
}
void GetEntry(unsigned int idx) 
	// this only marks branches as not loaded, saving a lot of time
	{
		index = idx;
		genweightsID_isLoaded = false;
		hlt_bits_isLoaded = false;
		pfjets_nonCHS_bDiscriminatorNames_isLoaded = false;
		evt_CMS3tag_isLoaded = false;
		evt_dataset_isLoaded = false;
		hlt_trigNames_isLoaded = false;
		pfjets_bDiscriminatorNames_isLoaded = false;
		pfjets_puppi_bDiscriminatorNames_isLoaded = false;
		taus_pf_IDnames_isLoaded = false;
		sparm_comment_isLoaded = false;
		sparm_names_isLoaded = false;
		hcalnoise_HasBadRBXTS4TS5_isLoaded = false;
		evt_cscTightHaloId_isLoaded = false;
		evt_hbheFilter_isLoaded = false;
		filt_cscBeamHalo_isLoaded = false;
		filt_ecalLaser_isLoaded = false;
		filt_ecalTP_isLoaded = false;
		filt_eeBadSc_isLoaded = false;
		filt_goodVertices_isLoaded = false;
		filt_hbheNoise_isLoaded = false;
		filt_hcalLaser_isLoaded = false;
		filt_metfilter_isLoaded = false;
		filt_trackingFailure_isLoaded = false;
		filt_trkPOGFilters_isLoaded = false;
		filt_trkPOG_logErrorTooManyClusters_isLoaded = false;
		filt_trkPOG_manystripclus53X_isLoaded = false;
		filt_trkPOG_toomanystripclus53X_isLoaded = false;
		els_conv_vtx_flag_isLoaded = false;
		els_isGsfCtfScPixChargeConsistent_isLoaded = false;
		els_passingMvaPreselection_isLoaded = false;
		els_passingPflowPreselection_isLoaded = false;
		genps_fromHardProcessBeforeFSR_isLoaded = false;
		genps_fromHardProcessDecayed_isLoaded = false;
		genps_fromHardProcessFinalState_isLoaded = false;
		genps_isDirectHardProcessTauDecayProductFinalState_isLoaded = false;
		genps_isDirectPromptTauDecayProductFinalState_isLoaded = false;
		genps_isHardProcess_isLoaded = false;
		genps_isLastCopy_isLoaded = false;
		genps_isLastCopyBeforeFSR_isLoaded = false;
		genps_isMostlyLikePythia6Status3_isLoaded = false;
		genps_isPromptDecayed_isLoaded = false;
		genps_isPromptFinalState_isLoaded = false;
		mus_isRPCMuon_isLoaded = false;
		mus_tightMatch_isLoaded = false;
		mus_updatedSta_isLoaded = false;
		photons_haspixelSeed_isLoaded = false;
		evt_bs_Xwidth_isLoaded = false;
		evt_bs_XwidthErr_isLoaded = false;
		evt_bs_Ywidth_isLoaded = false;
		evt_bs_YwidthErr_isLoaded = false;
		evt_bs_dxdz_isLoaded = false;
		evt_bs_dxdzErr_isLoaded = false;
		evt_bs_dydz_isLoaded = false;
		evt_bs_dydzErr_isLoaded = false;
		evt_bs_sigmaZ_isLoaded = false;
		evt_bs_sigmaZErr_isLoaded = false;
		evt_bs_xErr_isLoaded = false;
		evt_bs_yErr_isLoaded = false;
		evt_bs_zErr_isLoaded = false;
		evt_bField_isLoaded = false;
		evt_fixgrid_all_rho_isLoaded = false;
		evt_fixgridfastjet_allcalo_rho_isLoaded = false;
		evt_fixgridfastjet_all_rho_isLoaded = false;
		evt_fixgridfastjet_centralcalo_rho_isLoaded = false;
		evt_fixgridfastjet_centralchargedpileup_rho_isLoaded = false;
		evt_fixgridfastjet_centralneutral_rho_isLoaded = false;
		evt_kfactor_isLoaded = false;
		evt_scale1fb_isLoaded = false;
		evt_xsec_excl_isLoaded = false;
		evt_xsec_incl_isLoaded = false;
		genps_alphaQCD_isLoaded = false;
		genps_pthat_isLoaded = false;
		genps_qScale_isLoaded = false;
		genps_weight_isLoaded = false;
		gen_sumEt_isLoaded = false;
		hcalnoise_GetRecHitEnergy_isLoaded = false;
		hcalnoise_GetRecHitEnergy15_isLoaded = false;
		hcalnoise_GetTotalCalibCharge_isLoaded = false;
		hcalnoise_TS4TS5NoiseSumE_isLoaded = false;
		hcalnoise_TS4TS5NoiseSumEt_isLoaded = false;
		hcalnoise_eventChargeFraction_isLoaded = false;
		hcalnoise_eventEMEnergy_isLoaded = false;
		hcalnoise_eventEMFraction_isLoaded = false;
		hcalnoise_eventHadEnergy_isLoaded = false;
		hcalnoise_eventTrackEnergy_isLoaded = false;
		hcalnoise_flatNoiseSumE_isLoaded = false;
		hcalnoise_flatNoiseSumEt_isLoaded = false;
		hcalnoise_isolatedNoiseSumE_isLoaded = false;
		hcalnoise_isolatedNoiseSumEt_isLoaded = false;
		hcalnoise_max10GeVHitTime_isLoaded = false;
		hcalnoise_max25GeVHitTime_isLoaded = false;
		hcalnoise_maxE10TS_isLoaded = false;
		hcalnoise_maxE2Over10TS_isLoaded = false;
		hcalnoise_maxE2TS_isLoaded = false;
		hcalnoise_min10GeVHitTime_isLoaded = false;
		hcalnoise_min25GeVHitTime_isLoaded = false;
		hcalnoise_minE10TS_isLoaded = false;
		hcalnoise_minE2Over10TS_isLoaded = false;
		hcalnoise_minE2TS_isLoaded = false;
		hcalnoise_minHPDEMF_isLoaded = false;
		hcalnoise_minRBXEMF_isLoaded = false;
		hcalnoise_rms10GeVHitTime_isLoaded = false;
		hcalnoise_rms25GeVHitTime_isLoaded = false;
		hcalnoise_spikeNoiseSumE_isLoaded = false;
		hcalnoise_spikeNoiseSumEt_isLoaded = false;
		hcalnoise_triangleNoiseSumE_isLoaded = false;
		hcalnoise_triangleNoiseSumEt_isLoaded = false;
		pdfinfo_pdf1_isLoaded = false;
		pdfinfo_pdf2_isLoaded = false;
		pdfinfo_scale_isLoaded = false;
		pdfinfo_x1_isLoaded = false;
		pdfinfo_x2_isLoaded = false;
		evt_fixgrid_rho_all_isLoaded = false;
		evt_fixgrid_rho_ctr_isLoaded = false;
		evt_fixgrid_rho_fwd_isLoaded = false;
		evt_calomet_isLoaded = false;
		evt_calometPhi_isLoaded = false;
		evt_pfmet_isLoaded = false;
		evt_pfmetPhi_isLoaded = false;
		evt_pfmetPhi_raw_isLoaded = false;
		evt_pfmetSig_isLoaded = false;
		evt_pfmet_raw_isLoaded = false;
		evt_pfsumet_isLoaded = false;
		evt_pfsumet_raw_isLoaded = false;
		gen_met_isLoaded = false;
		gen_metPhi_isLoaded = false;
		sparm_filterEfficiency_isLoaded = false;
		sparm_pdfScale_isLoaded = false;
		sparm_pdfWeight1_isLoaded = false;
		sparm_pdfWeight2_isLoaded = false;
		sparm_weight_isLoaded = false;
		sparm_xsec_isLoaded = false;
		evt_bsp4_isLoaded = false;
		pfjets_nonCHS_p4_isLoaded = false;
		ak8jets_mc_gp_p4_isLoaded = false;
		ak8jets_mc_p4_isLoaded = false;
		els_mc_motherp4_isLoaded = false;
		els_mc_p4_isLoaded = false;
		mus_mc_motherp4_isLoaded = false;
		mus_mc_p4_isLoaded = false;
		pfjets_mc_gp_p4_isLoaded = false;
		pfjets_mc_motherp4_isLoaded = false;
		pfjets_mc_p4_isLoaded = false;
		photons_mc_motherp4_isLoaded = false;
		photons_mc_p4_isLoaded = false;
		els_mc_patMatch_p4_isLoaded = false;
		els_p4_isLoaded = false;
		els_p4In_isLoaded = false;
		els_p4Out_isLoaded = false;
		els_trk_p4_isLoaded = false;
		els_trk_vertex_p4_isLoaded = false;
		els_vertex_p4_isLoaded = false;
		genjets_p4NoMuNoNu_isLoaded = false;
		genps_p4_isLoaded = false;
		genps_prod_vtx_isLoaded = false;
		genjets_p4_isLoaded = false;
		hyp_ll_p4_isLoaded = false;
		hyp_lt_p4_isLoaded = false;
		hyp_p4_isLoaded = false;
		isotracks_p4_isLoaded = false;
		mus_gfit_p4_isLoaded = false;
		mus_gfit_vertex_p4_isLoaded = false;
		mus_mc_patMatch_p4_isLoaded = false;
		mus_p4_isLoaded = false;
		mus_pfp4_isLoaded = false;
		mus_sta_p4_isLoaded = false;
		mus_sta_vertex_p4_isLoaded = false;
		mus_trk_p4_isLoaded = false;
		mus_vertex_p4_isLoaded = false;
		pfcands_p4_isLoaded = false;
		pfjets_p4_isLoaded = false;
		pfjets_puppi_p4_isLoaded = false;
		taus_pf_lead_chargecand_p4_isLoaded = false;
		taus_pf_lead_neutrcand_p4_isLoaded = false;
		taus_pf_p4_isLoaded = false;
		photons_p4_isLoaded = false;
		svs_p4_isLoaded = false;
		svs_position_isLoaded = false;
		ak8jets_p4_isLoaded = false;
		vtxs_position_isLoaded = false;
		genps_lepdaughter_p4_isLoaded = false;
		hlt_trigObjs_p4_isLoaded = false;
		taus_pf_isocands_p4_isLoaded = false;
		taus_pf_signalcands_p4_isLoaded = false;
		pfjets_nonCHS_area_isLoaded = false;
		pfjets_nonCHS_chargedEmE_isLoaded = false;
		pfjets_nonCHS_chargedHadronE_isLoaded = false;
		pfjets_nonCHS_electronE_isLoaded = false;
		pfjets_nonCHS_hfEmE_isLoaded = false;
		pfjets_nonCHS_hfHadronE_isLoaded = false;
		pfjets_nonCHS_mass_isLoaded = false;
		pfjets_nonCHS_muonE_isLoaded = false;
		pfjets_nonCHS_neutralEmE_isLoaded = false;
		pfjets_nonCHS_neutralHadronE_isLoaded = false;
		pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded = false;
		pfjets_nonCHS_photonE_isLoaded = false;
		pfjets_nonCHS_pileupJetId_isLoaded = false;
		pfjets_nonCHS_undoJEC_isLoaded = false;
		evt_bs_covMatrix_isLoaded = false;
		els_mc3dr_isLoaded = false;
		els_mcdr_isLoaded = false;
		mus_mc3dr_isLoaded = false;
		mus_mcdr_isLoaded = false;
		pfjets_mc3dr_isLoaded = false;
		pfjets_mcdr_isLoaded = false;
		pfjets_mc_emEnergy_isLoaded = false;
		pfjets_mc_gpdr_isLoaded = false;
		pfjets_mc_hadEnergy_isLoaded = false;
		pfjets_mc_invEnergy_isLoaded = false;
		pfjets_mc_otherEnergy_isLoaded = false;
		photons_mc3dr_isLoaded = false;
		photons_mcdr_isLoaded = false;
		els_bs2d_isLoaded = false;
		els_bs2derr_isLoaded = false;
		els_bs3d_isLoaded = false;
		els_bs3derr_isLoaded = false;
		els_chi2_isLoaded = false;
		els_ckf_chi2_isLoaded = false;
		els_ckf_ndof_isLoaded = false;
		els_d0_isLoaded = false;
		els_d0Err_isLoaded = false;
		els_d0corr_isLoaded = false;
		els_d0corrPhi_isLoaded = false;
		els_d0phiCov_isLoaded = false;
		els_dEtaIn_isLoaded = false;
		els_dEtaOut_isLoaded = false;
		els_dPhiIn_isLoaded = false;
		els_dPhiInPhiOut_isLoaded = false;
		els_dPhiOut_isLoaded = false;
		els_deltaEtaEleClusterTrackAtCalo_isLoaded = false;
		els_deltaPhiEleClusterTrackAtCalo_isLoaded = false;
		els_dxyPV_isLoaded = false;
		els_dzPV_isLoaded = false;
		els_e1x5_isLoaded = false;
		els_e1x5_full5x5_isLoaded = false;
		els_e2x5Max_isLoaded = false;
		els_e2x5Max_full5x5_isLoaded = false;
		els_e5x5_isLoaded = false;
		els_e5x5_full5x5_isLoaded = false;
		els_eOverPIn_isLoaded = false;
		els_eOverPOut_isLoaded = false;
		els_eSC_isLoaded = false;
		els_eSCPresh_isLoaded = false;
		els_eSCRaw_isLoaded = false;
		els_eSeed_isLoaded = false;
		els_eSeedOverPIn_isLoaded = false;
		els_eSeedOverPOut_isLoaded = false;
		els_ecalEnergy_isLoaded = false;
		els_ecalEnergyError_isLoaded = false;
		els_ecalIso_isLoaded = false;
		els_ecalIso04_isLoaded = false;
		els_ecalPFClusterIso_isLoaded = false;
		els_etaErr_isLoaded = false;
		els_etaSC_isLoaded = false;
		els_etaSCwidth_isLoaded = false;
		els_fbrem_isLoaded = false;
		els_hOverE_isLoaded = false;
		els_hOverEBC_isLoaded = false;
		els_hcalDepth1OverEcal_isLoaded = false;
		els_hcalDepth1TowerSumEt_isLoaded = false;
		els_hcalDepth1TowerSumEt04_isLoaded = false;
		els_hcalDepth2OverEcal_isLoaded = false;
		els_hcalDepth2TowerSumEt_isLoaded = false;
		els_hcalDepth2TowerSumEt04_isLoaded = false;
		els_hcalIso_isLoaded = false;
		els_hcalIso04_isLoaded = false;
		els_hcalPFClusterIso_isLoaded = false;
		els_ip2d_isLoaded = false;
		els_ip2derr_isLoaded = false;
		els_ip3d_isLoaded = false;
		els_ip3derr_isLoaded = false;
		els_mass_isLoaded = false;
		els_mc_patMatch_dr_isLoaded = false;
		els_miniIso_ch_isLoaded = false;
		els_miniIso_db_isLoaded = false;
		els_miniIso_em_isLoaded = false;
		els_miniIso_nh_isLoaded = false;
		els_miniIso_uncor_isLoaded = false;
		els_mva_isLoaded = false;
		els_ndof_isLoaded = false;
		els_pfChargedHadronIso_isLoaded = false;
		els_pfNeutralHadronIso_isLoaded = false;
		els_pfPUIso_isLoaded = false;
		els_pfPhotonIso_isLoaded = false;
		els_phiErr_isLoaded = false;
		els_phiSC_isLoaded = false;
		els_phiSCwidth_isLoaded = false;
		els_ptErr_isLoaded = false;
		els_ptErrGsf_isLoaded = false;
		els_r9_isLoaded = false;
		els_r9_full5x5_isLoaded = false;
		els_sigmaEtaEta_isLoaded = false;
		els_sigmaEtaEta_full5x5_isLoaded = false;
		els_sigmaIEtaIEta_isLoaded = false;
		els_sigmaIEtaIEta_full5x5_isLoaded = false;
		els_sigmaIPhiIPhi_isLoaded = false;
		els_sigmaIPhiIPhi_full5x5_isLoaded = false;
		els_sigmaIphiIphi_isLoaded = false;
		els_tkIso_isLoaded = false;
		els_tkIso04_isLoaded = false;
		els_trackMomentumError_isLoaded = false;
		els_trkdr_isLoaded = false;
		els_trkshFrac_isLoaded = false;
		els_z0_isLoaded = false;
		els_z0Err_isLoaded = false;
		els_z0corr_isLoaded = false;
		genps_charge_isLoaded = false;
		genps_iso_isLoaded = false;
		genps_mass_isLoaded = false;
		genweights_isLoaded = false;
		isotracks_dz_isLoaded = false;
		isotracks_mass_isLoaded = false;
		isotracks_relIso_isLoaded = false;
		mus_bs2d_isLoaded = false;
		mus_bs2derr_isLoaded = false;
		mus_bs3d_isLoaded = false;
		mus_bs3derr_isLoaded = false;
		mus_caloCompatibility_isLoaded = false;
		mus_chi2_isLoaded = false;
		mus_chi2LocalMomentum_isLoaded = false;
		mus_chi2LocalPosition_isLoaded = false;
		mus_d0_isLoaded = false;
		mus_d0Err_isLoaded = false;
		mus_d0corr_isLoaded = false;
		mus_d0corrPhi_isLoaded = false;
		mus_d0phiCov_isLoaded = false;
		mus_dxyPV_isLoaded = false;
		mus_dzPV_isLoaded = false;
		mus_ecal_time_isLoaded = false;
		mus_e_em_isLoaded = false;
		mus_e_emS9_isLoaded = false;
		mus_e_had_isLoaded = false;
		mus_e_hadS9_isLoaded = false;
		mus_e_ho_isLoaded = false;
		mus_e_hoS9_isLoaded = false;
		mus_emMax_isLoaded = false;
		mus_emS25_isLoaded = false;
		mus_etaErr_isLoaded = false;
		mus_gfit_chi2_isLoaded = false;
		mus_gfit_d0_isLoaded = false;
		mus_gfit_d0Err_isLoaded = false;
		mus_gfit_d0corr_isLoaded = false;
		mus_gfit_d0corrPhi_isLoaded = false;
		mus_gfit_d0phiCov_isLoaded = false;
		mus_gfit_ndof_isLoaded = false;
		mus_gfit_qoverp_isLoaded = false;
		mus_gfit_qoverpError_isLoaded = false;
		mus_gfit_z0_isLoaded = false;
		mus_gfit_z0Err_isLoaded = false;
		mus_gfit_z0corr_isLoaded = false;
		mus_glbKink_isLoaded = false;
		mus_glbTrackProbability_isLoaded = false;
		mus_globalDeltaEtaPhi_isLoaded = false;
		mus_hadMax_isLoaded = false;
		mus_hcal_time_isLoaded = false;
		mus_ip2d_isLoaded = false;
		mus_ip2derr_isLoaded = false;
		mus_ip3d_isLoaded = false;
		mus_ip3derr_isLoaded = false;
		mus_iso03_emEt_isLoaded = false;
		mus_iso03_hadEt_isLoaded = false;
		mus_iso03_hoEt_isLoaded = false;
		mus_iso03_sumPt_isLoaded = false;
		mus_iso05_emEt_isLoaded = false;
		mus_iso05_hadEt_isLoaded = false;
		mus_iso05_hoEt_isLoaded = false;
		mus_iso05_sumPt_isLoaded = false;
		mus_isoMeanDRR03_pf_ChargedHadronPt_isLoaded = false;
		mus_isoMeanDRR03_pf_ChargedParticlePt_isLoaded = false;
		mus_isoMeanDRR03_pf_NeutralHadronEt_isLoaded = false;
		mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_isLoaded = false;
		mus_isoMeanDRR03_pf_PUPt_isLoaded = false;
		mus_isoMeanDRR03_pf_PhotonEt_isLoaded = false;
		mus_isoMeanDRR03_pf_PhotonEtHighThreshold_isLoaded = false;
		mus_isoMeanDRR04_pf_ChargedHadronPt_isLoaded = false;
		mus_isoMeanDRR04_pf_ChargedParticlePt_isLoaded = false;
		mus_isoMeanDRR04_pf_NeutralHadronEt_isLoaded = false;
		mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_isLoaded = false;
		mus_isoMeanDRR04_pf_PUPt_isLoaded = false;
		mus_isoMeanDRR04_pf_PhotonEt_isLoaded = false;
		mus_isoMeanDRR04_pf_PhotonEtHighThreshold_isLoaded = false;
		mus_isoR03_pf_ChargedHadronPt_isLoaded = false;
		mus_isoR03_pf_ChargedParticlePt_isLoaded = false;
		mus_isoR03_pf_NeutralHadronEt_isLoaded = false;
		mus_isoR03_pf_NeutralHadronEtHighThreshold_isLoaded = false;
		mus_isoR03_pf_PUPt_isLoaded = false;
		mus_isoR03_pf_PhotonEt_isLoaded = false;
		mus_isoR03_pf_PhotonEtHighThreshold_isLoaded = false;
		mus_isoR04_pf_ChargedHadronPt_isLoaded = false;
		mus_isoR04_pf_ChargedParticlePt_isLoaded = false;
		mus_isoR04_pf_NeutralHadronEt_isLoaded = false;
		mus_isoR04_pf_NeutralHadronEtHighThreshold_isLoaded = false;
		mus_isoR04_pf_PUPt_isLoaded = false;
		mus_isoR04_pf_PhotonEt_isLoaded = false;
		mus_isoR04_pf_PhotonEtHighThreshold_isLoaded = false;
		mus_isoSumDRR03_pf_ChargedHadronPt_isLoaded = false;
		mus_isoSumDRR03_pf_ChargedParticlePt_isLoaded = false;
		mus_isoSumDRR03_pf_NeutralHadronEt_isLoaded = false;
		mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_isLoaded = false;
		mus_isoSumDRR03_pf_PUPt_isLoaded = false;
		mus_isoSumDRR03_pf_PhotonEt_isLoaded = false;
		mus_isoSumDRR03_pf_PhotonEtHighThreshold_isLoaded = false;
		mus_isoSumDRR04_pf_ChargedHadronPt_isLoaded = false;
		mus_isoSumDRR04_pf_ChargedParticlePt_isLoaded = false;
		mus_isoSumDRR04_pf_NeutralHadronEt_isLoaded = false;
		mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_isLoaded = false;
		mus_isoSumDRR04_pf_PUPt_isLoaded = false;
		mus_isoSumDRR04_pf_PhotonEt_isLoaded = false;
		mus_isoSumDRR04_pf_PhotonEtHighThreshold_isLoaded = false;
		mus_iso_ecalvetoDep_isLoaded = false;
		mus_iso_hcalvetoDep_isLoaded = false;
		mus_iso_hovetoDep_isLoaded = false;
		mus_iso_trckvetoDep_isLoaded = false;
		mus_localDistance_isLoaded = false;
		mus_mass_isLoaded = false;
		mus_mc_patMatch_dr_isLoaded = false;
		mus_miniIso_ch_isLoaded = false;
		mus_miniIso_db_isLoaded = false;
		mus_miniIso_em_isLoaded = false;
		mus_miniIso_nh_isLoaded = false;
		mus_miniIso_uncor_isLoaded = false;
		mus_ndof_isLoaded = false;
		mus_phiErr_isLoaded = false;
		mus_ptErr_isLoaded = false;
		mus_qoverp_isLoaded = false;
		mus_qoverpError_isLoaded = false;
		mus_segmCompatibility_isLoaded = false;
		mus_staRelChi2_isLoaded = false;
		mus_sta_chi2_isLoaded = false;
		mus_sta_d0_isLoaded = false;
		mus_sta_d0Err_isLoaded = false;
		mus_sta_d0corr_isLoaded = false;
		mus_sta_d0corrPhi_isLoaded = false;
		mus_sta_d0phiCov_isLoaded = false;
		mus_sta_ndof_isLoaded = false;
		mus_sta_qoverp_isLoaded = false;
		mus_sta_qoverpError_isLoaded = false;
		mus_sta_z0_isLoaded = false;
		mus_sta_z0Err_isLoaded = false;
		mus_sta_z0corr_isLoaded = false;
		mus_timeAtIpInOut_isLoaded = false;
		mus_timeAtIpInOutErr_isLoaded = false;
		mus_timeAtIpOutIn_isLoaded = false;
		mus_timeAtIpOutInErr_isLoaded = false;
		mus_trkKink_isLoaded = false;
		mus_trkRelChi2_isLoaded = false;
		mus_vertexphi_isLoaded = false;
		mus_z0_isLoaded = false;
		mus_z0Err_isLoaded = false;
		mus_z0corr_isLoaded = false;
		pfcands_dz_isLoaded = false;
		pfcands_mass_isLoaded = false;
		pfjets_area_isLoaded = false;
		pfjets_chargedEmE_isLoaded = false;
		pfjets_chargedHadronE_isLoaded = false;
		pfjets_electronE_isLoaded = false;
		pfjets_hfEmE_isLoaded = false;
		pfjets_hfHadronE_isLoaded = false;
		pfjets_mass_isLoaded = false;
		pfjets_muonE_isLoaded = false;
		pfjets_neutralEmE_isLoaded = false;
		pfjets_neutralHadronE_isLoaded = false;
		pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded = false;
		pfjets_photonE_isLoaded = false;
		pfjets_pileupJetId_isLoaded = false;
		pfjets_undoJEC_isLoaded = false;
		pfjets_puppi_area_isLoaded = false;
		pfjets_puppi_chargedEmE_isLoaded = false;
		pfjets_puppi_chargedHadronE_isLoaded = false;
		pfjets_puppi_electronE_isLoaded = false;
		pfjets_puppi_hfEmE_isLoaded = false;
		pfjets_puppi_hfHadronE_isLoaded = false;
		pfjets_puppi_mass_isLoaded = false;
		pfjets_puppi_muonE_isLoaded = false;
		pfjets_puppi_neutralEmE_isLoaded = false;
		pfjets_puppi_neutralHadronE_isLoaded = false;
		pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded = false;
		pfjets_puppi_photonE_isLoaded = false;
		pfjets_puppi_pileupJetId_isLoaded = false;
		pfjets_puppi_undoJEC_isLoaded = false;
		taus_pf_mass_isLoaded = false;
		photons_chargedHadronIso_isLoaded = false;
		photons_e1x5_isLoaded = false;
		photons_e2x5Max_isLoaded = false;
		photons_e3x3_isLoaded = false;
		photons_e5x5_isLoaded = false;
		photons_eSC_isLoaded = false;
		photons_eSCPresh_isLoaded = false;
		photons_eSCRaw_isLoaded = false;
		photons_ecalIso03_isLoaded = false;
		photons_ecalIso04_isLoaded = false;
		photons_ecalPFClusterIso_isLoaded = false;
		photons_etaSC_isLoaded = false;
		photons_full3x3_e3x3_isLoaded = false;
		photons_full5x5_e1x5_isLoaded = false;
		photons_full5x5_e2x5Max_isLoaded = false;
		photons_full5x5_e5x5_isLoaded = false;
		photons_full5x5_hOverE_isLoaded = false;
		photons_full5x5_hOverEtowBC_isLoaded = false;
		photons_full5x5_r9_isLoaded = false;
		photons_full5x5_sigmaEtaEta_isLoaded = false;
		photons_full5x5_sigmaIEtaIEta_isLoaded = false;
		photons_hOverE_isLoaded = false;
		photons_hOverEtowBC_isLoaded = false;
		photons_hcalDepth1TowerSumEtBcConeDR03_isLoaded = false;
		photons_hcalDepth1TowerSumEtBcConeDR04_isLoaded = false;
		photons_hcalDepth2TowerSumEtBcConeDR03_isLoaded = false;
		photons_hcalDepth2TowerSumEtBcConeDR04_isLoaded = false;
		photons_hcalIso03_isLoaded = false;
		photons_hcalIso04_isLoaded = false;
		photons_hcalPFClusterIso_isLoaded = false;
		photons_hcalTowerSumEtBcConeDR03_isLoaded = false;
		photons_hcalTowerSumEtBcConeDR04_isLoaded = false;
		photons_mass_isLoaded = false;
		photons_neutralHadronIso_isLoaded = false;
		photons_ntkIsoHollow03_isLoaded = false;
		photons_ntkIsoHollow04_isLoaded = false;
		photons_ntkIsoSolid03_isLoaded = false;
		photons_ntkIsoSolid04_isLoaded = false;
		photons_phiSC_isLoaded = false;
		photons_photonIso_isLoaded = false;
		photons_recoChargedHadronIso_isLoaded = false;
		photons_recoNeutralHadronIso_isLoaded = false;
		photons_recoPhotonIso_isLoaded = false;
		photons_sigmaEtaEta_isLoaded = false;
		photons_sigmaIEtaIEta_isLoaded = false;
		photons_tkIsoHollow03_isLoaded = false;
		photons_tkIsoHollow04_isLoaded = false;
		photons_tkIsoSolid03_isLoaded = false;
		photons_tkIsoSolid04_isLoaded = false;
		puInfo_trueNumInteractions_isLoaded = false;
		convs_chi2_isLoaded = false;
		convs_dl_isLoaded = false;
		convs_ndof_isLoaded = false;
		sparm_values_isLoaded = false;
		svs_anglePV_isLoaded = false;
		svs_chi2_isLoaded = false;
		svs_dist3Dsig_isLoaded = false;
		svs_dist3Dval_isLoaded = false;
		svs_distXYsig_isLoaded = false;
		svs_distXYval_isLoaded = false;
		svs_ndof_isLoaded = false;
		svs_prob_isLoaded = false;
		svs_xError_isLoaded = false;
		svs_yError_isLoaded = false;
		svs_zError_isLoaded = false;
		ak8jets_area_isLoaded = false;
		ak8jets_filteredMass_isLoaded = false;
		ak8jets_mass_isLoaded = false;
		ak8jets_minMass_isLoaded = false;
		ak8jets_nJettinessTau1_isLoaded = false;
		ak8jets_nJettinessTau2_isLoaded = false;
		ak8jets_nJettinessTau3_isLoaded = false;
		ak8jets_prunedMass_isLoaded = false;
		ak8jets_softdropMass_isLoaded = false;
		ak8jets_topMass_isLoaded = false;
		ak8jets_trimmedMass_isLoaded = false;
		ak8jets_undoJEC_isLoaded = false;
		vtxs_chi2_isLoaded = false;
		vtxs_ndof_isLoaded = false;
		vtxs_score_isLoaded = false;
		vtxs_xError_isLoaded = false;
		vtxs_yError_isLoaded = false;
		vtxs_zError_isLoaded = false;
		pfjets_nonCHS_bDiscriminators_isLoaded = false;
		mus_stationShowerDeltaR_isLoaded = false;
		mus_stationShowerSizeT_isLoaded = false;
		pfjets_bDiscriminators_isLoaded = false;
		pfjets_puppi_bDiscriminators_isLoaded = false;
		taus_pf_IDs_isLoaded = false;
		puInfo_instLumi_isLoaded = false;
		vtxs_covMatrix_isLoaded = false;
		evt_bsType_isLoaded = false;
		evt_bunchCrossing_isLoaded = false;
		evt_experimentType_isLoaded = false;
		evt_isRealData_isLoaded = false;
		evt_orbitNumber_isLoaded = false;
		evt_storeNumber_isLoaded = false;
		hcalnoise_GetRecHitCount_isLoaded = false;
		hcalnoise_GetRecHitCount15_isLoaded = false;
		hcalnoise_maxHPDHits_isLoaded = false;
		hcalnoise_maxHPDNoOtherHits_isLoaded = false;
		hcalnoise_maxRBXHits_isLoaded = false;
		hcalnoise_maxZeros_isLoaded = false;
		hcalnoise_noiseFilterStatus_isLoaded = false;
		hcalnoise_noiseType_isLoaded = false;
		hcalnoise_num10GeVHits_isLoaded = false;
		hcalnoise_num25GeVHits_isLoaded = false;
		hcalnoise_numFlatNoiseChannels_isLoaded = false;
		hcalnoise_numIsolatedNoiseChannels_isLoaded = false;
		hcalnoise_numProblematicRBXs_isLoaded = false;
		hcalnoise_numSpikeNoiseChannels_isLoaded = false;
		hcalnoise_numTS4TS5NoiseChannels_isLoaded = false;
		hcalnoise_numTriangleNoiseChannels_isLoaded = false;
		hcalnoise_passHighLevelNoiseFilter_isLoaded = false;
		hcalnoise_passLooseNoiseFilter_isLoaded = false;
		hcalnoise_passTightNoiseFilter_isLoaded = false;
		pdfinfo_id1_isLoaded = false;
		pdfinfo_id2_isLoaded = false;
		sparm_subProcessId_isLoaded = false;
		pfjets_nonCHS_chargedHadronMultiplicity_isLoaded = false;
		pfjets_nonCHS_chargedMultiplicity_isLoaded = false;
		pfjets_nonCHS_electronMultiplicity_isLoaded = false;
		pfjets_nonCHS_muonMultiplicity_isLoaded = false;
		pfjets_nonCHS_neutralHadronMultiplicity_isLoaded = false;
		pfjets_nonCHS_neutralMultiplicity_isLoaded = false;
		pfjets_nonCHS_partonFlavour_isLoaded = false;
		pfjets_nonCHS_photonMultiplicity_isLoaded = false;
		ak8jets_mc_id_isLoaded = false;
		els_mc3_id_isLoaded = false;
		els_mc3idx_isLoaded = false;
		els_mc3_motherid_isLoaded = false;
		els_mc3_motheridx_isLoaded = false;
		els_mc_id_isLoaded = false;
		els_mcidx_isLoaded = false;
		els_mc_motherid_isLoaded = false;
		mus_mc3_id_isLoaded = false;
		mus_mc3idx_isLoaded = false;
		mus_mc3_motherid_isLoaded = false;
		mus_mc3_motheridx_isLoaded = false;
		mus_mc_id_isLoaded = false;
		mus_mcidx_isLoaded = false;
		mus_mc_motherid_isLoaded = false;
		pfjets_mc3_id_isLoaded = false;
		pfjets_mc3idx_isLoaded = false;
		pfjets_mc_gpidx_isLoaded = false;
		pfjets_mc_id_isLoaded = false;
		pfjets_mcidx_isLoaded = false;
		pfjets_mc_motherid_isLoaded = false;
		photons_mc3_id_isLoaded = false;
		photons_mc3idx_isLoaded = false;
		photons_mc3_motherid_isLoaded = false;
		photons_mc3_motheridx_isLoaded = false;
		photons_mc_id_isLoaded = false;
		photons_mcidx_isLoaded = false;
		photons_mc_motherid_isLoaded = false;
		els_category_isLoaded = false;
		els_charge_isLoaded = false;
		els_ckf_charge_isLoaded = false;
		els_ckf_laywithmeas_isLoaded = false;
		els_class_isLoaded = false;
		els_exp_innerlayers_isLoaded = false;
		els_exp_outerlayers_isLoaded = false;
		els_fiduciality_isLoaded = false;
		els_lostHits_isLoaded = false;
		els_lost_pixelhits_isLoaded = false;
		els_mc_patMatch_id_isLoaded = false;
		els_nSeed_isLoaded = false;
		els_nlayers_isLoaded = false;
		els_nlayers3D_isLoaded = false;
		els_nlayersLost_isLoaded = false;
		els_sccharge_isLoaded = false;
		els_trk_charge_isLoaded = false;
		els_type_isLoaded = false;
		els_validHits_isLoaded = false;
		els_valid_pixelhits_isLoaded = false;
		els_passLooseId_isLoaded = false;
		els_passMediumId_isLoaded = false;
		els_passTightId_isLoaded = false;
		els_passVetoId_isLoaded = false;
		genps_id_isLoaded = false;
		genps_id_mother_isLoaded = false;
		genps_id_simplegrandma_isLoaded = false;
		genps_id_simplemother_isLoaded = false;
		genps_idx_mother_isLoaded = false;
		genps_idx_simplemother_isLoaded = false;
		genps_status_isLoaded = false;
		hyp_ll_charge_isLoaded = false;
		hyp_ll_id_isLoaded = false;
		hyp_ll_index_isLoaded = false;
		hyp_lt_charge_isLoaded = false;
		hyp_lt_id_isLoaded = false;
		hyp_lt_index_isLoaded = false;
		hyp_type_isLoaded = false;
		isotracks_charge_isLoaded = false;
		isotracks_particleId_isLoaded = false;
		mus_algo_isLoaded = false;
		mus_charge_isLoaded = false;
		mus_ecal_rawId_isLoaded = false;
		mus_exp_innerlayers_isLoaded = false;
		mus_exp_outerlayers_isLoaded = false;
		mus_gfit_algo_isLoaded = false;
		mus_gfit_etaErr_isLoaded = false;
		mus_gfit_exp_innerlayer_isLoaded = false;
		mus_gfit_exp_outerlayer_isLoaded = false;
		mus_gfit_lostHits_isLoaded = false;
		mus_gfit_lostPixelHits_isLoaded = false;
		mus_gfit_nlayers_isLoaded = false;
		mus_gfit_nlayers3D_isLoaded = false;
		mus_gfit_nlayersLost_isLoaded = false;
		mus_gfit_phiErr_isLoaded = false;
		mus_gfit_ptErr_isLoaded = false;
		mus_gfit_qualityMask_isLoaded = false;
		mus_gfit_trk_charge_isLoaded = false;
		mus_gfit_validHits_isLoaded = false;
		mus_gfit_validPixelHits_isLoaded = false;
		mus_gfit_validSTAHits_isLoaded = false;
		mus_gfit_validSiHits_isLoaded = false;
		mus_goodmask_isLoaded = false;
		mus_hcal_rawId_isLoaded = false;
		mus_iso03_njets_isLoaded = false;
		mus_iso03_ntrk_isLoaded = false;
		mus_iso05_ntrk_isLoaded = false;
		mus_lostHits_isLoaded = false;
		mus_lostPixelHits_isLoaded = false;
		mus_mc_patMatch_id_isLoaded = false;
		mus_muonBestTrackType_isLoaded = false;
		mus_nOverlaps_isLoaded = false;
		mus_nlayers_isLoaded = false;
		mus_nlayers3D_isLoaded = false;
		mus_nlayersLost_isLoaded = false;
		mus_nmatches_isLoaded = false;
		mus_numberOfMatchedStations_isLoaded = false;
		mus_overlap0_isLoaded = false;
		mus_overlap1_isLoaded = false;
		mus_pfcharge_isLoaded = false;
		mus_pfidx_isLoaded = false;
		mus_pfparticleId_isLoaded = false;
		mus_pid_PFMuon_isLoaded = false;
		mus_pid_TM2DCompatibilityLoose_isLoaded = false;
		mus_pid_TM2DCompatibilityTight_isLoaded = false;
		mus_pid_TMLastStationLoose_isLoaded = false;
		mus_pid_TMLastStationTight_isLoaded = false;
		mus_qualityMask_isLoaded = false;
		mus_sta_algo_isLoaded = false;
		mus_sta_etaErr_isLoaded = false;
		mus_sta_exp_innerlayer_isLoaded = false;
		mus_sta_exp_outerlayer_isLoaded = false;
		mus_sta_lostHits_isLoaded = false;
		mus_sta_lostPixelHits_isLoaded = false;
		mus_sta_nlayers_isLoaded = false;
		mus_sta_nlayers3D_isLoaded = false;
		mus_sta_nlayersLost_isLoaded = false;
		mus_sta_phiErr_isLoaded = false;
		mus_sta_ptErr_isLoaded = false;
		mus_sta_qualityMask_isLoaded = false;
		mus_sta_trk_charge_isLoaded = false;
		mus_sta_validHits_isLoaded = false;
		mus_sta_validPixelHits_isLoaded = false;
		mus_timeDirection_isLoaded = false;
		mus_timeNumStationsUsed_isLoaded = false;
		mus_trk_charge_isLoaded = false;
		mus_type_isLoaded = false;
		mus_validHits_isLoaded = false;
		mus_validPixelHits_isLoaded = false;
		pfcands_charge_isLoaded = false;
		pfcands_particleId_isLoaded = false;
		pfjets_chargedHadronMultiplicity_isLoaded = false;
		pfjets_chargedMultiplicity_isLoaded = false;
		pfjets_electronMultiplicity_isLoaded = false;
		pfjets_muonMultiplicity_isLoaded = false;
		pfjets_neutralHadronMultiplicity_isLoaded = false;
		pfjets_neutralMultiplicity_isLoaded = false;
		pfjets_partonFlavour_isLoaded = false;
		pfjets_photonMultiplicity_isLoaded = false;
		pfjets_puppi_chargedHadronMultiplicity_isLoaded = false;
		pfjets_puppi_chargedMultiplicity_isLoaded = false;
		pfjets_puppi_electronMultiplicity_isLoaded = false;
		pfjets_puppi_muonMultiplicity_isLoaded = false;
		pfjets_puppi_neutralHadronMultiplicity_isLoaded = false;
		pfjets_puppi_neutralMultiplicity_isLoaded = false;
		pfjets_puppi_partonFlavour_isLoaded = false;
		pfjets_puppi_photonMultiplicity_isLoaded = false;
		taus_pf_charge_isLoaded = false;
		photons_fiduciality_isLoaded = false;
		photons_photonID_loose_isLoaded = false;
		photons_photonID_tight_isLoaded = false;
		puInfo_bunchCrossing_isLoaded = false;
		puInfo_nPUvertices_isLoaded = false;
		convs_algo_isLoaded = false;
		convs_isConverted_isLoaded = false;
		convs_quality_isLoaded = false;
		svs_nTrks_isLoaded = false;
		ak8jets_nSubJets_isLoaded = false;
		ak8jets_partonFlavour_isLoaded = false;
		vtxs_isFake_isLoaded = false;
		vtxs_isValid_isLoaded = false;
		pfjets_nonCHS_pfcandIndicies_isLoaded = false;
		els_PFCand_idx_isLoaded = false;
		genps_lepdaughter_id_isLoaded = false;
		genps_lepdaughter_idx_isLoaded = false;
		hlt_trigObjs_id_isLoaded = false;
		mus_nStationCorrelatedHits_isLoaded = false;
		mus_nStationHits_isLoaded = false;
		pfjets_pfcandIndicies_isLoaded = false;
		pfjets_puppi_pfcandIndicies_isLoaded = false;
		photons_PFCand_idx_isLoaded = false;
		convs_nHitsBeforeVtx_isLoaded = false;
		convs_tkalgo_isLoaded = false;
		convs_tkidx_isLoaded = false;
		ak8jets_pfcandIndicies_isLoaded = false;
		isotracks_fromPV_isLoaded = false;
		pfcands_fromPV_isLoaded = false;
		els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_isLoaded = false;
		els_HLT_Ele17_Ele8_LeadingLeg_version_isLoaded = false;
		els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_isLoaded = false;
		els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_isLoaded = false;
		els_HLT_Ele17_Ele8_TrailingLeg_version_isLoaded = false;
		els_HLT_Ele17_Ele8_version_isLoaded = false;
		els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_isLoaded = false;
		els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_isLoaded = false;
		els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_isLoaded = false;
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_isLoaded = false;
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_isLoaded = false;
		els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_isLoaded = false;
		els_HLT_Ele25WP60_Ele8_Mass55_version_isLoaded = false;
		els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_isLoaded = false;
		els_HLT_Ele25WP60_SC4_Mass55_version_isLoaded = false;
		els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_isLoaded = false;
		els_HLT_Ele27_WP80_version_isLoaded = false;
		els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_isLoaded = false;
		els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_isLoaded = false;
		els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = false;
		els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_isLoaded = false;
		els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_isLoaded = false;
		els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = false;
		els_HLT_Mu17_Ele8_TrailingLeg_version_isLoaded = false;
		els_HLT_Mu17_Ele8_version_isLoaded = false;
		els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_isLoaded = false;
		els_HLT_Mu8_Ele17_version_isLoaded = false;
		els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_isLoaded = false;
		els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_isLoaded = false;
		evt_nels_isLoaded = false;
		evt_detectorStatus_isLoaded = false;
		evt_lumiBlock_isLoaded = false;
		evt_run_isLoaded = false;
		evt_ngenjetsNoMuNoNu_isLoaded = false;
		genps_signalProcessID_isLoaded = false;
		evt_ngenjets_isLoaded = false;
		mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_isLoaded = false;
		mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_isLoaded = false;
		mus_HLT_IsoMu24_eta2p1_version_isLoaded = false;
		mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_isLoaded = false;
		mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_isLoaded = false;
		mus_HLT_Mu17_Ele8_LeadingLeg_version_isLoaded = false;
		mus_HLT_Mu17_Ele8_version_isLoaded = false;
		mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_isLoaded = false;
		mus_HLT_Mu17_Mu8_LeadingLeg_version_isLoaded = false;
		mus_HLT_Mu17_Mu8_TrailingLeg_version_isLoaded = false;
		mus_HLT_Mu17_Mu8_version_isLoaded = false;
		mus_HLT_Mu17_TkMu8_LeadingLeg_version_isLoaded = false;
		mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_isLoaded = false;
		mus_HLT_Mu17_TkMu8_TrailingLeg_version_isLoaded = false;
		mus_HLT_Mu17_TkMu8_version_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_isLoaded = false;
		mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_isLoaded = false;
		mus_HLT_Mu8_Ele17_TrailingLeg_version_isLoaded = false;
		mus_HLT_Mu8_Ele17_version_isLoaded = false;
		mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_isLoaded = false;
		mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_isLoaded = false;
		evt_nphotons_isLoaded = false;
		evt_nvtxs_isLoaded = false;
		els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_isLoaded = false;
		els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_isLoaded = false;
		els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_isLoaded = false;
		els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded = false;
		els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = false;
		els_HLT_Ele17_Ele8_isLoaded = false;
		els_HLT_Ele17_Ele8_L1sL1DoubleEG137_isLoaded = false;
		els_HLT_Ele17_Ele8_LeadingLeg_isLoaded = false;
		els_HLT_Ele17_Ele8_Mass50_LeadingLeg_isLoaded = false;
		els_HLT_Ele17_Ele8_Mass50_TrailingLeg_isLoaded = false;
		els_HLT_Ele17_Ele8_TrailingLeg_isLoaded = false;
		els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded = false;
		els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = false;
		els_HLT_Ele20_SC4_Mass50_LeadingLeg_isLoaded = false;
		els_HLT_Ele20_SC4_Mass50_TrailingLeg_isLoaded = false;
		els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded = false;
		els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = false;
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_isLoaded = false;
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_isLoaded = false;
		els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_isLoaded = false;
		els_HLT_Ele25WP60_Ele8_Mass55_isLoaded = false;
		els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_isLoaded = false;
		els_HLT_Ele25WP60_SC4_Mass55_isLoaded = false;
		els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_isLoaded = false;
		els_HLT_Ele27_WP80_isLoaded = false;
		els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_isLoaded = false;
		els_HLT_Ele32_SC17_Mass50_LeadingLeg_isLoaded = false;
		els_HLT_Ele32_SC17_Mass50_TrailingLeg_isLoaded = false;
		els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded = false;
		els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = false;
		els_HLT_Ele5_SC5_JPsi_Mass2to4p5_isLoaded = false;
		els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_isLoaded = false;
		els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = false;
		els_HLT_Mu17_Ele8_isLoaded = false;
		els_HLT_Mu17_Ele8_TrailingLeg_isLoaded = false;
		els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_isLoaded = false;
		els_HLT_Mu8_Ele17_isLoaded = false;
		els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_isLoaded = false;
		els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_isLoaded = false;
		hlt_prescales_isLoaded = false;
		mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_isLoaded = false;
		mus_HLT_IsoMu24_eta2p1_isLoaded = false;
		mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_isLoaded = false;
		mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_isLoaded = false;
		mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_isLoaded = false;
		mus_HLT_Mu17_Ele8_isLoaded = false;
		mus_HLT_Mu17_Ele8_LeadingLeg_isLoaded = false;
		mus_HLT_Mu17_Mu8_isLoaded = false;
		mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_isLoaded = false;
		mus_HLT_Mu17_Mu8_LeadingLeg_isLoaded = false;
		mus_HLT_Mu17_Mu8_TrailingLeg_isLoaded = false;
		mus_HLT_Mu17_TkMu8_isLoaded = false;
		mus_HLT_Mu17_TkMu8_LeadingLeg_isLoaded = false;
		mus_HLT_Mu17_TkMu8_TrailingLeg_isLoaded = false;
		mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_isLoaded = false;
		mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_isLoaded = false;
		mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_isLoaded = false;
		mus_HLT_Mu8_Ele17_isLoaded = false;
		mus_HLT_Mu8_Ele17_TrailingLeg_isLoaded = false;
		mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_isLoaded = false;
		mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_isLoaded = false;
		evt_event_isLoaded = false;
		evt_timestamp_isLoaded = false;
		evt_nEvts_isLoaded = false;
		evt_nEvts_effective_isLoaded = false;
		evt_filt_eff_isLoaded = false;
	}

void LoadAllBranches() 
	// load all branches
{
	if (genweightsID_branch != 0) genweightsID();
	if (hlt_bits_branch != 0) hlt_bits();
	if (pfjets_nonCHS_bDiscriminatorNames_branch != 0) pfjets_nonCHS_bDiscriminatorNames();
	if (evt_CMS3tag_branch != 0) evt_CMS3tag();
	if (evt_dataset_branch != 0) evt_dataset();
	if (hlt_trigNames_branch != 0) hlt_trigNames();
	if (pfjets_bDiscriminatorNames_branch != 0) pfjets_bDiscriminatorNames();
	if (pfjets_puppi_bDiscriminatorNames_branch != 0) pfjets_puppi_bDiscriminatorNames();
	if (taus_pf_IDnames_branch != 0) taus_pf_IDnames();
	if (sparm_comment_branch != 0) sparm_comment();
	if (sparm_names_branch != 0) sparm_names();
	if (hcalnoise_HasBadRBXTS4TS5_branch != 0) hcalnoise_HasBadRBXTS4TS5();
	if (evt_cscTightHaloId_branch != 0) evt_cscTightHaloId();
	if (evt_hbheFilter_branch != 0) evt_hbheFilter();
	if (filt_cscBeamHalo_branch != 0) filt_cscBeamHalo();
	if (filt_ecalLaser_branch != 0) filt_ecalLaser();
	if (filt_ecalTP_branch != 0) filt_ecalTP();
	if (filt_eeBadSc_branch != 0) filt_eeBadSc();
	if (filt_goodVertices_branch != 0) filt_goodVertices();
	if (filt_hbheNoise_branch != 0) filt_hbheNoise();
	if (filt_hcalLaser_branch != 0) filt_hcalLaser();
	if (filt_metfilter_branch != 0) filt_metfilter();
	if (filt_trackingFailure_branch != 0) filt_trackingFailure();
	if (filt_trkPOGFilters_branch != 0) filt_trkPOGFilters();
	if (filt_trkPOG_logErrorTooManyClusters_branch != 0) filt_trkPOG_logErrorTooManyClusters();
	if (filt_trkPOG_manystripclus53X_branch != 0) filt_trkPOG_manystripclus53X();
	if (filt_trkPOG_toomanystripclus53X_branch != 0) filt_trkPOG_toomanystripclus53X();
	if (els_conv_vtx_flag_branch != 0) els_conv_vtx_flag();
	if (els_isGsfCtfScPixChargeConsistent_branch != 0) els_isGsfCtfScPixChargeConsistent();
	if (els_passingMvaPreselection_branch != 0) els_passingMvaPreselection();
	if (els_passingPflowPreselection_branch != 0) els_passingPflowPreselection();
	if (genps_fromHardProcessBeforeFSR_branch != 0) genps_fromHardProcessBeforeFSR();
	if (genps_fromHardProcessDecayed_branch != 0) genps_fromHardProcessDecayed();
	if (genps_fromHardProcessFinalState_branch != 0) genps_fromHardProcessFinalState();
	if (genps_isDirectHardProcessTauDecayProductFinalState_branch != 0) genps_isDirectHardProcessTauDecayProductFinalState();
	if (genps_isDirectPromptTauDecayProductFinalState_branch != 0) genps_isDirectPromptTauDecayProductFinalState();
	if (genps_isHardProcess_branch != 0) genps_isHardProcess();
	if (genps_isLastCopy_branch != 0) genps_isLastCopy();
	if (genps_isLastCopyBeforeFSR_branch != 0) genps_isLastCopyBeforeFSR();
	if (genps_isMostlyLikePythia6Status3_branch != 0) genps_isMostlyLikePythia6Status3();
	if (genps_isPromptDecayed_branch != 0) genps_isPromptDecayed();
	if (genps_isPromptFinalState_branch != 0) genps_isPromptFinalState();
	if (mus_isRPCMuon_branch != 0) mus_isRPCMuon();
	if (mus_tightMatch_branch != 0) mus_tightMatch();
	if (mus_updatedSta_branch != 0) mus_updatedSta();
	if (photons_haspixelSeed_branch != 0) photons_haspixelSeed();
	if (evt_bs_Xwidth_branch != 0) evt_bs_Xwidth();
	if (evt_bs_XwidthErr_branch != 0) evt_bs_XwidthErr();
	if (evt_bs_Ywidth_branch != 0) evt_bs_Ywidth();
	if (evt_bs_YwidthErr_branch != 0) evt_bs_YwidthErr();
	if (evt_bs_dxdz_branch != 0) evt_bs_dxdz();
	if (evt_bs_dxdzErr_branch != 0) evt_bs_dxdzErr();
	if (evt_bs_dydz_branch != 0) evt_bs_dydz();
	if (evt_bs_dydzErr_branch != 0) evt_bs_dydzErr();
	if (evt_bs_sigmaZ_branch != 0) evt_bs_sigmaZ();
	if (evt_bs_sigmaZErr_branch != 0) evt_bs_sigmaZErr();
	if (evt_bs_xErr_branch != 0) evt_bs_xErr();
	if (evt_bs_yErr_branch != 0) evt_bs_yErr();
	if (evt_bs_zErr_branch != 0) evt_bs_zErr();
	if (evt_bField_branch != 0) evt_bField();
	if (evt_fixgrid_all_rho_branch != 0) evt_fixgrid_all_rho();
	if (evt_fixgridfastjet_allcalo_rho_branch != 0) evt_fixgridfastjet_allcalo_rho();
	if (evt_fixgridfastjet_all_rho_branch != 0) evt_fixgridfastjet_all_rho();
	if (evt_fixgridfastjet_centralcalo_rho_branch != 0) evt_fixgridfastjet_centralcalo_rho();
	if (evt_fixgridfastjet_centralchargedpileup_rho_branch != 0) evt_fixgridfastjet_centralchargedpileup_rho();
	if (evt_fixgridfastjet_centralneutral_rho_branch != 0) evt_fixgridfastjet_centralneutral_rho();
	if (evt_kfactor_branch != 0) evt_kfactor();
	if (evt_scale1fb_branch != 0) evt_scale1fb();
	if (evt_xsec_excl_branch != 0) evt_xsec_excl();
	if (evt_xsec_incl_branch != 0) evt_xsec_incl();
	if (genps_alphaQCD_branch != 0) genps_alphaQCD();
	if (genps_pthat_branch != 0) genps_pthat();
	if (genps_qScale_branch != 0) genps_qScale();
	if (genps_weight_branch != 0) genps_weight();
	if (gen_sumEt_branch != 0) gen_sumEt();
	if (hcalnoise_GetRecHitEnergy_branch != 0) hcalnoise_GetRecHitEnergy();
	if (hcalnoise_GetRecHitEnergy15_branch != 0) hcalnoise_GetRecHitEnergy15();
	if (hcalnoise_GetTotalCalibCharge_branch != 0) hcalnoise_GetTotalCalibCharge();
	if (hcalnoise_TS4TS5NoiseSumE_branch != 0) hcalnoise_TS4TS5NoiseSumE();
	if (hcalnoise_TS4TS5NoiseSumEt_branch != 0) hcalnoise_TS4TS5NoiseSumEt();
	if (hcalnoise_eventChargeFraction_branch != 0) hcalnoise_eventChargeFraction();
	if (hcalnoise_eventEMEnergy_branch != 0) hcalnoise_eventEMEnergy();
	if (hcalnoise_eventEMFraction_branch != 0) hcalnoise_eventEMFraction();
	if (hcalnoise_eventHadEnergy_branch != 0) hcalnoise_eventHadEnergy();
	if (hcalnoise_eventTrackEnergy_branch != 0) hcalnoise_eventTrackEnergy();
	if (hcalnoise_flatNoiseSumE_branch != 0) hcalnoise_flatNoiseSumE();
	if (hcalnoise_flatNoiseSumEt_branch != 0) hcalnoise_flatNoiseSumEt();
	if (hcalnoise_isolatedNoiseSumE_branch != 0) hcalnoise_isolatedNoiseSumE();
	if (hcalnoise_isolatedNoiseSumEt_branch != 0) hcalnoise_isolatedNoiseSumEt();
	if (hcalnoise_max10GeVHitTime_branch != 0) hcalnoise_max10GeVHitTime();
	if (hcalnoise_max25GeVHitTime_branch != 0) hcalnoise_max25GeVHitTime();
	if (hcalnoise_maxE10TS_branch != 0) hcalnoise_maxE10TS();
	if (hcalnoise_maxE2Over10TS_branch != 0) hcalnoise_maxE2Over10TS();
	if (hcalnoise_maxE2TS_branch != 0) hcalnoise_maxE2TS();
	if (hcalnoise_min10GeVHitTime_branch != 0) hcalnoise_min10GeVHitTime();
	if (hcalnoise_min25GeVHitTime_branch != 0) hcalnoise_min25GeVHitTime();
	if (hcalnoise_minE10TS_branch != 0) hcalnoise_minE10TS();
	if (hcalnoise_minE2Over10TS_branch != 0) hcalnoise_minE2Over10TS();
	if (hcalnoise_minE2TS_branch != 0) hcalnoise_minE2TS();
	if (hcalnoise_minHPDEMF_branch != 0) hcalnoise_minHPDEMF();
	if (hcalnoise_minRBXEMF_branch != 0) hcalnoise_minRBXEMF();
	if (hcalnoise_rms10GeVHitTime_branch != 0) hcalnoise_rms10GeVHitTime();
	if (hcalnoise_rms25GeVHitTime_branch != 0) hcalnoise_rms25GeVHitTime();
	if (hcalnoise_spikeNoiseSumE_branch != 0) hcalnoise_spikeNoiseSumE();
	if (hcalnoise_spikeNoiseSumEt_branch != 0) hcalnoise_spikeNoiseSumEt();
	if (hcalnoise_triangleNoiseSumE_branch != 0) hcalnoise_triangleNoiseSumE();
	if (hcalnoise_triangleNoiseSumEt_branch != 0) hcalnoise_triangleNoiseSumEt();
	if (pdfinfo_pdf1_branch != 0) pdfinfo_pdf1();
	if (pdfinfo_pdf2_branch != 0) pdfinfo_pdf2();
	if (pdfinfo_scale_branch != 0) pdfinfo_scale();
	if (pdfinfo_x1_branch != 0) pdfinfo_x1();
	if (pdfinfo_x2_branch != 0) pdfinfo_x2();
	if (evt_fixgrid_rho_all_branch != 0) evt_fixgrid_rho_all();
	if (evt_fixgrid_rho_ctr_branch != 0) evt_fixgrid_rho_ctr();
	if (evt_fixgrid_rho_fwd_branch != 0) evt_fixgrid_rho_fwd();
	if (evt_calomet_branch != 0) evt_calomet();
	if (evt_calometPhi_branch != 0) evt_calometPhi();
	if (evt_pfmet_branch != 0) evt_pfmet();
	if (evt_pfmetPhi_branch != 0) evt_pfmetPhi();
	if (evt_pfmetPhi_raw_branch != 0) evt_pfmetPhi_raw();
	if (evt_pfmetSig_branch != 0) evt_pfmetSig();
	if (evt_pfmet_raw_branch != 0) evt_pfmet_raw();
	if (evt_pfsumet_branch != 0) evt_pfsumet();
	if (evt_pfsumet_raw_branch != 0) evt_pfsumet_raw();
	if (gen_met_branch != 0) gen_met();
	if (gen_metPhi_branch != 0) gen_metPhi();
	if (sparm_filterEfficiency_branch != 0) sparm_filterEfficiency();
	if (sparm_pdfScale_branch != 0) sparm_pdfScale();
	if (sparm_pdfWeight1_branch != 0) sparm_pdfWeight1();
	if (sparm_pdfWeight2_branch != 0) sparm_pdfWeight2();
	if (sparm_weight_branch != 0) sparm_weight();
	if (sparm_xsec_branch != 0) sparm_xsec();
	if (evt_bsp4_branch != 0) evt_bsp4();
	if (pfjets_nonCHS_p4_branch != 0) pfjets_nonCHS_p4();
	if (ak8jets_mc_gp_p4_branch != 0) ak8jets_mc_gp_p4();
	if (ak8jets_mc_p4_branch != 0) ak8jets_mc_p4();
	if (els_mc_motherp4_branch != 0) els_mc_motherp4();
	if (els_mc_p4_branch != 0) els_mc_p4();
	if (mus_mc_motherp4_branch != 0) mus_mc_motherp4();
	if (mus_mc_p4_branch != 0) mus_mc_p4();
	if (pfjets_mc_gp_p4_branch != 0) pfjets_mc_gp_p4();
	if (pfjets_mc_motherp4_branch != 0) pfjets_mc_motherp4();
	if (pfjets_mc_p4_branch != 0) pfjets_mc_p4();
	if (photons_mc_motherp4_branch != 0) photons_mc_motherp4();
	if (photons_mc_p4_branch != 0) photons_mc_p4();
	if (els_mc_patMatch_p4_branch != 0) els_mc_patMatch_p4();
	if (els_p4_branch != 0) els_p4();
	if (els_p4In_branch != 0) els_p4In();
	if (els_p4Out_branch != 0) els_p4Out();
	if (els_trk_p4_branch != 0) els_trk_p4();
	if (els_trk_vertex_p4_branch != 0) els_trk_vertex_p4();
	if (els_vertex_p4_branch != 0) els_vertex_p4();
	if (genjets_p4NoMuNoNu_branch != 0) genjets_p4NoMuNoNu();
	if (genps_p4_branch != 0) genps_p4();
	if (genps_prod_vtx_branch != 0) genps_prod_vtx();
	if (genjets_p4_branch != 0) genjets_p4();
	if (hyp_ll_p4_branch != 0) hyp_ll_p4();
	if (hyp_lt_p4_branch != 0) hyp_lt_p4();
	if (hyp_p4_branch != 0) hyp_p4();
	if (isotracks_p4_branch != 0) isotracks_p4();
	if (mus_gfit_p4_branch != 0) mus_gfit_p4();
	if (mus_gfit_vertex_p4_branch != 0) mus_gfit_vertex_p4();
	if (mus_mc_patMatch_p4_branch != 0) mus_mc_patMatch_p4();
	if (mus_p4_branch != 0) mus_p4();
	if (mus_pfp4_branch != 0) mus_pfp4();
	if (mus_sta_p4_branch != 0) mus_sta_p4();
	if (mus_sta_vertex_p4_branch != 0) mus_sta_vertex_p4();
	if (mus_trk_p4_branch != 0) mus_trk_p4();
	if (mus_vertex_p4_branch != 0) mus_vertex_p4();
	if (pfcands_p4_branch != 0) pfcands_p4();
	if (pfjets_p4_branch != 0) pfjets_p4();
	if (pfjets_puppi_p4_branch != 0) pfjets_puppi_p4();
	if (taus_pf_lead_chargecand_p4_branch != 0) taus_pf_lead_chargecand_p4();
	if (taus_pf_lead_neutrcand_p4_branch != 0) taus_pf_lead_neutrcand_p4();
	if (taus_pf_p4_branch != 0) taus_pf_p4();
	if (photons_p4_branch != 0) photons_p4();
	if (svs_p4_branch != 0) svs_p4();
	if (svs_position_branch != 0) svs_position();
	if (ak8jets_p4_branch != 0) ak8jets_p4();
	if (vtxs_position_branch != 0) vtxs_position();
	if (genps_lepdaughter_p4_branch != 0) genps_lepdaughter_p4();
	if (hlt_trigObjs_p4_branch != 0) hlt_trigObjs_p4();
	if (taus_pf_isocands_p4_branch != 0) taus_pf_isocands_p4();
	if (taus_pf_signalcands_p4_branch != 0) taus_pf_signalcands_p4();
	if (pfjets_nonCHS_area_branch != 0) pfjets_nonCHS_area();
	if (pfjets_nonCHS_chargedEmE_branch != 0) pfjets_nonCHS_chargedEmE();
	if (pfjets_nonCHS_chargedHadronE_branch != 0) pfjets_nonCHS_chargedHadronE();
	if (pfjets_nonCHS_electronE_branch != 0) pfjets_nonCHS_electronE();
	if (pfjets_nonCHS_hfEmE_branch != 0) pfjets_nonCHS_hfEmE();
	if (pfjets_nonCHS_hfHadronE_branch != 0) pfjets_nonCHS_hfHadronE();
	if (pfjets_nonCHS_mass_branch != 0) pfjets_nonCHS_mass();
	if (pfjets_nonCHS_muonE_branch != 0) pfjets_nonCHS_muonE();
	if (pfjets_nonCHS_neutralEmE_branch != 0) pfjets_nonCHS_neutralEmE();
	if (pfjets_nonCHS_neutralHadronE_branch != 0) pfjets_nonCHS_neutralHadronE();
	if (pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch != 0) pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag();
	if (pfjets_nonCHS_photonE_branch != 0) pfjets_nonCHS_photonE();
	if (pfjets_nonCHS_pileupJetId_branch != 0) pfjets_nonCHS_pileupJetId();
	if (pfjets_nonCHS_undoJEC_branch != 0) pfjets_nonCHS_undoJEC();
	if (evt_bs_covMatrix_branch != 0) evt_bs_covMatrix();
	if (els_mc3dr_branch != 0) els_mc3dr();
	if (els_mcdr_branch != 0) els_mcdr();
	if (mus_mc3dr_branch != 0) mus_mc3dr();
	if (mus_mcdr_branch != 0) mus_mcdr();
	if (pfjets_mc3dr_branch != 0) pfjets_mc3dr();
	if (pfjets_mcdr_branch != 0) pfjets_mcdr();
	if (pfjets_mc_emEnergy_branch != 0) pfjets_mc_emEnergy();
	if (pfjets_mc_gpdr_branch != 0) pfjets_mc_gpdr();
	if (pfjets_mc_hadEnergy_branch != 0) pfjets_mc_hadEnergy();
	if (pfjets_mc_invEnergy_branch != 0) pfjets_mc_invEnergy();
	if (pfjets_mc_otherEnergy_branch != 0) pfjets_mc_otherEnergy();
	if (photons_mc3dr_branch != 0) photons_mc3dr();
	if (photons_mcdr_branch != 0) photons_mcdr();
	if (els_bs2d_branch != 0) els_bs2d();
	if (els_bs2derr_branch != 0) els_bs2derr();
	if (els_bs3d_branch != 0) els_bs3d();
	if (els_bs3derr_branch != 0) els_bs3derr();
	if (els_chi2_branch != 0) els_chi2();
	if (els_ckf_chi2_branch != 0) els_ckf_chi2();
	if (els_ckf_ndof_branch != 0) els_ckf_ndof();
	if (els_d0_branch != 0) els_d0();
	if (els_d0Err_branch != 0) els_d0Err();
	if (els_d0corr_branch != 0) els_d0corr();
	if (els_d0corrPhi_branch != 0) els_d0corrPhi();
	if (els_d0phiCov_branch != 0) els_d0phiCov();
	if (els_dEtaIn_branch != 0) els_dEtaIn();
	if (els_dEtaOut_branch != 0) els_dEtaOut();
	if (els_dPhiIn_branch != 0) els_dPhiIn();
	if (els_dPhiInPhiOut_branch != 0) els_dPhiInPhiOut();
	if (els_dPhiOut_branch != 0) els_dPhiOut();
	if (els_deltaEtaEleClusterTrackAtCalo_branch != 0) els_deltaEtaEleClusterTrackAtCalo();
	if (els_deltaPhiEleClusterTrackAtCalo_branch != 0) els_deltaPhiEleClusterTrackAtCalo();
	if (els_dxyPV_branch != 0) els_dxyPV();
	if (els_dzPV_branch != 0) els_dzPV();
	if (els_e1x5_branch != 0) els_e1x5();
	if (els_e1x5_full5x5_branch != 0) els_e1x5_full5x5();
	if (els_e2x5Max_branch != 0) els_e2x5Max();
	if (els_e2x5Max_full5x5_branch != 0) els_e2x5Max_full5x5();
	if (els_e5x5_branch != 0) els_e5x5();
	if (els_e5x5_full5x5_branch != 0) els_e5x5_full5x5();
	if (els_eOverPIn_branch != 0) els_eOverPIn();
	if (els_eOverPOut_branch != 0) els_eOverPOut();
	if (els_eSC_branch != 0) els_eSC();
	if (els_eSCPresh_branch != 0) els_eSCPresh();
	if (els_eSCRaw_branch != 0) els_eSCRaw();
	if (els_eSeed_branch != 0) els_eSeed();
	if (els_eSeedOverPIn_branch != 0) els_eSeedOverPIn();
	if (els_eSeedOverPOut_branch != 0) els_eSeedOverPOut();
	if (els_ecalEnergy_branch != 0) els_ecalEnergy();
	if (els_ecalEnergyError_branch != 0) els_ecalEnergyError();
	if (els_ecalIso_branch != 0) els_ecalIso();
	if (els_ecalIso04_branch != 0) els_ecalIso04();
	if (els_ecalPFClusterIso_branch != 0) els_ecalPFClusterIso();
	if (els_etaErr_branch != 0) els_etaErr();
	if (els_etaSC_branch != 0) els_etaSC();
	if (els_etaSCwidth_branch != 0) els_etaSCwidth();
	if (els_fbrem_branch != 0) els_fbrem();
	if (els_hOverE_branch != 0) els_hOverE();
	if (els_hOverEBC_branch != 0) els_hOverEBC();
	if (els_hcalDepth1OverEcal_branch != 0) els_hcalDepth1OverEcal();
	if (els_hcalDepth1TowerSumEt_branch != 0) els_hcalDepth1TowerSumEt();
	if (els_hcalDepth1TowerSumEt04_branch != 0) els_hcalDepth1TowerSumEt04();
	if (els_hcalDepth2OverEcal_branch != 0) els_hcalDepth2OverEcal();
	if (els_hcalDepth2TowerSumEt_branch != 0) els_hcalDepth2TowerSumEt();
	if (els_hcalDepth2TowerSumEt04_branch != 0) els_hcalDepth2TowerSumEt04();
	if (els_hcalIso_branch != 0) els_hcalIso();
	if (els_hcalIso04_branch != 0) els_hcalIso04();
	if (els_hcalPFClusterIso_branch != 0) els_hcalPFClusterIso();
	if (els_ip2d_branch != 0) els_ip2d();
	if (els_ip2derr_branch != 0) els_ip2derr();
	if (els_ip3d_branch != 0) els_ip3d();
	if (els_ip3derr_branch != 0) els_ip3derr();
	if (els_mass_branch != 0) els_mass();
	if (els_mc_patMatch_dr_branch != 0) els_mc_patMatch_dr();
	if (els_miniIso_ch_branch != 0) els_miniIso_ch();
	if (els_miniIso_db_branch != 0) els_miniIso_db();
	if (els_miniIso_em_branch != 0) els_miniIso_em();
	if (els_miniIso_nh_branch != 0) els_miniIso_nh();
	if (els_miniIso_uncor_branch != 0) els_miniIso_uncor();
	if (els_mva_branch != 0) els_mva();
	if (els_ndof_branch != 0) els_ndof();
	if (els_pfChargedHadronIso_branch != 0) els_pfChargedHadronIso();
	if (els_pfNeutralHadronIso_branch != 0) els_pfNeutralHadronIso();
	if (els_pfPUIso_branch != 0) els_pfPUIso();
	if (els_pfPhotonIso_branch != 0) els_pfPhotonIso();
	if (els_phiErr_branch != 0) els_phiErr();
	if (els_phiSC_branch != 0) els_phiSC();
	if (els_phiSCwidth_branch != 0) els_phiSCwidth();
	if (els_ptErr_branch != 0) els_ptErr();
	if (els_ptErrGsf_branch != 0) els_ptErrGsf();
	if (els_r9_branch != 0) els_r9();
	if (els_r9_full5x5_branch != 0) els_r9_full5x5();
	if (els_sigmaEtaEta_branch != 0) els_sigmaEtaEta();
	if (els_sigmaEtaEta_full5x5_branch != 0) els_sigmaEtaEta_full5x5();
	if (els_sigmaIEtaIEta_branch != 0) els_sigmaIEtaIEta();
	if (els_sigmaIEtaIEta_full5x5_branch != 0) els_sigmaIEtaIEta_full5x5();
	if (els_sigmaIPhiIPhi_branch != 0) els_sigmaIPhiIPhi();
	if (els_sigmaIPhiIPhi_full5x5_branch != 0) els_sigmaIPhiIPhi_full5x5();
	if (els_sigmaIphiIphi_branch != 0) els_sigmaIphiIphi();
	if (els_tkIso_branch != 0) els_tkIso();
	if (els_tkIso04_branch != 0) els_tkIso04();
	if (els_trackMomentumError_branch != 0) els_trackMomentumError();
	if (els_trkdr_branch != 0) els_trkdr();
	if (els_trkshFrac_branch != 0) els_trkshFrac();
	if (els_z0_branch != 0) els_z0();
	if (els_z0Err_branch != 0) els_z0Err();
	if (els_z0corr_branch != 0) els_z0corr();
	if (genps_charge_branch != 0) genps_charge();
	if (genps_iso_branch != 0) genps_iso();
	if (genps_mass_branch != 0) genps_mass();
	if (genweights_branch != 0) genweights();
	if (isotracks_dz_branch != 0) isotracks_dz();
	if (isotracks_mass_branch != 0) isotracks_mass();
	if (isotracks_relIso_branch != 0) isotracks_relIso();
	if (mus_bs2d_branch != 0) mus_bs2d();
	if (mus_bs2derr_branch != 0) mus_bs2derr();
	if (mus_bs3d_branch != 0) mus_bs3d();
	if (mus_bs3derr_branch != 0) mus_bs3derr();
	if (mus_caloCompatibility_branch != 0) mus_caloCompatibility();
	if (mus_chi2_branch != 0) mus_chi2();
	if (mus_chi2LocalMomentum_branch != 0) mus_chi2LocalMomentum();
	if (mus_chi2LocalPosition_branch != 0) mus_chi2LocalPosition();
	if (mus_d0_branch != 0) mus_d0();
	if (mus_d0Err_branch != 0) mus_d0Err();
	if (mus_d0corr_branch != 0) mus_d0corr();
	if (mus_d0corrPhi_branch != 0) mus_d0corrPhi();
	if (mus_d0phiCov_branch != 0) mus_d0phiCov();
	if (mus_dxyPV_branch != 0) mus_dxyPV();
	if (mus_dzPV_branch != 0) mus_dzPV();
	if (mus_ecal_time_branch != 0) mus_ecal_time();
	if (mus_e_em_branch != 0) mus_e_em();
	if (mus_e_emS9_branch != 0) mus_e_emS9();
	if (mus_e_had_branch != 0) mus_e_had();
	if (mus_e_hadS9_branch != 0) mus_e_hadS9();
	if (mus_e_ho_branch != 0) mus_e_ho();
	if (mus_e_hoS9_branch != 0) mus_e_hoS9();
	if (mus_emMax_branch != 0) mus_emMax();
	if (mus_emS25_branch != 0) mus_emS25();
	if (mus_etaErr_branch != 0) mus_etaErr();
	if (mus_gfit_chi2_branch != 0) mus_gfit_chi2();
	if (mus_gfit_d0_branch != 0) mus_gfit_d0();
	if (mus_gfit_d0Err_branch != 0) mus_gfit_d0Err();
	if (mus_gfit_d0corr_branch != 0) mus_gfit_d0corr();
	if (mus_gfit_d0corrPhi_branch != 0) mus_gfit_d0corrPhi();
	if (mus_gfit_d0phiCov_branch != 0) mus_gfit_d0phiCov();
	if (mus_gfit_ndof_branch != 0) mus_gfit_ndof();
	if (mus_gfit_qoverp_branch != 0) mus_gfit_qoverp();
	if (mus_gfit_qoverpError_branch != 0) mus_gfit_qoverpError();
	if (mus_gfit_z0_branch != 0) mus_gfit_z0();
	if (mus_gfit_z0Err_branch != 0) mus_gfit_z0Err();
	if (mus_gfit_z0corr_branch != 0) mus_gfit_z0corr();
	if (mus_glbKink_branch != 0) mus_glbKink();
	if (mus_glbTrackProbability_branch != 0) mus_glbTrackProbability();
	if (mus_globalDeltaEtaPhi_branch != 0) mus_globalDeltaEtaPhi();
	if (mus_hadMax_branch != 0) mus_hadMax();
	if (mus_hcal_time_branch != 0) mus_hcal_time();
	if (mus_ip2d_branch != 0) mus_ip2d();
	if (mus_ip2derr_branch != 0) mus_ip2derr();
	if (mus_ip3d_branch != 0) mus_ip3d();
	if (mus_ip3derr_branch != 0) mus_ip3derr();
	if (mus_iso03_emEt_branch != 0) mus_iso03_emEt();
	if (mus_iso03_hadEt_branch != 0) mus_iso03_hadEt();
	if (mus_iso03_hoEt_branch != 0) mus_iso03_hoEt();
	if (mus_iso03_sumPt_branch != 0) mus_iso03_sumPt();
	if (mus_iso05_emEt_branch != 0) mus_iso05_emEt();
	if (mus_iso05_hadEt_branch != 0) mus_iso05_hadEt();
	if (mus_iso05_hoEt_branch != 0) mus_iso05_hoEt();
	if (mus_iso05_sumPt_branch != 0) mus_iso05_sumPt();
	if (mus_isoMeanDRR03_pf_ChargedHadronPt_branch != 0) mus_isoMeanDRR03_pf_ChargedHadronPt();
	if (mus_isoMeanDRR03_pf_ChargedParticlePt_branch != 0) mus_isoMeanDRR03_pf_ChargedParticlePt();
	if (mus_isoMeanDRR03_pf_NeutralHadronEt_branch != 0) mus_isoMeanDRR03_pf_NeutralHadronEt();
	if (mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_branch != 0) mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold();
	if (mus_isoMeanDRR03_pf_PUPt_branch != 0) mus_isoMeanDRR03_pf_PUPt();
	if (mus_isoMeanDRR03_pf_PhotonEt_branch != 0) mus_isoMeanDRR03_pf_PhotonEt();
	if (mus_isoMeanDRR03_pf_PhotonEtHighThreshold_branch != 0) mus_isoMeanDRR03_pf_PhotonEtHighThreshold();
	if (mus_isoMeanDRR04_pf_ChargedHadronPt_branch != 0) mus_isoMeanDRR04_pf_ChargedHadronPt();
	if (mus_isoMeanDRR04_pf_ChargedParticlePt_branch != 0) mus_isoMeanDRR04_pf_ChargedParticlePt();
	if (mus_isoMeanDRR04_pf_NeutralHadronEt_branch != 0) mus_isoMeanDRR04_pf_NeutralHadronEt();
	if (mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_branch != 0) mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold();
	if (mus_isoMeanDRR04_pf_PUPt_branch != 0) mus_isoMeanDRR04_pf_PUPt();
	if (mus_isoMeanDRR04_pf_PhotonEt_branch != 0) mus_isoMeanDRR04_pf_PhotonEt();
	if (mus_isoMeanDRR04_pf_PhotonEtHighThreshold_branch != 0) mus_isoMeanDRR04_pf_PhotonEtHighThreshold();
	if (mus_isoR03_pf_ChargedHadronPt_branch != 0) mus_isoR03_pf_ChargedHadronPt();
	if (mus_isoR03_pf_ChargedParticlePt_branch != 0) mus_isoR03_pf_ChargedParticlePt();
	if (mus_isoR03_pf_NeutralHadronEt_branch != 0) mus_isoR03_pf_NeutralHadronEt();
	if (mus_isoR03_pf_NeutralHadronEtHighThreshold_branch != 0) mus_isoR03_pf_NeutralHadronEtHighThreshold();
	if (mus_isoR03_pf_PUPt_branch != 0) mus_isoR03_pf_PUPt();
	if (mus_isoR03_pf_PhotonEt_branch != 0) mus_isoR03_pf_PhotonEt();
	if (mus_isoR03_pf_PhotonEtHighThreshold_branch != 0) mus_isoR03_pf_PhotonEtHighThreshold();
	if (mus_isoR04_pf_ChargedHadronPt_branch != 0) mus_isoR04_pf_ChargedHadronPt();
	if (mus_isoR04_pf_ChargedParticlePt_branch != 0) mus_isoR04_pf_ChargedParticlePt();
	if (mus_isoR04_pf_NeutralHadronEt_branch != 0) mus_isoR04_pf_NeutralHadronEt();
	if (mus_isoR04_pf_NeutralHadronEtHighThreshold_branch != 0) mus_isoR04_pf_NeutralHadronEtHighThreshold();
	if (mus_isoR04_pf_PUPt_branch != 0) mus_isoR04_pf_PUPt();
	if (mus_isoR04_pf_PhotonEt_branch != 0) mus_isoR04_pf_PhotonEt();
	if (mus_isoR04_pf_PhotonEtHighThreshold_branch != 0) mus_isoR04_pf_PhotonEtHighThreshold();
	if (mus_isoSumDRR03_pf_ChargedHadronPt_branch != 0) mus_isoSumDRR03_pf_ChargedHadronPt();
	if (mus_isoSumDRR03_pf_ChargedParticlePt_branch != 0) mus_isoSumDRR03_pf_ChargedParticlePt();
	if (mus_isoSumDRR03_pf_NeutralHadronEt_branch != 0) mus_isoSumDRR03_pf_NeutralHadronEt();
	if (mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_branch != 0) mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold();
	if (mus_isoSumDRR03_pf_PUPt_branch != 0) mus_isoSumDRR03_pf_PUPt();
	if (mus_isoSumDRR03_pf_PhotonEt_branch != 0) mus_isoSumDRR03_pf_PhotonEt();
	if (mus_isoSumDRR03_pf_PhotonEtHighThreshold_branch != 0) mus_isoSumDRR03_pf_PhotonEtHighThreshold();
	if (mus_isoSumDRR04_pf_ChargedHadronPt_branch != 0) mus_isoSumDRR04_pf_ChargedHadronPt();
	if (mus_isoSumDRR04_pf_ChargedParticlePt_branch != 0) mus_isoSumDRR04_pf_ChargedParticlePt();
	if (mus_isoSumDRR04_pf_NeutralHadronEt_branch != 0) mus_isoSumDRR04_pf_NeutralHadronEt();
	if (mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_branch != 0) mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold();
	if (mus_isoSumDRR04_pf_PUPt_branch != 0) mus_isoSumDRR04_pf_PUPt();
	if (mus_isoSumDRR04_pf_PhotonEt_branch != 0) mus_isoSumDRR04_pf_PhotonEt();
	if (mus_isoSumDRR04_pf_PhotonEtHighThreshold_branch != 0) mus_isoSumDRR04_pf_PhotonEtHighThreshold();
	if (mus_iso_ecalvetoDep_branch != 0) mus_iso_ecalvetoDep();
	if (mus_iso_hcalvetoDep_branch != 0) mus_iso_hcalvetoDep();
	if (mus_iso_hovetoDep_branch != 0) mus_iso_hovetoDep();
	if (mus_iso_trckvetoDep_branch != 0) mus_iso_trckvetoDep();
	if (mus_localDistance_branch != 0) mus_localDistance();
	if (mus_mass_branch != 0) mus_mass();
	if (mus_mc_patMatch_dr_branch != 0) mus_mc_patMatch_dr();
	if (mus_miniIso_ch_branch != 0) mus_miniIso_ch();
	if (mus_miniIso_db_branch != 0) mus_miniIso_db();
	if (mus_miniIso_em_branch != 0) mus_miniIso_em();
	if (mus_miniIso_nh_branch != 0) mus_miniIso_nh();
	if (mus_miniIso_uncor_branch != 0) mus_miniIso_uncor();
	if (mus_ndof_branch != 0) mus_ndof();
	if (mus_phiErr_branch != 0) mus_phiErr();
	if (mus_ptErr_branch != 0) mus_ptErr();
	if (mus_qoverp_branch != 0) mus_qoverp();
	if (mus_qoverpError_branch != 0) mus_qoverpError();
	if (mus_segmCompatibility_branch != 0) mus_segmCompatibility();
	if (mus_staRelChi2_branch != 0) mus_staRelChi2();
	if (mus_sta_chi2_branch != 0) mus_sta_chi2();
	if (mus_sta_d0_branch != 0) mus_sta_d0();
	if (mus_sta_d0Err_branch != 0) mus_sta_d0Err();
	if (mus_sta_d0corr_branch != 0) mus_sta_d0corr();
	if (mus_sta_d0corrPhi_branch != 0) mus_sta_d0corrPhi();
	if (mus_sta_d0phiCov_branch != 0) mus_sta_d0phiCov();
	if (mus_sta_ndof_branch != 0) mus_sta_ndof();
	if (mus_sta_qoverp_branch != 0) mus_sta_qoverp();
	if (mus_sta_qoverpError_branch != 0) mus_sta_qoverpError();
	if (mus_sta_z0_branch != 0) mus_sta_z0();
	if (mus_sta_z0Err_branch != 0) mus_sta_z0Err();
	if (mus_sta_z0corr_branch != 0) mus_sta_z0corr();
	if (mus_timeAtIpInOut_branch != 0) mus_timeAtIpInOut();
	if (mus_timeAtIpInOutErr_branch != 0) mus_timeAtIpInOutErr();
	if (mus_timeAtIpOutIn_branch != 0) mus_timeAtIpOutIn();
	if (mus_timeAtIpOutInErr_branch != 0) mus_timeAtIpOutInErr();
	if (mus_trkKink_branch != 0) mus_trkKink();
	if (mus_trkRelChi2_branch != 0) mus_trkRelChi2();
	if (mus_vertexphi_branch != 0) mus_vertexphi();
	if (mus_z0_branch != 0) mus_z0();
	if (mus_z0Err_branch != 0) mus_z0Err();
	if (mus_z0corr_branch != 0) mus_z0corr();
	if (pfcands_dz_branch != 0) pfcands_dz();
	if (pfcands_mass_branch != 0) pfcands_mass();
	if (pfjets_area_branch != 0) pfjets_area();
	if (pfjets_chargedEmE_branch != 0) pfjets_chargedEmE();
	if (pfjets_chargedHadronE_branch != 0) pfjets_chargedHadronE();
	if (pfjets_electronE_branch != 0) pfjets_electronE();
	if (pfjets_hfEmE_branch != 0) pfjets_hfEmE();
	if (pfjets_hfHadronE_branch != 0) pfjets_hfHadronE();
	if (pfjets_mass_branch != 0) pfjets_mass();
	if (pfjets_muonE_branch != 0) pfjets_muonE();
	if (pfjets_neutralEmE_branch != 0) pfjets_neutralEmE();
	if (pfjets_neutralHadronE_branch != 0) pfjets_neutralHadronE();
	if (pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch != 0) pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag();
	if (pfjets_photonE_branch != 0) pfjets_photonE();
	if (pfjets_pileupJetId_branch != 0) pfjets_pileupJetId();
	if (pfjets_undoJEC_branch != 0) pfjets_undoJEC();
	if (pfjets_puppi_area_branch != 0) pfjets_puppi_area();
	if (pfjets_puppi_chargedEmE_branch != 0) pfjets_puppi_chargedEmE();
	if (pfjets_puppi_chargedHadronE_branch != 0) pfjets_puppi_chargedHadronE();
	if (pfjets_puppi_electronE_branch != 0) pfjets_puppi_electronE();
	if (pfjets_puppi_hfEmE_branch != 0) pfjets_puppi_hfEmE();
	if (pfjets_puppi_hfHadronE_branch != 0) pfjets_puppi_hfHadronE();
	if (pfjets_puppi_mass_branch != 0) pfjets_puppi_mass();
	if (pfjets_puppi_muonE_branch != 0) pfjets_puppi_muonE();
	if (pfjets_puppi_neutralEmE_branch != 0) pfjets_puppi_neutralEmE();
	if (pfjets_puppi_neutralHadronE_branch != 0) pfjets_puppi_neutralHadronE();
	if (pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch != 0) pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag();
	if (pfjets_puppi_photonE_branch != 0) pfjets_puppi_photonE();
	if (pfjets_puppi_pileupJetId_branch != 0) pfjets_puppi_pileupJetId();
	if (pfjets_puppi_undoJEC_branch != 0) pfjets_puppi_undoJEC();
	if (taus_pf_mass_branch != 0) taus_pf_mass();
	if (photons_chargedHadronIso_branch != 0) photons_chargedHadronIso();
	if (photons_e1x5_branch != 0) photons_e1x5();
	if (photons_e2x5Max_branch != 0) photons_e2x5Max();
	if (photons_e3x3_branch != 0) photons_e3x3();
	if (photons_e5x5_branch != 0) photons_e5x5();
	if (photons_eSC_branch != 0) photons_eSC();
	if (photons_eSCPresh_branch != 0) photons_eSCPresh();
	if (photons_eSCRaw_branch != 0) photons_eSCRaw();
	if (photons_ecalIso03_branch != 0) photons_ecalIso03();
	if (photons_ecalIso04_branch != 0) photons_ecalIso04();
	if (photons_ecalPFClusterIso_branch != 0) photons_ecalPFClusterIso();
	if (photons_etaSC_branch != 0) photons_etaSC();
	if (photons_full3x3_e3x3_branch != 0) photons_full3x3_e3x3();
	if (photons_full5x5_e1x5_branch != 0) photons_full5x5_e1x5();
	if (photons_full5x5_e2x5Max_branch != 0) photons_full5x5_e2x5Max();
	if (photons_full5x5_e5x5_branch != 0) photons_full5x5_e5x5();
	if (photons_full5x5_hOverE_branch != 0) photons_full5x5_hOverE();
	if (photons_full5x5_hOverEtowBC_branch != 0) photons_full5x5_hOverEtowBC();
	if (photons_full5x5_r9_branch != 0) photons_full5x5_r9();
	if (photons_full5x5_sigmaEtaEta_branch != 0) photons_full5x5_sigmaEtaEta();
	if (photons_full5x5_sigmaIEtaIEta_branch != 0) photons_full5x5_sigmaIEtaIEta();
	if (photons_hOverE_branch != 0) photons_hOverE();
	if (photons_hOverEtowBC_branch != 0) photons_hOverEtowBC();
	if (photons_hcalDepth1TowerSumEtBcConeDR03_branch != 0) photons_hcalDepth1TowerSumEtBcConeDR03();
	if (photons_hcalDepth1TowerSumEtBcConeDR04_branch != 0) photons_hcalDepth1TowerSumEtBcConeDR04();
	if (photons_hcalDepth2TowerSumEtBcConeDR03_branch != 0) photons_hcalDepth2TowerSumEtBcConeDR03();
	if (photons_hcalDepth2TowerSumEtBcConeDR04_branch != 0) photons_hcalDepth2TowerSumEtBcConeDR04();
	if (photons_hcalIso03_branch != 0) photons_hcalIso03();
	if (photons_hcalIso04_branch != 0) photons_hcalIso04();
	if (photons_hcalPFClusterIso_branch != 0) photons_hcalPFClusterIso();
	if (photons_hcalTowerSumEtBcConeDR03_branch != 0) photons_hcalTowerSumEtBcConeDR03();
	if (photons_hcalTowerSumEtBcConeDR04_branch != 0) photons_hcalTowerSumEtBcConeDR04();
	if (photons_mass_branch != 0) photons_mass();
	if (photons_neutralHadronIso_branch != 0) photons_neutralHadronIso();
	if (photons_ntkIsoHollow03_branch != 0) photons_ntkIsoHollow03();
	if (photons_ntkIsoHollow04_branch != 0) photons_ntkIsoHollow04();
	if (photons_ntkIsoSolid03_branch != 0) photons_ntkIsoSolid03();
	if (photons_ntkIsoSolid04_branch != 0) photons_ntkIsoSolid04();
	if (photons_phiSC_branch != 0) photons_phiSC();
	if (photons_photonIso_branch != 0) photons_photonIso();
	if (photons_recoChargedHadronIso_branch != 0) photons_recoChargedHadronIso();
	if (photons_recoNeutralHadronIso_branch != 0) photons_recoNeutralHadronIso();
	if (photons_recoPhotonIso_branch != 0) photons_recoPhotonIso();
	if (photons_sigmaEtaEta_branch != 0) photons_sigmaEtaEta();
	if (photons_sigmaIEtaIEta_branch != 0) photons_sigmaIEtaIEta();
	if (photons_tkIsoHollow03_branch != 0) photons_tkIsoHollow03();
	if (photons_tkIsoHollow04_branch != 0) photons_tkIsoHollow04();
	if (photons_tkIsoSolid03_branch != 0) photons_tkIsoSolid03();
	if (photons_tkIsoSolid04_branch != 0) photons_tkIsoSolid04();
	if (puInfo_trueNumInteractions_branch != 0) puInfo_trueNumInteractions();
	if (convs_chi2_branch != 0) convs_chi2();
	if (convs_dl_branch != 0) convs_dl();
	if (convs_ndof_branch != 0) convs_ndof();
	if (sparm_values_branch != 0) sparm_values();
	if (svs_anglePV_branch != 0) svs_anglePV();
	if (svs_chi2_branch != 0) svs_chi2();
	if (svs_dist3Dsig_branch != 0) svs_dist3Dsig();
	if (svs_dist3Dval_branch != 0) svs_dist3Dval();
	if (svs_distXYsig_branch != 0) svs_distXYsig();
	if (svs_distXYval_branch != 0) svs_distXYval();
	if (svs_ndof_branch != 0) svs_ndof();
	if (svs_prob_branch != 0) svs_prob();
	if (svs_xError_branch != 0) svs_xError();
	if (svs_yError_branch != 0) svs_yError();
	if (svs_zError_branch != 0) svs_zError();
	if (ak8jets_area_branch != 0) ak8jets_area();
	if (ak8jets_filteredMass_branch != 0) ak8jets_filteredMass();
	if (ak8jets_mass_branch != 0) ak8jets_mass();
	if (ak8jets_minMass_branch != 0) ak8jets_minMass();
	if (ak8jets_nJettinessTau1_branch != 0) ak8jets_nJettinessTau1();
	if (ak8jets_nJettinessTau2_branch != 0) ak8jets_nJettinessTau2();
	if (ak8jets_nJettinessTau3_branch != 0) ak8jets_nJettinessTau3();
	if (ak8jets_prunedMass_branch != 0) ak8jets_prunedMass();
	if (ak8jets_softdropMass_branch != 0) ak8jets_softdropMass();
	if (ak8jets_topMass_branch != 0) ak8jets_topMass();
	if (ak8jets_trimmedMass_branch != 0) ak8jets_trimmedMass();
	if (ak8jets_undoJEC_branch != 0) ak8jets_undoJEC();
	if (vtxs_chi2_branch != 0) vtxs_chi2();
	if (vtxs_ndof_branch != 0) vtxs_ndof();
	if (vtxs_score_branch != 0) vtxs_score();
	if (vtxs_xError_branch != 0) vtxs_xError();
	if (vtxs_yError_branch != 0) vtxs_yError();
	if (vtxs_zError_branch != 0) vtxs_zError();
	if (pfjets_nonCHS_bDiscriminators_branch != 0) pfjets_nonCHS_bDiscriminators();
	if (mus_stationShowerDeltaR_branch != 0) mus_stationShowerDeltaR();
	if (mus_stationShowerSizeT_branch != 0) mus_stationShowerSizeT();
	if (pfjets_bDiscriminators_branch != 0) pfjets_bDiscriminators();
	if (pfjets_puppi_bDiscriminators_branch != 0) pfjets_puppi_bDiscriminators();
	if (taus_pf_IDs_branch != 0) taus_pf_IDs();
	if (puInfo_instLumi_branch != 0) puInfo_instLumi();
	if (vtxs_covMatrix_branch != 0) vtxs_covMatrix();
	if (evt_bsType_branch != 0) evt_bsType();
	if (evt_bunchCrossing_branch != 0) evt_bunchCrossing();
	if (evt_experimentType_branch != 0) evt_experimentType();
	if (evt_isRealData_branch != 0) evt_isRealData();
	if (evt_orbitNumber_branch != 0) evt_orbitNumber();
	if (evt_storeNumber_branch != 0) evt_storeNumber();
	if (hcalnoise_GetRecHitCount_branch != 0) hcalnoise_GetRecHitCount();
	if (hcalnoise_GetRecHitCount15_branch != 0) hcalnoise_GetRecHitCount15();
	if (hcalnoise_maxHPDHits_branch != 0) hcalnoise_maxHPDHits();
	if (hcalnoise_maxHPDNoOtherHits_branch != 0) hcalnoise_maxHPDNoOtherHits();
	if (hcalnoise_maxRBXHits_branch != 0) hcalnoise_maxRBXHits();
	if (hcalnoise_maxZeros_branch != 0) hcalnoise_maxZeros();
	if (hcalnoise_noiseFilterStatus_branch != 0) hcalnoise_noiseFilterStatus();
	if (hcalnoise_noiseType_branch != 0) hcalnoise_noiseType();
	if (hcalnoise_num10GeVHits_branch != 0) hcalnoise_num10GeVHits();
	if (hcalnoise_num25GeVHits_branch != 0) hcalnoise_num25GeVHits();
	if (hcalnoise_numFlatNoiseChannels_branch != 0) hcalnoise_numFlatNoiseChannels();
	if (hcalnoise_numIsolatedNoiseChannels_branch != 0) hcalnoise_numIsolatedNoiseChannels();
	if (hcalnoise_numProblematicRBXs_branch != 0) hcalnoise_numProblematicRBXs();
	if (hcalnoise_numSpikeNoiseChannels_branch != 0) hcalnoise_numSpikeNoiseChannels();
	if (hcalnoise_numTS4TS5NoiseChannels_branch != 0) hcalnoise_numTS4TS5NoiseChannels();
	if (hcalnoise_numTriangleNoiseChannels_branch != 0) hcalnoise_numTriangleNoiseChannels();
	if (hcalnoise_passHighLevelNoiseFilter_branch != 0) hcalnoise_passHighLevelNoiseFilter();
	if (hcalnoise_passLooseNoiseFilter_branch != 0) hcalnoise_passLooseNoiseFilter();
	if (hcalnoise_passTightNoiseFilter_branch != 0) hcalnoise_passTightNoiseFilter();
	if (pdfinfo_id1_branch != 0) pdfinfo_id1();
	if (pdfinfo_id2_branch != 0) pdfinfo_id2();
	if (sparm_subProcessId_branch != 0) sparm_subProcessId();
	if (pfjets_nonCHS_chargedHadronMultiplicity_branch != 0) pfjets_nonCHS_chargedHadronMultiplicity();
	if (pfjets_nonCHS_chargedMultiplicity_branch != 0) pfjets_nonCHS_chargedMultiplicity();
	if (pfjets_nonCHS_electronMultiplicity_branch != 0) pfjets_nonCHS_electronMultiplicity();
	if (pfjets_nonCHS_muonMultiplicity_branch != 0) pfjets_nonCHS_muonMultiplicity();
	if (pfjets_nonCHS_neutralHadronMultiplicity_branch != 0) pfjets_nonCHS_neutralHadronMultiplicity();
	if (pfjets_nonCHS_neutralMultiplicity_branch != 0) pfjets_nonCHS_neutralMultiplicity();
	if (pfjets_nonCHS_partonFlavour_branch != 0) pfjets_nonCHS_partonFlavour();
	if (pfjets_nonCHS_photonMultiplicity_branch != 0) pfjets_nonCHS_photonMultiplicity();
	if (ak8jets_mc_id_branch != 0) ak8jets_mc_id();
	if (els_mc3_id_branch != 0) els_mc3_id();
	if (els_mc3idx_branch != 0) els_mc3idx();
	if (els_mc3_motherid_branch != 0) els_mc3_motherid();
	if (els_mc3_motheridx_branch != 0) els_mc3_motheridx();
	if (els_mc_id_branch != 0) els_mc_id();
	if (els_mcidx_branch != 0) els_mcidx();
	if (els_mc_motherid_branch != 0) els_mc_motherid();
	if (mus_mc3_id_branch != 0) mus_mc3_id();
	if (mus_mc3idx_branch != 0) mus_mc3idx();
	if (mus_mc3_motherid_branch != 0) mus_mc3_motherid();
	if (mus_mc3_motheridx_branch != 0) mus_mc3_motheridx();
	if (mus_mc_id_branch != 0) mus_mc_id();
	if (mus_mcidx_branch != 0) mus_mcidx();
	if (mus_mc_motherid_branch != 0) mus_mc_motherid();
	if (pfjets_mc3_id_branch != 0) pfjets_mc3_id();
	if (pfjets_mc3idx_branch != 0) pfjets_mc3idx();
	if (pfjets_mc_gpidx_branch != 0) pfjets_mc_gpidx();
	if (pfjets_mc_id_branch != 0) pfjets_mc_id();
	if (pfjets_mcidx_branch != 0) pfjets_mcidx();
	if (pfjets_mc_motherid_branch != 0) pfjets_mc_motherid();
	if (photons_mc3_id_branch != 0) photons_mc3_id();
	if (photons_mc3idx_branch != 0) photons_mc3idx();
	if (photons_mc3_motherid_branch != 0) photons_mc3_motherid();
	if (photons_mc3_motheridx_branch != 0) photons_mc3_motheridx();
	if (photons_mc_id_branch != 0) photons_mc_id();
	if (photons_mcidx_branch != 0) photons_mcidx();
	if (photons_mc_motherid_branch != 0) photons_mc_motherid();
	if (els_category_branch != 0) els_category();
	if (els_charge_branch != 0) els_charge();
	if (els_ckf_charge_branch != 0) els_ckf_charge();
	if (els_ckf_laywithmeas_branch != 0) els_ckf_laywithmeas();
	if (els_class_branch != 0) els_class();
	if (els_exp_innerlayers_branch != 0) els_exp_innerlayers();
	if (els_exp_outerlayers_branch != 0) els_exp_outerlayers();
	if (els_fiduciality_branch != 0) els_fiduciality();
	if (els_lostHits_branch != 0) els_lostHits();
	if (els_lost_pixelhits_branch != 0) els_lost_pixelhits();
	if (els_mc_patMatch_id_branch != 0) els_mc_patMatch_id();
	if (els_nSeed_branch != 0) els_nSeed();
	if (els_nlayers_branch != 0) els_nlayers();
	if (els_nlayers3D_branch != 0) els_nlayers3D();
	if (els_nlayersLost_branch != 0) els_nlayersLost();
	if (els_sccharge_branch != 0) els_sccharge();
	if (els_trk_charge_branch != 0) els_trk_charge();
	if (els_type_branch != 0) els_type();
	if (els_validHits_branch != 0) els_validHits();
	if (els_valid_pixelhits_branch != 0) els_valid_pixelhits();
	if (els_passLooseId_branch != 0) els_passLooseId();
	if (els_passMediumId_branch != 0) els_passMediumId();
	if (els_passTightId_branch != 0) els_passTightId();
	if (els_passVetoId_branch != 0) els_passVetoId();
	if (genps_id_branch != 0) genps_id();
	if (genps_id_mother_branch != 0) genps_id_mother();
	if (genps_id_simplegrandma_branch != 0) genps_id_simplegrandma();
	if (genps_id_simplemother_branch != 0) genps_id_simplemother();
	if (genps_idx_mother_branch != 0) genps_idx_mother();
	if (genps_idx_simplemother_branch != 0) genps_idx_simplemother();
	if (genps_status_branch != 0) genps_status();
	if (hyp_ll_charge_branch != 0) hyp_ll_charge();
	if (hyp_ll_id_branch != 0) hyp_ll_id();
	if (hyp_ll_index_branch != 0) hyp_ll_index();
	if (hyp_lt_charge_branch != 0) hyp_lt_charge();
	if (hyp_lt_id_branch != 0) hyp_lt_id();
	if (hyp_lt_index_branch != 0) hyp_lt_index();
	if (hyp_type_branch != 0) hyp_type();
	if (isotracks_charge_branch != 0) isotracks_charge();
	if (isotracks_particleId_branch != 0) isotracks_particleId();
	if (mus_algo_branch != 0) mus_algo();
	if (mus_charge_branch != 0) mus_charge();
	if (mus_ecal_rawId_branch != 0) mus_ecal_rawId();
	if (mus_exp_innerlayers_branch != 0) mus_exp_innerlayers();
	if (mus_exp_outerlayers_branch != 0) mus_exp_outerlayers();
	if (mus_gfit_algo_branch != 0) mus_gfit_algo();
	if (mus_gfit_etaErr_branch != 0) mus_gfit_etaErr();
	if (mus_gfit_exp_innerlayer_branch != 0) mus_gfit_exp_innerlayer();
	if (mus_gfit_exp_outerlayer_branch != 0) mus_gfit_exp_outerlayer();
	if (mus_gfit_lostHits_branch != 0) mus_gfit_lostHits();
	if (mus_gfit_lostPixelHits_branch != 0) mus_gfit_lostPixelHits();
	if (mus_gfit_nlayers_branch != 0) mus_gfit_nlayers();
	if (mus_gfit_nlayers3D_branch != 0) mus_gfit_nlayers3D();
	if (mus_gfit_nlayersLost_branch != 0) mus_gfit_nlayersLost();
	if (mus_gfit_phiErr_branch != 0) mus_gfit_phiErr();
	if (mus_gfit_ptErr_branch != 0) mus_gfit_ptErr();
	if (mus_gfit_qualityMask_branch != 0) mus_gfit_qualityMask();
	if (mus_gfit_trk_charge_branch != 0) mus_gfit_trk_charge();
	if (mus_gfit_validHits_branch != 0) mus_gfit_validHits();
	if (mus_gfit_validPixelHits_branch != 0) mus_gfit_validPixelHits();
	if (mus_gfit_validSTAHits_branch != 0) mus_gfit_validSTAHits();
	if (mus_gfit_validSiHits_branch != 0) mus_gfit_validSiHits();
	if (mus_goodmask_branch != 0) mus_goodmask();
	if (mus_hcal_rawId_branch != 0) mus_hcal_rawId();
	if (mus_iso03_njets_branch != 0) mus_iso03_njets();
	if (mus_iso03_ntrk_branch != 0) mus_iso03_ntrk();
	if (mus_iso05_ntrk_branch != 0) mus_iso05_ntrk();
	if (mus_lostHits_branch != 0) mus_lostHits();
	if (mus_lostPixelHits_branch != 0) mus_lostPixelHits();
	if (mus_mc_patMatch_id_branch != 0) mus_mc_patMatch_id();
	if (mus_muonBestTrackType_branch != 0) mus_muonBestTrackType();
	if (mus_nOverlaps_branch != 0) mus_nOverlaps();
	if (mus_nlayers_branch != 0) mus_nlayers();
	if (mus_nlayers3D_branch != 0) mus_nlayers3D();
	if (mus_nlayersLost_branch != 0) mus_nlayersLost();
	if (mus_nmatches_branch != 0) mus_nmatches();
	if (mus_numberOfMatchedStations_branch != 0) mus_numberOfMatchedStations();
	if (mus_overlap0_branch != 0) mus_overlap0();
	if (mus_overlap1_branch != 0) mus_overlap1();
	if (mus_pfcharge_branch != 0) mus_pfcharge();
	if (mus_pfidx_branch != 0) mus_pfidx();
	if (mus_pfparticleId_branch != 0) mus_pfparticleId();
	if (mus_pid_PFMuon_branch != 0) mus_pid_PFMuon();
	if (mus_pid_TM2DCompatibilityLoose_branch != 0) mus_pid_TM2DCompatibilityLoose();
	if (mus_pid_TM2DCompatibilityTight_branch != 0) mus_pid_TM2DCompatibilityTight();
	if (mus_pid_TMLastStationLoose_branch != 0) mus_pid_TMLastStationLoose();
	if (mus_pid_TMLastStationTight_branch != 0) mus_pid_TMLastStationTight();
	if (mus_qualityMask_branch != 0) mus_qualityMask();
	if (mus_sta_algo_branch != 0) mus_sta_algo();
	if (mus_sta_etaErr_branch != 0) mus_sta_etaErr();
	if (mus_sta_exp_innerlayer_branch != 0) mus_sta_exp_innerlayer();
	if (mus_sta_exp_outerlayer_branch != 0) mus_sta_exp_outerlayer();
	if (mus_sta_lostHits_branch != 0) mus_sta_lostHits();
	if (mus_sta_lostPixelHits_branch != 0) mus_sta_lostPixelHits();
	if (mus_sta_nlayers_branch != 0) mus_sta_nlayers();
	if (mus_sta_nlayers3D_branch != 0) mus_sta_nlayers3D();
	if (mus_sta_nlayersLost_branch != 0) mus_sta_nlayersLost();
	if (mus_sta_phiErr_branch != 0) mus_sta_phiErr();
	if (mus_sta_ptErr_branch != 0) mus_sta_ptErr();
	if (mus_sta_qualityMask_branch != 0) mus_sta_qualityMask();
	if (mus_sta_trk_charge_branch != 0) mus_sta_trk_charge();
	if (mus_sta_validHits_branch != 0) mus_sta_validHits();
	if (mus_sta_validPixelHits_branch != 0) mus_sta_validPixelHits();
	if (mus_timeDirection_branch != 0) mus_timeDirection();
	if (mus_timeNumStationsUsed_branch != 0) mus_timeNumStationsUsed();
	if (mus_trk_charge_branch != 0) mus_trk_charge();
	if (mus_type_branch != 0) mus_type();
	if (mus_validHits_branch != 0) mus_validHits();
	if (mus_validPixelHits_branch != 0) mus_validPixelHits();
	if (pfcands_charge_branch != 0) pfcands_charge();
	if (pfcands_particleId_branch != 0) pfcands_particleId();
	if (pfjets_chargedHadronMultiplicity_branch != 0) pfjets_chargedHadronMultiplicity();
	if (pfjets_chargedMultiplicity_branch != 0) pfjets_chargedMultiplicity();
	if (pfjets_electronMultiplicity_branch != 0) pfjets_electronMultiplicity();
	if (pfjets_muonMultiplicity_branch != 0) pfjets_muonMultiplicity();
	if (pfjets_neutralHadronMultiplicity_branch != 0) pfjets_neutralHadronMultiplicity();
	if (pfjets_neutralMultiplicity_branch != 0) pfjets_neutralMultiplicity();
	if (pfjets_partonFlavour_branch != 0) pfjets_partonFlavour();
	if (pfjets_photonMultiplicity_branch != 0) pfjets_photonMultiplicity();
	if (pfjets_puppi_chargedHadronMultiplicity_branch != 0) pfjets_puppi_chargedHadronMultiplicity();
	if (pfjets_puppi_chargedMultiplicity_branch != 0) pfjets_puppi_chargedMultiplicity();
	if (pfjets_puppi_electronMultiplicity_branch != 0) pfjets_puppi_electronMultiplicity();
	if (pfjets_puppi_muonMultiplicity_branch != 0) pfjets_puppi_muonMultiplicity();
	if (pfjets_puppi_neutralHadronMultiplicity_branch != 0) pfjets_puppi_neutralHadronMultiplicity();
	if (pfjets_puppi_neutralMultiplicity_branch != 0) pfjets_puppi_neutralMultiplicity();
	if (pfjets_puppi_partonFlavour_branch != 0) pfjets_puppi_partonFlavour();
	if (pfjets_puppi_photonMultiplicity_branch != 0) pfjets_puppi_photonMultiplicity();
	if (taus_pf_charge_branch != 0) taus_pf_charge();
	if (photons_fiduciality_branch != 0) photons_fiduciality();
	if (photons_photonID_loose_branch != 0) photons_photonID_loose();
	if (photons_photonID_tight_branch != 0) photons_photonID_tight();
	if (puInfo_bunchCrossing_branch != 0) puInfo_bunchCrossing();
	if (puInfo_nPUvertices_branch != 0) puInfo_nPUvertices();
	if (convs_algo_branch != 0) convs_algo();
	if (convs_isConverted_branch != 0) convs_isConverted();
	if (convs_quality_branch != 0) convs_quality();
	if (svs_nTrks_branch != 0) svs_nTrks();
	if (ak8jets_nSubJets_branch != 0) ak8jets_nSubJets();
	if (ak8jets_partonFlavour_branch != 0) ak8jets_partonFlavour();
	if (vtxs_isFake_branch != 0) vtxs_isFake();
	if (vtxs_isValid_branch != 0) vtxs_isValid();
	if (pfjets_nonCHS_pfcandIndicies_branch != 0) pfjets_nonCHS_pfcandIndicies();
	if (els_PFCand_idx_branch != 0) els_PFCand_idx();
	if (genps_lepdaughter_id_branch != 0) genps_lepdaughter_id();
	if (genps_lepdaughter_idx_branch != 0) genps_lepdaughter_idx();
	if (hlt_trigObjs_id_branch != 0) hlt_trigObjs_id();
	if (mus_nStationCorrelatedHits_branch != 0) mus_nStationCorrelatedHits();
	if (mus_nStationHits_branch != 0) mus_nStationHits();
	if (pfjets_pfcandIndicies_branch != 0) pfjets_pfcandIndicies();
	if (pfjets_puppi_pfcandIndicies_branch != 0) pfjets_puppi_pfcandIndicies();
	if (photons_PFCand_idx_branch != 0) photons_PFCand_idx();
	if (convs_nHitsBeforeVtx_branch != 0) convs_nHitsBeforeVtx();
	if (convs_tkalgo_branch != 0) convs_tkalgo();
	if (convs_tkidx_branch != 0) convs_tkidx();
	if (ak8jets_pfcandIndicies_branch != 0) ak8jets_pfcandIndicies();
	if (isotracks_fromPV_branch != 0) isotracks_fromPV();
	if (pfcands_fromPV_branch != 0) pfcands_fromPV();
	if (els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch != 0) els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version();
	if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_branch != 0) els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version();
	if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_branch != 0) els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version();
	if (els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch != 0) els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version();
	if (els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	if (els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_branch != 0) els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version();
	if (els_HLT_Ele17_Ele8_LeadingLeg_version_branch != 0) els_HLT_Ele17_Ele8_LeadingLeg_version();
	if (els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_branch != 0) els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version();
	if (els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_branch != 0) els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version();
	if (els_HLT_Ele17_Ele8_TrailingLeg_version_branch != 0) els_HLT_Ele17_Ele8_TrailingLeg_version();
	if (els_HLT_Ele17_Ele8_version_branch != 0) els_HLT_Ele17_Ele8_version();
	if (els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch != 0) els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version();
	if (els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	if (els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_branch != 0) els_HLT_Ele20_SC4_Mass50_LeadingLeg_version();
	if (els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_branch != 0) els_HLT_Ele20_SC4_Mass50_TrailingLeg_version();
	if (els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch != 0) els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version();
	if (els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_branch != 0) els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version();
	if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_branch != 0) els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version();
	if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_branch != 0) els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version();
	if (els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_branch != 0) els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version();
	if (els_HLT_Ele25WP60_Ele8_Mass55_version_branch != 0) els_HLT_Ele25WP60_Ele8_Mass55_version();
	if (els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_branch != 0) els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version();
	if (els_HLT_Ele25WP60_SC4_Mass55_version_branch != 0) els_HLT_Ele25WP60_SC4_Mass55_version();
	if (els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_branch != 0) els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version();
	if (els_HLT_Ele27_WP80_version_branch != 0) els_HLT_Ele27_WP80_version();
	if (els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_branch != 0) els_HLT_Ele32_SC17_Mass50_LeadingLeg_version();
	if (els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_branch != 0) els_HLT_Ele32_SC17_Mass50_TrailingLeg_version();
	if (els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch != 0) els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version();
	if (els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_branch != 0) els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version();
	if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_branch != 0) els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version();
	if (els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	if (els_HLT_Mu17_Ele8_TrailingLeg_version_branch != 0) els_HLT_Mu17_Ele8_TrailingLeg_version();
	if (els_HLT_Mu17_Ele8_version_branch != 0) els_HLT_Mu17_Ele8_version();
	if (els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch != 0) els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version();
	if (els_HLT_Mu8_Ele17_version_branch != 0) els_HLT_Mu8_Ele17_version();
	if (els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch != 0) els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version();
	if (els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch != 0) els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version();
	if (evt_nels_branch != 0) evt_nels();
	if (evt_detectorStatus_branch != 0) evt_detectorStatus();
	if (evt_lumiBlock_branch != 0) evt_lumiBlock();
	if (evt_run_branch != 0) evt_run();
	if (evt_ngenjetsNoMuNoNu_branch != 0) evt_ngenjetsNoMuNoNu();
	if (genps_signalProcessID_branch != 0) genps_signalProcessID();
	if (evt_ngenjets_branch != 0) evt_ngenjets();
	if (mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_branch != 0) mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version();
	if (mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_branch != 0) mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version();
	if (mus_HLT_IsoMu24_eta2p1_version_branch != 0) mus_HLT_IsoMu24_eta2p1_version();
	if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_branch != 0) mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version();
	if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_branch != 0) mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version();
	if (mus_HLT_Mu17_Ele8_LeadingLeg_version_branch != 0) mus_HLT_Mu17_Ele8_LeadingLeg_version();
	if (mus_HLT_Mu17_Ele8_version_branch != 0) mus_HLT_Mu17_Ele8_version();
	if (mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_branch != 0) mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version();
	if (mus_HLT_Mu17_Mu8_LeadingLeg_version_branch != 0) mus_HLT_Mu17_Mu8_LeadingLeg_version();
	if (mus_HLT_Mu17_Mu8_TrailingLeg_version_branch != 0) mus_HLT_Mu17_Mu8_TrailingLeg_version();
	if (mus_HLT_Mu17_Mu8_version_branch != 0) mus_HLT_Mu17_Mu8_version();
	if (mus_HLT_Mu17_TkMu8_LeadingLeg_version_branch != 0) mus_HLT_Mu17_TkMu8_LeadingLeg_version();
	if (mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_branch != 0) mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version();
	if (mus_HLT_Mu17_TkMu8_TrailingLeg_version_branch != 0) mus_HLT_Mu17_TkMu8_TrailingLeg_version();
	if (mus_HLT_Mu17_TkMu8_version_branch != 0) mus_HLT_Mu17_TkMu8_version();
	if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_branch != 0) mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version();
	if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_branch != 0) mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version();
	if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_branch != 0) mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version();
	if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_branch != 0) mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version();
	if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_branch != 0) mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version();
	if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_branch != 0) mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version();
	if (mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch != 0) mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version();
	if (mus_HLT_Mu8_Ele17_TrailingLeg_version_branch != 0) mus_HLT_Mu8_Ele17_TrailingLeg_version();
	if (mus_HLT_Mu8_Ele17_version_branch != 0) mus_HLT_Mu8_Ele17_version();
	if (mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_branch != 0) mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version();
	if (mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch != 0) mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version();
	if (evt_nphotons_branch != 0) evt_nphotons();
	if (evt_nvtxs_branch != 0) evt_nvtxs();
	if (els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch != 0) els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg();
	if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_branch != 0) els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg();
	if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_branch != 0) els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg();
	if (els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch != 0) els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg();
	if (els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	if (els_HLT_Ele17_Ele8_branch != 0) els_HLT_Ele17_Ele8();
	if (els_HLT_Ele17_Ele8_L1sL1DoubleEG137_branch != 0) els_HLT_Ele17_Ele8_L1sL1DoubleEG137();
	if (els_HLT_Ele17_Ele8_LeadingLeg_branch != 0) els_HLT_Ele17_Ele8_LeadingLeg();
	if (els_HLT_Ele17_Ele8_Mass50_LeadingLeg_branch != 0) els_HLT_Ele17_Ele8_Mass50_LeadingLeg();
	if (els_HLT_Ele17_Ele8_Mass50_TrailingLeg_branch != 0) els_HLT_Ele17_Ele8_Mass50_TrailingLeg();
	if (els_HLT_Ele17_Ele8_TrailingLeg_branch != 0) els_HLT_Ele17_Ele8_TrailingLeg();
	if (els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch != 0) els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg();
	if (els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	if (els_HLT_Ele20_SC4_Mass50_LeadingLeg_branch != 0) els_HLT_Ele20_SC4_Mass50_LeadingLeg();
	if (els_HLT_Ele20_SC4_Mass50_TrailingLeg_branch != 0) els_HLT_Ele20_SC4_Mass50_TrailingLeg();
	if (els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch != 0) els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg();
	if (els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch != 0) els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL();
	if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_branch != 0) els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg();
	if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_branch != 0) els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg();
	if (els_HLT_Ele25WP60_Ele8_Mass55_branch != 0) els_HLT_Ele25WP60_Ele8_Mass55();
	if (els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_branch != 0) els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg();
	if (els_HLT_Ele25WP60_SC4_Mass55_branch != 0) els_HLT_Ele25WP60_SC4_Mass55();
	if (els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_branch != 0) els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg();
	if (els_HLT_Ele27_WP80_branch != 0) els_HLT_Ele27_WP80();
	if (els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_branch != 0) els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22();
	if (els_HLT_Ele32_SC17_Mass50_LeadingLeg_branch != 0) els_HLT_Ele32_SC17_Mass50_LeadingLeg();
	if (els_HLT_Ele32_SC17_Mass50_TrailingLeg_branch != 0) els_HLT_Ele32_SC17_Mass50_TrailingLeg();
	if (els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch != 0) els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg();
	if (els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_branch != 0) els_HLT_Ele5_SC5_JPsi_Mass2to4p5();
	if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_branch != 0) els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg();
	if (els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	if (els_HLT_Mu17_Ele8_branch != 0) els_HLT_Mu17_Ele8();
	if (els_HLT_Mu17_Ele8_TrailingLeg_branch != 0) els_HLT_Mu17_Ele8_TrailingLeg();
	if (els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch != 0) els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg();
	if (els_HLT_Mu8_Ele17_branch != 0) els_HLT_Mu8_Ele17();
	if (els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch != 0) els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg();
	if (els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch != 0) els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg();
	if (hlt_prescales_branch != 0) hlt_prescales();
	if (mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_branch != 0) mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg();
	if (mus_HLT_IsoMu24_eta2p1_branch != 0) mus_HLT_IsoMu24_eta2p1();
	if (mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_branch != 0) mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1();
	if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_branch != 0) mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg();
	if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_branch != 0) mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg();
	if (mus_HLT_Mu17_Ele8_branch != 0) mus_HLT_Mu17_Ele8();
	if (mus_HLT_Mu17_Ele8_LeadingLeg_branch != 0) mus_HLT_Mu17_Ele8_LeadingLeg();
	if (mus_HLT_Mu17_Mu8_branch != 0) mus_HLT_Mu17_Mu8();
	if (mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_branch != 0) mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen();
	if (mus_HLT_Mu17_Mu8_LeadingLeg_branch != 0) mus_HLT_Mu17_Mu8_LeadingLeg();
	if (mus_HLT_Mu17_Mu8_TrailingLeg_branch != 0) mus_HLT_Mu17_Mu8_TrailingLeg();
	if (mus_HLT_Mu17_TkMu8_branch != 0) mus_HLT_Mu17_TkMu8();
	if (mus_HLT_Mu17_TkMu8_LeadingLeg_branch != 0) mus_HLT_Mu17_TkMu8_LeadingLeg();
	if (mus_HLT_Mu17_TkMu8_TrailingLeg_branch != 0) mus_HLT_Mu17_TkMu8_TrailingLeg();
	if (mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_branch != 0) mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered();
	if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch != 0) mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ();
	if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_branch != 0) mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg();
	if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_branch != 0) mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg();
	if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_branch != 0) mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ();
	if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_branch != 0) mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg();
	if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_branch != 0) mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg();
	if (mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch != 0) mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg();
	if (mus_HLT_Mu8_Ele17_branch != 0) mus_HLT_Mu8_Ele17();
	if (mus_HLT_Mu8_Ele17_TrailingLeg_branch != 0) mus_HLT_Mu8_Ele17_TrailingLeg();
	if (mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_branch != 0) mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg();
	if (mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch != 0) mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg();
	if (evt_event_branch != 0) evt_event();
	if (evt_timestamp_branch != 0) evt_timestamp();
	if (evt_nEvts_branch != 0) evt_nEvts();
	if (evt_nEvts_effective_branch != 0) evt_nEvts_effective();
	if (evt_filt_eff_branch != 0) evt_filt_eff();
}

	const vector<string> &genweightsID()
	{
		if (not genweightsID_isLoaded) {
			if (genweightsID_branch != 0) {
				genweightsID_branch->GetEntry(index);
			} else { 
				printf("branch genweightsID_branch does not exist!\n");
				exit(1);
			}
			genweightsID_isLoaded = true;
		}
		return genweightsID_;
	}
	TBits &hlt_bits()
	{
		if (not hlt_bits_isLoaded) {
			if (hlt_bits_branch != 0) {
				hlt_bits_branch->GetEntry(index);
			} else { 
				printf("branch hlt_bits_branch does not exist!\n");
				exit(1);
			}
			hlt_bits_isLoaded = true;
		}
		return hlt_bits_;
	}
	const vector<TString> &pfjets_nonCHS_bDiscriminatorNames()
	{
		if (not pfjets_nonCHS_bDiscriminatorNames_isLoaded) {
			if (pfjets_nonCHS_bDiscriminatorNames_branch != 0) {
				pfjets_nonCHS_bDiscriminatorNames_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_bDiscriminatorNames_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_bDiscriminatorNames_isLoaded = true;
		}
		return pfjets_nonCHS_bDiscriminatorNames_;
	}
	const vector<TString> &evt_CMS3tag()
	{
		if (not evt_CMS3tag_isLoaded) {
			if (evt_CMS3tag_branch != 0) {
				evt_CMS3tag_branch->GetEntry(index);
			} else { 
				printf("branch evt_CMS3tag_branch does not exist!\n");
				exit(1);
			}
			evt_CMS3tag_isLoaded = true;
		}
		return evt_CMS3tag_;
	}
	const vector<TString> &evt_dataset()
	{
		if (not evt_dataset_isLoaded) {
			if (evt_dataset_branch != 0) {
				evt_dataset_branch->GetEntry(index);
			} else { 
				printf("branch evt_dataset_branch does not exist!\n");
				exit(1);
			}
			evt_dataset_isLoaded = true;
		}
		return evt_dataset_;
	}
	const vector<TString> &hlt_trigNames()
	{
		if (not hlt_trigNames_isLoaded) {
			if (hlt_trigNames_branch != 0) {
				hlt_trigNames_branch->GetEntry(index);
			} else { 
				printf("branch hlt_trigNames_branch does not exist!\n");
				exit(1);
			}
			hlt_trigNames_isLoaded = true;
		}
		return hlt_trigNames_;
	}
	const vector<TString> &pfjets_bDiscriminatorNames()
	{
		if (not pfjets_bDiscriminatorNames_isLoaded) {
			if (pfjets_bDiscriminatorNames_branch != 0) {
				pfjets_bDiscriminatorNames_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_bDiscriminatorNames_branch does not exist!\n");
				exit(1);
			}
			pfjets_bDiscriminatorNames_isLoaded = true;
		}
		return pfjets_bDiscriminatorNames_;
	}
	const vector<TString> &pfjets_puppi_bDiscriminatorNames()
	{
		if (not pfjets_puppi_bDiscriminatorNames_isLoaded) {
			if (pfjets_puppi_bDiscriminatorNames_branch != 0) {
				pfjets_puppi_bDiscriminatorNames_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_bDiscriminatorNames_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_bDiscriminatorNames_isLoaded = true;
		}
		return pfjets_puppi_bDiscriminatorNames_;
	}
	const vector<TString> &taus_pf_IDnames()
	{
		if (not taus_pf_IDnames_isLoaded) {
			if (taus_pf_IDnames_branch != 0) {
				taus_pf_IDnames_branch->GetEntry(index);
			} else { 
				printf("branch taus_pf_IDnames_branch does not exist!\n");
				exit(1);
			}
			taus_pf_IDnames_isLoaded = true;
		}
		return taus_pf_IDnames_;
	}
	const vector<TString> &sparm_comment()
	{
		if (not sparm_comment_isLoaded) {
			if (sparm_comment_branch != 0) {
				sparm_comment_branch->GetEntry(index);
			} else { 
				printf("branch sparm_comment_branch does not exist!\n");
				exit(1);
			}
			sparm_comment_isLoaded = true;
		}
		return sparm_comment_;
	}
	const vector<TString> &sparm_names()
	{
		if (not sparm_names_isLoaded) {
			if (sparm_names_branch != 0) {
				sparm_names_branch->GetEntry(index);
			} else { 
				printf("branch sparm_names_branch does not exist!\n");
				exit(1);
			}
			sparm_names_isLoaded = true;
		}
		return sparm_names_;
	}
	bool &hcalnoise_HasBadRBXTS4TS5()
	{
		if (not hcalnoise_HasBadRBXTS4TS5_isLoaded) {
			if (hcalnoise_HasBadRBXTS4TS5_branch != 0) {
				hcalnoise_HasBadRBXTS4TS5_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_HasBadRBXTS4TS5_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_HasBadRBXTS4TS5_isLoaded = true;
		}
		return hcalnoise_HasBadRBXTS4TS5_;
	}
	bool &evt_cscTightHaloId()
	{
		if (not evt_cscTightHaloId_isLoaded) {
			if (evt_cscTightHaloId_branch != 0) {
				evt_cscTightHaloId_branch->GetEntry(index);
			} else { 
				printf("branch evt_cscTightHaloId_branch does not exist!\n");
				exit(1);
			}
			evt_cscTightHaloId_isLoaded = true;
		}
		return evt_cscTightHaloId_;
	}
	bool &evt_hbheFilter()
	{
		if (not evt_hbheFilter_isLoaded) {
			if (evt_hbheFilter_branch != 0) {
				evt_hbheFilter_branch->GetEntry(index);
			} else { 
				printf("branch evt_hbheFilter_branch does not exist!\n");
				exit(1);
			}
			evt_hbheFilter_isLoaded = true;
		}
		return evt_hbheFilter_;
	}
	bool &filt_cscBeamHalo()
	{
		if (not filt_cscBeamHalo_isLoaded) {
			if (filt_cscBeamHalo_branch != 0) {
				filt_cscBeamHalo_branch->GetEntry(index);
			} else { 
				printf("branch filt_cscBeamHalo_branch does not exist!\n");
				exit(1);
			}
			filt_cscBeamHalo_isLoaded = true;
		}
		return filt_cscBeamHalo_;
	}
	bool &filt_ecalLaser()
	{
		if (not filt_ecalLaser_isLoaded) {
			if (filt_ecalLaser_branch != 0) {
				filt_ecalLaser_branch->GetEntry(index);
			} else { 
				printf("branch filt_ecalLaser_branch does not exist!\n");
				exit(1);
			}
			filt_ecalLaser_isLoaded = true;
		}
		return filt_ecalLaser_;
	}
	bool &filt_ecalTP()
	{
		if (not filt_ecalTP_isLoaded) {
			if (filt_ecalTP_branch != 0) {
				filt_ecalTP_branch->GetEntry(index);
			} else { 
				printf("branch filt_ecalTP_branch does not exist!\n");
				exit(1);
			}
			filt_ecalTP_isLoaded = true;
		}
		return filt_ecalTP_;
	}
	bool &filt_eeBadSc()
	{
		if (not filt_eeBadSc_isLoaded) {
			if (filt_eeBadSc_branch != 0) {
				filt_eeBadSc_branch->GetEntry(index);
			} else { 
				printf("branch filt_eeBadSc_branch does not exist!\n");
				exit(1);
			}
			filt_eeBadSc_isLoaded = true;
		}
		return filt_eeBadSc_;
	}
	bool &filt_goodVertices()
	{
		if (not filt_goodVertices_isLoaded) {
			if (filt_goodVertices_branch != 0) {
				filt_goodVertices_branch->GetEntry(index);
			} else { 
				printf("branch filt_goodVertices_branch does not exist!\n");
				exit(1);
			}
			filt_goodVertices_isLoaded = true;
		}
		return filt_goodVertices_;
	}
	bool &filt_hbheNoise()
	{
		if (not filt_hbheNoise_isLoaded) {
			if (filt_hbheNoise_branch != 0) {
				filt_hbheNoise_branch->GetEntry(index);
			} else { 
				printf("branch filt_hbheNoise_branch does not exist!\n");
				exit(1);
			}
			filt_hbheNoise_isLoaded = true;
		}
		return filt_hbheNoise_;
	}
	bool &filt_hcalLaser()
	{
		if (not filt_hcalLaser_isLoaded) {
			if (filt_hcalLaser_branch != 0) {
				filt_hcalLaser_branch->GetEntry(index);
			} else { 
				printf("branch filt_hcalLaser_branch does not exist!\n");
				exit(1);
			}
			filt_hcalLaser_isLoaded = true;
		}
		return filt_hcalLaser_;
	}
	bool &filt_metfilter()
	{
		if (not filt_metfilter_isLoaded) {
			if (filt_metfilter_branch != 0) {
				filt_metfilter_branch->GetEntry(index);
			} else { 
				printf("branch filt_metfilter_branch does not exist!\n");
				exit(1);
			}
			filt_metfilter_isLoaded = true;
		}
		return filt_metfilter_;
	}
	bool &filt_trackingFailure()
	{
		if (not filt_trackingFailure_isLoaded) {
			if (filt_trackingFailure_branch != 0) {
				filt_trackingFailure_branch->GetEntry(index);
			} else { 
				printf("branch filt_trackingFailure_branch does not exist!\n");
				exit(1);
			}
			filt_trackingFailure_isLoaded = true;
		}
		return filt_trackingFailure_;
	}
	bool &filt_trkPOGFilters()
	{
		if (not filt_trkPOGFilters_isLoaded) {
			if (filt_trkPOGFilters_branch != 0) {
				filt_trkPOGFilters_branch->GetEntry(index);
			} else { 
				printf("branch filt_trkPOGFilters_branch does not exist!\n");
				exit(1);
			}
			filt_trkPOGFilters_isLoaded = true;
		}
		return filt_trkPOGFilters_;
	}
	bool &filt_trkPOG_logErrorTooManyClusters()
	{
		if (not filt_trkPOG_logErrorTooManyClusters_isLoaded) {
			if (filt_trkPOG_logErrorTooManyClusters_branch != 0) {
				filt_trkPOG_logErrorTooManyClusters_branch->GetEntry(index);
			} else { 
				printf("branch filt_trkPOG_logErrorTooManyClusters_branch does not exist!\n");
				exit(1);
			}
			filt_trkPOG_logErrorTooManyClusters_isLoaded = true;
		}
		return filt_trkPOG_logErrorTooManyClusters_;
	}
	bool &filt_trkPOG_manystripclus53X()
	{
		if (not filt_trkPOG_manystripclus53X_isLoaded) {
			if (filt_trkPOG_manystripclus53X_branch != 0) {
				filt_trkPOG_manystripclus53X_branch->GetEntry(index);
			} else { 
				printf("branch filt_trkPOG_manystripclus53X_branch does not exist!\n");
				exit(1);
			}
			filt_trkPOG_manystripclus53X_isLoaded = true;
		}
		return filt_trkPOG_manystripclus53X_;
	}
	bool &filt_trkPOG_toomanystripclus53X()
	{
		if (not filt_trkPOG_toomanystripclus53X_isLoaded) {
			if (filt_trkPOG_toomanystripclus53X_branch != 0) {
				filt_trkPOG_toomanystripclus53X_branch->GetEntry(index);
			} else { 
				printf("branch filt_trkPOG_toomanystripclus53X_branch does not exist!\n");
				exit(1);
			}
			filt_trkPOG_toomanystripclus53X_isLoaded = true;
		}
		return filt_trkPOG_toomanystripclus53X_;
	}
	const vector<bool> &els_conv_vtx_flag()
	{
		if (not els_conv_vtx_flag_isLoaded) {
			if (els_conv_vtx_flag_branch != 0) {
				els_conv_vtx_flag_branch->GetEntry(index);
			} else { 
				printf("branch els_conv_vtx_flag_branch does not exist!\n");
				exit(1);
			}
			els_conv_vtx_flag_isLoaded = true;
		}
		return els_conv_vtx_flag_;
	}
	const vector<bool> &els_isGsfCtfScPixChargeConsistent()
	{
		if (not els_isGsfCtfScPixChargeConsistent_isLoaded) {
			if (els_isGsfCtfScPixChargeConsistent_branch != 0) {
				els_isGsfCtfScPixChargeConsistent_branch->GetEntry(index);
			} else { 
				printf("branch els_isGsfCtfScPixChargeConsistent_branch does not exist!\n");
				exit(1);
			}
			els_isGsfCtfScPixChargeConsistent_isLoaded = true;
		}
		return els_isGsfCtfScPixChargeConsistent_;
	}
	const vector<bool> &els_passingMvaPreselection()
	{
		if (not els_passingMvaPreselection_isLoaded) {
			if (els_passingMvaPreselection_branch != 0) {
				els_passingMvaPreselection_branch->GetEntry(index);
			} else { 
				printf("branch els_passingMvaPreselection_branch does not exist!\n");
				exit(1);
			}
			els_passingMvaPreselection_isLoaded = true;
		}
		return els_passingMvaPreselection_;
	}
	const vector<bool> &els_passingPflowPreselection()
	{
		if (not els_passingPflowPreselection_isLoaded) {
			if (els_passingPflowPreselection_branch != 0) {
				els_passingPflowPreselection_branch->GetEntry(index);
			} else { 
				printf("branch els_passingPflowPreselection_branch does not exist!\n");
				exit(1);
			}
			els_passingPflowPreselection_isLoaded = true;
		}
		return els_passingPflowPreselection_;
	}
	const vector<bool> &genps_fromHardProcessBeforeFSR()
	{
		if (not genps_fromHardProcessBeforeFSR_isLoaded) {
			if (genps_fromHardProcessBeforeFSR_branch != 0) {
				genps_fromHardProcessBeforeFSR_branch->GetEntry(index);
			} else { 
				printf("branch genps_fromHardProcessBeforeFSR_branch does not exist!\n");
				exit(1);
			}
			genps_fromHardProcessBeforeFSR_isLoaded = true;
		}
		return genps_fromHardProcessBeforeFSR_;
	}
	const vector<bool> &genps_fromHardProcessDecayed()
	{
		if (not genps_fromHardProcessDecayed_isLoaded) {
			if (genps_fromHardProcessDecayed_branch != 0) {
				genps_fromHardProcessDecayed_branch->GetEntry(index);
			} else { 
				printf("branch genps_fromHardProcessDecayed_branch does not exist!\n");
				exit(1);
			}
			genps_fromHardProcessDecayed_isLoaded = true;
		}
		return genps_fromHardProcessDecayed_;
	}
	const vector<bool> &genps_fromHardProcessFinalState()
	{
		if (not genps_fromHardProcessFinalState_isLoaded) {
			if (genps_fromHardProcessFinalState_branch != 0) {
				genps_fromHardProcessFinalState_branch->GetEntry(index);
			} else { 
				printf("branch genps_fromHardProcessFinalState_branch does not exist!\n");
				exit(1);
			}
			genps_fromHardProcessFinalState_isLoaded = true;
		}
		return genps_fromHardProcessFinalState_;
	}
	const vector<bool> &genps_isDirectHardProcessTauDecayProductFinalState()
	{
		if (not genps_isDirectHardProcessTauDecayProductFinalState_isLoaded) {
			if (genps_isDirectHardProcessTauDecayProductFinalState_branch != 0) {
				genps_isDirectHardProcessTauDecayProductFinalState_branch->GetEntry(index);
			} else { 
				printf("branch genps_isDirectHardProcessTauDecayProductFinalState_branch does not exist!\n");
				exit(1);
			}
			genps_isDirectHardProcessTauDecayProductFinalState_isLoaded = true;
		}
		return genps_isDirectHardProcessTauDecayProductFinalState_;
	}
	const vector<bool> &genps_isDirectPromptTauDecayProductFinalState()
	{
		if (not genps_isDirectPromptTauDecayProductFinalState_isLoaded) {
			if (genps_isDirectPromptTauDecayProductFinalState_branch != 0) {
				genps_isDirectPromptTauDecayProductFinalState_branch->GetEntry(index);
			} else { 
				printf("branch genps_isDirectPromptTauDecayProductFinalState_branch does not exist!\n");
				exit(1);
			}
			genps_isDirectPromptTauDecayProductFinalState_isLoaded = true;
		}
		return genps_isDirectPromptTauDecayProductFinalState_;
	}
	const vector<bool> &genps_isHardProcess()
	{
		if (not genps_isHardProcess_isLoaded) {
			if (genps_isHardProcess_branch != 0) {
				genps_isHardProcess_branch->GetEntry(index);
			} else { 
				printf("branch genps_isHardProcess_branch does not exist!\n");
				exit(1);
			}
			genps_isHardProcess_isLoaded = true;
		}
		return genps_isHardProcess_;
	}
	const vector<bool> &genps_isLastCopy()
	{
		if (not genps_isLastCopy_isLoaded) {
			if (genps_isLastCopy_branch != 0) {
				genps_isLastCopy_branch->GetEntry(index);
			} else { 
				printf("branch genps_isLastCopy_branch does not exist!\n");
				exit(1);
			}
			genps_isLastCopy_isLoaded = true;
		}
		return genps_isLastCopy_;
	}
	const vector<bool> &genps_isLastCopyBeforeFSR()
	{
		if (not genps_isLastCopyBeforeFSR_isLoaded) {
			if (genps_isLastCopyBeforeFSR_branch != 0) {
				genps_isLastCopyBeforeFSR_branch->GetEntry(index);
			} else { 
				printf("branch genps_isLastCopyBeforeFSR_branch does not exist!\n");
				exit(1);
			}
			genps_isLastCopyBeforeFSR_isLoaded = true;
		}
		return genps_isLastCopyBeforeFSR_;
	}
	const vector<bool> &genps_isMostlyLikePythia6Status3()
	{
		if (not genps_isMostlyLikePythia6Status3_isLoaded) {
			if (genps_isMostlyLikePythia6Status3_branch != 0) {
				genps_isMostlyLikePythia6Status3_branch->GetEntry(index);
			} else { 
				printf("branch genps_isMostlyLikePythia6Status3_branch does not exist!\n");
				exit(1);
			}
			genps_isMostlyLikePythia6Status3_isLoaded = true;
		}
		return genps_isMostlyLikePythia6Status3_;
	}
	const vector<bool> &genps_isPromptDecayed()
	{
		if (not genps_isPromptDecayed_isLoaded) {
			if (genps_isPromptDecayed_branch != 0) {
				genps_isPromptDecayed_branch->GetEntry(index);
			} else { 
				printf("branch genps_isPromptDecayed_branch does not exist!\n");
				exit(1);
			}
			genps_isPromptDecayed_isLoaded = true;
		}
		return genps_isPromptDecayed_;
	}
	const vector<bool> &genps_isPromptFinalState()
	{
		if (not genps_isPromptFinalState_isLoaded) {
			if (genps_isPromptFinalState_branch != 0) {
				genps_isPromptFinalState_branch->GetEntry(index);
			} else { 
				printf("branch genps_isPromptFinalState_branch does not exist!\n");
				exit(1);
			}
			genps_isPromptFinalState_isLoaded = true;
		}
		return genps_isPromptFinalState_;
	}
	const vector<bool> &mus_isRPCMuon()
	{
		if (not mus_isRPCMuon_isLoaded) {
			if (mus_isRPCMuon_branch != 0) {
				mus_isRPCMuon_branch->GetEntry(index);
			} else { 
				printf("branch mus_isRPCMuon_branch does not exist!\n");
				exit(1);
			}
			mus_isRPCMuon_isLoaded = true;
		}
		return mus_isRPCMuon_;
	}
	const vector<bool> &mus_tightMatch()
	{
		if (not mus_tightMatch_isLoaded) {
			if (mus_tightMatch_branch != 0) {
				mus_tightMatch_branch->GetEntry(index);
			} else { 
				printf("branch mus_tightMatch_branch does not exist!\n");
				exit(1);
			}
			mus_tightMatch_isLoaded = true;
		}
		return mus_tightMatch_;
	}
	const vector<bool> &mus_updatedSta()
	{
		if (not mus_updatedSta_isLoaded) {
			if (mus_updatedSta_branch != 0) {
				mus_updatedSta_branch->GetEntry(index);
			} else { 
				printf("branch mus_updatedSta_branch does not exist!\n");
				exit(1);
			}
			mus_updatedSta_isLoaded = true;
		}
		return mus_updatedSta_;
	}
	const vector<bool> &photons_haspixelSeed()
	{
		if (not photons_haspixelSeed_isLoaded) {
			if (photons_haspixelSeed_branch != 0) {
				photons_haspixelSeed_branch->GetEntry(index);
			} else { 
				printf("branch photons_haspixelSeed_branch does not exist!\n");
				exit(1);
			}
			photons_haspixelSeed_isLoaded = true;
		}
		return photons_haspixelSeed_;
	}
	float &evt_bs_Xwidth()
	{
		if (not evt_bs_Xwidth_isLoaded) {
			if (evt_bs_Xwidth_branch != 0) {
				evt_bs_Xwidth_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_Xwidth_branch does not exist!\n");
				exit(1);
			}
			evt_bs_Xwidth_isLoaded = true;
		}
		return evt_bs_Xwidth_;
	}
	float &evt_bs_XwidthErr()
	{
		if (not evt_bs_XwidthErr_isLoaded) {
			if (evt_bs_XwidthErr_branch != 0) {
				evt_bs_XwidthErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_XwidthErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_XwidthErr_isLoaded = true;
		}
		return evt_bs_XwidthErr_;
	}
	float &evt_bs_Ywidth()
	{
		if (not evt_bs_Ywidth_isLoaded) {
			if (evt_bs_Ywidth_branch != 0) {
				evt_bs_Ywidth_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_Ywidth_branch does not exist!\n");
				exit(1);
			}
			evt_bs_Ywidth_isLoaded = true;
		}
		return evt_bs_Ywidth_;
	}
	float &evt_bs_YwidthErr()
	{
		if (not evt_bs_YwidthErr_isLoaded) {
			if (evt_bs_YwidthErr_branch != 0) {
				evt_bs_YwidthErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_YwidthErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_YwidthErr_isLoaded = true;
		}
		return evt_bs_YwidthErr_;
	}
	float &evt_bs_dxdz()
	{
		if (not evt_bs_dxdz_isLoaded) {
			if (evt_bs_dxdz_branch != 0) {
				evt_bs_dxdz_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_dxdz_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dxdz_isLoaded = true;
		}
		return evt_bs_dxdz_;
	}
	float &evt_bs_dxdzErr()
	{
		if (not evt_bs_dxdzErr_isLoaded) {
			if (evt_bs_dxdzErr_branch != 0) {
				evt_bs_dxdzErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_dxdzErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dxdzErr_isLoaded = true;
		}
		return evt_bs_dxdzErr_;
	}
	float &evt_bs_dydz()
	{
		if (not evt_bs_dydz_isLoaded) {
			if (evt_bs_dydz_branch != 0) {
				evt_bs_dydz_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_dydz_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dydz_isLoaded = true;
		}
		return evt_bs_dydz_;
	}
	float &evt_bs_dydzErr()
	{
		if (not evt_bs_dydzErr_isLoaded) {
			if (evt_bs_dydzErr_branch != 0) {
				evt_bs_dydzErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_dydzErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_dydzErr_isLoaded = true;
		}
		return evt_bs_dydzErr_;
	}
	float &evt_bs_sigmaZ()
	{
		if (not evt_bs_sigmaZ_isLoaded) {
			if (evt_bs_sigmaZ_branch != 0) {
				evt_bs_sigmaZ_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_sigmaZ_branch does not exist!\n");
				exit(1);
			}
			evt_bs_sigmaZ_isLoaded = true;
		}
		return evt_bs_sigmaZ_;
	}
	float &evt_bs_sigmaZErr()
	{
		if (not evt_bs_sigmaZErr_isLoaded) {
			if (evt_bs_sigmaZErr_branch != 0) {
				evt_bs_sigmaZErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_sigmaZErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_sigmaZErr_isLoaded = true;
		}
		return evt_bs_sigmaZErr_;
	}
	float &evt_bs_xErr()
	{
		if (not evt_bs_xErr_isLoaded) {
			if (evt_bs_xErr_branch != 0) {
				evt_bs_xErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_xErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_xErr_isLoaded = true;
		}
		return evt_bs_xErr_;
	}
	float &evt_bs_yErr()
	{
		if (not evt_bs_yErr_isLoaded) {
			if (evt_bs_yErr_branch != 0) {
				evt_bs_yErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_yErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_yErr_isLoaded = true;
		}
		return evt_bs_yErr_;
	}
	float &evt_bs_zErr()
	{
		if (not evt_bs_zErr_isLoaded) {
			if (evt_bs_zErr_branch != 0) {
				evt_bs_zErr_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_zErr_branch does not exist!\n");
				exit(1);
			}
			evt_bs_zErr_isLoaded = true;
		}
		return evt_bs_zErr_;
	}
	float &evt_bField()
	{
		if (not evt_bField_isLoaded) {
			if (evt_bField_branch != 0) {
				evt_bField_branch->GetEntry(index);
			} else { 
				printf("branch evt_bField_branch does not exist!\n");
				exit(1);
			}
			evt_bField_isLoaded = true;
		}
		return evt_bField_;
	}
	float &evt_fixgrid_all_rho()
	{
		if (not evt_fixgrid_all_rho_isLoaded) {
			if (evt_fixgrid_all_rho_branch != 0) {
				evt_fixgrid_all_rho_branch->GetEntry(index);
			} else { 
				printf("branch evt_fixgrid_all_rho_branch does not exist!\n");
				exit(1);
			}
			evt_fixgrid_all_rho_isLoaded = true;
		}
		return evt_fixgrid_all_rho_;
	}
	float &evt_fixgridfastjet_allcalo_rho()
	{
		if (not evt_fixgridfastjet_allcalo_rho_isLoaded) {
			if (evt_fixgridfastjet_allcalo_rho_branch != 0) {
				evt_fixgridfastjet_allcalo_rho_branch->GetEntry(index);
			} else { 
				printf("branch evt_fixgridfastjet_allcalo_rho_branch does not exist!\n");
				exit(1);
			}
			evt_fixgridfastjet_allcalo_rho_isLoaded = true;
		}
		return evt_fixgridfastjet_allcalo_rho_;
	}
	float &evt_fixgridfastjet_all_rho()
	{
		if (not evt_fixgridfastjet_all_rho_isLoaded) {
			if (evt_fixgridfastjet_all_rho_branch != 0) {
				evt_fixgridfastjet_all_rho_branch->GetEntry(index);
			} else { 
				printf("branch evt_fixgridfastjet_all_rho_branch does not exist!\n");
				exit(1);
			}
			evt_fixgridfastjet_all_rho_isLoaded = true;
		}
		return evt_fixgridfastjet_all_rho_;
	}
	float &evt_fixgridfastjet_centralcalo_rho()
	{
		if (not evt_fixgridfastjet_centralcalo_rho_isLoaded) {
			if (evt_fixgridfastjet_centralcalo_rho_branch != 0) {
				evt_fixgridfastjet_centralcalo_rho_branch->GetEntry(index);
			} else { 
				printf("branch evt_fixgridfastjet_centralcalo_rho_branch does not exist!\n");
				exit(1);
			}
			evt_fixgridfastjet_centralcalo_rho_isLoaded = true;
		}
		return evt_fixgridfastjet_centralcalo_rho_;
	}
	float &evt_fixgridfastjet_centralchargedpileup_rho()
	{
		if (not evt_fixgridfastjet_centralchargedpileup_rho_isLoaded) {
			if (evt_fixgridfastjet_centralchargedpileup_rho_branch != 0) {
				evt_fixgridfastjet_centralchargedpileup_rho_branch->GetEntry(index);
			} else { 
				printf("branch evt_fixgridfastjet_centralchargedpileup_rho_branch does not exist!\n");
				exit(1);
			}
			evt_fixgridfastjet_centralchargedpileup_rho_isLoaded = true;
		}
		return evt_fixgridfastjet_centralchargedpileup_rho_;
	}
	float &evt_fixgridfastjet_centralneutral_rho()
	{
		if (not evt_fixgridfastjet_centralneutral_rho_isLoaded) {
			if (evt_fixgridfastjet_centralneutral_rho_branch != 0) {
				evt_fixgridfastjet_centralneutral_rho_branch->GetEntry(index);
			} else { 
				printf("branch evt_fixgridfastjet_centralneutral_rho_branch does not exist!\n");
				exit(1);
			}
			evt_fixgridfastjet_centralneutral_rho_isLoaded = true;
		}
		return evt_fixgridfastjet_centralneutral_rho_;
	}
	float &evt_kfactor()
	{
		if (not evt_kfactor_isLoaded) {
			if (evt_kfactor_branch != 0) {
				evt_kfactor_branch->GetEntry(index);
			} else { 
				printf("branch evt_kfactor_branch does not exist!\n");
				exit(1);
			}
			evt_kfactor_isLoaded = true;
		}
		return evt_kfactor_;
	}
	float &evt_scale1fb()
	{
		if (not evt_scale1fb_isLoaded) {
			if (evt_scale1fb_branch != 0) {
				evt_scale1fb_branch->GetEntry(index);
			} else { 
				printf("branch evt_scale1fb_branch does not exist!\n");
				exit(1);
			}
			evt_scale1fb_isLoaded = true;
		}
		return evt_scale1fb_;
	}
	float &evt_xsec_excl()
	{
		if (not evt_xsec_excl_isLoaded) {
			if (evt_xsec_excl_branch != 0) {
				evt_xsec_excl_branch->GetEntry(index);
			} else { 
				printf("branch evt_xsec_excl_branch does not exist!\n");
				exit(1);
			}
			evt_xsec_excl_isLoaded = true;
		}
		return evt_xsec_excl_;
	}
	float &evt_xsec_incl()
	{
		if (not evt_xsec_incl_isLoaded) {
			if (evt_xsec_incl_branch != 0) {
				evt_xsec_incl_branch->GetEntry(index);
			} else { 
				printf("branch evt_xsec_incl_branch does not exist!\n");
				exit(1);
			}
			evt_xsec_incl_isLoaded = true;
		}
		return evt_xsec_incl_;
	}
	float &genps_alphaQCD()
	{
		if (not genps_alphaQCD_isLoaded) {
			if (genps_alphaQCD_branch != 0) {
				genps_alphaQCD_branch->GetEntry(index);
			} else { 
				printf("branch genps_alphaQCD_branch does not exist!\n");
				exit(1);
			}
			genps_alphaQCD_isLoaded = true;
		}
		return genps_alphaQCD_;
	}
	float &genps_pthat()
	{
		if (not genps_pthat_isLoaded) {
			if (genps_pthat_branch != 0) {
				genps_pthat_branch->GetEntry(index);
			} else { 
				printf("branch genps_pthat_branch does not exist!\n");
				exit(1);
			}
			genps_pthat_isLoaded = true;
		}
		return genps_pthat_;
	}
	float &genps_qScale()
	{
		if (not genps_qScale_isLoaded) {
			if (genps_qScale_branch != 0) {
				genps_qScale_branch->GetEntry(index);
			} else { 
				printf("branch genps_qScale_branch does not exist!\n");
				exit(1);
			}
			genps_qScale_isLoaded = true;
		}
		return genps_qScale_;
	}
	float &genps_weight()
	{
		if (not genps_weight_isLoaded) {
			if (genps_weight_branch != 0) {
				genps_weight_branch->GetEntry(index);
			} else { 
				printf("branch genps_weight_branch does not exist!\n");
				exit(1);
			}
			genps_weight_isLoaded = true;
		}
		return genps_weight_;
	}
	float &gen_sumEt()
	{
		if (not gen_sumEt_isLoaded) {
			if (gen_sumEt_branch != 0) {
				gen_sumEt_branch->GetEntry(index);
			} else { 
				printf("branch gen_sumEt_branch does not exist!\n");
				exit(1);
			}
			gen_sumEt_isLoaded = true;
		}
		return gen_sumEt_;
	}
	float &hcalnoise_GetRecHitEnergy()
	{
		if (not hcalnoise_GetRecHitEnergy_isLoaded) {
			if (hcalnoise_GetRecHitEnergy_branch != 0) {
				hcalnoise_GetRecHitEnergy_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_GetRecHitEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_GetRecHitEnergy_isLoaded = true;
		}
		return hcalnoise_GetRecHitEnergy_;
	}
	float &hcalnoise_GetRecHitEnergy15()
	{
		if (not hcalnoise_GetRecHitEnergy15_isLoaded) {
			if (hcalnoise_GetRecHitEnergy15_branch != 0) {
				hcalnoise_GetRecHitEnergy15_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_GetRecHitEnergy15_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_GetRecHitEnergy15_isLoaded = true;
		}
		return hcalnoise_GetRecHitEnergy15_;
	}
	float &hcalnoise_GetTotalCalibCharge()
	{
		if (not hcalnoise_GetTotalCalibCharge_isLoaded) {
			if (hcalnoise_GetTotalCalibCharge_branch != 0) {
				hcalnoise_GetTotalCalibCharge_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_GetTotalCalibCharge_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_GetTotalCalibCharge_isLoaded = true;
		}
		return hcalnoise_GetTotalCalibCharge_;
	}
	float &hcalnoise_TS4TS5NoiseSumE()
	{
		if (not hcalnoise_TS4TS5NoiseSumE_isLoaded) {
			if (hcalnoise_TS4TS5NoiseSumE_branch != 0) {
				hcalnoise_TS4TS5NoiseSumE_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_TS4TS5NoiseSumE_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_TS4TS5NoiseSumE_isLoaded = true;
		}
		return hcalnoise_TS4TS5NoiseSumE_;
	}
	float &hcalnoise_TS4TS5NoiseSumEt()
	{
		if (not hcalnoise_TS4TS5NoiseSumEt_isLoaded) {
			if (hcalnoise_TS4TS5NoiseSumEt_branch != 0) {
				hcalnoise_TS4TS5NoiseSumEt_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_TS4TS5NoiseSumEt_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_TS4TS5NoiseSumEt_isLoaded = true;
		}
		return hcalnoise_TS4TS5NoiseSumEt_;
	}
	float &hcalnoise_eventChargeFraction()
	{
		if (not hcalnoise_eventChargeFraction_isLoaded) {
			if (hcalnoise_eventChargeFraction_branch != 0) {
				hcalnoise_eventChargeFraction_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventChargeFraction_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventChargeFraction_isLoaded = true;
		}
		return hcalnoise_eventChargeFraction_;
	}
	float &hcalnoise_eventEMEnergy()
	{
		if (not hcalnoise_eventEMEnergy_isLoaded) {
			if (hcalnoise_eventEMEnergy_branch != 0) {
				hcalnoise_eventEMEnergy_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventEMEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventEMEnergy_isLoaded = true;
		}
		return hcalnoise_eventEMEnergy_;
	}
	float &hcalnoise_eventEMFraction()
	{
		if (not hcalnoise_eventEMFraction_isLoaded) {
			if (hcalnoise_eventEMFraction_branch != 0) {
				hcalnoise_eventEMFraction_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventEMFraction_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventEMFraction_isLoaded = true;
		}
		return hcalnoise_eventEMFraction_;
	}
	float &hcalnoise_eventHadEnergy()
	{
		if (not hcalnoise_eventHadEnergy_isLoaded) {
			if (hcalnoise_eventHadEnergy_branch != 0) {
				hcalnoise_eventHadEnergy_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventHadEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventHadEnergy_isLoaded = true;
		}
		return hcalnoise_eventHadEnergy_;
	}
	float &hcalnoise_eventTrackEnergy()
	{
		if (not hcalnoise_eventTrackEnergy_isLoaded) {
			if (hcalnoise_eventTrackEnergy_branch != 0) {
				hcalnoise_eventTrackEnergy_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_eventTrackEnergy_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_eventTrackEnergy_isLoaded = true;
		}
		return hcalnoise_eventTrackEnergy_;
	}
	float &hcalnoise_flatNoiseSumE()
	{
		if (not hcalnoise_flatNoiseSumE_isLoaded) {
			if (hcalnoise_flatNoiseSumE_branch != 0) {
				hcalnoise_flatNoiseSumE_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_flatNoiseSumE_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_flatNoiseSumE_isLoaded = true;
		}
		return hcalnoise_flatNoiseSumE_;
	}
	float &hcalnoise_flatNoiseSumEt()
	{
		if (not hcalnoise_flatNoiseSumEt_isLoaded) {
			if (hcalnoise_flatNoiseSumEt_branch != 0) {
				hcalnoise_flatNoiseSumEt_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_flatNoiseSumEt_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_flatNoiseSumEt_isLoaded = true;
		}
		return hcalnoise_flatNoiseSumEt_;
	}
	float &hcalnoise_isolatedNoiseSumE()
	{
		if (not hcalnoise_isolatedNoiseSumE_isLoaded) {
			if (hcalnoise_isolatedNoiseSumE_branch != 0) {
				hcalnoise_isolatedNoiseSumE_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_isolatedNoiseSumE_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_isolatedNoiseSumE_isLoaded = true;
		}
		return hcalnoise_isolatedNoiseSumE_;
	}
	float &hcalnoise_isolatedNoiseSumEt()
	{
		if (not hcalnoise_isolatedNoiseSumEt_isLoaded) {
			if (hcalnoise_isolatedNoiseSumEt_branch != 0) {
				hcalnoise_isolatedNoiseSumEt_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_isolatedNoiseSumEt_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_isolatedNoiseSumEt_isLoaded = true;
		}
		return hcalnoise_isolatedNoiseSumEt_;
	}
	float &hcalnoise_max10GeVHitTime()
	{
		if (not hcalnoise_max10GeVHitTime_isLoaded) {
			if (hcalnoise_max10GeVHitTime_branch != 0) {
				hcalnoise_max10GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_max10GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_max10GeVHitTime_isLoaded = true;
		}
		return hcalnoise_max10GeVHitTime_;
	}
	float &hcalnoise_max25GeVHitTime()
	{
		if (not hcalnoise_max25GeVHitTime_isLoaded) {
			if (hcalnoise_max25GeVHitTime_branch != 0) {
				hcalnoise_max25GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_max25GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_max25GeVHitTime_isLoaded = true;
		}
		return hcalnoise_max25GeVHitTime_;
	}
	float &hcalnoise_maxE10TS()
	{
		if (not hcalnoise_maxE10TS_isLoaded) {
			if (hcalnoise_maxE10TS_branch != 0) {
				hcalnoise_maxE10TS_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxE10TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxE10TS_isLoaded = true;
		}
		return hcalnoise_maxE10TS_;
	}
	float &hcalnoise_maxE2Over10TS()
	{
		if (not hcalnoise_maxE2Over10TS_isLoaded) {
			if (hcalnoise_maxE2Over10TS_branch != 0) {
				hcalnoise_maxE2Over10TS_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxE2Over10TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxE2Over10TS_isLoaded = true;
		}
		return hcalnoise_maxE2Over10TS_;
	}
	float &hcalnoise_maxE2TS()
	{
		if (not hcalnoise_maxE2TS_isLoaded) {
			if (hcalnoise_maxE2TS_branch != 0) {
				hcalnoise_maxE2TS_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxE2TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxE2TS_isLoaded = true;
		}
		return hcalnoise_maxE2TS_;
	}
	float &hcalnoise_min10GeVHitTime()
	{
		if (not hcalnoise_min10GeVHitTime_isLoaded) {
			if (hcalnoise_min10GeVHitTime_branch != 0) {
				hcalnoise_min10GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_min10GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_min10GeVHitTime_isLoaded = true;
		}
		return hcalnoise_min10GeVHitTime_;
	}
	float &hcalnoise_min25GeVHitTime()
	{
		if (not hcalnoise_min25GeVHitTime_isLoaded) {
			if (hcalnoise_min25GeVHitTime_branch != 0) {
				hcalnoise_min25GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_min25GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_min25GeVHitTime_isLoaded = true;
		}
		return hcalnoise_min25GeVHitTime_;
	}
	float &hcalnoise_minE10TS()
	{
		if (not hcalnoise_minE10TS_isLoaded) {
			if (hcalnoise_minE10TS_branch != 0) {
				hcalnoise_minE10TS_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minE10TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minE10TS_isLoaded = true;
		}
		return hcalnoise_minE10TS_;
	}
	float &hcalnoise_minE2Over10TS()
	{
		if (not hcalnoise_minE2Over10TS_isLoaded) {
			if (hcalnoise_minE2Over10TS_branch != 0) {
				hcalnoise_minE2Over10TS_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minE2Over10TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minE2Over10TS_isLoaded = true;
		}
		return hcalnoise_minE2Over10TS_;
	}
	float &hcalnoise_minE2TS()
	{
		if (not hcalnoise_minE2TS_isLoaded) {
			if (hcalnoise_minE2TS_branch != 0) {
				hcalnoise_minE2TS_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minE2TS_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minE2TS_isLoaded = true;
		}
		return hcalnoise_minE2TS_;
	}
	float &hcalnoise_minHPDEMF()
	{
		if (not hcalnoise_minHPDEMF_isLoaded) {
			if (hcalnoise_minHPDEMF_branch != 0) {
				hcalnoise_minHPDEMF_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minHPDEMF_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minHPDEMF_isLoaded = true;
		}
		return hcalnoise_minHPDEMF_;
	}
	float &hcalnoise_minRBXEMF()
	{
		if (not hcalnoise_minRBXEMF_isLoaded) {
			if (hcalnoise_minRBXEMF_branch != 0) {
				hcalnoise_minRBXEMF_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_minRBXEMF_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_minRBXEMF_isLoaded = true;
		}
		return hcalnoise_minRBXEMF_;
	}
	float &hcalnoise_rms10GeVHitTime()
	{
		if (not hcalnoise_rms10GeVHitTime_isLoaded) {
			if (hcalnoise_rms10GeVHitTime_branch != 0) {
				hcalnoise_rms10GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_rms10GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_rms10GeVHitTime_isLoaded = true;
		}
		return hcalnoise_rms10GeVHitTime_;
	}
	float &hcalnoise_rms25GeVHitTime()
	{
		if (not hcalnoise_rms25GeVHitTime_isLoaded) {
			if (hcalnoise_rms25GeVHitTime_branch != 0) {
				hcalnoise_rms25GeVHitTime_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_rms25GeVHitTime_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_rms25GeVHitTime_isLoaded = true;
		}
		return hcalnoise_rms25GeVHitTime_;
	}
	float &hcalnoise_spikeNoiseSumE()
	{
		if (not hcalnoise_spikeNoiseSumE_isLoaded) {
			if (hcalnoise_spikeNoiseSumE_branch != 0) {
				hcalnoise_spikeNoiseSumE_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_spikeNoiseSumE_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_spikeNoiseSumE_isLoaded = true;
		}
		return hcalnoise_spikeNoiseSumE_;
	}
	float &hcalnoise_spikeNoiseSumEt()
	{
		if (not hcalnoise_spikeNoiseSumEt_isLoaded) {
			if (hcalnoise_spikeNoiseSumEt_branch != 0) {
				hcalnoise_spikeNoiseSumEt_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_spikeNoiseSumEt_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_spikeNoiseSumEt_isLoaded = true;
		}
		return hcalnoise_spikeNoiseSumEt_;
	}
	float &hcalnoise_triangleNoiseSumE()
	{
		if (not hcalnoise_triangleNoiseSumE_isLoaded) {
			if (hcalnoise_triangleNoiseSumE_branch != 0) {
				hcalnoise_triangleNoiseSumE_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_triangleNoiseSumE_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_triangleNoiseSumE_isLoaded = true;
		}
		return hcalnoise_triangleNoiseSumE_;
	}
	float &hcalnoise_triangleNoiseSumEt()
	{
		if (not hcalnoise_triangleNoiseSumEt_isLoaded) {
			if (hcalnoise_triangleNoiseSumEt_branch != 0) {
				hcalnoise_triangleNoiseSumEt_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_triangleNoiseSumEt_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_triangleNoiseSumEt_isLoaded = true;
		}
		return hcalnoise_triangleNoiseSumEt_;
	}
	float &pdfinfo_pdf1()
	{
		if (not pdfinfo_pdf1_isLoaded) {
			if (pdfinfo_pdf1_branch != 0) {
				pdfinfo_pdf1_branch->GetEntry(index);
			} else { 
				printf("branch pdfinfo_pdf1_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_pdf1_isLoaded = true;
		}
		return pdfinfo_pdf1_;
	}
	float &pdfinfo_pdf2()
	{
		if (not pdfinfo_pdf2_isLoaded) {
			if (pdfinfo_pdf2_branch != 0) {
				pdfinfo_pdf2_branch->GetEntry(index);
			} else { 
				printf("branch pdfinfo_pdf2_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_pdf2_isLoaded = true;
		}
		return pdfinfo_pdf2_;
	}
	float &pdfinfo_scale()
	{
		if (not pdfinfo_scale_isLoaded) {
			if (pdfinfo_scale_branch != 0) {
				pdfinfo_scale_branch->GetEntry(index);
			} else { 
				printf("branch pdfinfo_scale_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_scale_isLoaded = true;
		}
		return pdfinfo_scale_;
	}
	float &pdfinfo_x1()
	{
		if (not pdfinfo_x1_isLoaded) {
			if (pdfinfo_x1_branch != 0) {
				pdfinfo_x1_branch->GetEntry(index);
			} else { 
				printf("branch pdfinfo_x1_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_x1_isLoaded = true;
		}
		return pdfinfo_x1_;
	}
	float &pdfinfo_x2()
	{
		if (not pdfinfo_x2_isLoaded) {
			if (pdfinfo_x2_branch != 0) {
				pdfinfo_x2_branch->GetEntry(index);
			} else { 
				printf("branch pdfinfo_x2_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_x2_isLoaded = true;
		}
		return pdfinfo_x2_;
	}
	float &evt_fixgrid_rho_all()
	{
		if (not evt_fixgrid_rho_all_isLoaded) {
			if (evt_fixgrid_rho_all_branch != 0) {
				evt_fixgrid_rho_all_branch->GetEntry(index);
			} else { 
				printf("branch evt_fixgrid_rho_all_branch does not exist!\n");
				exit(1);
			}
			evt_fixgrid_rho_all_isLoaded = true;
		}
		return evt_fixgrid_rho_all_;
	}
	float &evt_fixgrid_rho_ctr()
	{
		if (not evt_fixgrid_rho_ctr_isLoaded) {
			if (evt_fixgrid_rho_ctr_branch != 0) {
				evt_fixgrid_rho_ctr_branch->GetEntry(index);
			} else { 
				printf("branch evt_fixgrid_rho_ctr_branch does not exist!\n");
				exit(1);
			}
			evt_fixgrid_rho_ctr_isLoaded = true;
		}
		return evt_fixgrid_rho_ctr_;
	}
	float &evt_fixgrid_rho_fwd()
	{
		if (not evt_fixgrid_rho_fwd_isLoaded) {
			if (evt_fixgrid_rho_fwd_branch != 0) {
				evt_fixgrid_rho_fwd_branch->GetEntry(index);
			} else { 
				printf("branch evt_fixgrid_rho_fwd_branch does not exist!\n");
				exit(1);
			}
			evt_fixgrid_rho_fwd_isLoaded = true;
		}
		return evt_fixgrid_rho_fwd_;
	}
	float &evt_calomet()
	{
		if (not evt_calomet_isLoaded) {
			if (evt_calomet_branch != 0) {
				evt_calomet_branch->GetEntry(index);
			} else { 
				printf("branch evt_calomet_branch does not exist!\n");
				exit(1);
			}
			evt_calomet_isLoaded = true;
		}
		return evt_calomet_;
	}
	float &evt_calometPhi()
	{
		if (not evt_calometPhi_isLoaded) {
			if (evt_calometPhi_branch != 0) {
				evt_calometPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_calometPhi_branch does not exist!\n");
				exit(1);
			}
			evt_calometPhi_isLoaded = true;
		}
		return evt_calometPhi_;
	}
	float &evt_pfmet()
	{
		if (not evt_pfmet_isLoaded) {
			if (evt_pfmet_branch != 0) {
				evt_pfmet_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfmet_branch does not exist!\n");
				exit(1);
			}
			evt_pfmet_isLoaded = true;
		}
		return evt_pfmet_;
	}
	float &evt_pfmetPhi()
	{
		if (not evt_pfmetPhi_isLoaded) {
			if (evt_pfmetPhi_branch != 0) {
				evt_pfmetPhi_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfmetPhi_branch does not exist!\n");
				exit(1);
			}
			evt_pfmetPhi_isLoaded = true;
		}
		return evt_pfmetPhi_;
	}
	float &evt_pfmetPhi_raw()
	{
		if (not evt_pfmetPhi_raw_isLoaded) {
			if (evt_pfmetPhi_raw_branch != 0) {
				evt_pfmetPhi_raw_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfmetPhi_raw_branch does not exist!\n");
				exit(1);
			}
			evt_pfmetPhi_raw_isLoaded = true;
		}
		return evt_pfmetPhi_raw_;
	}
	float &evt_pfmetSig()
	{
		if (not evt_pfmetSig_isLoaded) {
			if (evt_pfmetSig_branch != 0) {
				evt_pfmetSig_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfmetSig_branch does not exist!\n");
				exit(1);
			}
			evt_pfmetSig_isLoaded = true;
		}
		return evt_pfmetSig_;
	}
	float &evt_pfmet_raw()
	{
		if (not evt_pfmet_raw_isLoaded) {
			if (evt_pfmet_raw_branch != 0) {
				evt_pfmet_raw_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfmet_raw_branch does not exist!\n");
				exit(1);
			}
			evt_pfmet_raw_isLoaded = true;
		}
		return evt_pfmet_raw_;
	}
	float &evt_pfsumet()
	{
		if (not evt_pfsumet_isLoaded) {
			if (evt_pfsumet_branch != 0) {
				evt_pfsumet_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfsumet_branch does not exist!\n");
				exit(1);
			}
			evt_pfsumet_isLoaded = true;
		}
		return evt_pfsumet_;
	}
	float &evt_pfsumet_raw()
	{
		if (not evt_pfsumet_raw_isLoaded) {
			if (evt_pfsumet_raw_branch != 0) {
				evt_pfsumet_raw_branch->GetEntry(index);
			} else { 
				printf("branch evt_pfsumet_raw_branch does not exist!\n");
				exit(1);
			}
			evt_pfsumet_raw_isLoaded = true;
		}
		return evt_pfsumet_raw_;
	}
	float &gen_met()
	{
		if (not gen_met_isLoaded) {
			if (gen_met_branch != 0) {
				gen_met_branch->GetEntry(index);
			} else { 
				printf("branch gen_met_branch does not exist!\n");
				exit(1);
			}
			gen_met_isLoaded = true;
		}
		return gen_met_;
	}
	float &gen_metPhi()
	{
		if (not gen_metPhi_isLoaded) {
			if (gen_metPhi_branch != 0) {
				gen_metPhi_branch->GetEntry(index);
			} else { 
				printf("branch gen_metPhi_branch does not exist!\n");
				exit(1);
			}
			gen_metPhi_isLoaded = true;
		}
		return gen_metPhi_;
	}
	float &sparm_filterEfficiency()
	{
		if (not sparm_filterEfficiency_isLoaded) {
			if (sparm_filterEfficiency_branch != 0) {
				sparm_filterEfficiency_branch->GetEntry(index);
			} else { 
				printf("branch sparm_filterEfficiency_branch does not exist!\n");
				exit(1);
			}
			sparm_filterEfficiency_isLoaded = true;
		}
		return sparm_filterEfficiency_;
	}
	float &sparm_pdfScale()
	{
		if (not sparm_pdfScale_isLoaded) {
			if (sparm_pdfScale_branch != 0) {
				sparm_pdfScale_branch->GetEntry(index);
			} else { 
				printf("branch sparm_pdfScale_branch does not exist!\n");
				exit(1);
			}
			sparm_pdfScale_isLoaded = true;
		}
		return sparm_pdfScale_;
	}
	float &sparm_pdfWeight1()
	{
		if (not sparm_pdfWeight1_isLoaded) {
			if (sparm_pdfWeight1_branch != 0) {
				sparm_pdfWeight1_branch->GetEntry(index);
			} else { 
				printf("branch sparm_pdfWeight1_branch does not exist!\n");
				exit(1);
			}
			sparm_pdfWeight1_isLoaded = true;
		}
		return sparm_pdfWeight1_;
	}
	float &sparm_pdfWeight2()
	{
		if (not sparm_pdfWeight2_isLoaded) {
			if (sparm_pdfWeight2_branch != 0) {
				sparm_pdfWeight2_branch->GetEntry(index);
			} else { 
				printf("branch sparm_pdfWeight2_branch does not exist!\n");
				exit(1);
			}
			sparm_pdfWeight2_isLoaded = true;
		}
		return sparm_pdfWeight2_;
	}
	float &sparm_weight()
	{
		if (not sparm_weight_isLoaded) {
			if (sparm_weight_branch != 0) {
				sparm_weight_branch->GetEntry(index);
			} else { 
				printf("branch sparm_weight_branch does not exist!\n");
				exit(1);
			}
			sparm_weight_isLoaded = true;
		}
		return sparm_weight_;
	}
	float &sparm_xsec()
	{
		if (not sparm_xsec_isLoaded) {
			if (sparm_xsec_branch != 0) {
				sparm_xsec_branch->GetEntry(index);
			} else { 
				printf("branch sparm_xsec_branch does not exist!\n");
				exit(1);
			}
			sparm_xsec_isLoaded = true;
		}
		return sparm_xsec_;
	}
	ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &evt_bsp4()
	{
		if (not evt_bsp4_isLoaded) {
			if (evt_bsp4_branch != 0) {
				evt_bsp4_branch->GetEntry(index);
			} else { 
				printf("branch evt_bsp4_branch does not exist!\n");
				exit(1);
			}
			evt_bsp4_isLoaded = true;
		}
		return evt_bsp4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_nonCHS_p4()
	{
		if (not pfjets_nonCHS_p4_isLoaded) {
			if (pfjets_nonCHS_p4_branch != 0) {
				pfjets_nonCHS_p4_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_p4_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_p4_isLoaded = true;
		}
		return pfjets_nonCHS_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak8jets_mc_gp_p4()
	{
		if (not ak8jets_mc_gp_p4_isLoaded) {
			if (ak8jets_mc_gp_p4_branch != 0) {
				ak8jets_mc_gp_p4_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_mc_gp_p4_branch does not exist!\n");
				exit(1);
			}
			ak8jets_mc_gp_p4_isLoaded = true;
		}
		return ak8jets_mc_gp_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak8jets_mc_p4()
	{
		if (not ak8jets_mc_p4_isLoaded) {
			if (ak8jets_mc_p4_branch != 0) {
				ak8jets_mc_p4_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_mc_p4_branch does not exist!\n");
				exit(1);
			}
			ak8jets_mc_p4_isLoaded = true;
		}
		return ak8jets_mc_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_motherp4()
	{
		if (not els_mc_motherp4_isLoaded) {
			if (els_mc_motherp4_branch != 0) {
				els_mc_motherp4_branch->GetEntry(index);
			} else { 
				printf("branch els_mc_motherp4_branch does not exist!\n");
				exit(1);
			}
			els_mc_motherp4_isLoaded = true;
		}
		return els_mc_motherp4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_p4()
	{
		if (not els_mc_p4_isLoaded) {
			if (els_mc_p4_branch != 0) {
				els_mc_p4_branch->GetEntry(index);
			} else { 
				printf("branch els_mc_p4_branch does not exist!\n");
				exit(1);
			}
			els_mc_p4_isLoaded = true;
		}
		return els_mc_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_motherp4()
	{
		if (not mus_mc_motherp4_isLoaded) {
			if (mus_mc_motherp4_branch != 0) {
				mus_mc_motherp4_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc_motherp4_branch does not exist!\n");
				exit(1);
			}
			mus_mc_motherp4_isLoaded = true;
		}
		return mus_mc_motherp4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_p4()
	{
		if (not mus_mc_p4_isLoaded) {
			if (mus_mc_p4_branch != 0) {
				mus_mc_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc_p4_branch does not exist!\n");
				exit(1);
			}
			mus_mc_p4_isLoaded = true;
		}
		return mus_mc_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_mc_gp_p4()
	{
		if (not pfjets_mc_gp_p4_isLoaded) {
			if (pfjets_mc_gp_p4_branch != 0) {
				pfjets_mc_gp_p4_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_gp_p4_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_gp_p4_isLoaded = true;
		}
		return pfjets_mc_gp_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_mc_motherp4()
	{
		if (not pfjets_mc_motherp4_isLoaded) {
			if (pfjets_mc_motherp4_branch != 0) {
				pfjets_mc_motherp4_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_motherp4_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_motherp4_isLoaded = true;
		}
		return pfjets_mc_motherp4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_mc_p4()
	{
		if (not pfjets_mc_p4_isLoaded) {
			if (pfjets_mc_p4_branch != 0) {
				pfjets_mc_p4_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_p4_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_p4_isLoaded = true;
		}
		return pfjets_mc_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_mc_motherp4()
	{
		if (not photons_mc_motherp4_isLoaded) {
			if (photons_mc_motherp4_branch != 0) {
				photons_mc_motherp4_branch->GetEntry(index);
			} else { 
				printf("branch photons_mc_motherp4_branch does not exist!\n");
				exit(1);
			}
			photons_mc_motherp4_isLoaded = true;
		}
		return photons_mc_motherp4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_mc_p4()
	{
		if (not photons_mc_p4_isLoaded) {
			if (photons_mc_p4_branch != 0) {
				photons_mc_p4_branch->GetEntry(index);
			} else { 
				printf("branch photons_mc_p4_branch does not exist!\n");
				exit(1);
			}
			photons_mc_p4_isLoaded = true;
		}
		return photons_mc_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_patMatch_p4()
	{
		if (not els_mc_patMatch_p4_isLoaded) {
			if (els_mc_patMatch_p4_branch != 0) {
				els_mc_patMatch_p4_branch->GetEntry(index);
			} else { 
				printf("branch els_mc_patMatch_p4_branch does not exist!\n");
				exit(1);
			}
			els_mc_patMatch_p4_isLoaded = true;
		}
		return els_mc_patMatch_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4()
	{
		if (not els_p4_isLoaded) {
			if (els_p4_branch != 0) {
				els_p4_branch->GetEntry(index);
			} else { 
				printf("branch els_p4_branch does not exist!\n");
				exit(1);
			}
			els_p4_isLoaded = true;
		}
		return els_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4In()
	{
		if (not els_p4In_isLoaded) {
			if (els_p4In_branch != 0) {
				els_p4In_branch->GetEntry(index);
			} else { 
				printf("branch els_p4In_branch does not exist!\n");
				exit(1);
			}
			els_p4In_isLoaded = true;
		}
		return els_p4In_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4Out()
	{
		if (not els_p4Out_isLoaded) {
			if (els_p4Out_branch != 0) {
				els_p4Out_branch->GetEntry(index);
			} else { 
				printf("branch els_p4Out_branch does not exist!\n");
				exit(1);
			}
			els_p4Out_isLoaded = true;
		}
		return els_p4Out_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_p4()
	{
		if (not els_trk_p4_isLoaded) {
			if (els_trk_p4_branch != 0) {
				els_trk_p4_branch->GetEntry(index);
			} else { 
				printf("branch els_trk_p4_branch does not exist!\n");
				exit(1);
			}
			els_trk_p4_isLoaded = true;
		}
		return els_trk_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_vertex_p4()
	{
		if (not els_trk_vertex_p4_isLoaded) {
			if (els_trk_vertex_p4_branch != 0) {
				els_trk_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch els_trk_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			els_trk_vertex_p4_isLoaded = true;
		}
		return els_trk_vertex_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_vertex_p4()
	{
		if (not els_vertex_p4_isLoaded) {
			if (els_vertex_p4_branch != 0) {
				els_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch els_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			els_vertex_p4_isLoaded = true;
		}
		return els_vertex_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genjets_p4NoMuNoNu()
	{
		if (not genjets_p4NoMuNoNu_isLoaded) {
			if (genjets_p4NoMuNoNu_branch != 0) {
				genjets_p4NoMuNoNu_branch->GetEntry(index);
			} else { 
				printf("branch genjets_p4NoMuNoNu_branch does not exist!\n");
				exit(1);
			}
			genjets_p4NoMuNoNu_isLoaded = true;
		}
		return genjets_p4NoMuNoNu_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_p4()
	{
		if (not genps_p4_isLoaded) {
			if (genps_p4_branch != 0) {
				genps_p4_branch->GetEntry(index);
			} else { 
				printf("branch genps_p4_branch does not exist!\n");
				exit(1);
			}
			genps_p4_isLoaded = true;
		}
		return genps_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_prod_vtx()
	{
		if (not genps_prod_vtx_isLoaded) {
			if (genps_prod_vtx_branch != 0) {
				genps_prod_vtx_branch->GetEntry(index);
			} else { 
				printf("branch genps_prod_vtx_branch does not exist!\n");
				exit(1);
			}
			genps_prod_vtx_isLoaded = true;
		}
		return genps_prod_vtx_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genjets_p4()
	{
		if (not genjets_p4_isLoaded) {
			if (genjets_p4_branch != 0) {
				genjets_p4_branch->GetEntry(index);
			} else { 
				printf("branch genjets_p4_branch does not exist!\n");
				exit(1);
			}
			genjets_p4_isLoaded = true;
		}
		return genjets_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_p4()
	{
		if (not hyp_ll_p4_isLoaded) {
			if (hyp_ll_p4_branch != 0) {
				hyp_ll_p4_branch->GetEntry(index);
			} else { 
				printf("branch hyp_ll_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_p4_isLoaded = true;
		}
		return hyp_ll_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_p4()
	{
		if (not hyp_lt_p4_isLoaded) {
			if (hyp_lt_p4_branch != 0) {
				hyp_lt_p4_branch->GetEntry(index);
			} else { 
				printf("branch hyp_lt_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_p4_isLoaded = true;
		}
		return hyp_lt_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_p4()
	{
		if (not hyp_p4_isLoaded) {
			if (hyp_p4_branch != 0) {
				hyp_p4_branch->GetEntry(index);
			} else { 
				printf("branch hyp_p4_branch does not exist!\n");
				exit(1);
			}
			hyp_p4_isLoaded = true;
		}
		return hyp_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &isotracks_p4()
	{
		if (not isotracks_p4_isLoaded) {
			if (isotracks_p4_branch != 0) {
				isotracks_p4_branch->GetEntry(index);
			} else { 
				printf("branch isotracks_p4_branch does not exist!\n");
				exit(1);
			}
			isotracks_p4_isLoaded = true;
		}
		return isotracks_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_p4()
	{
		if (not mus_gfit_p4_isLoaded) {
			if (mus_gfit_p4_branch != 0) {
				mus_gfit_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_p4_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_p4_isLoaded = true;
		}
		return mus_gfit_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_vertex_p4()
	{
		if (not mus_gfit_vertex_p4_isLoaded) {
			if (mus_gfit_vertex_p4_branch != 0) {
				mus_gfit_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_vertex_p4_isLoaded = true;
		}
		return mus_gfit_vertex_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_patMatch_p4()
	{
		if (not mus_mc_patMatch_p4_isLoaded) {
			if (mus_mc_patMatch_p4_branch != 0) {
				mus_mc_patMatch_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc_patMatch_p4_branch does not exist!\n");
				exit(1);
			}
			mus_mc_patMatch_p4_isLoaded = true;
		}
		return mus_mc_patMatch_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_p4()
	{
		if (not mus_p4_isLoaded) {
			if (mus_p4_branch != 0) {
				mus_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_p4_branch does not exist!\n");
				exit(1);
			}
			mus_p4_isLoaded = true;
		}
		return mus_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_pfp4()
	{
		if (not mus_pfp4_isLoaded) {
			if (mus_pfp4_branch != 0) {
				mus_pfp4_branch->GetEntry(index);
			} else { 
				printf("branch mus_pfp4_branch does not exist!\n");
				exit(1);
			}
			mus_pfp4_isLoaded = true;
		}
		return mus_pfp4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_p4()
	{
		if (not mus_sta_p4_isLoaded) {
			if (mus_sta_p4_branch != 0) {
				mus_sta_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_p4_branch does not exist!\n");
				exit(1);
			}
			mus_sta_p4_isLoaded = true;
		}
		return mus_sta_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_vertex_p4()
	{
		if (not mus_sta_vertex_p4_isLoaded) {
			if (mus_sta_vertex_p4_branch != 0) {
				mus_sta_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			mus_sta_vertex_p4_isLoaded = true;
		}
		return mus_sta_vertex_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_trk_p4()
	{
		if (not mus_trk_p4_isLoaded) {
			if (mus_trk_p4_branch != 0) {
				mus_trk_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_trk_p4_branch does not exist!\n");
				exit(1);
			}
			mus_trk_p4_isLoaded = true;
		}
		return mus_trk_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_vertex_p4()
	{
		if (not mus_vertex_p4_isLoaded) {
			if (mus_vertex_p4_branch != 0) {
				mus_vertex_p4_branch->GetEntry(index);
			} else { 
				printf("branch mus_vertex_p4_branch does not exist!\n");
				exit(1);
			}
			mus_vertex_p4_isLoaded = true;
		}
		return mus_vertex_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfcands_p4()
	{
		if (not pfcands_p4_isLoaded) {
			if (pfcands_p4_branch != 0) {
				pfcands_p4_branch->GetEntry(index);
			} else { 
				printf("branch pfcands_p4_branch does not exist!\n");
				exit(1);
			}
			pfcands_p4_isLoaded = true;
		}
		return pfcands_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_p4()
	{
		if (not pfjets_p4_isLoaded) {
			if (pfjets_p4_branch != 0) {
				pfjets_p4_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_p4_branch does not exist!\n");
				exit(1);
			}
			pfjets_p4_isLoaded = true;
		}
		return pfjets_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_puppi_p4()
	{
		if (not pfjets_puppi_p4_isLoaded) {
			if (pfjets_puppi_p4_branch != 0) {
				pfjets_puppi_p4_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_p4_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_p4_isLoaded = true;
		}
		return pfjets_puppi_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_chargecand_p4()
	{
		if (not taus_pf_lead_chargecand_p4_isLoaded) {
			if (taus_pf_lead_chargecand_p4_branch != 0) {
				taus_pf_lead_chargecand_p4_branch->GetEntry(index);
			} else { 
				printf("branch taus_pf_lead_chargecand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_lead_chargecand_p4_isLoaded = true;
		}
		return taus_pf_lead_chargecand_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_neutrcand_p4()
	{
		if (not taus_pf_lead_neutrcand_p4_isLoaded) {
			if (taus_pf_lead_neutrcand_p4_branch != 0) {
				taus_pf_lead_neutrcand_p4_branch->GetEntry(index);
			} else { 
				printf("branch taus_pf_lead_neutrcand_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_lead_neutrcand_p4_isLoaded = true;
		}
		return taus_pf_lead_neutrcand_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_p4()
	{
		if (not taus_pf_p4_isLoaded) {
			if (taus_pf_p4_branch != 0) {
				taus_pf_p4_branch->GetEntry(index);
			} else { 
				printf("branch taus_pf_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_p4_isLoaded = true;
		}
		return taus_pf_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_p4()
	{
		if (not photons_p4_isLoaded) {
			if (photons_p4_branch != 0) {
				photons_p4_branch->GetEntry(index);
			} else { 
				printf("branch photons_p4_branch does not exist!\n");
				exit(1);
			}
			photons_p4_isLoaded = true;
		}
		return photons_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &svs_p4()
	{
		if (not svs_p4_isLoaded) {
			if (svs_p4_branch != 0) {
				svs_p4_branch->GetEntry(index);
			} else { 
				printf("branch svs_p4_branch does not exist!\n");
				exit(1);
			}
			svs_p4_isLoaded = true;
		}
		return svs_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &svs_position()
	{
		if (not svs_position_isLoaded) {
			if (svs_position_branch != 0) {
				svs_position_branch->GetEntry(index);
			} else { 
				printf("branch svs_position_branch does not exist!\n");
				exit(1);
			}
			svs_position_isLoaded = true;
		}
		return svs_position_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak8jets_p4()
	{
		if (not ak8jets_p4_isLoaded) {
			if (ak8jets_p4_branch != 0) {
				ak8jets_p4_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_p4_branch does not exist!\n");
				exit(1);
			}
			ak8jets_p4_isLoaded = true;
		}
		return ak8jets_p4_;
	}
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vtxs_position()
	{
		if (not vtxs_position_isLoaded) {
			if (vtxs_position_branch != 0) {
				vtxs_position_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_position_branch does not exist!\n");
				exit(1);
			}
			vtxs_position_isLoaded = true;
		}
		return vtxs_position_;
	}
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &genps_lepdaughter_p4()
	{
		if (not genps_lepdaughter_p4_isLoaded) {
			if (genps_lepdaughter_p4_branch != 0) {
				genps_lepdaughter_p4_branch->GetEntry(index);
			} else { 
				printf("branch genps_lepdaughter_p4_branch does not exist!\n");
				exit(1);
			}
			genps_lepdaughter_p4_isLoaded = true;
		}
		return genps_lepdaughter_p4_;
	}
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hlt_trigObjs_p4()
	{
		if (not hlt_trigObjs_p4_isLoaded) {
			if (hlt_trigObjs_p4_branch != 0) {
				hlt_trigObjs_p4_branch->GetEntry(index);
			} else { 
				printf("branch hlt_trigObjs_p4_branch does not exist!\n");
				exit(1);
			}
			hlt_trigObjs_p4_isLoaded = true;
		}
		return hlt_trigObjs_p4_;
	}
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isocands_p4()
	{
		if (not taus_pf_isocands_p4_isLoaded) {
			if (taus_pf_isocands_p4_branch != 0) {
				taus_pf_isocands_p4_branch->GetEntry(index);
			} else { 
				printf("branch taus_pf_isocands_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_isocands_p4_isLoaded = true;
		}
		return taus_pf_isocands_p4_;
	}
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_signalcands_p4()
	{
		if (not taus_pf_signalcands_p4_isLoaded) {
			if (taus_pf_signalcands_p4_branch != 0) {
				taus_pf_signalcands_p4_branch->GetEntry(index);
			} else { 
				printf("branch taus_pf_signalcands_p4_branch does not exist!\n");
				exit(1);
			}
			taus_pf_signalcands_p4_isLoaded = true;
		}
		return taus_pf_signalcands_p4_;
	}
	const vector<float> &pfjets_nonCHS_area()
	{
		if (not pfjets_nonCHS_area_isLoaded) {
			if (pfjets_nonCHS_area_branch != 0) {
				pfjets_nonCHS_area_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_area_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_area_isLoaded = true;
		}
		return pfjets_nonCHS_area_;
	}
	const vector<float> &pfjets_nonCHS_chargedEmE()
	{
		if (not pfjets_nonCHS_chargedEmE_isLoaded) {
			if (pfjets_nonCHS_chargedEmE_branch != 0) {
				pfjets_nonCHS_chargedEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_chargedEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_chargedEmE_isLoaded = true;
		}
		return pfjets_nonCHS_chargedEmE_;
	}
	const vector<float> &pfjets_nonCHS_chargedHadronE()
	{
		if (not pfjets_nonCHS_chargedHadronE_isLoaded) {
			if (pfjets_nonCHS_chargedHadronE_branch != 0) {
				pfjets_nonCHS_chargedHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_chargedHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_chargedHadronE_isLoaded = true;
		}
		return pfjets_nonCHS_chargedHadronE_;
	}
	const vector<float> &pfjets_nonCHS_electronE()
	{
		if (not pfjets_nonCHS_electronE_isLoaded) {
			if (pfjets_nonCHS_electronE_branch != 0) {
				pfjets_nonCHS_electronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_electronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_electronE_isLoaded = true;
		}
		return pfjets_nonCHS_electronE_;
	}
	const vector<float> &pfjets_nonCHS_hfEmE()
	{
		if (not pfjets_nonCHS_hfEmE_isLoaded) {
			if (pfjets_nonCHS_hfEmE_branch != 0) {
				pfjets_nonCHS_hfEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_hfEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_hfEmE_isLoaded = true;
		}
		return pfjets_nonCHS_hfEmE_;
	}
	const vector<float> &pfjets_nonCHS_hfHadronE()
	{
		if (not pfjets_nonCHS_hfHadronE_isLoaded) {
			if (pfjets_nonCHS_hfHadronE_branch != 0) {
				pfjets_nonCHS_hfHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_hfHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_hfHadronE_isLoaded = true;
		}
		return pfjets_nonCHS_hfHadronE_;
	}
	const vector<float> &pfjets_nonCHS_mass()
	{
		if (not pfjets_nonCHS_mass_isLoaded) {
			if (pfjets_nonCHS_mass_branch != 0) {
				pfjets_nonCHS_mass_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_mass_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_mass_isLoaded = true;
		}
		return pfjets_nonCHS_mass_;
	}
	const vector<float> &pfjets_nonCHS_muonE()
	{
		if (not pfjets_nonCHS_muonE_isLoaded) {
			if (pfjets_nonCHS_muonE_branch != 0) {
				pfjets_nonCHS_muonE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_muonE_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_muonE_isLoaded = true;
		}
		return pfjets_nonCHS_muonE_;
	}
	const vector<float> &pfjets_nonCHS_neutralEmE()
	{
		if (not pfjets_nonCHS_neutralEmE_isLoaded) {
			if (pfjets_nonCHS_neutralEmE_branch != 0) {
				pfjets_nonCHS_neutralEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_neutralEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_neutralEmE_isLoaded = true;
		}
		return pfjets_nonCHS_neutralEmE_;
	}
	const vector<float> &pfjets_nonCHS_neutralHadronE()
	{
		if (not pfjets_nonCHS_neutralHadronE_isLoaded) {
			if (pfjets_nonCHS_neutralHadronE_branch != 0) {
				pfjets_nonCHS_neutralHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_neutralHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_neutralHadronE_isLoaded = true;
		}
		return pfjets_nonCHS_neutralHadronE_;
	}
	const vector<float> &pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag()
	{
		if (not pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded) {
			if (pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch != 0) {
				pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded = true;
		}
		return pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag_;
	}
	const vector<float> &pfjets_nonCHS_photonE()
	{
		if (not pfjets_nonCHS_photonE_isLoaded) {
			if (pfjets_nonCHS_photonE_branch != 0) {
				pfjets_nonCHS_photonE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_photonE_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_photonE_isLoaded = true;
		}
		return pfjets_nonCHS_photonE_;
	}
	const vector<float> &pfjets_nonCHS_pileupJetId()
	{
		if (not pfjets_nonCHS_pileupJetId_isLoaded) {
			if (pfjets_nonCHS_pileupJetId_branch != 0) {
				pfjets_nonCHS_pileupJetId_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_pileupJetId_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_pileupJetId_isLoaded = true;
		}
		return pfjets_nonCHS_pileupJetId_;
	}
	const vector<float> &pfjets_nonCHS_undoJEC()
	{
		if (not pfjets_nonCHS_undoJEC_isLoaded) {
			if (pfjets_nonCHS_undoJEC_branch != 0) {
				pfjets_nonCHS_undoJEC_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_undoJEC_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_undoJEC_isLoaded = true;
		}
		return pfjets_nonCHS_undoJEC_;
	}
	const vector<float> &evt_bs_covMatrix()
	{
		if (not evt_bs_covMatrix_isLoaded) {
			if (evt_bs_covMatrix_branch != 0) {
				evt_bs_covMatrix_branch->GetEntry(index);
			} else { 
				printf("branch evt_bs_covMatrix_branch does not exist!\n");
				exit(1);
			}
			evt_bs_covMatrix_isLoaded = true;
		}
		return evt_bs_covMatrix_;
	}
	const vector<float> &els_mc3dr()
	{
		if (not els_mc3dr_isLoaded) {
			if (els_mc3dr_branch != 0) {
				els_mc3dr_branch->GetEntry(index);
			} else { 
				printf("branch els_mc3dr_branch does not exist!\n");
				exit(1);
			}
			els_mc3dr_isLoaded = true;
		}
		return els_mc3dr_;
	}
	const vector<float> &els_mcdr()
	{
		if (not els_mcdr_isLoaded) {
			if (els_mcdr_branch != 0) {
				els_mcdr_branch->GetEntry(index);
			} else { 
				printf("branch els_mcdr_branch does not exist!\n");
				exit(1);
			}
			els_mcdr_isLoaded = true;
		}
		return els_mcdr_;
	}
	const vector<float> &mus_mc3dr()
	{
		if (not mus_mc3dr_isLoaded) {
			if (mus_mc3dr_branch != 0) {
				mus_mc3dr_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc3dr_branch does not exist!\n");
				exit(1);
			}
			mus_mc3dr_isLoaded = true;
		}
		return mus_mc3dr_;
	}
	const vector<float> &mus_mcdr()
	{
		if (not mus_mcdr_isLoaded) {
			if (mus_mcdr_branch != 0) {
				mus_mcdr_branch->GetEntry(index);
			} else { 
				printf("branch mus_mcdr_branch does not exist!\n");
				exit(1);
			}
			mus_mcdr_isLoaded = true;
		}
		return mus_mcdr_;
	}
	const vector<float> &pfjets_mc3dr()
	{
		if (not pfjets_mc3dr_isLoaded) {
			if (pfjets_mc3dr_branch != 0) {
				pfjets_mc3dr_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc3dr_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc3dr_isLoaded = true;
		}
		return pfjets_mc3dr_;
	}
	const vector<float> &pfjets_mcdr()
	{
		if (not pfjets_mcdr_isLoaded) {
			if (pfjets_mcdr_branch != 0) {
				pfjets_mcdr_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mcdr_branch does not exist!\n");
				exit(1);
			}
			pfjets_mcdr_isLoaded = true;
		}
		return pfjets_mcdr_;
	}
	const vector<float> &pfjets_mc_emEnergy()
	{
		if (not pfjets_mc_emEnergy_isLoaded) {
			if (pfjets_mc_emEnergy_branch != 0) {
				pfjets_mc_emEnergy_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_emEnergy_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_emEnergy_isLoaded = true;
		}
		return pfjets_mc_emEnergy_;
	}
	const vector<float> &pfjets_mc_gpdr()
	{
		if (not pfjets_mc_gpdr_isLoaded) {
			if (pfjets_mc_gpdr_branch != 0) {
				pfjets_mc_gpdr_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_gpdr_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_gpdr_isLoaded = true;
		}
		return pfjets_mc_gpdr_;
	}
	const vector<float> &pfjets_mc_hadEnergy()
	{
		if (not pfjets_mc_hadEnergy_isLoaded) {
			if (pfjets_mc_hadEnergy_branch != 0) {
				pfjets_mc_hadEnergy_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_hadEnergy_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_hadEnergy_isLoaded = true;
		}
		return pfjets_mc_hadEnergy_;
	}
	const vector<float> &pfjets_mc_invEnergy()
	{
		if (not pfjets_mc_invEnergy_isLoaded) {
			if (pfjets_mc_invEnergy_branch != 0) {
				pfjets_mc_invEnergy_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_invEnergy_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_invEnergy_isLoaded = true;
		}
		return pfjets_mc_invEnergy_;
	}
	const vector<float> &pfjets_mc_otherEnergy()
	{
		if (not pfjets_mc_otherEnergy_isLoaded) {
			if (pfjets_mc_otherEnergy_branch != 0) {
				pfjets_mc_otherEnergy_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_otherEnergy_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_otherEnergy_isLoaded = true;
		}
		return pfjets_mc_otherEnergy_;
	}
	const vector<float> &photons_mc3dr()
	{
		if (not photons_mc3dr_isLoaded) {
			if (photons_mc3dr_branch != 0) {
				photons_mc3dr_branch->GetEntry(index);
			} else { 
				printf("branch photons_mc3dr_branch does not exist!\n");
				exit(1);
			}
			photons_mc3dr_isLoaded = true;
		}
		return photons_mc3dr_;
	}
	const vector<float> &photons_mcdr()
	{
		if (not photons_mcdr_isLoaded) {
			if (photons_mcdr_branch != 0) {
				photons_mcdr_branch->GetEntry(index);
			} else { 
				printf("branch photons_mcdr_branch does not exist!\n");
				exit(1);
			}
			photons_mcdr_isLoaded = true;
		}
		return photons_mcdr_;
	}
	const vector<float> &els_bs2d()
	{
		if (not els_bs2d_isLoaded) {
			if (els_bs2d_branch != 0) {
				els_bs2d_branch->GetEntry(index);
			} else { 
				printf("branch els_bs2d_branch does not exist!\n");
				exit(1);
			}
			els_bs2d_isLoaded = true;
		}
		return els_bs2d_;
	}
	const vector<float> &els_bs2derr()
	{
		if (not els_bs2derr_isLoaded) {
			if (els_bs2derr_branch != 0) {
				els_bs2derr_branch->GetEntry(index);
			} else { 
				printf("branch els_bs2derr_branch does not exist!\n");
				exit(1);
			}
			els_bs2derr_isLoaded = true;
		}
		return els_bs2derr_;
	}
	const vector<float> &els_bs3d()
	{
		if (not els_bs3d_isLoaded) {
			if (els_bs3d_branch != 0) {
				els_bs3d_branch->GetEntry(index);
			} else { 
				printf("branch els_bs3d_branch does not exist!\n");
				exit(1);
			}
			els_bs3d_isLoaded = true;
		}
		return els_bs3d_;
	}
	const vector<float> &els_bs3derr()
	{
		if (not els_bs3derr_isLoaded) {
			if (els_bs3derr_branch != 0) {
				els_bs3derr_branch->GetEntry(index);
			} else { 
				printf("branch els_bs3derr_branch does not exist!\n");
				exit(1);
			}
			els_bs3derr_isLoaded = true;
		}
		return els_bs3derr_;
	}
	const vector<float> &els_chi2()
	{
		if (not els_chi2_isLoaded) {
			if (els_chi2_branch != 0) {
				els_chi2_branch->GetEntry(index);
			} else { 
				printf("branch els_chi2_branch does not exist!\n");
				exit(1);
			}
			els_chi2_isLoaded = true;
		}
		return els_chi2_;
	}
	const vector<float> &els_ckf_chi2()
	{
		if (not els_ckf_chi2_isLoaded) {
			if (els_ckf_chi2_branch != 0) {
				els_ckf_chi2_branch->GetEntry(index);
			} else { 
				printf("branch els_ckf_chi2_branch does not exist!\n");
				exit(1);
			}
			els_ckf_chi2_isLoaded = true;
		}
		return els_ckf_chi2_;
	}
	const vector<float> &els_ckf_ndof()
	{
		if (not els_ckf_ndof_isLoaded) {
			if (els_ckf_ndof_branch != 0) {
				els_ckf_ndof_branch->GetEntry(index);
			} else { 
				printf("branch els_ckf_ndof_branch does not exist!\n");
				exit(1);
			}
			els_ckf_ndof_isLoaded = true;
		}
		return els_ckf_ndof_;
	}
	const vector<float> &els_d0()
	{
		if (not els_d0_isLoaded) {
			if (els_d0_branch != 0) {
				els_d0_branch->GetEntry(index);
			} else { 
				printf("branch els_d0_branch does not exist!\n");
				exit(1);
			}
			els_d0_isLoaded = true;
		}
		return els_d0_;
	}
	const vector<float> &els_d0Err()
	{
		if (not els_d0Err_isLoaded) {
			if (els_d0Err_branch != 0) {
				els_d0Err_branch->GetEntry(index);
			} else { 
				printf("branch els_d0Err_branch does not exist!\n");
				exit(1);
			}
			els_d0Err_isLoaded = true;
		}
		return els_d0Err_;
	}
	const vector<float> &els_d0corr()
	{
		if (not els_d0corr_isLoaded) {
			if (els_d0corr_branch != 0) {
				els_d0corr_branch->GetEntry(index);
			} else { 
				printf("branch els_d0corr_branch does not exist!\n");
				exit(1);
			}
			els_d0corr_isLoaded = true;
		}
		return els_d0corr_;
	}
	const vector<float> &els_d0corrPhi()
	{
		if (not els_d0corrPhi_isLoaded) {
			if (els_d0corrPhi_branch != 0) {
				els_d0corrPhi_branch->GetEntry(index);
			} else { 
				printf("branch els_d0corrPhi_branch does not exist!\n");
				exit(1);
			}
			els_d0corrPhi_isLoaded = true;
		}
		return els_d0corrPhi_;
	}
	const vector<float> &els_d0phiCov()
	{
		if (not els_d0phiCov_isLoaded) {
			if (els_d0phiCov_branch != 0) {
				els_d0phiCov_branch->GetEntry(index);
			} else { 
				printf("branch els_d0phiCov_branch does not exist!\n");
				exit(1);
			}
			els_d0phiCov_isLoaded = true;
		}
		return els_d0phiCov_;
	}
	const vector<float> &els_dEtaIn()
	{
		if (not els_dEtaIn_isLoaded) {
			if (els_dEtaIn_branch != 0) {
				els_dEtaIn_branch->GetEntry(index);
			} else { 
				printf("branch els_dEtaIn_branch does not exist!\n");
				exit(1);
			}
			els_dEtaIn_isLoaded = true;
		}
		return els_dEtaIn_;
	}
	const vector<float> &els_dEtaOut()
	{
		if (not els_dEtaOut_isLoaded) {
			if (els_dEtaOut_branch != 0) {
				els_dEtaOut_branch->GetEntry(index);
			} else { 
				printf("branch els_dEtaOut_branch does not exist!\n");
				exit(1);
			}
			els_dEtaOut_isLoaded = true;
		}
		return els_dEtaOut_;
	}
	const vector<float> &els_dPhiIn()
	{
		if (not els_dPhiIn_isLoaded) {
			if (els_dPhiIn_branch != 0) {
				els_dPhiIn_branch->GetEntry(index);
			} else { 
				printf("branch els_dPhiIn_branch does not exist!\n");
				exit(1);
			}
			els_dPhiIn_isLoaded = true;
		}
		return els_dPhiIn_;
	}
	const vector<float> &els_dPhiInPhiOut()
	{
		if (not els_dPhiInPhiOut_isLoaded) {
			if (els_dPhiInPhiOut_branch != 0) {
				els_dPhiInPhiOut_branch->GetEntry(index);
			} else { 
				printf("branch els_dPhiInPhiOut_branch does not exist!\n");
				exit(1);
			}
			els_dPhiInPhiOut_isLoaded = true;
		}
		return els_dPhiInPhiOut_;
	}
	const vector<float> &els_dPhiOut()
	{
		if (not els_dPhiOut_isLoaded) {
			if (els_dPhiOut_branch != 0) {
				els_dPhiOut_branch->GetEntry(index);
			} else { 
				printf("branch els_dPhiOut_branch does not exist!\n");
				exit(1);
			}
			els_dPhiOut_isLoaded = true;
		}
		return els_dPhiOut_;
	}
	const vector<float> &els_deltaEtaEleClusterTrackAtCalo()
	{
		if (not els_deltaEtaEleClusterTrackAtCalo_isLoaded) {
			if (els_deltaEtaEleClusterTrackAtCalo_branch != 0) {
				els_deltaEtaEleClusterTrackAtCalo_branch->GetEntry(index);
			} else { 
				printf("branch els_deltaEtaEleClusterTrackAtCalo_branch does not exist!\n");
				exit(1);
			}
			els_deltaEtaEleClusterTrackAtCalo_isLoaded = true;
		}
		return els_deltaEtaEleClusterTrackAtCalo_;
	}
	const vector<float> &els_deltaPhiEleClusterTrackAtCalo()
	{
		if (not els_deltaPhiEleClusterTrackAtCalo_isLoaded) {
			if (els_deltaPhiEleClusterTrackAtCalo_branch != 0) {
				els_deltaPhiEleClusterTrackAtCalo_branch->GetEntry(index);
			} else { 
				printf("branch els_deltaPhiEleClusterTrackAtCalo_branch does not exist!\n");
				exit(1);
			}
			els_deltaPhiEleClusterTrackAtCalo_isLoaded = true;
		}
		return els_deltaPhiEleClusterTrackAtCalo_;
	}
	const vector<float> &els_dxyPV()
	{
		if (not els_dxyPV_isLoaded) {
			if (els_dxyPV_branch != 0) {
				els_dxyPV_branch->GetEntry(index);
			} else { 
				printf("branch els_dxyPV_branch does not exist!\n");
				exit(1);
			}
			els_dxyPV_isLoaded = true;
		}
		return els_dxyPV_;
	}
	const vector<float> &els_dzPV()
	{
		if (not els_dzPV_isLoaded) {
			if (els_dzPV_branch != 0) {
				els_dzPV_branch->GetEntry(index);
			} else { 
				printf("branch els_dzPV_branch does not exist!\n");
				exit(1);
			}
			els_dzPV_isLoaded = true;
		}
		return els_dzPV_;
	}
	const vector<float> &els_e1x5()
	{
		if (not els_e1x5_isLoaded) {
			if (els_e1x5_branch != 0) {
				els_e1x5_branch->GetEntry(index);
			} else { 
				printf("branch els_e1x5_branch does not exist!\n");
				exit(1);
			}
			els_e1x5_isLoaded = true;
		}
		return els_e1x5_;
	}
	const vector<float> &els_e1x5_full5x5()
	{
		if (not els_e1x5_full5x5_isLoaded) {
			if (els_e1x5_full5x5_branch != 0) {
				els_e1x5_full5x5_branch->GetEntry(index);
			} else { 
				printf("branch els_e1x5_full5x5_branch does not exist!\n");
				exit(1);
			}
			els_e1x5_full5x5_isLoaded = true;
		}
		return els_e1x5_full5x5_;
	}
	const vector<float> &els_e2x5Max()
	{
		if (not els_e2x5Max_isLoaded) {
			if (els_e2x5Max_branch != 0) {
				els_e2x5Max_branch->GetEntry(index);
			} else { 
				printf("branch els_e2x5Max_branch does not exist!\n");
				exit(1);
			}
			els_e2x5Max_isLoaded = true;
		}
		return els_e2x5Max_;
	}
	const vector<float> &els_e2x5Max_full5x5()
	{
		if (not els_e2x5Max_full5x5_isLoaded) {
			if (els_e2x5Max_full5x5_branch != 0) {
				els_e2x5Max_full5x5_branch->GetEntry(index);
			} else { 
				printf("branch els_e2x5Max_full5x5_branch does not exist!\n");
				exit(1);
			}
			els_e2x5Max_full5x5_isLoaded = true;
		}
		return els_e2x5Max_full5x5_;
	}
	const vector<float> &els_e5x5()
	{
		if (not els_e5x5_isLoaded) {
			if (els_e5x5_branch != 0) {
				els_e5x5_branch->GetEntry(index);
			} else { 
				printf("branch els_e5x5_branch does not exist!\n");
				exit(1);
			}
			els_e5x5_isLoaded = true;
		}
		return els_e5x5_;
	}
	const vector<float> &els_e5x5_full5x5()
	{
		if (not els_e5x5_full5x5_isLoaded) {
			if (els_e5x5_full5x5_branch != 0) {
				els_e5x5_full5x5_branch->GetEntry(index);
			} else { 
				printf("branch els_e5x5_full5x5_branch does not exist!\n");
				exit(1);
			}
			els_e5x5_full5x5_isLoaded = true;
		}
		return els_e5x5_full5x5_;
	}
	const vector<float> &els_eOverPIn()
	{
		if (not els_eOverPIn_isLoaded) {
			if (els_eOverPIn_branch != 0) {
				els_eOverPIn_branch->GetEntry(index);
			} else { 
				printf("branch els_eOverPIn_branch does not exist!\n");
				exit(1);
			}
			els_eOverPIn_isLoaded = true;
		}
		return els_eOverPIn_;
	}
	const vector<float> &els_eOverPOut()
	{
		if (not els_eOverPOut_isLoaded) {
			if (els_eOverPOut_branch != 0) {
				els_eOverPOut_branch->GetEntry(index);
			} else { 
				printf("branch els_eOverPOut_branch does not exist!\n");
				exit(1);
			}
			els_eOverPOut_isLoaded = true;
		}
		return els_eOverPOut_;
	}
	const vector<float> &els_eSC()
	{
		if (not els_eSC_isLoaded) {
			if (els_eSC_branch != 0) {
				els_eSC_branch->GetEntry(index);
			} else { 
				printf("branch els_eSC_branch does not exist!\n");
				exit(1);
			}
			els_eSC_isLoaded = true;
		}
		return els_eSC_;
	}
	const vector<float> &els_eSCPresh()
	{
		if (not els_eSCPresh_isLoaded) {
			if (els_eSCPresh_branch != 0) {
				els_eSCPresh_branch->GetEntry(index);
			} else { 
				printf("branch els_eSCPresh_branch does not exist!\n");
				exit(1);
			}
			els_eSCPresh_isLoaded = true;
		}
		return els_eSCPresh_;
	}
	const vector<float> &els_eSCRaw()
	{
		if (not els_eSCRaw_isLoaded) {
			if (els_eSCRaw_branch != 0) {
				els_eSCRaw_branch->GetEntry(index);
			} else { 
				printf("branch els_eSCRaw_branch does not exist!\n");
				exit(1);
			}
			els_eSCRaw_isLoaded = true;
		}
		return els_eSCRaw_;
	}
	const vector<float> &els_eSeed()
	{
		if (not els_eSeed_isLoaded) {
			if (els_eSeed_branch != 0) {
				els_eSeed_branch->GetEntry(index);
			} else { 
				printf("branch els_eSeed_branch does not exist!\n");
				exit(1);
			}
			els_eSeed_isLoaded = true;
		}
		return els_eSeed_;
	}
	const vector<float> &els_eSeedOverPIn()
	{
		if (not els_eSeedOverPIn_isLoaded) {
			if (els_eSeedOverPIn_branch != 0) {
				els_eSeedOverPIn_branch->GetEntry(index);
			} else { 
				printf("branch els_eSeedOverPIn_branch does not exist!\n");
				exit(1);
			}
			els_eSeedOverPIn_isLoaded = true;
		}
		return els_eSeedOverPIn_;
	}
	const vector<float> &els_eSeedOverPOut()
	{
		if (not els_eSeedOverPOut_isLoaded) {
			if (els_eSeedOverPOut_branch != 0) {
				els_eSeedOverPOut_branch->GetEntry(index);
			} else { 
				printf("branch els_eSeedOverPOut_branch does not exist!\n");
				exit(1);
			}
			els_eSeedOverPOut_isLoaded = true;
		}
		return els_eSeedOverPOut_;
	}
	const vector<float> &els_ecalEnergy()
	{
		if (not els_ecalEnergy_isLoaded) {
			if (els_ecalEnergy_branch != 0) {
				els_ecalEnergy_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalEnergy_branch does not exist!\n");
				exit(1);
			}
			els_ecalEnergy_isLoaded = true;
		}
		return els_ecalEnergy_;
	}
	const vector<float> &els_ecalEnergyError()
	{
		if (not els_ecalEnergyError_isLoaded) {
			if (els_ecalEnergyError_branch != 0) {
				els_ecalEnergyError_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalEnergyError_branch does not exist!\n");
				exit(1);
			}
			els_ecalEnergyError_isLoaded = true;
		}
		return els_ecalEnergyError_;
	}
	const vector<float> &els_ecalIso()
	{
		if (not els_ecalIso_isLoaded) {
			if (els_ecalIso_branch != 0) {
				els_ecalIso_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalIso_branch does not exist!\n");
				exit(1);
			}
			els_ecalIso_isLoaded = true;
		}
		return els_ecalIso_;
	}
	const vector<float> &els_ecalIso04()
	{
		if (not els_ecalIso04_isLoaded) {
			if (els_ecalIso04_branch != 0) {
				els_ecalIso04_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalIso04_branch does not exist!\n");
				exit(1);
			}
			els_ecalIso04_isLoaded = true;
		}
		return els_ecalIso04_;
	}
	const vector<float> &els_ecalPFClusterIso()
	{
		if (not els_ecalPFClusterIso_isLoaded) {
			if (els_ecalPFClusterIso_branch != 0) {
				els_ecalPFClusterIso_branch->GetEntry(index);
			} else { 
				printf("branch els_ecalPFClusterIso_branch does not exist!\n");
				exit(1);
			}
			els_ecalPFClusterIso_isLoaded = true;
		}
		return els_ecalPFClusterIso_;
	}
	const vector<float> &els_etaErr()
	{
		if (not els_etaErr_isLoaded) {
			if (els_etaErr_branch != 0) {
				els_etaErr_branch->GetEntry(index);
			} else { 
				printf("branch els_etaErr_branch does not exist!\n");
				exit(1);
			}
			els_etaErr_isLoaded = true;
		}
		return els_etaErr_;
	}
	const vector<float> &els_etaSC()
	{
		if (not els_etaSC_isLoaded) {
			if (els_etaSC_branch != 0) {
				els_etaSC_branch->GetEntry(index);
			} else { 
				printf("branch els_etaSC_branch does not exist!\n");
				exit(1);
			}
			els_etaSC_isLoaded = true;
		}
		return els_etaSC_;
	}
	const vector<float> &els_etaSCwidth()
	{
		if (not els_etaSCwidth_isLoaded) {
			if (els_etaSCwidth_branch != 0) {
				els_etaSCwidth_branch->GetEntry(index);
			} else { 
				printf("branch els_etaSCwidth_branch does not exist!\n");
				exit(1);
			}
			els_etaSCwidth_isLoaded = true;
		}
		return els_etaSCwidth_;
	}
	const vector<float> &els_fbrem()
	{
		if (not els_fbrem_isLoaded) {
			if (els_fbrem_branch != 0) {
				els_fbrem_branch->GetEntry(index);
			} else { 
				printf("branch els_fbrem_branch does not exist!\n");
				exit(1);
			}
			els_fbrem_isLoaded = true;
		}
		return els_fbrem_;
	}
	const vector<float> &els_hOverE()
	{
		if (not els_hOverE_isLoaded) {
			if (els_hOverE_branch != 0) {
				els_hOverE_branch->GetEntry(index);
			} else { 
				printf("branch els_hOverE_branch does not exist!\n");
				exit(1);
			}
			els_hOverE_isLoaded = true;
		}
		return els_hOverE_;
	}
	const vector<float> &els_hOverEBC()
	{
		if (not els_hOverEBC_isLoaded) {
			if (els_hOverEBC_branch != 0) {
				els_hOverEBC_branch->GetEntry(index);
			} else { 
				printf("branch els_hOverEBC_branch does not exist!\n");
				exit(1);
			}
			els_hOverEBC_isLoaded = true;
		}
		return els_hOverEBC_;
	}
	const vector<float> &els_hcalDepth1OverEcal()
	{
		if (not els_hcalDepth1OverEcal_isLoaded) {
			if (els_hcalDepth1OverEcal_branch != 0) {
				els_hcalDepth1OverEcal_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth1OverEcal_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth1OverEcal_isLoaded = true;
		}
		return els_hcalDepth1OverEcal_;
	}
	const vector<float> &els_hcalDepth1TowerSumEt()
	{
		if (not els_hcalDepth1TowerSumEt_isLoaded) {
			if (els_hcalDepth1TowerSumEt_branch != 0) {
				els_hcalDepth1TowerSumEt_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth1TowerSumEt_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth1TowerSumEt_isLoaded = true;
		}
		return els_hcalDepth1TowerSumEt_;
	}
	const vector<float> &els_hcalDepth1TowerSumEt04()
	{
		if (not els_hcalDepth1TowerSumEt04_isLoaded) {
			if (els_hcalDepth1TowerSumEt04_branch != 0) {
				els_hcalDepth1TowerSumEt04_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth1TowerSumEt04_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth1TowerSumEt04_isLoaded = true;
		}
		return els_hcalDepth1TowerSumEt04_;
	}
	const vector<float> &els_hcalDepth2OverEcal()
	{
		if (not els_hcalDepth2OverEcal_isLoaded) {
			if (els_hcalDepth2OverEcal_branch != 0) {
				els_hcalDepth2OverEcal_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth2OverEcal_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth2OverEcal_isLoaded = true;
		}
		return els_hcalDepth2OverEcal_;
	}
	const vector<float> &els_hcalDepth2TowerSumEt()
	{
		if (not els_hcalDepth2TowerSumEt_isLoaded) {
			if (els_hcalDepth2TowerSumEt_branch != 0) {
				els_hcalDepth2TowerSumEt_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth2TowerSumEt_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth2TowerSumEt_isLoaded = true;
		}
		return els_hcalDepth2TowerSumEt_;
	}
	const vector<float> &els_hcalDepth2TowerSumEt04()
	{
		if (not els_hcalDepth2TowerSumEt04_isLoaded) {
			if (els_hcalDepth2TowerSumEt04_branch != 0) {
				els_hcalDepth2TowerSumEt04_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalDepth2TowerSumEt04_branch does not exist!\n");
				exit(1);
			}
			els_hcalDepth2TowerSumEt04_isLoaded = true;
		}
		return els_hcalDepth2TowerSumEt04_;
	}
	const vector<float> &els_hcalIso()
	{
		if (not els_hcalIso_isLoaded) {
			if (els_hcalIso_branch != 0) {
				els_hcalIso_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalIso_branch does not exist!\n");
				exit(1);
			}
			els_hcalIso_isLoaded = true;
		}
		return els_hcalIso_;
	}
	const vector<float> &els_hcalIso04()
	{
		if (not els_hcalIso04_isLoaded) {
			if (els_hcalIso04_branch != 0) {
				els_hcalIso04_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalIso04_branch does not exist!\n");
				exit(1);
			}
			els_hcalIso04_isLoaded = true;
		}
		return els_hcalIso04_;
	}
	const vector<float> &els_hcalPFClusterIso()
	{
		if (not els_hcalPFClusterIso_isLoaded) {
			if (els_hcalPFClusterIso_branch != 0) {
				els_hcalPFClusterIso_branch->GetEntry(index);
			} else { 
				printf("branch els_hcalPFClusterIso_branch does not exist!\n");
				exit(1);
			}
			els_hcalPFClusterIso_isLoaded = true;
		}
		return els_hcalPFClusterIso_;
	}
	const vector<float> &els_ip2d()
	{
		if (not els_ip2d_isLoaded) {
			if (els_ip2d_branch != 0) {
				els_ip2d_branch->GetEntry(index);
			} else { 
				printf("branch els_ip2d_branch does not exist!\n");
				exit(1);
			}
			els_ip2d_isLoaded = true;
		}
		return els_ip2d_;
	}
	const vector<float> &els_ip2derr()
	{
		if (not els_ip2derr_isLoaded) {
			if (els_ip2derr_branch != 0) {
				els_ip2derr_branch->GetEntry(index);
			} else { 
				printf("branch els_ip2derr_branch does not exist!\n");
				exit(1);
			}
			els_ip2derr_isLoaded = true;
		}
		return els_ip2derr_;
	}
	const vector<float> &els_ip3d()
	{
		if (not els_ip3d_isLoaded) {
			if (els_ip3d_branch != 0) {
				els_ip3d_branch->GetEntry(index);
			} else { 
				printf("branch els_ip3d_branch does not exist!\n");
				exit(1);
			}
			els_ip3d_isLoaded = true;
		}
		return els_ip3d_;
	}
	const vector<float> &els_ip3derr()
	{
		if (not els_ip3derr_isLoaded) {
			if (els_ip3derr_branch != 0) {
				els_ip3derr_branch->GetEntry(index);
			} else { 
				printf("branch els_ip3derr_branch does not exist!\n");
				exit(1);
			}
			els_ip3derr_isLoaded = true;
		}
		return els_ip3derr_;
	}
	const vector<float> &els_mass()
	{
		if (not els_mass_isLoaded) {
			if (els_mass_branch != 0) {
				els_mass_branch->GetEntry(index);
			} else { 
				printf("branch els_mass_branch does not exist!\n");
				exit(1);
			}
			els_mass_isLoaded = true;
		}
		return els_mass_;
	}
	const vector<float> &els_mc_patMatch_dr()
	{
		if (not els_mc_patMatch_dr_isLoaded) {
			if (els_mc_patMatch_dr_branch != 0) {
				els_mc_patMatch_dr_branch->GetEntry(index);
			} else { 
				printf("branch els_mc_patMatch_dr_branch does not exist!\n");
				exit(1);
			}
			els_mc_patMatch_dr_isLoaded = true;
		}
		return els_mc_patMatch_dr_;
	}
	const vector<float> &els_miniIso_ch()
	{
		if (not els_miniIso_ch_isLoaded) {
			if (els_miniIso_ch_branch != 0) {
				els_miniIso_ch_branch->GetEntry(index);
			} else { 
				printf("branch els_miniIso_ch_branch does not exist!\n");
				exit(1);
			}
			els_miniIso_ch_isLoaded = true;
		}
		return els_miniIso_ch_;
	}
	const vector<float> &els_miniIso_db()
	{
		if (not els_miniIso_db_isLoaded) {
			if (els_miniIso_db_branch != 0) {
				els_miniIso_db_branch->GetEntry(index);
			} else { 
				printf("branch els_miniIso_db_branch does not exist!\n");
				exit(1);
			}
			els_miniIso_db_isLoaded = true;
		}
		return els_miniIso_db_;
	}
	const vector<float> &els_miniIso_em()
	{
		if (not els_miniIso_em_isLoaded) {
			if (els_miniIso_em_branch != 0) {
				els_miniIso_em_branch->GetEntry(index);
			} else { 
				printf("branch els_miniIso_em_branch does not exist!\n");
				exit(1);
			}
			els_miniIso_em_isLoaded = true;
		}
		return els_miniIso_em_;
	}
	const vector<float> &els_miniIso_nh()
	{
		if (not els_miniIso_nh_isLoaded) {
			if (els_miniIso_nh_branch != 0) {
				els_miniIso_nh_branch->GetEntry(index);
			} else { 
				printf("branch els_miniIso_nh_branch does not exist!\n");
				exit(1);
			}
			els_miniIso_nh_isLoaded = true;
		}
		return els_miniIso_nh_;
	}
	const vector<float> &els_miniIso_uncor()
	{
		if (not els_miniIso_uncor_isLoaded) {
			if (els_miniIso_uncor_branch != 0) {
				els_miniIso_uncor_branch->GetEntry(index);
			} else { 
				printf("branch els_miniIso_uncor_branch does not exist!\n");
				exit(1);
			}
			els_miniIso_uncor_isLoaded = true;
		}
		return els_miniIso_uncor_;
	}
	const vector<float> &els_mva()
	{
		if (not els_mva_isLoaded) {
			if (els_mva_branch != 0) {
				els_mva_branch->GetEntry(index);
			} else { 
				printf("branch els_mva_branch does not exist!\n");
				exit(1);
			}
			els_mva_isLoaded = true;
		}
		return els_mva_;
	}
	const vector<float> &els_ndof()
	{
		if (not els_ndof_isLoaded) {
			if (els_ndof_branch != 0) {
				els_ndof_branch->GetEntry(index);
			} else { 
				printf("branch els_ndof_branch does not exist!\n");
				exit(1);
			}
			els_ndof_isLoaded = true;
		}
		return els_ndof_;
	}
	const vector<float> &els_pfChargedHadronIso()
	{
		if (not els_pfChargedHadronIso_isLoaded) {
			if (els_pfChargedHadronIso_branch != 0) {
				els_pfChargedHadronIso_branch->GetEntry(index);
			} else { 
				printf("branch els_pfChargedHadronIso_branch does not exist!\n");
				exit(1);
			}
			els_pfChargedHadronIso_isLoaded = true;
		}
		return els_pfChargedHadronIso_;
	}
	const vector<float> &els_pfNeutralHadronIso()
	{
		if (not els_pfNeutralHadronIso_isLoaded) {
			if (els_pfNeutralHadronIso_branch != 0) {
				els_pfNeutralHadronIso_branch->GetEntry(index);
			} else { 
				printf("branch els_pfNeutralHadronIso_branch does not exist!\n");
				exit(1);
			}
			els_pfNeutralHadronIso_isLoaded = true;
		}
		return els_pfNeutralHadronIso_;
	}
	const vector<float> &els_pfPUIso()
	{
		if (not els_pfPUIso_isLoaded) {
			if (els_pfPUIso_branch != 0) {
				els_pfPUIso_branch->GetEntry(index);
			} else { 
				printf("branch els_pfPUIso_branch does not exist!\n");
				exit(1);
			}
			els_pfPUIso_isLoaded = true;
		}
		return els_pfPUIso_;
	}
	const vector<float> &els_pfPhotonIso()
	{
		if (not els_pfPhotonIso_isLoaded) {
			if (els_pfPhotonIso_branch != 0) {
				els_pfPhotonIso_branch->GetEntry(index);
			} else { 
				printf("branch els_pfPhotonIso_branch does not exist!\n");
				exit(1);
			}
			els_pfPhotonIso_isLoaded = true;
		}
		return els_pfPhotonIso_;
	}
	const vector<float> &els_phiErr()
	{
		if (not els_phiErr_isLoaded) {
			if (els_phiErr_branch != 0) {
				els_phiErr_branch->GetEntry(index);
			} else { 
				printf("branch els_phiErr_branch does not exist!\n");
				exit(1);
			}
			els_phiErr_isLoaded = true;
		}
		return els_phiErr_;
	}
	const vector<float> &els_phiSC()
	{
		if (not els_phiSC_isLoaded) {
			if (els_phiSC_branch != 0) {
				els_phiSC_branch->GetEntry(index);
			} else { 
				printf("branch els_phiSC_branch does not exist!\n");
				exit(1);
			}
			els_phiSC_isLoaded = true;
		}
		return els_phiSC_;
	}
	const vector<float> &els_phiSCwidth()
	{
		if (not els_phiSCwidth_isLoaded) {
			if (els_phiSCwidth_branch != 0) {
				els_phiSCwidth_branch->GetEntry(index);
			} else { 
				printf("branch els_phiSCwidth_branch does not exist!\n");
				exit(1);
			}
			els_phiSCwidth_isLoaded = true;
		}
		return els_phiSCwidth_;
	}
	const vector<float> &els_ptErr()
	{
		if (not els_ptErr_isLoaded) {
			if (els_ptErr_branch != 0) {
				els_ptErr_branch->GetEntry(index);
			} else { 
				printf("branch els_ptErr_branch does not exist!\n");
				exit(1);
			}
			els_ptErr_isLoaded = true;
		}
		return els_ptErr_;
	}
	const vector<float> &els_ptErrGsf()
	{
		if (not els_ptErrGsf_isLoaded) {
			if (els_ptErrGsf_branch != 0) {
				els_ptErrGsf_branch->GetEntry(index);
			} else { 
				printf("branch els_ptErrGsf_branch does not exist!\n");
				exit(1);
			}
			els_ptErrGsf_isLoaded = true;
		}
		return els_ptErrGsf_;
	}
	const vector<float> &els_r9()
	{
		if (not els_r9_isLoaded) {
			if (els_r9_branch != 0) {
				els_r9_branch->GetEntry(index);
			} else { 
				printf("branch els_r9_branch does not exist!\n");
				exit(1);
			}
			els_r9_isLoaded = true;
		}
		return els_r9_;
	}
	const vector<float> &els_r9_full5x5()
	{
		if (not els_r9_full5x5_isLoaded) {
			if (els_r9_full5x5_branch != 0) {
				els_r9_full5x5_branch->GetEntry(index);
			} else { 
				printf("branch els_r9_full5x5_branch does not exist!\n");
				exit(1);
			}
			els_r9_full5x5_isLoaded = true;
		}
		return els_r9_full5x5_;
	}
	const vector<float> &els_sigmaEtaEta()
	{
		if (not els_sigmaEtaEta_isLoaded) {
			if (els_sigmaEtaEta_branch != 0) {
				els_sigmaEtaEta_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaEtaEta_branch does not exist!\n");
				exit(1);
			}
			els_sigmaEtaEta_isLoaded = true;
		}
		return els_sigmaEtaEta_;
	}
	const vector<float> &els_sigmaEtaEta_full5x5()
	{
		if (not els_sigmaEtaEta_full5x5_isLoaded) {
			if (els_sigmaEtaEta_full5x5_branch != 0) {
				els_sigmaEtaEta_full5x5_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaEtaEta_full5x5_branch does not exist!\n");
				exit(1);
			}
			els_sigmaEtaEta_full5x5_isLoaded = true;
		}
		return els_sigmaEtaEta_full5x5_;
	}
	const vector<float> &els_sigmaIEtaIEta()
	{
		if (not els_sigmaIEtaIEta_isLoaded) {
			if (els_sigmaIEtaIEta_branch != 0) {
				els_sigmaIEtaIEta_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaIEtaIEta_branch does not exist!\n");
				exit(1);
			}
			els_sigmaIEtaIEta_isLoaded = true;
		}
		return els_sigmaIEtaIEta_;
	}
	const vector<float> &els_sigmaIEtaIEta_full5x5()
	{
		if (not els_sigmaIEtaIEta_full5x5_isLoaded) {
			if (els_sigmaIEtaIEta_full5x5_branch != 0) {
				els_sigmaIEtaIEta_full5x5_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaIEtaIEta_full5x5_branch does not exist!\n");
				exit(1);
			}
			els_sigmaIEtaIEta_full5x5_isLoaded = true;
		}
		return els_sigmaIEtaIEta_full5x5_;
	}
	const vector<float> &els_sigmaIPhiIPhi()
	{
		if (not els_sigmaIPhiIPhi_isLoaded) {
			if (els_sigmaIPhiIPhi_branch != 0) {
				els_sigmaIPhiIPhi_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaIPhiIPhi_branch does not exist!\n");
				exit(1);
			}
			els_sigmaIPhiIPhi_isLoaded = true;
		}
		return els_sigmaIPhiIPhi_;
	}
	const vector<float> &els_sigmaIPhiIPhi_full5x5()
	{
		if (not els_sigmaIPhiIPhi_full5x5_isLoaded) {
			if (els_sigmaIPhiIPhi_full5x5_branch != 0) {
				els_sigmaIPhiIPhi_full5x5_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaIPhiIPhi_full5x5_branch does not exist!\n");
				exit(1);
			}
			els_sigmaIPhiIPhi_full5x5_isLoaded = true;
		}
		return els_sigmaIPhiIPhi_full5x5_;
	}
	const vector<float> &els_sigmaIphiIphi()
	{
		if (not els_sigmaIphiIphi_isLoaded) {
			if (els_sigmaIphiIphi_branch != 0) {
				els_sigmaIphiIphi_branch->GetEntry(index);
			} else { 
				printf("branch els_sigmaIphiIphi_branch does not exist!\n");
				exit(1);
			}
			els_sigmaIphiIphi_isLoaded = true;
		}
		return els_sigmaIphiIphi_;
	}
	const vector<float> &els_tkIso()
	{
		if (not els_tkIso_isLoaded) {
			if (els_tkIso_branch != 0) {
				els_tkIso_branch->GetEntry(index);
			} else { 
				printf("branch els_tkIso_branch does not exist!\n");
				exit(1);
			}
			els_tkIso_isLoaded = true;
		}
		return els_tkIso_;
	}
	const vector<float> &els_tkIso04()
	{
		if (not els_tkIso04_isLoaded) {
			if (els_tkIso04_branch != 0) {
				els_tkIso04_branch->GetEntry(index);
			} else { 
				printf("branch els_tkIso04_branch does not exist!\n");
				exit(1);
			}
			els_tkIso04_isLoaded = true;
		}
		return els_tkIso04_;
	}
	const vector<float> &els_trackMomentumError()
	{
		if (not els_trackMomentumError_isLoaded) {
			if (els_trackMomentumError_branch != 0) {
				els_trackMomentumError_branch->GetEntry(index);
			} else { 
				printf("branch els_trackMomentumError_branch does not exist!\n");
				exit(1);
			}
			els_trackMomentumError_isLoaded = true;
		}
		return els_trackMomentumError_;
	}
	const vector<float> &els_trkdr()
	{
		if (not els_trkdr_isLoaded) {
			if (els_trkdr_branch != 0) {
				els_trkdr_branch->GetEntry(index);
			} else { 
				printf("branch els_trkdr_branch does not exist!\n");
				exit(1);
			}
			els_trkdr_isLoaded = true;
		}
		return els_trkdr_;
	}
	const vector<float> &els_trkshFrac()
	{
		if (not els_trkshFrac_isLoaded) {
			if (els_trkshFrac_branch != 0) {
				els_trkshFrac_branch->GetEntry(index);
			} else { 
				printf("branch els_trkshFrac_branch does not exist!\n");
				exit(1);
			}
			els_trkshFrac_isLoaded = true;
		}
		return els_trkshFrac_;
	}
	const vector<float> &els_z0()
	{
		if (not els_z0_isLoaded) {
			if (els_z0_branch != 0) {
				els_z0_branch->GetEntry(index);
			} else { 
				printf("branch els_z0_branch does not exist!\n");
				exit(1);
			}
			els_z0_isLoaded = true;
		}
		return els_z0_;
	}
	const vector<float> &els_z0Err()
	{
		if (not els_z0Err_isLoaded) {
			if (els_z0Err_branch != 0) {
				els_z0Err_branch->GetEntry(index);
			} else { 
				printf("branch els_z0Err_branch does not exist!\n");
				exit(1);
			}
			els_z0Err_isLoaded = true;
		}
		return els_z0Err_;
	}
	const vector<float> &els_z0corr()
	{
		if (not els_z0corr_isLoaded) {
			if (els_z0corr_branch != 0) {
				els_z0corr_branch->GetEntry(index);
			} else { 
				printf("branch els_z0corr_branch does not exist!\n");
				exit(1);
			}
			els_z0corr_isLoaded = true;
		}
		return els_z0corr_;
	}
	const vector<float> &genps_charge()
	{
		if (not genps_charge_isLoaded) {
			if (genps_charge_branch != 0) {
				genps_charge_branch->GetEntry(index);
			} else { 
				printf("branch genps_charge_branch does not exist!\n");
				exit(1);
			}
			genps_charge_isLoaded = true;
		}
		return genps_charge_;
	}
	const vector<float> &genps_iso()
	{
		if (not genps_iso_isLoaded) {
			if (genps_iso_branch != 0) {
				genps_iso_branch->GetEntry(index);
			} else { 
				printf("branch genps_iso_branch does not exist!\n");
				exit(1);
			}
			genps_iso_isLoaded = true;
		}
		return genps_iso_;
	}
	const vector<float> &genps_mass()
	{
		if (not genps_mass_isLoaded) {
			if (genps_mass_branch != 0) {
				genps_mass_branch->GetEntry(index);
			} else { 
				printf("branch genps_mass_branch does not exist!\n");
				exit(1);
			}
			genps_mass_isLoaded = true;
		}
		return genps_mass_;
	}
	const vector<float> &genweights()
	{
		if (not genweights_isLoaded) {
			if (genweights_branch != 0) {
				genweights_branch->GetEntry(index);
			} else { 
				printf("branch genweights_branch does not exist!\n");
				exit(1);
			}
			genweights_isLoaded = true;
		}
		return genweights_;
	}
	const vector<float> &isotracks_dz()
	{
		if (not isotracks_dz_isLoaded) {
			if (isotracks_dz_branch != 0) {
				isotracks_dz_branch->GetEntry(index);
			} else { 
				printf("branch isotracks_dz_branch does not exist!\n");
				exit(1);
			}
			isotracks_dz_isLoaded = true;
		}
		return isotracks_dz_;
	}
	const vector<float> &isotracks_mass()
	{
		if (not isotracks_mass_isLoaded) {
			if (isotracks_mass_branch != 0) {
				isotracks_mass_branch->GetEntry(index);
			} else { 
				printf("branch isotracks_mass_branch does not exist!\n");
				exit(1);
			}
			isotracks_mass_isLoaded = true;
		}
		return isotracks_mass_;
	}
	const vector<float> &isotracks_relIso()
	{
		if (not isotracks_relIso_isLoaded) {
			if (isotracks_relIso_branch != 0) {
				isotracks_relIso_branch->GetEntry(index);
			} else { 
				printf("branch isotracks_relIso_branch does not exist!\n");
				exit(1);
			}
			isotracks_relIso_isLoaded = true;
		}
		return isotracks_relIso_;
	}
	const vector<float> &mus_bs2d()
	{
		if (not mus_bs2d_isLoaded) {
			if (mus_bs2d_branch != 0) {
				mus_bs2d_branch->GetEntry(index);
			} else { 
				printf("branch mus_bs2d_branch does not exist!\n");
				exit(1);
			}
			mus_bs2d_isLoaded = true;
		}
		return mus_bs2d_;
	}
	const vector<float> &mus_bs2derr()
	{
		if (not mus_bs2derr_isLoaded) {
			if (mus_bs2derr_branch != 0) {
				mus_bs2derr_branch->GetEntry(index);
			} else { 
				printf("branch mus_bs2derr_branch does not exist!\n");
				exit(1);
			}
			mus_bs2derr_isLoaded = true;
		}
		return mus_bs2derr_;
	}
	const vector<float> &mus_bs3d()
	{
		if (not mus_bs3d_isLoaded) {
			if (mus_bs3d_branch != 0) {
				mus_bs3d_branch->GetEntry(index);
			} else { 
				printf("branch mus_bs3d_branch does not exist!\n");
				exit(1);
			}
			mus_bs3d_isLoaded = true;
		}
		return mus_bs3d_;
	}
	const vector<float> &mus_bs3derr()
	{
		if (not mus_bs3derr_isLoaded) {
			if (mus_bs3derr_branch != 0) {
				mus_bs3derr_branch->GetEntry(index);
			} else { 
				printf("branch mus_bs3derr_branch does not exist!\n");
				exit(1);
			}
			mus_bs3derr_isLoaded = true;
		}
		return mus_bs3derr_;
	}
	const vector<float> &mus_caloCompatibility()
	{
		if (not mus_caloCompatibility_isLoaded) {
			if (mus_caloCompatibility_branch != 0) {
				mus_caloCompatibility_branch->GetEntry(index);
			} else { 
				printf("branch mus_caloCompatibility_branch does not exist!\n");
				exit(1);
			}
			mus_caloCompatibility_isLoaded = true;
		}
		return mus_caloCompatibility_;
	}
	const vector<float> &mus_chi2()
	{
		if (not mus_chi2_isLoaded) {
			if (mus_chi2_branch != 0) {
				mus_chi2_branch->GetEntry(index);
			} else { 
				printf("branch mus_chi2_branch does not exist!\n");
				exit(1);
			}
			mus_chi2_isLoaded = true;
		}
		return mus_chi2_;
	}
	const vector<float> &mus_chi2LocalMomentum()
	{
		if (not mus_chi2LocalMomentum_isLoaded) {
			if (mus_chi2LocalMomentum_branch != 0) {
				mus_chi2LocalMomentum_branch->GetEntry(index);
			} else { 
				printf("branch mus_chi2LocalMomentum_branch does not exist!\n");
				exit(1);
			}
			mus_chi2LocalMomentum_isLoaded = true;
		}
		return mus_chi2LocalMomentum_;
	}
	const vector<float> &mus_chi2LocalPosition()
	{
		if (not mus_chi2LocalPosition_isLoaded) {
			if (mus_chi2LocalPosition_branch != 0) {
				mus_chi2LocalPosition_branch->GetEntry(index);
			} else { 
				printf("branch mus_chi2LocalPosition_branch does not exist!\n");
				exit(1);
			}
			mus_chi2LocalPosition_isLoaded = true;
		}
		return mus_chi2LocalPosition_;
	}
	const vector<float> &mus_d0()
	{
		if (not mus_d0_isLoaded) {
			if (mus_d0_branch != 0) {
				mus_d0_branch->GetEntry(index);
			} else { 
				printf("branch mus_d0_branch does not exist!\n");
				exit(1);
			}
			mus_d0_isLoaded = true;
		}
		return mus_d0_;
	}
	const vector<float> &mus_d0Err()
	{
		if (not mus_d0Err_isLoaded) {
			if (mus_d0Err_branch != 0) {
				mus_d0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_d0Err_branch does not exist!\n");
				exit(1);
			}
			mus_d0Err_isLoaded = true;
		}
		return mus_d0Err_;
	}
	const vector<float> &mus_d0corr()
	{
		if (not mus_d0corr_isLoaded) {
			if (mus_d0corr_branch != 0) {
				mus_d0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_d0corr_branch does not exist!\n");
				exit(1);
			}
			mus_d0corr_isLoaded = true;
		}
		return mus_d0corr_;
	}
	const vector<float> &mus_d0corrPhi()
	{
		if (not mus_d0corrPhi_isLoaded) {
			if (mus_d0corrPhi_branch != 0) {
				mus_d0corrPhi_branch->GetEntry(index);
			} else { 
				printf("branch mus_d0corrPhi_branch does not exist!\n");
				exit(1);
			}
			mus_d0corrPhi_isLoaded = true;
		}
		return mus_d0corrPhi_;
	}
	const vector<float> &mus_d0phiCov()
	{
		if (not mus_d0phiCov_isLoaded) {
			if (mus_d0phiCov_branch != 0) {
				mus_d0phiCov_branch->GetEntry(index);
			} else { 
				printf("branch mus_d0phiCov_branch does not exist!\n");
				exit(1);
			}
			mus_d0phiCov_isLoaded = true;
		}
		return mus_d0phiCov_;
	}
	const vector<float> &mus_dxyPV()
	{
		if (not mus_dxyPV_isLoaded) {
			if (mus_dxyPV_branch != 0) {
				mus_dxyPV_branch->GetEntry(index);
			} else { 
				printf("branch mus_dxyPV_branch does not exist!\n");
				exit(1);
			}
			mus_dxyPV_isLoaded = true;
		}
		return mus_dxyPV_;
	}
	const vector<float> &mus_dzPV()
	{
		if (not mus_dzPV_isLoaded) {
			if (mus_dzPV_branch != 0) {
				mus_dzPV_branch->GetEntry(index);
			} else { 
				printf("branch mus_dzPV_branch does not exist!\n");
				exit(1);
			}
			mus_dzPV_isLoaded = true;
		}
		return mus_dzPV_;
	}
	const vector<float> &mus_ecal_time()
	{
		if (not mus_ecal_time_isLoaded) {
			if (mus_ecal_time_branch != 0) {
				mus_ecal_time_branch->GetEntry(index);
			} else { 
				printf("branch mus_ecal_time_branch does not exist!\n");
				exit(1);
			}
			mus_ecal_time_isLoaded = true;
		}
		return mus_ecal_time_;
	}
	const vector<float> &mus_e_em()
	{
		if (not mus_e_em_isLoaded) {
			if (mus_e_em_branch != 0) {
				mus_e_em_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_em_branch does not exist!\n");
				exit(1);
			}
			mus_e_em_isLoaded = true;
		}
		return mus_e_em_;
	}
	const vector<float> &mus_e_emS9()
	{
		if (not mus_e_emS9_isLoaded) {
			if (mus_e_emS9_branch != 0) {
				mus_e_emS9_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_emS9_branch does not exist!\n");
				exit(1);
			}
			mus_e_emS9_isLoaded = true;
		}
		return mus_e_emS9_;
	}
	const vector<float> &mus_e_had()
	{
		if (not mus_e_had_isLoaded) {
			if (mus_e_had_branch != 0) {
				mus_e_had_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_had_branch does not exist!\n");
				exit(1);
			}
			mus_e_had_isLoaded = true;
		}
		return mus_e_had_;
	}
	const vector<float> &mus_e_hadS9()
	{
		if (not mus_e_hadS9_isLoaded) {
			if (mus_e_hadS9_branch != 0) {
				mus_e_hadS9_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_hadS9_branch does not exist!\n");
				exit(1);
			}
			mus_e_hadS9_isLoaded = true;
		}
		return mus_e_hadS9_;
	}
	const vector<float> &mus_e_ho()
	{
		if (not mus_e_ho_isLoaded) {
			if (mus_e_ho_branch != 0) {
				mus_e_ho_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_ho_branch does not exist!\n");
				exit(1);
			}
			mus_e_ho_isLoaded = true;
		}
		return mus_e_ho_;
	}
	const vector<float> &mus_e_hoS9()
	{
		if (not mus_e_hoS9_isLoaded) {
			if (mus_e_hoS9_branch != 0) {
				mus_e_hoS9_branch->GetEntry(index);
			} else { 
				printf("branch mus_e_hoS9_branch does not exist!\n");
				exit(1);
			}
			mus_e_hoS9_isLoaded = true;
		}
		return mus_e_hoS9_;
	}
	const vector<float> &mus_emMax()
	{
		if (not mus_emMax_isLoaded) {
			if (mus_emMax_branch != 0) {
				mus_emMax_branch->GetEntry(index);
			} else { 
				printf("branch mus_emMax_branch does not exist!\n");
				exit(1);
			}
			mus_emMax_isLoaded = true;
		}
		return mus_emMax_;
	}
	const vector<float> &mus_emS25()
	{
		if (not mus_emS25_isLoaded) {
			if (mus_emS25_branch != 0) {
				mus_emS25_branch->GetEntry(index);
			} else { 
				printf("branch mus_emS25_branch does not exist!\n");
				exit(1);
			}
			mus_emS25_isLoaded = true;
		}
		return mus_emS25_;
	}
	const vector<float> &mus_etaErr()
	{
		if (not mus_etaErr_isLoaded) {
			if (mus_etaErr_branch != 0) {
				mus_etaErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_etaErr_branch does not exist!\n");
				exit(1);
			}
			mus_etaErr_isLoaded = true;
		}
		return mus_etaErr_;
	}
	const vector<float> &mus_gfit_chi2()
	{
		if (not mus_gfit_chi2_isLoaded) {
			if (mus_gfit_chi2_branch != 0) {
				mus_gfit_chi2_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_chi2_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_chi2_isLoaded = true;
		}
		return mus_gfit_chi2_;
	}
	const vector<float> &mus_gfit_d0()
	{
		if (not mus_gfit_d0_isLoaded) {
			if (mus_gfit_d0_branch != 0) {
				mus_gfit_d0_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_d0_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0_isLoaded = true;
		}
		return mus_gfit_d0_;
	}
	const vector<float> &mus_gfit_d0Err()
	{
		if (not mus_gfit_d0Err_isLoaded) {
			if (mus_gfit_d0Err_branch != 0) {
				mus_gfit_d0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_d0Err_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0Err_isLoaded = true;
		}
		return mus_gfit_d0Err_;
	}
	const vector<float> &mus_gfit_d0corr()
	{
		if (not mus_gfit_d0corr_isLoaded) {
			if (mus_gfit_d0corr_branch != 0) {
				mus_gfit_d0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_d0corr_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0corr_isLoaded = true;
		}
		return mus_gfit_d0corr_;
	}
	const vector<float> &mus_gfit_d0corrPhi()
	{
		if (not mus_gfit_d0corrPhi_isLoaded) {
			if (mus_gfit_d0corrPhi_branch != 0) {
				mus_gfit_d0corrPhi_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_d0corrPhi_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0corrPhi_isLoaded = true;
		}
		return mus_gfit_d0corrPhi_;
	}
	const vector<float> &mus_gfit_d0phiCov()
	{
		if (not mus_gfit_d0phiCov_isLoaded) {
			if (mus_gfit_d0phiCov_branch != 0) {
				mus_gfit_d0phiCov_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_d0phiCov_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_d0phiCov_isLoaded = true;
		}
		return mus_gfit_d0phiCov_;
	}
	const vector<float> &mus_gfit_ndof()
	{
		if (not mus_gfit_ndof_isLoaded) {
			if (mus_gfit_ndof_branch != 0) {
				mus_gfit_ndof_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_ndof_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_ndof_isLoaded = true;
		}
		return mus_gfit_ndof_;
	}
	const vector<float> &mus_gfit_qoverp()
	{
		if (not mus_gfit_qoverp_isLoaded) {
			if (mus_gfit_qoverp_branch != 0) {
				mus_gfit_qoverp_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_qoverp_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_qoverp_isLoaded = true;
		}
		return mus_gfit_qoverp_;
	}
	const vector<float> &mus_gfit_qoverpError()
	{
		if (not mus_gfit_qoverpError_isLoaded) {
			if (mus_gfit_qoverpError_branch != 0) {
				mus_gfit_qoverpError_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_qoverpError_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_qoverpError_isLoaded = true;
		}
		return mus_gfit_qoverpError_;
	}
	const vector<float> &mus_gfit_z0()
	{
		if (not mus_gfit_z0_isLoaded) {
			if (mus_gfit_z0_branch != 0) {
				mus_gfit_z0_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_z0_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_z0_isLoaded = true;
		}
		return mus_gfit_z0_;
	}
	const vector<float> &mus_gfit_z0Err()
	{
		if (not mus_gfit_z0Err_isLoaded) {
			if (mus_gfit_z0Err_branch != 0) {
				mus_gfit_z0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_z0Err_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_z0Err_isLoaded = true;
		}
		return mus_gfit_z0Err_;
	}
	const vector<float> &mus_gfit_z0corr()
	{
		if (not mus_gfit_z0corr_isLoaded) {
			if (mus_gfit_z0corr_branch != 0) {
				mus_gfit_z0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_z0corr_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_z0corr_isLoaded = true;
		}
		return mus_gfit_z0corr_;
	}
	const vector<float> &mus_glbKink()
	{
		if (not mus_glbKink_isLoaded) {
			if (mus_glbKink_branch != 0) {
				mus_glbKink_branch->GetEntry(index);
			} else { 
				printf("branch mus_glbKink_branch does not exist!\n");
				exit(1);
			}
			mus_glbKink_isLoaded = true;
		}
		return mus_glbKink_;
	}
	const vector<float> &mus_glbTrackProbability()
	{
		if (not mus_glbTrackProbability_isLoaded) {
			if (mus_glbTrackProbability_branch != 0) {
				mus_glbTrackProbability_branch->GetEntry(index);
			} else { 
				printf("branch mus_glbTrackProbability_branch does not exist!\n");
				exit(1);
			}
			mus_glbTrackProbability_isLoaded = true;
		}
		return mus_glbTrackProbability_;
	}
	const vector<float> &mus_globalDeltaEtaPhi()
	{
		if (not mus_globalDeltaEtaPhi_isLoaded) {
			if (mus_globalDeltaEtaPhi_branch != 0) {
				mus_globalDeltaEtaPhi_branch->GetEntry(index);
			} else { 
				printf("branch mus_globalDeltaEtaPhi_branch does not exist!\n");
				exit(1);
			}
			mus_globalDeltaEtaPhi_isLoaded = true;
		}
		return mus_globalDeltaEtaPhi_;
	}
	const vector<float> &mus_hadMax()
	{
		if (not mus_hadMax_isLoaded) {
			if (mus_hadMax_branch != 0) {
				mus_hadMax_branch->GetEntry(index);
			} else { 
				printf("branch mus_hadMax_branch does not exist!\n");
				exit(1);
			}
			mus_hadMax_isLoaded = true;
		}
		return mus_hadMax_;
	}
	const vector<float> &mus_hcal_time()
	{
		if (not mus_hcal_time_isLoaded) {
			if (mus_hcal_time_branch != 0) {
				mus_hcal_time_branch->GetEntry(index);
			} else { 
				printf("branch mus_hcal_time_branch does not exist!\n");
				exit(1);
			}
			mus_hcal_time_isLoaded = true;
		}
		return mus_hcal_time_;
	}
	const vector<float> &mus_ip2d()
	{
		if (not mus_ip2d_isLoaded) {
			if (mus_ip2d_branch != 0) {
				mus_ip2d_branch->GetEntry(index);
			} else { 
				printf("branch mus_ip2d_branch does not exist!\n");
				exit(1);
			}
			mus_ip2d_isLoaded = true;
		}
		return mus_ip2d_;
	}
	const vector<float> &mus_ip2derr()
	{
		if (not mus_ip2derr_isLoaded) {
			if (mus_ip2derr_branch != 0) {
				mus_ip2derr_branch->GetEntry(index);
			} else { 
				printf("branch mus_ip2derr_branch does not exist!\n");
				exit(1);
			}
			mus_ip2derr_isLoaded = true;
		}
		return mus_ip2derr_;
	}
	const vector<float> &mus_ip3d()
	{
		if (not mus_ip3d_isLoaded) {
			if (mus_ip3d_branch != 0) {
				mus_ip3d_branch->GetEntry(index);
			} else { 
				printf("branch mus_ip3d_branch does not exist!\n");
				exit(1);
			}
			mus_ip3d_isLoaded = true;
		}
		return mus_ip3d_;
	}
	const vector<float> &mus_ip3derr()
	{
		if (not mus_ip3derr_isLoaded) {
			if (mus_ip3derr_branch != 0) {
				mus_ip3derr_branch->GetEntry(index);
			} else { 
				printf("branch mus_ip3derr_branch does not exist!\n");
				exit(1);
			}
			mus_ip3derr_isLoaded = true;
		}
		return mus_ip3derr_;
	}
	const vector<float> &mus_iso03_emEt()
	{
		if (not mus_iso03_emEt_isLoaded) {
			if (mus_iso03_emEt_branch != 0) {
				mus_iso03_emEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_emEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_emEt_isLoaded = true;
		}
		return mus_iso03_emEt_;
	}
	const vector<float> &mus_iso03_hadEt()
	{
		if (not mus_iso03_hadEt_isLoaded) {
			if (mus_iso03_hadEt_branch != 0) {
				mus_iso03_hadEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_hadEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_hadEt_isLoaded = true;
		}
		return mus_iso03_hadEt_;
	}
	const vector<float> &mus_iso03_hoEt()
	{
		if (not mus_iso03_hoEt_isLoaded) {
			if (mus_iso03_hoEt_branch != 0) {
				mus_iso03_hoEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_hoEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_hoEt_isLoaded = true;
		}
		return mus_iso03_hoEt_;
	}
	const vector<float> &mus_iso03_sumPt()
	{
		if (not mus_iso03_sumPt_isLoaded) {
			if (mus_iso03_sumPt_branch != 0) {
				mus_iso03_sumPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_sumPt_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_sumPt_isLoaded = true;
		}
		return mus_iso03_sumPt_;
	}
	const vector<float> &mus_iso05_emEt()
	{
		if (not mus_iso05_emEt_isLoaded) {
			if (mus_iso05_emEt_branch != 0) {
				mus_iso05_emEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_emEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_emEt_isLoaded = true;
		}
		return mus_iso05_emEt_;
	}
	const vector<float> &mus_iso05_hadEt()
	{
		if (not mus_iso05_hadEt_isLoaded) {
			if (mus_iso05_hadEt_branch != 0) {
				mus_iso05_hadEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_hadEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_hadEt_isLoaded = true;
		}
		return mus_iso05_hadEt_;
	}
	const vector<float> &mus_iso05_hoEt()
	{
		if (not mus_iso05_hoEt_isLoaded) {
			if (mus_iso05_hoEt_branch != 0) {
				mus_iso05_hoEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_hoEt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_hoEt_isLoaded = true;
		}
		return mus_iso05_hoEt_;
	}
	const vector<float> &mus_iso05_sumPt()
	{
		if (not mus_iso05_sumPt_isLoaded) {
			if (mus_iso05_sumPt_branch != 0) {
				mus_iso05_sumPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_sumPt_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_sumPt_isLoaded = true;
		}
		return mus_iso05_sumPt_;
	}
	const vector<float> &mus_isoMeanDRR03_pf_ChargedHadronPt()
	{
		if (not mus_isoMeanDRR03_pf_ChargedHadronPt_isLoaded) {
			if (mus_isoMeanDRR03_pf_ChargedHadronPt_branch != 0) {
				mus_isoMeanDRR03_pf_ChargedHadronPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR03_pf_ChargedHadronPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR03_pf_ChargedHadronPt_isLoaded = true;
		}
		return mus_isoMeanDRR03_pf_ChargedHadronPt_;
	}
	const vector<float> &mus_isoMeanDRR03_pf_ChargedParticlePt()
	{
		if (not mus_isoMeanDRR03_pf_ChargedParticlePt_isLoaded) {
			if (mus_isoMeanDRR03_pf_ChargedParticlePt_branch != 0) {
				mus_isoMeanDRR03_pf_ChargedParticlePt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR03_pf_ChargedParticlePt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR03_pf_ChargedParticlePt_isLoaded = true;
		}
		return mus_isoMeanDRR03_pf_ChargedParticlePt_;
	}
	const vector<float> &mus_isoMeanDRR03_pf_NeutralHadronEt()
	{
		if (not mus_isoMeanDRR03_pf_NeutralHadronEt_isLoaded) {
			if (mus_isoMeanDRR03_pf_NeutralHadronEt_branch != 0) {
				mus_isoMeanDRR03_pf_NeutralHadronEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR03_pf_NeutralHadronEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR03_pf_NeutralHadronEt_isLoaded = true;
		}
		return mus_isoMeanDRR03_pf_NeutralHadronEt_;
	}
	const vector<float> &mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold()
	{
		if (not mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_isLoaded) {
			if (mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_branch != 0) {
				mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_isLoaded = true;
		}
		return mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold_;
	}
	const vector<float> &mus_isoMeanDRR03_pf_PUPt()
	{
		if (not mus_isoMeanDRR03_pf_PUPt_isLoaded) {
			if (mus_isoMeanDRR03_pf_PUPt_branch != 0) {
				mus_isoMeanDRR03_pf_PUPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR03_pf_PUPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR03_pf_PUPt_isLoaded = true;
		}
		return mus_isoMeanDRR03_pf_PUPt_;
	}
	const vector<float> &mus_isoMeanDRR03_pf_PhotonEt()
	{
		if (not mus_isoMeanDRR03_pf_PhotonEt_isLoaded) {
			if (mus_isoMeanDRR03_pf_PhotonEt_branch != 0) {
				mus_isoMeanDRR03_pf_PhotonEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR03_pf_PhotonEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR03_pf_PhotonEt_isLoaded = true;
		}
		return mus_isoMeanDRR03_pf_PhotonEt_;
	}
	const vector<float> &mus_isoMeanDRR03_pf_PhotonEtHighThreshold()
	{
		if (not mus_isoMeanDRR03_pf_PhotonEtHighThreshold_isLoaded) {
			if (mus_isoMeanDRR03_pf_PhotonEtHighThreshold_branch != 0) {
				mus_isoMeanDRR03_pf_PhotonEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR03_pf_PhotonEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR03_pf_PhotonEtHighThreshold_isLoaded = true;
		}
		return mus_isoMeanDRR03_pf_PhotonEtHighThreshold_;
	}
	const vector<float> &mus_isoMeanDRR04_pf_ChargedHadronPt()
	{
		if (not mus_isoMeanDRR04_pf_ChargedHadronPt_isLoaded) {
			if (mus_isoMeanDRR04_pf_ChargedHadronPt_branch != 0) {
				mus_isoMeanDRR04_pf_ChargedHadronPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR04_pf_ChargedHadronPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR04_pf_ChargedHadronPt_isLoaded = true;
		}
		return mus_isoMeanDRR04_pf_ChargedHadronPt_;
	}
	const vector<float> &mus_isoMeanDRR04_pf_ChargedParticlePt()
	{
		if (not mus_isoMeanDRR04_pf_ChargedParticlePt_isLoaded) {
			if (mus_isoMeanDRR04_pf_ChargedParticlePt_branch != 0) {
				mus_isoMeanDRR04_pf_ChargedParticlePt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR04_pf_ChargedParticlePt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR04_pf_ChargedParticlePt_isLoaded = true;
		}
		return mus_isoMeanDRR04_pf_ChargedParticlePt_;
	}
	const vector<float> &mus_isoMeanDRR04_pf_NeutralHadronEt()
	{
		if (not mus_isoMeanDRR04_pf_NeutralHadronEt_isLoaded) {
			if (mus_isoMeanDRR04_pf_NeutralHadronEt_branch != 0) {
				mus_isoMeanDRR04_pf_NeutralHadronEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR04_pf_NeutralHadronEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR04_pf_NeutralHadronEt_isLoaded = true;
		}
		return mus_isoMeanDRR04_pf_NeutralHadronEt_;
	}
	const vector<float> &mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold()
	{
		if (not mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_isLoaded) {
			if (mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_branch != 0) {
				mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_isLoaded = true;
		}
		return mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold_;
	}
	const vector<float> &mus_isoMeanDRR04_pf_PUPt()
	{
		if (not mus_isoMeanDRR04_pf_PUPt_isLoaded) {
			if (mus_isoMeanDRR04_pf_PUPt_branch != 0) {
				mus_isoMeanDRR04_pf_PUPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR04_pf_PUPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR04_pf_PUPt_isLoaded = true;
		}
		return mus_isoMeanDRR04_pf_PUPt_;
	}
	const vector<float> &mus_isoMeanDRR04_pf_PhotonEt()
	{
		if (not mus_isoMeanDRR04_pf_PhotonEt_isLoaded) {
			if (mus_isoMeanDRR04_pf_PhotonEt_branch != 0) {
				mus_isoMeanDRR04_pf_PhotonEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR04_pf_PhotonEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR04_pf_PhotonEt_isLoaded = true;
		}
		return mus_isoMeanDRR04_pf_PhotonEt_;
	}
	const vector<float> &mus_isoMeanDRR04_pf_PhotonEtHighThreshold()
	{
		if (not mus_isoMeanDRR04_pf_PhotonEtHighThreshold_isLoaded) {
			if (mus_isoMeanDRR04_pf_PhotonEtHighThreshold_branch != 0) {
				mus_isoMeanDRR04_pf_PhotonEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoMeanDRR04_pf_PhotonEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoMeanDRR04_pf_PhotonEtHighThreshold_isLoaded = true;
		}
		return mus_isoMeanDRR04_pf_PhotonEtHighThreshold_;
	}
	const vector<float> &mus_isoR03_pf_ChargedHadronPt()
	{
		if (not mus_isoR03_pf_ChargedHadronPt_isLoaded) {
			if (mus_isoR03_pf_ChargedHadronPt_branch != 0) {
				mus_isoR03_pf_ChargedHadronPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR03_pf_ChargedHadronPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR03_pf_ChargedHadronPt_isLoaded = true;
		}
		return mus_isoR03_pf_ChargedHadronPt_;
	}
	const vector<float> &mus_isoR03_pf_ChargedParticlePt()
	{
		if (not mus_isoR03_pf_ChargedParticlePt_isLoaded) {
			if (mus_isoR03_pf_ChargedParticlePt_branch != 0) {
				mus_isoR03_pf_ChargedParticlePt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR03_pf_ChargedParticlePt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR03_pf_ChargedParticlePt_isLoaded = true;
		}
		return mus_isoR03_pf_ChargedParticlePt_;
	}
	const vector<float> &mus_isoR03_pf_NeutralHadronEt()
	{
		if (not mus_isoR03_pf_NeutralHadronEt_isLoaded) {
			if (mus_isoR03_pf_NeutralHadronEt_branch != 0) {
				mus_isoR03_pf_NeutralHadronEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR03_pf_NeutralHadronEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR03_pf_NeutralHadronEt_isLoaded = true;
		}
		return mus_isoR03_pf_NeutralHadronEt_;
	}
	const vector<float> &mus_isoR03_pf_NeutralHadronEtHighThreshold()
	{
		if (not mus_isoR03_pf_NeutralHadronEtHighThreshold_isLoaded) {
			if (mus_isoR03_pf_NeutralHadronEtHighThreshold_branch != 0) {
				mus_isoR03_pf_NeutralHadronEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR03_pf_NeutralHadronEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoR03_pf_NeutralHadronEtHighThreshold_isLoaded = true;
		}
		return mus_isoR03_pf_NeutralHadronEtHighThreshold_;
	}
	const vector<float> &mus_isoR03_pf_PUPt()
	{
		if (not mus_isoR03_pf_PUPt_isLoaded) {
			if (mus_isoR03_pf_PUPt_branch != 0) {
				mus_isoR03_pf_PUPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR03_pf_PUPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR03_pf_PUPt_isLoaded = true;
		}
		return mus_isoR03_pf_PUPt_;
	}
	const vector<float> &mus_isoR03_pf_PhotonEt()
	{
		if (not mus_isoR03_pf_PhotonEt_isLoaded) {
			if (mus_isoR03_pf_PhotonEt_branch != 0) {
				mus_isoR03_pf_PhotonEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR03_pf_PhotonEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR03_pf_PhotonEt_isLoaded = true;
		}
		return mus_isoR03_pf_PhotonEt_;
	}
	const vector<float> &mus_isoR03_pf_PhotonEtHighThreshold()
	{
		if (not mus_isoR03_pf_PhotonEtHighThreshold_isLoaded) {
			if (mus_isoR03_pf_PhotonEtHighThreshold_branch != 0) {
				mus_isoR03_pf_PhotonEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR03_pf_PhotonEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoR03_pf_PhotonEtHighThreshold_isLoaded = true;
		}
		return mus_isoR03_pf_PhotonEtHighThreshold_;
	}
	const vector<float> &mus_isoR04_pf_ChargedHadronPt()
	{
		if (not mus_isoR04_pf_ChargedHadronPt_isLoaded) {
			if (mus_isoR04_pf_ChargedHadronPt_branch != 0) {
				mus_isoR04_pf_ChargedHadronPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR04_pf_ChargedHadronPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR04_pf_ChargedHadronPt_isLoaded = true;
		}
		return mus_isoR04_pf_ChargedHadronPt_;
	}
	const vector<float> &mus_isoR04_pf_ChargedParticlePt()
	{
		if (not mus_isoR04_pf_ChargedParticlePt_isLoaded) {
			if (mus_isoR04_pf_ChargedParticlePt_branch != 0) {
				mus_isoR04_pf_ChargedParticlePt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR04_pf_ChargedParticlePt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR04_pf_ChargedParticlePt_isLoaded = true;
		}
		return mus_isoR04_pf_ChargedParticlePt_;
	}
	const vector<float> &mus_isoR04_pf_NeutralHadronEt()
	{
		if (not mus_isoR04_pf_NeutralHadronEt_isLoaded) {
			if (mus_isoR04_pf_NeutralHadronEt_branch != 0) {
				mus_isoR04_pf_NeutralHadronEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR04_pf_NeutralHadronEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR04_pf_NeutralHadronEt_isLoaded = true;
		}
		return mus_isoR04_pf_NeutralHadronEt_;
	}
	const vector<float> &mus_isoR04_pf_NeutralHadronEtHighThreshold()
	{
		if (not mus_isoR04_pf_NeutralHadronEtHighThreshold_isLoaded) {
			if (mus_isoR04_pf_NeutralHadronEtHighThreshold_branch != 0) {
				mus_isoR04_pf_NeutralHadronEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR04_pf_NeutralHadronEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoR04_pf_NeutralHadronEtHighThreshold_isLoaded = true;
		}
		return mus_isoR04_pf_NeutralHadronEtHighThreshold_;
	}
	const vector<float> &mus_isoR04_pf_PUPt()
	{
		if (not mus_isoR04_pf_PUPt_isLoaded) {
			if (mus_isoR04_pf_PUPt_branch != 0) {
				mus_isoR04_pf_PUPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR04_pf_PUPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR04_pf_PUPt_isLoaded = true;
		}
		return mus_isoR04_pf_PUPt_;
	}
	const vector<float> &mus_isoR04_pf_PhotonEt()
	{
		if (not mus_isoR04_pf_PhotonEt_isLoaded) {
			if (mus_isoR04_pf_PhotonEt_branch != 0) {
				mus_isoR04_pf_PhotonEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR04_pf_PhotonEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoR04_pf_PhotonEt_isLoaded = true;
		}
		return mus_isoR04_pf_PhotonEt_;
	}
	const vector<float> &mus_isoR04_pf_PhotonEtHighThreshold()
	{
		if (not mus_isoR04_pf_PhotonEtHighThreshold_isLoaded) {
			if (mus_isoR04_pf_PhotonEtHighThreshold_branch != 0) {
				mus_isoR04_pf_PhotonEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoR04_pf_PhotonEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoR04_pf_PhotonEtHighThreshold_isLoaded = true;
		}
		return mus_isoR04_pf_PhotonEtHighThreshold_;
	}
	const vector<float> &mus_isoSumDRR03_pf_ChargedHadronPt()
	{
		if (not mus_isoSumDRR03_pf_ChargedHadronPt_isLoaded) {
			if (mus_isoSumDRR03_pf_ChargedHadronPt_branch != 0) {
				mus_isoSumDRR03_pf_ChargedHadronPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR03_pf_ChargedHadronPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR03_pf_ChargedHadronPt_isLoaded = true;
		}
		return mus_isoSumDRR03_pf_ChargedHadronPt_;
	}
	const vector<float> &mus_isoSumDRR03_pf_ChargedParticlePt()
	{
		if (not mus_isoSumDRR03_pf_ChargedParticlePt_isLoaded) {
			if (mus_isoSumDRR03_pf_ChargedParticlePt_branch != 0) {
				mus_isoSumDRR03_pf_ChargedParticlePt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR03_pf_ChargedParticlePt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR03_pf_ChargedParticlePt_isLoaded = true;
		}
		return mus_isoSumDRR03_pf_ChargedParticlePt_;
	}
	const vector<float> &mus_isoSumDRR03_pf_NeutralHadronEt()
	{
		if (not mus_isoSumDRR03_pf_NeutralHadronEt_isLoaded) {
			if (mus_isoSumDRR03_pf_NeutralHadronEt_branch != 0) {
				mus_isoSumDRR03_pf_NeutralHadronEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR03_pf_NeutralHadronEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR03_pf_NeutralHadronEt_isLoaded = true;
		}
		return mus_isoSumDRR03_pf_NeutralHadronEt_;
	}
	const vector<float> &mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold()
	{
		if (not mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_isLoaded) {
			if (mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_branch != 0) {
				mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_isLoaded = true;
		}
		return mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold_;
	}
	const vector<float> &mus_isoSumDRR03_pf_PUPt()
	{
		if (not mus_isoSumDRR03_pf_PUPt_isLoaded) {
			if (mus_isoSumDRR03_pf_PUPt_branch != 0) {
				mus_isoSumDRR03_pf_PUPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR03_pf_PUPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR03_pf_PUPt_isLoaded = true;
		}
		return mus_isoSumDRR03_pf_PUPt_;
	}
	const vector<float> &mus_isoSumDRR03_pf_PhotonEt()
	{
		if (not mus_isoSumDRR03_pf_PhotonEt_isLoaded) {
			if (mus_isoSumDRR03_pf_PhotonEt_branch != 0) {
				mus_isoSumDRR03_pf_PhotonEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR03_pf_PhotonEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR03_pf_PhotonEt_isLoaded = true;
		}
		return mus_isoSumDRR03_pf_PhotonEt_;
	}
	const vector<float> &mus_isoSumDRR03_pf_PhotonEtHighThreshold()
	{
		if (not mus_isoSumDRR03_pf_PhotonEtHighThreshold_isLoaded) {
			if (mus_isoSumDRR03_pf_PhotonEtHighThreshold_branch != 0) {
				mus_isoSumDRR03_pf_PhotonEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR03_pf_PhotonEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR03_pf_PhotonEtHighThreshold_isLoaded = true;
		}
		return mus_isoSumDRR03_pf_PhotonEtHighThreshold_;
	}
	const vector<float> &mus_isoSumDRR04_pf_ChargedHadronPt()
	{
		if (not mus_isoSumDRR04_pf_ChargedHadronPt_isLoaded) {
			if (mus_isoSumDRR04_pf_ChargedHadronPt_branch != 0) {
				mus_isoSumDRR04_pf_ChargedHadronPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR04_pf_ChargedHadronPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR04_pf_ChargedHadronPt_isLoaded = true;
		}
		return mus_isoSumDRR04_pf_ChargedHadronPt_;
	}
	const vector<float> &mus_isoSumDRR04_pf_ChargedParticlePt()
	{
		if (not mus_isoSumDRR04_pf_ChargedParticlePt_isLoaded) {
			if (mus_isoSumDRR04_pf_ChargedParticlePt_branch != 0) {
				mus_isoSumDRR04_pf_ChargedParticlePt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR04_pf_ChargedParticlePt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR04_pf_ChargedParticlePt_isLoaded = true;
		}
		return mus_isoSumDRR04_pf_ChargedParticlePt_;
	}
	const vector<float> &mus_isoSumDRR04_pf_NeutralHadronEt()
	{
		if (not mus_isoSumDRR04_pf_NeutralHadronEt_isLoaded) {
			if (mus_isoSumDRR04_pf_NeutralHadronEt_branch != 0) {
				mus_isoSumDRR04_pf_NeutralHadronEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR04_pf_NeutralHadronEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR04_pf_NeutralHadronEt_isLoaded = true;
		}
		return mus_isoSumDRR04_pf_NeutralHadronEt_;
	}
	const vector<float> &mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold()
	{
		if (not mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_isLoaded) {
			if (mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_branch != 0) {
				mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_isLoaded = true;
		}
		return mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold_;
	}
	const vector<float> &mus_isoSumDRR04_pf_PUPt()
	{
		if (not mus_isoSumDRR04_pf_PUPt_isLoaded) {
			if (mus_isoSumDRR04_pf_PUPt_branch != 0) {
				mus_isoSumDRR04_pf_PUPt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR04_pf_PUPt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR04_pf_PUPt_isLoaded = true;
		}
		return mus_isoSumDRR04_pf_PUPt_;
	}
	const vector<float> &mus_isoSumDRR04_pf_PhotonEt()
	{
		if (not mus_isoSumDRR04_pf_PhotonEt_isLoaded) {
			if (mus_isoSumDRR04_pf_PhotonEt_branch != 0) {
				mus_isoSumDRR04_pf_PhotonEt_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR04_pf_PhotonEt_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR04_pf_PhotonEt_isLoaded = true;
		}
		return mus_isoSumDRR04_pf_PhotonEt_;
	}
	const vector<float> &mus_isoSumDRR04_pf_PhotonEtHighThreshold()
	{
		if (not mus_isoSumDRR04_pf_PhotonEtHighThreshold_isLoaded) {
			if (mus_isoSumDRR04_pf_PhotonEtHighThreshold_branch != 0) {
				mus_isoSumDRR04_pf_PhotonEtHighThreshold_branch->GetEntry(index);
			} else { 
				printf("branch mus_isoSumDRR04_pf_PhotonEtHighThreshold_branch does not exist!\n");
				exit(1);
			}
			mus_isoSumDRR04_pf_PhotonEtHighThreshold_isLoaded = true;
		}
		return mus_isoSumDRR04_pf_PhotonEtHighThreshold_;
	}
	const vector<float> &mus_iso_ecalvetoDep()
	{
		if (not mus_iso_ecalvetoDep_isLoaded) {
			if (mus_iso_ecalvetoDep_branch != 0) {
				mus_iso_ecalvetoDep_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso_ecalvetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_ecalvetoDep_isLoaded = true;
		}
		return mus_iso_ecalvetoDep_;
	}
	const vector<float> &mus_iso_hcalvetoDep()
	{
		if (not mus_iso_hcalvetoDep_isLoaded) {
			if (mus_iso_hcalvetoDep_branch != 0) {
				mus_iso_hcalvetoDep_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso_hcalvetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_hcalvetoDep_isLoaded = true;
		}
		return mus_iso_hcalvetoDep_;
	}
	const vector<float> &mus_iso_hovetoDep()
	{
		if (not mus_iso_hovetoDep_isLoaded) {
			if (mus_iso_hovetoDep_branch != 0) {
				mus_iso_hovetoDep_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso_hovetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_hovetoDep_isLoaded = true;
		}
		return mus_iso_hovetoDep_;
	}
	const vector<float> &mus_iso_trckvetoDep()
	{
		if (not mus_iso_trckvetoDep_isLoaded) {
			if (mus_iso_trckvetoDep_branch != 0) {
				mus_iso_trckvetoDep_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso_trckvetoDep_branch does not exist!\n");
				exit(1);
			}
			mus_iso_trckvetoDep_isLoaded = true;
		}
		return mus_iso_trckvetoDep_;
	}
	const vector<float> &mus_localDistance()
	{
		if (not mus_localDistance_isLoaded) {
			if (mus_localDistance_branch != 0) {
				mus_localDistance_branch->GetEntry(index);
			} else { 
				printf("branch mus_localDistance_branch does not exist!\n");
				exit(1);
			}
			mus_localDistance_isLoaded = true;
		}
		return mus_localDistance_;
	}
	const vector<float> &mus_mass()
	{
		if (not mus_mass_isLoaded) {
			if (mus_mass_branch != 0) {
				mus_mass_branch->GetEntry(index);
			} else { 
				printf("branch mus_mass_branch does not exist!\n");
				exit(1);
			}
			mus_mass_isLoaded = true;
		}
		return mus_mass_;
	}
	const vector<float> &mus_mc_patMatch_dr()
	{
		if (not mus_mc_patMatch_dr_isLoaded) {
			if (mus_mc_patMatch_dr_branch != 0) {
				mus_mc_patMatch_dr_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc_patMatch_dr_branch does not exist!\n");
				exit(1);
			}
			mus_mc_patMatch_dr_isLoaded = true;
		}
		return mus_mc_patMatch_dr_;
	}
	const vector<float> &mus_miniIso_ch()
	{
		if (not mus_miniIso_ch_isLoaded) {
			if (mus_miniIso_ch_branch != 0) {
				mus_miniIso_ch_branch->GetEntry(index);
			} else { 
				printf("branch mus_miniIso_ch_branch does not exist!\n");
				exit(1);
			}
			mus_miniIso_ch_isLoaded = true;
		}
		return mus_miniIso_ch_;
	}
	const vector<float> &mus_miniIso_db()
	{
		if (not mus_miniIso_db_isLoaded) {
			if (mus_miniIso_db_branch != 0) {
				mus_miniIso_db_branch->GetEntry(index);
			} else { 
				printf("branch mus_miniIso_db_branch does not exist!\n");
				exit(1);
			}
			mus_miniIso_db_isLoaded = true;
		}
		return mus_miniIso_db_;
	}
	const vector<float> &mus_miniIso_em()
	{
		if (not mus_miniIso_em_isLoaded) {
			if (mus_miniIso_em_branch != 0) {
				mus_miniIso_em_branch->GetEntry(index);
			} else { 
				printf("branch mus_miniIso_em_branch does not exist!\n");
				exit(1);
			}
			mus_miniIso_em_isLoaded = true;
		}
		return mus_miniIso_em_;
	}
	const vector<float> &mus_miniIso_nh()
	{
		if (not mus_miniIso_nh_isLoaded) {
			if (mus_miniIso_nh_branch != 0) {
				mus_miniIso_nh_branch->GetEntry(index);
			} else { 
				printf("branch mus_miniIso_nh_branch does not exist!\n");
				exit(1);
			}
			mus_miniIso_nh_isLoaded = true;
		}
		return mus_miniIso_nh_;
	}
	const vector<float> &mus_miniIso_uncor()
	{
		if (not mus_miniIso_uncor_isLoaded) {
			if (mus_miniIso_uncor_branch != 0) {
				mus_miniIso_uncor_branch->GetEntry(index);
			} else { 
				printf("branch mus_miniIso_uncor_branch does not exist!\n");
				exit(1);
			}
			mus_miniIso_uncor_isLoaded = true;
		}
		return mus_miniIso_uncor_;
	}
	const vector<float> &mus_ndof()
	{
		if (not mus_ndof_isLoaded) {
			if (mus_ndof_branch != 0) {
				mus_ndof_branch->GetEntry(index);
			} else { 
				printf("branch mus_ndof_branch does not exist!\n");
				exit(1);
			}
			mus_ndof_isLoaded = true;
		}
		return mus_ndof_;
	}
	const vector<float> &mus_phiErr()
	{
		if (not mus_phiErr_isLoaded) {
			if (mus_phiErr_branch != 0) {
				mus_phiErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_phiErr_branch does not exist!\n");
				exit(1);
			}
			mus_phiErr_isLoaded = true;
		}
		return mus_phiErr_;
	}
	const vector<float> &mus_ptErr()
	{
		if (not mus_ptErr_isLoaded) {
			if (mus_ptErr_branch != 0) {
				mus_ptErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_ptErr_branch does not exist!\n");
				exit(1);
			}
			mus_ptErr_isLoaded = true;
		}
		return mus_ptErr_;
	}
	const vector<float> &mus_qoverp()
	{
		if (not mus_qoverp_isLoaded) {
			if (mus_qoverp_branch != 0) {
				mus_qoverp_branch->GetEntry(index);
			} else { 
				printf("branch mus_qoverp_branch does not exist!\n");
				exit(1);
			}
			mus_qoverp_isLoaded = true;
		}
		return mus_qoverp_;
	}
	const vector<float> &mus_qoverpError()
	{
		if (not mus_qoverpError_isLoaded) {
			if (mus_qoverpError_branch != 0) {
				mus_qoverpError_branch->GetEntry(index);
			} else { 
				printf("branch mus_qoverpError_branch does not exist!\n");
				exit(1);
			}
			mus_qoverpError_isLoaded = true;
		}
		return mus_qoverpError_;
	}
	const vector<float> &mus_segmCompatibility()
	{
		if (not mus_segmCompatibility_isLoaded) {
			if (mus_segmCompatibility_branch != 0) {
				mus_segmCompatibility_branch->GetEntry(index);
			} else { 
				printf("branch mus_segmCompatibility_branch does not exist!\n");
				exit(1);
			}
			mus_segmCompatibility_isLoaded = true;
		}
		return mus_segmCompatibility_;
	}
	const vector<float> &mus_staRelChi2()
	{
		if (not mus_staRelChi2_isLoaded) {
			if (mus_staRelChi2_branch != 0) {
				mus_staRelChi2_branch->GetEntry(index);
			} else { 
				printf("branch mus_staRelChi2_branch does not exist!\n");
				exit(1);
			}
			mus_staRelChi2_isLoaded = true;
		}
		return mus_staRelChi2_;
	}
	const vector<float> &mus_sta_chi2()
	{
		if (not mus_sta_chi2_isLoaded) {
			if (mus_sta_chi2_branch != 0) {
				mus_sta_chi2_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_chi2_branch does not exist!\n");
				exit(1);
			}
			mus_sta_chi2_isLoaded = true;
		}
		return mus_sta_chi2_;
	}
	const vector<float> &mus_sta_d0()
	{
		if (not mus_sta_d0_isLoaded) {
			if (mus_sta_d0_branch != 0) {
				mus_sta_d0_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_d0_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0_isLoaded = true;
		}
		return mus_sta_d0_;
	}
	const vector<float> &mus_sta_d0Err()
	{
		if (not mus_sta_d0Err_isLoaded) {
			if (mus_sta_d0Err_branch != 0) {
				mus_sta_d0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_d0Err_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0Err_isLoaded = true;
		}
		return mus_sta_d0Err_;
	}
	const vector<float> &mus_sta_d0corr()
	{
		if (not mus_sta_d0corr_isLoaded) {
			if (mus_sta_d0corr_branch != 0) {
				mus_sta_d0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_d0corr_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0corr_isLoaded = true;
		}
		return mus_sta_d0corr_;
	}
	const vector<float> &mus_sta_d0corrPhi()
	{
		if (not mus_sta_d0corrPhi_isLoaded) {
			if (mus_sta_d0corrPhi_branch != 0) {
				mus_sta_d0corrPhi_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_d0corrPhi_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0corrPhi_isLoaded = true;
		}
		return mus_sta_d0corrPhi_;
	}
	const vector<float> &mus_sta_d0phiCov()
	{
		if (not mus_sta_d0phiCov_isLoaded) {
			if (mus_sta_d0phiCov_branch != 0) {
				mus_sta_d0phiCov_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_d0phiCov_branch does not exist!\n");
				exit(1);
			}
			mus_sta_d0phiCov_isLoaded = true;
		}
		return mus_sta_d0phiCov_;
	}
	const vector<float> &mus_sta_ndof()
	{
		if (not mus_sta_ndof_isLoaded) {
			if (mus_sta_ndof_branch != 0) {
				mus_sta_ndof_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_ndof_branch does not exist!\n");
				exit(1);
			}
			mus_sta_ndof_isLoaded = true;
		}
		return mus_sta_ndof_;
	}
	const vector<float> &mus_sta_qoverp()
	{
		if (not mus_sta_qoverp_isLoaded) {
			if (mus_sta_qoverp_branch != 0) {
				mus_sta_qoverp_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_qoverp_branch does not exist!\n");
				exit(1);
			}
			mus_sta_qoverp_isLoaded = true;
		}
		return mus_sta_qoverp_;
	}
	const vector<float> &mus_sta_qoverpError()
	{
		if (not mus_sta_qoverpError_isLoaded) {
			if (mus_sta_qoverpError_branch != 0) {
				mus_sta_qoverpError_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_qoverpError_branch does not exist!\n");
				exit(1);
			}
			mus_sta_qoverpError_isLoaded = true;
		}
		return mus_sta_qoverpError_;
	}
	const vector<float> &mus_sta_z0()
	{
		if (not mus_sta_z0_isLoaded) {
			if (mus_sta_z0_branch != 0) {
				mus_sta_z0_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_z0_branch does not exist!\n");
				exit(1);
			}
			mus_sta_z0_isLoaded = true;
		}
		return mus_sta_z0_;
	}
	const vector<float> &mus_sta_z0Err()
	{
		if (not mus_sta_z0Err_isLoaded) {
			if (mus_sta_z0Err_branch != 0) {
				mus_sta_z0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_z0Err_branch does not exist!\n");
				exit(1);
			}
			mus_sta_z0Err_isLoaded = true;
		}
		return mus_sta_z0Err_;
	}
	const vector<float> &mus_sta_z0corr()
	{
		if (not mus_sta_z0corr_isLoaded) {
			if (mus_sta_z0corr_branch != 0) {
				mus_sta_z0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_z0corr_branch does not exist!\n");
				exit(1);
			}
			mus_sta_z0corr_isLoaded = true;
		}
		return mus_sta_z0corr_;
	}
	const vector<float> &mus_timeAtIpInOut()
	{
		if (not mus_timeAtIpInOut_isLoaded) {
			if (mus_timeAtIpInOut_branch != 0) {
				mus_timeAtIpInOut_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeAtIpInOut_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpInOut_isLoaded = true;
		}
		return mus_timeAtIpInOut_;
	}
	const vector<float> &mus_timeAtIpInOutErr()
	{
		if (not mus_timeAtIpInOutErr_isLoaded) {
			if (mus_timeAtIpInOutErr_branch != 0) {
				mus_timeAtIpInOutErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeAtIpInOutErr_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpInOutErr_isLoaded = true;
		}
		return mus_timeAtIpInOutErr_;
	}
	const vector<float> &mus_timeAtIpOutIn()
	{
		if (not mus_timeAtIpOutIn_isLoaded) {
			if (mus_timeAtIpOutIn_branch != 0) {
				mus_timeAtIpOutIn_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeAtIpOutIn_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpOutIn_isLoaded = true;
		}
		return mus_timeAtIpOutIn_;
	}
	const vector<float> &mus_timeAtIpOutInErr()
	{
		if (not mus_timeAtIpOutInErr_isLoaded) {
			if (mus_timeAtIpOutInErr_branch != 0) {
				mus_timeAtIpOutInErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeAtIpOutInErr_branch does not exist!\n");
				exit(1);
			}
			mus_timeAtIpOutInErr_isLoaded = true;
		}
		return mus_timeAtIpOutInErr_;
	}
	const vector<float> &mus_trkKink()
	{
		if (not mus_trkKink_isLoaded) {
			if (mus_trkKink_branch != 0) {
				mus_trkKink_branch->GetEntry(index);
			} else { 
				printf("branch mus_trkKink_branch does not exist!\n");
				exit(1);
			}
			mus_trkKink_isLoaded = true;
		}
		return mus_trkKink_;
	}
	const vector<float> &mus_trkRelChi2()
	{
		if (not mus_trkRelChi2_isLoaded) {
			if (mus_trkRelChi2_branch != 0) {
				mus_trkRelChi2_branch->GetEntry(index);
			} else { 
				printf("branch mus_trkRelChi2_branch does not exist!\n");
				exit(1);
			}
			mus_trkRelChi2_isLoaded = true;
		}
		return mus_trkRelChi2_;
	}
	const vector<float> &mus_vertexphi()
	{
		if (not mus_vertexphi_isLoaded) {
			if (mus_vertexphi_branch != 0) {
				mus_vertexphi_branch->GetEntry(index);
			} else { 
				printf("branch mus_vertexphi_branch does not exist!\n");
				exit(1);
			}
			mus_vertexphi_isLoaded = true;
		}
		return mus_vertexphi_;
	}
	const vector<float> &mus_z0()
	{
		if (not mus_z0_isLoaded) {
			if (mus_z0_branch != 0) {
				mus_z0_branch->GetEntry(index);
			} else { 
				printf("branch mus_z0_branch does not exist!\n");
				exit(1);
			}
			mus_z0_isLoaded = true;
		}
		return mus_z0_;
	}
	const vector<float> &mus_z0Err()
	{
		if (not mus_z0Err_isLoaded) {
			if (mus_z0Err_branch != 0) {
				mus_z0Err_branch->GetEntry(index);
			} else { 
				printf("branch mus_z0Err_branch does not exist!\n");
				exit(1);
			}
			mus_z0Err_isLoaded = true;
		}
		return mus_z0Err_;
	}
	const vector<float> &mus_z0corr()
	{
		if (not mus_z0corr_isLoaded) {
			if (mus_z0corr_branch != 0) {
				mus_z0corr_branch->GetEntry(index);
			} else { 
				printf("branch mus_z0corr_branch does not exist!\n");
				exit(1);
			}
			mus_z0corr_isLoaded = true;
		}
		return mus_z0corr_;
	}
	const vector<float> &pfcands_dz()
	{
		if (not pfcands_dz_isLoaded) {
			if (pfcands_dz_branch != 0) {
				pfcands_dz_branch->GetEntry(index);
			} else { 
				printf("branch pfcands_dz_branch does not exist!\n");
				exit(1);
			}
			pfcands_dz_isLoaded = true;
		}
		return pfcands_dz_;
	}
	const vector<float> &pfcands_mass()
	{
		if (not pfcands_mass_isLoaded) {
			if (pfcands_mass_branch != 0) {
				pfcands_mass_branch->GetEntry(index);
			} else { 
				printf("branch pfcands_mass_branch does not exist!\n");
				exit(1);
			}
			pfcands_mass_isLoaded = true;
		}
		return pfcands_mass_;
	}
	const vector<float> &pfjets_area()
	{
		if (not pfjets_area_isLoaded) {
			if (pfjets_area_branch != 0) {
				pfjets_area_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_area_branch does not exist!\n");
				exit(1);
			}
			pfjets_area_isLoaded = true;
		}
		return pfjets_area_;
	}
	const vector<float> &pfjets_chargedEmE()
	{
		if (not pfjets_chargedEmE_isLoaded) {
			if (pfjets_chargedEmE_branch != 0) {
				pfjets_chargedEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_chargedEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedEmE_isLoaded = true;
		}
		return pfjets_chargedEmE_;
	}
	const vector<float> &pfjets_chargedHadronE()
	{
		if (not pfjets_chargedHadronE_isLoaded) {
			if (pfjets_chargedHadronE_branch != 0) {
				pfjets_chargedHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_chargedHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedHadronE_isLoaded = true;
		}
		return pfjets_chargedHadronE_;
	}
	const vector<float> &pfjets_electronE()
	{
		if (not pfjets_electronE_isLoaded) {
			if (pfjets_electronE_branch != 0) {
				pfjets_electronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_electronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_electronE_isLoaded = true;
		}
		return pfjets_electronE_;
	}
	const vector<float> &pfjets_hfEmE()
	{
		if (not pfjets_hfEmE_isLoaded) {
			if (pfjets_hfEmE_branch != 0) {
				pfjets_hfEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_hfEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_hfEmE_isLoaded = true;
		}
		return pfjets_hfEmE_;
	}
	const vector<float> &pfjets_hfHadronE()
	{
		if (not pfjets_hfHadronE_isLoaded) {
			if (pfjets_hfHadronE_branch != 0) {
				pfjets_hfHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_hfHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_hfHadronE_isLoaded = true;
		}
		return pfjets_hfHadronE_;
	}
	const vector<float> &pfjets_mass()
	{
		if (not pfjets_mass_isLoaded) {
			if (pfjets_mass_branch != 0) {
				pfjets_mass_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mass_branch does not exist!\n");
				exit(1);
			}
			pfjets_mass_isLoaded = true;
		}
		return pfjets_mass_;
	}
	const vector<float> &pfjets_muonE()
	{
		if (not pfjets_muonE_isLoaded) {
			if (pfjets_muonE_branch != 0) {
				pfjets_muonE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_muonE_branch does not exist!\n");
				exit(1);
			}
			pfjets_muonE_isLoaded = true;
		}
		return pfjets_muonE_;
	}
	const vector<float> &pfjets_neutralEmE()
	{
		if (not pfjets_neutralEmE_isLoaded) {
			if (pfjets_neutralEmE_branch != 0) {
				pfjets_neutralEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_neutralEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralEmE_isLoaded = true;
		}
		return pfjets_neutralEmE_;
	}
	const vector<float> &pfjets_neutralHadronE()
	{
		if (not pfjets_neutralHadronE_isLoaded) {
			if (pfjets_neutralHadronE_branch != 0) {
				pfjets_neutralHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_neutralHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralHadronE_isLoaded = true;
		}
		return pfjets_neutralHadronE_;
	}
	const vector<float> &pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag()
	{
		if (not pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded) {
			if (pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch != 0) {
				pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch does not exist!\n");
				exit(1);
			}
			pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded = true;
		}
		return pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag_;
	}
	const vector<float> &pfjets_photonE()
	{
		if (not pfjets_photonE_isLoaded) {
			if (pfjets_photonE_branch != 0) {
				pfjets_photonE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_photonE_branch does not exist!\n");
				exit(1);
			}
			pfjets_photonE_isLoaded = true;
		}
		return pfjets_photonE_;
	}
	const vector<float> &pfjets_pileupJetId()
	{
		if (not pfjets_pileupJetId_isLoaded) {
			if (pfjets_pileupJetId_branch != 0) {
				pfjets_pileupJetId_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_pileupJetId_branch does not exist!\n");
				exit(1);
			}
			pfjets_pileupJetId_isLoaded = true;
		}
		return pfjets_pileupJetId_;
	}
	const vector<float> &pfjets_undoJEC()
	{
		if (not pfjets_undoJEC_isLoaded) {
			if (pfjets_undoJEC_branch != 0) {
				pfjets_undoJEC_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_undoJEC_branch does not exist!\n");
				exit(1);
			}
			pfjets_undoJEC_isLoaded = true;
		}
		return pfjets_undoJEC_;
	}
	const vector<float> &pfjets_puppi_area()
	{
		if (not pfjets_puppi_area_isLoaded) {
			if (pfjets_puppi_area_branch != 0) {
				pfjets_puppi_area_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_area_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_area_isLoaded = true;
		}
		return pfjets_puppi_area_;
	}
	const vector<float> &pfjets_puppi_chargedEmE()
	{
		if (not pfjets_puppi_chargedEmE_isLoaded) {
			if (pfjets_puppi_chargedEmE_branch != 0) {
				pfjets_puppi_chargedEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_chargedEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_chargedEmE_isLoaded = true;
		}
		return pfjets_puppi_chargedEmE_;
	}
	const vector<float> &pfjets_puppi_chargedHadronE()
	{
		if (not pfjets_puppi_chargedHadronE_isLoaded) {
			if (pfjets_puppi_chargedHadronE_branch != 0) {
				pfjets_puppi_chargedHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_chargedHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_chargedHadronE_isLoaded = true;
		}
		return pfjets_puppi_chargedHadronE_;
	}
	const vector<float> &pfjets_puppi_electronE()
	{
		if (not pfjets_puppi_electronE_isLoaded) {
			if (pfjets_puppi_electronE_branch != 0) {
				pfjets_puppi_electronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_electronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_electronE_isLoaded = true;
		}
		return pfjets_puppi_electronE_;
	}
	const vector<float> &pfjets_puppi_hfEmE()
	{
		if (not pfjets_puppi_hfEmE_isLoaded) {
			if (pfjets_puppi_hfEmE_branch != 0) {
				pfjets_puppi_hfEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_hfEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_hfEmE_isLoaded = true;
		}
		return pfjets_puppi_hfEmE_;
	}
	const vector<float> &pfjets_puppi_hfHadronE()
	{
		if (not pfjets_puppi_hfHadronE_isLoaded) {
			if (pfjets_puppi_hfHadronE_branch != 0) {
				pfjets_puppi_hfHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_hfHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_hfHadronE_isLoaded = true;
		}
		return pfjets_puppi_hfHadronE_;
	}
	const vector<float> &pfjets_puppi_mass()
	{
		if (not pfjets_puppi_mass_isLoaded) {
			if (pfjets_puppi_mass_branch != 0) {
				pfjets_puppi_mass_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_mass_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_mass_isLoaded = true;
		}
		return pfjets_puppi_mass_;
	}
	const vector<float> &pfjets_puppi_muonE()
	{
		if (not pfjets_puppi_muonE_isLoaded) {
			if (pfjets_puppi_muonE_branch != 0) {
				pfjets_puppi_muonE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_muonE_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_muonE_isLoaded = true;
		}
		return pfjets_puppi_muonE_;
	}
	const vector<float> &pfjets_puppi_neutralEmE()
	{
		if (not pfjets_puppi_neutralEmE_isLoaded) {
			if (pfjets_puppi_neutralEmE_branch != 0) {
				pfjets_puppi_neutralEmE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_neutralEmE_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_neutralEmE_isLoaded = true;
		}
		return pfjets_puppi_neutralEmE_;
	}
	const vector<float> &pfjets_puppi_neutralHadronE()
	{
		if (not pfjets_puppi_neutralHadronE_isLoaded) {
			if (pfjets_puppi_neutralHadronE_branch != 0) {
				pfjets_puppi_neutralHadronE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_neutralHadronE_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_neutralHadronE_isLoaded = true;
		}
		return pfjets_puppi_neutralHadronE_;
	}
	const vector<float> &pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag()
	{
		if (not pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded) {
			if (pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch != 0) {
				pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_isLoaded = true;
		}
		return pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag_;
	}
	const vector<float> &pfjets_puppi_photonE()
	{
		if (not pfjets_puppi_photonE_isLoaded) {
			if (pfjets_puppi_photonE_branch != 0) {
				pfjets_puppi_photonE_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_photonE_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_photonE_isLoaded = true;
		}
		return pfjets_puppi_photonE_;
	}
	const vector<float> &pfjets_puppi_pileupJetId()
	{
		if (not pfjets_puppi_pileupJetId_isLoaded) {
			if (pfjets_puppi_pileupJetId_branch != 0) {
				pfjets_puppi_pileupJetId_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_pileupJetId_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_pileupJetId_isLoaded = true;
		}
		return pfjets_puppi_pileupJetId_;
	}
	const vector<float> &pfjets_puppi_undoJEC()
	{
		if (not pfjets_puppi_undoJEC_isLoaded) {
			if (pfjets_puppi_undoJEC_branch != 0) {
				pfjets_puppi_undoJEC_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_undoJEC_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_undoJEC_isLoaded = true;
		}
		return pfjets_puppi_undoJEC_;
	}
	const vector<float> &taus_pf_mass()
	{
		if (not taus_pf_mass_isLoaded) {
			if (taus_pf_mass_branch != 0) {
				taus_pf_mass_branch->GetEntry(index);
			} else { 
				printf("branch taus_pf_mass_branch does not exist!\n");
				exit(1);
			}
			taus_pf_mass_isLoaded = true;
		}
		return taus_pf_mass_;
	}
	const vector<float> &photons_chargedHadronIso()
	{
		if (not photons_chargedHadronIso_isLoaded) {
			if (photons_chargedHadronIso_branch != 0) {
				photons_chargedHadronIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_chargedHadronIso_branch does not exist!\n");
				exit(1);
			}
			photons_chargedHadronIso_isLoaded = true;
		}
		return photons_chargedHadronIso_;
	}
	const vector<float> &photons_e1x5()
	{
		if (not photons_e1x5_isLoaded) {
			if (photons_e1x5_branch != 0) {
				photons_e1x5_branch->GetEntry(index);
			} else { 
				printf("branch photons_e1x5_branch does not exist!\n");
				exit(1);
			}
			photons_e1x5_isLoaded = true;
		}
		return photons_e1x5_;
	}
	const vector<float> &photons_e2x5Max()
	{
		if (not photons_e2x5Max_isLoaded) {
			if (photons_e2x5Max_branch != 0) {
				photons_e2x5Max_branch->GetEntry(index);
			} else { 
				printf("branch photons_e2x5Max_branch does not exist!\n");
				exit(1);
			}
			photons_e2x5Max_isLoaded = true;
		}
		return photons_e2x5Max_;
	}
	const vector<float> &photons_e3x3()
	{
		if (not photons_e3x3_isLoaded) {
			if (photons_e3x3_branch != 0) {
				photons_e3x3_branch->GetEntry(index);
			} else { 
				printf("branch photons_e3x3_branch does not exist!\n");
				exit(1);
			}
			photons_e3x3_isLoaded = true;
		}
		return photons_e3x3_;
	}
	const vector<float> &photons_e5x5()
	{
		if (not photons_e5x5_isLoaded) {
			if (photons_e5x5_branch != 0) {
				photons_e5x5_branch->GetEntry(index);
			} else { 
				printf("branch photons_e5x5_branch does not exist!\n");
				exit(1);
			}
			photons_e5x5_isLoaded = true;
		}
		return photons_e5x5_;
	}
	const vector<float> &photons_eSC()
	{
		if (not photons_eSC_isLoaded) {
			if (photons_eSC_branch != 0) {
				photons_eSC_branch->GetEntry(index);
			} else { 
				printf("branch photons_eSC_branch does not exist!\n");
				exit(1);
			}
			photons_eSC_isLoaded = true;
		}
		return photons_eSC_;
	}
	const vector<float> &photons_eSCPresh()
	{
		if (not photons_eSCPresh_isLoaded) {
			if (photons_eSCPresh_branch != 0) {
				photons_eSCPresh_branch->GetEntry(index);
			} else { 
				printf("branch photons_eSCPresh_branch does not exist!\n");
				exit(1);
			}
			photons_eSCPresh_isLoaded = true;
		}
		return photons_eSCPresh_;
	}
	const vector<float> &photons_eSCRaw()
	{
		if (not photons_eSCRaw_isLoaded) {
			if (photons_eSCRaw_branch != 0) {
				photons_eSCRaw_branch->GetEntry(index);
			} else { 
				printf("branch photons_eSCRaw_branch does not exist!\n");
				exit(1);
			}
			photons_eSCRaw_isLoaded = true;
		}
		return photons_eSCRaw_;
	}
	const vector<float> &photons_ecalIso03()
	{
		if (not photons_ecalIso03_isLoaded) {
			if (photons_ecalIso03_branch != 0) {
				photons_ecalIso03_branch->GetEntry(index);
			} else { 
				printf("branch photons_ecalIso03_branch does not exist!\n");
				exit(1);
			}
			photons_ecalIso03_isLoaded = true;
		}
		return photons_ecalIso03_;
	}
	const vector<float> &photons_ecalIso04()
	{
		if (not photons_ecalIso04_isLoaded) {
			if (photons_ecalIso04_branch != 0) {
				photons_ecalIso04_branch->GetEntry(index);
			} else { 
				printf("branch photons_ecalIso04_branch does not exist!\n");
				exit(1);
			}
			photons_ecalIso04_isLoaded = true;
		}
		return photons_ecalIso04_;
	}
	const vector<float> &photons_ecalPFClusterIso()
	{
		if (not photons_ecalPFClusterIso_isLoaded) {
			if (photons_ecalPFClusterIso_branch != 0) {
				photons_ecalPFClusterIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_ecalPFClusterIso_branch does not exist!\n");
				exit(1);
			}
			photons_ecalPFClusterIso_isLoaded = true;
		}
		return photons_ecalPFClusterIso_;
	}
	const vector<float> &photons_etaSC()
	{
		if (not photons_etaSC_isLoaded) {
			if (photons_etaSC_branch != 0) {
				photons_etaSC_branch->GetEntry(index);
			} else { 
				printf("branch photons_etaSC_branch does not exist!\n");
				exit(1);
			}
			photons_etaSC_isLoaded = true;
		}
		return photons_etaSC_;
	}
	const vector<float> &photons_full3x3_e3x3()
	{
		if (not photons_full3x3_e3x3_isLoaded) {
			if (photons_full3x3_e3x3_branch != 0) {
				photons_full3x3_e3x3_branch->GetEntry(index);
			} else { 
				printf("branch photons_full3x3_e3x3_branch does not exist!\n");
				exit(1);
			}
			photons_full3x3_e3x3_isLoaded = true;
		}
		return photons_full3x3_e3x3_;
	}
	const vector<float> &photons_full5x5_e1x5()
	{
		if (not photons_full5x5_e1x5_isLoaded) {
			if (photons_full5x5_e1x5_branch != 0) {
				photons_full5x5_e1x5_branch->GetEntry(index);
			} else { 
				printf("branch photons_full5x5_e1x5_branch does not exist!\n");
				exit(1);
			}
			photons_full5x5_e1x5_isLoaded = true;
		}
		return photons_full5x5_e1x5_;
	}
	const vector<float> &photons_full5x5_e2x5Max()
	{
		if (not photons_full5x5_e2x5Max_isLoaded) {
			if (photons_full5x5_e2x5Max_branch != 0) {
				photons_full5x5_e2x5Max_branch->GetEntry(index);
			} else { 
				printf("branch photons_full5x5_e2x5Max_branch does not exist!\n");
				exit(1);
			}
			photons_full5x5_e2x5Max_isLoaded = true;
		}
		return photons_full5x5_e2x5Max_;
	}
	const vector<float> &photons_full5x5_e5x5()
	{
		if (not photons_full5x5_e5x5_isLoaded) {
			if (photons_full5x5_e5x5_branch != 0) {
				photons_full5x5_e5x5_branch->GetEntry(index);
			} else { 
				printf("branch photons_full5x5_e5x5_branch does not exist!\n");
				exit(1);
			}
			photons_full5x5_e5x5_isLoaded = true;
		}
		return photons_full5x5_e5x5_;
	}
	const vector<float> &photons_full5x5_hOverE()
	{
		if (not photons_full5x5_hOverE_isLoaded) {
			if (photons_full5x5_hOverE_branch != 0) {
				photons_full5x5_hOverE_branch->GetEntry(index);
			} else { 
				printf("branch photons_full5x5_hOverE_branch does not exist!\n");
				exit(1);
			}
			photons_full5x5_hOverE_isLoaded = true;
		}
		return photons_full5x5_hOverE_;
	}
	const vector<float> &photons_full5x5_hOverEtowBC()
	{
		if (not photons_full5x5_hOverEtowBC_isLoaded) {
			if (photons_full5x5_hOverEtowBC_branch != 0) {
				photons_full5x5_hOverEtowBC_branch->GetEntry(index);
			} else { 
				printf("branch photons_full5x5_hOverEtowBC_branch does not exist!\n");
				exit(1);
			}
			photons_full5x5_hOverEtowBC_isLoaded = true;
		}
		return photons_full5x5_hOverEtowBC_;
	}
	const vector<float> &photons_full5x5_r9()
	{
		if (not photons_full5x5_r9_isLoaded) {
			if (photons_full5x5_r9_branch != 0) {
				photons_full5x5_r9_branch->GetEntry(index);
			} else { 
				printf("branch photons_full5x5_r9_branch does not exist!\n");
				exit(1);
			}
			photons_full5x5_r9_isLoaded = true;
		}
		return photons_full5x5_r9_;
	}
	const vector<float> &photons_full5x5_sigmaEtaEta()
	{
		if (not photons_full5x5_sigmaEtaEta_isLoaded) {
			if (photons_full5x5_sigmaEtaEta_branch != 0) {
				photons_full5x5_sigmaEtaEta_branch->GetEntry(index);
			} else { 
				printf("branch photons_full5x5_sigmaEtaEta_branch does not exist!\n");
				exit(1);
			}
			photons_full5x5_sigmaEtaEta_isLoaded = true;
		}
		return photons_full5x5_sigmaEtaEta_;
	}
	const vector<float> &photons_full5x5_sigmaIEtaIEta()
	{
		if (not photons_full5x5_sigmaIEtaIEta_isLoaded) {
			if (photons_full5x5_sigmaIEtaIEta_branch != 0) {
				photons_full5x5_sigmaIEtaIEta_branch->GetEntry(index);
			} else { 
				printf("branch photons_full5x5_sigmaIEtaIEta_branch does not exist!\n");
				exit(1);
			}
			photons_full5x5_sigmaIEtaIEta_isLoaded = true;
		}
		return photons_full5x5_sigmaIEtaIEta_;
	}
	const vector<float> &photons_hOverE()
	{
		if (not photons_hOverE_isLoaded) {
			if (photons_hOverE_branch != 0) {
				photons_hOverE_branch->GetEntry(index);
			} else { 
				printf("branch photons_hOverE_branch does not exist!\n");
				exit(1);
			}
			photons_hOverE_isLoaded = true;
		}
		return photons_hOverE_;
	}
	const vector<float> &photons_hOverEtowBC()
	{
		if (not photons_hOverEtowBC_isLoaded) {
			if (photons_hOverEtowBC_branch != 0) {
				photons_hOverEtowBC_branch->GetEntry(index);
			} else { 
				printf("branch photons_hOverEtowBC_branch does not exist!\n");
				exit(1);
			}
			photons_hOverEtowBC_isLoaded = true;
		}
		return photons_hOverEtowBC_;
	}
	const vector<float> &photons_hcalDepth1TowerSumEtBcConeDR03()
	{
		if (not photons_hcalDepth1TowerSumEtBcConeDR03_isLoaded) {
			if (photons_hcalDepth1TowerSumEtBcConeDR03_branch != 0) {
				photons_hcalDepth1TowerSumEtBcConeDR03_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalDepth1TowerSumEtBcConeDR03_branch does not exist!\n");
				exit(1);
			}
			photons_hcalDepth1TowerSumEtBcConeDR03_isLoaded = true;
		}
		return photons_hcalDepth1TowerSumEtBcConeDR03_;
	}
	const vector<float> &photons_hcalDepth1TowerSumEtBcConeDR04()
	{
		if (not photons_hcalDepth1TowerSumEtBcConeDR04_isLoaded) {
			if (photons_hcalDepth1TowerSumEtBcConeDR04_branch != 0) {
				photons_hcalDepth1TowerSumEtBcConeDR04_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalDepth1TowerSumEtBcConeDR04_branch does not exist!\n");
				exit(1);
			}
			photons_hcalDepth1TowerSumEtBcConeDR04_isLoaded = true;
		}
		return photons_hcalDepth1TowerSumEtBcConeDR04_;
	}
	const vector<float> &photons_hcalDepth2TowerSumEtBcConeDR03()
	{
		if (not photons_hcalDepth2TowerSumEtBcConeDR03_isLoaded) {
			if (photons_hcalDepth2TowerSumEtBcConeDR03_branch != 0) {
				photons_hcalDepth2TowerSumEtBcConeDR03_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalDepth2TowerSumEtBcConeDR03_branch does not exist!\n");
				exit(1);
			}
			photons_hcalDepth2TowerSumEtBcConeDR03_isLoaded = true;
		}
		return photons_hcalDepth2TowerSumEtBcConeDR03_;
	}
	const vector<float> &photons_hcalDepth2TowerSumEtBcConeDR04()
	{
		if (not photons_hcalDepth2TowerSumEtBcConeDR04_isLoaded) {
			if (photons_hcalDepth2TowerSumEtBcConeDR04_branch != 0) {
				photons_hcalDepth2TowerSumEtBcConeDR04_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalDepth2TowerSumEtBcConeDR04_branch does not exist!\n");
				exit(1);
			}
			photons_hcalDepth2TowerSumEtBcConeDR04_isLoaded = true;
		}
		return photons_hcalDepth2TowerSumEtBcConeDR04_;
	}
	const vector<float> &photons_hcalIso03()
	{
		if (not photons_hcalIso03_isLoaded) {
			if (photons_hcalIso03_branch != 0) {
				photons_hcalIso03_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalIso03_branch does not exist!\n");
				exit(1);
			}
			photons_hcalIso03_isLoaded = true;
		}
		return photons_hcalIso03_;
	}
	const vector<float> &photons_hcalIso04()
	{
		if (not photons_hcalIso04_isLoaded) {
			if (photons_hcalIso04_branch != 0) {
				photons_hcalIso04_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalIso04_branch does not exist!\n");
				exit(1);
			}
			photons_hcalIso04_isLoaded = true;
		}
		return photons_hcalIso04_;
	}
	const vector<float> &photons_hcalPFClusterIso()
	{
		if (not photons_hcalPFClusterIso_isLoaded) {
			if (photons_hcalPFClusterIso_branch != 0) {
				photons_hcalPFClusterIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalPFClusterIso_branch does not exist!\n");
				exit(1);
			}
			photons_hcalPFClusterIso_isLoaded = true;
		}
		return photons_hcalPFClusterIso_;
	}
	const vector<float> &photons_hcalTowerSumEtBcConeDR03()
	{
		if (not photons_hcalTowerSumEtBcConeDR03_isLoaded) {
			if (photons_hcalTowerSumEtBcConeDR03_branch != 0) {
				photons_hcalTowerSumEtBcConeDR03_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalTowerSumEtBcConeDR03_branch does not exist!\n");
				exit(1);
			}
			photons_hcalTowerSumEtBcConeDR03_isLoaded = true;
		}
		return photons_hcalTowerSumEtBcConeDR03_;
	}
	const vector<float> &photons_hcalTowerSumEtBcConeDR04()
	{
		if (not photons_hcalTowerSumEtBcConeDR04_isLoaded) {
			if (photons_hcalTowerSumEtBcConeDR04_branch != 0) {
				photons_hcalTowerSumEtBcConeDR04_branch->GetEntry(index);
			} else { 
				printf("branch photons_hcalTowerSumEtBcConeDR04_branch does not exist!\n");
				exit(1);
			}
			photons_hcalTowerSumEtBcConeDR04_isLoaded = true;
		}
		return photons_hcalTowerSumEtBcConeDR04_;
	}
	const vector<float> &photons_mass()
	{
		if (not photons_mass_isLoaded) {
			if (photons_mass_branch != 0) {
				photons_mass_branch->GetEntry(index);
			} else { 
				printf("branch photons_mass_branch does not exist!\n");
				exit(1);
			}
			photons_mass_isLoaded = true;
		}
		return photons_mass_;
	}
	const vector<float> &photons_neutralHadronIso()
	{
		if (not photons_neutralHadronIso_isLoaded) {
			if (photons_neutralHadronIso_branch != 0) {
				photons_neutralHadronIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_neutralHadronIso_branch does not exist!\n");
				exit(1);
			}
			photons_neutralHadronIso_isLoaded = true;
		}
		return photons_neutralHadronIso_;
	}
	const vector<float> &photons_ntkIsoHollow03()
	{
		if (not photons_ntkIsoHollow03_isLoaded) {
			if (photons_ntkIsoHollow03_branch != 0) {
				photons_ntkIsoHollow03_branch->GetEntry(index);
			} else { 
				printf("branch photons_ntkIsoHollow03_branch does not exist!\n");
				exit(1);
			}
			photons_ntkIsoHollow03_isLoaded = true;
		}
		return photons_ntkIsoHollow03_;
	}
	const vector<float> &photons_ntkIsoHollow04()
	{
		if (not photons_ntkIsoHollow04_isLoaded) {
			if (photons_ntkIsoHollow04_branch != 0) {
				photons_ntkIsoHollow04_branch->GetEntry(index);
			} else { 
				printf("branch photons_ntkIsoHollow04_branch does not exist!\n");
				exit(1);
			}
			photons_ntkIsoHollow04_isLoaded = true;
		}
		return photons_ntkIsoHollow04_;
	}
	const vector<float> &photons_ntkIsoSolid03()
	{
		if (not photons_ntkIsoSolid03_isLoaded) {
			if (photons_ntkIsoSolid03_branch != 0) {
				photons_ntkIsoSolid03_branch->GetEntry(index);
			} else { 
				printf("branch photons_ntkIsoSolid03_branch does not exist!\n");
				exit(1);
			}
			photons_ntkIsoSolid03_isLoaded = true;
		}
		return photons_ntkIsoSolid03_;
	}
	const vector<float> &photons_ntkIsoSolid04()
	{
		if (not photons_ntkIsoSolid04_isLoaded) {
			if (photons_ntkIsoSolid04_branch != 0) {
				photons_ntkIsoSolid04_branch->GetEntry(index);
			} else { 
				printf("branch photons_ntkIsoSolid04_branch does not exist!\n");
				exit(1);
			}
			photons_ntkIsoSolid04_isLoaded = true;
		}
		return photons_ntkIsoSolid04_;
	}
	const vector<float> &photons_phiSC()
	{
		if (not photons_phiSC_isLoaded) {
			if (photons_phiSC_branch != 0) {
				photons_phiSC_branch->GetEntry(index);
			} else { 
				printf("branch photons_phiSC_branch does not exist!\n");
				exit(1);
			}
			photons_phiSC_isLoaded = true;
		}
		return photons_phiSC_;
	}
	const vector<float> &photons_photonIso()
	{
		if (not photons_photonIso_isLoaded) {
			if (photons_photonIso_branch != 0) {
				photons_photonIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_photonIso_branch does not exist!\n");
				exit(1);
			}
			photons_photonIso_isLoaded = true;
		}
		return photons_photonIso_;
	}
	const vector<float> &photons_recoChargedHadronIso()
	{
		if (not photons_recoChargedHadronIso_isLoaded) {
			if (photons_recoChargedHadronIso_branch != 0) {
				photons_recoChargedHadronIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_recoChargedHadronIso_branch does not exist!\n");
				exit(1);
			}
			photons_recoChargedHadronIso_isLoaded = true;
		}
		return photons_recoChargedHadronIso_;
	}
	const vector<float> &photons_recoNeutralHadronIso()
	{
		if (not photons_recoNeutralHadronIso_isLoaded) {
			if (photons_recoNeutralHadronIso_branch != 0) {
				photons_recoNeutralHadronIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_recoNeutralHadronIso_branch does not exist!\n");
				exit(1);
			}
			photons_recoNeutralHadronIso_isLoaded = true;
		}
		return photons_recoNeutralHadronIso_;
	}
	const vector<float> &photons_recoPhotonIso()
	{
		if (not photons_recoPhotonIso_isLoaded) {
			if (photons_recoPhotonIso_branch != 0) {
				photons_recoPhotonIso_branch->GetEntry(index);
			} else { 
				printf("branch photons_recoPhotonIso_branch does not exist!\n");
				exit(1);
			}
			photons_recoPhotonIso_isLoaded = true;
		}
		return photons_recoPhotonIso_;
	}
	const vector<float> &photons_sigmaEtaEta()
	{
		if (not photons_sigmaEtaEta_isLoaded) {
			if (photons_sigmaEtaEta_branch != 0) {
				photons_sigmaEtaEta_branch->GetEntry(index);
			} else { 
				printf("branch photons_sigmaEtaEta_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaEtaEta_isLoaded = true;
		}
		return photons_sigmaEtaEta_;
	}
	const vector<float> &photons_sigmaIEtaIEta()
	{
		if (not photons_sigmaIEtaIEta_isLoaded) {
			if (photons_sigmaIEtaIEta_branch != 0) {
				photons_sigmaIEtaIEta_branch->GetEntry(index);
			} else { 
				printf("branch photons_sigmaIEtaIEta_branch does not exist!\n");
				exit(1);
			}
			photons_sigmaIEtaIEta_isLoaded = true;
		}
		return photons_sigmaIEtaIEta_;
	}
	const vector<float> &photons_tkIsoHollow03()
	{
		if (not photons_tkIsoHollow03_isLoaded) {
			if (photons_tkIsoHollow03_branch != 0) {
				photons_tkIsoHollow03_branch->GetEntry(index);
			} else { 
				printf("branch photons_tkIsoHollow03_branch does not exist!\n");
				exit(1);
			}
			photons_tkIsoHollow03_isLoaded = true;
		}
		return photons_tkIsoHollow03_;
	}
	const vector<float> &photons_tkIsoHollow04()
	{
		if (not photons_tkIsoHollow04_isLoaded) {
			if (photons_tkIsoHollow04_branch != 0) {
				photons_tkIsoHollow04_branch->GetEntry(index);
			} else { 
				printf("branch photons_tkIsoHollow04_branch does not exist!\n");
				exit(1);
			}
			photons_tkIsoHollow04_isLoaded = true;
		}
		return photons_tkIsoHollow04_;
	}
	const vector<float> &photons_tkIsoSolid03()
	{
		if (not photons_tkIsoSolid03_isLoaded) {
			if (photons_tkIsoSolid03_branch != 0) {
				photons_tkIsoSolid03_branch->GetEntry(index);
			} else { 
				printf("branch photons_tkIsoSolid03_branch does not exist!\n");
				exit(1);
			}
			photons_tkIsoSolid03_isLoaded = true;
		}
		return photons_tkIsoSolid03_;
	}
	const vector<float> &photons_tkIsoSolid04()
	{
		if (not photons_tkIsoSolid04_isLoaded) {
			if (photons_tkIsoSolid04_branch != 0) {
				photons_tkIsoSolid04_branch->GetEntry(index);
			} else { 
				printf("branch photons_tkIsoSolid04_branch does not exist!\n");
				exit(1);
			}
			photons_tkIsoSolid04_isLoaded = true;
		}
		return photons_tkIsoSolid04_;
	}
	const vector<float> &puInfo_trueNumInteractions()
	{
		if (not puInfo_trueNumInteractions_isLoaded) {
			if (puInfo_trueNumInteractions_branch != 0) {
				puInfo_trueNumInteractions_branch->GetEntry(index);
			} else { 
				printf("branch puInfo_trueNumInteractions_branch does not exist!\n");
				exit(1);
			}
			puInfo_trueNumInteractions_isLoaded = true;
		}
		return puInfo_trueNumInteractions_;
	}
	const vector<float> &convs_chi2()
	{
		if (not convs_chi2_isLoaded) {
			if (convs_chi2_branch != 0) {
				convs_chi2_branch->GetEntry(index);
			} else { 
				printf("branch convs_chi2_branch does not exist!\n");
				exit(1);
			}
			convs_chi2_isLoaded = true;
		}
		return convs_chi2_;
	}
	const vector<float> &convs_dl()
	{
		if (not convs_dl_isLoaded) {
			if (convs_dl_branch != 0) {
				convs_dl_branch->GetEntry(index);
			} else { 
				printf("branch convs_dl_branch does not exist!\n");
				exit(1);
			}
			convs_dl_isLoaded = true;
		}
		return convs_dl_;
	}
	const vector<float> &convs_ndof()
	{
		if (not convs_ndof_isLoaded) {
			if (convs_ndof_branch != 0) {
				convs_ndof_branch->GetEntry(index);
			} else { 
				printf("branch convs_ndof_branch does not exist!\n");
				exit(1);
			}
			convs_ndof_isLoaded = true;
		}
		return convs_ndof_;
	}
	const vector<float> &sparm_values()
	{
		if (not sparm_values_isLoaded) {
			if (sparm_values_branch != 0) {
				sparm_values_branch->GetEntry(index);
			} else { 
				printf("branch sparm_values_branch does not exist!\n");
				exit(1);
			}
			sparm_values_isLoaded = true;
		}
		return sparm_values_;
	}
	const vector<float> &svs_anglePV()
	{
		if (not svs_anglePV_isLoaded) {
			if (svs_anglePV_branch != 0) {
				svs_anglePV_branch->GetEntry(index);
			} else { 
				printf("branch svs_anglePV_branch does not exist!\n");
				exit(1);
			}
			svs_anglePV_isLoaded = true;
		}
		return svs_anglePV_;
	}
	const vector<float> &svs_chi2()
	{
		if (not svs_chi2_isLoaded) {
			if (svs_chi2_branch != 0) {
				svs_chi2_branch->GetEntry(index);
			} else { 
				printf("branch svs_chi2_branch does not exist!\n");
				exit(1);
			}
			svs_chi2_isLoaded = true;
		}
		return svs_chi2_;
	}
	const vector<float> &svs_dist3Dsig()
	{
		if (not svs_dist3Dsig_isLoaded) {
			if (svs_dist3Dsig_branch != 0) {
				svs_dist3Dsig_branch->GetEntry(index);
			} else { 
				printf("branch svs_dist3Dsig_branch does not exist!\n");
				exit(1);
			}
			svs_dist3Dsig_isLoaded = true;
		}
		return svs_dist3Dsig_;
	}
	const vector<float> &svs_dist3Dval()
	{
		if (not svs_dist3Dval_isLoaded) {
			if (svs_dist3Dval_branch != 0) {
				svs_dist3Dval_branch->GetEntry(index);
			} else { 
				printf("branch svs_dist3Dval_branch does not exist!\n");
				exit(1);
			}
			svs_dist3Dval_isLoaded = true;
		}
		return svs_dist3Dval_;
	}
	const vector<float> &svs_distXYsig()
	{
		if (not svs_distXYsig_isLoaded) {
			if (svs_distXYsig_branch != 0) {
				svs_distXYsig_branch->GetEntry(index);
			} else { 
				printf("branch svs_distXYsig_branch does not exist!\n");
				exit(1);
			}
			svs_distXYsig_isLoaded = true;
		}
		return svs_distXYsig_;
	}
	const vector<float> &svs_distXYval()
	{
		if (not svs_distXYval_isLoaded) {
			if (svs_distXYval_branch != 0) {
				svs_distXYval_branch->GetEntry(index);
			} else { 
				printf("branch svs_distXYval_branch does not exist!\n");
				exit(1);
			}
			svs_distXYval_isLoaded = true;
		}
		return svs_distXYval_;
	}
	const vector<float> &svs_ndof()
	{
		if (not svs_ndof_isLoaded) {
			if (svs_ndof_branch != 0) {
				svs_ndof_branch->GetEntry(index);
			} else { 
				printf("branch svs_ndof_branch does not exist!\n");
				exit(1);
			}
			svs_ndof_isLoaded = true;
		}
		return svs_ndof_;
	}
	const vector<float> &svs_prob()
	{
		if (not svs_prob_isLoaded) {
			if (svs_prob_branch != 0) {
				svs_prob_branch->GetEntry(index);
			} else { 
				printf("branch svs_prob_branch does not exist!\n");
				exit(1);
			}
			svs_prob_isLoaded = true;
		}
		return svs_prob_;
	}
	const vector<float> &svs_xError()
	{
		if (not svs_xError_isLoaded) {
			if (svs_xError_branch != 0) {
				svs_xError_branch->GetEntry(index);
			} else { 
				printf("branch svs_xError_branch does not exist!\n");
				exit(1);
			}
			svs_xError_isLoaded = true;
		}
		return svs_xError_;
	}
	const vector<float> &svs_yError()
	{
		if (not svs_yError_isLoaded) {
			if (svs_yError_branch != 0) {
				svs_yError_branch->GetEntry(index);
			} else { 
				printf("branch svs_yError_branch does not exist!\n");
				exit(1);
			}
			svs_yError_isLoaded = true;
		}
		return svs_yError_;
	}
	const vector<float> &svs_zError()
	{
		if (not svs_zError_isLoaded) {
			if (svs_zError_branch != 0) {
				svs_zError_branch->GetEntry(index);
			} else { 
				printf("branch svs_zError_branch does not exist!\n");
				exit(1);
			}
			svs_zError_isLoaded = true;
		}
		return svs_zError_;
	}
	const vector<float> &ak8jets_area()
	{
		if (not ak8jets_area_isLoaded) {
			if (ak8jets_area_branch != 0) {
				ak8jets_area_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_area_branch does not exist!\n");
				exit(1);
			}
			ak8jets_area_isLoaded = true;
		}
		return ak8jets_area_;
	}
	const vector<float> &ak8jets_filteredMass()
	{
		if (not ak8jets_filteredMass_isLoaded) {
			if (ak8jets_filteredMass_branch != 0) {
				ak8jets_filteredMass_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_filteredMass_branch does not exist!\n");
				exit(1);
			}
			ak8jets_filteredMass_isLoaded = true;
		}
		return ak8jets_filteredMass_;
	}
	const vector<float> &ak8jets_mass()
	{
		if (not ak8jets_mass_isLoaded) {
			if (ak8jets_mass_branch != 0) {
				ak8jets_mass_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_mass_branch does not exist!\n");
				exit(1);
			}
			ak8jets_mass_isLoaded = true;
		}
		return ak8jets_mass_;
	}
	const vector<float> &ak8jets_minMass()
	{
		if (not ak8jets_minMass_isLoaded) {
			if (ak8jets_minMass_branch != 0) {
				ak8jets_minMass_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_minMass_branch does not exist!\n");
				exit(1);
			}
			ak8jets_minMass_isLoaded = true;
		}
		return ak8jets_minMass_;
	}
	const vector<float> &ak8jets_nJettinessTau1()
	{
		if (not ak8jets_nJettinessTau1_isLoaded) {
			if (ak8jets_nJettinessTau1_branch != 0) {
				ak8jets_nJettinessTau1_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_nJettinessTau1_branch does not exist!\n");
				exit(1);
			}
			ak8jets_nJettinessTau1_isLoaded = true;
		}
		return ak8jets_nJettinessTau1_;
	}
	const vector<float> &ak8jets_nJettinessTau2()
	{
		if (not ak8jets_nJettinessTau2_isLoaded) {
			if (ak8jets_nJettinessTau2_branch != 0) {
				ak8jets_nJettinessTau2_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_nJettinessTau2_branch does not exist!\n");
				exit(1);
			}
			ak8jets_nJettinessTau2_isLoaded = true;
		}
		return ak8jets_nJettinessTau2_;
	}
	const vector<float> &ak8jets_nJettinessTau3()
	{
		if (not ak8jets_nJettinessTau3_isLoaded) {
			if (ak8jets_nJettinessTau3_branch != 0) {
				ak8jets_nJettinessTau3_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_nJettinessTau3_branch does not exist!\n");
				exit(1);
			}
			ak8jets_nJettinessTau3_isLoaded = true;
		}
		return ak8jets_nJettinessTau3_;
	}
	const vector<float> &ak8jets_prunedMass()
	{
		if (not ak8jets_prunedMass_isLoaded) {
			if (ak8jets_prunedMass_branch != 0) {
				ak8jets_prunedMass_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_prunedMass_branch does not exist!\n");
				exit(1);
			}
			ak8jets_prunedMass_isLoaded = true;
		}
		return ak8jets_prunedMass_;
	}
	const vector<float> &ak8jets_softdropMass()
	{
		if (not ak8jets_softdropMass_isLoaded) {
			if (ak8jets_softdropMass_branch != 0) {
				ak8jets_softdropMass_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_softdropMass_branch does not exist!\n");
				exit(1);
			}
			ak8jets_softdropMass_isLoaded = true;
		}
		return ak8jets_softdropMass_;
	}
	const vector<float> &ak8jets_topMass()
	{
		if (not ak8jets_topMass_isLoaded) {
			if (ak8jets_topMass_branch != 0) {
				ak8jets_topMass_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_topMass_branch does not exist!\n");
				exit(1);
			}
			ak8jets_topMass_isLoaded = true;
		}
		return ak8jets_topMass_;
	}
	const vector<float> &ak8jets_trimmedMass()
	{
		if (not ak8jets_trimmedMass_isLoaded) {
			if (ak8jets_trimmedMass_branch != 0) {
				ak8jets_trimmedMass_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_trimmedMass_branch does not exist!\n");
				exit(1);
			}
			ak8jets_trimmedMass_isLoaded = true;
		}
		return ak8jets_trimmedMass_;
	}
	const vector<float> &ak8jets_undoJEC()
	{
		if (not ak8jets_undoJEC_isLoaded) {
			if (ak8jets_undoJEC_branch != 0) {
				ak8jets_undoJEC_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_undoJEC_branch does not exist!\n");
				exit(1);
			}
			ak8jets_undoJEC_isLoaded = true;
		}
		return ak8jets_undoJEC_;
	}
	const vector<float> &vtxs_chi2()
	{
		if (not vtxs_chi2_isLoaded) {
			if (vtxs_chi2_branch != 0) {
				vtxs_chi2_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_chi2_branch does not exist!\n");
				exit(1);
			}
			vtxs_chi2_isLoaded = true;
		}
		return vtxs_chi2_;
	}
	const vector<float> &vtxs_ndof()
	{
		if (not vtxs_ndof_isLoaded) {
			if (vtxs_ndof_branch != 0) {
				vtxs_ndof_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_ndof_branch does not exist!\n");
				exit(1);
			}
			vtxs_ndof_isLoaded = true;
		}
		return vtxs_ndof_;
	}
	const vector<float> &vtxs_score()
	{
		if (not vtxs_score_isLoaded) {
			if (vtxs_score_branch != 0) {
				vtxs_score_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_score_branch does not exist!\n");
				exit(1);
			}
			vtxs_score_isLoaded = true;
		}
		return vtxs_score_;
	}
	const vector<float> &vtxs_xError()
	{
		if (not vtxs_xError_isLoaded) {
			if (vtxs_xError_branch != 0) {
				vtxs_xError_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_xError_branch does not exist!\n");
				exit(1);
			}
			vtxs_xError_isLoaded = true;
		}
		return vtxs_xError_;
	}
	const vector<float> &vtxs_yError()
	{
		if (not vtxs_yError_isLoaded) {
			if (vtxs_yError_branch != 0) {
				vtxs_yError_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_yError_branch does not exist!\n");
				exit(1);
			}
			vtxs_yError_isLoaded = true;
		}
		return vtxs_yError_;
	}
	const vector<float> &vtxs_zError()
	{
		if (not vtxs_zError_isLoaded) {
			if (vtxs_zError_branch != 0) {
				vtxs_zError_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_zError_branch does not exist!\n");
				exit(1);
			}
			vtxs_zError_isLoaded = true;
		}
		return vtxs_zError_;
	}
	const vector<vector<float> > &pfjets_nonCHS_bDiscriminators()
	{
		if (not pfjets_nonCHS_bDiscriminators_isLoaded) {
			if (pfjets_nonCHS_bDiscriminators_branch != 0) {
				pfjets_nonCHS_bDiscriminators_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_bDiscriminators_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_bDiscriminators_isLoaded = true;
		}
		return pfjets_nonCHS_bDiscriminators_;
	}
	const vector<vector<float> > &mus_stationShowerDeltaR()
	{
		if (not mus_stationShowerDeltaR_isLoaded) {
			if (mus_stationShowerDeltaR_branch != 0) {
				mus_stationShowerDeltaR_branch->GetEntry(index);
			} else { 
				printf("branch mus_stationShowerDeltaR_branch does not exist!\n");
				exit(1);
			}
			mus_stationShowerDeltaR_isLoaded = true;
		}
		return mus_stationShowerDeltaR_;
	}
	const vector<vector<float> > &mus_stationShowerSizeT()
	{
		if (not mus_stationShowerSizeT_isLoaded) {
			if (mus_stationShowerSizeT_branch != 0) {
				mus_stationShowerSizeT_branch->GetEntry(index);
			} else { 
				printf("branch mus_stationShowerSizeT_branch does not exist!\n");
				exit(1);
			}
			mus_stationShowerSizeT_isLoaded = true;
		}
		return mus_stationShowerSizeT_;
	}
	const vector<vector<float> > &pfjets_bDiscriminators()
	{
		if (not pfjets_bDiscriminators_isLoaded) {
			if (pfjets_bDiscriminators_branch != 0) {
				pfjets_bDiscriminators_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_bDiscriminators_branch does not exist!\n");
				exit(1);
			}
			pfjets_bDiscriminators_isLoaded = true;
		}
		return pfjets_bDiscriminators_;
	}
	const vector<vector<float> > &pfjets_puppi_bDiscriminators()
	{
		if (not pfjets_puppi_bDiscriminators_isLoaded) {
			if (pfjets_puppi_bDiscriminators_branch != 0) {
				pfjets_puppi_bDiscriminators_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_bDiscriminators_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_bDiscriminators_isLoaded = true;
		}
		return pfjets_puppi_bDiscriminators_;
	}
	const vector<vector<float> > &taus_pf_IDs()
	{
		if (not taus_pf_IDs_isLoaded) {
			if (taus_pf_IDs_branch != 0) {
				taus_pf_IDs_branch->GetEntry(index);
			} else { 
				printf("branch taus_pf_IDs_branch does not exist!\n");
				exit(1);
			}
			taus_pf_IDs_isLoaded = true;
		}
		return taus_pf_IDs_;
	}
	const vector<vector<float> > &puInfo_instLumi()
	{
		if (not puInfo_instLumi_isLoaded) {
			if (puInfo_instLumi_branch != 0) {
				puInfo_instLumi_branch->GetEntry(index);
			} else { 
				printf("branch puInfo_instLumi_branch does not exist!\n");
				exit(1);
			}
			puInfo_instLumi_isLoaded = true;
		}
		return puInfo_instLumi_;
	}
	const vector<vector<float> > &vtxs_covMatrix()
	{
		if (not vtxs_covMatrix_isLoaded) {
			if (vtxs_covMatrix_branch != 0) {
				vtxs_covMatrix_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_covMatrix_branch does not exist!\n");
				exit(1);
			}
			vtxs_covMatrix_isLoaded = true;
		}
		return vtxs_covMatrix_;
	}
	int &evt_bsType()
	{
		if (not evt_bsType_isLoaded) {
			if (evt_bsType_branch != 0) {
				evt_bsType_branch->GetEntry(index);
			} else { 
				printf("branch evt_bsType_branch does not exist!\n");
				exit(1);
			}
			evt_bsType_isLoaded = true;
		}
		return evt_bsType_;
	}
	int &evt_bunchCrossing()
	{
		if (not evt_bunchCrossing_isLoaded) {
			if (evt_bunchCrossing_branch != 0) {
				evt_bunchCrossing_branch->GetEntry(index);
			} else { 
				printf("branch evt_bunchCrossing_branch does not exist!\n");
				exit(1);
			}
			evt_bunchCrossing_isLoaded = true;
		}
		return evt_bunchCrossing_;
	}
	int &evt_experimentType()
	{
		if (not evt_experimentType_isLoaded) {
			if (evt_experimentType_branch != 0) {
				evt_experimentType_branch->GetEntry(index);
			} else { 
				printf("branch evt_experimentType_branch does not exist!\n");
				exit(1);
			}
			evt_experimentType_isLoaded = true;
		}
		return evt_experimentType_;
	}
	int &evt_isRealData()
	{
		if (not evt_isRealData_isLoaded) {
			if (evt_isRealData_branch != 0) {
				evt_isRealData_branch->GetEntry(index);
			} else { 
				printf("branch evt_isRealData_branch does not exist!\n");
				exit(1);
			}
			evt_isRealData_isLoaded = true;
		}
		return evt_isRealData_;
	}
	int &evt_orbitNumber()
	{
		if (not evt_orbitNumber_isLoaded) {
			if (evt_orbitNumber_branch != 0) {
				evt_orbitNumber_branch->GetEntry(index);
			} else { 
				printf("branch evt_orbitNumber_branch does not exist!\n");
				exit(1);
			}
			evt_orbitNumber_isLoaded = true;
		}
		return evt_orbitNumber_;
	}
	int &evt_storeNumber()
	{
		if (not evt_storeNumber_isLoaded) {
			if (evt_storeNumber_branch != 0) {
				evt_storeNumber_branch->GetEntry(index);
			} else { 
				printf("branch evt_storeNumber_branch does not exist!\n");
				exit(1);
			}
			evt_storeNumber_isLoaded = true;
		}
		return evt_storeNumber_;
	}
	int &hcalnoise_GetRecHitCount()
	{
		if (not hcalnoise_GetRecHitCount_isLoaded) {
			if (hcalnoise_GetRecHitCount_branch != 0) {
				hcalnoise_GetRecHitCount_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_GetRecHitCount_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_GetRecHitCount_isLoaded = true;
		}
		return hcalnoise_GetRecHitCount_;
	}
	int &hcalnoise_GetRecHitCount15()
	{
		if (not hcalnoise_GetRecHitCount15_isLoaded) {
			if (hcalnoise_GetRecHitCount15_branch != 0) {
				hcalnoise_GetRecHitCount15_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_GetRecHitCount15_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_GetRecHitCount15_isLoaded = true;
		}
		return hcalnoise_GetRecHitCount15_;
	}
	int &hcalnoise_maxHPDHits()
	{
		if (not hcalnoise_maxHPDHits_isLoaded) {
			if (hcalnoise_maxHPDHits_branch != 0) {
				hcalnoise_maxHPDHits_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxHPDHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxHPDHits_isLoaded = true;
		}
		return hcalnoise_maxHPDHits_;
	}
	int &hcalnoise_maxHPDNoOtherHits()
	{
		if (not hcalnoise_maxHPDNoOtherHits_isLoaded) {
			if (hcalnoise_maxHPDNoOtherHits_branch != 0) {
				hcalnoise_maxHPDNoOtherHits_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxHPDNoOtherHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxHPDNoOtherHits_isLoaded = true;
		}
		return hcalnoise_maxHPDNoOtherHits_;
	}
	int &hcalnoise_maxRBXHits()
	{
		if (not hcalnoise_maxRBXHits_isLoaded) {
			if (hcalnoise_maxRBXHits_branch != 0) {
				hcalnoise_maxRBXHits_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxRBXHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxRBXHits_isLoaded = true;
		}
		return hcalnoise_maxRBXHits_;
	}
	int &hcalnoise_maxZeros()
	{
		if (not hcalnoise_maxZeros_isLoaded) {
			if (hcalnoise_maxZeros_branch != 0) {
				hcalnoise_maxZeros_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_maxZeros_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_maxZeros_isLoaded = true;
		}
		return hcalnoise_maxZeros_;
	}
	int &hcalnoise_noiseFilterStatus()
	{
		if (not hcalnoise_noiseFilterStatus_isLoaded) {
			if (hcalnoise_noiseFilterStatus_branch != 0) {
				hcalnoise_noiseFilterStatus_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_noiseFilterStatus_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_noiseFilterStatus_isLoaded = true;
		}
		return hcalnoise_noiseFilterStatus_;
	}
	int &hcalnoise_noiseType()
	{
		if (not hcalnoise_noiseType_isLoaded) {
			if (hcalnoise_noiseType_branch != 0) {
				hcalnoise_noiseType_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_noiseType_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_noiseType_isLoaded = true;
		}
		return hcalnoise_noiseType_;
	}
	int &hcalnoise_num10GeVHits()
	{
		if (not hcalnoise_num10GeVHits_isLoaded) {
			if (hcalnoise_num10GeVHits_branch != 0) {
				hcalnoise_num10GeVHits_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_num10GeVHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_num10GeVHits_isLoaded = true;
		}
		return hcalnoise_num10GeVHits_;
	}
	int &hcalnoise_num25GeVHits()
	{
		if (not hcalnoise_num25GeVHits_isLoaded) {
			if (hcalnoise_num25GeVHits_branch != 0) {
				hcalnoise_num25GeVHits_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_num25GeVHits_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_num25GeVHits_isLoaded = true;
		}
		return hcalnoise_num25GeVHits_;
	}
	int &hcalnoise_numFlatNoiseChannels()
	{
		if (not hcalnoise_numFlatNoiseChannels_isLoaded) {
			if (hcalnoise_numFlatNoiseChannels_branch != 0) {
				hcalnoise_numFlatNoiseChannels_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_numFlatNoiseChannels_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_numFlatNoiseChannels_isLoaded = true;
		}
		return hcalnoise_numFlatNoiseChannels_;
	}
	int &hcalnoise_numIsolatedNoiseChannels()
	{
		if (not hcalnoise_numIsolatedNoiseChannels_isLoaded) {
			if (hcalnoise_numIsolatedNoiseChannels_branch != 0) {
				hcalnoise_numIsolatedNoiseChannels_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_numIsolatedNoiseChannels_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_numIsolatedNoiseChannels_isLoaded = true;
		}
		return hcalnoise_numIsolatedNoiseChannels_;
	}
	int &hcalnoise_numProblematicRBXs()
	{
		if (not hcalnoise_numProblematicRBXs_isLoaded) {
			if (hcalnoise_numProblematicRBXs_branch != 0) {
				hcalnoise_numProblematicRBXs_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_numProblematicRBXs_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_numProblematicRBXs_isLoaded = true;
		}
		return hcalnoise_numProblematicRBXs_;
	}
	int &hcalnoise_numSpikeNoiseChannels()
	{
		if (not hcalnoise_numSpikeNoiseChannels_isLoaded) {
			if (hcalnoise_numSpikeNoiseChannels_branch != 0) {
				hcalnoise_numSpikeNoiseChannels_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_numSpikeNoiseChannels_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_numSpikeNoiseChannels_isLoaded = true;
		}
		return hcalnoise_numSpikeNoiseChannels_;
	}
	int &hcalnoise_numTS4TS5NoiseChannels()
	{
		if (not hcalnoise_numTS4TS5NoiseChannels_isLoaded) {
			if (hcalnoise_numTS4TS5NoiseChannels_branch != 0) {
				hcalnoise_numTS4TS5NoiseChannels_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_numTS4TS5NoiseChannels_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_numTS4TS5NoiseChannels_isLoaded = true;
		}
		return hcalnoise_numTS4TS5NoiseChannels_;
	}
	int &hcalnoise_numTriangleNoiseChannels()
	{
		if (not hcalnoise_numTriangleNoiseChannels_isLoaded) {
			if (hcalnoise_numTriangleNoiseChannels_branch != 0) {
				hcalnoise_numTriangleNoiseChannels_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_numTriangleNoiseChannels_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_numTriangleNoiseChannels_isLoaded = true;
		}
		return hcalnoise_numTriangleNoiseChannels_;
	}
	int &hcalnoise_passHighLevelNoiseFilter()
	{
		if (not hcalnoise_passHighLevelNoiseFilter_isLoaded) {
			if (hcalnoise_passHighLevelNoiseFilter_branch != 0) {
				hcalnoise_passHighLevelNoiseFilter_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_passHighLevelNoiseFilter_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_passHighLevelNoiseFilter_isLoaded = true;
		}
		return hcalnoise_passHighLevelNoiseFilter_;
	}
	int &hcalnoise_passLooseNoiseFilter()
	{
		if (not hcalnoise_passLooseNoiseFilter_isLoaded) {
			if (hcalnoise_passLooseNoiseFilter_branch != 0) {
				hcalnoise_passLooseNoiseFilter_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_passLooseNoiseFilter_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_passLooseNoiseFilter_isLoaded = true;
		}
		return hcalnoise_passLooseNoiseFilter_;
	}
	int &hcalnoise_passTightNoiseFilter()
	{
		if (not hcalnoise_passTightNoiseFilter_isLoaded) {
			if (hcalnoise_passTightNoiseFilter_branch != 0) {
				hcalnoise_passTightNoiseFilter_branch->GetEntry(index);
			} else { 
				printf("branch hcalnoise_passTightNoiseFilter_branch does not exist!\n");
				exit(1);
			}
			hcalnoise_passTightNoiseFilter_isLoaded = true;
		}
		return hcalnoise_passTightNoiseFilter_;
	}
	int &pdfinfo_id1()
	{
		if (not pdfinfo_id1_isLoaded) {
			if (pdfinfo_id1_branch != 0) {
				pdfinfo_id1_branch->GetEntry(index);
			} else { 
				printf("branch pdfinfo_id1_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_id1_isLoaded = true;
		}
		return pdfinfo_id1_;
	}
	int &pdfinfo_id2()
	{
		if (not pdfinfo_id2_isLoaded) {
			if (pdfinfo_id2_branch != 0) {
				pdfinfo_id2_branch->GetEntry(index);
			} else { 
				printf("branch pdfinfo_id2_branch does not exist!\n");
				exit(1);
			}
			pdfinfo_id2_isLoaded = true;
		}
		return pdfinfo_id2_;
	}
	int &sparm_subProcessId()
	{
		if (not sparm_subProcessId_isLoaded) {
			if (sparm_subProcessId_branch != 0) {
				sparm_subProcessId_branch->GetEntry(index);
			} else { 
				printf("branch sparm_subProcessId_branch does not exist!\n");
				exit(1);
			}
			sparm_subProcessId_isLoaded = true;
		}
		return sparm_subProcessId_;
	}
	const vector<int> &pfjets_nonCHS_chargedHadronMultiplicity()
	{
		if (not pfjets_nonCHS_chargedHadronMultiplicity_isLoaded) {
			if (pfjets_nonCHS_chargedHadronMultiplicity_branch != 0) {
				pfjets_nonCHS_chargedHadronMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_chargedHadronMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_chargedHadronMultiplicity_isLoaded = true;
		}
		return pfjets_nonCHS_chargedHadronMultiplicity_;
	}
	const vector<int> &pfjets_nonCHS_chargedMultiplicity()
	{
		if (not pfjets_nonCHS_chargedMultiplicity_isLoaded) {
			if (pfjets_nonCHS_chargedMultiplicity_branch != 0) {
				pfjets_nonCHS_chargedMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_chargedMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_chargedMultiplicity_isLoaded = true;
		}
		return pfjets_nonCHS_chargedMultiplicity_;
	}
	const vector<int> &pfjets_nonCHS_electronMultiplicity()
	{
		if (not pfjets_nonCHS_electronMultiplicity_isLoaded) {
			if (pfjets_nonCHS_electronMultiplicity_branch != 0) {
				pfjets_nonCHS_electronMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_electronMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_electronMultiplicity_isLoaded = true;
		}
		return pfjets_nonCHS_electronMultiplicity_;
	}
	const vector<int> &pfjets_nonCHS_muonMultiplicity()
	{
		if (not pfjets_nonCHS_muonMultiplicity_isLoaded) {
			if (pfjets_nonCHS_muonMultiplicity_branch != 0) {
				pfjets_nonCHS_muonMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_muonMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_muonMultiplicity_isLoaded = true;
		}
		return pfjets_nonCHS_muonMultiplicity_;
	}
	const vector<int> &pfjets_nonCHS_neutralHadronMultiplicity()
	{
		if (not pfjets_nonCHS_neutralHadronMultiplicity_isLoaded) {
			if (pfjets_nonCHS_neutralHadronMultiplicity_branch != 0) {
				pfjets_nonCHS_neutralHadronMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_neutralHadronMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_neutralHadronMultiplicity_isLoaded = true;
		}
		return pfjets_nonCHS_neutralHadronMultiplicity_;
	}
	const vector<int> &pfjets_nonCHS_neutralMultiplicity()
	{
		if (not pfjets_nonCHS_neutralMultiplicity_isLoaded) {
			if (pfjets_nonCHS_neutralMultiplicity_branch != 0) {
				pfjets_nonCHS_neutralMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_neutralMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_neutralMultiplicity_isLoaded = true;
		}
		return pfjets_nonCHS_neutralMultiplicity_;
	}
	const vector<int> &pfjets_nonCHS_partonFlavour()
	{
		if (not pfjets_nonCHS_partonFlavour_isLoaded) {
			if (pfjets_nonCHS_partonFlavour_branch != 0) {
				pfjets_nonCHS_partonFlavour_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_partonFlavour_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_partonFlavour_isLoaded = true;
		}
		return pfjets_nonCHS_partonFlavour_;
	}
	const vector<int> &pfjets_nonCHS_photonMultiplicity()
	{
		if (not pfjets_nonCHS_photonMultiplicity_isLoaded) {
			if (pfjets_nonCHS_photonMultiplicity_branch != 0) {
				pfjets_nonCHS_photonMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_photonMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_photonMultiplicity_isLoaded = true;
		}
		return pfjets_nonCHS_photonMultiplicity_;
	}
	const vector<int> &ak8jets_mc_id()
	{
		if (not ak8jets_mc_id_isLoaded) {
			if (ak8jets_mc_id_branch != 0) {
				ak8jets_mc_id_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_mc_id_branch does not exist!\n");
				exit(1);
			}
			ak8jets_mc_id_isLoaded = true;
		}
		return ak8jets_mc_id_;
	}
	const vector<int> &els_mc3_id()
	{
		if (not els_mc3_id_isLoaded) {
			if (els_mc3_id_branch != 0) {
				els_mc3_id_branch->GetEntry(index);
			} else { 
				printf("branch els_mc3_id_branch does not exist!\n");
				exit(1);
			}
			els_mc3_id_isLoaded = true;
		}
		return els_mc3_id_;
	}
	const vector<int> &els_mc3idx()
	{
		if (not els_mc3idx_isLoaded) {
			if (els_mc3idx_branch != 0) {
				els_mc3idx_branch->GetEntry(index);
			} else { 
				printf("branch els_mc3idx_branch does not exist!\n");
				exit(1);
			}
			els_mc3idx_isLoaded = true;
		}
		return els_mc3idx_;
	}
	const vector<int> &els_mc3_motherid()
	{
		if (not els_mc3_motherid_isLoaded) {
			if (els_mc3_motherid_branch != 0) {
				els_mc3_motherid_branch->GetEntry(index);
			} else { 
				printf("branch els_mc3_motherid_branch does not exist!\n");
				exit(1);
			}
			els_mc3_motherid_isLoaded = true;
		}
		return els_mc3_motherid_;
	}
	const vector<int> &els_mc3_motheridx()
	{
		if (not els_mc3_motheridx_isLoaded) {
			if (els_mc3_motheridx_branch != 0) {
				els_mc3_motheridx_branch->GetEntry(index);
			} else { 
				printf("branch els_mc3_motheridx_branch does not exist!\n");
				exit(1);
			}
			els_mc3_motheridx_isLoaded = true;
		}
		return els_mc3_motheridx_;
	}
	const vector<int> &els_mc_id()
	{
		if (not els_mc_id_isLoaded) {
			if (els_mc_id_branch != 0) {
				els_mc_id_branch->GetEntry(index);
			} else { 
				printf("branch els_mc_id_branch does not exist!\n");
				exit(1);
			}
			els_mc_id_isLoaded = true;
		}
		return els_mc_id_;
	}
	const vector<int> &els_mcidx()
	{
		if (not els_mcidx_isLoaded) {
			if (els_mcidx_branch != 0) {
				els_mcidx_branch->GetEntry(index);
			} else { 
				printf("branch els_mcidx_branch does not exist!\n");
				exit(1);
			}
			els_mcidx_isLoaded = true;
		}
		return els_mcidx_;
	}
	const vector<int> &els_mc_motherid()
	{
		if (not els_mc_motherid_isLoaded) {
			if (els_mc_motherid_branch != 0) {
				els_mc_motherid_branch->GetEntry(index);
			} else { 
				printf("branch els_mc_motherid_branch does not exist!\n");
				exit(1);
			}
			els_mc_motherid_isLoaded = true;
		}
		return els_mc_motherid_;
	}
	const vector<int> &mus_mc3_id()
	{
		if (not mus_mc3_id_isLoaded) {
			if (mus_mc3_id_branch != 0) {
				mus_mc3_id_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc3_id_branch does not exist!\n");
				exit(1);
			}
			mus_mc3_id_isLoaded = true;
		}
		return mus_mc3_id_;
	}
	const vector<int> &mus_mc3idx()
	{
		if (not mus_mc3idx_isLoaded) {
			if (mus_mc3idx_branch != 0) {
				mus_mc3idx_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc3idx_branch does not exist!\n");
				exit(1);
			}
			mus_mc3idx_isLoaded = true;
		}
		return mus_mc3idx_;
	}
	const vector<int> &mus_mc3_motherid()
	{
		if (not mus_mc3_motherid_isLoaded) {
			if (mus_mc3_motherid_branch != 0) {
				mus_mc3_motherid_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc3_motherid_branch does not exist!\n");
				exit(1);
			}
			mus_mc3_motherid_isLoaded = true;
		}
		return mus_mc3_motherid_;
	}
	const vector<int> &mus_mc3_motheridx()
	{
		if (not mus_mc3_motheridx_isLoaded) {
			if (mus_mc3_motheridx_branch != 0) {
				mus_mc3_motheridx_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc3_motheridx_branch does not exist!\n");
				exit(1);
			}
			mus_mc3_motheridx_isLoaded = true;
		}
		return mus_mc3_motheridx_;
	}
	const vector<int> &mus_mc_id()
	{
		if (not mus_mc_id_isLoaded) {
			if (mus_mc_id_branch != 0) {
				mus_mc_id_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc_id_branch does not exist!\n");
				exit(1);
			}
			mus_mc_id_isLoaded = true;
		}
		return mus_mc_id_;
	}
	const vector<int> &mus_mcidx()
	{
		if (not mus_mcidx_isLoaded) {
			if (mus_mcidx_branch != 0) {
				mus_mcidx_branch->GetEntry(index);
			} else { 
				printf("branch mus_mcidx_branch does not exist!\n");
				exit(1);
			}
			mus_mcidx_isLoaded = true;
		}
		return mus_mcidx_;
	}
	const vector<int> &mus_mc_motherid()
	{
		if (not mus_mc_motherid_isLoaded) {
			if (mus_mc_motherid_branch != 0) {
				mus_mc_motherid_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc_motherid_branch does not exist!\n");
				exit(1);
			}
			mus_mc_motherid_isLoaded = true;
		}
		return mus_mc_motherid_;
	}
	const vector<int> &pfjets_mc3_id()
	{
		if (not pfjets_mc3_id_isLoaded) {
			if (pfjets_mc3_id_branch != 0) {
				pfjets_mc3_id_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc3_id_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc3_id_isLoaded = true;
		}
		return pfjets_mc3_id_;
	}
	const vector<int> &pfjets_mc3idx()
	{
		if (not pfjets_mc3idx_isLoaded) {
			if (pfjets_mc3idx_branch != 0) {
				pfjets_mc3idx_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc3idx_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc3idx_isLoaded = true;
		}
		return pfjets_mc3idx_;
	}
	const vector<int> &pfjets_mc_gpidx()
	{
		if (not pfjets_mc_gpidx_isLoaded) {
			if (pfjets_mc_gpidx_branch != 0) {
				pfjets_mc_gpidx_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_gpidx_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_gpidx_isLoaded = true;
		}
		return pfjets_mc_gpidx_;
	}
	const vector<int> &pfjets_mc_id()
	{
		if (not pfjets_mc_id_isLoaded) {
			if (pfjets_mc_id_branch != 0) {
				pfjets_mc_id_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_id_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_id_isLoaded = true;
		}
		return pfjets_mc_id_;
	}
	const vector<int> &pfjets_mcidx()
	{
		if (not pfjets_mcidx_isLoaded) {
			if (pfjets_mcidx_branch != 0) {
				pfjets_mcidx_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mcidx_branch does not exist!\n");
				exit(1);
			}
			pfjets_mcidx_isLoaded = true;
		}
		return pfjets_mcidx_;
	}
	const vector<int> &pfjets_mc_motherid()
	{
		if (not pfjets_mc_motherid_isLoaded) {
			if (pfjets_mc_motherid_branch != 0) {
				pfjets_mc_motherid_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_mc_motherid_branch does not exist!\n");
				exit(1);
			}
			pfjets_mc_motherid_isLoaded = true;
		}
		return pfjets_mc_motherid_;
	}
	const vector<int> &photons_mc3_id()
	{
		if (not photons_mc3_id_isLoaded) {
			if (photons_mc3_id_branch != 0) {
				photons_mc3_id_branch->GetEntry(index);
			} else { 
				printf("branch photons_mc3_id_branch does not exist!\n");
				exit(1);
			}
			photons_mc3_id_isLoaded = true;
		}
		return photons_mc3_id_;
	}
	const vector<int> &photons_mc3idx()
	{
		if (not photons_mc3idx_isLoaded) {
			if (photons_mc3idx_branch != 0) {
				photons_mc3idx_branch->GetEntry(index);
			} else { 
				printf("branch photons_mc3idx_branch does not exist!\n");
				exit(1);
			}
			photons_mc3idx_isLoaded = true;
		}
		return photons_mc3idx_;
	}
	const vector<int> &photons_mc3_motherid()
	{
		if (not photons_mc3_motherid_isLoaded) {
			if (photons_mc3_motherid_branch != 0) {
				photons_mc3_motherid_branch->GetEntry(index);
			} else { 
				printf("branch photons_mc3_motherid_branch does not exist!\n");
				exit(1);
			}
			photons_mc3_motherid_isLoaded = true;
		}
		return photons_mc3_motherid_;
	}
	const vector<int> &photons_mc3_motheridx()
	{
		if (not photons_mc3_motheridx_isLoaded) {
			if (photons_mc3_motheridx_branch != 0) {
				photons_mc3_motheridx_branch->GetEntry(index);
			} else { 
				printf("branch photons_mc3_motheridx_branch does not exist!\n");
				exit(1);
			}
			photons_mc3_motheridx_isLoaded = true;
		}
		return photons_mc3_motheridx_;
	}
	const vector<int> &photons_mc_id()
	{
		if (not photons_mc_id_isLoaded) {
			if (photons_mc_id_branch != 0) {
				photons_mc_id_branch->GetEntry(index);
			} else { 
				printf("branch photons_mc_id_branch does not exist!\n");
				exit(1);
			}
			photons_mc_id_isLoaded = true;
		}
		return photons_mc_id_;
	}
	const vector<int> &photons_mcidx()
	{
		if (not photons_mcidx_isLoaded) {
			if (photons_mcidx_branch != 0) {
				photons_mcidx_branch->GetEntry(index);
			} else { 
				printf("branch photons_mcidx_branch does not exist!\n");
				exit(1);
			}
			photons_mcidx_isLoaded = true;
		}
		return photons_mcidx_;
	}
	const vector<int> &photons_mc_motherid()
	{
		if (not photons_mc_motherid_isLoaded) {
			if (photons_mc_motherid_branch != 0) {
				photons_mc_motherid_branch->GetEntry(index);
			} else { 
				printf("branch photons_mc_motherid_branch does not exist!\n");
				exit(1);
			}
			photons_mc_motherid_isLoaded = true;
		}
		return photons_mc_motherid_;
	}
	const vector<int> &els_category()
	{
		if (not els_category_isLoaded) {
			if (els_category_branch != 0) {
				els_category_branch->GetEntry(index);
			} else { 
				printf("branch els_category_branch does not exist!\n");
				exit(1);
			}
			els_category_isLoaded = true;
		}
		return els_category_;
	}
	const vector<int> &els_charge()
	{
		if (not els_charge_isLoaded) {
			if (els_charge_branch != 0) {
				els_charge_branch->GetEntry(index);
			} else { 
				printf("branch els_charge_branch does not exist!\n");
				exit(1);
			}
			els_charge_isLoaded = true;
		}
		return els_charge_;
	}
	const vector<int> &els_ckf_charge()
	{
		if (not els_ckf_charge_isLoaded) {
			if (els_ckf_charge_branch != 0) {
				els_ckf_charge_branch->GetEntry(index);
			} else { 
				printf("branch els_ckf_charge_branch does not exist!\n");
				exit(1);
			}
			els_ckf_charge_isLoaded = true;
		}
		return els_ckf_charge_;
	}
	const vector<int> &els_ckf_laywithmeas()
	{
		if (not els_ckf_laywithmeas_isLoaded) {
			if (els_ckf_laywithmeas_branch != 0) {
				els_ckf_laywithmeas_branch->GetEntry(index);
			} else { 
				printf("branch els_ckf_laywithmeas_branch does not exist!\n");
				exit(1);
			}
			els_ckf_laywithmeas_isLoaded = true;
		}
		return els_ckf_laywithmeas_;
	}
	const vector<int> &els_class()
	{
		if (not els_class_isLoaded) {
			if (els_class_branch != 0) {
				els_class_branch->GetEntry(index);
			} else { 
				printf("branch els_class_branch does not exist!\n");
				exit(1);
			}
			els_class_isLoaded = true;
		}
		return els_class_;
	}
	const vector<int> &els_exp_innerlayers()
	{
		if (not els_exp_innerlayers_isLoaded) {
			if (els_exp_innerlayers_branch != 0) {
				els_exp_innerlayers_branch->GetEntry(index);
			} else { 
				printf("branch els_exp_innerlayers_branch does not exist!\n");
				exit(1);
			}
			els_exp_innerlayers_isLoaded = true;
		}
		return els_exp_innerlayers_;
	}
	const vector<int> &els_exp_outerlayers()
	{
		if (not els_exp_outerlayers_isLoaded) {
			if (els_exp_outerlayers_branch != 0) {
				els_exp_outerlayers_branch->GetEntry(index);
			} else { 
				printf("branch els_exp_outerlayers_branch does not exist!\n");
				exit(1);
			}
			els_exp_outerlayers_isLoaded = true;
		}
		return els_exp_outerlayers_;
	}
	const vector<int> &els_fiduciality()
	{
		if (not els_fiduciality_isLoaded) {
			if (els_fiduciality_branch != 0) {
				els_fiduciality_branch->GetEntry(index);
			} else { 
				printf("branch els_fiduciality_branch does not exist!\n");
				exit(1);
			}
			els_fiduciality_isLoaded = true;
		}
		return els_fiduciality_;
	}
	const vector<int> &els_lostHits()
	{
		if (not els_lostHits_isLoaded) {
			if (els_lostHits_branch != 0) {
				els_lostHits_branch->GetEntry(index);
			} else { 
				printf("branch els_lostHits_branch does not exist!\n");
				exit(1);
			}
			els_lostHits_isLoaded = true;
		}
		return els_lostHits_;
	}
	const vector<int> &els_lost_pixelhits()
	{
		if (not els_lost_pixelhits_isLoaded) {
			if (els_lost_pixelhits_branch != 0) {
				els_lost_pixelhits_branch->GetEntry(index);
			} else { 
				printf("branch els_lost_pixelhits_branch does not exist!\n");
				exit(1);
			}
			els_lost_pixelhits_isLoaded = true;
		}
		return els_lost_pixelhits_;
	}
	const vector<int> &els_mc_patMatch_id()
	{
		if (not els_mc_patMatch_id_isLoaded) {
			if (els_mc_patMatch_id_branch != 0) {
				els_mc_patMatch_id_branch->GetEntry(index);
			} else { 
				printf("branch els_mc_patMatch_id_branch does not exist!\n");
				exit(1);
			}
			els_mc_patMatch_id_isLoaded = true;
		}
		return els_mc_patMatch_id_;
	}
	const vector<int> &els_nSeed()
	{
		if (not els_nSeed_isLoaded) {
			if (els_nSeed_branch != 0) {
				els_nSeed_branch->GetEntry(index);
			} else { 
				printf("branch els_nSeed_branch does not exist!\n");
				exit(1);
			}
			els_nSeed_isLoaded = true;
		}
		return els_nSeed_;
	}
	const vector<int> &els_nlayers()
	{
		if (not els_nlayers_isLoaded) {
			if (els_nlayers_branch != 0) {
				els_nlayers_branch->GetEntry(index);
			} else { 
				printf("branch els_nlayers_branch does not exist!\n");
				exit(1);
			}
			els_nlayers_isLoaded = true;
		}
		return els_nlayers_;
	}
	const vector<int> &els_nlayers3D()
	{
		if (not els_nlayers3D_isLoaded) {
			if (els_nlayers3D_branch != 0) {
				els_nlayers3D_branch->GetEntry(index);
			} else { 
				printf("branch els_nlayers3D_branch does not exist!\n");
				exit(1);
			}
			els_nlayers3D_isLoaded = true;
		}
		return els_nlayers3D_;
	}
	const vector<int> &els_nlayersLost()
	{
		if (not els_nlayersLost_isLoaded) {
			if (els_nlayersLost_branch != 0) {
				els_nlayersLost_branch->GetEntry(index);
			} else { 
				printf("branch els_nlayersLost_branch does not exist!\n");
				exit(1);
			}
			els_nlayersLost_isLoaded = true;
		}
		return els_nlayersLost_;
	}
	const vector<int> &els_sccharge()
	{
		if (not els_sccharge_isLoaded) {
			if (els_sccharge_branch != 0) {
				els_sccharge_branch->GetEntry(index);
			} else { 
				printf("branch els_sccharge_branch does not exist!\n");
				exit(1);
			}
			els_sccharge_isLoaded = true;
		}
		return els_sccharge_;
	}
	const vector<int> &els_trk_charge()
	{
		if (not els_trk_charge_isLoaded) {
			if (els_trk_charge_branch != 0) {
				els_trk_charge_branch->GetEntry(index);
			} else { 
				printf("branch els_trk_charge_branch does not exist!\n");
				exit(1);
			}
			els_trk_charge_isLoaded = true;
		}
		return els_trk_charge_;
	}
	const vector<int> &els_type()
	{
		if (not els_type_isLoaded) {
			if (els_type_branch != 0) {
				els_type_branch->GetEntry(index);
			} else { 
				printf("branch els_type_branch does not exist!\n");
				exit(1);
			}
			els_type_isLoaded = true;
		}
		return els_type_;
	}
	const vector<int> &els_validHits()
	{
		if (not els_validHits_isLoaded) {
			if (els_validHits_branch != 0) {
				els_validHits_branch->GetEntry(index);
			} else { 
				printf("branch els_validHits_branch does not exist!\n");
				exit(1);
			}
			els_validHits_isLoaded = true;
		}
		return els_validHits_;
	}
	const vector<int> &els_valid_pixelhits()
	{
		if (not els_valid_pixelhits_isLoaded) {
			if (els_valid_pixelhits_branch != 0) {
				els_valid_pixelhits_branch->GetEntry(index);
			} else { 
				printf("branch els_valid_pixelhits_branch does not exist!\n");
				exit(1);
			}
			els_valid_pixelhits_isLoaded = true;
		}
		return els_valid_pixelhits_;
	}
	const vector<int> &els_passLooseId()
	{
		if (not els_passLooseId_isLoaded) {
			if (els_passLooseId_branch != 0) {
				els_passLooseId_branch->GetEntry(index);
			} else { 
				printf("branch els_passLooseId_branch does not exist!\n");
				exit(1);
			}
			els_passLooseId_isLoaded = true;
		}
		return els_passLooseId_;
	}
	const vector<int> &els_passMediumId()
	{
		if (not els_passMediumId_isLoaded) {
			if (els_passMediumId_branch != 0) {
				els_passMediumId_branch->GetEntry(index);
			} else { 
				printf("branch els_passMediumId_branch does not exist!\n");
				exit(1);
			}
			els_passMediumId_isLoaded = true;
		}
		return els_passMediumId_;
	}
	const vector<int> &els_passTightId()
	{
		if (not els_passTightId_isLoaded) {
			if (els_passTightId_branch != 0) {
				els_passTightId_branch->GetEntry(index);
			} else { 
				printf("branch els_passTightId_branch does not exist!\n");
				exit(1);
			}
			els_passTightId_isLoaded = true;
		}
		return els_passTightId_;
	}
	const vector<int> &els_passVetoId()
	{
		if (not els_passVetoId_isLoaded) {
			if (els_passVetoId_branch != 0) {
				els_passVetoId_branch->GetEntry(index);
			} else { 
				printf("branch els_passVetoId_branch does not exist!\n");
				exit(1);
			}
			els_passVetoId_isLoaded = true;
		}
		return els_passVetoId_;
	}
	const vector<int> &genps_id()
	{
		if (not genps_id_isLoaded) {
			if (genps_id_branch != 0) {
				genps_id_branch->GetEntry(index);
			} else { 
				printf("branch genps_id_branch does not exist!\n");
				exit(1);
			}
			genps_id_isLoaded = true;
		}
		return genps_id_;
	}
	const vector<int> &genps_id_mother()
	{
		if (not genps_id_mother_isLoaded) {
			if (genps_id_mother_branch != 0) {
				genps_id_mother_branch->GetEntry(index);
			} else { 
				printf("branch genps_id_mother_branch does not exist!\n");
				exit(1);
			}
			genps_id_mother_isLoaded = true;
		}
		return genps_id_mother_;
	}
	const vector<int> &genps_id_simplegrandma()
	{
		if (not genps_id_simplegrandma_isLoaded) {
			if (genps_id_simplegrandma_branch != 0) {
				genps_id_simplegrandma_branch->GetEntry(index);
			} else { 
				printf("branch genps_id_simplegrandma_branch does not exist!\n");
				exit(1);
			}
			genps_id_simplegrandma_isLoaded = true;
		}
		return genps_id_simplegrandma_;
	}
	const vector<int> &genps_id_simplemother()
	{
		if (not genps_id_simplemother_isLoaded) {
			if (genps_id_simplemother_branch != 0) {
				genps_id_simplemother_branch->GetEntry(index);
			} else { 
				printf("branch genps_id_simplemother_branch does not exist!\n");
				exit(1);
			}
			genps_id_simplemother_isLoaded = true;
		}
		return genps_id_simplemother_;
	}
	const vector<int> &genps_idx_mother()
	{
		if (not genps_idx_mother_isLoaded) {
			if (genps_idx_mother_branch != 0) {
				genps_idx_mother_branch->GetEntry(index);
			} else { 
				printf("branch genps_idx_mother_branch does not exist!\n");
				exit(1);
			}
			genps_idx_mother_isLoaded = true;
		}
		return genps_idx_mother_;
	}
	const vector<int> &genps_idx_simplemother()
	{
		if (not genps_idx_simplemother_isLoaded) {
			if (genps_idx_simplemother_branch != 0) {
				genps_idx_simplemother_branch->GetEntry(index);
			} else { 
				printf("branch genps_idx_simplemother_branch does not exist!\n");
				exit(1);
			}
			genps_idx_simplemother_isLoaded = true;
		}
		return genps_idx_simplemother_;
	}
	const vector<int> &genps_status()
	{
		if (not genps_status_isLoaded) {
			if (genps_status_branch != 0) {
				genps_status_branch->GetEntry(index);
			} else { 
				printf("branch genps_status_branch does not exist!\n");
				exit(1);
			}
			genps_status_isLoaded = true;
		}
		return genps_status_;
	}
	const vector<int> &hyp_ll_charge()
	{
		if (not hyp_ll_charge_isLoaded) {
			if (hyp_ll_charge_branch != 0) {
				hyp_ll_charge_branch->GetEntry(index);
			} else { 
				printf("branch hyp_ll_charge_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_charge_isLoaded = true;
		}
		return hyp_ll_charge_;
	}
	const vector<int> &hyp_ll_id()
	{
		if (not hyp_ll_id_isLoaded) {
			if (hyp_ll_id_branch != 0) {
				hyp_ll_id_branch->GetEntry(index);
			} else { 
				printf("branch hyp_ll_id_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_id_isLoaded = true;
		}
		return hyp_ll_id_;
	}
	const vector<int> &hyp_ll_index()
	{
		if (not hyp_ll_index_isLoaded) {
			if (hyp_ll_index_branch != 0) {
				hyp_ll_index_branch->GetEntry(index);
			} else { 
				printf("branch hyp_ll_index_branch does not exist!\n");
				exit(1);
			}
			hyp_ll_index_isLoaded = true;
		}
		return hyp_ll_index_;
	}
	const vector<int> &hyp_lt_charge()
	{
		if (not hyp_lt_charge_isLoaded) {
			if (hyp_lt_charge_branch != 0) {
				hyp_lt_charge_branch->GetEntry(index);
			} else { 
				printf("branch hyp_lt_charge_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_charge_isLoaded = true;
		}
		return hyp_lt_charge_;
	}
	const vector<int> &hyp_lt_id()
	{
		if (not hyp_lt_id_isLoaded) {
			if (hyp_lt_id_branch != 0) {
				hyp_lt_id_branch->GetEntry(index);
			} else { 
				printf("branch hyp_lt_id_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_id_isLoaded = true;
		}
		return hyp_lt_id_;
	}
	const vector<int> &hyp_lt_index()
	{
		if (not hyp_lt_index_isLoaded) {
			if (hyp_lt_index_branch != 0) {
				hyp_lt_index_branch->GetEntry(index);
			} else { 
				printf("branch hyp_lt_index_branch does not exist!\n");
				exit(1);
			}
			hyp_lt_index_isLoaded = true;
		}
		return hyp_lt_index_;
	}
	const vector<int> &hyp_type()
	{
		if (not hyp_type_isLoaded) {
			if (hyp_type_branch != 0) {
				hyp_type_branch->GetEntry(index);
			} else { 
				printf("branch hyp_type_branch does not exist!\n");
				exit(1);
			}
			hyp_type_isLoaded = true;
		}
		return hyp_type_;
	}
	const vector<int> &isotracks_charge()
	{
		if (not isotracks_charge_isLoaded) {
			if (isotracks_charge_branch != 0) {
				isotracks_charge_branch->GetEntry(index);
			} else { 
				printf("branch isotracks_charge_branch does not exist!\n");
				exit(1);
			}
			isotracks_charge_isLoaded = true;
		}
		return isotracks_charge_;
	}
	const vector<int> &isotracks_particleId()
	{
		if (not isotracks_particleId_isLoaded) {
			if (isotracks_particleId_branch != 0) {
				isotracks_particleId_branch->GetEntry(index);
			} else { 
				printf("branch isotracks_particleId_branch does not exist!\n");
				exit(1);
			}
			isotracks_particleId_isLoaded = true;
		}
		return isotracks_particleId_;
	}
	const vector<int> &mus_algo()
	{
		if (not mus_algo_isLoaded) {
			if (mus_algo_branch != 0) {
				mus_algo_branch->GetEntry(index);
			} else { 
				printf("branch mus_algo_branch does not exist!\n");
				exit(1);
			}
			mus_algo_isLoaded = true;
		}
		return mus_algo_;
	}
	const vector<int> &mus_charge()
	{
		if (not mus_charge_isLoaded) {
			if (mus_charge_branch != 0) {
				mus_charge_branch->GetEntry(index);
			} else { 
				printf("branch mus_charge_branch does not exist!\n");
				exit(1);
			}
			mus_charge_isLoaded = true;
		}
		return mus_charge_;
	}
	const vector<int> &mus_ecal_rawId()
	{
		if (not mus_ecal_rawId_isLoaded) {
			if (mus_ecal_rawId_branch != 0) {
				mus_ecal_rawId_branch->GetEntry(index);
			} else { 
				printf("branch mus_ecal_rawId_branch does not exist!\n");
				exit(1);
			}
			mus_ecal_rawId_isLoaded = true;
		}
		return mus_ecal_rawId_;
	}
	const vector<int> &mus_exp_innerlayers()
	{
		if (not mus_exp_innerlayers_isLoaded) {
			if (mus_exp_innerlayers_branch != 0) {
				mus_exp_innerlayers_branch->GetEntry(index);
			} else { 
				printf("branch mus_exp_innerlayers_branch does not exist!\n");
				exit(1);
			}
			mus_exp_innerlayers_isLoaded = true;
		}
		return mus_exp_innerlayers_;
	}
	const vector<int> &mus_exp_outerlayers()
	{
		if (not mus_exp_outerlayers_isLoaded) {
			if (mus_exp_outerlayers_branch != 0) {
				mus_exp_outerlayers_branch->GetEntry(index);
			} else { 
				printf("branch mus_exp_outerlayers_branch does not exist!\n");
				exit(1);
			}
			mus_exp_outerlayers_isLoaded = true;
		}
		return mus_exp_outerlayers_;
	}
	const vector<int> &mus_gfit_algo()
	{
		if (not mus_gfit_algo_isLoaded) {
			if (mus_gfit_algo_branch != 0) {
				mus_gfit_algo_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_algo_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_algo_isLoaded = true;
		}
		return mus_gfit_algo_;
	}
	const vector<int> &mus_gfit_etaErr()
	{
		if (not mus_gfit_etaErr_isLoaded) {
			if (mus_gfit_etaErr_branch != 0) {
				mus_gfit_etaErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_etaErr_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_etaErr_isLoaded = true;
		}
		return mus_gfit_etaErr_;
	}
	const vector<int> &mus_gfit_exp_innerlayer()
	{
		if (not mus_gfit_exp_innerlayer_isLoaded) {
			if (mus_gfit_exp_innerlayer_branch != 0) {
				mus_gfit_exp_innerlayer_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_exp_innerlayer_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_exp_innerlayer_isLoaded = true;
		}
		return mus_gfit_exp_innerlayer_;
	}
	const vector<int> &mus_gfit_exp_outerlayer()
	{
		if (not mus_gfit_exp_outerlayer_isLoaded) {
			if (mus_gfit_exp_outerlayer_branch != 0) {
				mus_gfit_exp_outerlayer_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_exp_outerlayer_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_exp_outerlayer_isLoaded = true;
		}
		return mus_gfit_exp_outerlayer_;
	}
	const vector<int> &mus_gfit_lostHits()
	{
		if (not mus_gfit_lostHits_isLoaded) {
			if (mus_gfit_lostHits_branch != 0) {
				mus_gfit_lostHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_lostHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_lostHits_isLoaded = true;
		}
		return mus_gfit_lostHits_;
	}
	const vector<int> &mus_gfit_lostPixelHits()
	{
		if (not mus_gfit_lostPixelHits_isLoaded) {
			if (mus_gfit_lostPixelHits_branch != 0) {
				mus_gfit_lostPixelHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_lostPixelHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_lostPixelHits_isLoaded = true;
		}
		return mus_gfit_lostPixelHits_;
	}
	const vector<int> &mus_gfit_nlayers()
	{
		if (not mus_gfit_nlayers_isLoaded) {
			if (mus_gfit_nlayers_branch != 0) {
				mus_gfit_nlayers_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_nlayers_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_nlayers_isLoaded = true;
		}
		return mus_gfit_nlayers_;
	}
	const vector<int> &mus_gfit_nlayers3D()
	{
		if (not mus_gfit_nlayers3D_isLoaded) {
			if (mus_gfit_nlayers3D_branch != 0) {
				mus_gfit_nlayers3D_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_nlayers3D_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_nlayers3D_isLoaded = true;
		}
		return mus_gfit_nlayers3D_;
	}
	const vector<int> &mus_gfit_nlayersLost()
	{
		if (not mus_gfit_nlayersLost_isLoaded) {
			if (mus_gfit_nlayersLost_branch != 0) {
				mus_gfit_nlayersLost_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_nlayersLost_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_nlayersLost_isLoaded = true;
		}
		return mus_gfit_nlayersLost_;
	}
	const vector<int> &mus_gfit_phiErr()
	{
		if (not mus_gfit_phiErr_isLoaded) {
			if (mus_gfit_phiErr_branch != 0) {
				mus_gfit_phiErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_phiErr_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_phiErr_isLoaded = true;
		}
		return mus_gfit_phiErr_;
	}
	const vector<int> &mus_gfit_ptErr()
	{
		if (not mus_gfit_ptErr_isLoaded) {
			if (mus_gfit_ptErr_branch != 0) {
				mus_gfit_ptErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_ptErr_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_ptErr_isLoaded = true;
		}
		return mus_gfit_ptErr_;
	}
	const vector<int> &mus_gfit_qualityMask()
	{
		if (not mus_gfit_qualityMask_isLoaded) {
			if (mus_gfit_qualityMask_branch != 0) {
				mus_gfit_qualityMask_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_qualityMask_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_qualityMask_isLoaded = true;
		}
		return mus_gfit_qualityMask_;
	}
	const vector<int> &mus_gfit_trk_charge()
	{
		if (not mus_gfit_trk_charge_isLoaded) {
			if (mus_gfit_trk_charge_branch != 0) {
				mus_gfit_trk_charge_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_trk_charge_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_trk_charge_isLoaded = true;
		}
		return mus_gfit_trk_charge_;
	}
	const vector<int> &mus_gfit_validHits()
	{
		if (not mus_gfit_validHits_isLoaded) {
			if (mus_gfit_validHits_branch != 0) {
				mus_gfit_validHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_validHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validHits_isLoaded = true;
		}
		return mus_gfit_validHits_;
	}
	const vector<int> &mus_gfit_validPixelHits()
	{
		if (not mus_gfit_validPixelHits_isLoaded) {
			if (mus_gfit_validPixelHits_branch != 0) {
				mus_gfit_validPixelHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_validPixelHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validPixelHits_isLoaded = true;
		}
		return mus_gfit_validPixelHits_;
	}
	const vector<int> &mus_gfit_validSTAHits()
	{
		if (not mus_gfit_validSTAHits_isLoaded) {
			if (mus_gfit_validSTAHits_branch != 0) {
				mus_gfit_validSTAHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_validSTAHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validSTAHits_isLoaded = true;
		}
		return mus_gfit_validSTAHits_;
	}
	const vector<int> &mus_gfit_validSiHits()
	{
		if (not mus_gfit_validSiHits_isLoaded) {
			if (mus_gfit_validSiHits_branch != 0) {
				mus_gfit_validSiHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_gfit_validSiHits_branch does not exist!\n");
				exit(1);
			}
			mus_gfit_validSiHits_isLoaded = true;
		}
		return mus_gfit_validSiHits_;
	}
	const vector<int> &mus_goodmask()
	{
		if (not mus_goodmask_isLoaded) {
			if (mus_goodmask_branch != 0) {
				mus_goodmask_branch->GetEntry(index);
			} else { 
				printf("branch mus_goodmask_branch does not exist!\n");
				exit(1);
			}
			mus_goodmask_isLoaded = true;
		}
		return mus_goodmask_;
	}
	const vector<int> &mus_hcal_rawId()
	{
		if (not mus_hcal_rawId_isLoaded) {
			if (mus_hcal_rawId_branch != 0) {
				mus_hcal_rawId_branch->GetEntry(index);
			} else { 
				printf("branch mus_hcal_rawId_branch does not exist!\n");
				exit(1);
			}
			mus_hcal_rawId_isLoaded = true;
		}
		return mus_hcal_rawId_;
	}
	const vector<int> &mus_iso03_njets()
	{
		if (not mus_iso03_njets_isLoaded) {
			if (mus_iso03_njets_branch != 0) {
				mus_iso03_njets_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_njets_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_njets_isLoaded = true;
		}
		return mus_iso03_njets_;
	}
	const vector<int> &mus_iso03_ntrk()
	{
		if (not mus_iso03_ntrk_isLoaded) {
			if (mus_iso03_ntrk_branch != 0) {
				mus_iso03_ntrk_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso03_ntrk_branch does not exist!\n");
				exit(1);
			}
			mus_iso03_ntrk_isLoaded = true;
		}
		return mus_iso03_ntrk_;
	}
	const vector<int> &mus_iso05_ntrk()
	{
		if (not mus_iso05_ntrk_isLoaded) {
			if (mus_iso05_ntrk_branch != 0) {
				mus_iso05_ntrk_branch->GetEntry(index);
			} else { 
				printf("branch mus_iso05_ntrk_branch does not exist!\n");
				exit(1);
			}
			mus_iso05_ntrk_isLoaded = true;
		}
		return mus_iso05_ntrk_;
	}
	const vector<int> &mus_lostHits()
	{
		if (not mus_lostHits_isLoaded) {
			if (mus_lostHits_branch != 0) {
				mus_lostHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_lostHits_branch does not exist!\n");
				exit(1);
			}
			mus_lostHits_isLoaded = true;
		}
		return mus_lostHits_;
	}
	const vector<int> &mus_lostPixelHits()
	{
		if (not mus_lostPixelHits_isLoaded) {
			if (mus_lostPixelHits_branch != 0) {
				mus_lostPixelHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_lostPixelHits_branch does not exist!\n");
				exit(1);
			}
			mus_lostPixelHits_isLoaded = true;
		}
		return mus_lostPixelHits_;
	}
	const vector<int> &mus_mc_patMatch_id()
	{
		if (not mus_mc_patMatch_id_isLoaded) {
			if (mus_mc_patMatch_id_branch != 0) {
				mus_mc_patMatch_id_branch->GetEntry(index);
			} else { 
				printf("branch mus_mc_patMatch_id_branch does not exist!\n");
				exit(1);
			}
			mus_mc_patMatch_id_isLoaded = true;
		}
		return mus_mc_patMatch_id_;
	}
	const vector<int> &mus_muonBestTrackType()
	{
		if (not mus_muonBestTrackType_isLoaded) {
			if (mus_muonBestTrackType_branch != 0) {
				mus_muonBestTrackType_branch->GetEntry(index);
			} else { 
				printf("branch mus_muonBestTrackType_branch does not exist!\n");
				exit(1);
			}
			mus_muonBestTrackType_isLoaded = true;
		}
		return mus_muonBestTrackType_;
	}
	const vector<int> &mus_nOverlaps()
	{
		if (not mus_nOverlaps_isLoaded) {
			if (mus_nOverlaps_branch != 0) {
				mus_nOverlaps_branch->GetEntry(index);
			} else { 
				printf("branch mus_nOverlaps_branch does not exist!\n");
				exit(1);
			}
			mus_nOverlaps_isLoaded = true;
		}
		return mus_nOverlaps_;
	}
	const vector<int> &mus_nlayers()
	{
		if (not mus_nlayers_isLoaded) {
			if (mus_nlayers_branch != 0) {
				mus_nlayers_branch->GetEntry(index);
			} else { 
				printf("branch mus_nlayers_branch does not exist!\n");
				exit(1);
			}
			mus_nlayers_isLoaded = true;
		}
		return mus_nlayers_;
	}
	const vector<int> &mus_nlayers3D()
	{
		if (not mus_nlayers3D_isLoaded) {
			if (mus_nlayers3D_branch != 0) {
				mus_nlayers3D_branch->GetEntry(index);
			} else { 
				printf("branch mus_nlayers3D_branch does not exist!\n");
				exit(1);
			}
			mus_nlayers3D_isLoaded = true;
		}
		return mus_nlayers3D_;
	}
	const vector<int> &mus_nlayersLost()
	{
		if (not mus_nlayersLost_isLoaded) {
			if (mus_nlayersLost_branch != 0) {
				mus_nlayersLost_branch->GetEntry(index);
			} else { 
				printf("branch mus_nlayersLost_branch does not exist!\n");
				exit(1);
			}
			mus_nlayersLost_isLoaded = true;
		}
		return mus_nlayersLost_;
	}
	const vector<int> &mus_nmatches()
	{
		if (not mus_nmatches_isLoaded) {
			if (mus_nmatches_branch != 0) {
				mus_nmatches_branch->GetEntry(index);
			} else { 
				printf("branch mus_nmatches_branch does not exist!\n");
				exit(1);
			}
			mus_nmatches_isLoaded = true;
		}
		return mus_nmatches_;
	}
	const vector<int> &mus_numberOfMatchedStations()
	{
		if (not mus_numberOfMatchedStations_isLoaded) {
			if (mus_numberOfMatchedStations_branch != 0) {
				mus_numberOfMatchedStations_branch->GetEntry(index);
			} else { 
				printf("branch mus_numberOfMatchedStations_branch does not exist!\n");
				exit(1);
			}
			mus_numberOfMatchedStations_isLoaded = true;
		}
		return mus_numberOfMatchedStations_;
	}
	const vector<int> &mus_overlap0()
	{
		if (not mus_overlap0_isLoaded) {
			if (mus_overlap0_branch != 0) {
				mus_overlap0_branch->GetEntry(index);
			} else { 
				printf("branch mus_overlap0_branch does not exist!\n");
				exit(1);
			}
			mus_overlap0_isLoaded = true;
		}
		return mus_overlap0_;
	}
	const vector<int> &mus_overlap1()
	{
		if (not mus_overlap1_isLoaded) {
			if (mus_overlap1_branch != 0) {
				mus_overlap1_branch->GetEntry(index);
			} else { 
				printf("branch mus_overlap1_branch does not exist!\n");
				exit(1);
			}
			mus_overlap1_isLoaded = true;
		}
		return mus_overlap1_;
	}
	const vector<int> &mus_pfcharge()
	{
		if (not mus_pfcharge_isLoaded) {
			if (mus_pfcharge_branch != 0) {
				mus_pfcharge_branch->GetEntry(index);
			} else { 
				printf("branch mus_pfcharge_branch does not exist!\n");
				exit(1);
			}
			mus_pfcharge_isLoaded = true;
		}
		return mus_pfcharge_;
	}
	const vector<int> &mus_pfidx()
	{
		if (not mus_pfidx_isLoaded) {
			if (mus_pfidx_branch != 0) {
				mus_pfidx_branch->GetEntry(index);
			} else { 
				printf("branch mus_pfidx_branch does not exist!\n");
				exit(1);
			}
			mus_pfidx_isLoaded = true;
		}
		return mus_pfidx_;
	}
	const vector<int> &mus_pfparticleId()
	{
		if (not mus_pfparticleId_isLoaded) {
			if (mus_pfparticleId_branch != 0) {
				mus_pfparticleId_branch->GetEntry(index);
			} else { 
				printf("branch mus_pfparticleId_branch does not exist!\n");
				exit(1);
			}
			mus_pfparticleId_isLoaded = true;
		}
		return mus_pfparticleId_;
	}
	const vector<int> &mus_pid_PFMuon()
	{
		if (not mus_pid_PFMuon_isLoaded) {
			if (mus_pid_PFMuon_branch != 0) {
				mus_pid_PFMuon_branch->GetEntry(index);
			} else { 
				printf("branch mus_pid_PFMuon_branch does not exist!\n");
				exit(1);
			}
			mus_pid_PFMuon_isLoaded = true;
		}
		return mus_pid_PFMuon_;
	}
	const vector<int> &mus_pid_TM2DCompatibilityLoose()
	{
		if (not mus_pid_TM2DCompatibilityLoose_isLoaded) {
			if (mus_pid_TM2DCompatibilityLoose_branch != 0) {
				mus_pid_TM2DCompatibilityLoose_branch->GetEntry(index);
			} else { 
				printf("branch mus_pid_TM2DCompatibilityLoose_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TM2DCompatibilityLoose_isLoaded = true;
		}
		return mus_pid_TM2DCompatibilityLoose_;
	}
	const vector<int> &mus_pid_TM2DCompatibilityTight()
	{
		if (not mus_pid_TM2DCompatibilityTight_isLoaded) {
			if (mus_pid_TM2DCompatibilityTight_branch != 0) {
				mus_pid_TM2DCompatibilityTight_branch->GetEntry(index);
			} else { 
				printf("branch mus_pid_TM2DCompatibilityTight_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TM2DCompatibilityTight_isLoaded = true;
		}
		return mus_pid_TM2DCompatibilityTight_;
	}
	const vector<int> &mus_pid_TMLastStationLoose()
	{
		if (not mus_pid_TMLastStationLoose_isLoaded) {
			if (mus_pid_TMLastStationLoose_branch != 0) {
				mus_pid_TMLastStationLoose_branch->GetEntry(index);
			} else { 
				printf("branch mus_pid_TMLastStationLoose_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TMLastStationLoose_isLoaded = true;
		}
		return mus_pid_TMLastStationLoose_;
	}
	const vector<int> &mus_pid_TMLastStationTight()
	{
		if (not mus_pid_TMLastStationTight_isLoaded) {
			if (mus_pid_TMLastStationTight_branch != 0) {
				mus_pid_TMLastStationTight_branch->GetEntry(index);
			} else { 
				printf("branch mus_pid_TMLastStationTight_branch does not exist!\n");
				exit(1);
			}
			mus_pid_TMLastStationTight_isLoaded = true;
		}
		return mus_pid_TMLastStationTight_;
	}
	const vector<int> &mus_qualityMask()
	{
		if (not mus_qualityMask_isLoaded) {
			if (mus_qualityMask_branch != 0) {
				mus_qualityMask_branch->GetEntry(index);
			} else { 
				printf("branch mus_qualityMask_branch does not exist!\n");
				exit(1);
			}
			mus_qualityMask_isLoaded = true;
		}
		return mus_qualityMask_;
	}
	const vector<int> &mus_sta_algo()
	{
		if (not mus_sta_algo_isLoaded) {
			if (mus_sta_algo_branch != 0) {
				mus_sta_algo_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_algo_branch does not exist!\n");
				exit(1);
			}
			mus_sta_algo_isLoaded = true;
		}
		return mus_sta_algo_;
	}
	const vector<int> &mus_sta_etaErr()
	{
		if (not mus_sta_etaErr_isLoaded) {
			if (mus_sta_etaErr_branch != 0) {
				mus_sta_etaErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_etaErr_branch does not exist!\n");
				exit(1);
			}
			mus_sta_etaErr_isLoaded = true;
		}
		return mus_sta_etaErr_;
	}
	const vector<int> &mus_sta_exp_innerlayer()
	{
		if (not mus_sta_exp_innerlayer_isLoaded) {
			if (mus_sta_exp_innerlayer_branch != 0) {
				mus_sta_exp_innerlayer_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_exp_innerlayer_branch does not exist!\n");
				exit(1);
			}
			mus_sta_exp_innerlayer_isLoaded = true;
		}
		return mus_sta_exp_innerlayer_;
	}
	const vector<int> &mus_sta_exp_outerlayer()
	{
		if (not mus_sta_exp_outerlayer_isLoaded) {
			if (mus_sta_exp_outerlayer_branch != 0) {
				mus_sta_exp_outerlayer_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_exp_outerlayer_branch does not exist!\n");
				exit(1);
			}
			mus_sta_exp_outerlayer_isLoaded = true;
		}
		return mus_sta_exp_outerlayer_;
	}
	const vector<int> &mus_sta_lostHits()
	{
		if (not mus_sta_lostHits_isLoaded) {
			if (mus_sta_lostHits_branch != 0) {
				mus_sta_lostHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_lostHits_branch does not exist!\n");
				exit(1);
			}
			mus_sta_lostHits_isLoaded = true;
		}
		return mus_sta_lostHits_;
	}
	const vector<int> &mus_sta_lostPixelHits()
	{
		if (not mus_sta_lostPixelHits_isLoaded) {
			if (mus_sta_lostPixelHits_branch != 0) {
				mus_sta_lostPixelHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_lostPixelHits_branch does not exist!\n");
				exit(1);
			}
			mus_sta_lostPixelHits_isLoaded = true;
		}
		return mus_sta_lostPixelHits_;
	}
	const vector<int> &mus_sta_nlayers()
	{
		if (not mus_sta_nlayers_isLoaded) {
			if (mus_sta_nlayers_branch != 0) {
				mus_sta_nlayers_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_nlayers_branch does not exist!\n");
				exit(1);
			}
			mus_sta_nlayers_isLoaded = true;
		}
		return mus_sta_nlayers_;
	}
	const vector<int> &mus_sta_nlayers3D()
	{
		if (not mus_sta_nlayers3D_isLoaded) {
			if (mus_sta_nlayers3D_branch != 0) {
				mus_sta_nlayers3D_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_nlayers3D_branch does not exist!\n");
				exit(1);
			}
			mus_sta_nlayers3D_isLoaded = true;
		}
		return mus_sta_nlayers3D_;
	}
	const vector<int> &mus_sta_nlayersLost()
	{
		if (not mus_sta_nlayersLost_isLoaded) {
			if (mus_sta_nlayersLost_branch != 0) {
				mus_sta_nlayersLost_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_nlayersLost_branch does not exist!\n");
				exit(1);
			}
			mus_sta_nlayersLost_isLoaded = true;
		}
		return mus_sta_nlayersLost_;
	}
	const vector<int> &mus_sta_phiErr()
	{
		if (not mus_sta_phiErr_isLoaded) {
			if (mus_sta_phiErr_branch != 0) {
				mus_sta_phiErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_phiErr_branch does not exist!\n");
				exit(1);
			}
			mus_sta_phiErr_isLoaded = true;
		}
		return mus_sta_phiErr_;
	}
	const vector<int> &mus_sta_ptErr()
	{
		if (not mus_sta_ptErr_isLoaded) {
			if (mus_sta_ptErr_branch != 0) {
				mus_sta_ptErr_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_ptErr_branch does not exist!\n");
				exit(1);
			}
			mus_sta_ptErr_isLoaded = true;
		}
		return mus_sta_ptErr_;
	}
	const vector<int> &mus_sta_qualityMask()
	{
		if (not mus_sta_qualityMask_isLoaded) {
			if (mus_sta_qualityMask_branch != 0) {
				mus_sta_qualityMask_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_qualityMask_branch does not exist!\n");
				exit(1);
			}
			mus_sta_qualityMask_isLoaded = true;
		}
		return mus_sta_qualityMask_;
	}
	const vector<int> &mus_sta_trk_charge()
	{
		if (not mus_sta_trk_charge_isLoaded) {
			if (mus_sta_trk_charge_branch != 0) {
				mus_sta_trk_charge_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_trk_charge_branch does not exist!\n");
				exit(1);
			}
			mus_sta_trk_charge_isLoaded = true;
		}
		return mus_sta_trk_charge_;
	}
	const vector<int> &mus_sta_validHits()
	{
		if (not mus_sta_validHits_isLoaded) {
			if (mus_sta_validHits_branch != 0) {
				mus_sta_validHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_validHits_branch does not exist!\n");
				exit(1);
			}
			mus_sta_validHits_isLoaded = true;
		}
		return mus_sta_validHits_;
	}
	const vector<int> &mus_sta_validPixelHits()
	{
		if (not mus_sta_validPixelHits_isLoaded) {
			if (mus_sta_validPixelHits_branch != 0) {
				mus_sta_validPixelHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_sta_validPixelHits_branch does not exist!\n");
				exit(1);
			}
			mus_sta_validPixelHits_isLoaded = true;
		}
		return mus_sta_validPixelHits_;
	}
	const vector<int> &mus_timeDirection()
	{
		if (not mus_timeDirection_isLoaded) {
			if (mus_timeDirection_branch != 0) {
				mus_timeDirection_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeDirection_branch does not exist!\n");
				exit(1);
			}
			mus_timeDirection_isLoaded = true;
		}
		return mus_timeDirection_;
	}
	const vector<int> &mus_timeNumStationsUsed()
	{
		if (not mus_timeNumStationsUsed_isLoaded) {
			if (mus_timeNumStationsUsed_branch != 0) {
				mus_timeNumStationsUsed_branch->GetEntry(index);
			} else { 
				printf("branch mus_timeNumStationsUsed_branch does not exist!\n");
				exit(1);
			}
			mus_timeNumStationsUsed_isLoaded = true;
		}
		return mus_timeNumStationsUsed_;
	}
	const vector<int> &mus_trk_charge()
	{
		if (not mus_trk_charge_isLoaded) {
			if (mus_trk_charge_branch != 0) {
				mus_trk_charge_branch->GetEntry(index);
			} else { 
				printf("branch mus_trk_charge_branch does not exist!\n");
				exit(1);
			}
			mus_trk_charge_isLoaded = true;
		}
		return mus_trk_charge_;
	}
	const vector<int> &mus_type()
	{
		if (not mus_type_isLoaded) {
			if (mus_type_branch != 0) {
				mus_type_branch->GetEntry(index);
			} else { 
				printf("branch mus_type_branch does not exist!\n");
				exit(1);
			}
			mus_type_isLoaded = true;
		}
		return mus_type_;
	}
	const vector<int> &mus_validHits()
	{
		if (not mus_validHits_isLoaded) {
			if (mus_validHits_branch != 0) {
				mus_validHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_validHits_branch does not exist!\n");
				exit(1);
			}
			mus_validHits_isLoaded = true;
		}
		return mus_validHits_;
	}
	const vector<int> &mus_validPixelHits()
	{
		if (not mus_validPixelHits_isLoaded) {
			if (mus_validPixelHits_branch != 0) {
				mus_validPixelHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_validPixelHits_branch does not exist!\n");
				exit(1);
			}
			mus_validPixelHits_isLoaded = true;
		}
		return mus_validPixelHits_;
	}
	const vector<int> &pfcands_charge()
	{
		if (not pfcands_charge_isLoaded) {
			if (pfcands_charge_branch != 0) {
				pfcands_charge_branch->GetEntry(index);
			} else { 
				printf("branch pfcands_charge_branch does not exist!\n");
				exit(1);
			}
			pfcands_charge_isLoaded = true;
		}
		return pfcands_charge_;
	}
	const vector<int> &pfcands_particleId()
	{
		if (not pfcands_particleId_isLoaded) {
			if (pfcands_particleId_branch != 0) {
				pfcands_particleId_branch->GetEntry(index);
			} else { 
				printf("branch pfcands_particleId_branch does not exist!\n");
				exit(1);
			}
			pfcands_particleId_isLoaded = true;
		}
		return pfcands_particleId_;
	}
	const vector<int> &pfjets_chargedHadronMultiplicity()
	{
		if (not pfjets_chargedHadronMultiplicity_isLoaded) {
			if (pfjets_chargedHadronMultiplicity_branch != 0) {
				pfjets_chargedHadronMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_chargedHadronMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedHadronMultiplicity_isLoaded = true;
		}
		return pfjets_chargedHadronMultiplicity_;
	}
	const vector<int> &pfjets_chargedMultiplicity()
	{
		if (not pfjets_chargedMultiplicity_isLoaded) {
			if (pfjets_chargedMultiplicity_branch != 0) {
				pfjets_chargedMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_chargedMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_chargedMultiplicity_isLoaded = true;
		}
		return pfjets_chargedMultiplicity_;
	}
	const vector<int> &pfjets_electronMultiplicity()
	{
		if (not pfjets_electronMultiplicity_isLoaded) {
			if (pfjets_electronMultiplicity_branch != 0) {
				pfjets_electronMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_electronMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_electronMultiplicity_isLoaded = true;
		}
		return pfjets_electronMultiplicity_;
	}
	const vector<int> &pfjets_muonMultiplicity()
	{
		if (not pfjets_muonMultiplicity_isLoaded) {
			if (pfjets_muonMultiplicity_branch != 0) {
				pfjets_muonMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_muonMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_muonMultiplicity_isLoaded = true;
		}
		return pfjets_muonMultiplicity_;
	}
	const vector<int> &pfjets_neutralHadronMultiplicity()
	{
		if (not pfjets_neutralHadronMultiplicity_isLoaded) {
			if (pfjets_neutralHadronMultiplicity_branch != 0) {
				pfjets_neutralHadronMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_neutralHadronMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralHadronMultiplicity_isLoaded = true;
		}
		return pfjets_neutralHadronMultiplicity_;
	}
	const vector<int> &pfjets_neutralMultiplicity()
	{
		if (not pfjets_neutralMultiplicity_isLoaded) {
			if (pfjets_neutralMultiplicity_branch != 0) {
				pfjets_neutralMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_neutralMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_neutralMultiplicity_isLoaded = true;
		}
		return pfjets_neutralMultiplicity_;
	}
	const vector<int> &pfjets_partonFlavour()
	{
		if (not pfjets_partonFlavour_isLoaded) {
			if (pfjets_partonFlavour_branch != 0) {
				pfjets_partonFlavour_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_partonFlavour_branch does not exist!\n");
				exit(1);
			}
			pfjets_partonFlavour_isLoaded = true;
		}
		return pfjets_partonFlavour_;
	}
	const vector<int> &pfjets_photonMultiplicity()
	{
		if (not pfjets_photonMultiplicity_isLoaded) {
			if (pfjets_photonMultiplicity_branch != 0) {
				pfjets_photonMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_photonMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_photonMultiplicity_isLoaded = true;
		}
		return pfjets_photonMultiplicity_;
	}
	const vector<int> &pfjets_puppi_chargedHadronMultiplicity()
	{
		if (not pfjets_puppi_chargedHadronMultiplicity_isLoaded) {
			if (pfjets_puppi_chargedHadronMultiplicity_branch != 0) {
				pfjets_puppi_chargedHadronMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_chargedHadronMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_chargedHadronMultiplicity_isLoaded = true;
		}
		return pfjets_puppi_chargedHadronMultiplicity_;
	}
	const vector<int> &pfjets_puppi_chargedMultiplicity()
	{
		if (not pfjets_puppi_chargedMultiplicity_isLoaded) {
			if (pfjets_puppi_chargedMultiplicity_branch != 0) {
				pfjets_puppi_chargedMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_chargedMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_chargedMultiplicity_isLoaded = true;
		}
		return pfjets_puppi_chargedMultiplicity_;
	}
	const vector<int> &pfjets_puppi_electronMultiplicity()
	{
		if (not pfjets_puppi_electronMultiplicity_isLoaded) {
			if (pfjets_puppi_electronMultiplicity_branch != 0) {
				pfjets_puppi_electronMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_electronMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_electronMultiplicity_isLoaded = true;
		}
		return pfjets_puppi_electronMultiplicity_;
	}
	const vector<int> &pfjets_puppi_muonMultiplicity()
	{
		if (not pfjets_puppi_muonMultiplicity_isLoaded) {
			if (pfjets_puppi_muonMultiplicity_branch != 0) {
				pfjets_puppi_muonMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_muonMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_muonMultiplicity_isLoaded = true;
		}
		return pfjets_puppi_muonMultiplicity_;
	}
	const vector<int> &pfjets_puppi_neutralHadronMultiplicity()
	{
		if (not pfjets_puppi_neutralHadronMultiplicity_isLoaded) {
			if (pfjets_puppi_neutralHadronMultiplicity_branch != 0) {
				pfjets_puppi_neutralHadronMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_neutralHadronMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_neutralHadronMultiplicity_isLoaded = true;
		}
		return pfjets_puppi_neutralHadronMultiplicity_;
	}
	const vector<int> &pfjets_puppi_neutralMultiplicity()
	{
		if (not pfjets_puppi_neutralMultiplicity_isLoaded) {
			if (pfjets_puppi_neutralMultiplicity_branch != 0) {
				pfjets_puppi_neutralMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_neutralMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_neutralMultiplicity_isLoaded = true;
		}
		return pfjets_puppi_neutralMultiplicity_;
	}
	const vector<int> &pfjets_puppi_partonFlavour()
	{
		if (not pfjets_puppi_partonFlavour_isLoaded) {
			if (pfjets_puppi_partonFlavour_branch != 0) {
				pfjets_puppi_partonFlavour_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_partonFlavour_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_partonFlavour_isLoaded = true;
		}
		return pfjets_puppi_partonFlavour_;
	}
	const vector<int> &pfjets_puppi_photonMultiplicity()
	{
		if (not pfjets_puppi_photonMultiplicity_isLoaded) {
			if (pfjets_puppi_photonMultiplicity_branch != 0) {
				pfjets_puppi_photonMultiplicity_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_photonMultiplicity_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_photonMultiplicity_isLoaded = true;
		}
		return pfjets_puppi_photonMultiplicity_;
	}
	const vector<int> &taus_pf_charge()
	{
		if (not taus_pf_charge_isLoaded) {
			if (taus_pf_charge_branch != 0) {
				taus_pf_charge_branch->GetEntry(index);
			} else { 
				printf("branch taus_pf_charge_branch does not exist!\n");
				exit(1);
			}
			taus_pf_charge_isLoaded = true;
		}
		return taus_pf_charge_;
	}
	const vector<int> &photons_fiduciality()
	{
		if (not photons_fiduciality_isLoaded) {
			if (photons_fiduciality_branch != 0) {
				photons_fiduciality_branch->GetEntry(index);
			} else { 
				printf("branch photons_fiduciality_branch does not exist!\n");
				exit(1);
			}
			photons_fiduciality_isLoaded = true;
		}
		return photons_fiduciality_;
	}
	const vector<int> &photons_photonID_loose()
	{
		if (not photons_photonID_loose_isLoaded) {
			if (photons_photonID_loose_branch != 0) {
				photons_photonID_loose_branch->GetEntry(index);
			} else { 
				printf("branch photons_photonID_loose_branch does not exist!\n");
				exit(1);
			}
			photons_photonID_loose_isLoaded = true;
		}
		return photons_photonID_loose_;
	}
	const vector<int> &photons_photonID_tight()
	{
		if (not photons_photonID_tight_isLoaded) {
			if (photons_photonID_tight_branch != 0) {
				photons_photonID_tight_branch->GetEntry(index);
			} else { 
				printf("branch photons_photonID_tight_branch does not exist!\n");
				exit(1);
			}
			photons_photonID_tight_isLoaded = true;
		}
		return photons_photonID_tight_;
	}
	const vector<int> &puInfo_bunchCrossing()
	{
		if (not puInfo_bunchCrossing_isLoaded) {
			if (puInfo_bunchCrossing_branch != 0) {
				puInfo_bunchCrossing_branch->GetEntry(index);
			} else { 
				printf("branch puInfo_bunchCrossing_branch does not exist!\n");
				exit(1);
			}
			puInfo_bunchCrossing_isLoaded = true;
		}
		return puInfo_bunchCrossing_;
	}
	const vector<int> &puInfo_nPUvertices()
	{
		if (not puInfo_nPUvertices_isLoaded) {
			if (puInfo_nPUvertices_branch != 0) {
				puInfo_nPUvertices_branch->GetEntry(index);
			} else { 
				printf("branch puInfo_nPUvertices_branch does not exist!\n");
				exit(1);
			}
			puInfo_nPUvertices_isLoaded = true;
		}
		return puInfo_nPUvertices_;
	}
	const vector<int> &convs_algo()
	{
		if (not convs_algo_isLoaded) {
			if (convs_algo_branch != 0) {
				convs_algo_branch->GetEntry(index);
			} else { 
				printf("branch convs_algo_branch does not exist!\n");
				exit(1);
			}
			convs_algo_isLoaded = true;
		}
		return convs_algo_;
	}
	const vector<int> &convs_isConverted()
	{
		if (not convs_isConverted_isLoaded) {
			if (convs_isConverted_branch != 0) {
				convs_isConverted_branch->GetEntry(index);
			} else { 
				printf("branch convs_isConverted_branch does not exist!\n");
				exit(1);
			}
			convs_isConverted_isLoaded = true;
		}
		return convs_isConverted_;
	}
	const vector<int> &convs_quality()
	{
		if (not convs_quality_isLoaded) {
			if (convs_quality_branch != 0) {
				convs_quality_branch->GetEntry(index);
			} else { 
				printf("branch convs_quality_branch does not exist!\n");
				exit(1);
			}
			convs_quality_isLoaded = true;
		}
		return convs_quality_;
	}
	const vector<int> &svs_nTrks()
	{
		if (not svs_nTrks_isLoaded) {
			if (svs_nTrks_branch != 0) {
				svs_nTrks_branch->GetEntry(index);
			} else { 
				printf("branch svs_nTrks_branch does not exist!\n");
				exit(1);
			}
			svs_nTrks_isLoaded = true;
		}
		return svs_nTrks_;
	}
	const vector<int> &ak8jets_nSubJets()
	{
		if (not ak8jets_nSubJets_isLoaded) {
			if (ak8jets_nSubJets_branch != 0) {
				ak8jets_nSubJets_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_nSubJets_branch does not exist!\n");
				exit(1);
			}
			ak8jets_nSubJets_isLoaded = true;
		}
		return ak8jets_nSubJets_;
	}
	const vector<int> &ak8jets_partonFlavour()
	{
		if (not ak8jets_partonFlavour_isLoaded) {
			if (ak8jets_partonFlavour_branch != 0) {
				ak8jets_partonFlavour_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_partonFlavour_branch does not exist!\n");
				exit(1);
			}
			ak8jets_partonFlavour_isLoaded = true;
		}
		return ak8jets_partonFlavour_;
	}
	const vector<int> &vtxs_isFake()
	{
		if (not vtxs_isFake_isLoaded) {
			if (vtxs_isFake_branch != 0) {
				vtxs_isFake_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_isFake_branch does not exist!\n");
				exit(1);
			}
			vtxs_isFake_isLoaded = true;
		}
		return vtxs_isFake_;
	}
	const vector<int> &vtxs_isValid()
	{
		if (not vtxs_isValid_isLoaded) {
			if (vtxs_isValid_branch != 0) {
				vtxs_isValid_branch->GetEntry(index);
			} else { 
				printf("branch vtxs_isValid_branch does not exist!\n");
				exit(1);
			}
			vtxs_isValid_isLoaded = true;
		}
		return vtxs_isValid_;
	}
	const vector<vector<int> > &pfjets_nonCHS_pfcandIndicies()
	{
		if (not pfjets_nonCHS_pfcandIndicies_isLoaded) {
			if (pfjets_nonCHS_pfcandIndicies_branch != 0) {
				pfjets_nonCHS_pfcandIndicies_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_nonCHS_pfcandIndicies_branch does not exist!\n");
				exit(1);
			}
			pfjets_nonCHS_pfcandIndicies_isLoaded = true;
		}
		return pfjets_nonCHS_pfcandIndicies_;
	}
	const vector<vector<int> > &els_PFCand_idx()
	{
		if (not els_PFCand_idx_isLoaded) {
			if (els_PFCand_idx_branch != 0) {
				els_PFCand_idx_branch->GetEntry(index);
			} else { 
				printf("branch els_PFCand_idx_branch does not exist!\n");
				exit(1);
			}
			els_PFCand_idx_isLoaded = true;
		}
		return els_PFCand_idx_;
	}
	const vector<vector<int> > &genps_lepdaughter_id()
	{
		if (not genps_lepdaughter_id_isLoaded) {
			if (genps_lepdaughter_id_branch != 0) {
				genps_lepdaughter_id_branch->GetEntry(index);
			} else { 
				printf("branch genps_lepdaughter_id_branch does not exist!\n");
				exit(1);
			}
			genps_lepdaughter_id_isLoaded = true;
		}
		return genps_lepdaughter_id_;
	}
	const vector<vector<int> > &genps_lepdaughter_idx()
	{
		if (not genps_lepdaughter_idx_isLoaded) {
			if (genps_lepdaughter_idx_branch != 0) {
				genps_lepdaughter_idx_branch->GetEntry(index);
			} else { 
				printf("branch genps_lepdaughter_idx_branch does not exist!\n");
				exit(1);
			}
			genps_lepdaughter_idx_isLoaded = true;
		}
		return genps_lepdaughter_idx_;
	}
	const vector<vector<int> > &hlt_trigObjs_id()
	{
		if (not hlt_trigObjs_id_isLoaded) {
			if (hlt_trigObjs_id_branch != 0) {
				hlt_trigObjs_id_branch->GetEntry(index);
			} else { 
				printf("branch hlt_trigObjs_id_branch does not exist!\n");
				exit(1);
			}
			hlt_trigObjs_id_isLoaded = true;
		}
		return hlt_trigObjs_id_;
	}
	const vector<vector<int> > &mus_nStationCorrelatedHits()
	{
		if (not mus_nStationCorrelatedHits_isLoaded) {
			if (mus_nStationCorrelatedHits_branch != 0) {
				mus_nStationCorrelatedHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_nStationCorrelatedHits_branch does not exist!\n");
				exit(1);
			}
			mus_nStationCorrelatedHits_isLoaded = true;
		}
		return mus_nStationCorrelatedHits_;
	}
	const vector<vector<int> > &mus_nStationHits()
	{
		if (not mus_nStationHits_isLoaded) {
			if (mus_nStationHits_branch != 0) {
				mus_nStationHits_branch->GetEntry(index);
			} else { 
				printf("branch mus_nStationHits_branch does not exist!\n");
				exit(1);
			}
			mus_nStationHits_isLoaded = true;
		}
		return mus_nStationHits_;
	}
	const vector<vector<int> > &pfjets_pfcandIndicies()
	{
		if (not pfjets_pfcandIndicies_isLoaded) {
			if (pfjets_pfcandIndicies_branch != 0) {
				pfjets_pfcandIndicies_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_pfcandIndicies_branch does not exist!\n");
				exit(1);
			}
			pfjets_pfcandIndicies_isLoaded = true;
		}
		return pfjets_pfcandIndicies_;
	}
	const vector<vector<int> > &pfjets_puppi_pfcandIndicies()
	{
		if (not pfjets_puppi_pfcandIndicies_isLoaded) {
			if (pfjets_puppi_pfcandIndicies_branch != 0) {
				pfjets_puppi_pfcandIndicies_branch->GetEntry(index);
			} else { 
				printf("branch pfjets_puppi_pfcandIndicies_branch does not exist!\n");
				exit(1);
			}
			pfjets_puppi_pfcandIndicies_isLoaded = true;
		}
		return pfjets_puppi_pfcandIndicies_;
	}
	const vector<vector<int> > &photons_PFCand_idx()
	{
		if (not photons_PFCand_idx_isLoaded) {
			if (photons_PFCand_idx_branch != 0) {
				photons_PFCand_idx_branch->GetEntry(index);
			} else { 
				printf("branch photons_PFCand_idx_branch does not exist!\n");
				exit(1);
			}
			photons_PFCand_idx_isLoaded = true;
		}
		return photons_PFCand_idx_;
	}
	const vector<vector<int> > &convs_nHitsBeforeVtx()
	{
		if (not convs_nHitsBeforeVtx_isLoaded) {
			if (convs_nHitsBeforeVtx_branch != 0) {
				convs_nHitsBeforeVtx_branch->GetEntry(index);
			} else { 
				printf("branch convs_nHitsBeforeVtx_branch does not exist!\n");
				exit(1);
			}
			convs_nHitsBeforeVtx_isLoaded = true;
		}
		return convs_nHitsBeforeVtx_;
	}
	const vector<vector<int> > &convs_tkalgo()
	{
		if (not convs_tkalgo_isLoaded) {
			if (convs_tkalgo_branch != 0) {
				convs_tkalgo_branch->GetEntry(index);
			} else { 
				printf("branch convs_tkalgo_branch does not exist!\n");
				exit(1);
			}
			convs_tkalgo_isLoaded = true;
		}
		return convs_tkalgo_;
	}
	const vector<vector<int> > &convs_tkidx()
	{
		if (not convs_tkidx_isLoaded) {
			if (convs_tkidx_branch != 0) {
				convs_tkidx_branch->GetEntry(index);
			} else { 
				printf("branch convs_tkidx_branch does not exist!\n");
				exit(1);
			}
			convs_tkidx_isLoaded = true;
		}
		return convs_tkidx_;
	}
	const vector<vector<int> > &ak8jets_pfcandIndicies()
	{
		if (not ak8jets_pfcandIndicies_isLoaded) {
			if (ak8jets_pfcandIndicies_branch != 0) {
				ak8jets_pfcandIndicies_branch->GetEntry(index);
			} else { 
				printf("branch ak8jets_pfcandIndicies_branch does not exist!\n");
				exit(1);
			}
			ak8jets_pfcandIndicies_isLoaded = true;
		}
		return ak8jets_pfcandIndicies_;
	}
	const vector<unsigned char> &isotracks_fromPV()
	{
		if (not isotracks_fromPV_isLoaded) {
			if (isotracks_fromPV_branch != 0) {
				isotracks_fromPV_branch->GetEntry(index);
			} else { 
				printf("branch isotracks_fromPV_branch does not exist!\n");
				exit(1);
			}
			isotracks_fromPV_isLoaded = true;
		}
		return isotracks_fromPV_;
	}
	const vector<unsigned char> &pfcands_fromPV()
	{
		if (not pfcands_fromPV_isLoaded) {
			if (pfcands_fromPV_branch != 0) {
				pfcands_fromPV_branch->GetEntry(index);
			} else { 
				printf("branch pfcands_fromPV_branch does not exist!\n");
				exit(1);
			}
			pfcands_fromPV_isLoaded = true;
		}
		return pfcands_fromPV_;
	}
	unsigned int &els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version()
	{
		if (not els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_isLoaded) {
			if (els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch != 0) {
				els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version()
	{
		if (not els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_branch != 0) {
				els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version()
	{
		if (not els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_branch != 0) {
				els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version()
	{
		if (not els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch != 0) {
				els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version()
	{
		if (not els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) {
				els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version()
	{
		if (not els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_isLoaded) {
			if (els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_branch != 0) {
				els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version_;
	}
	unsigned int &els_HLT_Ele17_Ele8_LeadingLeg_version()
	{
		if (not els_HLT_Ele17_Ele8_LeadingLeg_version_isLoaded) {
			if (els_HLT_Ele17_Ele8_LeadingLeg_version_branch != 0) {
				els_HLT_Ele17_Ele8_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_LeadingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_LeadingLeg_version_;
	}
	unsigned int &els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version()
	{
		if (not els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_isLoaded) {
			if (els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_branch != 0) {
				els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version_;
	}
	unsigned int &els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version()
	{
		if (not els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_isLoaded) {
			if (els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_branch != 0) {
				els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version_;
	}
	unsigned int &els_HLT_Ele17_Ele8_TrailingLeg_version()
	{
		if (not els_HLT_Ele17_Ele8_TrailingLeg_version_isLoaded) {
			if (els_HLT_Ele17_Ele8_TrailingLeg_version_branch != 0) {
				els_HLT_Ele17_Ele8_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_TrailingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_TrailingLeg_version_;
	}
	unsigned int &els_HLT_Ele17_Ele8_version()
	{
		if (not els_HLT_Ele17_Ele8_version_isLoaded) {
			if (els_HLT_Ele17_Ele8_version_branch != 0) {
				els_HLT_Ele17_Ele8_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_version_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_version_;
	}
	unsigned int &els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version()
	{
		if (not els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch != 0) {
				els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version()
	{
		if (not els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) {
				els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele20_SC4_Mass50_LeadingLeg_version()
	{
		if (not els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_isLoaded) {
			if (els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_branch != 0) {
				els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele20_SC4_Mass50_LeadingLeg_version_;
	}
	unsigned int &els_HLT_Ele20_SC4_Mass50_TrailingLeg_version()
	{
		if (not els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_isLoaded) {
			if (els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_branch != 0) {
				els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele20_SC4_Mass50_TrailingLeg_version_;
	}
	unsigned int &els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version()
	{
		if (not els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch != 0) {
				els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version()
	{
		if (not els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) {
				els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version()
	{
		if (not els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_isLoaded) {
			if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_branch != 0) {
				els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version_;
	}
	unsigned int &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version()
	{
		if (not els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_isLoaded) {
			if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_branch != 0) {
				els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version_;
	}
	unsigned int &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version()
	{
		if (not els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_isLoaded) {
			if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_branch != 0) {
				els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_isLoaded = true;
		}
		return els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version_;
	}
	unsigned int &els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version()
	{
		if (not els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_isLoaded) {
			if (els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_branch != 0) {
				els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version_;
	}
	unsigned int &els_HLT_Ele25WP60_Ele8_Mass55_version()
	{
		if (not els_HLT_Ele25WP60_Ele8_Mass55_version_isLoaded) {
			if (els_HLT_Ele25WP60_Ele8_Mass55_version_branch != 0) {
				els_HLT_Ele25WP60_Ele8_Mass55_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele25WP60_Ele8_Mass55_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele25WP60_Ele8_Mass55_version_isLoaded = true;
		}
		return els_HLT_Ele25WP60_Ele8_Mass55_version_;
	}
	unsigned int &els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version()
	{
		if (not els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_isLoaded) {
			if (els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_branch != 0) {
				els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version_;
	}
	unsigned int &els_HLT_Ele25WP60_SC4_Mass55_version()
	{
		if (not els_HLT_Ele25WP60_SC4_Mass55_version_isLoaded) {
			if (els_HLT_Ele25WP60_SC4_Mass55_version_branch != 0) {
				els_HLT_Ele25WP60_SC4_Mass55_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele25WP60_SC4_Mass55_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele25WP60_SC4_Mass55_version_isLoaded = true;
		}
		return els_HLT_Ele25WP60_SC4_Mass55_version_;
	}
	unsigned int &els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version()
	{
		if (not els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_isLoaded) {
			if (els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_branch != 0) {
				els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_isLoaded = true;
		}
		return els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version_;
	}
	unsigned int &els_HLT_Ele27_WP80_version()
	{
		if (not els_HLT_Ele27_WP80_version_isLoaded) {
			if (els_HLT_Ele27_WP80_version_branch != 0) {
				els_HLT_Ele27_WP80_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele27_WP80_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele27_WP80_version_isLoaded = true;
		}
		return els_HLT_Ele27_WP80_version_;
	}
	unsigned int &els_HLT_Ele32_SC17_Mass50_LeadingLeg_version()
	{
		if (not els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_isLoaded) {
			if (els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_branch != 0) {
				els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele32_SC17_Mass50_LeadingLeg_version_;
	}
	unsigned int &els_HLT_Ele32_SC17_Mass50_TrailingLeg_version()
	{
		if (not els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_isLoaded) {
			if (els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_branch != 0) {
				els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele32_SC17_Mass50_TrailingLeg_version_;
	}
	unsigned int &els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version()
	{
		if (not els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch != 0) {
				els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version()
	{
		if (not els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) {
				els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version()
	{
		if (not els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_isLoaded) {
			if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_branch != 0) {
				els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_isLoaded = true;
		}
		return els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version_;
	}
	unsigned int &els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version()
	{
		if (not els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_isLoaded) {
			if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_branch != 0) {
				els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_isLoaded = true;
		}
		return els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version_;
	}
	unsigned int &els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version()
	{
		if (not els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded) {
			if (els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch != 0) {
				els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Mu17_Ele8_TrailingLeg_version()
	{
		if (not els_HLT_Mu17_Ele8_TrailingLeg_version_isLoaded) {
			if (els_HLT_Mu17_Ele8_TrailingLeg_version_branch != 0) {
				els_HLT_Mu17_Ele8_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu17_Ele8_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu17_Ele8_TrailingLeg_version_isLoaded = true;
		}
		return els_HLT_Mu17_Ele8_TrailingLeg_version_;
	}
	unsigned int &els_HLT_Mu17_Ele8_version()
	{
		if (not els_HLT_Mu17_Ele8_version_isLoaded) {
			if (els_HLT_Mu17_Ele8_version_branch != 0) {
				els_HLT_Mu17_Ele8_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu17_Ele8_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu17_Ele8_version_isLoaded = true;
		}
		return els_HLT_Mu17_Ele8_version_;
	}
	unsigned int &els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version()
	{
		if (not els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_isLoaded) {
			if (els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch != 0) {
				els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Mu8_Ele17_version()
	{
		if (not els_HLT_Mu8_Ele17_version_isLoaded) {
			if (els_HLT_Mu8_Ele17_version_branch != 0) {
				els_HLT_Mu8_Ele17_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu8_Ele17_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu8_Ele17_version_isLoaded = true;
		}
		return els_HLT_Mu8_Ele17_version_;
	}
	unsigned int &els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version()
	{
		if (not els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_isLoaded) {
			if (els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch != 0) {
				els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version_;
	}
	unsigned int &els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version()
	{
		if (not els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_isLoaded) {
			if (els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch != 0) {
				els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_isLoaded = true;
		}
		return els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version_;
	}
	unsigned int &evt_nels()
	{
		if (not evt_nels_isLoaded) {
			if (evt_nels_branch != 0) {
				evt_nels_branch->GetEntry(index);
			} else { 
				printf("branch evt_nels_branch does not exist!\n");
				exit(1);
			}
			evt_nels_isLoaded = true;
		}
		return evt_nels_;
	}
	unsigned int &evt_detectorStatus()
	{
		if (not evt_detectorStatus_isLoaded) {
			if (evt_detectorStatus_branch != 0) {
				evt_detectorStatus_branch->GetEntry(index);
			} else { 
				printf("branch evt_detectorStatus_branch does not exist!\n");
				exit(1);
			}
			evt_detectorStatus_isLoaded = true;
		}
		return evt_detectorStatus_;
	}
	unsigned int &evt_lumiBlock()
	{
		if (not evt_lumiBlock_isLoaded) {
			if (evt_lumiBlock_branch != 0) {
				evt_lumiBlock_branch->GetEntry(index);
			} else { 
				printf("branch evt_lumiBlock_branch does not exist!\n");
				exit(1);
			}
			evt_lumiBlock_isLoaded = true;
		}
		return evt_lumiBlock_;
	}
	unsigned int &evt_run()
	{
		if (not evt_run_isLoaded) {
			if (evt_run_branch != 0) {
				evt_run_branch->GetEntry(index);
			} else { 
				printf("branch evt_run_branch does not exist!\n");
				exit(1);
			}
			evt_run_isLoaded = true;
		}
		return evt_run_;
	}
	unsigned int &evt_ngenjetsNoMuNoNu()
	{
		if (not evt_ngenjetsNoMuNoNu_isLoaded) {
			if (evt_ngenjetsNoMuNoNu_branch != 0) {
				evt_ngenjetsNoMuNoNu_branch->GetEntry(index);
			} else { 
				printf("branch evt_ngenjetsNoMuNoNu_branch does not exist!\n");
				exit(1);
			}
			evt_ngenjetsNoMuNoNu_isLoaded = true;
		}
		return evt_ngenjetsNoMuNoNu_;
	}
	unsigned int &genps_signalProcessID()
	{
		if (not genps_signalProcessID_isLoaded) {
			if (genps_signalProcessID_branch != 0) {
				genps_signalProcessID_branch->GetEntry(index);
			} else { 
				printf("branch genps_signalProcessID_branch does not exist!\n");
				exit(1);
			}
			genps_signalProcessID_isLoaded = true;
		}
		return genps_signalProcessID_;
	}
	unsigned int &evt_ngenjets()
	{
		if (not evt_ngenjets_isLoaded) {
			if (evt_ngenjets_branch != 0) {
				evt_ngenjets_branch->GetEntry(index);
			} else { 
				printf("branch evt_ngenjets_branch does not exist!\n");
				exit(1);
			}
			evt_ngenjets_isLoaded = true;
		}
		return evt_ngenjets_;
	}
	unsigned int &mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version()
	{
		if (not mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_isLoaded) {
			if (mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_branch != 0) {
				mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_isLoaded = true;
		}
		return mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version_;
	}
	unsigned int &mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version()
	{
		if (not mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_isLoaded) {
			if (mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_branch != 0) {
				mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_isLoaded = true;
		}
		return mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version_;
	}
	unsigned int &mus_HLT_IsoMu24_eta2p1_version()
	{
		if (not mus_HLT_IsoMu24_eta2p1_version_isLoaded) {
			if (mus_HLT_IsoMu24_eta2p1_version_branch != 0) {
				mus_HLT_IsoMu24_eta2p1_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_IsoMu24_eta2p1_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_IsoMu24_eta2p1_version_isLoaded = true;
		}
		return mus_HLT_IsoMu24_eta2p1_version_;
	}
	unsigned int &mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version()
	{
		if (not mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_isLoaded) {
			if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_branch != 0) {
				mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version_;
	}
	unsigned int &mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version()
	{
		if (not mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_isLoaded) {
			if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_branch != 0) {
				mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_Ele8_LeadingLeg_version()
	{
		if (not mus_HLT_Mu17_Ele8_LeadingLeg_version_isLoaded) {
			if (mus_HLT_Mu17_Ele8_LeadingLeg_version_branch != 0) {
				mus_HLT_Mu17_Ele8_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Ele8_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Ele8_LeadingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu17_Ele8_LeadingLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_Ele8_version()
	{
		if (not mus_HLT_Mu17_Ele8_version_isLoaded) {
			if (mus_HLT_Mu17_Ele8_version_branch != 0) {
				mus_HLT_Mu17_Ele8_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Ele8_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Ele8_version_isLoaded = true;
		}
		return mus_HLT_Mu17_Ele8_version_;
	}
	unsigned int &mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version()
	{
		if (not mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_isLoaded) {
			if (mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_branch != 0) {
				mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_isLoaded = true;
		}
		return mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version_;
	}
	unsigned int &mus_HLT_Mu17_Mu8_LeadingLeg_version()
	{
		if (not mus_HLT_Mu17_Mu8_LeadingLeg_version_isLoaded) {
			if (mus_HLT_Mu17_Mu8_LeadingLeg_version_branch != 0) {
				mus_HLT_Mu17_Mu8_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Mu8_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Mu8_LeadingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu17_Mu8_LeadingLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_Mu8_TrailingLeg_version()
	{
		if (not mus_HLT_Mu17_Mu8_TrailingLeg_version_isLoaded) {
			if (mus_HLT_Mu17_Mu8_TrailingLeg_version_branch != 0) {
				mus_HLT_Mu17_Mu8_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Mu8_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Mu8_TrailingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu17_Mu8_TrailingLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_Mu8_version()
	{
		if (not mus_HLT_Mu17_Mu8_version_isLoaded) {
			if (mus_HLT_Mu17_Mu8_version_branch != 0) {
				mus_HLT_Mu17_Mu8_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Mu8_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Mu8_version_isLoaded = true;
		}
		return mus_HLT_Mu17_Mu8_version_;
	}
	unsigned int &mus_HLT_Mu17_TkMu8_LeadingLeg_version()
	{
		if (not mus_HLT_Mu17_TkMu8_LeadingLeg_version_isLoaded) {
			if (mus_HLT_Mu17_TkMu8_LeadingLeg_version_branch != 0) {
				mus_HLT_Mu17_TkMu8_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TkMu8_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TkMu8_LeadingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TkMu8_LeadingLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version()
	{
		if (not mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_isLoaded) {
			if (mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_branch != 0) {
				mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version_;
	}
	unsigned int &mus_HLT_Mu17_TkMu8_TrailingLeg_version()
	{
		if (not mus_HLT_Mu17_TkMu8_TrailingLeg_version_isLoaded) {
			if (mus_HLT_Mu17_TkMu8_TrailingLeg_version_branch != 0) {
				mus_HLT_Mu17_TkMu8_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TkMu8_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TkMu8_TrailingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TkMu8_TrailingLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_TkMu8_version()
	{
		if (not mus_HLT_Mu17_TkMu8_version_isLoaded) {
			if (mus_HLT_Mu17_TkMu8_version_branch != 0) {
				mus_HLT_Mu17_TkMu8_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TkMu8_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TkMu8_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TkMu8_version_;
	}
	unsigned int &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version_;
	}
	unsigned int &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version_;
	}
	unsigned int &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version_;
	}
	unsigned int &mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version()
	{
		if (not mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_isLoaded) {
			if (mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch != 0) {
				mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_;
	}
	unsigned int &mus_HLT_Mu8_Ele17_TrailingLeg_version()
	{
		if (not mus_HLT_Mu8_Ele17_TrailingLeg_version_isLoaded) {
			if (mus_HLT_Mu8_Ele17_TrailingLeg_version_branch != 0) {
				mus_HLT_Mu8_Ele17_TrailingLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu8_Ele17_TrailingLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu8_Ele17_TrailingLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu8_Ele17_TrailingLeg_version_;
	}
	unsigned int &mus_HLT_Mu8_Ele17_version()
	{
		if (not mus_HLT_Mu8_Ele17_version_isLoaded) {
			if (mus_HLT_Mu8_Ele17_version_branch != 0) {
				mus_HLT_Mu8_Ele17_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu8_Ele17_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu8_Ele17_version_isLoaded = true;
		}
		return mus_HLT_Mu8_Ele17_version_;
	}
	unsigned int &mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version()
	{
		if (not mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_isLoaded) {
			if (mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_branch != 0) {
				mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version_;
	}
	unsigned int &mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version()
	{
		if (not mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_isLoaded) {
			if (mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch != 0) {
				mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_isLoaded = true;
		}
		return mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version_;
	}
	unsigned int &evt_nphotons()
	{
		if (not evt_nphotons_isLoaded) {
			if (evt_nphotons_branch != 0) {
				evt_nphotons_branch->GetEntry(index);
			} else { 
				printf("branch evt_nphotons_branch does not exist!\n");
				exit(1);
			}
			evt_nphotons_isLoaded = true;
		}
		return evt_nphotons_;
	}
	unsigned int &evt_nvtxs()
	{
		if (not evt_nvtxs_isLoaded) {
			if (evt_nvtxs_branch != 0) {
				evt_nvtxs_branch->GetEntry(index);
			} else { 
				printf("branch evt_nvtxs_branch does not exist!\n");
				exit(1);
			}
			evt_nvtxs_isLoaded = true;
		}
		return evt_nvtxs_;
	}
	const vector<unsigned int> &els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg()
	{
		if (not els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_isLoaded) {
			if (els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch != 0) {
				els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_isLoaded = true;
		}
		return els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg()
	{
		if (not els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_isLoaded) {
			if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_branch != 0) {
				els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg()
	{
		if (not els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_isLoaded) {
			if (els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_branch != 0) {
				els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg()
	{
		if (not els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded) {
			if (els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch != 0) {
				els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg()
	{
		if (not els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded) {
			if (els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) {
				els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele17_Ele8()
	{
		if (not els_HLT_Ele17_Ele8_isLoaded) {
			if (els_HLT_Ele17_Ele8_branch != 0) {
				els_HLT_Ele17_Ele8_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_;
	}
	const vector<unsigned int> &els_HLT_Ele17_Ele8_L1sL1DoubleEG137()
	{
		if (not els_HLT_Ele17_Ele8_L1sL1DoubleEG137_isLoaded) {
			if (els_HLT_Ele17_Ele8_L1sL1DoubleEG137_branch != 0) {
				els_HLT_Ele17_Ele8_L1sL1DoubleEG137_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_L1sL1DoubleEG137_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_L1sL1DoubleEG137_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_L1sL1DoubleEG137_;
	}
	const vector<unsigned int> &els_HLT_Ele17_Ele8_LeadingLeg()
	{
		if (not els_HLT_Ele17_Ele8_LeadingLeg_isLoaded) {
			if (els_HLT_Ele17_Ele8_LeadingLeg_branch != 0) {
				els_HLT_Ele17_Ele8_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_LeadingLeg_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_LeadingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele17_Ele8_Mass50_LeadingLeg()
	{
		if (not els_HLT_Ele17_Ele8_Mass50_LeadingLeg_isLoaded) {
			if (els_HLT_Ele17_Ele8_Mass50_LeadingLeg_branch != 0) {
				els_HLT_Ele17_Ele8_Mass50_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_Mass50_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_Mass50_LeadingLeg_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_Mass50_LeadingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele17_Ele8_Mass50_TrailingLeg()
	{
		if (not els_HLT_Ele17_Ele8_Mass50_TrailingLeg_isLoaded) {
			if (els_HLT_Ele17_Ele8_Mass50_TrailingLeg_branch != 0) {
				els_HLT_Ele17_Ele8_Mass50_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_Mass50_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_Mass50_TrailingLeg_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_Mass50_TrailingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele17_Ele8_TrailingLeg()
	{
		if (not els_HLT_Ele17_Ele8_TrailingLeg_isLoaded) {
			if (els_HLT_Ele17_Ele8_TrailingLeg_branch != 0) {
				els_HLT_Ele17_Ele8_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele17_Ele8_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele17_Ele8_TrailingLeg_isLoaded = true;
		}
		return els_HLT_Ele17_Ele8_TrailingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg()
	{
		if (not els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded) {
			if (els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch != 0) {
				els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg()
	{
		if (not els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded) {
			if (els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) {
				els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele20_SC4_Mass50_LeadingLeg()
	{
		if (not els_HLT_Ele20_SC4_Mass50_LeadingLeg_isLoaded) {
			if (els_HLT_Ele20_SC4_Mass50_LeadingLeg_branch != 0) {
				els_HLT_Ele20_SC4_Mass50_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele20_SC4_Mass50_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele20_SC4_Mass50_LeadingLeg_isLoaded = true;
		}
		return els_HLT_Ele20_SC4_Mass50_LeadingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele20_SC4_Mass50_TrailingLeg()
	{
		if (not els_HLT_Ele20_SC4_Mass50_TrailingLeg_isLoaded) {
			if (els_HLT_Ele20_SC4_Mass50_TrailingLeg_branch != 0) {
				els_HLT_Ele20_SC4_Mass50_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele20_SC4_Mass50_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele20_SC4_Mass50_TrailingLeg_isLoaded = true;
		}
		return els_HLT_Ele20_SC4_Mass50_TrailingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg()
	{
		if (not els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded) {
			if (els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch != 0) {
				els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg()
	{
		if (not els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded) {
			if (els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) {
				els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL()
	{
		if (not els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_isLoaded) {
			if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch != 0) {
				els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_isLoaded = true;
		}
		return els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_;
	}
	const vector<unsigned int> &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg()
	{
		if (not els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_isLoaded) {
			if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_branch != 0) {
				els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_isLoaded = true;
		}
		return els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg()
	{
		if (not els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_isLoaded) {
			if (els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_branch != 0) {
				els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_isLoaded = true;
		}
		return els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele25WP60_Ele8_Mass55()
	{
		if (not els_HLT_Ele25WP60_Ele8_Mass55_isLoaded) {
			if (els_HLT_Ele25WP60_Ele8_Mass55_branch != 0) {
				els_HLT_Ele25WP60_Ele8_Mass55_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele25WP60_Ele8_Mass55_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele25WP60_Ele8_Mass55_isLoaded = true;
		}
		return els_HLT_Ele25WP60_Ele8_Mass55_;
	}
	const vector<unsigned int> &els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg()
	{
		if (not els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_isLoaded) {
			if (els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_branch != 0) {
				els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_isLoaded = true;
		}
		return els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele25WP60_SC4_Mass55()
	{
		if (not els_HLT_Ele25WP60_SC4_Mass55_isLoaded) {
			if (els_HLT_Ele25WP60_SC4_Mass55_branch != 0) {
				els_HLT_Ele25WP60_SC4_Mass55_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele25WP60_SC4_Mass55_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele25WP60_SC4_Mass55_isLoaded = true;
		}
		return els_HLT_Ele25WP60_SC4_Mass55_;
	}
	const vector<unsigned int> &els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg()
	{
		if (not els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_isLoaded) {
			if (els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_branch != 0) {
				els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_isLoaded = true;
		}
		return els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele27_WP80()
	{
		if (not els_HLT_Ele27_WP80_isLoaded) {
			if (els_HLT_Ele27_WP80_branch != 0) {
				els_HLT_Ele27_WP80_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele27_WP80_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele27_WP80_isLoaded = true;
		}
		return els_HLT_Ele27_WP80_;
	}
	const vector<unsigned int> &els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22()
	{
		if (not els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_isLoaded) {
			if (els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_branch != 0) {
				els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_isLoaded = true;
		}
		return els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_;
	}
	const vector<unsigned int> &els_HLT_Ele32_SC17_Mass50_LeadingLeg()
	{
		if (not els_HLT_Ele32_SC17_Mass50_LeadingLeg_isLoaded) {
			if (els_HLT_Ele32_SC17_Mass50_LeadingLeg_branch != 0) {
				els_HLT_Ele32_SC17_Mass50_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele32_SC17_Mass50_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele32_SC17_Mass50_LeadingLeg_isLoaded = true;
		}
		return els_HLT_Ele32_SC17_Mass50_LeadingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele32_SC17_Mass50_TrailingLeg()
	{
		if (not els_HLT_Ele32_SC17_Mass50_TrailingLeg_isLoaded) {
			if (els_HLT_Ele32_SC17_Mass50_TrailingLeg_branch != 0) {
				els_HLT_Ele32_SC17_Mass50_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele32_SC17_Mass50_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele32_SC17_Mass50_TrailingLeg_isLoaded = true;
		}
		return els_HLT_Ele32_SC17_Mass50_TrailingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg()
	{
		if (not els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded) {
			if (els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch != 0) {
				els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg()
	{
		if (not els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded) {
			if (els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) {
				els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele5_SC5_JPsi_Mass2to4p5()
	{
		if (not els_HLT_Ele5_SC5_JPsi_Mass2to4p5_isLoaded) {
			if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_branch != 0) {
				els_HLT_Ele5_SC5_JPsi_Mass2to4p5_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele5_SC5_JPsi_Mass2to4p5_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele5_SC5_JPsi_Mass2to4p5_isLoaded = true;
		}
		return els_HLT_Ele5_SC5_JPsi_Mass2to4p5_;
	}
	const vector<unsigned int> &els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg()
	{
		if (not els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_isLoaded) {
			if (els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_branch != 0) {
				els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_isLoaded = true;
		}
		return els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_;
	}
	const vector<unsigned int> &els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg()
	{
		if (not els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded) {
			if (els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch != 0) {
				els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Mu17_Ele8()
	{
		if (not els_HLT_Mu17_Ele8_isLoaded) {
			if (els_HLT_Mu17_Ele8_branch != 0) {
				els_HLT_Mu17_Ele8_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu17_Ele8_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu17_Ele8_isLoaded = true;
		}
		return els_HLT_Mu17_Ele8_;
	}
	const vector<unsigned int> &els_HLT_Mu17_Ele8_TrailingLeg()
	{
		if (not els_HLT_Mu17_Ele8_TrailingLeg_isLoaded) {
			if (els_HLT_Mu17_Ele8_TrailingLeg_branch != 0) {
				els_HLT_Mu17_Ele8_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu17_Ele8_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu17_Ele8_TrailingLeg_isLoaded = true;
		}
		return els_HLT_Mu17_Ele8_TrailingLeg_;
	}
	const vector<unsigned int> &els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg()
	{
		if (not els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_isLoaded) {
			if (els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch != 0) {
				els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Mu8_Ele17()
	{
		if (not els_HLT_Mu8_Ele17_isLoaded) {
			if (els_HLT_Mu8_Ele17_branch != 0) {
				els_HLT_Mu8_Ele17_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu8_Ele17_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu8_Ele17_isLoaded = true;
		}
		return els_HLT_Mu8_Ele17_;
	}
	const vector<unsigned int> &els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg()
	{
		if (not els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_isLoaded) {
			if (els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch != 0) {
				els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_;
	}
	const vector<unsigned int> &els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg()
	{
		if (not els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_isLoaded) {
			if (els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch != 0) {
				els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch->GetEntry(index);
			} else { 
				printf("branch els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_branch does not exist!\n");
				exit(1);
			}
			els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_isLoaded = true;
		}
		return els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_;
	}
	const vector<unsigned int> &hlt_prescales()
	{
		if (not hlt_prescales_isLoaded) {
			if (hlt_prescales_branch != 0) {
				hlt_prescales_branch->GetEntry(index);
			} else { 
				printf("branch hlt_prescales_branch does not exist!\n");
				exit(1);
			}
			hlt_prescales_isLoaded = true;
		}
		return hlt_prescales_;
	}
	const vector<unsigned int> &mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg()
	{
		if (not mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_isLoaded) {
			if (mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_branch != 0) {
				mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_isLoaded = true;
		}
		return mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_;
	}
	const vector<unsigned int> &mus_HLT_IsoMu24_eta2p1()
	{
		if (not mus_HLT_IsoMu24_eta2p1_isLoaded) {
			if (mus_HLT_IsoMu24_eta2p1_branch != 0) {
				mus_HLT_IsoMu24_eta2p1_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_IsoMu24_eta2p1_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_IsoMu24_eta2p1_isLoaded = true;
		}
		return mus_HLT_IsoMu24_eta2p1_;
	}
	const vector<unsigned int> &mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1()
	{
		if (not mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_isLoaded) {
			if (mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_branch != 0) {
				mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_isLoaded = true;
		}
		return mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_;
	}
	const vector<unsigned int> &mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg()
	{
		if (not mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_isLoaded) {
			if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_branch != 0) {
				mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_isLoaded = true;
		}
		return mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg()
	{
		if (not mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_isLoaded) {
			if (mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_branch != 0) {
				mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_isLoaded = true;
		}
		return mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_Ele8()
	{
		if (not mus_HLT_Mu17_Ele8_isLoaded) {
			if (mus_HLT_Mu17_Ele8_branch != 0) {
				mus_HLT_Mu17_Ele8_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Ele8_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Ele8_isLoaded = true;
		}
		return mus_HLT_Mu17_Ele8_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_Ele8_LeadingLeg()
	{
		if (not mus_HLT_Mu17_Ele8_LeadingLeg_isLoaded) {
			if (mus_HLT_Mu17_Ele8_LeadingLeg_branch != 0) {
				mus_HLT_Mu17_Ele8_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Ele8_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Ele8_LeadingLeg_isLoaded = true;
		}
		return mus_HLT_Mu17_Ele8_LeadingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_Mu8()
	{
		if (not mus_HLT_Mu17_Mu8_isLoaded) {
			if (mus_HLT_Mu17_Mu8_branch != 0) {
				mus_HLT_Mu17_Mu8_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Mu8_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Mu8_isLoaded = true;
		}
		return mus_HLT_Mu17_Mu8_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen()
	{
		if (not mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_isLoaded) {
			if (mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_branch != 0) {
				mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_isLoaded = true;
		}
		return mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_Mu8_LeadingLeg()
	{
		if (not mus_HLT_Mu17_Mu8_LeadingLeg_isLoaded) {
			if (mus_HLT_Mu17_Mu8_LeadingLeg_branch != 0) {
				mus_HLT_Mu17_Mu8_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Mu8_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Mu8_LeadingLeg_isLoaded = true;
		}
		return mus_HLT_Mu17_Mu8_LeadingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_Mu8_TrailingLeg()
	{
		if (not mus_HLT_Mu17_Mu8_TrailingLeg_isLoaded) {
			if (mus_HLT_Mu17_Mu8_TrailingLeg_branch != 0) {
				mus_HLT_Mu17_Mu8_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_Mu8_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_Mu8_TrailingLeg_isLoaded = true;
		}
		return mus_HLT_Mu17_Mu8_TrailingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8()
	{
		if (not mus_HLT_Mu17_TkMu8_isLoaded) {
			if (mus_HLT_Mu17_TkMu8_branch != 0) {
				mus_HLT_Mu17_TkMu8_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TkMu8_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TkMu8_isLoaded = true;
		}
		return mus_HLT_Mu17_TkMu8_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8_LeadingLeg()
	{
		if (not mus_HLT_Mu17_TkMu8_LeadingLeg_isLoaded) {
			if (mus_HLT_Mu17_TkMu8_LeadingLeg_branch != 0) {
				mus_HLT_Mu17_TkMu8_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TkMu8_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TkMu8_LeadingLeg_isLoaded = true;
		}
		return mus_HLT_Mu17_TkMu8_LeadingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8_TrailingLeg()
	{
		if (not mus_HLT_Mu17_TkMu8_TrailingLeg_isLoaded) {
			if (mus_HLT_Mu17_TkMu8_TrailingLeg_branch != 0) {
				mus_HLT_Mu17_TkMu8_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TkMu8_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TkMu8_TrailingLeg_isLoaded = true;
		}
		return mus_HLT_Mu17_TkMu8_TrailingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered()
	{
		if (not mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_isLoaded) {
			if (mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_branch != 0) {
				mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_isLoaded = true;
		}
		return mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg()
	{
		if (not mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_isLoaded) {
			if (mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_branch != 0) {
				mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_isLoaded = true;
		}
		return mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg()
	{
		if (not mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_isLoaded) {
			if (mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch != 0) {
				mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_isLoaded = true;
		}
		return mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu8_Ele17()
	{
		if (not mus_HLT_Mu8_Ele17_isLoaded) {
			if (mus_HLT_Mu8_Ele17_branch != 0) {
				mus_HLT_Mu8_Ele17_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu8_Ele17_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu8_Ele17_isLoaded = true;
		}
		return mus_HLT_Mu8_Ele17_;
	}
	const vector<unsigned int> &mus_HLT_Mu8_Ele17_TrailingLeg()
	{
		if (not mus_HLT_Mu8_Ele17_TrailingLeg_isLoaded) {
			if (mus_HLT_Mu8_Ele17_TrailingLeg_branch != 0) {
				mus_HLT_Mu8_Ele17_TrailingLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu8_Ele17_TrailingLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu8_Ele17_TrailingLeg_isLoaded = true;
		}
		return mus_HLT_Mu8_Ele17_TrailingLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg()
	{
		if (not mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_isLoaded) {
			if (mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_branch != 0) {
				mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_isLoaded = true;
		}
		return mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_;
	}
	const vector<unsigned int> &mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg()
	{
		if (not mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_isLoaded) {
			if (mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch != 0) {
				mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch->GetEntry(index);
			} else { 
				printf("branch mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_branch does not exist!\n");
				exit(1);
			}
			mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_isLoaded = true;
		}
		return mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_;
	}
	ULong64_t &evt_event()
	{
		if (not evt_event_isLoaded) {
			if (evt_event_branch != 0) {
				evt_event_branch->GetEntry(index);
			} else { 
				printf("branch evt_event_branch does not exist!\n");
				exit(1);
			}
			evt_event_isLoaded = true;
		}
		return evt_event_;
	}
	const vector<ULong64_t> &evt_timestamp()
	{
		if (not evt_timestamp_isLoaded) {
			if (evt_timestamp_branch != 0) {
				evt_timestamp_branch->GetEntry(index);
			} else { 
				printf("branch evt_timestamp_branch does not exist!\n");
				exit(1);
			}
			evt_timestamp_isLoaded = true;
		}
		return evt_timestamp_;
	}
	unsigned long long &evt_nEvts()
	{
		if (not evt_nEvts_isLoaded) {
			if (evt_nEvts_branch != 0) {
				evt_nEvts_branch->GetEntry(index);
			} else { 
				printf("branch evt_nEvts_branch does not exist!\n");
				exit(1);
			}
			evt_nEvts_isLoaded = true;
		}
		return evt_nEvts_;
	}
	unsigned long long &evt_nEvts_effective()
	{
		if (not evt_nEvts_effective_isLoaded) {
			if (evt_nEvts_effective_branch != 0) {
				evt_nEvts_effective_branch->GetEntry(index);
			} else { 
				printf("branch evt_nEvts_effective_branch does not exist!\n");
				exit(1);
			}
			evt_nEvts_effective_isLoaded = true;
		}
		return evt_nEvts_effective_;
	}
	float &evt_filt_eff()
	{
		if (not evt_filt_eff_isLoaded) {
			if (evt_filt_eff_branch != 0) {
				evt_filt_eff_branch->GetEntry(index);
			} else { 
				printf("branch evt_filt_eff_branch does not exist!\n");
				exit(1);
			}
			evt_filt_eff_isLoaded = true;
		}
		return evt_filt_eff_;
	}
	bool passHLTTrigger(TString trigName) {
		int trigIndx;
		vector<TString>::const_iterator begin_it = hlt_trigNames().begin();
		vector<TString>::const_iterator end_it = hlt_trigNames().end();
		vector<TString>::const_iterator found_it = find(begin_it, end_it, trigName);
		if(found_it != end_it)
			trigIndx = found_it - begin_it;
		else {
			cout << "Cannot find Trigger " << trigName << endl; 
			return 0;
		}

	return hlt_bits().TestBitNumber(trigIndx);
	}
	float passTauID(TString idName, unsigned int tauIndx) {
		int idIndx;
		vector<TString>::const_iterator begin_it = taus_pf_IDnames().begin();
		vector<TString>::const_iterator end_it = taus_pf_IDnames().end();
		vector<TString>::const_iterator found_it = find(begin_it, end_it, idName);
		if(found_it != end_it)
			idIndx = found_it - begin_it;
		else {
			cout << "Cannot find Tau ID " << idName << endl; 
			return 0;
		}

		if (tauIndx < taus_pf_IDs().size()) 
			return taus_pf_IDs().at(tauIndx).at(idIndx);
		else {
			cout << "Cannot find tau # "<< tauIndx << endl;
			return 0;
		}
	}
	float getbtagvalue(TString bDiscriminatorName, unsigned int jetIndx) {
		size_t bDiscriminatorIndx;
		vector<TString>::const_iterator begin_it = pfjets_bDiscriminatorNames().begin();
		vector<TString>::const_iterator end_it = pfjets_bDiscriminatorNames().end();
		vector<TString>::const_iterator found_it = find(begin_it, end_it, bDiscriminatorName);
		if(found_it != end_it)
			bDiscriminatorIndx = found_it - begin_it;
		else {
			cout << "Cannot find b discriminator " << bDiscriminatorName << endl; 
			return 0;
		}

		if (jetIndx < pfjets_bDiscriminators().size()) 
			return pfjets_bDiscriminators().at(jetIndx).at(bDiscriminatorIndx);
		else {
			cout << "Cannot find jet # "<< jetIndx << endl;
			return 0;
		}
	}

  static void progress( int nEventsTotal, int nEventsChain ){
    int period = 1000;
    if(nEventsTotal%1000 == 0) {
      // xterm magic from L. Vacavant and A. Cerri
      if (isatty(1)) {
        if( ( nEventsChain - nEventsTotal ) > period ){
          float frac = (float)nEventsTotal/(nEventsChain*0.01);
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
               "\033[0m\033[32m <---\033[0m\015", frac);
          fflush(stdout);
        }
        else {
          printf("\015\033[32m ---> \033[1m\033[31m%4.1f%%"
                 "\033[0m\033[32m <---\033[0m\015", 100.);
          cout << endl;
        }
      }
    }
  }
  
};

#ifndef __CINT__
extern CMS3 cms3;
#endif

namespace tas {
	const vector<string> &genweightsID();
	const TBits &hlt_bits();
	const vector<TString> &pfjets_nonCHS_bDiscriminatorNames();
	const vector<TString> &evt_CMS3tag();
	const vector<TString> &evt_dataset();
	const vector<TString> &hlt_trigNames();
	const vector<TString> &pfjets_bDiscriminatorNames();
	const vector<TString> &pfjets_puppi_bDiscriminatorNames();
	const vector<TString> &taus_pf_IDnames();
	const vector<TString> &sparm_comment();
	const vector<TString> &sparm_names();
	const bool &hcalnoise_HasBadRBXTS4TS5();
	const bool &evt_cscTightHaloId();
	const bool &evt_hbheFilter();
	const bool &filt_cscBeamHalo();
	const bool &filt_ecalLaser();
	const bool &filt_ecalTP();
	const bool &filt_eeBadSc();
	const bool &filt_goodVertices();
	const bool &filt_hbheNoise();
	const bool &filt_hcalLaser();
	const bool &filt_metfilter();
	const bool &filt_trackingFailure();
	const bool &filt_trkPOGFilters();
	const bool &filt_trkPOG_logErrorTooManyClusters();
	const bool &filt_trkPOG_manystripclus53X();
	const bool &filt_trkPOG_toomanystripclus53X();
	const vector<bool> &els_conv_vtx_flag();
	const vector<bool> &els_isGsfCtfScPixChargeConsistent();
	const vector<bool> &els_passingMvaPreselection();
	const vector<bool> &els_passingPflowPreselection();
	const vector<bool> &genps_fromHardProcessBeforeFSR();
	const vector<bool> &genps_fromHardProcessDecayed();
	const vector<bool> &genps_fromHardProcessFinalState();
	const vector<bool> &genps_isDirectHardProcessTauDecayProductFinalState();
	const vector<bool> &genps_isDirectPromptTauDecayProductFinalState();
	const vector<bool> &genps_isHardProcess();
	const vector<bool> &genps_isLastCopy();
	const vector<bool> &genps_isLastCopyBeforeFSR();
	const vector<bool> &genps_isMostlyLikePythia6Status3();
	const vector<bool> &genps_isPromptDecayed();
	const vector<bool> &genps_isPromptFinalState();
	const vector<bool> &mus_isRPCMuon();
	const vector<bool> &mus_tightMatch();
	const vector<bool> &mus_updatedSta();
	const vector<bool> &photons_haspixelSeed();
	const float &evt_bs_Xwidth();
	const float &evt_bs_XwidthErr();
	const float &evt_bs_Ywidth();
	const float &evt_bs_YwidthErr();
	const float &evt_bs_dxdz();
	const float &evt_bs_dxdzErr();
	const float &evt_bs_dydz();
	const float &evt_bs_dydzErr();
	const float &evt_bs_sigmaZ();
	const float &evt_bs_sigmaZErr();
	const float &evt_bs_xErr();
	const float &evt_bs_yErr();
	const float &evt_bs_zErr();
	const float &evt_bField();
	const float &evt_fixgrid_all_rho();
	const float &evt_fixgridfastjet_allcalo_rho();
	const float &evt_fixgridfastjet_all_rho();
	const float &evt_fixgridfastjet_centralcalo_rho();
	const float &evt_fixgridfastjet_centralchargedpileup_rho();
	const float &evt_fixgridfastjet_centralneutral_rho();
	const float &evt_kfactor();
	const float &evt_scale1fb();
	const float &evt_xsec_excl();
	const float &evt_xsec_incl();
	const float &genps_alphaQCD();
	const float &genps_pthat();
	const float &genps_qScale();
	const float &genps_weight();
	const float &gen_sumEt();
	const float &hcalnoise_GetRecHitEnergy();
	const float &hcalnoise_GetRecHitEnergy15();
	const float &hcalnoise_GetTotalCalibCharge();
	const float &hcalnoise_TS4TS5NoiseSumE();
	const float &hcalnoise_TS4TS5NoiseSumEt();
	const float &hcalnoise_eventChargeFraction();
	const float &hcalnoise_eventEMEnergy();
	const float &hcalnoise_eventEMFraction();
	const float &hcalnoise_eventHadEnergy();
	const float &hcalnoise_eventTrackEnergy();
	const float &hcalnoise_flatNoiseSumE();
	const float &hcalnoise_flatNoiseSumEt();
	const float &hcalnoise_isolatedNoiseSumE();
	const float &hcalnoise_isolatedNoiseSumEt();
	const float &hcalnoise_max10GeVHitTime();
	const float &hcalnoise_max25GeVHitTime();
	const float &hcalnoise_maxE10TS();
	const float &hcalnoise_maxE2Over10TS();
	const float &hcalnoise_maxE2TS();
	const float &hcalnoise_min10GeVHitTime();
	const float &hcalnoise_min25GeVHitTime();
	const float &hcalnoise_minE10TS();
	const float &hcalnoise_minE2Over10TS();
	const float &hcalnoise_minE2TS();
	const float &hcalnoise_minHPDEMF();
	const float &hcalnoise_minRBXEMF();
	const float &hcalnoise_rms10GeVHitTime();
	const float &hcalnoise_rms25GeVHitTime();
	const float &hcalnoise_spikeNoiseSumE();
	const float &hcalnoise_spikeNoiseSumEt();
	const float &hcalnoise_triangleNoiseSumE();
	const float &hcalnoise_triangleNoiseSumEt();
	const float &pdfinfo_pdf1();
	const float &pdfinfo_pdf2();
	const float &pdfinfo_scale();
	const float &pdfinfo_x1();
	const float &pdfinfo_x2();
	const float &evt_fixgrid_rho_all();
	const float &evt_fixgrid_rho_ctr();
	const float &evt_fixgrid_rho_fwd();
	const float &evt_calomet();
	const float &evt_calometPhi();
	const float &evt_pfmet();
	const float &evt_pfmetPhi();
	const float &evt_pfmetPhi_raw();
	const float &evt_pfmetSig();
	const float &evt_pfmet_raw();
	const float &evt_pfsumet();
	const float &evt_pfsumet_raw();
	const float &gen_met();
	const float &gen_metPhi();
	const float &sparm_filterEfficiency();
	const float &sparm_pdfScale();
	const float &sparm_pdfWeight1();
	const float &sparm_pdfWeight2();
	const float &sparm_weight();
	const float &sparm_xsec();
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &evt_bsp4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_nonCHS_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak8jets_mc_gp_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak8jets_mc_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_motherp4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_motherp4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_mc_gp_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_mc_motherp4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_mc_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_mc_motherp4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_mc_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_patMatch_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4In();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4Out();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_vertex_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_vertex_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genjets_p4NoMuNoNu();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_prod_vtx();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genjets_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &isotracks_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_vertex_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_patMatch_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_pfp4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_vertex_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_trk_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_vertex_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfcands_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_puppi_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_chargecand_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_neutrcand_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &svs_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &svs_position();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak8jets_p4();
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vtxs_position();
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &genps_lepdaughter_p4();
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hlt_trigObjs_p4();
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isocands_p4();
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_signalcands_p4();
	const vector<float> &pfjets_nonCHS_area();
	const vector<float> &pfjets_nonCHS_chargedEmE();
	const vector<float> &pfjets_nonCHS_chargedHadronE();
	const vector<float> &pfjets_nonCHS_electronE();
	const vector<float> &pfjets_nonCHS_hfEmE();
	const vector<float> &pfjets_nonCHS_hfHadronE();
	const vector<float> &pfjets_nonCHS_mass();
	const vector<float> &pfjets_nonCHS_muonE();
	const vector<float> &pfjets_nonCHS_neutralEmE();
	const vector<float> &pfjets_nonCHS_neutralHadronE();
	const vector<float> &pfjets_nonCHS_pfCombinedInclusiveSecondaryVertexV2BJetTag();
	const vector<float> &pfjets_nonCHS_photonE();
	const vector<float> &pfjets_nonCHS_pileupJetId();
	const vector<float> &pfjets_nonCHS_undoJEC();
	const vector<float> &evt_bs_covMatrix();
	const vector<float> &els_mc3dr();
	const vector<float> &els_mcdr();
	const vector<float> &mus_mc3dr();
	const vector<float> &mus_mcdr();
	const vector<float> &pfjets_mc3dr();
	const vector<float> &pfjets_mcdr();
	const vector<float> &pfjets_mc_emEnergy();
	const vector<float> &pfjets_mc_gpdr();
	const vector<float> &pfjets_mc_hadEnergy();
	const vector<float> &pfjets_mc_invEnergy();
	const vector<float> &pfjets_mc_otherEnergy();
	const vector<float> &photons_mc3dr();
	const vector<float> &photons_mcdr();
	const vector<float> &els_bs2d();
	const vector<float> &els_bs2derr();
	const vector<float> &els_bs3d();
	const vector<float> &els_bs3derr();
	const vector<float> &els_chi2();
	const vector<float> &els_ckf_chi2();
	const vector<float> &els_ckf_ndof();
	const vector<float> &els_d0();
	const vector<float> &els_d0Err();
	const vector<float> &els_d0corr();
	const vector<float> &els_d0corrPhi();
	const vector<float> &els_d0phiCov();
	const vector<float> &els_dEtaIn();
	const vector<float> &els_dEtaOut();
	const vector<float> &els_dPhiIn();
	const vector<float> &els_dPhiInPhiOut();
	const vector<float> &els_dPhiOut();
	const vector<float> &els_deltaEtaEleClusterTrackAtCalo();
	const vector<float> &els_deltaPhiEleClusterTrackAtCalo();
	const vector<float> &els_dxyPV();
	const vector<float> &els_dzPV();
	const vector<float> &els_e1x5();
	const vector<float> &els_e1x5_full5x5();
	const vector<float> &els_e2x5Max();
	const vector<float> &els_e2x5Max_full5x5();
	const vector<float> &els_e5x5();
	const vector<float> &els_e5x5_full5x5();
	const vector<float> &els_eOverPIn();
	const vector<float> &els_eOverPOut();
	const vector<float> &els_eSC();
	const vector<float> &els_eSCPresh();
	const vector<float> &els_eSCRaw();
	const vector<float> &els_eSeed();
	const vector<float> &els_eSeedOverPIn();
	const vector<float> &els_eSeedOverPOut();
	const vector<float> &els_ecalEnergy();
	const vector<float> &els_ecalEnergyError();
	const vector<float> &els_ecalIso();
	const vector<float> &els_ecalIso04();
	const vector<float> &els_ecalPFClusterIso();
	const vector<float> &els_etaErr();
	const vector<float> &els_etaSC();
	const vector<float> &els_etaSCwidth();
	const vector<float> &els_fbrem();
	const vector<float> &els_hOverE();
	const vector<float> &els_hOverEBC();
	const vector<float> &els_hcalDepth1OverEcal();
	const vector<float> &els_hcalDepth1TowerSumEt();
	const vector<float> &els_hcalDepth1TowerSumEt04();
	const vector<float> &els_hcalDepth2OverEcal();
	const vector<float> &els_hcalDepth2TowerSumEt();
	const vector<float> &els_hcalDepth2TowerSumEt04();
	const vector<float> &els_hcalIso();
	const vector<float> &els_hcalIso04();
	const vector<float> &els_hcalPFClusterIso();
	const vector<float> &els_ip2d();
	const vector<float> &els_ip2derr();
	const vector<float> &els_ip3d();
	const vector<float> &els_ip3derr();
	const vector<float> &els_mass();
	const vector<float> &els_mc_patMatch_dr();
	const vector<float> &els_miniIso_ch();
	const vector<float> &els_miniIso_db();
	const vector<float> &els_miniIso_em();
	const vector<float> &els_miniIso_nh();
	const vector<float> &els_miniIso_uncor();
	const vector<float> &els_mva();
	const vector<float> &els_ndof();
	const vector<float> &els_pfChargedHadronIso();
	const vector<float> &els_pfNeutralHadronIso();
	const vector<float> &els_pfPUIso();
	const vector<float> &els_pfPhotonIso();
	const vector<float> &els_phiErr();
	const vector<float> &els_phiSC();
	const vector<float> &els_phiSCwidth();
	const vector<float> &els_ptErr();
	const vector<float> &els_ptErrGsf();
	const vector<float> &els_r9();
	const vector<float> &els_r9_full5x5();
	const vector<float> &els_sigmaEtaEta();
	const vector<float> &els_sigmaEtaEta_full5x5();
	const vector<float> &els_sigmaIEtaIEta();
	const vector<float> &els_sigmaIEtaIEta_full5x5();
	const vector<float> &els_sigmaIPhiIPhi();
	const vector<float> &els_sigmaIPhiIPhi_full5x5();
	const vector<float> &els_sigmaIphiIphi();
	const vector<float> &els_tkIso();
	const vector<float> &els_tkIso04();
	const vector<float> &els_trackMomentumError();
	const vector<float> &els_trkdr();
	const vector<float> &els_trkshFrac();
	const vector<float> &els_z0();
	const vector<float> &els_z0Err();
	const vector<float> &els_z0corr();
	const vector<float> &genps_charge();
	const vector<float> &genps_iso();
	const vector<float> &genps_mass();
	const vector<float> &genweights();
	const vector<float> &isotracks_dz();
	const vector<float> &isotracks_mass();
	const vector<float> &isotracks_relIso();
	const vector<float> &mus_bs2d();
	const vector<float> &mus_bs2derr();
	const vector<float> &mus_bs3d();
	const vector<float> &mus_bs3derr();
	const vector<float> &mus_caloCompatibility();
	const vector<float> &mus_chi2();
	const vector<float> &mus_chi2LocalMomentum();
	const vector<float> &mus_chi2LocalPosition();
	const vector<float> &mus_d0();
	const vector<float> &mus_d0Err();
	const vector<float> &mus_d0corr();
	const vector<float> &mus_d0corrPhi();
	const vector<float> &mus_d0phiCov();
	const vector<float> &mus_dxyPV();
	const vector<float> &mus_dzPV();
	const vector<float> &mus_ecal_time();
	const vector<float> &mus_e_em();
	const vector<float> &mus_e_emS9();
	const vector<float> &mus_e_had();
	const vector<float> &mus_e_hadS9();
	const vector<float> &mus_e_ho();
	const vector<float> &mus_e_hoS9();
	const vector<float> &mus_emMax();
	const vector<float> &mus_emS25();
	const vector<float> &mus_etaErr();
	const vector<float> &mus_gfit_chi2();
	const vector<float> &mus_gfit_d0();
	const vector<float> &mus_gfit_d0Err();
	const vector<float> &mus_gfit_d0corr();
	const vector<float> &mus_gfit_d0corrPhi();
	const vector<float> &mus_gfit_d0phiCov();
	const vector<float> &mus_gfit_ndof();
	const vector<float> &mus_gfit_qoverp();
	const vector<float> &mus_gfit_qoverpError();
	const vector<float> &mus_gfit_z0();
	const vector<float> &mus_gfit_z0Err();
	const vector<float> &mus_gfit_z0corr();
	const vector<float> &mus_glbKink();
	const vector<float> &mus_glbTrackProbability();
	const vector<float> &mus_globalDeltaEtaPhi();
	const vector<float> &mus_hadMax();
	const vector<float> &mus_hcal_time();
	const vector<float> &mus_ip2d();
	const vector<float> &mus_ip2derr();
	const vector<float> &mus_ip3d();
	const vector<float> &mus_ip3derr();
	const vector<float> &mus_iso03_emEt();
	const vector<float> &mus_iso03_hadEt();
	const vector<float> &mus_iso03_hoEt();
	const vector<float> &mus_iso03_sumPt();
	const vector<float> &mus_iso05_emEt();
	const vector<float> &mus_iso05_hadEt();
	const vector<float> &mus_iso05_hoEt();
	const vector<float> &mus_iso05_sumPt();
	const vector<float> &mus_isoMeanDRR03_pf_ChargedHadronPt();
	const vector<float> &mus_isoMeanDRR03_pf_ChargedParticlePt();
	const vector<float> &mus_isoMeanDRR03_pf_NeutralHadronEt();
	const vector<float> &mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold();
	const vector<float> &mus_isoMeanDRR03_pf_PUPt();
	const vector<float> &mus_isoMeanDRR03_pf_PhotonEt();
	const vector<float> &mus_isoMeanDRR03_pf_PhotonEtHighThreshold();
	const vector<float> &mus_isoMeanDRR04_pf_ChargedHadronPt();
	const vector<float> &mus_isoMeanDRR04_pf_ChargedParticlePt();
	const vector<float> &mus_isoMeanDRR04_pf_NeutralHadronEt();
	const vector<float> &mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold();
	const vector<float> &mus_isoMeanDRR04_pf_PUPt();
	const vector<float> &mus_isoMeanDRR04_pf_PhotonEt();
	const vector<float> &mus_isoMeanDRR04_pf_PhotonEtHighThreshold();
	const vector<float> &mus_isoR03_pf_ChargedHadronPt();
	const vector<float> &mus_isoR03_pf_ChargedParticlePt();
	const vector<float> &mus_isoR03_pf_NeutralHadronEt();
	const vector<float> &mus_isoR03_pf_NeutralHadronEtHighThreshold();
	const vector<float> &mus_isoR03_pf_PUPt();
	const vector<float> &mus_isoR03_pf_PhotonEt();
	const vector<float> &mus_isoR03_pf_PhotonEtHighThreshold();
	const vector<float> &mus_isoR04_pf_ChargedHadronPt();
	const vector<float> &mus_isoR04_pf_ChargedParticlePt();
	const vector<float> &mus_isoR04_pf_NeutralHadronEt();
	const vector<float> &mus_isoR04_pf_NeutralHadronEtHighThreshold();
	const vector<float> &mus_isoR04_pf_PUPt();
	const vector<float> &mus_isoR04_pf_PhotonEt();
	const vector<float> &mus_isoR04_pf_PhotonEtHighThreshold();
	const vector<float> &mus_isoSumDRR03_pf_ChargedHadronPt();
	const vector<float> &mus_isoSumDRR03_pf_ChargedParticlePt();
	const vector<float> &mus_isoSumDRR03_pf_NeutralHadronEt();
	const vector<float> &mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold();
	const vector<float> &mus_isoSumDRR03_pf_PUPt();
	const vector<float> &mus_isoSumDRR03_pf_PhotonEt();
	const vector<float> &mus_isoSumDRR03_pf_PhotonEtHighThreshold();
	const vector<float> &mus_isoSumDRR04_pf_ChargedHadronPt();
	const vector<float> &mus_isoSumDRR04_pf_ChargedParticlePt();
	const vector<float> &mus_isoSumDRR04_pf_NeutralHadronEt();
	const vector<float> &mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold();
	const vector<float> &mus_isoSumDRR04_pf_PUPt();
	const vector<float> &mus_isoSumDRR04_pf_PhotonEt();
	const vector<float> &mus_isoSumDRR04_pf_PhotonEtHighThreshold();
	const vector<float> &mus_iso_ecalvetoDep();
	const vector<float> &mus_iso_hcalvetoDep();
	const vector<float> &mus_iso_hovetoDep();
	const vector<float> &mus_iso_trckvetoDep();
	const vector<float> &mus_localDistance();
	const vector<float> &mus_mass();
	const vector<float> &mus_mc_patMatch_dr();
	const vector<float> &mus_miniIso_ch();
	const vector<float> &mus_miniIso_db();
	const vector<float> &mus_miniIso_em();
	const vector<float> &mus_miniIso_nh();
	const vector<float> &mus_miniIso_uncor();
	const vector<float> &mus_ndof();
	const vector<float> &mus_phiErr();
	const vector<float> &mus_ptErr();
	const vector<float> &mus_qoverp();
	const vector<float> &mus_qoverpError();
	const vector<float> &mus_segmCompatibility();
	const vector<float> &mus_staRelChi2();
	const vector<float> &mus_sta_chi2();
	const vector<float> &mus_sta_d0();
	const vector<float> &mus_sta_d0Err();
	const vector<float> &mus_sta_d0corr();
	const vector<float> &mus_sta_d0corrPhi();
	const vector<float> &mus_sta_d0phiCov();
	const vector<float> &mus_sta_ndof();
	const vector<float> &mus_sta_qoverp();
	const vector<float> &mus_sta_qoverpError();
	const vector<float> &mus_sta_z0();
	const vector<float> &mus_sta_z0Err();
	const vector<float> &mus_sta_z0corr();
	const vector<float> &mus_timeAtIpInOut();
	const vector<float> &mus_timeAtIpInOutErr();
	const vector<float> &mus_timeAtIpOutIn();
	const vector<float> &mus_timeAtIpOutInErr();
	const vector<float> &mus_trkKink();
	const vector<float> &mus_trkRelChi2();
	const vector<float> &mus_vertexphi();
	const vector<float> &mus_z0();
	const vector<float> &mus_z0Err();
	const vector<float> &mus_z0corr();
	const vector<float> &pfcands_dz();
	const vector<float> &pfcands_mass();
	const vector<float> &pfjets_area();
	const vector<float> &pfjets_chargedEmE();
	const vector<float> &pfjets_chargedHadronE();
	const vector<float> &pfjets_electronE();
	const vector<float> &pfjets_hfEmE();
	const vector<float> &pfjets_hfHadronE();
	const vector<float> &pfjets_mass();
	const vector<float> &pfjets_muonE();
	const vector<float> &pfjets_neutralEmE();
	const vector<float> &pfjets_neutralHadronE();
	const vector<float> &pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag();
	const vector<float> &pfjets_photonE();
	const vector<float> &pfjets_pileupJetId();
	const vector<float> &pfjets_undoJEC();
	const vector<float> &pfjets_puppi_area();
	const vector<float> &pfjets_puppi_chargedEmE();
	const vector<float> &pfjets_puppi_chargedHadronE();
	const vector<float> &pfjets_puppi_electronE();
	const vector<float> &pfjets_puppi_hfEmE();
	const vector<float> &pfjets_puppi_hfHadronE();
	const vector<float> &pfjets_puppi_mass();
	const vector<float> &pfjets_puppi_muonE();
	const vector<float> &pfjets_puppi_neutralEmE();
	const vector<float> &pfjets_puppi_neutralHadronE();
	const vector<float> &pfjets_puppi_pfCombinedInclusiveSecondaryVertexV2BJetTag();
	const vector<float> &pfjets_puppi_photonE();
	const vector<float> &pfjets_puppi_pileupJetId();
	const vector<float> &pfjets_puppi_undoJEC();
	const vector<float> &taus_pf_mass();
	const vector<float> &photons_chargedHadronIso();
	const vector<float> &photons_e1x5();
	const vector<float> &photons_e2x5Max();
	const vector<float> &photons_e3x3();
	const vector<float> &photons_e5x5();
	const vector<float> &photons_eSC();
	const vector<float> &photons_eSCPresh();
	const vector<float> &photons_eSCRaw();
	const vector<float> &photons_ecalIso03();
	const vector<float> &photons_ecalIso04();
	const vector<float> &photons_ecalPFClusterIso();
	const vector<float> &photons_etaSC();
	const vector<float> &photons_full3x3_e3x3();
	const vector<float> &photons_full5x5_e1x5();
	const vector<float> &photons_full5x5_e2x5Max();
	const vector<float> &photons_full5x5_e5x5();
	const vector<float> &photons_full5x5_hOverE();
	const vector<float> &photons_full5x5_hOverEtowBC();
	const vector<float> &photons_full5x5_r9();
	const vector<float> &photons_full5x5_sigmaEtaEta();
	const vector<float> &photons_full5x5_sigmaIEtaIEta();
	const vector<float> &photons_hOverE();
	const vector<float> &photons_hOverEtowBC();
	const vector<float> &photons_hcalDepth1TowerSumEtBcConeDR03();
	const vector<float> &photons_hcalDepth1TowerSumEtBcConeDR04();
	const vector<float> &photons_hcalDepth2TowerSumEtBcConeDR03();
	const vector<float> &photons_hcalDepth2TowerSumEtBcConeDR04();
	const vector<float> &photons_hcalIso03();
	const vector<float> &photons_hcalIso04();
	const vector<float> &photons_hcalPFClusterIso();
	const vector<float> &photons_hcalTowerSumEtBcConeDR03();
	const vector<float> &photons_hcalTowerSumEtBcConeDR04();
	const vector<float> &photons_mass();
	const vector<float> &photons_neutralHadronIso();
	const vector<float> &photons_ntkIsoHollow03();
	const vector<float> &photons_ntkIsoHollow04();
	const vector<float> &photons_ntkIsoSolid03();
	const vector<float> &photons_ntkIsoSolid04();
	const vector<float> &photons_phiSC();
	const vector<float> &photons_photonIso();
	const vector<float> &photons_recoChargedHadronIso();
	const vector<float> &photons_recoNeutralHadronIso();
	const vector<float> &photons_recoPhotonIso();
	const vector<float> &photons_sigmaEtaEta();
	const vector<float> &photons_sigmaIEtaIEta();
	const vector<float> &photons_tkIsoHollow03();
	const vector<float> &photons_tkIsoHollow04();
	const vector<float> &photons_tkIsoSolid03();
	const vector<float> &photons_tkIsoSolid04();
	const vector<float> &puInfo_trueNumInteractions();
	const vector<float> &convs_chi2();
	const vector<float> &convs_dl();
	const vector<float> &convs_ndof();
	const vector<float> &sparm_values();
	const vector<float> &svs_anglePV();
	const vector<float> &svs_chi2();
	const vector<float> &svs_dist3Dsig();
	const vector<float> &svs_dist3Dval();
	const vector<float> &svs_distXYsig();
	const vector<float> &svs_distXYval();
	const vector<float> &svs_ndof();
	const vector<float> &svs_prob();
	const vector<float> &svs_xError();
	const vector<float> &svs_yError();
	const vector<float> &svs_zError();
	const vector<float> &ak8jets_area();
	const vector<float> &ak8jets_filteredMass();
	const vector<float> &ak8jets_mass();
	const vector<float> &ak8jets_minMass();
	const vector<float> &ak8jets_nJettinessTau1();
	const vector<float> &ak8jets_nJettinessTau2();
	const vector<float> &ak8jets_nJettinessTau3();
	const vector<float> &ak8jets_prunedMass();
	const vector<float> &ak8jets_softdropMass();
	const vector<float> &ak8jets_topMass();
	const vector<float> &ak8jets_trimmedMass();
	const vector<float> &ak8jets_undoJEC();
	const vector<float> &vtxs_chi2();
	const vector<float> &vtxs_ndof();
	const vector<float> &vtxs_score();
	const vector<float> &vtxs_xError();
	const vector<float> &vtxs_yError();
	const vector<float> &vtxs_zError();
	const vector<vector<float> > &pfjets_nonCHS_bDiscriminators();
	const vector<vector<float> > &mus_stationShowerDeltaR();
	const vector<vector<float> > &mus_stationShowerSizeT();
	const vector<vector<float> > &pfjets_bDiscriminators();
	const vector<vector<float> > &pfjets_puppi_bDiscriminators();
	const vector<vector<float> > &taus_pf_IDs();
	const vector<vector<float> > &puInfo_instLumi();
	const vector<vector<float> > &vtxs_covMatrix();
	const int &evt_bsType();
	const int &evt_bunchCrossing();
	const int &evt_experimentType();
	const int &evt_isRealData();
	const int &evt_orbitNumber();
	const int &evt_storeNumber();
	const int &hcalnoise_GetRecHitCount();
	const int &hcalnoise_GetRecHitCount15();
	const int &hcalnoise_maxHPDHits();
	const int &hcalnoise_maxHPDNoOtherHits();
	const int &hcalnoise_maxRBXHits();
	const int &hcalnoise_maxZeros();
	const int &hcalnoise_noiseFilterStatus();
	const int &hcalnoise_noiseType();
	const int &hcalnoise_num10GeVHits();
	const int &hcalnoise_num25GeVHits();
	const int &hcalnoise_numFlatNoiseChannels();
	const int &hcalnoise_numIsolatedNoiseChannels();
	const int &hcalnoise_numProblematicRBXs();
	const int &hcalnoise_numSpikeNoiseChannels();
	const int &hcalnoise_numTS4TS5NoiseChannels();
	const int &hcalnoise_numTriangleNoiseChannels();
	const int &hcalnoise_passHighLevelNoiseFilter();
	const int &hcalnoise_passLooseNoiseFilter();
	const int &hcalnoise_passTightNoiseFilter();
	const int &pdfinfo_id1();
	const int &pdfinfo_id2();
	const int &sparm_subProcessId();
	const vector<int> &pfjets_nonCHS_chargedHadronMultiplicity();
	const vector<int> &pfjets_nonCHS_chargedMultiplicity();
	const vector<int> &pfjets_nonCHS_electronMultiplicity();
	const vector<int> &pfjets_nonCHS_muonMultiplicity();
	const vector<int> &pfjets_nonCHS_neutralHadronMultiplicity();
	const vector<int> &pfjets_nonCHS_neutralMultiplicity();
	const vector<int> &pfjets_nonCHS_partonFlavour();
	const vector<int> &pfjets_nonCHS_photonMultiplicity();
	const vector<int> &ak8jets_mc_id();
	const vector<int> &els_mc3_id();
	const vector<int> &els_mc3idx();
	const vector<int> &els_mc3_motherid();
	const vector<int> &els_mc3_motheridx();
	const vector<int> &els_mc_id();
	const vector<int> &els_mcidx();
	const vector<int> &els_mc_motherid();
	const vector<int> &mus_mc3_id();
	const vector<int> &mus_mc3idx();
	const vector<int> &mus_mc3_motherid();
	const vector<int> &mus_mc3_motheridx();
	const vector<int> &mus_mc_id();
	const vector<int> &mus_mcidx();
	const vector<int> &mus_mc_motherid();
	const vector<int> &pfjets_mc3_id();
	const vector<int> &pfjets_mc3idx();
	const vector<int> &pfjets_mc_gpidx();
	const vector<int> &pfjets_mc_id();
	const vector<int> &pfjets_mcidx();
	const vector<int> &pfjets_mc_motherid();
	const vector<int> &photons_mc3_id();
	const vector<int> &photons_mc3idx();
	const vector<int> &photons_mc3_motherid();
	const vector<int> &photons_mc3_motheridx();
	const vector<int> &photons_mc_id();
	const vector<int> &photons_mcidx();
	const vector<int> &photons_mc_motherid();
	const vector<int> &els_category();
	const vector<int> &els_charge();
	const vector<int> &els_ckf_charge();
	const vector<int> &els_ckf_laywithmeas();
	const vector<int> &els_class();
	const vector<int> &els_exp_innerlayers();
	const vector<int> &els_exp_outerlayers();
	const vector<int> &els_fiduciality();
	const vector<int> &els_lostHits();
	const vector<int> &els_lost_pixelhits();
	const vector<int> &els_mc_patMatch_id();
	const vector<int> &els_nSeed();
	const vector<int> &els_nlayers();
	const vector<int> &els_nlayers3D();
	const vector<int> &els_nlayersLost();
	const vector<int> &els_sccharge();
	const vector<int> &els_trk_charge();
	const vector<int> &els_type();
	const vector<int> &els_validHits();
	const vector<int> &els_valid_pixelhits();
	const vector<int> &els_passLooseId();
	const vector<int> &els_passMediumId();
	const vector<int> &els_passTightId();
	const vector<int> &els_passVetoId();
	const vector<int> &genps_id();
	const vector<int> &genps_id_mother();
	const vector<int> &genps_id_simplegrandma();
	const vector<int> &genps_id_simplemother();
	const vector<int> &genps_idx_mother();
	const vector<int> &genps_idx_simplemother();
	const vector<int> &genps_status();
	const vector<int> &hyp_ll_charge();
	const vector<int> &hyp_ll_id();
	const vector<int> &hyp_ll_index();
	const vector<int> &hyp_lt_charge();
	const vector<int> &hyp_lt_id();
	const vector<int> &hyp_lt_index();
	const vector<int> &hyp_type();
	const vector<int> &isotracks_charge();
	const vector<int> &isotracks_particleId();
	const vector<int> &mus_algo();
	const vector<int> &mus_charge();
	const vector<int> &mus_ecal_rawId();
	const vector<int> &mus_exp_innerlayers();
	const vector<int> &mus_exp_outerlayers();
	const vector<int> &mus_gfit_algo();
	const vector<int> &mus_gfit_etaErr();
	const vector<int> &mus_gfit_exp_innerlayer();
	const vector<int> &mus_gfit_exp_outerlayer();
	const vector<int> &mus_gfit_lostHits();
	const vector<int> &mus_gfit_lostPixelHits();
	const vector<int> &mus_gfit_nlayers();
	const vector<int> &mus_gfit_nlayers3D();
	const vector<int> &mus_gfit_nlayersLost();
	const vector<int> &mus_gfit_phiErr();
	const vector<int> &mus_gfit_ptErr();
	const vector<int> &mus_gfit_qualityMask();
	const vector<int> &mus_gfit_trk_charge();
	const vector<int> &mus_gfit_validHits();
	const vector<int> &mus_gfit_validPixelHits();
	const vector<int> &mus_gfit_validSTAHits();
	const vector<int> &mus_gfit_validSiHits();
	const vector<int> &mus_goodmask();
	const vector<int> &mus_hcal_rawId();
	const vector<int> &mus_iso03_njets();
	const vector<int> &mus_iso03_ntrk();
	const vector<int> &mus_iso05_ntrk();
	const vector<int> &mus_lostHits();
	const vector<int> &mus_lostPixelHits();
	const vector<int> &mus_mc_patMatch_id();
	const vector<int> &mus_muonBestTrackType();
	const vector<int> &mus_nOverlaps();
	const vector<int> &mus_nlayers();
	const vector<int> &mus_nlayers3D();
	const vector<int> &mus_nlayersLost();
	const vector<int> &mus_nmatches();
	const vector<int> &mus_numberOfMatchedStations();
	const vector<int> &mus_overlap0();
	const vector<int> &mus_overlap1();
	const vector<int> &mus_pfcharge();
	const vector<int> &mus_pfidx();
	const vector<int> &mus_pfparticleId();
	const vector<int> &mus_pid_PFMuon();
	const vector<int> &mus_pid_TM2DCompatibilityLoose();
	const vector<int> &mus_pid_TM2DCompatibilityTight();
	const vector<int> &mus_pid_TMLastStationLoose();
	const vector<int> &mus_pid_TMLastStationTight();
	const vector<int> &mus_qualityMask();
	const vector<int> &mus_sta_algo();
	const vector<int> &mus_sta_etaErr();
	const vector<int> &mus_sta_exp_innerlayer();
	const vector<int> &mus_sta_exp_outerlayer();
	const vector<int> &mus_sta_lostHits();
	const vector<int> &mus_sta_lostPixelHits();
	const vector<int> &mus_sta_nlayers();
	const vector<int> &mus_sta_nlayers3D();
	const vector<int> &mus_sta_nlayersLost();
	const vector<int> &mus_sta_phiErr();
	const vector<int> &mus_sta_ptErr();
	const vector<int> &mus_sta_qualityMask();
	const vector<int> &mus_sta_trk_charge();
	const vector<int> &mus_sta_validHits();
	const vector<int> &mus_sta_validPixelHits();
	const vector<int> &mus_timeDirection();
	const vector<int> &mus_timeNumStationsUsed();
	const vector<int> &mus_trk_charge();
	const vector<int> &mus_type();
	const vector<int> &mus_validHits();
	const vector<int> &mus_validPixelHits();
	const vector<int> &pfcands_charge();
	const vector<int> &pfcands_particleId();
	const vector<int> &pfjets_chargedHadronMultiplicity();
	const vector<int> &pfjets_chargedMultiplicity();
	const vector<int> &pfjets_electronMultiplicity();
	const vector<int> &pfjets_muonMultiplicity();
	const vector<int> &pfjets_neutralHadronMultiplicity();
	const vector<int> &pfjets_neutralMultiplicity();
	const vector<int> &pfjets_partonFlavour();
	const vector<int> &pfjets_photonMultiplicity();
	const vector<int> &pfjets_puppi_chargedHadronMultiplicity();
	const vector<int> &pfjets_puppi_chargedMultiplicity();
	const vector<int> &pfjets_puppi_electronMultiplicity();
	const vector<int> &pfjets_puppi_muonMultiplicity();
	const vector<int> &pfjets_puppi_neutralHadronMultiplicity();
	const vector<int> &pfjets_puppi_neutralMultiplicity();
	const vector<int> &pfjets_puppi_partonFlavour();
	const vector<int> &pfjets_puppi_photonMultiplicity();
	const vector<int> &taus_pf_charge();
	const vector<int> &photons_fiduciality();
	const vector<int> &photons_photonID_loose();
	const vector<int> &photons_photonID_tight();
	const vector<int> &puInfo_bunchCrossing();
	const vector<int> &puInfo_nPUvertices();
	const vector<int> &convs_algo();
	const vector<int> &convs_isConverted();
	const vector<int> &convs_quality();
	const vector<int> &svs_nTrks();
	const vector<int> &ak8jets_nSubJets();
	const vector<int> &ak8jets_partonFlavour();
	const vector<int> &vtxs_isFake();
	const vector<int> &vtxs_isValid();
	const vector<vector<int> > &pfjets_nonCHS_pfcandIndicies();
	const vector<vector<int> > &els_PFCand_idx();
	const vector<vector<int> > &genps_lepdaughter_id();
	const vector<vector<int> > &genps_lepdaughter_idx();
	const vector<vector<int> > &hlt_trigObjs_id();
	const vector<vector<int> > &mus_nStationCorrelatedHits();
	const vector<vector<int> > &mus_nStationHits();
	const vector<vector<int> > &pfjets_pfcandIndicies();
	const vector<vector<int> > &pfjets_puppi_pfcandIndicies();
	const vector<vector<int> > &photons_PFCand_idx();
	const vector<vector<int> > &convs_nHitsBeforeVtx();
	const vector<vector<int> > &convs_tkalgo();
	const vector<vector<int> > &convs_tkidx();
	const vector<vector<int> > &ak8jets_pfcandIndicies();
	const vector<unsigned char> &isotracks_fromPV();
	const vector<unsigned char> &pfcands_fromPV();
	const unsigned int &els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version();
	const unsigned int &els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg_version();
	const unsigned int &els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg_version();
	const unsigned int &els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version();
	const unsigned int &els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	const unsigned int &els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version();
	const unsigned int &els_HLT_Ele17_Ele8_LeadingLeg_version();
	const unsigned int &els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version();
	const unsigned int &els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version();
	const unsigned int &els_HLT_Ele17_Ele8_TrailingLeg_version();
	const unsigned int &els_HLT_Ele17_Ele8_version();
	const unsigned int &els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version();
	const unsigned int &els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	const unsigned int &els_HLT_Ele20_SC4_Mass50_LeadingLeg_version();
	const unsigned int &els_HLT_Ele20_SC4_Mass50_TrailingLeg_version();
	const unsigned int &els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version();
	const unsigned int &els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	const unsigned int &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg_version();
	const unsigned int &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg_version();
	const unsigned int &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_version();
	const unsigned int &els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg_version();
	const unsigned int &els_HLT_Ele25WP60_Ele8_Mass55_version();
	const unsigned int &els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg_version();
	const unsigned int &els_HLT_Ele25WP60_SC4_Mass55_version();
	const unsigned int &els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version();
	const unsigned int &els_HLT_Ele27_WP80_version();
	const unsigned int &els_HLT_Ele32_SC17_Mass50_LeadingLeg_version();
	const unsigned int &els_HLT_Ele32_SC17_Mass50_TrailingLeg_version();
	const unsigned int &els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg_version();
	const unsigned int &els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	const unsigned int &els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg_version();
	const unsigned int &els_HLT_Ele5_SC5_JPsi_Mass2to4p5_version();
	const unsigned int &els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg_version();
	const unsigned int &els_HLT_Mu17_Ele8_TrailingLeg_version();
	const unsigned int &els_HLT_Mu17_Ele8_version();
	const unsigned int &els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version();
	const unsigned int &els_HLT_Mu8_Ele17_version();
	const unsigned int &els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg_version();
	const unsigned int &els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg_version();
	const unsigned int &evt_nels();
	const unsigned int &evt_detectorStatus();
	const unsigned int &evt_lumiBlock();
	const unsigned int &evt_run();
	const unsigned int &evt_ngenjetsNoMuNoNu();
	const unsigned int &genps_signalProcessID();
	const unsigned int &evt_ngenjets();
	const unsigned int &mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg_version();
	const unsigned int &mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version();
	const unsigned int &mus_HLT_IsoMu24_eta2p1_version();
	const unsigned int &mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg_version();
	const unsigned int &mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg_version();
	const unsigned int &mus_HLT_Mu17_Ele8_LeadingLeg_version();
	const unsigned int &mus_HLT_Mu17_Ele8_version();
	const unsigned int &mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version();
	const unsigned int &mus_HLT_Mu17_Mu8_LeadingLeg_version();
	const unsigned int &mus_HLT_Mu17_Mu8_TrailingLeg_version();
	const unsigned int &mus_HLT_Mu17_Mu8_version();
	const unsigned int &mus_HLT_Mu17_TkMu8_LeadingLeg_version();
	const unsigned int &mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version();
	const unsigned int &mus_HLT_Mu17_TkMu8_TrailingLeg_version();
	const unsigned int &mus_HLT_Mu17_TkMu8_version();
	const unsigned int &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg_version();
	const unsigned int &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg_version();
	const unsigned int &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_version();
	const unsigned int &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg_version();
	const unsigned int &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg_version();
	const unsigned int &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_version();
	const unsigned int &mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg_version();
	const unsigned int &mus_HLT_Mu8_Ele17_TrailingLeg_version();
	const unsigned int &mus_HLT_Mu8_Ele17_version();
	const unsigned int &mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg_version();
	const unsigned int &mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg_version();
	const unsigned int &evt_nphotons();
	const unsigned int &evt_nvtxs();
	const vector<unsigned int> &els_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p54PF_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele10_CaloIdM_TrackIdM_CentralPFJet30_BTagCSV0p5PF_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele12_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele17_Ele8();
	const vector<unsigned int> &els_HLT_Ele17_Ele8_L1sL1DoubleEG137();
	const vector<unsigned int> &els_HLT_Ele17_Ele8_LeadingLeg();
	const vector<unsigned int> &els_HLT_Ele17_Ele8_Mass50_LeadingLeg();
	const vector<unsigned int> &els_HLT_Ele17_Ele8_Mass50_TrailingLeg();
	const vector<unsigned int> &els_HLT_Ele17_Ele8_TrailingLeg();
	const vector<unsigned int> &els_HLT_Ele18_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele18_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele20_SC4_Mass50_LeadingLeg();
	const vector<unsigned int> &els_HLT_Ele20_SC4_Mass50_TrailingLeg();
	const vector<unsigned int> &els_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL();
	const vector<unsigned int> &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_LeadingLeg();
	const vector<unsigned int> &els_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_TrailingLeg();
	const vector<unsigned int> &els_HLT_Ele25WP60_Ele8_Mass55();
	const vector<unsigned int> &els_HLT_Ele25WP60_Ele8_Mass55_LeadingLeg();
	const vector<unsigned int> &els_HLT_Ele25WP60_SC4_Mass55();
	const vector<unsigned int> &els_HLT_Ele25WP60_SC4_Mass55_LeadingLeg();
	const vector<unsigned int> &els_HLT_Ele27_WP80();
	const vector<unsigned int> &els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22();
	const vector<unsigned int> &els_HLT_Ele32_SC17_Mass50_LeadingLeg();
	const vector<unsigned int> &els_HLT_Ele32_SC17_Mass50_TrailingLeg();
	const vector<unsigned int> &els_HLT_Ele33_CaloIdL_TrackIdL_IsoVL_PFJet30_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele33_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	const vector<unsigned int> &els_HLT_Ele5_SC5_JPsi_Mass2to4p5();
	const vector<unsigned int> &els_HLT_Ele5_SC5_JPsi_Mass2to4p5_LeadingLeg();
	const vector<unsigned int> &els_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_ElectronLeg();
	const vector<unsigned int> &els_HLT_Mu17_Ele8();
	const vector<unsigned int> &els_HLT_Mu17_Ele8_TrailingLeg();
	const vector<unsigned int> &els_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_ElectronLeg();
	const vector<unsigned int> &els_HLT_Mu8_Ele17();
	const vector<unsigned int> &els_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_ElectronLeg();
	const vector<unsigned int> &els_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_ElectronLeg();
	const vector<unsigned int> &hlt_prescales();
	const vector<unsigned int> &mus_HLT_DoubleMu8_Mass8_PFHT300_MuonLeg();
	const vector<unsigned int> &mus_HLT_IsoMu24_eta2p1();
	const vector<unsigned int> &mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1();
	const vector<unsigned int> &mus_HLT_Mu10_CentralPFJet30_BTagCSV0p54PF_MuonLeg();
	const vector<unsigned int> &mus_HLT_Mu10_CentralPFJet30_BTagCSV0p5PF_MuonLeg();
	const vector<unsigned int> &mus_HLT_Mu17_Ele8();
	const vector<unsigned int> &mus_HLT_Mu17_Ele8_LeadingLeg();
	const vector<unsigned int> &mus_HLT_Mu17_Mu8();
	const vector<unsigned int> &mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen();
	const vector<unsigned int> &mus_HLT_Mu17_Mu8_LeadingLeg();
	const vector<unsigned int> &mus_HLT_Mu17_Mu8_TrailingLeg();
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8();
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8_LeadingLeg();
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8_TrailingLeg();
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered();
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ();
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_LeadingLeg();
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_TrailingLeg();
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ();
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_LeadingLeg();
	const vector<unsigned int> &mus_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ_TrailingLeg();
	const vector<unsigned int> &mus_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_MuonLeg();
	const vector<unsigned int> &mus_HLT_Mu8_Ele17();
	const vector<unsigned int> &mus_HLT_Mu8_Ele17_TrailingLeg();
	const vector<unsigned int> &mus_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT300_MuonLeg();
	const vector<unsigned int> &mus_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_MuonLeg();
	const ULong64_t &evt_event();
	const vector<ULong64_t> &evt_timestamp();
	const unsigned long long &evt_nEvts();
	const unsigned long long &evt_nEvts_effective();
	const float &evt_filt_eff();
	bool passHLTTrigger(TString trigName);
	float passTauID(TString idName, unsigned int tauIndx);
	float getbtagvalue(TString bDiscriminatorName, unsigned int jetIndx);
}
#endif
