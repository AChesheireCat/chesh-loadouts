author = "AChesheireCat";
description = "Soviet Motorized Infantry (Motostrelki) c. 1978 - includes custom grenade defines and a fully configured special forces section (Last updated: 2025/06/03)";
#include "undef.hpp" // Reset defines

// Rifleman_02 is a marksman

// ------------------- PASTE BELOW THIS LINE


// Camo set
#define CAMO_UNIFORM "cwr3_o_uniform_m1969_collar","cwr3_o_uniform_m1969_rolled","cwr3_o_uniform_m1969"
#define CAMO_VEST "cwr3_o_vest_harness_ak74","cwr3_o_vest_harness_ak74","cwr3_o_vest_chicom_beltkit_ak74"
#define CAMO_BACKPACK "cwr3_o_backpack_harness_roll","B_Battle_Belt_F","cwr3_o_backpack_gasmask"
#define CARRYALL "cwr3_o_backpack_veshmeshok"
#define CAMO_HEADGEAR "cwr3_o_headgear_ssh68","cwr3_o_headgear_ssh68","cwr3_o_headgear_ssh68","cwr3_o_headgear_ssh68_camo","cwr3_o_headgear_ssh68_net"
#define CAMO_HEADGEAR_SPECIAL "PLOT_ARMOR_H_Bandanna_cbr"
// Pilot Camo set
#define CAMO_UNIFORM_PILOT "rhs_uniform_df15_tan"
#define CAMO_VEST_PILOT "rhs_vest_commander"
#define CAMO_BACKPACK_PILOT "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_PILOT "vn_o_helmet_zsh3_02"
// Vic Crew Camo set
#define CAMO_UNIFORM_VICC "cwr3_o_uniform_m1972_tanker"
#define CAMO_VEST_VICC "rhs_vest_commander"
#define CAMO_BACKPACK_VICC "B_Battle_Belt_XL_F"
#define CAMO_HEADGEAR_VICC "cwr3_o_headgear_tsh4"
// Rifle
#define RIFLE "rhs_weap_ak74"
#define RIFLE_MAG "hlc_30Rnd_545x39_EP_ak:7","hlc_30Rnd_545x39_t_ak:3"
#define RIFLE_ATTACHMENTS "rhs_acc_dtk1983"
#define AAR_ATTACHMENTS RIFLE_ATTACHMENTS
#define ALT_OPTICS 
// GL Rifle
#define GLRIFLE "rhs_weap_ak74_gp25"
#define GLRIFLE_MAG RIFLE_MAG
#define GLRIFLE_MAG_SMOKE "CUP_1Rnd_SMOKE_GP25_M:2","CUP_1Rnd_SmokeRed_GP25_M:2"
#define GLRIFLE_MAG_HE "rhs_VOG25:5"
#define GLRIFLE_MAG_FLARE "rhs_VG40OP_red:4"
#define GLRIFLE_MAG_ILLUM "CUP_IlumFlareWhite_GP25_M:4"
// Carbine
#define CARBINE "rhs_weap_aks74"
#define CARBINE_MAG RIFLE_MAG
// AR
#define AR "CUP_arifle_RPK74_45"
#define AR_MAG "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M:9"
// AT
#define AT "CUP_launch_RPG7V"
#define AT_MAG "CUP_PG7VM_M:3"
// Light AT
#define LAT "CUP_launch_RPG26"
// MMG
#define MMG "CUP_lmg_PKM"
#define MMG_MAG "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M:5"
// MAT
#define MAT "CUP_launch_RPG7V"
#define MAT_MAG "CUP_PG7VL_M:2","CUP_PG7VM_M:1"
#define MAT_OPTIC "CUP_optic_PGO7V2"
// HMG
#define HMG "CUP_DSHKM_carry"
#define HMG_TRI_HI "ace_csw_kordCarryTripod"
#define HMG_TRI_LO "ace_csw_kordCarryTripodLow"
#define HMG_MAG "ace_csw_50Rnd_127x108_mag:5"
// HAT
#define HAT "ace_compat_rhs_afrf3_metis_carry"
#define HAT_TRI_HI 
#define HAT_TRI_LO 
#define HAT_MAG "ace_compat_rhs_afrf3_mag_9M131F:2"
// SAM
#define SAM "CUP_launch_9K32Strela"
#define SAM_MAG 
// Sniper Rifle
#define SNIPER "CUP_srifle_SVD"
#define SNIPER_MAG "rhs_10Rnd_762x54mmR_7N1:10"
#define SNIPER_ATTACHMENTS "cup_optic_pso_1"
// Spotter Rifle
#define SPOTTER "rhs_weap_akms"
#define SPOTTER_MAG "CUP_30Rnd_Subsonic_762x39_AK47_M:10"
#define SPOTTER_ATTACHMENTS "rhs_acc_pbs1"
// SMG
#define SMG "rhs_weap_aks74u"
#define SMG_MAG "hlc_30Rnd_545x39_EP_ak:5"
#define SMG_ATTACHMENTS "rhs_acc_pgs64_74u"
// Pistol
#define PISTOL "CUP_hgun_Makarov"
#define PISTOL_MAG "CUP_8Rnd_9x18_Makarov_M:3"
// Grenades
#define LEADER_GRENADES LOADOUT_FRAG,LEADER_SMOKES,SIDE_CHEM_LIGHT
#define LOADOUT_FRAG "rhs_mag_rgd5:2"
#define LOADOUT_SMOKE "rhs_mag_rdg2_white:2"
#define LOADOUT_GRENADES LOADOUT_FRAG,LOADOUT_SMOKE
// Gear
#define TOOLS "ACE_MapTools","ACE_Flashlight_KSF1","ACE_CableTie:2"
#define LEADER_TOOLS RADIO_SR,"acex_intelitems_notepad",SIDE_KEY
#define LINKED BASE_LINKED
#define LEADER_LINKED 

#define NVG "cwr3_o_nvg_pnv57_tsh3"
#define ETOOL "ACE_EntrenchingTool"
#define DEMO "DemoCharge_Remote_Mag"
#define DEMO_TOOL "ACE_Clacker"


// -------------------- PASTE ABOVE THIS LINE
//Custom Defines
#define CAMO_VEST_AR "cwr3_o_vest_chicom_beltkit_ak74"
#define CAMO_VEST_FTL "cwr3_o_vest_harness_gl"
#define CAMO_VEST_SL "cwr3_o_vest_harness_officer"
#define CAMO_VEST_MEDIC "cwr3_o_vest_harness_medic"
#define CAMO_VEST_MARKSMAN "cwr3_o_vest_harness_svd"
#define CAMO_VEST_MMG "cwr3_o_vest_harness_mg"
#define CAMO_BACKPACK_LAT "rhs_rpg_2"
#define CAMO_BACKPACK_AR "cwr3_o_backpack_gasmask"
#define CAMO_BACKPACK_FTL "cwr3_o_backpack_veshmeshok"
#define CAMO_BACKPACK_SL "cwr3_o_backpack_rd54_r148"
#define CAMO_BACKPACK_MEDIC "cwr3_o_backpack_veshmeshok_medic_empty"
#define MMG_ATTACHMENTS 

// Facewear Init
//  init = "this addGoggles selectRandom ['cigs_Kosmos_cig0','rhs_scarf','CUP_G_TK_RoundGlasses_blk','G_Squares','G_Spectacles','None','None','None','CUP_G_WristWatch'];"

// Gas Mask Init
//  init = "this addGoggles selectRandom ['gm_gc_army_facewear_schm41m','gm_gc_army_facewear_schm41m','gm_gc_army_facewear_schm41m'];"

// ------------- Vehicle Pool -------------
rallyObject = "cwr3_Flag_USSR";
transportVehiclePool[] = {
    "RHS_Ural_MSV_01",
    "RHS_Ural_Open_MSV_01",
    "CUP_O_UAZ_Unarmed_SLA",
    "CUP_O_UAZ_Open_SLA"
};
armedSoftVehiclesPool[] = {
    "CUP_O_UAZ_MG_SLA",
    "CUP_O_UAZ_MG_SLA",
    "CUP_O_UAZ_MG_SLA",
    "CUP_O_UAZ_SPG9_SLA"
};
armoredVehiclePool[] = {
    "rhs_btr70_msv",
    "rhs_btr70_msv",
    "rhs_btr70_msv",
    "rhs_bmp1_msv",
    "rhs_bmp1_msv",
    "rhs_bmp1p_msv",
    "cwr3_o_brdm2",
    "cwr3_o_brdm2",
    "cwr3_o_brdm2_atgm",
    "RHS_Ural_Zu23_MSV_01",
    "cwr3_o_mtlb_pk",
    "cwr3_o_mtlb_pk"
};
tankVehiclePool[] = {
    "cwr3_o_t64b",
    "cwr3_o_t64b",
    "cwr3_o_t72a",
    "cwr3_o_t72a",
    "cwr3_o_mtlb_sa13",
    "rhs_zsu234_aa"
};
heliVehiclePool[] = {
    "RHS_Mi8mt_vvsc",
    "RHS_Mi8MTV3_vvsc",
    "RHS_Mi24V_vvsc"
};
planeVehiclePool[] = {
    "vn_o_air_mig21_gun",
    "cwr3_o_su17m4",
    "cwr3_o_mig23",
    "cwr3_o_mig27"
};
reinforcementTruck = "rhs_btr70_msv"
reinforcementArmed = "rhs_bmp1_msv"
// ------------- End Vehicle Pool -------------

// Resupply Boxes
class CUP_BOX_RU_Ammo_F {
  boxCustomName = "FT Resupply Crate";
  TransportMagazines[] = {RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,RIFLE_MAG,AR_MAG,AR_MAG,GLRIFLE_MAG_HE,GLRIFLE_MAG_HE,GLRIFLE_MAG_SMOKE,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,BASE_GRENADES,DEMO,DEMO_TOOL};
};
class cwr3_crate_launchers_ru {
  boxCustomName = "AT Launcher Crate";
  TransportWeapons[] = {AT,AT};
  TransportMagazines[] = {AT_MAG,AT_MAG,HAT_MAG};
};
class CUP_BOX_RU_AmmoOrd_F {
  boxCustomName = "HAT Resupply Crate";
  TransportMagazines[] = {HAT_MAG,HAT_MAG};
};
class ACE_medicalSupplyCrate_advanced {
  boxCustomName = "Medical Crate";
  TransportItems[] = {MEDIC_MEDICAL};
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

// Resupply Boxes in Vehicles
// GlobMob BMP-1P
class CUP_B_M1126_ICV_M2_Woodland {
    minVehicleBoxSpace = 10;
  class CUP_BOX_RU_Ammo_F: CUP_BOX_RU_Ammo_F {
    boxCount = 2;
  };
  class cwr3_crate_launchers_ru: cwr3_crate_launchers_ru {
    boxCount = 1;
  };
  class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate_advanced {
    boxCount = 1;
  };
  class Land_CanisterFuel_F {
    boxCount = 2;
  };
  class ACE_Track {
    boxCount = 2;
  };
};

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
//  weapons[] = {CARBINE};
//  magazines[] = {CARBINE_MAG,LOADOUT_GRENADES};
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
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {RADIO_MR};
};
class coy: sl {// CO and DC
  backpack[] = {CARRYALL};
  items[] += {RADIO_LR};
};
class uav: rifleman {// UAV Operator
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
  magazines[] += {AT_MAG};
  launchers[] = {AT};
  secondaryAttachments[] = {MAT_OPTIC};
};
class sm: Fic_Soldier_Carbine {// Medic
  vest[] = {CAMO_VEST_MEDIC};
  magazines[] = {CARBINE_MAG,MEDIC_GRENADES};
  backpack[] = {CAMO_BACKPACK_MEDIC};
  backpackItems[] = {MEDIC_MEDICAL,"WBK_HeadLampItem"};
};
class Fic_Spotter: rifleman {
  linkedItems[] += {BINOS};
};
class mmgg: ar {// MMG
  vest[] = {CAMO_VEST_MMG};
  weapons[] = {MMG};
  magazines[] = {MMG_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  attachments[] = {MMG_ATTACHMENTS};
  backpack[] = {CARRYALL};
  launchers[] = {"dzn_MG_Tripod_Universal_Carry"};
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
  launchers[] = {"CUP_2b14_carry"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:6"};
};
class mtrag: Fic_Spotter {// Assistant Mortar
  launchers[] = {"ace_csw_carryMortarBaseplate"};
  MORTAR_GEAR(CARRYALL)
  magazines[] += {"ACE_1Rnd_82mm_Mo_HE:2","ACE_1Rnd_82mm_Mo_Smoke:4"};
};
class spotter: Fic_Spotter {// Spotter
  weapons[] = {SPOTTER};
  magazines[] = {SPOTTER_MAG,LOADOUT_GRENADES};
  items[] += {RADIO_MR,"ACE_SpottingScope","ACE_Tripod"};
  linkedItems[] += {LEADER_LINKED};
  attachments[] = {SPOTTER_ATTACHMENTS};
};
class sniper: spotter {// Sniper
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
  attachments[] = {SMG_ATTACHMENTS};
};
class vicc: Fic_Soldier_Carbine {// Crew
  uniform[] = {CAMO_UNIFORM_VICC};
  vest[] = {CAMO_VEST_VICC};
  headgear[] = {CAMO_HEADGEAR_VICC};
  backpack[] = {CAMO_BACKPACK_VICC};
  weapons[] = {CARBINE};
  magazines[] = {SMG_MAG,CREW_GRENADES};
  backpackItems[] = {SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS,NVG};
  items[] += {BASE_MEDICAL};
  attachments[] = {RIFLE_ATTACHMENTS};
};
class vicd: vicc {// Repair Specialist
  weapons[] = {};
  handguns[] = {PISTOL};
  magazines[] = {PISTOL_MAG,CREW_GRENADES};
  backpackItems[] = {"Toolkit",SIDE_KEY};
  linkedItems[] = {LINKED,LEADER_LINKED,NVG};
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
class rifleman_02: rifleman {// Rifleman 2 - Marksman
  vest[] = {CAMO_VEST_MARKSMAN};
  weapons[] = {SNIPER};
  handguns[] = {PISTOL};
  magazines[] = {SNIPER_MAG,PISTOL_MAG,LOADOUT_GRENADES};
  linkedItems[] = {LINKED};
  attachments[] = {SNIPER_ATTACHMENTS};
};
class rifleman_03: rifleman {// Light Anti-Tank Rifleman (RPG-26)
  launchers[] = {LAT};
};
class rifleman_04: lat {// Assistant Grenadier
  backpack[] = {CAMO_BACKPACK_LAT};
  magazines[] += {AT_MAG};
  launchers[] = {};
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
  weapons[] = {};
  handguns[] = {PISTOL};
  magazines[] = {PISTOL_MAG,CREW_GRENADES};
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

class sf_rifleman {// sf rifleman
  uniform[] = {"rhs_uniform_gorka_r_g"};
  vest[] = {"rhs_6b3_AK","rhs_6b3_AK_2","rhs_6b3_AK_3"};
  headgear[] = {"cwr3_o_bandanna_klmk"};
  backpack[] = {"B_Battle_Belt_XL_F"};
  backpackItems[] = {BASE_MEDICAL};
  weapons[] = {"rhs_weap_akms"};
  magazines[] = {"CUP_30Rnd_Subsonic_762x39_AK47_bakelite_M:10",LOADOUT_GRENADES};
  items[] = {TOOLS};
  linkedItems[] = {LINKED};
  attachments[] = {"cup_muzzle_bizon"};
  opticChoices[] = {ALT_OPTICS};
};
class sf_ar: sf_rifleman {// AR
  vest[] = {"rhs_6b3_holster"};
  backpack[] = {"B_Battle_Belt_XL_F"};
  weapons[] = {"vn_pk"};
  magazines[] = {"vn_pk_100_mag:5","rhs_mag_9x18_8_57N181S:3",LOADOUT_GRENADES};
  handguns[] = {"rhs_weap_pb_6p9"};
  secondaryAttachments[] = {"rhs_acc_6p9_suppressor"};
};
class sf_aar: sf_rifleman {// AAR
  backpack[] = {"B_Battle_Belt_XL_F"};
  backpackItems[] += {"vn_pk_100_mag:5"};
  linkedItems[] += {BINOS};
};
class sf_lat: sf_rifleman {// RAT
  backpack[] = {"rhs_rpg_6b3"};
  magazines[] += {"CUP_PG7VM_M:2"};
  launchers[] = {"CUP_launch_RPG7V"};
  secondaryAttachments[] = {"cup_optic_pgo7v3"};
};
class sf_ftl: sf_rifleman {// FTL
  vest[] = {"rhs_6b3_VOG","rhs_6b3_VOG_2"};
  backpack[] = {"B_Battle_Belt_XL_F"};
  weapons[] = {"rhs_weap_akms_gp25"};
  magazines[] = {"CUP_30Rnd_Subsonic_762x39_AK47_bakelite_M:10","rhs_VOG25P:5","1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2",LEADER_GRENADES};
  items[] += {LEADER_TOOLS};
  linkedItems[] += {LEADER_LINKED,BINOS};
  attachments[] = {"cup_muzzle_bizon"};
};
class sf_sl: sf_ftl {// SL
  vest[] = {"rhs_6b3_R148"};
  handguns[] = {"rhs_weap_pb_6p9"};
  magazines[] += {"rhs_mag_9x18_8_57N181S:3"};
  linkedItems[] = {LINKED,LEADER_LINKED,BINOS};
  items[] += {RADIO_MR};
};
class sf_sm: sf_rifleman {// Medic
  vest[] = {"rhs_6b3_AK","rhs_6b3_AK_2","rhs_6b3_AK_3"};
  magazines[] = {"CUP_30Rnd_Subsonic_762x39_AK47_bakelite_M:10",MEDIC_GRENADES};
  backpack[] = {"rhs_tortila_khaki"};
  backpackItems[] = {MEDIC_MEDICAL};
};