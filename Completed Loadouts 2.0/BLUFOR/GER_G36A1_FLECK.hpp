author = "AChesheireCat";
description = "German Bundeswehr c. 2008 - REQ GlobMob CDLC (Last Updated: 2025/06/05)";
#include "undef.hpp" // Reset defines

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "gm_ge_uniform_soldier_90_flk"
#define CAMO_VEST "gm_ge_vest_armor_90_rifleman_flk"
#define CAMO_BACKPACK "B_Battle_Belt_F"
#define CARRYALL "gm_ge_army_backpack_90_flk"
#define CAMO_HEADGEAR "CUP_H_Ger_M92_Cover","CUP_H_Ger_M92_Cover_GG_CF"
#define CAMO_HEADGEAR_SPECIAL "CUP_H_Ger_Boonie2_Flecktarn"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "gm_ge_army_uniform_pilot_oli","gm_ge_army_uniform_pilot_rolled_oli"
#define CAMO_VEST_PILOT "gm_ge_army_vest_pilot_oli"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "gm_ge_headgear_sph4_oli"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "gm_ge_army_uniform_crew_90_flk"
#define CAMO_VEST_VICC "gm_ge_vest_armor_90_crew_flk"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "gm_ge_headgear_crewhat_80_blk","gm_ge_headgear_headset_crew_oli"
// Rifle
#define RIFLE "hlc_rifle_G36A1"
#define RIFLE_MAG "hlc_30rnd_556x45_M_G36:7","hlc_30rnd_556x45_Tracers_G36:3"
#define RIFLE_ATTACHMENTS "HLC_Optic_G36Dualoptic15x2d","HLC_Bipod_G36"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS "HLC_Optic_G36Dualoptic15x","HLC_Optic_G36Export15x2d","HLC_Optic_G36Export15x"
// GL Rifle
#define GLRIFLE "hlc_rifle_G36A1AG36"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2"
#define GLRIFLE_MAG_HE "1Rnd_HE_Grenade_shell:5"
#define GLRIFLE_MAG_HEDP "potato_1Rnd_40mm_M433_HEDP:7"
#define GLRIFLE_MAG_FLARE "UGL_FlareGreen_F:4"
#define GLRIFLE_MAG_ILLUM "CUP_1Rnd_StarFlare_White_M203:5"
// Carbine
#define CARBINE RIFLE
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_lmg_MG3"
#define AR_MAG "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:4"
// AT
#define AT "CUP_launch_HCPF3_Loaded"
#define AT_MAG "CUP_PTFHC_M:1"
// MMG
#define MMG "CUP_lmg_MG3"
#define MMG_MAG "CUP_120Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M:5"
// MAT
#define MAT "cwr3_launch_carlgustaf"
#define MAT_MAG "MRAWS_HEAT55_F:2","MRAWS_HE_F:1"
#define MAT_OPTIC "CUP_optic_MAAWS_Scope"
// HMG
#define HMG "CUP_m2_carry"
#define HMG_TRI_HI "ace_csw_m3CarryTripod"
#define HMG_TRI_LO "ace_csw_m3CarryTripod"
#define HMG_MAG "ace_csw_100Rnd_127x99_mag_red:3"
// HAT
#define HAT "ace_compat_gm_milan_backpack"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "ace_compat_gm_gm_1Rnd_milan_heat_dm92:1"
// SAM
#define SAM "CUP_launch_FIM92Stinger_Loaded"
#define SAM_MAG "CUP_Stinger_M:1"
// Sniper
#define SNIPER "hlc_rifle_g3sg1"
#define SNIPER_MAG "hlc_20rnd_762x51_Mk316_G3:5"
#define SNIPER_ATTACHMENTS "HLC_Optic_ZFSG1"
// Spotter
#define SPOTTER "CUP_smg_MP5SD6"
#define SPOTTER_MAG "CUP_30Rnd_9x19_MP5:10"
#define SPOTTER_ATTACHMENTS 
// SMG
#define SMG "CUP_smg_MP5SD6"
#define SMG_MAG "CUP_30Rnd_Red_Tracer_9x19_MP5:5"
// Pistol
#define PISTOL "ptv_usp45t"
#define PISTOL_MAG "ptv_12Rnd_45ACP_USP:3"
#define PISTOL_ATTACHMENTS 
// Grenades
#define LEADER_GRENADES LOADOUT_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define LOADOUT_FRAG "gm_handgrenade_frag_dm51:2"
#define LOADOUT_GRENADES LOADOUT_FRAG,BASE_SMOKES
// Gear
#define TOOLS BASE_TOOLS
#define LEADER_TOOLS BASE_LEADER_TOOLS,SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED BASE_LEADER_LINKED



// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "gm_ge_vest_armor_90_machinegunner_flk"
#define CAMO_VEST_FTL "gm_ge_vest_armor_90_leader_flk"
#define CAMO_VEST_SL CAMO_VEST_FTL
#define CAMO_VEST_MEDIC "gm_ge_vest_armor_90_medic_flk"
#define CAMO_VEST_CC CAMO_VEST_PILOT
#define CAMO_BACKPACK_LAT CAMO_BACKPACK
#define CAMO_BACKPACK_AR "CUP_B_GER_Pack_Flecktarn"
#define CAMO_BACKPACK_FTL CAMO_BACKPACK
#define CAMO_BACKPACK_SL "gm_ge_backpack_satchel_80_blk"
#define CAMO_BACKPACK_MEDIC CARRYALL
#define MMG_ATTACHMENTS 
#define CAMO_UNIFORM_SNIPER CAMO_UNIFORM

#define ETOOL "ACE_EntrenchingTool"
#define NVG 
#define DEMO "DemoCharge_Remote_Mag"
#define DEMOTOOL "ACE_Clacker"
#define SIDE_BINOS "gm_ferod16_oli"

//  init = "this addGoggles selectRandom ['','','','','','','',''];"

// ------------- Vehicle Pool -------------
// rallyObject = "Misc_Backpackheap";
rallyObject = "gm_flag_GE";
transportVehiclePool[] = {
    "gm_ge_army_kat1_451_cargo",
    "gm_ge_army_kat1_451_cargo",
    "gm_ge_army_kat1_451_cargo",
    "gm_ge_army_kat1_451_cargo",
    "gm_ge_army_kat1_451_cargo",
    "gm_ge_army_kat1_451_cargo",
    "gm_ge_army_kat1_451_cargo",
    "gm_ge_army_kat1_451_cargo",
    "gm_ge_army_kat1_451_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_u1300l_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_iltis_cargo",
    "gm_ge_army_typ253_cargo",
    "gm_ge_army_w123_cargo",
    "gm_ge_army_typ1200_cargo",
    "gm_ge_army_k125",
    "gm_ge_army_kat1_454_cargo",
    "gm_ge_army_kat1_454_reammo",
    "gm_ge_army_kat1_452_container",
    "gm_ge_army_kat1_451_refuel",
    "gm_ge_army_kat1_451_container",
    "gm_ge_army_kat1_451_reammo",
    "gm_ge_army_u1300l_repair",
    "gm_ge_army_u1300l_medic",
    "gm_ge_army_u1300l_container",
    "gm_ge_army_typ253_mp",
    "gm_ge_army_typ247_cargo",
    "gm_ge_army_typ247_firefighter",
    "gm_ge_army_u1300l_firefighter",
    "gm_ge_army_m113a1g_medic"
};
armedSoftVehiclesPool[] = {
    "gm_ge_army_iltis_mg3",
    "gm_ge_army_iltis_mg3",
    "gm_ge_army_iltis_mg3",
    "gm_ge_army_iltis_milan",
    "gm_ge_army_iltis_milan",
    "gm_ge_army_fuchsa0_reconnaissance",
    "gm_ge_army_fuchsa0_engineer",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc_milan",
    "gm_ge_army_m113a1g_mortar",
    "gm_ge_army_m113a1g_command",
    "gm_ge_army_kat1_463_mlrs"
};
armoredVehiclePool[] = {
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_m113a1g_apc",
    "gm_ge_army_luchsa1",
    "gm_ge_army_luchsa1",
    "gm_ge_army_luchsa2",
    "gm_ge_army_luchsa2",
    "gm_ge_army_marder1a1plus",
    "gm_ge_army_marder1a1a",
    "gm_ge_army_marder1a2",
    "gm_ge_army_rakjpz2",
    "gm_ge_army_gepard1a1"
};
tankVehiclePool[] = {
    "gm_ge_army_Leopard1a1",
    "gm_ge_army_Leopard1a1a1",
    "gm_ge_army_Leopard1a1a2",
    "gm_ge_army_Leopard1a3",
    "gm_ge_army_Leopard1a3a1",
    "gm_ge_army_Leopard1a4",
    "gm_ge_army_Leopard1a5",
    "gm_ge_army_luchsa1",
    "gm_ge_army_luchsa2",
    "gm_ge_army_marder1a1plus",
    "gm_ge_army_marder1a1a",
    "gm_ge_army_marder1a2",
    "gm_ge_army_gepard1a1",
    "gm_ge_army_bpz2a0",
    "gm_ge_army_bibera0",
    "gm_ge_army_m109g"
};
heliVehiclePool[] = {
    "gm_ge_army_ch53gs",
    "gm_ge_army_bo105p1m_vbh",
    "gm_ge_army_bo105p1m_vbh_swooper",
    "CUP_B_UH1D_slick_GER_KSK",
    "CUP_B_UH1D_armed_GER_KSK",
    "gm_ge_army_bo105p_pah1a1"
};
planeVehiclePool[] = {
    "cwr3_b_f4e",
    "gm_ge_airforce_do28d2"
};
reinforcementTruck = "gm_ge_army_kat1_451_cargo"
reinforcementArmed = "gm_ge_army_m113a1g_apc"
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
  magazines[] = {GLRIFLE_MAG,GLRIFLE_MAG_HEDP,GLRIFLE_MAG_SMOKE,GLRIFLE_MAG_FLARE,GLRIFLE_MAG_ILLUM,LEADER_GRENADES};
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
  backpack[] = {SIDE_UAV_BACKPACK};
  linkedItems[] += {SIDE_UAV_TERMINAL};
  items[] += {"ACE_UAVBattery:2"};
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
  weapons[] = {CARBINE};
  magazines[] = {CARBINE_MAG,CREW_GRENADES};
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
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
  items[] += {LEADER_TOOLS,RADIO_MR,ETOOL};
  handgunAttachments[] = {PISTOL_OPTIC};
};
class matl: sl {// MAT Lead
  vest[] = {CAMO_VEST_SL};
  backpack[] = {CARRYALL};
  weapons[] = {RIFLE};
  handguns[] = {PISTOL};
  magazines[] = {RIFLE_MAG,LEADER_GRENADES,PISTOL_MAG,MAT_MAG};
  linkedItems[] = {LINKED,LEADER_LINKED,RANGE_FINDER};
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