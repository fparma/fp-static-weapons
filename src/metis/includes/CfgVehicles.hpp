class fp_static_metis_base : StaticATWeapon {
  displayname = "AT-9K115 'Metis'";
  model = "\FP_Static_Weapons\metis\metis.p3d";
  icon="FP_Static_Weapons\metis\icon\icomap_metis_at13_CA.paa";
  picture="\FP_Static_Weapons\metis\icon\metis_at13_CA.paa";
  UiPicture="\FP_Static_Weapons\metis\icon\metis_at13_CA.paa";
  mapSize = 1.5;

  class Turrets: Turrets {
    class MainTurret: MainTurret {
      weapons[]={"fp_static_weap_metis"};
      magazines[] = {"fp_static_mag_metis", "fp_static_mag_metis", "fp_static_mag_metis"};
      gunnerAction = "Metis_Gunner";
      gunnerOpticsModel = "\FP_Static_Weapons\metis\2Dscope_Metis";
      gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
      memoryPointsGetInGunner = "pos_gunner";
      memoryPointsGetInGunnerDir = "pos_gunner_dir";
      minTurn=-45; maxTurn=+45; initTurn=0;
      minElev=-10; maxElev=+40; initElev=0;
      ejectDeadGunner = 1;
      gunnerForceOptics = 0;
      class ViewGunner {
        initAngleX=5; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.7; minFov=0.25; maxFov=1.1;
      };
      class ViewOptics {
        initAngleX=0; minAngleX=-30; maxAngleX=+30;
        initAngleY=0; minAngleY=-100; maxAngleY=+100;
        initFov=0.078; minFov=0.078; maxFov=0.078; // 6x zoom
        visionMode[] = {"Normal","TI"};
        thermalMode[]={4,5};
      };
    };
  };
};

class fp_static_metis_b : fp_static_metis_base {
  scope = PUBLIC;
  side = WEST;
  author = AUTHOR;
  faction = FACTION_NATO;
  crew = UNIT_NATO;
  typicalCargo[] = {UNIT_NATO};
  ASSEMBLE_INFO(fp_static_bag_weapon_metis, fp_static_bag_tripod_metis)  
};

// Metis Weapon Bag
class fp_static_bag_weapon_metis : fp_static_bag_base {
  displayName = "AT-9K115 'Metis' (Weapon)";
  _generalMacro="FP_M2HBHigh_Ins";
};

// Metis Tripod
class fp_static_bag_tripod_metis : fp_static_bag_base {
  displayName = "AT-9K115 'Metis' (Tripod)";
  _generalMacro="RP_M2HBHigh_Ins";
  class assembleInfo: assembleInfo {
    primary = 1;
		displayName="AT-9K115 'Metis'";
		assembleTo="fp_static_metis_b";
		base[]={"fp_static_bag_weapon_metis"};
	};
};
