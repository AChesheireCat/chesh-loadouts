author = "AChesheireCat";
description = "West German Panzergrenadiers c. 1980s - REQ GLOBMOB CDLC (Last Updated: 2025/05/30)";
#include "undef.hpp" // Reset defines

// Reduced radios (FTL+)

// One fireteam should consist of the MG3 team (with their RAT having a Pz44) while the other fireteam should consist of a Carl Gustav team

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "gm_ge_army_uniform_soldier_parka_80_win"
#define CAMO_VEST "gm_ge_army_vest_80_rifleman"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "gm_ge_army_backpack_80_oli"
#define CAMO_HEADGEAR "gm_ge_headgear_m62_cover_win","gm_ge_headgear_m62_win_pap_01","gm_ge_headgear_m62_win_pap_01"
#define CAMO_HEADGEAR_SPECIAL "gm_ge_headgear_sidecap_80_m62_oli"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "gm_ge_army_uniform_pilot_oli","gm_ge_army_uniform_pilot_rolled_oli"
#define CAMO_VEST_PILOT "gm_ge_army_vest_pilot_oli"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "gm_ge_headgear_sph4_oli"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "gm_ge_army_uniform_crew_80_oli"
#define CAMO_VEST_VICC "gm_ge_army_vest_80_crew"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "gm_ge_headgear_crewhat_80_blk"
// Rifle
#define RIFLE "gm_g3a3_oli"
#define RIFLE_MAG "gm_40Rnd_762x51mm_B_T_DM21_g3_blk:1","gm_20Rnd_762x51mm_B_DM41_g3_blk:7","gm_20Rnd_762x51mm_B_T_DM21_g3_blk:3"
#define RIFLE_ATTACHMENTS 
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS 
// GL Rifle
#define GLRIFLE "gm_g3a3_oli"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE 
#define GLRIFLE_MAG_HE "gm_1rnd_67mm_heat_dm22a1_g3:5"
#define GLRIFLE_MAG_FLARE 
// Carbine
#define CARBINE "gm_g3a4_oli"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_MG3"
#define AR_MAG "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:4"
// AT
#define AT "gm_pzf44_2_oli"
#define AT_MAG "gm_1Rnd_44x537mm_heat_dm32_pzf44_2:2"
#define AT_OPTIC "gm_feroz2x17_pzf44_2_blk"
// MMG
#define MMG "CUP_lmg_MG3"
#define MMG_MAG "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "gm_pzf84_oli"
#define MAT_MAG "gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf:2","MAA_MAAWS_SMOKE469:1","gm_1Rnd_84x245mm_ILLUM_DM16_carlgustaf:1"
#define MAT_OPTIC "gm_feroz2x17_pzf84_blk"
// HMG
#define HMG "CUP_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "ace_compat_gm_milan_backpack"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "gm_1Rnd_milan_heat_dm82_csw:1"
// SAM
#define SAM "gm_fim43_oli"
#define SAM_MAG "gm_1Rnd_70mm_he_m585_fim43:1"
// Sniper
#define SNIPER "gm_g3sg1_blk"
#define SNIPER_MAG "gm_10Rnd_762x51mm_B_DM41_g3_blk:10"
#define SNIPER_ATTACHMENTS "gm_diavari_da_stanagClaw_blk","gm_g3_bipod_blk"
// Spotter
#define SPOTTER CARBINE
#define SPOTTER_MAG CARBINE_MAG
#define SPOTTER_ATTACHMENTS 
// SMG
#define SMG "gm_mp2a1_blk"
#define SMG_MAG "gm_32Rnd_9x19mm_B_DM11_mp2_blk:5"
// Pistol
#define PISTOL "gm_p1_blk"
#define PISTOL_MAG "gm_8Rnd_9x19mm_B_DM11_p1_blk:4"
#define PISTOL_ATTACHMENTS 
// Flare Pistol
#define FPISTOL "gm_p2a1_blk"
#define FPISTOL_FLARE "gm_1Rnd_265mm_flare_single_grn_DM11:4"
#define FPISTOL_ILLUM "gm_1Rnd_265mm_flare_multi_wht_DM25:4"
#define FPISTOL_SMOKE "gm_1Rnd_265mm_smoke_single_blk_gc:2","gm_1Rnd_265mm_smoke_single_org_DM22:2"
// GL Pistol
#define GLPISTOL "ptv_hk69"
#define GLPISTOL_MAG "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLPISTOL_FLARE "UGL_FlareGreen_F:4"
#define GLPISTOL_ILLUM "CUP_1Rnd_StarFlare_White_M203:4"
// Grenades
#define LEADER_GRENADES LOADOUT_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define LOADOUT_FRAG "gm_handgrenade_frag_dm51a1:2"
#define LOADOUT_SMOKE "gm_smokeshell_wht_dm25:2"
#define LOADOUT_GRENADES LOADOUT_FRAG,LOADOUT_SMOKE,SIDE_CHEM_LIGHT
// Gear
#define TOOLS "ACE_MapTools","ACE_Flashlight_MX991","ACE_CableTie:2"
#define LEADER_TOOLS RADIO_SR,"acex_intelitems_notepad",SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED 



// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "gm_ge_army_vest_80_machinegunner"
#define CAMO_VEST_FTL "gm_ge_army_vest_80_leader"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_VEST_MEDIC "gm_ge_army_vest_80_medic"
#define CAMO_VEST_CC CAMO_VEST_PILOT
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR CARRYALL
#define CAMO_BACKPACK_FTL "gm_ge_backpack_satchel_80_blk"
#define CAMO_BACKPACK_SL "gm_ge_backpack_sem35_oli"
#define CAMO_BACKPACK_MEDIC CARRYALL
#define MMG_ATTACHMENTS 
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define ETOOL "ACE_EntrenchingTool"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMOTOOL "ACE_Clacker"
#define BAYONET "gm_bayonet_g3_blk"
#define SIDE_BINOS "gm_ferod16_oli"

//  init = "this addGoggles selectRandom ['','','','','','','',''];"

// ------------- Vehicle Pool -------------
rallyObject = "gm_flag_GE";
transportVehiclePool[] = {
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_kat1_451_cargo"
};
armedSoftVehiclesPool[] = {
    "gm_ge_army_iltis_mg3",
    "gm_ge_army_iltis_mg3",
    "gm_ge_army_iltis_mg3",
    "gm_ge_army_iltis_mg3",
    "gm_ge_army_iltis_milan",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc_milan",
    "gm_ge_army_m113a1g_apc_milan",
    "gm_ge_army_fuchsa0_reconnaissance"
};
armoredVehiclePool[] = {
    "gm_ge_army_m113a1g_apc_milan",
    "gm_ge_army_m113a1g_apc_milan",
    "gm_ge_army_m113a1g_apc_milan",
    "gm_ge_army_fuchsa0_reconnaissance",
    "gm_ge_army_fuchsa0_reconnaissance",
    "gm_ge_army_marder1a2",
    "gm_ge_army_luchsa1"
};
tankVehiclePool[] = {
    "gm_ge_army_Leopard1a1a1",
    "gm_ge_army_Leopard1a1a1",
    "gm_ge_army_Leopard1a1a1",
    "gm_ge_army_marder1a2",
    "gm_ge_army_luchsa1",
    "gm_ge_army_rakjpz2"
};
heliVehiclePool[] = {
    "gm_ge_army_ch53gs",
    "gm_ge_army_bo105p_pah1a1",
    "gm_ge_army_bo105p1m_vbh_swooper"
};
planeVehiclePool[] = {
    "vn_b_air_f4c_bmb"
};
reinforcementTruck = "gm_ge_army_kat1_451_cargo"
reinforcementArmed = "gm_ge_army_m113a1g_apc_milan"
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
  weapons[] = {GLRIFLE};
  handguns[] = {GLPISTOL};
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HE,GLPISTOL_MAG,LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,SIDE_BINOS};
};
class sl: ftl {// SL
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CAMO_BACKPACK_SL};
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
  items[] += {RADIO_MR};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {};
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
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,LOADOUT_GRENADES};
  items[] += {RADIO_MR,"ACE_ATragMX","ACE_Kestrel4500","ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
  uniform[] = {CAMO_UNIFORM_SNIPER};
  backpack[] = {"ace_gunbag"};
  weapons[] = {SNIPER};
  magazines[] = {SPOTTER_MAG,SNIPER_MAG,LOADOUT_GRENADES};
  backpackItems[] += {SPOTTER,SPOTTER_ATTACHMENTS};
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
};
class rifleman_03: rifleman {// Rifleman 3
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
  linkedItems[] = {LINKED,LEADER_LINKED,SIDE_BINOS};
  items[] += {RADIO_MR};
  handgunAttachments[] = {SF_PISTOL_ATTACHMENTS};
};
class sf_sm: sf_rifleman {// Medic
  weapons[] = {SF_CARBINE};
  magazines[] = {SF_CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {SF_CARRYALL};
  backpackItems[] = {MEDIC_MEDICAL};
};