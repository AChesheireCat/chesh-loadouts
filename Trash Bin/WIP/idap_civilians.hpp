// Bonus example civilian loadouts

#include "undef.hpp" // Reset defines

#define LINKED BASE_LINKED

class CIV_F {
  class C_man_1 {
    uniform[] = {"U_C_IDAP_Man_cargo_F","U_C_IDAP_Man_Jeans_F","U_C_IDAP_Man_casual_F","U_C_IDAP_Man_Tee_F","U_C_Paramedic_01_F"};
    vest[] = {"V_Plain_medical_F"};
    headgear[] = {"H_Cap_Orange_IDAP_F","H_Cap_White_IDAP_F","H_Cap_Black_IDAP_F","H_HeadBandage_stained_F"};
    backpack[] = {"B_CivilianBackpack_01_Everyday_IDAP_F"};
    backpackItems[] = {PL_MEDIC_MEDICAL};
    weapons[] = {};
    launchers[] = {};
    handguns[] = {};
    magazines[] = {};
    items[] = {BASE_MEDICAL};
    linkedItems[] = {LINKED};
    attachments[] = {};
  };
  class C_journalist_F: C_man_1 {
    uniform[] = {"U_C_Journalist"};
    vest[] = {"V_Press_F"};
    headgear[] = {"H_Cap_press"};
  };
  class CEO: C_man_1 {
    uniform[] = {"U_Marshal"};
    headgear[] = {"H_Hat_brown"};
  };
  class C_man_hunter_1_F: C_man_1 {
    uniform[] = {"U_C_HunterBody_grn"};
    headgear[] = {"H_Booniehat_grn"};
    backpack[] = {"B_OutdoorPack_blk"};
  };
};
