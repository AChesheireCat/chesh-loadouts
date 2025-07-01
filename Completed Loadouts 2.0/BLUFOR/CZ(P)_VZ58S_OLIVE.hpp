author = "AChesheireCat";
description = "Czechoslovakian Army Airborne/Paratrooper 'Výsadkáři' c. 1990 - REQs GlobMob and S.O.G CDLC (Last Updated: 2025/06/27)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "cwr3_b_uk_uniform_olive_rolled","cwr3_b_uk_uniform_olive"
#define CAMO_VEST "gmx_cdf2022_army_vest_90_rifleman_oli"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "vn_b_pack_arvn_04"
#define CAMO_HEADGEAR "CUP_H_CZ_Hat01"
#define CAMO_HEADGEAR_SPECIAL 
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "gm_pl_airforce_uniform_pilot_80_gry"
#define CAMO_VEST_PILOT "gm_pl_army_vest_80_crew_gry"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "gm_gc_headgear_zsh3_wht"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_o_uniform_m1972_tanker"
#define CAMO_VEST_VICC "cwr3_o_vest_beltkit_ak74"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "cwr3_o_headgear_tsh4"
// Rifle
#define RIFLE "CUP_arifle_Sa58V"
#define RIFLE_MAG "CUP_30Rnd_Sa58_M:7","CUP_30Rnd_Sa58_M_TracerG:3"
#define RIFLE_ATTACHMENTS 
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS 
// GL Rifle
#define GLRIFLE 
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareRed_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_UK59"
#define AR_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:4"
// AT
#define AT "cwr3_launch_rpg75"
#define AT_MAG 
// MMG
#define MMG "CUP_lmg_UK59"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7V_M:2","CUP_PG7VL_M:1"
#define MAT_MAG_LIGHT "CUP_PG7V_M:3"
#define MAT_OPTIC "CUP_optic_PGO7V2"
// HMG
#define HMG "ace_compat_rhs_afrf3_nsv_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HAT
#define HAT "ace_compat_gm_9k111_backpack"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "ace_compat_gm_gm_1Rnd_fagot_heat_9m111:1"
// HAT2 - SPG-9
#define HAT2 "ace_compat_rhs_afrf3_spg9_carry"
#define HAT2_TRI_HI "ace_csw_spg9CarryTripod"
#define HAT2_TRI_LO "ace_csw_spg9CarryTripod"
#define HAT2_MAG "ace_compat_rhs_afrf3_mag_PG9V:2","ace_compat_rhs_afrf3_mag_OG9V:1"
// SAM
#define SAM "gm_9k32m_oli"
#define SAM_MAG "gm_1Rnd_72mm_he_9m32m"
// Sniper
#define SNIPER "CUP_srifle_SVD"
#define SNIPER_MAG "CUP_10Rnd_762x54_SVD_M:10"
#define SNIPER_OPTIC "CUP_optic_PSO_1"
// Spotter
#define SPOTTER RIFLE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_OPTIC 
// SMG
#define SMG "vn_vz61"
#define SMG_MAG "vn_vz61_mag:3","vn_vz61_t_mag:2"
// Pistol
#define PISTOL "CUP_hgun_CZ75"
#define PISTOL_MAG "CUP_16Rnd_9x19_cz75:3"
#define PISTOL_OPTIC 
// Pistol GL
#define GLPISTOL "ptv_hk69"
// Grenades
#define LEADER_GRENADES LOADOUT_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define LOADOUT_FRAG "vn_f1_grenade_mag:2"
#define LOADOUT_SMOKE "SmokeShell:2"
#define LOADOUT_GRENADES LOADOUT_FRAG,LOADOUT_SMOKE
// Gear
#define TOOLS RADIO_SR,"ACE_MapTools","ACE_Flashlight_KSF1","ACE_CableTie:2"
#define LEADER_TOOLS "acex_intelitems_notepad",SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED 


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "gmx_cdf2022_army_vest_90_machinegunner_oli"
#define CAMO_VEST_LAT CAMO_VEST
#define CAMO_VEST_FTL "gmx_cdf2022_army_vest_90_leader_oli"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_VEST_MEDIC "gmx_cdf2022_army_vest_90_medic_oli"
#define CAMO_VEST_SNIPER CAMO_VEST
#define CAMO_VEST_ENG "gmx_cdf2022_army_vest_90_demolition_oli"
#define CAMO_BACKPACK_LAT "rhs_rpg_2"
#define CAMO_BACKPACK_AR "B_Battle_Belt_XL_F"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL CARRYALL
#define CAMO_BACKPACK_MEDIC "B_Battle_Belt_XL_F"
#define CAMO_BACKPACK_RADIO "gm_gc_backpack_r105m_brn"
#define MMG_ATTACHMENTS 
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define ETOOL "ACE_EntrenchingTool"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMOTOOL "ACE_Clacker"
#define SIDE_BINOS "gm_df7x40_blk"

//  init = "this addGoggles selectRandom ['','','','','','','',''];"

class CUP_BOX_RU_Ammo_F {
  boxCustomName = "Fireteam Resupply";
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES,DEMO};
  TransportItems[] = {DEMO_TOOL};
};
class gm_AmmoBox_wood_03_empty {
  boxCustomName = "Anti-Tank Resupply";
  TransportWeapons[] = {AT,AT,MAT};
  TransportMagazines[] = {AT_MAG,AT_MAG,MAT_MAG_LIGHT};
  TransportItems[] = {MAT_OPTIC};
};
class CUP_WeaponCase_Black_CUP {
  boxCustomName = "HAT Resupply";
  TransportMagazines[] = {HAT_MAG,HAT_MAG};
};
class ACE_medicalSupplyCrate_advanced {
  boxCustomName = "Medical Resupply";
  TransportItems[] = {PL_MEDIC_MEDICAL};
};

class Car {
  TransportWeapons[] = {AT,AT,MAT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,MAT_MAG_LIGHT,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES,DEMO};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,MAT_OPTIC};
};
class Tank {
  TransportWeapons[] = {AT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL};
};
class Helicopter {
  TransportWeapons[] = {AT,AT,MAT};
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,CARBINE_MAG,AR_MAG,AR_MAG,MAT_MAG_LIGHT,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_SMOKE,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES,LOADOUT_GRENADES,DEMO};
  TransportItems[] = {BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,BASE_MEDICAL,MAT_OPTIC};
};
class Plane {};
class Ship_F {};

class rifleman {// rifleman
  uniform[] = {CAMO_UNIFORM};
  vest[] = {CAMO_VEST};
  headgear[] = {CAMO_HEADGEAR};
  backpack[] = {CAMO_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
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
  handguns[] = {GLPISTOL};
  magazines[] = {RIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  magazines[] += {GLRIFLE_MAG_FLARE};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  items[] += {RADIO_LR};
};
class uav: rifleman {// Radio Operator
  backpack[] = {CAMO_BACKPACK_RADIO};
  backpackItems[] = {RADIO_LR};
  items[] += {BASE_MEDICAL};
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
  vest[] = {CAMO_VEST_LAT};
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {MAT_MAG_LIGHT};
  launchers[] = {MAT};
  secondaryAttachments[] = {MAT_OPTIC};
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
  attachments[] = {SPOTTER_OPTIC};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  vest[] = {CAMO_VEST_SNIPER};
  weapons[] = {SNIPER};
  magazines[] = {SNIPER_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_OPTIC};
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
  backpackItems[] = {SIDE_KEY,RADIO_MR};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
  items[] += {BASE_MEDICAL};
};
class vicd: vicc {// Repair Specialist
  backpackItems[] = {"Toolkit",SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED};
};
class Fic_eng: Fic_Soldier_Carbine {
  vest[] = {CAMO_VEST_ENG};
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
class rifleman_02: rifleman {// Rifleman 2 - LAT
  launchers[] = {AT};
  magazines[] += {AT_MAG};
};
class rifleman_03: rifleman {// Rifleman 3
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
};
class rifleman_04: rifleman {// Rifleman 4 - Marksman
  vest[] = {CAMO_VEST_SNIPER};
  weapons[] = {SNIPER};
  handguns[] = {PISTOL};
  magazines[] = {SNIPER_MAG,PISTOL_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS,"ACE_RangeCard"};
  attachments[] = {SNIPER_OPTIC};
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
  backpackItems[] = {SIDE_KEY};
};
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
  items[] += {ETOOL};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG};
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
  weapons[] = {RIFLE};
  backpackItems[] = {};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,HAT_MAG};
  backpack[] = {CARRYALL};
  items[] += {BASE_MEDICAL};
};
class hatg: rifleman {// HAT Gunner
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
  launchers[] = {HAT};
};
class hatag: rifleman {// HAT Spotter
  backpack[] = {CARRYALL};
  magazines[] += {HAT_MAG};
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
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
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

#define SF_UNIFORM "CUP_U_I_Ghillie_Top"
#define SF_VEST "cwr3_o_vest_harness_ak74"
#define SF_VEST_AR
#define SF_VEST_FTL "cwr3_o_vest_harness_gl"
#define SF_VEST_SL "cwr3_o_vest_harness_officer"
#define SF_VEST_SNIPER "cwr3_o_vest_harness_svd"
#define SF_HEADGEAR "gm_ge_headgear_hat_beanie_crew_blk"
#define SF_BACKPACK "rhs_rd54"
#define SF_CARRYALL "cwr3_i_bergen_backpack_khaki"

#define SF_RIFLE "CUP_arifle_Sa58V"
#define SF_RIFLE_MAG RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS "CUP_muzzle_Bizon","ACE_SPIR"

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE SF_RIFLE
#define SF_GLRIFLE_MAG SF_RIFLE_MAG
#define SF_GLRIFLE_MAG_HE
#define SF_GLRIFLE_MAG_SMOKE
#define SF_GLRIFLE_MAG_ILLUM

#define SF_AR
#define SF_AR_MAG
#define SF_AR_ATTACHMENTS

#define SF_SNIPER SNIPER
#define SF_SNIPER_MAG SNIPER_MAG
#define SF_SNIPER_ATTACHMENTS SNIPER_OPTIC

#define SF_AT AT
#define SF_AT_MAG AT_MAG
#define SF_AT_ATTACHMENTS

#define SF_PISTOL "CUP_hgun_PB6P9"
#define SF_PISTOL_MAG "CUP_8Rnd_9x18_Makarov_M:5"
#define SF_PISTOL_ATTACHMENTS "CUP_muzzle_PB6P9"

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,LOADOUT_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED,"gm_nsg66_oli"};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,LOADOUT_GRENADES};
  linkedItems[] = {LINKED,"gm_nsg66_oli"};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,LOADOUT_GRENADES};
  handguns[] = {SF_PISTOL};
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
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
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS,"gm_nsg66_oli"};
  items[] += {RADIO_MR};
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};