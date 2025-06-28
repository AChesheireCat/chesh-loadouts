author = "AChesheireCat";
description = "US Army c.1989 - MAT is the ACE M47 Dragon. SF section fully configured as Army SF (Green Berets). Uses S.O.G Prarie Fire assets. (Last Updated: 2025/05/25)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "cwr3_b_uniform_m81_woodland","cwr3_b_uniform_m81_woodland","cwr3_b_uniform_m81_woodland_gloves","cwr3_b_uniform_m81_woodland_rolled_gloves","cwr3_b_uniform_m65_woodland","cwr3_b_uniform_m65_woodland","cwr3_b_uniform_m65_woodland_gloves","cwr3_b_uniform_m65_woodland_rolled","cwr3_b_uniform_m65_woodland_rolled","cwr3_b_uniform_m65_woodland_rolled_gloves"
#define CAMO_VEST "cwr3_b_vest_pasgt_lbv_alice_woodland","cwr3_b_vest_pasgt_alice_woodland","cwr3_b_vest_pasgt_alice_woodland"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "cwr3_b_backpack_alice"
#define CAMO_HEADGEAR "cwr3_b_headgear_pasgt_m81_woodland_rhino","cwr3_b_headgear_pasgt_m81_woodland_rhino","cwr3_b_headgear_pasgt_m81_woodland_rhino_goggles"
#define CAMO_HEADGEAR_SPECIAL "cwr3_b_headgear_boonie_m81_woodland_early"
#define CAMO_HEADGEAR_SOFTCAP "cwr3_b_headgear_cap_m81_woodland"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "cwr3_b_uniform_pilot"
#define CAMO_VEST_PILOT "vn_b_vest_aircrew_05"
#define CAMO_VEST_CREW "vn_b_vest_aircrew_01"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "vn_b_helmet_svh4_02_06","vn_b_helmet_svh4_02_04","vn_b_helmet_svh4_02_01"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_b_uniform_tanksuit"
#define CAMO_VEST_VICC "cwr3_b_vest_pasgt_alice_od_crew"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "cwr3_b_headgear_cvc","cwr3_b_headgear_cvc_goggles"
// Rifle
#define RIFLE "CUP_arifle_M16A2","CUP_arifle_M16A2","CUP_arifle_M16A2","CUP_arifle_M16A1"
#define RIFLE_MAG "hlc_30rnd_556x45_M:7","hlc_30rnd_556x45_t:3"
#define RIFLE_ATTACHMENTS "potato_strongerFlashlights_acc_cup_Flashlight_05"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "CUP_optic_AN_PVS_4_M16"
// GL Rifle
#define GLRIFLE "CUP_arifle_M16A2_GL","CUP_arifle_M16A2_GL","CUP_arifle_M16A2_GL","CUP_arifle_M16A1GL"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_HEDP "potato_1Rnd_40mm_M433_HEDP:5"
#define GLRIFLE_MAG_FLARE "UGL_FlareGreen_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Carbine
#define CARBINE "CUP_arifle_Colt727"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_M249_E1"
#define AR_MAG "CUP_200Rnd_TE4_Red_Tracer_556x45_M249:2"
// AT
#define AT "CUP_launch_M72A6"
#define AT_MAG 
// MMG
#define MMG "CUP_lmg_M60"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "ace_dragon_super"
#define MAT_MAG 
#define MAT_OPTIC "ace_dragon_sight"
// HMG
#define HMG "CUP_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "CUP_TOW_carry"
#define HAT_TRI_HI "ace_csw_m220CarryTripod"
#define HAT_TRI_LO "ace_csw_m220CarryTripod"
#define HAT_MAG "CUP_compats_TOW_M:1"
// SAM
#define SAM "CUP_launch_FIM92Stinger"
#define SAM_MAG 
// Sniper
#define SNIPER "CUP_srifle_M24_blk"
#define SNIPER_MAG "CUP_5Rnd_762x51_M24:10"
#define SNIPER_ATTACHMENTS "hlc_optic_LeupoldM3A","CUP_Mxx_camo_half","CUP_bipod_Harris_1A2_L_BLK"
#define ALT_SNIPER_OPTICS "CUP_optic_LeupoldMk4","CUP_optic_AN_PVS_10_black"
// Spotter
#define SPOTTER "CUP_smg_MP5A5"
#define SPOTTER_MAG "CUP_30Rnd_9x19_MP5:10"
#define SPOTTER_ATTACHMENTS "CUP_acc_Flashlight_MP5"
// SMG
#define SMG "CUP_smg_MP5A5"
#define SMG_MAG "CUP_30Rnd_9x19_MP5:5"
#define SMG2 "CUP_smg_M3A1"
#define SMG2_MAG "CUP_30Rnd_45ACP_Red_Tracer_M3A1_BLK_M:5"
// Pistol
#define PISTOL "CUP_hgun_Colt1911"
#define PISTOL_MAG "CUP_7Rnd_45ACP_1911:3"
#define PISTOL_OPTIC 
// Grenades
#define LEADER_GRENADES BASE_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
// Gear
#define TOOLS "ACE_MapTools",SIDE_CHEM_LIGHT,"ACE_Flashlight_MX991","ACE_CableTie:2",SIDE_CHEM_LIGHT
#define LEADER_TOOLS RADIO_SR,"acex_intelitems_notepad",SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED 

// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "cwr3_b_vest_pasgt_alice_woodland_mg"
#define CAMO_VEST_FTL "cwr3_b_vest_pasgt_alice_woodland_gl"
#define CAMO_VEST_SL "cwr3_b_vest_pasgt_lbv_woodland"
#define CAMO_VEST_MEDIC "cwr3_b_vest_pasgt_alice_woodland_medic"
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "vn_b_pack_lw_05"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL "cwr3_b_backpack_radio"
#define CAMO_BACKPACK_MEDIC "vn_b_pack_lw_07"
#define MMG_ATTACHMENTS 
#define CAMO_UNIFORM_SNIPER "U_B_FullGhillie_sard"

#define ETOOL "ACE_EntrenchingTool"
#define DEMO "DemoCharge_Remote_Mag:2"
#define DEMO_TOOL "ACE_Clacker"
#define HEADLAMP "WBK_HeadLampItem_Long"
#define NVG "CUP_NVG_PVS7"

//  init = "this addGoggles  ['vn_b_acc_m17_02'];"
//  init = "this addGoggles selectRandom ['cwr3_b_facewear_scrimnet_scarf_olive','vn_b_acc_goggles_01','vn_g_spectacles_02','vn_b_acc_towel_01','vn_b_acc_towel_02','vn_none'];"

// ------------- Vehicle Pool -------------
rallyObject = "Flag_US_F";
transportVehiclePool[] = {
    "cwr3_b_m939",
    "cwr3_b_m939",
    "cwr3_b_m939",
    "cwr3_b_hmmwv",
    "cwr3_b_hmmwv",
    "cwr3_b_m939_open"
};
armedSoftVehiclesPool[] = {
    "cwr3_b_hmmwv_m2",
    "cwr3_b_hmmwv_m2",
    "cwr3_b_hmmwv_m2",
    "cwr3_b_hmmwv_m2",
    "cwr3_b_m113a1",
    "cwr3_b_m113a1",
    "cwr3_b_hmmwv_tow"
};
armoredVehiclePool[] = {
    "cwr3_b_m113a1",
    "cwr3_b_m113a1",
    "cwr3_b_m113a1",
    "cwr3_b_m113a1",
    "CUP_B_LAV25_green",
    "CUP_B_LAV25_green",
    "cwr3_b_m2a2",
    "cwr3_b_m2a2",
    "cwr3_b_m163"
};
tankVehiclePool[] = {
    "cwr3_b_m60a3",
    "cwr3_b_m60a3",
    "cwr3_b_m60a3",
    "cwr3_b_m1"
};
heliVehiclePool[] = {
    "cwr3_b_uh60_m240",
    "cwr3_b_uh60_m2",
    "cwr3_b_ch47",
    "cwr3_b_ah1f",
    "cwr3_b_ah6j",
    "cwr3_b_mh6j",
    "cwr3_b_kiowa_m2",
    "cwr3_b_kiowa_at",
    "cwr3_b_kiowa_dyn",
    "vn_b_air_uh1d_02_01",
    "vn_b_air_ch47_01_01"
};
planeVehiclePool[] = {
    "CUP_B_A10_DYN_USA",
    "cwr3_b_f16c",
    "vn_b_air_f4c_bmb"
};
reinforcementTruck = "cwr3_b_m939"
reinforcementArmed = "cwr3_b_m113a1"
// ------------- End Vehicle Pool -------------

class Box_NATO_Wps_F {
  boxCustomName = "FT Resupply Crate";
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,DEMO,DEMO_TOOL};
};
class Box_NATO_WpsLaunch_F {
  boxCustomName = "AT Launcher Crate";
  TransportWeapons[] = {AT,AT};
  TransportMagazines[] = {AT_MAG,AT_MAG,HAT_MAG};
};
class CUP_WeaponCase_Black_CUP {
  boxCustomName = "HAT Resupply Crate";
  TransportMagazines[] = {HAT_MAG,HAT_MAG};
};
class ACE_medicalSupplyCrate_advanced {
  boxCustomName = "Medical Crate";
  TransportItems[] = {MEDIC_MEDICAL};
};
class gm_ammobox_aluminium_02_empty { // GlobMob M120 CSW Mortar
  boxCustomName = "Mortar Crate";
  TransportMagazines[] = {"ace_compat_gm_1Rnd_120mm_he_dm51:4","ace_compat_gm_1Rnd_120mm_smoke_dm25:2","ace_compat_gm_1Rnd_120mm_illum_dm26:2"};
};

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
  weapons[] = {RIFLE};
  magazines[] = {CARBINE_MAG,LOADOUT_GRENADES};
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
  backpackItems[] = {BASE_MEDICAL,CAMO_HEADGEAR_SOFTCAP};
  handguns[] = {PISTOL};
  magazines[] += {PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {RADIO_MR};
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
};
class aar: rifleman {// AAR
  backpack[] = {CAMO_BACKPACK_AR};
  backpackItems[] += {AR_MAG};
  linkedItems[] += {BINOS};
};
class lat: Fic_Soldier_Carbine {// RAT
  backpack[] = {CAMO_BACKPACK_LAT};
  backpackItems[] += {AT};
  magazines[] += {AT_MAG};
  launchers[] = {AT};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {BINOS};
};
class mmgg: ar {// MMG
  weapons[] = {MMG};
  launchers[] = {"dzn_MG_Tripod_M122A1_M60Mount_Carry"};
  magazines[] = {MMG_MAG,PISTOL_MAG,LOADOUT_GRENADES};
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
  linkedItems[] = {LINKED,MAT_OPTIC};
};
class matag: Fic_Spotter {// MAT Spotter/Ammo Bearer
  backpack[] = {CARRYALL};
  backpackItems[] = {};
  magazines[] += {MAT_MAG};
  items[] += {BASE_MEDICAL};
  launchers[] = {MAT};
};
class msamg: Fic_Soldier_Carbine {// SAM Gunner
  SAM_GEAR(CARRYALL, SAM_MAG)
  launchers[] = {SAM};
};
class msamag: Fic_Spotter {// SAM Spotter/Ammo Bearer
  SAM_GEAR(CARRYALL, SAM_MAG)
};
class mtrg: Fic_Soldier_Carbine {// Mortar Gunner - 60mm M2 (Vietnam-era)
  launchers[] = {"avm224_W_M224_mortar_carry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"avm224_M_6Rnd_60mm_HE_0_csw:10","avm224_M_6Rnd_60mm_HE_csw:10"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"avm224_M_6Rnd_60mm_HE_csw:10","avm224_M_6Rnd_60mm_SMOKE_csw:10","avm224_M_6Rnd_60mm_ILLUM_csw:5"};
};
class spotter: Fic_Spotter {// Spotter
  uniform[] = {CAMO_UNIFORM_SNIPER};
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,LOADOUT_GRENADES,"Laserbatteries"};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED,"CUP_SOFLAM"};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SMG_MAG,SNIPER_MAG,LOADOUT_GRENADES};
  backpackItems[] += {SPOTTER,SPOTTER_ATTACHMENTS};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED,BINOS};
  attachments[] = {SNIPER_ATTACHMENTS};
  opticChoices[] = {ALT_SNIPER_OPTICS};
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
  weapons[] = {SMG2};
  magazines[] = {SMG2_MAG,CREW_GRENADES};
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
class eng: Fic_Soldier_Carbine {// Logistics Engineer
  items[] += {BASE_ENG,BASE_MEDICAL};
  linkedItems[] = {LINKED,LEADER_LINKED};
  backpackItems[] = {"Toolkit","ACE_EntrenchingTool","ACE_Fortify","ACE_wirecutter"};
};
class fac: coy {// FAC
  magazines[] = {GLRIFLE_MAG,SIDE_FAC_GRENADES,"Laserbatteries",PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,"CUP_LRTV"};
};
class rifleman_02: rifleman {// Rifleman 2
};
class rifleman_03: rifleman {// Rifleman 3
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
  headgear[] = {"cwr3_b_headgear_pasgt_m81_woodland_2lt"};
  backpackItems[] = {BASE_MEDICAL,"cwr3_b_headgear_cap_m81_woodland_2lt"};
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
  launchers[] = {MAT};
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
  magazines[] += {"avm224_M_6Rnd_60mm_HE_csw:5","avm224_M_6Rnd_60mm_SMOKE_csw:5","avm224_M_6Rnd_60mm_ILLUM_csw:5"};
};
class helicrew: pilot {// Aircrew
  vest[] = {CAMO_VEST_CREW};
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

// SF Classes - recreating Delta Force just after the Invasion of Panama

#define SF_UNIFORM "cwr3_b_uniform_m81_woodland_gloves","cwr3_b_uniform_m81_woodland_rolled_gloves"
#define SF_VEST "CUP_V_B_RRV_Scout"
#define SF_VEST_AR "CUP_V_B_RRV_MG_GRN"
#define SF_VEST_FTL "CUP_V_B_RRV_Scout2"
#define SF_VEST_SL "CUP_V_B_RRV_TL","CUP_V_B_RRV_Scout3_GRN","CUP_V_B_RRV_Officer"
#define SF_VEST_SNIPER "CUP_V_B_RRV_Scout3_GRN"
#define SF_HEADGEAR "cwr3_b_headgear_protec_full","cwr3_b_headgear_protec_full_goggles","cwr3_b_headgear_protec_half","cwr3_b_headgear_protec_half_goggles"
#define SF_HEADGEAR_SL "cwr3_b_headgear_protec_half_headset","cwr3_b_headgear_protec_half_headset","cwr3_b_headgear_protec_half_headset_goggles"
#define SF_BACKPACK "B_Battle_Belt_XL_F"
#define SF_CARRYALL "cwr3_b_backpack_alice"

#define SF_RIFLE "CUP_arifle_Colt727"
#define SF_RIFLE_MAG "hlc_30rnd_556x45_M:15"
#define SF_RIFLE_ATTACHMENTS "CUP_optic_Aimpoint_5000","potato_strongerFlashlights_CUP_LED_flashlight"

#define SF_CARBINE SF_RIFLE
#define SF_CARBINE_MAG SF_RIFLE_MAG
#define SF_RIFLE_ATTACHMENTS SF_RIFLE_ATTACHMENTS

#define SF_GLRIFLE "CUP_arifle_Colt727_M203"
#define SF_GLRIFLE_MAG SF_RIFLE_MAG
#define SF_GLRIFLE_MAG_HE "CUP_1Rnd_HEDP_M203:10"
#define SF_GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define SF_GLRIFLE_MAG_FLARE "UGL_FlareGreen_F:4"
#define SF_GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"

#define SF_AR "vn_m63a_cdo"
#define SF_AR_MAG "vn_m63a_150_t_mag:4"
#define SF_AR_ATTACHMENTS "vn_bipod_m63a"

#define SF_DMR "CUP_srifle_M21"
#define SF_DMR_MAG "ACE_20Rnd_762x51_M118LR_Mag:12"
#define SF_DMR_ATTACHMENTS "CUP_optic_artel_m14"

#define SF_SNIPER "CUP_srifle_M24_blk"
#define SF_SNIPER_MAG "CUP_5Rnd_762x51_M24:10"
#define SF_SNIPER_ATTACHMENTS "hlc_optic_LeupoldM3A","CUP_Mxx_camo","CUP_bipod_Harris_1A2_L_BLK"

#define SF_AT "CUP_launch_M72A6"
#define SF_AT_MAG 
#define SF_AT_ATTACHMENTS 

#define SF_PISTOL "CUP_hgun_Colt1911"
#define SF_PISTOL_MAG "CUP_7Rnd_45ACP_1911:3"
#define SF_PISTOL_ATTACHMENTS 

#define SF_NVG "CUP_NVG_PVS7"

class sf_rifleman {// sf rifleman
  uniform[] = {SF_UNIFORM};
  vest[] = {SF_VEST};
  headgear[] = {SF_HEADGEAR};
  backpack[] = {SF_BACKPACK};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {SF_RIFLE};
  handguns[] = {"Knife_m3"};
  magazines[] = {SF_RIFLE_MAG,LOADOUT_GRENADES,SIDE_CHEM_LIGHT,SIDE_CHEM_LIGHT};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {SF_RIFLE_ATTACHMENTS};
};
class sf_rifleman_02: sf_rifleman {// sf rifleman 02
  vest[] = {SF_VEST_SNIPER};
  backpack[] = {"ace_gunbag"};
  backpackItems[] += {SMG};
  weapons[] = {SF_SNIPER};
  handguns[] = {SF_PISTOL};
  attachments[] = {SF_SNIPER_ATTACHMENTS};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
  magazines[] = {"CUP_30Rnd_9x19_MP5:5",SF_SNIPER_MAG,SF_PISTOL_MAG,LOADOUT_GRENADES,SIDE_CHEM_LIGHT,SIDE_CHEM_LIGHT};
  items[] = {TOOLS,"ACE_RangeCard","ACE_Tripod"};
  linkedItems[] = {LINKED,BINOS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {SF_VEST_AR};
  weapons[] = {SF_AR};
  magazines[] = {SF_AR_MAG,SF_PISTOL_MAG,LOADOUT_GRENADES,SIDE_CHEM_LIGHT,SIDE_CHEM_LIGHT};
  handguns[] = {SF_PISTOL};
  attachments[] = {SF_AR_ATTACHMENTS};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_aar: sf_rifleman {// AAR
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,LOADOUT_GRENADES,SIDE_CHEM_LIGHT,SIDE_CHEM_LIGHT};
  backpackItems[] += {SF_AR_MAG};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,SF_AT_MAG,LOADOUT_GRENADES,SIDE_CHEM_LIGHT,SIDE_CHEM_LIGHT};
  launchers[] = {SF_AT};
  secondaryAttachments[] = {SF_AT_ATTACHMENTS};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {SF_VEST_FTL};
  backpack[] = {SF_BACKPACK};
  weapons[] = {SF_GLRIFLE};
  magazines[] = {SF_GLRIFLE_MAG,SF_GLRIFLE_MAG_HE,SF_GLRIFLE_MAG_SMOKE,SF_GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,"vn_anpvs2_binoc"};
};
class sf_sl: sf_ftl {// SL
  vest[] = {SF_VEST_SL};
  handguns[] = {SF_PISTOL};
  magazines[] += {SF_PISTOL_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {RADIO_MR};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  vest[] = {"CUP_V_B_RRV_Medic"};
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES,SIDE_CHEM_LIGHT,SIDE_CHEM_LIGHT};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};