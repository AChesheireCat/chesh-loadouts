author = "AChesheireCat";
description = "Survivors turned Looters/Bandits (Fictional)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "U_I_C_Soldier_Bandit_4_F","U_I_C_Soldier_Bandit_1_F","U_I_C_Soldier_Bandit_2_F","U_I_C_Soldier_Bandit_5_F","U_I_C_Soldier_Bandit_3_F","U_I_C_Soldier_Para_5_F","U_I_C_Soldier_Para_1_F","U_C_E_LooterJacket_01_F","U_I_L_Uniform_01_tshirt_black_F","U_I_L_Uniform_01_tshirt_olive_F","U_C_HunterBody_grn","U_BG_Guerilla3_1","U_BG_Guerilla2_3","U_BG_Guerilla2_1","U_BG_Guerilla2_2","U_BG_Guerrilla_6_1","cwr3_i_uniform_og107_woodland","cwr3_i_uniform_steingrau_mol","cwr3_i_uniform_splitter_og107","cwr3_i_uniform_flecktarn_p60","cwr3_i_uniform_dpm_og107_gloves","CUP_U_I_GUE_Anorak_03","CUP_U_I_GUE_Flecktarn2","CUP_I_B_PMC_Unit_42","CUP_I_B_PMC_Unit_39","CUP_U_C_Tracksuit_01","CUP_U_C_Woodlander_01"
#define CAMO_VEST "V_TacChestrig_oli_F","V_TacChestrig_grn_F","V_Chestrig_rgr","CUP_V_B_BAF_MTP_Osprey_Mk4_Webbing","cwr3_b_vest_lbv_alice","CUP_V_O_TK_Vest_1","CUP_V_I_RACS_Carrier_Rig_wdl_3","vn_b_vest_seal_05","cwr3_i_vest_chicom"
#define CAMO_BACKPACK "B_CivilianBackpack_01_Everyday_Astra_F","B_CivilianBackpack_01_Everyday_Black_F","B_CivilianBackpack_01_Everyday_Vrana_F","B_CivilianBackpack_01_Everyday_IDAP_F","B_Messenger_Black_F","B_Messenger_Gray_F","B_Messenger_Olive_F","cwr3_o_backpack_gasmask","B_Battle_Belt_F","",""
#define CARRYALL "CUP_B_HikingPack_Civ","B_Carryall_oli","B_Carryall_cbr","cwr3_b_backpack_alice"
#define CAMO_HEADGEAR "H_Bandanna_cbr","H_Bandanna_khk","H_Bandanna_surfer_blk","H_Cap_blk","H_Cap_grn","H_Cap_Lyfe","H_Cap_police","H_Hat_tan","H_Shemag_olive","H_ShemagOpen_tan","H_PASGT_basic_black_F","H_HeadBandage_stained_F","cwr3_b_headgear_protec_half_plain","cwr3_o_headgear_tsh4","CUP_H_RUS_Balaclava_Ratnik_Headphones","CUP_H_RUS_Balaclava_Ratnik_Headphones_v2","CUP_H_USArmy_Boonie_UCP","CUP_H_Ger_M92_Black","CUP_H_Ger_M92_RGR","CUP_H_C_Ushanka_04","vn_o_pl_cap_02_02","vn_o_pl_cap_02_01","vn_o_boonie_vc_01_01"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_Booniehat_TTS"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT CAMO_UNIFORM
#define CAMO_VEST_PILOT "V_TacVest_camo"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "CUP_H_SPH4_visor"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC CAMO_UNIFORM
#define CAMO_VEST_VICC "V_TacVest_camo"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "cwr3_o_headgear_tsh4_tan"
// Rifle
#define RIFLE "CUP_arifle_G36E","CUP_arifle_G36K"
#define RIFLE_MAG "CUP_30Rnd_556x45_G36:7","CUP_30Rnd_TE1_Yellow_Tracer_556x45_G36:3"
#define RIFLE_ATTACHMENTS "CUP_optic_G36Optics15x", "acc_flashlight"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS 
// Battle Rifle
#define BRIFLE "arifle_CTAR_blk_F"
#define BRIFLE_MAG "30Rnd_580x42_Mag_F:7","30Rnd_580x42_Mag_Tracer_F:3"
#define BRIFLE_ATTACHMENTS "CUP_optic_VortexRazor_UH1_Black", "acc_flashlight"
// Rifle 2
#define RIFLE2 "rhs_weap_akms","rhs_weap_akm","rhs_weap_pm63","vn_ak_01","vn_type56"
#define RIFLE2_MAG "CUP_30Rnd_762x39_AK47_M:7","CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M:3"
#define RIFLE2_ATTACHMENTS "rhs_acc_2dpZenit"
// GL Rifle
#define GLRIFLE "rhs_weap_akms_gp25"
#define GLRIFLE_MAG "CUP_30Rnd_762x39_AK47_M:7","CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M:3"
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareYellow_F:4"
#define GLRIFLE_ATTACHMENTS "rhs_acc_dtkakm"
// Carbine
#define CARBINE "CUP_arifle_M16A2","CUP_arifle_Colt727"
#define CARBINE_MAG "30Rnd_556x45_Stanag_red:7","CUP_30Rnd_556x45_Stanag_Tracer_Yellow:3"
#define CARBINE_ATTACHMENTS "acc_flashlight"
// AR
#define AR "CUP_arifle_Galil_556_black"
#define AR_MAG "CUP_50Rnd_556x45_Galil_Mag:6","CUP_50Rnd_556x45_Red_Tracer_Galil_Mag:2"
// AT
#define AT "APEX_RPG7_v2"
#define AT_MAG "RPG7_F:2"
#define AT_MAG2 "M_OG7V:3"
// MMG
#define MMG "CUP_lmg_PKM"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
// MAT
#define MAT "APEX_RPG7_v2"
#define MAT_MAG "rhs_rpg7_PG7VL_mag:2","CUP_OG7_M:3"
#define MAT_OPTIC "optic_PGO7V3"
// HMG - DSHKM
#define HMG "CUP_DSHKM_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:4"
// HMG - DSHKM (AI Only)
#define HMG_AI "RHS_DShkM_Gun_Bag"
#define HMG_TRI_HI_AI "RHS_DShkM_TripodHigh_Bag"
#define HMG_TRI_LO_AI "RHS_DShkM_TripodLow_Bag"
// HAT - SPG-9
#define HAT "ace_compat_rhs_afrf3_spg9_carry"
#define HAT_TRI_HI "ace_csw_spg9CarryTripod"
#define HAT_TRI_LO "ace_csw_spg9CarryTripod"
#define HAT_MAG "ace_compat_rhs_afrf3_mag_PG9V:2","ace_compat_rhs_afrf3_mag_OG9V:1"
// HAT - SPG-9 (AI Only)
#define HAT_AI "RHS_SPG9_Gun_Bag"
#define HAT_TRI_HI_AI "RHS_SPG9_Tripod_Bag"
#define HAT_TRI_LO_AI "RHS_SPG9_Tripod_Bag"
// SAM
#define SAM "vn_sa7b"
#define SAM_MAG "vn_sa7b_mag:2"
// Sniper
#define SNIPER "vn_m1903"
#define SNIPER_MAG "vn_m1903_mag:20"
#define SNIPER_OPTIC "vn_o_8x_m1903"
// Spotter
#define SPOTTER "CUP_arifle_Colt727"
#define SPOTTER_MAG "CUP_30Rnd_556x45_Stanag:10"
#define SPOTTER_OPTIC 
// SMG
#define SMG "vn_ppsh41"
#define SMG_MAG "vn_ppsh41_35_mag:5"
// SMG 2
#define SMG2 "vn_type64_smg"
#define SMG2_MAG "vn_type64_smg_mag:7","vn_type64_smg_t_mag:3"
// Pistol
#define PISTOL "vn_m1911"
#define PISTOL_MAG "vn_m1911_mag:5"
#define PISTOL_OPTIC 
// Grenades
#define LEADER_GRENADES SIDE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define SIDE_FRAG "vn_f1_grenade_mag:2"
#define SIDE_SMOKE "SmokeShell:2"
#define AT_FRAG "vn_rkg3_grenade_mag:2"
#define DEF_FRAG "vn_t67_grenade_mag:2"
#define BASE_GRENADES SIDE_FRAG,SIDE_SMOKE
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR CAMO_VEST
#define CAMO_VEST_FTL "rhs_lifchik_vog","rhs_6sh92_vsr_vog_headset","cwr3_o_vest_chicom_beltkit_gl","cwr3_b_vest_alice_gl","acp_Solid_Olive_lite_V_HarnessOGL_Solid_Olive_F"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_BACKPACK_LAT "rhs_rpg_2"
#define CAMO_BACKPACK_AR "B_CivilianBackpack_01_Everyday_Black_F","B_CivilianBackpack_01_Everyday_Vrana_F"
#define CAMO_BACKPACK_FTL "B_TacticalPack_oli"
#define CAMO_BACKPACK_SL CAMO_BACKPACK_FTL
#define CAMO_BACKPACK_MEDIC "vn_b_pack_m5_01"
#define MMG_ATTACHMENTS 
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

//  init = "this addGoggles  [''];"
//  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Bandanna_khk','G_Bandanna_shades','G_Bandanna_sport','G_Spectacles','G_Squares','G_RegulatorMask_F','G_Respirator_white_F','cwr3_b_facewear_scrimnet_scarf_olive','CUP_Beard_Black','CUP_Beard_Brown','CUP_TK_NeckScarf','vn_none','vn_b_acc_towel_02','vn_b_acc_m17_01'];"

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
  magazines[] = {RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
  init = "this addGoggles selectRandom ['G_Balaclava_blk','G_Bandanna_khk','G_Bandanna_shades','G_Bandanna_sport','G_Spectacles','G_Squares','G_RegulatorMask_F','G_Respirator_white_F','cwr3_b_facewear_scrimnet_scarf_olive','CUP_Beard_Black','CUP_Beard_Brown','CUP_TK_NeckScarf','vn_none','vn_b_acc_towel_02','vn_b_acc_m17_01'];"
};
class Fic_Soldier_Carbine: rifleman {// carbine-man
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,BASE_GRENADES};
  attachments[] = {CARBINE_ATTACHMENTS};
};
class ftl: rifleman {// FTL
  vest[] = {CAMO_VEST_FTL};
  backpack[] = {CAMO_BACKPACK_FTL};
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,LEADER_GRENADES};
  items[] += {LEADER_TOOLS,"acex_intelitems_notepad"};
  linkedItems[] += {LEADER_LINKED,BINOS};
  attachments[] = {GLRIFLE_ATTACHMENTS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
};
class ar: rifleman {// AR
  vest[] = {CAMO_VEST_AR};
  backpack[] = {CAMO_BACKPACK_AR};
  weapons[] = {AR};
  magazines[] = {AR_MAG,PISTOL_MAG,BASE_GRENADES};
  handguns[] = {PISTOL};
};
class aar: rifleman {// AAR
  backpack[] = {ARPACK};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG,AT_MAG2,AT_FRAG,AT_FRAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {RANGE_FINDER};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,BASE_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
};
class mmgag: Fic_Spotter {// MMG Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] += {MMG_MAG};
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
  backpackItems[] += {SPOTTER,SPOTTER_ATTACHMENTS};
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
class Fic_eng: vicd {
  items[] += {BASE_ENG};
  backpackItems[] = {};
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
};
class rifleman_03: rifleman {// Rifleman 2
};
class rifleman_04: rifleman {// Rifleman 2
};
class artl: sl {// Artillery Leader
  backpack[] = {CARRYALL};
  backpackItems[] += {BASE_ARTILLERY,RADIO_LR,"acex_intelitems_notepad"};
};
class artg: rifleman {// Artillery Gunner
  backpackItems[] += {BASE_ARTILLERY,"acex_intelitems_notepad"};
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
  backpackItems[] = {"Toolkit",SIDE_KEY};
};
class cc: helicrew {// Crew Chief
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
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
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
  secondaryAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};