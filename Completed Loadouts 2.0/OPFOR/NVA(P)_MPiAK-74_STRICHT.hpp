author = "AChesheireCat";
description = "East German National Volksarmee (NVA) Luftsturmregiment 40 (aka LStR-40) c. 1987 - REQUIRES GLOBMOB CDLC (Last Updated: 2025/05/30)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "gm_gc_army_uniform_soldier_80_str","gm_gc_army_uniform_soldier_80_str","gm_gc_army_uniform_soldier_gloves_80_str"
#define CAMO_VEST "gm_gc_vest_combatvest3_str"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "gm_gc_army_backpack_80_assaultpack_lmg_empty_str"
#define CAMO_HEADGEAR "gm_pl_army_headgear_wz63_net_oli"
#define CAMO_HEADGEAR_SPECIAL "gm_gc_headgear_beret_officer_blk"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "gm_gc_airforce_uniform_pilot_80_blu"
#define CAMO_VEST_PILOT "gm_ge_army_vest_pilot_oli"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "gm_gc_headgear_zsh3_wht"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "gm_gc_army_uniform_soldier_80_str"
#define CAMO_VEST_VICC "gm_gc_army_vest_90_officer_str"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "cwr3_o_headgear_tsh4"
// Rifle
#define RIFLE "gm_mpiak74n_brn","gm_mpiak74n_prp"
#define RIFLE_MAG "hlc_30Rnd_545x39_EP_ak:7","hlc_30Rnd_545x39_t_ak:3"
#define RIFLE_ATTACHMENTS 
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "gm_zvn64_ak","gm_zvn64_rpk"
// GL Rifle
#define GLRIFLE "CUP_arifle_AK74_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "CUP_1Rnd_HE_GP25_M:5"
#define GLRIFLE_MAG_FLARE "CUP_FlareRed_GP25_M:4"
#define GLRIFLE_MAG_ILLUM "CUP_IlumFlareWhite_GP25_M:4"
// Carbine
#define CARBINE "gm_mpiaks74n_brn","gm_mpiaks74n_prp"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "gm_lmgrpk74n_brn"
#define AR_MAG "hlc_45Rnd_545x39_t_rpk:12"
// AT
#define AT "CUP_launch_RPG7V"
#define AT_MAG "CUP_PG7V_M:2"
#define AT_OPTIC "CUP_optic_PGO7V2"
// LAT
#define LAT "gm_rpg18_oli"
#define LAT_MAG "gm_1Rnd_64mm_heat_pg18"
// MMG
#define MMG "CUP_lmg_PKM"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
// MAT
#define MAT "RPG29"
#define MAT_MAG "PG29V:2","TBG29V"
#define MAT_OPTIC "optic_PGO"
// HMG
#define HMG "CUP_DSHKM_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HAT
#define HAT "potato_cswCompatCUP_patchGM_gm_fagot_backpack"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "gm_1Rnd_fagot_heat_9m111_csw"
// HAT - SPG-9
#define HAT2 "ace_compat_rhs_afrf3_spg9_carry"
#define HAT2_TRI_HI "ace_csw_spg9CarryTripod"
#define HAT2_TRI_LO "ace_csw_spg9CarryTripod"
#define HAT2_MAG "ace_compat_rhs_afrf3_mag_PG9V:2","ace_compat_rhs_afrf3_mag_OG9V:1"
// SAM
#define SAM "CUP_launch_Igla"
#define SAM_MAG 
// Sniper
#define SNIPER "gm_svd_wud"
#define SNIPER_MAG "gm_10Rnd_762x54mmR_AP_7N1_svd_blk:10"
#define SNIPER_ATTACHMENTS "gm_pso1_dovetail_gry"
// Spotter
#define SPOTTER CARBINE
#define SPOTTER_MAG CARBINE_MAG
#define SPOTTER_ATTACHMENTS "gm_pka_dovetail_gry"
// SMG
#define SMG "gm_mpiaks74nk_brn","gm_mpiaks74nk_prp"
#define SMG_MAG "hlc_30Rnd_545x39_EP_ak:5"
// Pistol
#define PISTOL "gm_pim_blk"
#define PISTOL_MAG "gm_8Rnd_9x18mm_B_pst_pm_blk:4"
#define PISTOL_ATTACHMENTS 
// Grenades
#define LEADER_GRENADES LOADOUT_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define LOADOUT_FRAG "rhs_mag_rgd5:2"
#define LOADOUT_SMOKE "rhs_mag_rdg2_white:2"
#define LOADOUT_GRENADES LOADOUT_FRAG,LOADOUT_SMOKE,SIDE_CHEM_LIGHT
// Gear
#define TOOLS RADIO_SR,"ACE_MapTools","ACE_Flashlight_KSF1","ACE_CableTie:2"
#define LEADER_TOOLS "acex_intelitems_notepad",SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED 



// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR CAMO_VEST
#define CAMO_VEST_FTL "gm_gc_vest_combatvest3_str","gm_gc_army_vest_bespa_80_leader_str"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_VEST_MEDIC "gm_gc_vest_combatvest3_str","gm_gc_army_vest_bespa_80_at_str"
#define CAMO_VEST_CC CAMO_VEST_PILOT
#define CAMO_BACKPACK_LAT "gm_gc_army_backpack_80_at_empty_str"
#define CAMO_BACKPACK_AR "gm_gc_army_backpack_80_lmg_empty_str"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL "gm_gc_army_backpack_80_assaultpack_empty_str"
#define CAMO_BACKPACK_MEDIC "gm_gc_army_backpack_80_assaultpack_empty_str"
#define MMG_ATTACHMENTS 
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define ETOOL "ACE_EntrenchingTool"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMOTOOL "ACE_Clacker"
#define SIDE_BINOS "gm_df7x40_blk"

//  init = "this addGoggles selectRandom ['gm_gc_army_facewear_dustglasses','CUP_G_TK_RoundGlasses','CUP_G_TK_RoundGlasses_blk','CUP_G_WristWatch','','',''];"

// GAS MASK FACEWEAR INIT
//  init = "this addGoggles selectRandom ['gm_gc_army_facewear_schm41m,'gm_gc_army_facewear_schm41m','gm_gc_army_facewear_schm41m']

// ------------- Vehicle Pool -------------
transportVehiclePool[] = {
    "gm_gc_army_ural4320_cargo",
    "gm_gc_army_ural4320_cargo",
    "gm_gc_army_ural4320_cargo",
    "gm_gc_army_uaz469_cargo",
    "gm_gc_army_uaz469_cargo"
};
armedSoftVehiclesPool[] = {
    "gm_gc_army_uaz469_dshkm",
    "gm_gc_army_uaz469_dshkm",
    "gm_gc_army_uaz469_dshkm",
    "gm_gc_army_uaz469_spg9",
    "gm_gc_army_uaz469_spg9",
    "gm_gc_army_btr60pa_dshkm"
};
armoredVehiclePool[] = {
    "gm_gc_army_btr60pb",
    "gm_gc_army_btr60pb",
    "gm_gc_army_btr60pb",
    "rhs_btr70_msv",
    "rhs_btr70_msv",
    "gm_gc_army_bmp1sp2",
    "gm_gc_army_bmp1p",
    "gm_gc_army_brdm2",
    "gm_gc_army_brdm2",
    "gm_gc_army_brdm2_9p133",
    "gm_gc_army_zsu234v1"
};
tankVehiclePool[] = {
    "gm_gc_army_t55a",
    "gm_gc_army_t55a",
    "gm_gc_army_t55am2",
    "gm_gc_army_zsu234v1"
};
reinforcementTruck = "gm_gc_army_ural4320_cargo"
reinforcementArmed = "gm_gc_army_btr60pb"
// ------------- End Vehicle Pool -------------

class Car {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Plane {};
class Ship_F {};

class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL,CAMO_HEADGEAR_SPECIAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,LOADOUT_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
  items[] += {RADIO_MR};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {SIDE_BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
  secondaryAttachments[] = {AT_OPTIC};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem"};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {SIDE_BINOS};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  launchers[] = {"dzn_MG_Tripod_Universal_Carry"};
  items[] += {ETOOL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
  items[] += {ETOOL};
};
class matg: Fic_Soldier_Carbine {// MAT Gunner
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner
  launchers[] = {"CUP_2b14_carry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:3","ACE_1Rnd_82mm_Mo_Smoke:2"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:3","ACE_1Rnd_82mm_Mo_Smoke:2"};
};
class spotter: Fic_Spotter {// Spotter
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SPOTTER};
  backpack[] = {CARRYALL};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,LOADOUT_GRENADES};
  items[] += {RADIO_MR,"ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {CAMO_BACKPACK};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class pilot {// Pilot
  uniform[] = {CAMO_UNIFORM_PILOT};
  backpack[] = {CAMO_BACKPACK_PILOT};
  vest[] = {CAMO_VEST_PILOT};
  headgear[] = {CAMO_HEADGEAR_PILOT};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  items[] = {BASE_MEDICAL,TOOLS,LEADER_TOOLS,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {SMG};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",RADIO_MR,SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: Fic_Soldier_Carbine {
  backpack[] = {CARRYALL};
  items[] += {BASE_ENG,"WBK_HeadLampItem",BASE_MEDICAL};
  backpackItems[] = {};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class demo: Fic_eng {// Explosive Specialist
  magazines[] += {BASE_EXP};
};
class mine: Fic_eng {// Mine Specialist
  magazines[] += {BASE_MINE};
  handguns[] = {MINE_DETECTOR};
};
class demol: Fic_eng {// Demolitions Leader
  magazines[] += {BASE_EXP};
  backpackItems[] = {RADIO_MR,"Toolkit"};
};
class eng: Fic_eng {// Logistics Engineer
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
  backpack[] = {CAMO_BACKPACK_FTL};
  backpackItems[] += {RIFLE_MAG};
};
class rifleman_03: rifleman {// Rifleman 3
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
};
class rifleman_04: rifleman {// Rifleman 4
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY};
};
class plm: sm {//Platoon Medic
  backpack[] = {CARRYALL};
  backpackItems[] = {PL_MEDIC_MEDICAL};
};
class cm: plm {// Company Medic
};
class xo: coy {// XO
};
class plt: coy {// Platoon Leader
};
class sgt: plt {// Platoon Sergeant
};
class vicl: vicc {// Vehicle Commander
  items[] += {RADIO_MR};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
};
class mmgl: rifleman {// MMG Lead
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CARRYALL};
  weapons[] = {RIFLE};
  handguns[] = {PISTOL};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,MMG_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
  items[] += {LEADER_TOOLS,RADIO_MR,ETOOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class matl: sl {// MAT Lead
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CARRYALL};
  weapons[] = {RIFLE};
  handguns[] = {PISTOL};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,MAT_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
  items[] += {LEADER_TOOLS,RADIO_MR,ETOOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class hmgl: sl {// HMG Lead
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HMG_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HMG_TRI_LO};
  items[] += {BASE_BALLISTICS};
};
class hmgg: rifleman {// HMG Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG};
};
class hmgag: rifleman {// HMG Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HMG_MAG};
  launchers[] = {HMG_TRI_HI};
  items[] += {BASE_BALLISTICS};
};
class hatl: sl {// HAT Lead
  headgear[] = {CAMO_HEADGEAR_VICC};
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  launchers[] = {HAT_TRI_LO};
  items[] += {BASE_MEDICAL};
};
class hatg: rifleman {// HAT Gunner
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {// MSAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG};
};
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
  magazines[] += {"ACE_1Rnd_82mm_Mo_Illum:2"};
};
class helicrew: pilot {// Aircrew
  vest[] = {CAMO_VEST_CC};
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  vest[] = {CAMO_VEST_CC};
  backpackItems[] += {RADIO_MR};
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout

//SF Classes

#define SF_UNIFORM "gm_gc_army_uniform_soldier_rolled_90_str","gm_gc_army_uniform_soldier_90_str"
#define SF_VEST "gm_gc_vest_combatvest3_str"
#define SF_VEST_AR SF_VEST
#define SF_VEST_FTL SF_VEST
#define SF_VEST_SL SF_VEST
#define SF_VEST_SNIPER SF_VEST
#define SF_HEADGEAR "gm_gc_headgear_beret_str"
#define SF_BACKPACK "gm_gc_army_backpack_80_assaultpack_empty_str"
#define SF_CARRYALL "gm_gc_army_backpack_80_assaultpack_lmg_empty_str"

#define SF_RIFLE "gm_mpiaks74nk_prp"
#define SF_RIFLE_MAG "hlc_30Rnd_545x39_EP_ak_Plum:7","hlc_30Rnd_545x39_t_ak_Plum:3"
#define SF_RIFLE_ATTACHMENTS

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE 
#define SF_GLRIFLE_MAG 
#define SF_GLRIFLE_MAG_HE 
#define SF_GLRIFLE_MAG_SMOKE 
#define SF_GLRIFLE_MAG_ILLUM 

#define SF_AR
#define SF_AR_MAG
#define SF_AR_ATTACHMENTS

#define SF_SNIPER
#define SF_SNIPER_MAG
#define SF_SNIPER_ATTACHMENTS

#define SF_AT
#define SF_AT_MAG
#define SF_AT_ATTACHMENTS

#define SF_PISTOL
#define SF_PISTOL_MAG
#define SF_PISTOL_ATTACHMENTS

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,LOADOUT_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,LOADOUT_GRENADES};
  handguns[] = {SF_PISTOL};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,LOADOUT_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {SIDE_BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,LOADOUT_GRENADES};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  handguns[] = {SF_PISTOL};
  magazines[] += {SF_PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};