class CfgLoadouts {
  // Use POTATO to run gear assignment
  usePotato = 1;

  // Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  // Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
  allowMagnifiedOptics = 1;

  // Allow changeable optics on a global level, note: optic options obey allowMagnifiedOptics rules
  allowChangeableOptics = 1;

  // Do Vehicle Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setVehicleLoadouts = 3;

  // Do Supply Box Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setSupplyBoxLoadouts = 2;
  class SupplyBoxes {
    class B_supplyCrate_F {
      addMarkingActions = 2;
      boxCustomName = "Crate of Crates";
      boxSpace = 4;
      class CUP_BOX_GB_Ammo_F {
        boxCount = 3;
        boxCustomName = "FT Resupply Crate";
        TransportWeapons[] = {"ptv_m72a7","launch_NLAW_F"};
        TransportMagazines[] = {"hlc_30rnd_556x45_M_PMAG:20","hlc_30rnd_556x45_t_PMAG:10","hlc_100Rnd_762x51_Barrier_M60E4:8","CUP_1Rnd_HEDP_M203:5","1Rnd_Smoke_Grenade_shell:2","1Rnd_SmokeRed_Grenade_shell:2","CUP_HandGrenade_L109A2_HE:8","SmokeShell:8"};
      };
      class ACE_medicalSupplyCrate_advanced {
        boxCount = 1;
        boxCustomName = "Medical Crate";
        TransportItems[] = {"ACE_elasticBandage:25","ACE_packingBandage:15","ACE_epinephrine:10","ACE_salineIV:2","ACE_salineIV_500:4","ACE_salineIV_250:8","ACE_morphine:16","ACE_tourniquet:6","ACE_splint:12","ACE_adenosine:10","potato_naloxone:10"};
      };
    };
  };

  // Fallback: use a basic soldiers loadout when the unit's classname isn't found (for Alive spawning random units)
  useFallback = 1;

  // prefixes to strip from the units classnames
  prefixes[] = {"potato_w_", "potato_e_", "potato_i_"};

  // Shared defines
  #include "Loadouts\common.hpp" // DO NOT COMMENT OUT, WILL BREAK EVERYTHING


  // cleanup.bat will delete any loadouts not in active use (so make sure to include before running)

  // Blufor/Indfor/Opfor folders are just for organization, they can be used with any faction 
  // e.g. Blufor\us_mx_mtp.hpp for potato_e is fine
  
  // Loadouts can be either kept in the Loadouts\Blufor\ folders or moved up to Loadouts\

  // West factions
  #include "Loadouts\west_gear.hpp"
  class potato_w { // BluFor
    #include "Loadouts\baf_l85a3_mtp.hpp"
  };

  // Indy factions
  #include "Loadouts\indy_gear.hpp"
  class potato_i { // Indy
    #include "Loadouts\Indfor\aaf_f2000_digi.hpp"
  };

  // East Factions
  #include "Loadouts\east_gear.hpp"
  class potato_e { // OpFor
    #include "Loadouts\Opfor\csat_sama_hex.hpp"
  };

  // Civilians (mainly for RP missions)
  #include "Loadouts\civ_gear.hpp"
  #include "Loadouts\civilians.hpp" // Bare example of doing civilian loadouts
};
