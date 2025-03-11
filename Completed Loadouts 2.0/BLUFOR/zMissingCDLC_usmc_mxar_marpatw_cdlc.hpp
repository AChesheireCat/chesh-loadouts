author = "AChesheireCat";
description = "United States Marine Corps c.2035 - req. Expeditionary Forces cDLC, Project True Viking 2.0, and CUP (Last Updated: 2025/03/08)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "EF_U_B_MarineCombatUniform_Wdl_1","EF_U_B_MarineCombatUniform_Wdl_2","EF_U_B_MarineCombatUniform_Wdl_3","EF_U_B_MarineCombatUniform_Wdl_4","EF_U_B_MarineCombatUniform_Wdl_5","EF_U_B_MarineCombatUniform_Wdl_6","EF_U_B_MarineCombatUniform_Wdl_2","EF_U_B_MarineCombatUniform_Wdl_2","EF_U_B_MarineCombatUniform_Wdl_3","EF_U_B_MarineCombatUniform_Wdl_3"
#define CAMO_VEST "EF_V_AAV_Rifleman_Coy","EF_V_AAV_Scout_Coy"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "EF_B_Carryall_coy"
#define CAMO_HEADGEAR "EF_H_MCH_FullCamo_Wdl","EF_H_MCH_FullCamo_Wdl","EF_H_MCH_FullCamo_Wdl","EF_H_MCH_Full","EF_H_MCH_BasicNet_Wdl","EF_H_MCH_BasicNet_Wdl","EF_H_MCH_Basic"
#define CAMO_HEADGEAR_SPECIAL "EF_H_Booniehat_Wdl"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "U_B_HeliPilotCoveralls"
#define CAMO_VEST_PILOT "V_TacVest_blk"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "H_PilotHelmetHeli_B"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "EF_U_B_MarineCombatUniform_Wdl_2"
#define CAMO_VEST_VICC "EF_V_AAV_Sailor_Coy"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "EF_H_HelmetCrew_Coy"
// Rifle
#define RIFLE "ef_arifle_mxar_coy"
#define RIFLE_MAG "EF_30Rnd_65x39_caseless_coy_mag:7","EF_30Rnd_65x39_caseless_coy_mag_Tracer:3"
#define RIFLE_ATTACHMENTS "ef_optic_Holosight_coy","EF_acc_pointer_IR_coy"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "ptv_eot552","CUP_optic_MicroT1","ptv_compm5","ptv_xps3_des","CUP_optic_VortexRazor_UH1_Tan"
#define MAG_OPTICS "ef_optic_mbs_remote_coy","cup_optic_g33_hws_blk"
// GL Rifle
#define GLRIFLE "ef_arifle_mxar_gl_coy"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_HEDP ":5"
#define GLRIFLE_MAG_FLARE "UGL_FlareGreen_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
#define GLRIFLE_MAG_HUNTIR "ACE_HuntIR_M203:3"
#define GLRIFLE_MAG_DRONE "1Rnd_RC40_shell_RF:2"
// Carbine
#define CARBINE "ef_arifle_mx_coy"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "ef_arifle_mx_sw_coy"
#define AR_MAG "EF_100Rnd_65x39_caseless_coy_mag:4"
#define AR_ATTACHMENTS "ef_optic_Holosight_coy","EF_acc_pointer_IR_coy","bipod_01_F_snd"
// AR2
#define LMG "LMG_Mk200_F"
#define LMG_MAG "200Rnd_65x39_cased_Box_Red:2"
// AT
#define AT "launch_NLAW_F"
#define AT_MAG 
// MMG
#define MMG "MMG_02_sand_F"
#define MMG_MAG "130Rnd_338_Mag:4"
#define MMG_ATTACHMENTS "ef_optic_mbs_coy","EF_acc_pointer_IR_coy","bipod_01_F_snd"
// MAT
#define MAT "launch_MRAWS_green_F"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:2","MAA_MAAWS_ILLUM545:1"
#define MAT_MAG2 "MRAWS_HEAT55_F:2","MRAWS_HE_F:1","MAA_MAAWS_SMOKE469:1","MAA_MAAWS_ILLUM545:2"
#define MAT_MAG3 "MRAWS_HEAT55_F:1","MRAWS_HE_F:1"
#define MAT_OPTIC "EF_acc_pointer_IR_coy"
// HMG
#define HMG "ace_csw_staticM2ShieldCarry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag:3"
// HAT
#define HAT "CUP_launch_Javelin"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "CUP_Javelin_M:2"
// SAM
#define SAM "EF_launch_B_Titan_Coy"
#define SAM_MAG "ace_missile_manpad_stinger_man:2"
// Sniper
#define SNIPER "CUP_srifle_M2010_wdl"
#define SNIPER_MAG "CUP_5Rnd_762x67_M2010_M:10"
#define SNIPER_ATTACHMENTS "muzzle_snds_B","ACE_acc_pointer_green","CUP_optic_LeupoldM3LR","CUP_bipod_Harris_1A2_L_BLK"
// Spotter
#define SPOTTER CARBINE
#define SPOTTER_MAG RIFLE_MAG
#define SPOTTER_ATTACHMENTS "ef_snds_mxar_coy","EF_acc_pointer_IR_coy","ef_optic_mbs_remote_coy"
// SMG
#define SMG "ef_arifle_mxc_coy"
#define SMG_MAG "EF_30Rnd_65x39_caseless_coy_mag_Tracer:5" 
// Pistol
#define PISTOL "ptv_p320"
#define PISTOL_MAG "ptv_15Rnd_9mm_P320:3"
#define PISTOL_ATTACHMENTS "optic_MRD","potato_strongerFlashlights_Vanilla_HG_LED_flashlight"
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS RADIO_SR,"ACE_MapTools","ACE_IR_Strobe_item:2","ACE_Flashlight_XL50","ACE_CableTie:2"
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED,NVG
#define LEADER_LINKED BASE_LEADER_LINKED,NVG


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "EF_V_AAV_Support_Coy"
#define CAMO_VEST_FTL "EF_V_AAV_TL_Coy"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_VEST_MEDIC CAMO_VEST
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "EF_B_RaiderPack_coy"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL "EF_B_Kitbag_coy"
#define CAMO_BACKPACK_MEDIC "ptv_DeltaPack_Cbr"
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define NVG "EF_LPNVG"
#define NVG_T "EF_LPNVG_T"
#define ETOOL "ACE_EntrenchingTool"

#define DMR "ef_arifle_mxm_coy"
#define DMR_MAG "EF_30Rnd_65x39_caseless_coy_mag:10"
#define DMR_ATTACHMENTS "ef_optic_mbs_remote_coy","EF_acc_pointer_IR_coy","ef_snds_mxar_coy","bipod_01_F_snd"

//  init = "this addGoggles selectRandom ['cwr3_b_facewear_scrimnet_scarf_olive','G_Shades_Red','CUP_G_ESS_BLK','CUP_G_WatchGPSCombo','CUP_G_Oakleys_Drk','CUP_FR_NeckScarf','CUP_G_ESS_KHK_Dark'];"

//Suppressor: "ef_snds_mxar_coy"

//Gas Mask: "G_AirPurifyingRespirator_01_F"

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
  handguns[] = {PISTOL};
  magazines[] = {RIFLE_MAG,PISTOL_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {RIFLE_ATTACHMENTS};
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
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
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,PISTOL_MAG,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  magazines[] += {GLRIFLE_MAG_HUNTIR};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR,"ACE_HuntIR_monitor"};
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
  handgunAttachments[] = {PISTOL_ATTACHMENTS};
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
  items[] += {"ACE_wirecutter"};
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
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem_Double"};
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
  launchers[] = {"dzn_MG_Tripod_M122A1_M240Mount_Carry"};
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
  magazines[] += {MAT_MAG2};
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
  launchers[] = {"ace_csw_staticMortarCarry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:6"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:2","ACE_1Rnd_82mm_Mo_Smoke:4"};
};
class spotter: Fic_Spotter {// Spotter
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SPOTTER};
  backpack[] = {CARRYALL};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,BASE_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
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
class Fic_eng: Fic_Soldier_Carbine {
  backpack[] = {CARRYALL};
  items[] += {BASE_ENG,"WBK_HeadLampItem_Double",BASE_MEDICAL};
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
  linkedItems[] = {LINKED,LEADER_LINKED,"Laserdesignator"};
};
class rifleman_02: rifleman {// Rifleman 2
  backpack[] = {CAMO_BACKPACK_FTL};
  backpackItems[] += {RIFLE_MAG};
};
class rifleman_03: rifleman {// Rifleman 3 - Designated Marksman (M38)
  weapons[] = {DMR};
  magazines[] = {DMR_MAG,BASE_GRENADES};
  attachments[] = {DMR_ATTACHMENTS};
};
class rifleman_04: rifleman {// Rifleman 4 - Grenadier
  weapons[] = {GLRIFLE};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_ILLUM};
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
  items[] += {"ACE_EntrenchingTool"};
};
class matl: sl {// MAT Lead
  backpack[] = {CARRYALL};
  magazines[] += {MAT_MAG3};
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

//SF Classes - Diver Section

#define SF_UNIFORM "EF_U_B_MarineCombatUniform_Diver_Wdl"
#define SF_VEST "EF_V_AAV_Diver_Coy"
#define SF_HEADGEAR "EF_H_HelmetB_light_sand_slick"
#define SF_BACKPACK "EF_B_RaiderPack_coy"
#define SF_CARRYALL "EF_B_Kitbag_coy"

#define SF_RIFLE CARBINE
#define SF_RIFLE_MAG CARBINE_MAG
#define SF_RIFLE_ATTACHMENTS "CUP_optic_VortexRazor_UH1_Tan","ACE_DBAL_A3_Green","ef_snds_mxar_coy"

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE "ef_arifle_mx_gl_coy"
#define SF_GLRIFLE_MAG CARBINE_MAG

#define SF_AR AR2
#define SF_AR_MAG AR2_MAG
#define SF_AR_ATTACHMENTS "CUP_optic_VortexRazor_UH1_Tan","ACE_DBAL_A3_Green","ef_snds_mxar_coy","bipod_01_F_blk"

#define SF_SNIPER DMR
#define SF_SNIPER_MAG DMR_MAG
#define SF_SNIPER_ATTACHMENTS DMR_ATTACHMENTS

#define SF_AT "ptv_m72a7"
#define SF_AT_MAG "ptv_m72a7_mag"
#define SF_AT_ATTACHMENTS "ACE_DBAL_A3_Green"

#define SF_PISTOL "ptv_p320t"
#define SF_PISTOL_MAG PISTOL_MAG
#define SF_PISTOL_ATTACHMENTS "optic_MRD","ptv_x300_des","muzzle_snds_L"

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL,CAMO_HEADGEAR_SPECIAL};
  weapons[] = {SF_RIFLE};
  magazines[] = {SF_RIFLE_MAG,BASE_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
  opticChoices[] = {ALT_OPTICS};
  init = "this addGoggles selectRandom ['G_B_Diving','G_B_Diving','G_B_Diving'];"
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  weapons[] = {SF_SNIPER};
  magazines[] = {SF_SNIPER_MAG,BASE_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
  init = "this addGoggles selectRandom ['G_B_Diving','G_B_Diving','G_B_Diving'];"
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,BASE_GRENADES};
  handguns[] = {SF_PISTOL};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
  init = "this addGoggles selectRandom ['G_B_Diving','G_B_Diving','G_B_Diving'];"
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,BASE_GRENADES};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
  init = "this addGoggles selectRandom ['G_B_Diving','G_B_Diving','G_B_Diving'];"
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,BASE_GRENADES};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
  init = "this addGoggles selectRandom ['G_B_Diving','G_B_Diving','G_B_Diving'];"
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  init = "this addGoggles selectRandom ['G_B_Diving','G_B_Diving','G_B_Diving'];"
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  handguns[] = {SF_PISTOL};
  magazines[] += {SF_PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {RADIO_MR};
  hangunAttachments[] = {SF_PISTOL_ATTACHMENTS};
  init = "this addGoggles selectRandom ['G_B_Diving','G_B_Diving','G_B_Diving'];"
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
  init = "this addGoggles selectRandom ['G_B_Diving','G_B_Diving','G_B_Diving'];"
};