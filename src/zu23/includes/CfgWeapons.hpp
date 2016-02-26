class fp_static_weap_zu23: CannonCore {
  scope = 1;
  displayName = "23mm AA 2A14";
  nameSound = "cannon";
  cartridgePos = "cartridge_pos";
  cartridgeVel = "cartridge_dir";
  cursor = "emptyCursor";
  cursorAim = "mg";
  cursorAimOn = "";
  cursorSize = 1;
  canLock = 2;
  class gunParticles {
    class effect1 {
      positionName = "cartridge_pos";
      directionName = "cartridge_dir";
      effectName = "MachineGunCartridge1";
    };
  };
  magazines[] = {"fp_static_mag_2x50rnd_23mm_AZP85"};
  magazineReloadTime = 9;
  modes[] = {
    "manual",
    "close",
    "short",
    "medium",
    "far"
  };
  class manual : CannonCore {
    displayName= "2A14";
    autoFire = 1;
    sounds[] = {"StandardSound"};
    class StandardSound {
      weaponSoundEffect = "DefaultRifle";
      begin1[] = {"\FP_Static_Weapons\zu23\sounds\zpu_fire_3p",db12,1,1100};
      soundBegin[] = {"begin1",1};
    };
    reloadTime = 0.06;
    dispersion = 0.008;
    multiplier = 2;
    soundContinuous = 0;
    showToPlayer = 1;
    burst = 1;
    aiRateOfFire = 0.5;
    aiRateOfFireDistance = 50;
    minRange = 1;
    minRangeProbab = 0.01;
    midRange = 2;
    midRangeProbab = 0.01;
    maxRange = 3;
    maxRangeProbab = 0.01;
  };
  class close : manual {
    showToPlayer = 0;
    soundBurst = 0;
    burst = 15;
    aiRateOfFire = 0.5;
    aiRateOfFireDistance = 50;
    minRange = 0;
    minRangeProbab = 0.05;
    midRange = 300;
    midRangeProbab = 0.58;
    maxRange = 600;
    maxRangeProbab = 0.3;
  };
  class short : close {
    burst = 10;
    aiRateOfFire=2;
    aiRateOfFireDistance=300;
    minRange=400;
    minRangeProbab=0.3;
    midRange=600;
    midRangeProbab=0.58;
    maxRange=900;
    maxRangeProbab=0.3;
  };
  class medium: close {
    burst=7;
    aiRateOfFire=3;
    aiRateOfFireDistance=600;
    minRange=700;
    minRangeProbab=0.3;
    midRange=900;
    midRangeProbab=0.58;
    maxRange=1200;
    maxRangeProbab=0.3;
  };
  class far: close {
    burst=4;
    aiRateOfFire=5;
    aiRateOfFireDistance=1000;
    minRange=1000;
    minRangeProbab=0.3;
    midRange=1200;
    midRangeProbab=0.4;
    maxRange=1500;
    maxRangeProbab=0.01;
  };
};
