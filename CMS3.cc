#include "CMS3.h"
CMS3 cms3;
namespace tas {
	const TBits &hlt_bits() { return cms3.hlt_bits(); }
	const vector<TString> &evt_CMS3tag() { return cms3.evt_CMS3tag(); }
	const vector<TString> &evt_dataset() { return cms3.evt_dataset(); }
	const vector<TString> &hlt_trigNames() { return cms3.hlt_trigNames(); }
	const vector<TString> &taus_pf_IDnames() { return cms3.taus_pf_IDnames(); }
	const vector<TString> &sparm_comment() { return cms3.sparm_comment(); }
	const vector<TString> &sparm_names() { return cms3.sparm_names(); }
	const bool &hcalnoise_HasBadRBXTS4TS5() { return cms3.hcalnoise_HasBadRBXTS4TS5(); }
	const bool &evt_cscTightHaloId() { return cms3.evt_cscTightHaloId(); }
	const bool &evt_hbheFilter() { return cms3.evt_hbheFilter(); }
	const bool &filt_cscBeamHalo() { return cms3.filt_cscBeamHalo(); }
	const bool &filt_ecalLaser() { return cms3.filt_ecalLaser(); }
	const bool &filt_ecalTP() { return cms3.filt_ecalTP(); }
	const bool &filt_eeBadSc() { return cms3.filt_eeBadSc(); }
	const bool &filt_goodVertices() { return cms3.filt_goodVertices(); }
	const bool &filt_hbheNoise() { return cms3.filt_hbheNoise(); }
	const bool &filt_hcalLaser() { return cms3.filt_hcalLaser(); }
	const bool &filt_metfilter() { return cms3.filt_metfilter(); }
	const bool &filt_trackingFailure() { return cms3.filt_trackingFailure(); }
	const bool &filt_trkPOGFilters() { return cms3.filt_trkPOGFilters(); }
	const bool &filt_trkPOG_logErrorTooManyClusters() { return cms3.filt_trkPOG_logErrorTooManyClusters(); }
	const bool &filt_trkPOG_manystripclus53X() { return cms3.filt_trkPOG_manystripclus53X(); }
	const bool &filt_trkPOG_toomanystripclus53X() { return cms3.filt_trkPOG_toomanystripclus53X(); }
	const vector<bool> &els_conv_vtx_flag() { return cms3.els_conv_vtx_flag(); }
	const vector<bool> &els_isGsfCtfScPixChargeConsistent() { return cms3.els_isGsfCtfScPixChargeConsistent(); }
	const vector<bool> &els_passingMvaPreselection() { return cms3.els_passingMvaPreselection(); }
	const vector<bool> &els_passingPflowPreselection() { return cms3.els_passingPflowPreselection(); }
	const vector<bool> &mus_isRPCMuon() { return cms3.mus_isRPCMuon(); }
	const vector<bool> &mus_tightMatch() { return cms3.mus_tightMatch(); }
	const vector<bool> &mus_updatedSta() { return cms3.mus_updatedSta(); }
	const vector<bool> &photons_haspixelSeed() { return cms3.photons_haspixelSeed(); }
	const float &evt_bs_Xwidth() { return cms3.evt_bs_Xwidth(); }
	const float &evt_bs_XwidthErr() { return cms3.evt_bs_XwidthErr(); }
	const float &evt_bs_Ywidth() { return cms3.evt_bs_Ywidth(); }
	const float &evt_bs_YwidthErr() { return cms3.evt_bs_YwidthErr(); }
	const float &evt_bs_dxdz() { return cms3.evt_bs_dxdz(); }
	const float &evt_bs_dxdzErr() { return cms3.evt_bs_dxdzErr(); }
	const float &evt_bs_dydz() { return cms3.evt_bs_dydz(); }
	const float &evt_bs_dydzErr() { return cms3.evt_bs_dydzErr(); }
	const float &evt_bs_sigmaZ() { return cms3.evt_bs_sigmaZ(); }
	const float &evt_bs_sigmaZErr() { return cms3.evt_bs_sigmaZErr(); }
	const float &evt_bs_xErr() { return cms3.evt_bs_xErr(); }
	const float &evt_bs_yErr() { return cms3.evt_bs_yErr(); }
	const float &evt_bs_zErr() { return cms3.evt_bs_zErr(); }
	const float &evt_bField() { return cms3.evt_bField(); }
	const float &evt_fixgrid_all_rho() { return cms3.evt_fixgrid_all_rho(); }
	const float &evt_fixgridfastjet_allcalo_rho() { return cms3.evt_fixgridfastjet_allcalo_rho(); }
	const float &evt_fixgridfastjet_all_rho() { return cms3.evt_fixgridfastjet_all_rho(); }
	const float &evt_fixgridfastjet_centralcalo_rho() { return cms3.evt_fixgridfastjet_centralcalo_rho(); }
	const float &evt_fixgridfastjet_centralchargedpileup_rho() { return cms3.evt_fixgridfastjet_centralchargedpileup_rho(); }
	const float &evt_fixgridfastjet_centralneutral_rho() { return cms3.evt_fixgridfastjet_centralneutral_rho(); }
	const float &evt_kfactor() { return cms3.evt_kfactor(); }
	const float &evt_scale1fb() { return cms3.evt_scale1fb(); }
	const float &evt_xsec_excl() { return cms3.evt_xsec_excl(); }
	const float &evt_xsec_incl() { return cms3.evt_xsec_incl(); }
	const float &genps_alphaQCD() { return cms3.genps_alphaQCD(); }
	const float &genps_pthat() { return cms3.genps_pthat(); }
	const float &genps_qScale() { return cms3.genps_qScale(); }
	const float &genps_weight() { return cms3.genps_weight(); }
	const float &gen_sumEt() { return cms3.gen_sumEt(); }
	const float &hcalnoise_GetRecHitEnergy() { return cms3.hcalnoise_GetRecHitEnergy(); }
	const float &hcalnoise_GetRecHitEnergy15() { return cms3.hcalnoise_GetRecHitEnergy15(); }
	const float &hcalnoise_GetTotalCalibCharge() { return cms3.hcalnoise_GetTotalCalibCharge(); }
	const float &hcalnoise_TS4TS5NoiseSumE() { return cms3.hcalnoise_TS4TS5NoiseSumE(); }
	const float &hcalnoise_TS4TS5NoiseSumEt() { return cms3.hcalnoise_TS4TS5NoiseSumEt(); }
	const float &hcalnoise_eventChargeFraction() { return cms3.hcalnoise_eventChargeFraction(); }
	const float &hcalnoise_eventEMEnergy() { return cms3.hcalnoise_eventEMEnergy(); }
	const float &hcalnoise_eventEMFraction() { return cms3.hcalnoise_eventEMFraction(); }
	const float &hcalnoise_eventHadEnergy() { return cms3.hcalnoise_eventHadEnergy(); }
	const float &hcalnoise_eventTrackEnergy() { return cms3.hcalnoise_eventTrackEnergy(); }
	const float &hcalnoise_flatNoiseSumE() { return cms3.hcalnoise_flatNoiseSumE(); }
	const float &hcalnoise_flatNoiseSumEt() { return cms3.hcalnoise_flatNoiseSumEt(); }
	const float &hcalnoise_isolatedNoiseSumE() { return cms3.hcalnoise_isolatedNoiseSumE(); }
	const float &hcalnoise_isolatedNoiseSumEt() { return cms3.hcalnoise_isolatedNoiseSumEt(); }
	const float &hcalnoise_max10GeVHitTime() { return cms3.hcalnoise_max10GeVHitTime(); }
	const float &hcalnoise_max25GeVHitTime() { return cms3.hcalnoise_max25GeVHitTime(); }
	const float &hcalnoise_maxE10TS() { return cms3.hcalnoise_maxE10TS(); }
	const float &hcalnoise_maxE2Over10TS() { return cms3.hcalnoise_maxE2Over10TS(); }
	const float &hcalnoise_maxE2TS() { return cms3.hcalnoise_maxE2TS(); }
	const float &hcalnoise_min10GeVHitTime() { return cms3.hcalnoise_min10GeVHitTime(); }
	const float &hcalnoise_min25GeVHitTime() { return cms3.hcalnoise_min25GeVHitTime(); }
	const float &hcalnoise_minE10TS() { return cms3.hcalnoise_minE10TS(); }
	const float &hcalnoise_minE2Over10TS() { return cms3.hcalnoise_minE2Over10TS(); }
	const float &hcalnoise_minE2TS() { return cms3.hcalnoise_minE2TS(); }
	const float &hcalnoise_minHPDEMF() { return cms3.hcalnoise_minHPDEMF(); }
	const float &hcalnoise_minRBXEMF() { return cms3.hcalnoise_minRBXEMF(); }
	const float &hcalnoise_rms10GeVHitTime() { return cms3.hcalnoise_rms10GeVHitTime(); }
	const float &hcalnoise_rms25GeVHitTime() { return cms3.hcalnoise_rms25GeVHitTime(); }
	const float &hcalnoise_spikeNoiseSumE() { return cms3.hcalnoise_spikeNoiseSumE(); }
	const float &hcalnoise_spikeNoiseSumEt() { return cms3.hcalnoise_spikeNoiseSumEt(); }
	const float &hcalnoise_triangleNoiseSumE() { return cms3.hcalnoise_triangleNoiseSumE(); }
	const float &hcalnoise_triangleNoiseSumEt() { return cms3.hcalnoise_triangleNoiseSumEt(); }
	const float &pdfinfo_pdf1() { return cms3.pdfinfo_pdf1(); }
	const float &pdfinfo_pdf2() { return cms3.pdfinfo_pdf2(); }
	const float &pdfinfo_scale() { return cms3.pdfinfo_scale(); }
	const float &pdfinfo_x1() { return cms3.pdfinfo_x1(); }
	const float &pdfinfo_x2() { return cms3.pdfinfo_x2(); }
	const float &evt_fixgrid_rho_all() { return cms3.evt_fixgrid_rho_all(); }
	const float &evt_fixgrid_rho_ctr() { return cms3.evt_fixgrid_rho_ctr(); }
	const float &evt_fixgrid_rho_fwd() { return cms3.evt_fixgrid_rho_fwd(); }
	const float &evt_pfmet() { return cms3.evt_pfmet(); }
	const float &evt_pfmetPhi() { return cms3.evt_pfmetPhi(); }
	const float &evt_pfmetPhi_raw() { return cms3.evt_pfmetPhi_raw(); }
	const float &evt_pfmetSig() { return cms3.evt_pfmetSig(); }
	const float &evt_pfmetSignificance() { return cms3.evt_pfmetSignificance(); }
	const float &evt_pfmet_raw() { return cms3.evt_pfmet_raw(); }
	const float &evt_pfsumet() { return cms3.evt_pfsumet(); }
	const float &evt_pfsumet_raw() { return cms3.evt_pfsumet_raw(); }
	const float &gen_met() { return cms3.gen_met(); }
	const float &gen_metPhi() { return cms3.gen_metPhi(); }
	const float &sparm_filterEfficiency() { return cms3.sparm_filterEfficiency(); }
	const float &sparm_pdfScale() { return cms3.sparm_pdfScale(); }
	const float &sparm_pdfWeight1() { return cms3.sparm_pdfWeight1(); }
	const float &sparm_pdfWeight2() { return cms3.sparm_pdfWeight2(); }
	const float &sparm_weight() { return cms3.sparm_weight(); }
	const float &sparm_xsec() { return cms3.sparm_xsec(); }
	const ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> >  &evt_bsp4() { return cms3.evt_bsp4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_motherp4() { return cms3.els_mc_motherp4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_p4() { return cms3.els_mc_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_motherp4() { return cms3.mus_mc_motherp4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_p4() { return cms3.mus_mc_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_mc_gp_p4() { return cms3.pfjets_mc_gp_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_mc_motherp4() { return cms3.pfjets_mc_motherp4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_mc_p4() { return cms3.pfjets_mc_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_mc_motherp4() { return cms3.photons_mc_motherp4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_mc_p4() { return cms3.photons_mc_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_inner_position() { return cms3.els_inner_position(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_mc_patMatch_p4() { return cms3.els_mc_patMatch_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_outer_position() { return cms3.els_outer_position(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4() { return cms3.els_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4In() { return cms3.els_p4In(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_p4Out() { return cms3.els_p4Out(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_p4() { return cms3.els_trk_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_trk_vertex_p4() { return cms3.els_trk_vertex_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &els_vertex_p4() { return cms3.els_vertex_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genjets_p4NoMuNoNu() { return cms3.genjets_p4NoMuNoNu(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_p4() { return cms3.genps_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &genps_prod_vtx() { return cms3.genps_prod_vtx(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_ll_p4() { return cms3.hyp_ll_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_lt_p4() { return cms3.hyp_lt_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &hyp_p4() { return cms3.hyp_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_p4() { return cms3.mus_gfit_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_gfit_vertex_p4() { return cms3.mus_gfit_vertex_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_mc_patMatch_p4() { return cms3.mus_mc_patMatch_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_p4() { return cms3.mus_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_pfp4() { return cms3.mus_pfp4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_p4() { return cms3.mus_sta_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_sta_vertex_p4() { return cms3.mus_sta_vertex_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_trk_p4() { return cms3.mus_trk_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &mus_vertex_p4() { return cms3.mus_vertex_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfcands_p4() { return cms3.pfcands_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &pfjets_p4() { return cms3.pfjets_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_chargecand_p4() { return cms3.taus_pf_lead_chargecand_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_lead_neutrcand_p4() { return cms3.taus_pf_lead_neutrcand_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &taus_pf_p4() { return cms3.taus_pf_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &photons_p4() { return cms3.photons_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &svs_p4() { return cms3.svs_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &svs_position() { return cms3.svs_position(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &ak8jets_p4() { return cms3.ak8jets_p4(); }
	const vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > &vtxs_position() { return cms3.vtxs_position(); }
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &genps_lepdaughter_p4() { return cms3.genps_lepdaughter_p4(); }
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &hlt_trigObjs_p4() { return cms3.hlt_trigObjs_p4(); }
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_isocands_p4() { return cms3.taus_pf_isocands_p4(); }
	const vector<vector<ROOT::Math::LorentzVector<ROOT::Math::PxPyPzE4D<float> > > > &taus_pf_signalcands_p4() { return cms3.taus_pf_signalcands_p4(); }
	const vector<float> &evt_bs_covMatrix() { return cms3.evt_bs_covMatrix(); }
	const vector<float> &els_mc3dr() { return cms3.els_mc3dr(); }
	const vector<float> &els_mcdr() { return cms3.els_mcdr(); }
	const vector<float> &mus_mc3dr() { return cms3.mus_mc3dr(); }
	const vector<float> &mus_mcdr() { return cms3.mus_mcdr(); }
	const vector<float> &pfjets_mc3dr() { return cms3.pfjets_mc3dr(); }
	const vector<float> &pfjets_mcdr() { return cms3.pfjets_mcdr(); }
	const vector<float> &pfjets_mc_emEnergy() { return cms3.pfjets_mc_emEnergy(); }
	const vector<float> &pfjets_mc_gpdr() { return cms3.pfjets_mc_gpdr(); }
	const vector<float> &pfjets_mc_hadEnergy() { return cms3.pfjets_mc_hadEnergy(); }
	const vector<float> &pfjets_mc_invEnergy() { return cms3.pfjets_mc_invEnergy(); }
	const vector<float> &pfjets_mc_otherEnergy() { return cms3.pfjets_mc_otherEnergy(); }
	const vector<float> &photons_mc3dr() { return cms3.photons_mc3dr(); }
	const vector<float> &photons_mcdr() { return cms3.photons_mcdr(); }
	const vector<float> &els_bs2d() { return cms3.els_bs2d(); }
	const vector<float> &els_bs2derr() { return cms3.els_bs2derr(); }
	const vector<float> &els_bs3d() { return cms3.els_bs3d(); }
	const vector<float> &els_bs3derr() { return cms3.els_bs3derr(); }
	const vector<float> &els_chi2() { return cms3.els_chi2(); }
	const vector<float> &els_ckf_chi2() { return cms3.els_ckf_chi2(); }
	const vector<float> &els_ckf_ndof() { return cms3.els_ckf_ndof(); }
	const vector<float> &els_d0() { return cms3.els_d0(); }
	const vector<float> &els_d0Err() { return cms3.els_d0Err(); }
	const vector<float> &els_d0corr() { return cms3.els_d0corr(); }
	const vector<float> &els_d0corrPhi() { return cms3.els_d0corrPhi(); }
	const vector<float> &els_d0phiCov() { return cms3.els_d0phiCov(); }
	const vector<float> &els_dEtaIn() { return cms3.els_dEtaIn(); }
	const vector<float> &els_dEtaOut() { return cms3.els_dEtaOut(); }
	const vector<float> &els_dPhiIn() { return cms3.els_dPhiIn(); }
	const vector<float> &els_dPhiInPhiOut() { return cms3.els_dPhiInPhiOut(); }
	const vector<float> &els_dPhiOut() { return cms3.els_dPhiOut(); }
	const vector<float> &els_deltaEtaEleClusterTrackAtCalo() { return cms3.els_deltaEtaEleClusterTrackAtCalo(); }
	const vector<float> &els_deltaPhiEleClusterTrackAtCalo() { return cms3.els_deltaPhiEleClusterTrackAtCalo(); }
	const vector<float> &els_dxyPV() { return cms3.els_dxyPV(); }
	const vector<float> &els_dzPV() { return cms3.els_dzPV(); }
	const vector<float> &els_e1x5() { return cms3.els_e1x5(); }
	const vector<float> &els_e1x5_full5x5() { return cms3.els_e1x5_full5x5(); }
	const vector<float> &els_e2x5Max() { return cms3.els_e2x5Max(); }
	const vector<float> &els_e2x5Max_full5x5() { return cms3.els_e2x5Max_full5x5(); }
	const vector<float> &els_e5x5() { return cms3.els_e5x5(); }
	const vector<float> &els_e5x5_full5x5() { return cms3.els_e5x5_full5x5(); }
	const vector<float> &els_eOverPIn() { return cms3.els_eOverPIn(); }
	const vector<float> &els_eOverPOut() { return cms3.els_eOverPOut(); }
	const vector<float> &els_eSC() { return cms3.els_eSC(); }
	const vector<float> &els_eSCPresh() { return cms3.els_eSCPresh(); }
	const vector<float> &els_eSCRaw() { return cms3.els_eSCRaw(); }
	const vector<float> &els_eSeed() { return cms3.els_eSeed(); }
	const vector<float> &els_eSeedOverPIn() { return cms3.els_eSeedOverPIn(); }
	const vector<float> &els_eSeedOverPOut() { return cms3.els_eSeedOverPOut(); }
	const vector<float> &els_ecalEnergy() { return cms3.els_ecalEnergy(); }
	const vector<float> &els_ecalEnergyError() { return cms3.els_ecalEnergyError(); }
	const vector<float> &els_ecalIso() { return cms3.els_ecalIso(); }
	const vector<float> &els_ecalIso04() { return cms3.els_ecalIso04(); }
	const vector<float> &els_etaErr() { return cms3.els_etaErr(); }
	const vector<float> &els_etaSC() { return cms3.els_etaSC(); }
	const vector<float> &els_etaSCwidth() { return cms3.els_etaSCwidth(); }
	const vector<float> &els_fbrem() { return cms3.els_fbrem(); }
	const vector<float> &els_hOverE() { return cms3.els_hOverE(); }
	const vector<float> &els_hOverEBC() { return cms3.els_hOverEBC(); }
	const vector<float> &els_hcalDepth1OverEcal() { return cms3.els_hcalDepth1OverEcal(); }
	const vector<float> &els_hcalDepth1TowerSumEt() { return cms3.els_hcalDepth1TowerSumEt(); }
	const vector<float> &els_hcalDepth1TowerSumEt04() { return cms3.els_hcalDepth1TowerSumEt04(); }
	const vector<float> &els_hcalDepth2OverEcal() { return cms3.els_hcalDepth2OverEcal(); }
	const vector<float> &els_hcalDepth2TowerSumEt() { return cms3.els_hcalDepth2TowerSumEt(); }
	const vector<float> &els_hcalDepth2TowerSumEt04() { return cms3.els_hcalDepth2TowerSumEt04(); }
	const vector<float> &els_hcalIso() { return cms3.els_hcalIso(); }
	const vector<float> &els_hcalIso04() { return cms3.els_hcalIso04(); }
	const vector<float> &els_ip2d() { return cms3.els_ip2d(); }
	const vector<float> &els_ip2derr() { return cms3.els_ip2derr(); }
	const vector<float> &els_ip3d() { return cms3.els_ip3d(); }
	const vector<float> &els_ip3derr() { return cms3.els_ip3derr(); }
	const vector<float> &els_iso03_pf2012_ch() { return cms3.els_iso03_pf2012_ch(); }
	const vector<float> &els_iso03_pf2012_em() { return cms3.els_iso03_pf2012_em(); }
	const vector<float> &els_iso03_pf2012ext_ch() { return cms3.els_iso03_pf2012ext_ch(); }
	const vector<float> &els_iso03_pf2012ext_em() { return cms3.els_iso03_pf2012ext_em(); }
	const vector<float> &els_iso03_pf2012ext_nh() { return cms3.els_iso03_pf2012ext_nh(); }
	const vector<float> &els_iso03_pf2012_nh() { return cms3.els_iso03_pf2012_nh(); }
	const vector<float> &els_iso04_pf2012_ch() { return cms3.els_iso04_pf2012_ch(); }
	const vector<float> &els_iso04_pf2012_em() { return cms3.els_iso04_pf2012_em(); }
	const vector<float> &els_iso04_pf2012ext_ch() { return cms3.els_iso04_pf2012ext_ch(); }
	const vector<float> &els_iso04_pf2012ext_em() { return cms3.els_iso04_pf2012ext_em(); }
	const vector<float> &els_iso04_pf2012ext_nh() { return cms3.els_iso04_pf2012ext_nh(); }
	const vector<float> &els_iso04_pf2012_nh() { return cms3.els_iso04_pf2012_nh(); }
	const vector<float> &els_mass() { return cms3.els_mass(); }
	const vector<float> &els_mc_patMatch_dr() { return cms3.els_mc_patMatch_dr(); }
	const vector<float> &els_mva() { return cms3.els_mva(); }
 	const vector<float> &els_miniIso_ch() { return cms3.els_miniIso_ch(); }
 	const vector<float> &els_miniIso_db() { return cms3.els_miniIso_db(); }
 	const vector<float> &els_miniIso_em() { return cms3.els_miniIso_em(); }
 	const vector<float> &els_miniIso_nh() { return cms3.els_miniIso_nh(); }
 	const vector<float> &els_miniIso_uncor() { return cms3.els_miniIso_uncor(); }
	const vector<float> &els_ndof() { return cms3.els_ndof(); }
	const vector<float> &els_pfChargedHadronIso() { return cms3.els_pfChargedHadronIso(); }
	const vector<float> &els_pfNeutralHadronIso() { return cms3.els_pfNeutralHadronIso(); }
	const vector<float> &els_pfPUIso() { return cms3.els_pfPUIso(); }
	const vector<float> &els_pfPhotonIso() { return cms3.els_pfPhotonIso(); }
	const vector<float> &els_phiErr() { return cms3.els_phiErr(); }
	const vector<float> &els_phiSC() { return cms3.els_phiSC(); }
	const vector<float> &els_phiSCwidth() { return cms3.els_phiSCwidth(); }
	const vector<float> &els_ptErr() { return cms3.els_ptErr(); }
	const vector<float> &els_ptErrGsf() { return cms3.els_ptErrGsf(); }
	const vector<float> &els_r9() { return cms3.els_r9(); }
	const vector<float> &els_r9_full5x5() { return cms3.els_r9_full5x5(); }
	const vector<float> &els_sigmaEtaEta() { return cms3.els_sigmaEtaEta(); }
	const vector<float> &els_sigmaEtaEta_full5x5() { return cms3.els_sigmaEtaEta_full5x5(); }
	const vector<float> &els_sigmaIEtaIEta() { return cms3.els_sigmaIEtaIEta(); }
	const vector<float> &els_sigmaIEtaIEta_full5x5() { return cms3.els_sigmaIEtaIEta_full5x5(); }
	const vector<float> &els_sigmaIPhiIPhi() { return cms3.els_sigmaIPhiIPhi(); }
	const vector<float> &els_sigmaIPhiIPhi_full5x5() { return cms3.els_sigmaIPhiIPhi_full5x5(); }
	const vector<float> &els_sigmaIphiIphi() { return cms3.els_sigmaIphiIphi(); }
	const vector<float> &els_tkIso() { return cms3.els_tkIso(); }
	const vector<float> &els_tkIso04() { return cms3.els_tkIso04(); }
	const vector<float> &els_trackMomentumError() { return cms3.els_trackMomentumError(); }
	const vector<float> &els_trkdr() { return cms3.els_trkdr(); }
	const vector<float> &els_trkshFrac() { return cms3.els_trkshFrac(); }
	const vector<float> &els_z0() { return cms3.els_z0(); }
	const vector<float> &els_z0Err() { return cms3.els_z0Err(); }
	const vector<float> &els_z0corr() { return cms3.els_z0corr(); }
	const vector<float> &genps_charge() { return cms3.genps_charge(); }
	const vector<float> &genps_iso() { return cms3.genps_iso(); }
	const vector<float> &genps_mass() { return cms3.genps_mass(); }
	const vector<float> &mus_backToBackCompat() { return cms3.mus_backToBackCompat(); }
	const vector<float> &mus_bs2d() { return cms3.mus_bs2d(); }
	const vector<float> &mus_bs2derr() { return cms3.mus_bs2derr(); }
	const vector<float> &mus_bs3d() { return cms3.mus_bs3d(); }
	const vector<float> &mus_bs3derr() { return cms3.mus_bs3derr(); }
	const vector<float> &mus_caloCompatibility() { return cms3.mus_caloCompatibility(); }
	const vector<float> &mus_chi2() { return cms3.mus_chi2(); }
	const vector<float> &mus_chi2LocalMomentum() { return cms3.mus_chi2LocalMomentum(); }
	const vector<float> &mus_chi2LocalPosition() { return cms3.mus_chi2LocalPosition(); }
	const vector<float> &mus_cosmicCompat() { return cms3.mus_cosmicCompat(); }
	const vector<float> &mus_d0() { return cms3.mus_d0(); }
	const vector<float> &mus_d0Err() { return cms3.mus_d0Err(); }
	const vector<float> &mus_d0corr() { return cms3.mus_d0corr(); }
	const vector<float> &mus_d0corrPhi() { return cms3.mus_d0corrPhi(); }
	const vector<float> &mus_d0phiCov() { return cms3.mus_d0phiCov(); }
	const vector<float> &mus_dxyPV() { return cms3.mus_dxyPV(); }
	const vector<float> &mus_dzPV() { return cms3.mus_dzPV(); }
	const vector<float> &mus_ecal_time() { return cms3.mus_ecal_time(); }
	const vector<float> &mus_ecal_timeError() { return cms3.mus_ecal_timeError(); }
	const vector<float> &mus_e_em() { return cms3.mus_e_em(); }
	const vector<float> &mus_e_emS9() { return cms3.mus_e_emS9(); }
	const vector<float> &mus_e_had() { return cms3.mus_e_had(); }
	const vector<float> &mus_e_hadS9() { return cms3.mus_e_hadS9(); }
	const vector<float> &mus_e_ho() { return cms3.mus_e_ho(); }
	const vector<float> &mus_e_hoS9() { return cms3.mus_e_hoS9(); }
	const vector<float> &mus_emMax() { return cms3.mus_emMax(); }
	const vector<float> &mus_emS25() { return cms3.mus_emS25(); }
	const vector<float> &mus_etaErr() { return cms3.mus_etaErr(); }
	const vector<float> &mus_gfit_chi2() { return cms3.mus_gfit_chi2(); }
	const vector<float> &mus_gfit_d0() { return cms3.mus_gfit_d0(); }
	const vector<float> &mus_gfit_d0Err() { return cms3.mus_gfit_d0Err(); }
	const vector<float> &mus_gfit_d0corr() { return cms3.mus_gfit_d0corr(); }
	const vector<float> &mus_gfit_d0corrPhi() { return cms3.mus_gfit_d0corrPhi(); }
	const vector<float> &mus_gfit_d0phiCov() { return cms3.mus_gfit_d0phiCov(); }
	const vector<float> &mus_gfit_ndof() { return cms3.mus_gfit_ndof(); }
	const vector<float> &mus_gfit_qoverp() { return cms3.mus_gfit_qoverp(); }
	const vector<float> &mus_gfit_qoverpError() { return cms3.mus_gfit_qoverpError(); }
	const vector<float> &mus_gfit_z0() { return cms3.mus_gfit_z0(); }
	const vector<float> &mus_gfit_z0Err() { return cms3.mus_gfit_z0Err(); }
	const vector<float> &mus_gfit_z0corr() { return cms3.mus_gfit_z0corr(); }
	const vector<float> &mus_glbKink() { return cms3.mus_glbKink(); }
	const vector<float> &mus_glbTrackProbability() { return cms3.mus_glbTrackProbability(); }
	const vector<float> &mus_globalDeltaEtaPhi() { return cms3.mus_globalDeltaEtaPhi(); }
	const vector<float> &mus_hadMax() { return cms3.mus_hadMax(); }
	const vector<float> &mus_hcal_time() { return cms3.mus_hcal_time(); }
	const vector<float> &mus_hcal_timeError() { return cms3.mus_hcal_timeError(); }
	const vector<float> &mus_ip2d() { return cms3.mus_ip2d(); }
	const vector<float> &mus_ip2derr() { return cms3.mus_ip2derr(); }
	const vector<float> &mus_ip3d() { return cms3.mus_ip3d(); }
	const vector<float> &mus_ip3derr() { return cms3.mus_ip3derr(); }
	const vector<float> &mus_iso03_emEt() { return cms3.mus_iso03_emEt(); }
	const vector<float> &mus_iso03_hadEt() { return cms3.mus_iso03_hadEt(); }
	const vector<float> &mus_iso03_hoEt() { return cms3.mus_iso03_hoEt(); }
	const vector<float> &mus_iso03_sumPt() { return cms3.mus_iso03_sumPt(); }
	const vector<float> &mus_iso05_emEt() { return cms3.mus_iso05_emEt(); }
	const vector<float> &mus_iso05_hadEt() { return cms3.mus_iso05_hadEt(); }
	const vector<float> &mus_iso05_hoEt() { return cms3.mus_iso05_hoEt(); }
	const vector<float> &mus_iso05_sumPt() { return cms3.mus_iso05_sumPt(); }
	const vector<float> &mus_isoMeanDRR03_pf_ChargedHadronPt() { return cms3.mus_isoMeanDRR03_pf_ChargedHadronPt(); }
	const vector<float> &mus_isoMeanDRR03_pf_ChargedParticlePt() { return cms3.mus_isoMeanDRR03_pf_ChargedParticlePt(); }
	const vector<float> &mus_isoMeanDRR03_pf_NeutralHadronEt() { return cms3.mus_isoMeanDRR03_pf_NeutralHadronEt(); }
	const vector<float> &mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold() { return cms3.mus_isoMeanDRR03_pf_NeutralHadronEtHighThreshold(); }
	const vector<float> &mus_isoMeanDRR03_pf_PUPt() { return cms3.mus_isoMeanDRR03_pf_PUPt(); }
	const vector<float> &mus_isoMeanDRR03_pf_PhotonEt() { return cms3.mus_isoMeanDRR03_pf_PhotonEt(); }
	const vector<float> &mus_isoMeanDRR03_pf_PhotonEtHighThreshold() { return cms3.mus_isoMeanDRR03_pf_PhotonEtHighThreshold(); }
	const vector<float> &mus_isoMeanDRR04_pf_ChargedHadronPt() { return cms3.mus_isoMeanDRR04_pf_ChargedHadronPt(); }
	const vector<float> &mus_isoMeanDRR04_pf_ChargedParticlePt() { return cms3.mus_isoMeanDRR04_pf_ChargedParticlePt(); }
	const vector<float> &mus_isoMeanDRR04_pf_NeutralHadronEt() { return cms3.mus_isoMeanDRR04_pf_NeutralHadronEt(); }
	const vector<float> &mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold() { return cms3.mus_isoMeanDRR04_pf_NeutralHadronEtHighThreshold(); }
	const vector<float> &mus_isoMeanDRR04_pf_PUPt() { return cms3.mus_isoMeanDRR04_pf_PUPt(); }
	const vector<float> &mus_isoMeanDRR04_pf_PhotonEt() { return cms3.mus_isoMeanDRR04_pf_PhotonEt(); }
	const vector<float> &mus_isoMeanDRR04_pf_PhotonEtHighThreshold() { return cms3.mus_isoMeanDRR04_pf_PhotonEtHighThreshold(); }
	const vector<float> &mus_isoR03_pf_ChargedHadronPt() { return cms3.mus_isoR03_pf_ChargedHadronPt(); }
	const vector<float> &mus_isoR03_pf_ChargedParticlePt() { return cms3.mus_isoR03_pf_ChargedParticlePt(); }
	const vector<float> &mus_isoR03_pf_NeutralHadronEt() { return cms3.mus_isoR03_pf_NeutralHadronEt(); }
	const vector<float> &mus_isoR03_pf_NeutralHadronEtHighThreshold() { return cms3.mus_isoR03_pf_NeutralHadronEtHighThreshold(); }
	const vector<float> &mus_isoR03_pf_PUPt() { return cms3.mus_isoR03_pf_PUPt(); }
	const vector<float> &mus_isoR03_pf_PhotonEt() { return cms3.mus_isoR03_pf_PhotonEt(); }
	const vector<float> &mus_isoR03_pf_PhotonEtHighThreshold() { return cms3.mus_isoR03_pf_PhotonEtHighThreshold(); }
	const vector<float> &mus_isoR04_pf_ChargedHadronPt() { return cms3.mus_isoR04_pf_ChargedHadronPt(); }
	const vector<float> &mus_isoR04_pf_ChargedParticlePt() { return cms3.mus_isoR04_pf_ChargedParticlePt(); }
	const vector<float> &mus_isoR04_pf_NeutralHadronEt() { return cms3.mus_isoR04_pf_NeutralHadronEt(); }
	const vector<float> &mus_isoR04_pf_NeutralHadronEtHighThreshold() { return cms3.mus_isoR04_pf_NeutralHadronEtHighThreshold(); }
	const vector<float> &mus_isoR04_pf_PUPt() { return cms3.mus_isoR04_pf_PUPt(); }
	const vector<float> &mus_isoR04_pf_PhotonEt() { return cms3.mus_isoR04_pf_PhotonEt(); }
	const vector<float> &mus_isoR04_pf_PhotonEtHighThreshold() { return cms3.mus_isoR04_pf_PhotonEtHighThreshold(); }
	const vector<float> &mus_isoSumDRR03_pf_ChargedHadronPt() { return cms3.mus_isoSumDRR03_pf_ChargedHadronPt(); }
	const vector<float> &mus_isoSumDRR03_pf_ChargedParticlePt() { return cms3.mus_isoSumDRR03_pf_ChargedParticlePt(); }
	const vector<float> &mus_isoSumDRR03_pf_NeutralHadronEt() { return cms3.mus_isoSumDRR03_pf_NeutralHadronEt(); }
	const vector<float> &mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold() { return cms3.mus_isoSumDRR03_pf_NeutralHadronEtHighThreshold(); }
	const vector<float> &mus_isoSumDRR03_pf_PUPt() { return cms3.mus_isoSumDRR03_pf_PUPt(); }
	const vector<float> &mus_isoSumDRR03_pf_PhotonEt() { return cms3.mus_isoSumDRR03_pf_PhotonEt(); }
	const vector<float> &mus_isoSumDRR03_pf_PhotonEtHighThreshold() { return cms3.mus_isoSumDRR03_pf_PhotonEtHighThreshold(); }
	const vector<float> &mus_isoSumDRR04_pf_ChargedHadronPt() { return cms3.mus_isoSumDRR04_pf_ChargedHadronPt(); }
	const vector<float> &mus_isoSumDRR04_pf_ChargedParticlePt() { return cms3.mus_isoSumDRR04_pf_ChargedParticlePt(); }
	const vector<float> &mus_isoSumDRR04_pf_NeutralHadronEt() { return cms3.mus_isoSumDRR04_pf_NeutralHadronEt(); }
	const vector<float> &mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold() { return cms3.mus_isoSumDRR04_pf_NeutralHadronEtHighThreshold(); }
	const vector<float> &mus_isoSumDRR04_pf_PUPt() { return cms3.mus_isoSumDRR04_pf_PUPt(); }
	const vector<float> &mus_isoSumDRR04_pf_PhotonEt() { return cms3.mus_isoSumDRR04_pf_PhotonEt(); }
	const vector<float> &mus_isoSumDRR04_pf_PhotonEtHighThreshold() { return cms3.mus_isoSumDRR04_pf_PhotonEtHighThreshold(); }
	const vector<float> &mus_iso_ecalvetoDep() { return cms3.mus_iso_ecalvetoDep(); }
	const vector<float> &mus_iso_hcalvetoDep() { return cms3.mus_iso_hcalvetoDep(); }
	const vector<float> &mus_iso_hovetoDep() { return cms3.mus_iso_hovetoDep(); }
	const vector<float> &mus_iso_trckvetoDep() { return cms3.mus_iso_trckvetoDep(); }
	const vector<float> &mus_localDistance() { return cms3.mus_localDistance(); }
	const vector<float> &mus_mass() { return cms3.mus_mass(); }
	const vector<float> &mus_mc_patMatch_dr() { return cms3.mus_mc_patMatch_dr(); }
 	const vector<float> &mus_miniIso_ch() { return cms3.mus_miniIso_ch(); }
 	const vector<float> &mus_miniIso_db() { return cms3.mus_miniIso_db(); }
 	const vector<float> &mus_miniIso_em() { return cms3.mus_miniIso_em(); }
 	const vector<float> &mus_miniIso_nh() { return cms3.mus_miniIso_nh(); }
 	const vector<float> &mus_miniIso_uncor() { return cms3.mus_miniIso_uncor(); }
	const vector<float> &mus_ndof() { return cms3.mus_ndof(); }
	const vector<float> &mus_overlapCompat() { return cms3.mus_overlapCompat(); }
	const vector<float> &mus_phiErr() { return cms3.mus_phiErr(); }
	const vector<float> &mus_ptErr() { return cms3.mus_ptErr(); }
	const vector<float> &mus_qoverp() { return cms3.mus_qoverp(); }
	const vector<float> &mus_qoverpError() { return cms3.mus_qoverpError(); }
	const vector<float> &mus_segmCompatibility() { return cms3.mus_segmCompatibility(); }
	const vector<float> &mus_staRelChi2() { return cms3.mus_staRelChi2(); }
	const vector<float> &mus_sta_chi2() { return cms3.mus_sta_chi2(); }
	const vector<float> &mus_sta_d0() { return cms3.mus_sta_d0(); }
	const vector<float> &mus_sta_d0Err() { return cms3.mus_sta_d0Err(); }
	const vector<float> &mus_sta_d0corr() { return cms3.mus_sta_d0corr(); }
	const vector<float> &mus_sta_d0corrPhi() { return cms3.mus_sta_d0corrPhi(); }
	const vector<float> &mus_sta_d0phiCov() { return cms3.mus_sta_d0phiCov(); }
	const vector<float> &mus_sta_ndof() { return cms3.mus_sta_ndof(); }
	const vector<float> &mus_sta_qoverp() { return cms3.mus_sta_qoverp(); }
	const vector<float> &mus_sta_qoverpError() { return cms3.mus_sta_qoverpError(); }
	const vector<float> &mus_sta_z0() { return cms3.mus_sta_z0(); }
	const vector<float> &mus_sta_z0Err() { return cms3.mus_sta_z0Err(); }
	const vector<float> &mus_sta_z0corr() { return cms3.mus_sta_z0corr(); }
	const vector<float> &mus_timeAtIpInOut() { return cms3.mus_timeAtIpInOut(); }
	const vector<float> &mus_timeAtIpInOutErr() { return cms3.mus_timeAtIpInOutErr(); }
	const vector<float> &mus_timeAtIpOutIn() { return cms3.mus_timeAtIpOutIn(); }
	const vector<float> &mus_timeAtIpOutInErr() { return cms3.mus_timeAtIpOutInErr(); }
	const vector<float> &mus_timeCompat() { return cms3.mus_timeCompat(); }
	const vector<float> &mus_tower() { return cms3.mus_tower(); }
	const vector<float> &mus_towerS9() { return cms3.mus_towerS9(); }
	const vector<float> &mus_trkKink() { return cms3.mus_trkKink(); }
	const vector<float> &mus_trkRelChi2() { return cms3.mus_trkRelChi2(); }
	const vector<float> &mus_vertexCompat() { return cms3.mus_vertexCompat(); }
	const vector<float> &mus_vertexphi() { return cms3.mus_vertexphi(); }
	const vector<float> &mus_z0() { return cms3.mus_z0(); }
	const vector<float> &mus_z0Err() { return cms3.mus_z0Err(); }
	const vector<float> &mus_z0corr() { return cms3.mus_z0corr(); }
	const vector<float> &pfcands_dz() { return cms3.pfcands_dz(); }
	const vector<float> &pfcands_mass() { return cms3.pfcands_mass(); }
	const vector<float> &pfjets_area() { return cms3.pfjets_area(); }
	const vector<float> &pfjets_chargedEmE() { return cms3.pfjets_chargedEmE(); }
	const vector<float> &pfjets_chargedHadronE() { return cms3.pfjets_chargedHadronE(); }
	const vector<float> &pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag() { return cms3.pfjets_pfCombinedInclusiveSecondaryVertexV2BJetTag(); }
	const vector<float> &pfjets_combinedMVABJetTag() { return cms3.pfjets_combinedMVABJetTag(); }
	const vector<float> &pfjets_corL1Fast() { return cms3.pfjets_corL1Fast(); }
	const vector<float> &pfjets_corL1FastL2L3() { return cms3.pfjets_corL1FastL2L3(); }
	const vector<float> &pfjets_corL2L3() { return cms3.pfjets_corL2L3(); }
	const vector<float> &pfjets_electronE() { return cms3.pfjets_electronE(); }
	const vector<float> &pfjets_hfEmE() { return cms3.pfjets_hfEmE(); }
	const vector<float> &pfjets_hfHadronE() { return cms3.pfjets_hfHadronE(); }
	const vector<float> &pfjets_jetBProbabilityBJetTag() { return cms3.pfjets_jetBProbabilityBJetTag(); }
	const vector<float> &pfjets_jetProbabilityBJetTag() { return cms3.pfjets_jetProbabilityBJetTag(); }
	const vector<float> &pfjets_mass() { return cms3.pfjets_mass(); }
	const vector<float> &pfjets_muonE() { return cms3.pfjets_muonE(); }
	const vector<float> &pfjets_neutralEmE() { return cms3.pfjets_neutralEmE(); }
	const vector<float> &pfjets_neutralHadronE() { return cms3.pfjets_neutralHadronE(); }
	const vector<float> &pfjets_pfCombinedSecondaryVertexBJetTag() { return cms3.pfjets_pfCombinedSecondaryVertexBJetTag(); }
	const vector<float> &pfjets_photonE() { return cms3.pfjets_photonE(); }
	const vector<float> &pfjets_pileupJetId() { return cms3.pfjets_pileupJetId(); }
	const vector<float> &pfjets_simpleSecondaryVertexHighEffBJetTag() { return cms3.pfjets_simpleSecondaryVertexHighEffBJetTag(); }
	const vector<float> &pfjets_simpleSecondaryVertexHighPurBJetTags() { return cms3.pfjets_simpleSecondaryVertexHighPurBJetTags(); }
	const vector<float> &pfjets_trackCountingHighEffBJetTag() { return cms3.pfjets_trackCountingHighEffBJetTag(); }
	const vector<float> &pfjets_trackCountingHighPurBJetTag() { return cms3.pfjets_trackCountingHighPurBJetTag(); }
	const vector<float> &pfjets_undoJEC() { return cms3.pfjets_undoJEC(); }
	const vector<float> &taus_pf_mass() { return cms3.taus_pf_mass(); }
	const vector<float> &photons_chargedHadronIso() { return cms3.photons_chargedHadronIso(); }
	const vector<float> &photons_e1x5() { return cms3.photons_e1x5(); }
	const vector<float> &photons_e2x5Max() { return cms3.photons_e2x5Max(); }
	const vector<float> &photons_e3x3() { return cms3.photons_e3x3(); }
	const vector<float> &photons_e5x5() { return cms3.photons_e5x5(); }
	const vector<float> &photons_ecalIso03() { return cms3.photons_ecalIso03(); }
	const vector<float> &photons_ecalIso04() { return cms3.photons_ecalIso04(); }
	const vector<float> &photons_full3x3_e3x3() { return cms3.photons_full3x3_e3x3(); }
	const vector<float> &photons_full5x5_e1x5() { return cms3.photons_full5x5_e1x5(); }
	const vector<float> &photons_full5x5_e2x5Max() { return cms3.photons_full5x5_e2x5Max(); }
	const vector<float> &photons_full5x5_e5x5() { return cms3.photons_full5x5_e5x5(); }
	const vector<float> &photons_full5x5_hOverE() { return cms3.photons_full5x5_hOverE(); }
	const vector<float> &photons_full5x5_hOverEtowBC() { return cms3.photons_full5x5_hOverEtowBC(); }
	const vector<float> &photons_full5x5_r9() { return cms3.photons_full5x5_r9(); }
	const vector<float> &photons_full5x5_sigmaEtaEta() { return cms3.photons_full5x5_sigmaEtaEta(); }
	const vector<float> &photons_full5x5_sigmaIEtaIEta() { return cms3.photons_full5x5_sigmaIEtaIEta(); }
	const vector<float> &photons_hOverE() { return cms3.photons_hOverE(); }
	const vector<float> &photons_hcalDepth1TowerSumEtBcConeDR03() { return cms3.photons_hcalDepth1TowerSumEtBcConeDR03(); }
	const vector<float> &photons_hcalDepth1TowerSumEtBcConeDR04() { return cms3.photons_hcalDepth1TowerSumEtBcConeDR04(); }
	const vector<float> &photons_hcalDepth2TowerSumEtBcConeDR03() { return cms3.photons_hcalDepth2TowerSumEtBcConeDR03(); }
	const vector<float> &photons_hcalDepth2TowerSumEtBcConeDR04() { return cms3.photons_hcalDepth2TowerSumEtBcConeDR04(); }
	const vector<float> &photons_hcalIso03() { return cms3.photons_hcalIso03(); }
	const vector<float> &photons_hcalIso04() { return cms3.photons_hcalIso04(); }
	const vector<float> &photons_hcalTowerSumEtBcConeDR03() { return cms3.photons_hcalTowerSumEtBcConeDR03(); }
	const vector<float> &photons_hcalTowerSumEtBcConeDR04() { return cms3.photons_hcalTowerSumEtBcConeDR04(); }
	const vector<float> &photons_mass() { return cms3.photons_mass(); }
	const vector<float> &photons_neutralHadronIso() { return cms3.photons_neutralHadronIso(); }
	const vector<float> &photons_ntkIsoHollow03() { return cms3.photons_ntkIsoHollow03(); }
	const vector<float> &photons_ntkIsoHollow04() { return cms3.photons_ntkIsoHollow04(); }
	const vector<float> &photons_ntkIsoSolid03() { return cms3.photons_ntkIsoSolid03(); }
	const vector<float> &photons_ntkIsoSolid04() { return cms3.photons_ntkIsoSolid04(); }
	const vector<float> &photons_photonIso() { return cms3.photons_photonIso(); }
	const vector<float> &photons_recoChargedHadronIso() { return cms3.photons_recoChargedHadronIso(); }
	const vector<float> &photons_recoNeutralHadronIso() { return cms3.photons_recoNeutralHadronIso(); }
	const vector<float> &photons_recoPhotonIso() { return cms3.photons_recoPhotonIso(); }
	const vector<float> &photons_sigmaEtaEta() { return cms3.photons_sigmaEtaEta(); }
	const vector<float> &photons_sigmaIEtaIEta() { return cms3.photons_sigmaIEtaIEta(); }
	const vector<float> &photons_tkIsoHollow03() { return cms3.photons_tkIsoHollow03(); }
	const vector<float> &photons_tkIsoHollow04() { return cms3.photons_tkIsoHollow04(); }
	const vector<float> &photons_tkIsoSolid03() { return cms3.photons_tkIsoSolid03(); }
	const vector<float> &photons_tkIsoSolid04() { return cms3.photons_tkIsoSolid04(); }
	const vector<float> &puInfo_trueNumInteractions() { return cms3.puInfo_trueNumInteractions(); }
	const vector<float> &convs_chi2() { return cms3.convs_chi2(); }
	const vector<float> &convs_dl() { return cms3.convs_dl(); }
	const vector<float> &convs_ndof() { return cms3.convs_ndof(); }
	const vector<float> &sparm_values() { return cms3.sparm_values(); }
	const vector<float> &svs_anglePV() { return cms3.svs_anglePV(); }
	const vector<float> &svs_chi2() { return cms3.svs_chi2(); }
	const vector<float> &svs_dist3Dsig() { return cms3.svs_dist3Dsig(); }
	const vector<float> &svs_dist3Dval() { return cms3.svs_dist3Dval(); }
	const vector<float> &svs_distXYsig() { return cms3.svs_distXYsig(); }
	const vector<float> &svs_distXYval() { return cms3.svs_distXYval(); }
	const vector<float> &svs_ndof() { return cms3.svs_ndof(); }
	const vector<float> &svs_prob() { return cms3.svs_prob(); }
	const vector<float> &svs_xError() { return cms3.svs_xError(); }
	const vector<float> &svs_yError() { return cms3.svs_yError(); }
	const vector<float> &svs_zError() { return cms3.svs_zError(); }
	const vector<float> &ak8jets_area() { return cms3.ak8jets_area(); }
	const vector<float> &ak8jets_combinedSecondaryVertexBJetTag() { return cms3.ak8jets_combinedSecondaryVertexBJetTag(); }
	const vector<float> &ak8jets_filteredMass() { return cms3.ak8jets_filteredMass(); }
	const vector<float> &ak8jets_jetBProbabilityBJetTag() { return cms3.ak8jets_jetBProbabilityBJetTag(); }
	const vector<float> &ak8jets_jetProbabilityBJetTag() { return cms3.ak8jets_jetProbabilityBJetTag(); }
	const vector<float> &ak8jets_mass() { return cms3.ak8jets_mass(); }
	const vector<float> &ak8jets_nJettinessTau1() { return cms3.ak8jets_nJettinessTau1(); }
	const vector<float> &ak8jets_nJettinessTau2() { return cms3.ak8jets_nJettinessTau2(); }
	const vector<float> &ak8jets_nJettinessTau3() { return cms3.ak8jets_nJettinessTau3(); }
	const vector<float> &ak8jets_prunedMass() { return cms3.ak8jets_prunedMass(); }
	const vector<float> &ak8jets_simpleSecondaryVertexHighEffBJetTag() { return cms3.ak8jets_simpleSecondaryVertexHighEffBJetTag(); }
	const vector<float> &ak8jets_simpleSecondaryVertexHighPurBJetTags() { return cms3.ak8jets_simpleSecondaryVertexHighPurBJetTags(); }
	const vector<float> &ak8jets_trackCountingHighEffBJetTag() { return cms3.ak8jets_trackCountingHighEffBJetTag(); }
	const vector<float> &ak8jets_trackCountingHighPurBJetTag() { return cms3.ak8jets_trackCountingHighPurBJetTag(); }
	const vector<float> &ak8jets_trimmedMass() { return cms3.ak8jets_trimmedMass(); }
	const vector<float> &ak8jets_undoJEC() { return cms3.ak8jets_undoJEC(); }
	const vector<float> &vtxs_chi2() { return cms3.vtxs_chi2(); }
	const vector<float> &vtxs_ndof() { return cms3.vtxs_ndof(); }
	const vector<float> &vtxs_sumpt() { return cms3.vtxs_sumpt(); }
	const vector<float> &vtxs_xError() { return cms3.vtxs_xError(); }
	const vector<float> &vtxs_yError() { return cms3.vtxs_yError(); }
	const vector<float> &vtxs_zError() { return cms3.vtxs_zError(); }
	const vector<vector<float> > &mus_stationShowerDeltaR() { return cms3.mus_stationShowerDeltaR(); }
	const vector<vector<float> > &mus_stationShowerSizeT() { return cms3.mus_stationShowerSizeT(); }
	const vector<vector<float> > &taus_pf_IDs() { return cms3.taus_pf_IDs(); }
	const vector<vector<float> > &puInfo_instLumi() { return cms3.puInfo_instLumi(); }
	const vector<vector<float> > &vtxs_covMatrix() { return cms3.vtxs_covMatrix(); }
	const int &evt_bsType() { return cms3.evt_bsType(); }
	const int &evt_bunchCrossing() { return cms3.evt_bunchCrossing(); }
	const int &evt_experimentType() { return cms3.evt_experimentType(); }
	const int &evt_isRealData() { return cms3.evt_isRealData(); }
	const int &evt_orbitNumber() { return cms3.evt_orbitNumber(); }
	const int &evt_storeNumber() { return cms3.evt_storeNumber(); }
	const int &hcalnoise_GetRecHitCount() { return cms3.hcalnoise_GetRecHitCount(); }
	const int &hcalnoise_GetRecHitCount15() { return cms3.hcalnoise_GetRecHitCount15(); }
	const int &hcalnoise_maxHPDHits() { return cms3.hcalnoise_maxHPDHits(); }
	const int &hcalnoise_maxHPDNoOtherHits() { return cms3.hcalnoise_maxHPDNoOtherHits(); }
	const int &hcalnoise_maxRBXHits() { return cms3.hcalnoise_maxRBXHits(); }
	const int &hcalnoise_maxZeros() { return cms3.hcalnoise_maxZeros(); }
	const int &hcalnoise_noiseFilterStatus() { return cms3.hcalnoise_noiseFilterStatus(); }
	const int &hcalnoise_noiseType() { return cms3.hcalnoise_noiseType(); }
	const int &hcalnoise_num10GeVHits() { return cms3.hcalnoise_num10GeVHits(); }
	const int &hcalnoise_num25GeVHits() { return cms3.hcalnoise_num25GeVHits(); }
	const int &hcalnoise_numFlatNoiseChannels() { return cms3.hcalnoise_numFlatNoiseChannels(); }
	const int &hcalnoise_numIsolatedNoiseChannels() { return cms3.hcalnoise_numIsolatedNoiseChannels(); }
	const int &hcalnoise_numProblematicRBXs() { return cms3.hcalnoise_numProblematicRBXs(); }
	const int &hcalnoise_numSpikeNoiseChannels() { return cms3.hcalnoise_numSpikeNoiseChannels(); }
	const int &hcalnoise_numTS4TS5NoiseChannels() { return cms3.hcalnoise_numTS4TS5NoiseChannels(); }
	const int &hcalnoise_numTriangleNoiseChannels() { return cms3.hcalnoise_numTriangleNoiseChannels(); }
	const int &hcalnoise_passHighLevelNoiseFilter() { return cms3.hcalnoise_passHighLevelNoiseFilter(); }
	const int &hcalnoise_passLooseNoiseFilter() { return cms3.hcalnoise_passLooseNoiseFilter(); }
	const int &hcalnoise_passTightNoiseFilter() { return cms3.hcalnoise_passTightNoiseFilter(); }
	const int &pdfinfo_id1() { return cms3.pdfinfo_id1(); }
	const int &pdfinfo_id2() { return cms3.pdfinfo_id2(); }
	const int &sparm_subProcessId() { return cms3.sparm_subProcessId(); }
	const vector<int> &els_mc3_id() { return cms3.els_mc3_id(); }
	const vector<int> &els_mc3idx() { return cms3.els_mc3idx(); }
	const vector<int> &els_mc3_motherid() { return cms3.els_mc3_motherid(); }
	const vector<int> &els_mc3_motheridx() { return cms3.els_mc3_motheridx(); }
	const vector<int> &els_mc_id() { return cms3.els_mc_id(); }
	const vector<int> &els_mcidx() { return cms3.els_mcidx(); }
	const vector<int> &els_mc_motherid() { return cms3.els_mc_motherid(); }
	const vector<int> &mus_mc3_id() { return cms3.mus_mc3_id(); }
	const vector<int> &mus_mc3idx() { return cms3.mus_mc3idx(); }
	const vector<int> &mus_mc3_motherid() { return cms3.mus_mc3_motherid(); }
	const vector<int> &mus_mc3_motheridx() { return cms3.mus_mc3_motheridx(); }
	const vector<int> &mus_mc_id() { return cms3.mus_mc_id(); }
	const vector<int> &mus_mcidx() { return cms3.mus_mcidx(); }
	const vector<int> &mus_mc_motherid() { return cms3.mus_mc_motherid(); }
	const vector<int> &pfjets_mc3_id() { return cms3.pfjets_mc3_id(); }
	const vector<int> &pfjets_mc3idx() { return cms3.pfjets_mc3idx(); }
	const vector<int> &pfjets_mc_gpidx() { return cms3.pfjets_mc_gpidx(); }
	const vector<int> &pfjets_mc_id() { return cms3.pfjets_mc_id(); }
	const vector<int> &pfjets_mcidx() { return cms3.pfjets_mcidx(); }
	const vector<int> &pfjets_mc_motherid() { return cms3.pfjets_mc_motherid(); }
	const vector<int> &photons_mc3_id() { return cms3.photons_mc3_id(); }
	const vector<int> &photons_mc3idx() { return cms3.photons_mc3idx(); }
	const vector<int> &photons_mc3_motherid() { return cms3.photons_mc3_motherid(); }
	const vector<int> &photons_mc3_motheridx() { return cms3.photons_mc3_motheridx(); }
	const vector<int> &photons_mc_id() { return cms3.photons_mc_id(); }
	const vector<int> &photons_mcidx() { return cms3.photons_mcidx(); }
	const vector<int> &photons_mc_motherid() { return cms3.photons_mc_motherid(); }
	const vector<int> &els_category() { return cms3.els_category(); }
	const vector<int> &els_charge() { return cms3.els_charge(); }
	const vector<int> &els_ckf_charge() { return cms3.els_ckf_charge(); }
	const vector<int> &els_ckf_laywithmeas() { return cms3.els_ckf_laywithmeas(); }
	const vector<int> &els_class() { return cms3.els_class(); }
	const vector<int> &els_exp_innerlayers() { return cms3.els_exp_innerlayers(); }
	const vector<int> &els_exp_outerlayers() { return cms3.els_exp_outerlayers(); }
	const vector<int> &els_fiduciality() { return cms3.els_fiduciality(); }
	const vector<int> &els_lostHits() { return cms3.els_lostHits(); }
	const vector<int> &els_lost_pixelhits() { return cms3.els_lost_pixelhits(); }
	const vector<int> &els_mc_patMatch_id() { return cms3.els_mc_patMatch_id(); }
	const vector<int> &els_nSeed() { return cms3.els_nSeed(); }
	const vector<int> &els_nlayers() { return cms3.els_nlayers(); }
	const vector<int> &els_nlayers3D() { return cms3.els_nlayers3D(); }
	const vector<int> &els_nlayersLost() { return cms3.els_nlayersLost(); }
	const vector<int> &els_sccharge() { return cms3.els_sccharge(); }
	const vector<int> &els_trk_charge() { return cms3.els_trk_charge(); }
	const vector<int> &els_type() { return cms3.els_type(); }
	const vector<int> &els_validHits() { return cms3.els_validHits(); }
	const vector<int> &els_valid_pixelhits() { return cms3.els_valid_pixelhits(); }
	const vector<int> &els_passLooseId() { return cms3.els_passLooseId(); }
	const vector<int> &els_passMediumId() { return cms3.els_passMediumId(); }
	const vector<int> &els_passTightId() { return cms3.els_passTightId(); }
	const vector<int> &els_passVetoId() { return cms3.els_passVetoId(); }
	const vector<int> &genps_id() { return cms3.genps_id(); }
	const vector<int> &genps_id_mother() { return cms3.genps_id_mother(); }
	const vector<int> &genps_id_simplegrandma() { return cms3.genps_id_simplegrandma(); }
	const vector<int> &genps_id_simplemother() { return cms3.genps_id_simplemother(); }
	const vector<int> &genps_idx_mother() { return cms3.genps_idx_mother(); }
	const vector<int> &genps_idx_simplemother() { return cms3.genps_idx_simplemother(); }
	const vector<int> &genps_status() { return cms3.genps_status(); }
	const vector<int> &hyp_ll_charge() { return cms3.hyp_ll_charge(); }
	const vector<int> &hyp_ll_id() { return cms3.hyp_ll_id(); }
	const vector<int> &hyp_ll_index() { return cms3.hyp_ll_index(); }
	const vector<int> &hyp_lt_charge() { return cms3.hyp_lt_charge(); }
	const vector<int> &hyp_lt_id() { return cms3.hyp_lt_id(); }
	const vector<int> &hyp_lt_index() { return cms3.hyp_lt_index(); }
	const vector<int> &hyp_type() { return cms3.hyp_type(); }
	const vector<int> &mus_algo() { return cms3.mus_algo(); }
	const vector<int> &mus_charge() { return cms3.mus_charge(); }
	const vector<int> &mus_ecal_rawId() { return cms3.mus_ecal_rawId(); }
	const vector<int> &mus_exp_innerlayers() { return cms3.mus_exp_innerlayers(); }
	const vector<int> &mus_exp_outerlayers() { return cms3.mus_exp_outerlayers(); }
	const vector<int> &mus_gfit_algo() { return cms3.mus_gfit_algo(); }
	const vector<int> &mus_gfit_etaErr() { return cms3.mus_gfit_etaErr(); }
	const vector<int> &mus_gfit_exp_innerlayer() { return cms3.mus_gfit_exp_innerlayer(); }
	const vector<int> &mus_gfit_exp_outerlayer() { return cms3.mus_gfit_exp_outerlayer(); }
	const vector<int> &mus_gfit_lostHits() { return cms3.mus_gfit_lostHits(); }
	const vector<int> &mus_gfit_lostPixelHits() { return cms3.mus_gfit_lostPixelHits(); }
	const vector<int> &mus_gfit_nlayers() { return cms3.mus_gfit_nlayers(); }
	const vector<int> &mus_gfit_nlayers3D() { return cms3.mus_gfit_nlayers3D(); }
	const vector<int> &mus_gfit_nlayersLost() { return cms3.mus_gfit_nlayersLost(); }
	const vector<int> &mus_gfit_phiErr() { return cms3.mus_gfit_phiErr(); }
	const vector<int> &mus_gfit_ptErr() { return cms3.mus_gfit_ptErr(); }
	const vector<int> &mus_gfit_qualityMask() { return cms3.mus_gfit_qualityMask(); }
	const vector<int> &mus_gfit_trk_charge() { return cms3.mus_gfit_trk_charge(); }
	const vector<int> &mus_gfit_validHits() { return cms3.mus_gfit_validHits(); }
	const vector<int> &mus_gfit_validPixelHits() { return cms3.mus_gfit_validPixelHits(); }
	const vector<int> &mus_gfit_validSTAHits() { return cms3.mus_gfit_validSTAHits(); }
	const vector<int> &mus_gfit_validSiHits() { return cms3.mus_gfit_validSiHits(); }
	const vector<int> &mus_goodmask() { return cms3.mus_goodmask(); }
	const vector<int> &mus_hcal_rawId() { return cms3.mus_hcal_rawId(); }
	const vector<int> &mus_iso03_njets() { return cms3.mus_iso03_njets(); }
	const vector<int> &mus_iso03_ntrk() { return cms3.mus_iso03_ntrk(); }
	const vector<int> &mus_iso05_ntrk() { return cms3.mus_iso05_ntrk(); }
	const vector<int> &mus_lostHits() { return cms3.mus_lostHits(); }
	const vector<int> &mus_lostPixelHits() { return cms3.mus_lostPixelHits(); }
	const vector<int> &mus_mc_patMatch_id() { return cms3.mus_mc_patMatch_id(); }
	const vector<int> &mus_muonBestTrackType() { return cms3.mus_muonBestTrackType(); }
	const vector<int> &mus_nOverlaps() { return cms3.mus_nOverlaps(); }
	const vector<int> &mus_nlayers() { return cms3.mus_nlayers(); }
	const vector<int> &mus_nlayers3D() { return cms3.mus_nlayers3D(); }
	const vector<int> &mus_nlayersLost() { return cms3.mus_nlayersLost(); }
	const vector<int> &mus_nmatches() { return cms3.mus_nmatches(); }
	const vector<int> &mus_numberOfMatchedStations() { return cms3.mus_numberOfMatchedStations(); }
	const vector<int> &mus_overlap0() { return cms3.mus_overlap0(); }
	const vector<int> &mus_overlap1() { return cms3.mus_overlap1(); }
	const vector<int> &mus_pfcharge() { return cms3.mus_pfcharge(); }
	const vector<int> &mus_pfidx() { return cms3.mus_pfidx(); }
	const vector<int> &mus_pfparticleId() { return cms3.mus_pfparticleId(); }
	const vector<int> &mus_pid_PFMuon() { return cms3.mus_pid_PFMuon(); }
	const vector<int> &mus_pid_TM2DCompatibilityLoose() { return cms3.mus_pid_TM2DCompatibilityLoose(); }
	const vector<int> &mus_pid_TM2DCompatibilityTight() { return cms3.mus_pid_TM2DCompatibilityTight(); }
	const vector<int> &mus_pid_TMLastStationLoose() { return cms3.mus_pid_TMLastStationLoose(); }
	const vector<int> &mus_pid_TMLastStationTight() { return cms3.mus_pid_TMLastStationTight(); }
	const vector<int> &mus_qualityMask() { return cms3.mus_qualityMask(); }
	const vector<int> &mus_sta_algo() { return cms3.mus_sta_algo(); }
	const vector<int> &mus_sta_etaErr() { return cms3.mus_sta_etaErr(); }
	const vector<int> &mus_sta_exp_innerlayer() { return cms3.mus_sta_exp_innerlayer(); }
	const vector<int> &mus_sta_exp_outerlayer() { return cms3.mus_sta_exp_outerlayer(); }
	const vector<int> &mus_sta_lostHits() { return cms3.mus_sta_lostHits(); }
	const vector<int> &mus_sta_lostPixelHits() { return cms3.mus_sta_lostPixelHits(); }
	const vector<int> &mus_sta_nlayers() { return cms3.mus_sta_nlayers(); }
	const vector<int> &mus_sta_nlayers3D() { return cms3.mus_sta_nlayers3D(); }
	const vector<int> &mus_sta_nlayersLost() { return cms3.mus_sta_nlayersLost(); }
	const vector<int> &mus_sta_phiErr() { return cms3.mus_sta_phiErr(); }
	const vector<int> &mus_sta_ptErr() { return cms3.mus_sta_ptErr(); }
	const vector<int> &mus_sta_qualityMask() { return cms3.mus_sta_qualityMask(); }
	const vector<int> &mus_sta_trk_charge() { return cms3.mus_sta_trk_charge(); }
	const vector<int> &mus_sta_validHits() { return cms3.mus_sta_validHits(); }
	const vector<int> &mus_sta_validPixelHits() { return cms3.mus_sta_validPixelHits(); }
	const vector<int> &mus_timeDirection() { return cms3.mus_timeDirection(); }
	const vector<int> &mus_timeNumStationsUsed() { return cms3.mus_timeNumStationsUsed(); }
	const vector<int> &mus_trk_charge() { return cms3.mus_trk_charge(); }
	const vector<int> &mus_trkidx() { return cms3.mus_trkidx(); }
	const vector<int> &mus_type() { return cms3.mus_type(); }
	const vector<int> &mus_validHits() { return cms3.mus_validHits(); }
	const vector<int> &mus_validPixelHits() { return cms3.mus_validPixelHits(); }
	const vector<int> &pfcands_charge() { return cms3.pfcands_charge(); }
	const vector<int> &pfcands_particleId() { return cms3.pfcands_particleId(); }
	const vector<int> &pfjets_chargedHadronMultiplicity() { return cms3.pfjets_chargedHadronMultiplicity(); }
	const vector<int> &pfjets_chargedMultiplicity() { return cms3.pfjets_chargedMultiplicity(); }
	const vector<int> &pfjets_electronMultiplicity() { return cms3.pfjets_electronMultiplicity(); }
	const vector<int> &pfjets_muonMultiplicity() { return cms3.pfjets_muonMultiplicity(); }
	const vector<int> &pfjets_neutralHadronMultiplicity() { return cms3.pfjets_neutralHadronMultiplicity(); }
	const vector<int> &pfjets_neutralMultiplicity() { return cms3.pfjets_neutralMultiplicity(); }
	const vector<int> &pfjets_partonFlavour() { return cms3.pfjets_partonFlavour(); }
	const vector<int> &pfjets_photonMultiplicity() { return cms3.pfjets_photonMultiplicity(); }
	const vector<int> &taus_pf_charge() { return cms3.taus_pf_charge(); }
	const vector<int> &photons_fiduciality() { return cms3.photons_fiduciality(); }
	const vector<int> &photons_photonID_loose() { return cms3.photons_photonID_loose(); }
	const vector<int> &photons_photonID_tight() { return cms3.photons_photonID_tight(); }
	const vector<int> &puInfo_bunchCrossing() { return cms3.puInfo_bunchCrossing(); }
	const vector<int> &puInfo_nPUvertices() { return cms3.puInfo_nPUvertices(); }
	const vector<int> &convs_algo() { return cms3.convs_algo(); }
	const vector<int> &convs_isConverted() { return cms3.convs_isConverted(); }
	const vector<int> &convs_quality() { return cms3.convs_quality(); }
	const vector<int> &svs_nTrks() { return cms3.svs_nTrks(); }
	const vector<int> &ak8jets_partonFlavour() { return cms3.ak8jets_partonFlavour(); }
	const vector<int> &vtxs_isFake() { return cms3.vtxs_isFake(); }
	const vector<int> &vtxs_isValid() { return cms3.vtxs_isValid(); }
	const vector<int> &vtxs_tracksSize() { return cms3.vtxs_tracksSize(); }
	const vector<vector<int> > &els_PFCand_idx() { return cms3.els_PFCand_idx(); }
	const vector<vector<int> > &genps_lepdaughter_id() { return cms3.genps_lepdaughter_id(); }
	const vector<vector<int> > &genps_lepdaughter_idx() { return cms3.genps_lepdaughter_idx(); }
	const vector<vector<int> > &hlt_trigObjs_id() { return cms3.hlt_trigObjs_id(); }
	const vector<vector<int> > &mus_nStationCorrelatedHits() { return cms3.mus_nStationCorrelatedHits(); }
	const vector<vector<int> > &mus_nStationHits() { return cms3.mus_nStationHits(); }
	const vector<vector<int> > &pfjets_pfcandIndicies() { return cms3.pfjets_pfcandIndicies(); }
	const vector<vector<int> > &photons_PFCand_idx() { return cms3.photons_PFCand_idx(); }
	const vector<vector<int> > &convs_nHitsBeforeVtx() { return cms3.convs_nHitsBeforeVtx(); }
	const vector<vector<int> > &convs_tkalgo() { return cms3.convs_tkalgo(); }
	const vector<vector<int> > &convs_tkidx() { return cms3.convs_tkidx(); }
	const vector<vector<int> > &ak8jets_pfcandIndicies() { return cms3.ak8jets_pfcandIndicies(); }
	const vector<unsigned char> &pfcands_fromPV() { return cms3.pfcands_fromPV(); }
	const unsigned int &els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version() { return cms3.els_HLT_Ele17_Ele8_L1sL1DoubleEG137_version(); }
	const unsigned int &els_HLT_Ele17_Ele8_LeadingLeg_version() { return cms3.els_HLT_Ele17_Ele8_LeadingLeg_version(); }
	const unsigned int &els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version() { return cms3.els_HLT_Ele17_Ele8_Mass50_LeadingLeg_version(); }
	const unsigned int &els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version() { return cms3.els_HLT_Ele17_Ele8_Mass50_TrailingLeg_version(); }
	const unsigned int &els_HLT_Ele17_Ele8_TrailingLeg_version() { return cms3.els_HLT_Ele17_Ele8_TrailingLeg_version(); }
	const unsigned int &els_HLT_Ele17_Ele8_version() { return cms3.els_HLT_Ele17_Ele8_version(); }
	const unsigned int &els_HLT_Ele20_SC4_Mass50_LeadingLeg_version() { return cms3.els_HLT_Ele20_SC4_Mass50_LeadingLeg_version(); }
	const unsigned int &els_HLT_Ele20_SC4_Mass50_TrailingLeg_version() { return cms3.els_HLT_Ele20_SC4_Mass50_TrailingLeg_version(); }
	const unsigned int &els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version() { return cms3.els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22_version(); }
	const unsigned int &els_HLT_Ele27_WP80_version() { return cms3.els_HLT_Ele27_WP80_version(); }
	const unsigned int &els_HLT_Ele32_SC17_Mass50_LeadingLeg_version() { return cms3.els_HLT_Ele32_SC17_Mass50_LeadingLeg_version(); }
	const unsigned int &els_HLT_Ele32_SC17_Mass50_TrailingLeg_version() { return cms3.els_HLT_Ele32_SC17_Mass50_TrailingLeg_version(); }
	const unsigned int &els_HLT_Mu17_Ele8_TrailingLeg_version() { return cms3.els_HLT_Mu17_Ele8_TrailingLeg_version(); }
	const unsigned int &els_HLT_Mu17_Ele8_version() { return cms3.els_HLT_Mu17_Ele8_version(); }
	const unsigned int &els_HLT_Mu8_Ele17_version() { return cms3.els_HLT_Mu8_Ele17_version(); }
	const unsigned int &evt_nels() { return cms3.evt_nels(); }
	const unsigned int &evt_detectorStatus() { return cms3.evt_detectorStatus(); }
	const unsigned int &evt_lumiBlock() { return cms3.evt_lumiBlock(); }
	const unsigned int &evt_run() { return cms3.evt_run(); }
	const unsigned int &evt_ngenjetsNoMuNoNu() { return cms3.evt_ngenjetsNoMuNoNu(); }
	const unsigned int &genps_signalProcessID() { return cms3.genps_signalProcessID(); }
	const unsigned int &mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version() { return cms3.mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1_version(); }
	const unsigned int &mus_HLT_IsoMu24_eta2p1_version() { return cms3.mus_HLT_IsoMu24_eta2p1_version(); }
	const unsigned int &mus_HLT_Mu17_Ele8_LeadingLeg_version() { return cms3.mus_HLT_Mu17_Ele8_LeadingLeg_version(); }
	const unsigned int &mus_HLT_Mu17_Ele8_version() { return cms3.mus_HLT_Mu17_Ele8_version(); }
	const unsigned int &mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version() { return cms3.mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen_version(); }
	const unsigned int &mus_HLT_Mu17_Mu8_LeadingLeg_version() { return cms3.mus_HLT_Mu17_Mu8_LeadingLeg_version(); }
	const unsigned int &mus_HLT_Mu17_Mu8_TrailingLeg_version() { return cms3.mus_HLT_Mu17_Mu8_TrailingLeg_version(); }
	const unsigned int &mus_HLT_Mu17_Mu8_version() { return cms3.mus_HLT_Mu17_Mu8_version(); }
	const unsigned int &mus_HLT_Mu17_TkMu8_LeadingLeg_version() { return cms3.mus_HLT_Mu17_TkMu8_LeadingLeg_version(); }
	const unsigned int &mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version() { return cms3.mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered_version(); }
	const unsigned int &mus_HLT_Mu17_TkMu8_TrailingLeg_version() { return cms3.mus_HLT_Mu17_TkMu8_TrailingLeg_version(); }
	const unsigned int &mus_HLT_Mu17_TkMu8_version() { return cms3.mus_HLT_Mu17_TkMu8_version(); }
	const unsigned int &mus_HLT_Mu8_Ele17_TrailingLeg_version() { return cms3.mus_HLT_Mu8_Ele17_TrailingLeg_version(); }
	const unsigned int &mus_HLT_Mu8_Ele17_version() { return cms3.mus_HLT_Mu8_Ele17_version(); }
	const unsigned int &evt_nphotons() { return cms3.evt_nphotons(); }
	const unsigned int &evt_nvtxs() { return cms3.evt_nvtxs(); }
	const vector<unsigned int> &els_HLT_Ele17_Ele8() { return cms3.els_HLT_Ele17_Ele8(); }
	const vector<unsigned int> &els_HLT_Ele17_Ele8_L1sL1DoubleEG137() { return cms3.els_HLT_Ele17_Ele8_L1sL1DoubleEG137(); }
	const vector<unsigned int> &els_HLT_Ele17_Ele8_LeadingLeg() { return cms3.els_HLT_Ele17_Ele8_LeadingLeg(); }
	const vector<unsigned int> &els_HLT_Ele17_Ele8_Mass50_LeadingLeg() { return cms3.els_HLT_Ele17_Ele8_Mass50_LeadingLeg(); }
	const vector<unsigned int> &els_HLT_Ele17_Ele8_Mass50_TrailingLeg() { return cms3.els_HLT_Ele17_Ele8_Mass50_TrailingLeg(); }
	const vector<unsigned int> &els_HLT_Ele17_Ele8_TrailingLeg() { return cms3.els_HLT_Ele17_Ele8_TrailingLeg(); }
	const vector<unsigned int> &els_HLT_Ele20_SC4_Mass50_LeadingLeg() { return cms3.els_HLT_Ele20_SC4_Mass50_LeadingLeg(); }
	const vector<unsigned int> &els_HLT_Ele20_SC4_Mass50_TrailingLeg() { return cms3.els_HLT_Ele20_SC4_Mass50_TrailingLeg(); }
	const vector<unsigned int> &els_HLT_Ele27_WP80() { return cms3.els_HLT_Ele27_WP80(); }
	const vector<unsigned int> &els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22() { return cms3.els_HLT_Ele27_WP80_L1sL1SingleEG20ORL1SingleEG22(); }
	const vector<unsigned int> &els_HLT_Ele32_SC17_Mass50_LeadingLeg() { return cms3.els_HLT_Ele32_SC17_Mass50_LeadingLeg(); }
	const vector<unsigned int> &els_HLT_Ele32_SC17_Mass50_TrailingLeg() { return cms3.els_HLT_Ele32_SC17_Mass50_TrailingLeg(); }
	const vector<unsigned int> &els_HLT_Mu17_Ele8() { return cms3.els_HLT_Mu17_Ele8(); }
	const vector<unsigned int> &els_HLT_Mu17_Ele8_TrailingLeg() { return cms3.els_HLT_Mu17_Ele8_TrailingLeg(); }
	const vector<unsigned int> &els_HLT_Mu8_Ele17() { return cms3.els_HLT_Mu8_Ele17(); }
	const vector<unsigned int> &hlt_prescales() { return cms3.hlt_prescales(); }
	const vector<unsigned int> &mus_HLT_IsoMu24_eta2p1() { return cms3.mus_HLT_IsoMu24_eta2p1(); }
	const vector<unsigned int> &mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1() { return cms3.mus_HLT_IsoMu24_eta2p1_L1sMu16Eta2p1(); }
	const vector<unsigned int> &mus_HLT_Mu17_Ele8() { return cms3.mus_HLT_Mu17_Ele8(); }
	const vector<unsigned int> &mus_HLT_Mu17_Ele8_LeadingLeg() { return cms3.mus_HLT_Mu17_Ele8_LeadingLeg(); }
	const vector<unsigned int> &mus_HLT_Mu17_Mu8() { return cms3.mus_HLT_Mu17_Mu8(); }
	const vector<unsigned int> &mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen() { return cms3.mus_HLT_Mu17_Mu8_L1sL1DoubleMu10MuOpen(); }
	const vector<unsigned int> &mus_HLT_Mu17_Mu8_LeadingLeg() { return cms3.mus_HLT_Mu17_Mu8_LeadingLeg(); }
	const vector<unsigned int> &mus_HLT_Mu17_Mu8_TrailingLeg() { return cms3.mus_HLT_Mu17_Mu8_TrailingLeg(); }
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8() { return cms3.mus_HLT_Mu17_TkMu8(); }
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8_LeadingLeg() { return cms3.mus_HLT_Mu17_TkMu8_LeadingLeg(); }
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8_TrailingLeg() { return cms3.mus_HLT_Mu17_TkMu8_TrailingLeg(); }
	const vector<unsigned int> &mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered() { return cms3.mus_HLT_Mu17_TkMu8_TrailingLegTrkFiltered(); }
	const vector<unsigned int> &mus_HLT_Mu8_Ele17() { return cms3.mus_HLT_Mu8_Ele17(); }
	const vector<unsigned int> &mus_HLT_Mu8_Ele17_TrailingLeg() { return cms3.mus_HLT_Mu8_Ele17_TrailingLeg(); }
	const unsigned long long &evt_event() { return cms3.evt_event(); }
	const vector<unsigned long long> &evt_timestamp() { return cms3.evt_timestamp(); }
	const unsigned long long &evt_nEvts() { return cms3.evt_nEvts(); }
	const float &evt_filt_eff() { return cms3.evt_filt_eff(); }
	bool passHLTTrigger(TString trigName) { return cms3.passHLTTrigger(trigName); }
	float passTauID(TString idName, unsigned int tauIndx) { return cms3.passTauID(idName, tauIndx); }
}
