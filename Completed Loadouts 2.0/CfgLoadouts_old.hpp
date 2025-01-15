class CfgLoadouts {
  // Use POTATO to run gear assignment
  usePotato = 1;

  // Fast, Easy Settings to change loadouts without touching the arrays.  For TVT Balancing.
  // Allow Zoomed Optics (1 is true, 0 is false) <Anything like a HAMR (4x) optic won't be added, "red dot" would be fine>
  allowMagnifiedOptics = 0;

  // Allow changeable optics on a global level, note: optic options obey allowMagnifiedOptics rules
  allowChangeableOptics = 1;

  // Do Vehicle Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setVehicleLoadouts = -1;
  
  // Do Supply Box Loadouts
  // (1 will run normaly, 0 will leave them to vanilla defaults, -1 will clear and leave empty)
  setSupplyBoxLoadouts = 1;
  class SupplyBoxes {
      class CUP_BOX_TK_Ammo_F {
        TransportWeapons[] = {};
        TransportMagazines[] = {"CUP_30Rnd_762x39_AK47_TK_M:28","CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M:12","vn_rpd_125_mag:8","CUP_1Rnd_HE_GP25_M:20","1Rnd_Smoke_Grenade_shell:8","1Rnd_SmokeRed_Grenade_shell:8","CUP_FlareYellow_GP25_M:8","CUP_IlumFlareWhite_GP25_M:8","vn_f1_grenade_mag:8","SmokeShell:8","RPG7_F:4"};
        TransportItems[] = {};
      };
      class ACE_medicalSupplyCrate_advanced {
        TransportWeapons[] = {};
        TransportMagazines[] = {"ACE_elasticBandage:25","ACE_packingBandage:15","ACE_salineIV:4","ACE_salineIV_500:6","ACE_salineIV_250:8","ACE_tourniquet:10","ACE_splint:12"};
        TransportItems[] = {};
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
    #include "Loadouts\Blufor\us_mx_mtp.hpp"
  };

  // Indy factions
  #include "Loadouts\indy_gear.hpp"
  class potato_i { // Indy
    #include "Loadouts\aaf_f2000_digi.hpp"
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
