author = "AChesheireCat";
description = "Irregular Militia (as seen from Squad) c. 2020";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "CUP_U_O_RUS_Gorka_Partizan", "CUP_U_O_RUS_Gorka_Partizan_gloves2", "CUP_U_O_RUS_Gorka_Partizan", "CUP_U_O_RUS_Gorka_Partizan_gloves2", "CUP_U_O_CHDKZ_Kam_04", "CUP_U_O_CHDKZ_Kam_05", "CUP_U_O_CHDKZ_Kam_06"
#define CAMO_VEST "CUP_V_O_SLA_M23_1_OD", "CUP_V_O_RUS_RPS_Smersh_AK_ModernOlive", "rhs_6sh92_vsr_radio", "rhs_6sh92_vsr"
#define CAMO_BACKPACK "cwr3_o_backpack_gasmask"
#define CARRYALL "CUP_B_HikingPack_Civ"
#define CAMO_HEADGEAR "cwr3_b_headgear_cap_og107", "cwr3_b_headgear_cap_og107", "cwr3_b_headgear_cap_og107", "cwr3_b_headgear_cap_og107", "rhs_6b28_green", "rhs_6b28_green_ess"
#define CAMO_HEADGEAR_SPECIAL "PLOT_ARMOR_H_No_Hat"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT CAMO_UNIFORM
#define CAMO_VEST_PILOT CAMO_VEST
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT CAMO_HEADGEAR
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "CUP_U_C_Tracksuit_02"
#define CAMO_VEST_VICC CAMO_VEST
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "rhs_tsh4", "rhs_tsh4_ess"
// Rifle
#define RIFLE "CUP_arifle_M16A2","CUP_arifle_M16A2","CUP_arifle_Colt727","potato_fauxC7_c7"
#define RIFLE_MAG "30Rnd_556x45_Stanag:7","30Rnd_556x45_Stanag_Tracer_Yellow:3"
#define RIFLE_ATTACHMENTS "potato_strongerFlashlights_CUP_LED_flashlight"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_Aimpoint_5000","CUP_optic_1p63"
// Rifle 2 (AK)
#define RIFLE2 "CUP_arifle_AKS74","CUP_arifle_AK74","CUP_arifle_AK74M","CUP_arifle_AKS74_Early","CUP_arifle_AK74_Early"
#define RIFLE2_MAG "CUP_30Rnd_545x39_AK_M:7","CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M:3"
// Rifle 3 (FN FAL)
#define RIFLE3 "cwr3_arifle_fnfal_hlag","CUP_arifle_FNFAL5061_wooden","CUP_arifle_FNFAL5061","CUP_arifle_FNFAL5060"
#define RIFLE3_MAG "vn_l1a1_20_mag:7","CUP_20Rnd_TE1_Yellow_Tracer_762x51_FNFAL_M:3"
// GL Rifle
#define GLRIFLE "CUP_arifle_M16A2_GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "CUP_1Rnd_StarFlare_White_M203:4"
// GL Rifle 2 (AK)
#define GLRIFLE2 "CUP_arifle_AKS74_GL","CUP_arifle_AK74_GL","CUP_arifle_AK74M_GL","CUP_arifle_AKS74_GL_Early","CUP_arifle_AK74_GL_Early"
#define GLRIFLE2_MAG RIFLE2_MAG
#define GLRIFLE2_MAG_FLARE "CUP_IlumFlareWhite_GP25_M:4"
// GL Rifle 3 (L1A1 Rifle Grenade)
#define GLRIFLE3 "vn_l1a1_01_gl"
#define GLRIFLE3_MAG "vn_l1a1_20_mag:10"
#define GLRIFLE3_MAG_SMOKE "vn_22mm_m22_smoke_mag:4"
#define GLRIFLE3_MAG_HE "vn_22mm_m61_frag_mag:5"
#define GLRIFLE3_MAG_AT "vn_22mm_n94_heat_mag:5"
// Carbine
#define CARBINE "CUP_arifle_AKS74U"
#define CARBINE_MAG RIFLE2_MAG
// AR
#define AR "CUP_lmg_minimipara","CUP_lmg_M249_E1","CUP_lmg_M249_E2"
#define AR_MAG "CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249:2"
// AT
#define AT "CUP_launch_RPG7V"
#define AT_MAG "CUP_PG7V_M:2","CUP_OG7_M:1"
#define GREN_MAG "CUP_OG7_M:5"
// MMG
#define MMG "CUP_lmg_PKMN"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M:5"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7VL_M:2","CUP_OG7_M:1"
#define MAT_MAG2 "CUP_PG7VL_M:1","CUP_OG7_M:3"
#define MAT_MAG3 "CUP_PG7VR_M:2"
#define MAT_OPTIC "CUP_optic_PGO7V3"
// HMG
#define HMG "ace_compat_rhs_afrf3_nsv_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HAT
#define HAT "ace_compat_rhs_afrf3_spg9m_carry"
#define HAT_TRI "ace_csw_spg9CarryTripod"
#define HAT_MAG "ace_compat_rhs_afrf3_mag_PG9V:2", "ace_compat_rhs_afrf3_mag_OG9V:1"
// SAM - should be an SPAA gun if possible
#define SAM "CUP_launch_Igla"
#define SAM_MAG 
// Sniper
#define SNIPER "vn_svd"
#define SNIPER_MAG "vn_svd_mag:10"
#define SNIPER_OPTIC "vn_o_4x_svd"
// Spotter
#define SPOTTER RIFLE3
#define SPOTTER_MAG RIFLE3_MAG
#define SPOTTER_OPTIC RIFLE3_ATTACHMENTS
// SMG
#define SMG CARBINE
#define SMG_MAG "CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M:5"
// Pistol
#define PISTOL "vn_tt33"
#define PISTOL_MAG "vn_tt33_mag:3"
#define PISTOL_OPTIC 
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "rhs_mag_rgd5:2"
#define SIDE_SMOKE "SmokeShell:2"
#define AT_FRAG "vn_rkg3_grenade_mag:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "cwr3_b_vest_alice_mg","CUP_V_O_RUS_RPS_Smersh_PKP_Light_ModernOlive","CUP_V_O_RUS_RPS_Smersh_PKP_SPP_ModernOlive","CUP_V_B_RRV_MG"
#define CAMO_VEST_FTL "rhs_6sh92_vsr_vog_headset", "CUP_V_B_GER_Carrier_Rig_3_Brown", "CUP_V_O_RUS_RPS_Smersh_VOG_SPP_ModernOlive", "rhs_6sh92_vsr_vog"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_VEST_CC CAMO_VEST
#define CAMO_BACKPACK_LAT "rhs_rpg_2"
#define CAMO_BACKPACK_AR "CUP_B_ACRPara_dpm"
#define CAMO_BACKPACK_FTL "CUP_B_CivPack_WDL"
#define CAMO_BACKPACK_SL "CUP_B_AlicePack_Bedroll"
#define CAMO_BACKPACK_MEDIC "rhs_medic_bag_XL"
#define MMG_ATTACHMENTS "rhs_acc_1p29"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "rhs_mag_rgd5:2"
#define SIDE_SMOKE "SmokeShell:2"
#define AT_FRAG "vn_rkg3_grenade_mag:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE

#define MAG_OPTICS "rhs_acc_1p29","CUP_optic_ACOG_TA01B_Black"

//  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Balaclava_blk','G_Balaclava_blk'];"

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
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {RIFLE};
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
  items[] += {"ACE_UAVBattery:2"};
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem"};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  items[] += {"ACE_EntrenchingTool"};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
  items[] += {"ACE_EntrenchingTool"};
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
  launchers[] = {"potato_vz99_carryWeapon"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"potato_vz99_HE_multi:6","potato_vz99_flare:2"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"potato_vz99_HE_multi:2","potato_vz99_smokeWhite:4","potato_vz99_flare:2"};
};
class spotter: Fic_Spotter {// Spotter
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SPOTTER};
  backpack[] = {CARRYALL};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_OPTIC};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  backpackItems[] += {SPOTTER,SPOTTER_OPTIC};
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
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY,RADIO_LR};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
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
class rifleman_04: rifleman {// Rifleman 2
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
class mmgl: sl {// MMG Lead
  backpack[] = {CARRYALL};
  magazines[] += {MMG_MAG};
  items[] += {"ACE_EntrenchingTool"};
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
  launchers[] = {HAT_TRI_LO};
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
  launchers[] = {HAT_TRI_HI};
};
class msaml: sl {// MSAM Lead
  backpack[] = {CARRYALL};
  magazines[] += {SAM_MAG};
};
class mtrl: sl {// Mortar Lead
  items[] += {BASE_ARTILLERY};
};
class helicrew: pilot {// Aircrew
  vest[] = {CAMO_VEST_CC};
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
  vest[] = {CAMO_VEST_CREW};
  backpackItems[] += {RADIO_MR};
};
class engl: eng {// Logistics Leader
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  backpackItems[] += {RADIO_MR};
};
class fallback: rifleman {}; // This means any faction member who doesn't match something will use this loadout

//SF Classes

#define SF_UNIFORM
#define SF_VEST
#define SF_VEST_AR
#define SF_VEST_FTL
#define SF_VEST_SL
#define SF_VEST_SNIPER
#define SF_HEADGEAR
#define SF_BACKPACK
#define SF_CARRYALL

#define SF_RIFLE
#define SF_RIFLE_MAG
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
  magazines[] = {SF_RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,BASE_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  handguns[] = {SF_PISTOL};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,BASE_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,BASE_GRENADES};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
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