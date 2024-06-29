#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen1[] =
{
#endif

#if P_FAMILY_BULBASAUR
    [SPECIES_BULBASAUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 49,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("妙蛙种子"),
        .cryId = CRY_BULBASAUR,
        .natDexNum = NATIONAL_DEX_BULBASAUR,
        .categoryName = _("种子"),
        .height = 7,
        .weight = 69,
        .description = COMPOUND_STRING("在出生后的一段时间内，\n它会吸收背上种子里\n储存着的营养成长."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bulbasaur, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Bulbasaur,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Bulbasaur, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Bulbasaur),
        ICON(Bulbasaur, 4),
        .footprint = gMonFootprint_Bulbasaur,
        LEARNSETS(Bulbasaur),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_IVYSAUR}),
    },

    [SPECIES_IVYSAUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 63,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 142,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("妙蛙草"),
        .cryId = CRY_IVYSAUR,
        .natDexNum = NATIONAL_DEX_IVYSAUR,
        .categoryName = _("种子"),
        .height = 10,
        .weight = 130,
        .description = COMPOUND_STRING("当背上的花苞长大之后，\n它似乎就无法再用\n两只脚站立起来了."),
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ivysaur, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Ivysaur,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Ivysaur, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Ivysaur),
        ICON(Ivysaur, 4),
        .footprint = gMonFootprint_Ivysaur,
        LEARNSETS(Ivysaur),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_VENUSAUR}),
    },

#define VENUSAUR_MISC_INFO                                                  \
        .types = { TYPE_GRASS, TYPE_POISON },                               \
        .catchRate = 45,                                                    \
        .evYield_SpAttack = 2,                                              \
        .evYield_SpDefense = 1,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS },                \
        .bodyColor = BODY_COLOR_GREEN,                                      \
        .speciesName = _("妙蛙花"),                                       \
        .natDexNum = NATIONAL_DEX_VENUSAUR,                                 \
        .categoryName = _("种子"),                                          \
        .footprint = gMonFootprint_Venusaur,                                \
        LEARNSETS(Venusaur),                                                \
        .formSpeciesIdTable = sVenusaurFormSpeciesIdTable,                  \
        .formChangeTable = sVenusaurFormChangeTable

    [SPECIES_VENUSAUR] =
    {
        VENUSAUR_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .expYield = 236,
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .cryId = CRY_VENUSAUR,
        .height = 20,
        .weight = 1000,
        .description = COMPOUND_STRING("花朵散发出的迷人香味能\n安抚激动的心情，\n甚至消弭斗争."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        FRONT_PIC(Venusaur, 64, 64),
        FRONT_PIC_FEMALE(Venusaur, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Venusaur,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        BACK_PIC(Venusaur, 64, 48),
        BACK_PIC_FEMALE(Venusaur, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Venusaur),
        ICON(Venusaur, 4),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_VENUSAUR_MEGA] =
    {
        VENUSAUR_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 123,
        .baseSpeed     = 80,
        .baseSpAttack  = 122,
        .baseSpDefense = 120,
        .expYield = 281,
        .abilities = { ABILITY_THICK_FAT, ABILITY_THICK_FAT, ABILITY_THICK_FAT },
        .cryId = CRY_VENUSAUR_MEGA,
        .height = 24,
        .weight = 1555,
        .description = COMPOUND_STRING("In order to support its flower, which\n""has grown larger due to Mega Evolution,\n""its back and legs have become stronger."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        FRONT_PIC(VenusaurMega, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_VenusaurMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VenusaurMega, 64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        PALETTES(VenusaurMega),
        ICON(VenusaurMega, 4),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_VENUSAUR_GIGANTAMAX] =
    {
        VENUSAUR_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .expYield = 236,
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL },
        .cryId = CRY_VENUSAUR,
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING("Spits big amounts of pollen like a volcano.\n""Breathing too much of it causes fainting.\n""In battle, it swings around two thick vines\n""that can easily topple 10-story buildings."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
        FRONT_PIC(VenusaurGigantamax, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_VenusaurGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VenusaurGigantamax, 64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(VenusaurGigantamax),
        ICON(VenusaurGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_CHARMANDER
    [SPECIES_CHARMANDER] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("小火龙"),
        .cryId = CRY_CHARMANDER,
        .natDexNum = NATIONAL_DEX_CHARMANDER,
        .categoryName = _("蜥蜴"),
        .height = 6,
        .weight = 85,
        .description = COMPOUND_STRING("天生喜欢热热的东西.\n据说当它被雨淋湿的时候，\n尾巴的末端会冒出烟来."),
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Charmander, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Charmander,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Charmander, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Charmander),
        ICON(Charmander, 0),
        .footprint = gMonFootprint_Charmander,
        LEARNSETS(Charmander),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_CHARMELEON}),
    },

    [SPECIES_CHARMELEON] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("火恐龙"),
        .cryId = CRY_CHARMELEON,
        .natDexNum = NATIONAL_DEX_CHARMELEON,
        .categoryName = _("火焰"),
        .height = 11,
        .weight = 190,
        .description = COMPOUND_STRING("挥动燃烧着火焰的尾巴，\n用锋利的爪子撕裂对手.\n性格十分粗暴."),
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Charmeleon, 56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Charmeleon,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        BACK_PIC(Charmeleon, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Charmeleon),
        ICON(Charmeleon, 0),
        .footprint = gMonFootprint_Charmeleon,
        LEARNSETS(Charmeleon),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_CHARIZARD}),
    },

#define CHARIZARD_MISC_INFO                                             \
        .catchRate = 45,                                                \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON },           \
        .speciesName = _("喷火龙"),                                  \
        .natDexNum = NATIONAL_DEX_CHARIZARD,                            \
        .categoryName = _("火焰"),                                     \
        .footprint = gMonFootprint_Charizard,                           \
        LEARNSETS(Charizard),                                           \
        .formSpeciesIdTable = sCharizardFormSpeciesIdTable,             \
        .formChangeTable = sCharizardFormChangeTable

    [SPECIES_CHARIZARD] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .expYield = 240,
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .cryId = CRY_CHARIZARD,
        .height = 17,
        .weight = 905,
        .description = COMPOUND_STRING("能够喷出猛烈的火焰，\n仿佛连岩石都能烤焦.\n有时会引发森林火灾."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(Charizard, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Charizard,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Charizard, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Charizard),
        ICON(Charizard, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_CHARIZARD_MEGA_X] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 130,
        .baseDefense   = 111,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_DRAGON },
        .expYield = 285,
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .bodyColor = BODY_COLOR_BLACK,
        .cryId = CRY_CHARIZARD_MEGA_X,
        .height = 17,
        .weight = 1105,
        .description = COMPOUND_STRING("The overwhelming power that fills its\n""entire body causes it to turn black\n""and creates intense blue flames."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(CharizardMegaX, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CharizardMegaX, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(CharizardMegaX),
        ICON(CharizardMegaX, 0),
        .isMegaEvolution = TRUE,
    },

    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 104,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 159,
        .baseSpDefense = 115,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .expYield = 285,
        .abilities = { ABILITY_DROUGHT, ABILITY_DROUGHT, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_RED,
        .cryId = CRY_CHARIZARD_MEGA_Y,
        .height = 17,
        .weight = 1005,
        .description = COMPOUND_STRING("Its bond with its Trainer is the source\n""of its power. It boasts speed and\n""maneuverability greater than that of a\n""jet fighter."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(CharizardMegaY, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CharizardMegaY, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(CharizardMegaY),
        ICON(CharizardMegaY, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_CHARIZARD_GIGANTAMAX] =
    {
        CHARIZARD_MISC_INFO,
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .expYield = 240,
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_RED,
        .cryId = CRY_CHARIZARD,
        .height = 280,
        .weight = 0,
        .description = COMPOUND_STRING("The flame inside its body burns\n""hotter than 3,600 degrees Fahrenheit.\n""When Charizard roars, that\n""temperature climbs even higher."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
        FRONT_PIC(CharizardGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CharizardGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CharizardGigantamax, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CharizardGigantamax),
        ICON(CharizardGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_SQUIRTLE
    [SPECIES_SQUIRTLE] =
    {
        .baseHP        = 44,
        .baseAttack    = 48,
        .baseDefense   = 65,
        .baseSpeed     = 43,
        .baseSpAttack  = 50,
        .baseSpDefense = 64,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 63,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("杰尼龟"),
        .cryId = CRY_SQUIRTLE,
        .natDexNum = NATIONAL_DEX_SQUIRTLE,
        .categoryName = _("小龟"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING("当它把长长的脖子\n缩回壳里时，会顺势发射\n出力道强劲的水枪."),
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Squirtle, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Squirtle,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        BACK_PIC(Squirtle, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Squirtle),
        ICON(Squirtle, 0),
        .footprint = gMonFootprint_Squirtle,
        LEARNSETS(Squirtle),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_WARTORTLE}),
    },

    [SPECIES_WARTORTLE] =
    {
        .baseHP        = 59,
        .baseAttack    = 63,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("卡咪龟"),
        .cryId = CRY_WARTORTLE,
        .natDexNum = NATIONAL_DEX_WARTORTLE,
        .categoryName = _("龟"),
        .height = 10,
        .weight = 225,
        .description = COMPOUND_STRING("会灵巧地摆动自己\n毛茸茸的耳朵和尾巴，\n借此在水中保持平衡."),
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wartortle, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Wartortle,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Wartortle, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Wartortle),
        ICON(Wartortle, 2),
        .footprint = gMonFootprint_Wartortle,
        LEARNSETS(Wartortle),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_BLASTOISE}),
    },

#define BLASTOISE_MISC_INFO                                             \
        .types = { TYPE_WATER, TYPE_WATER },                            \
        .catchRate = 45,                                                \
        .evYield_SpDefense = 3,                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },          \
        .bodyColor = BODY_COLOR_BLUE,                                   \
        .speciesName = _("爆炎"),                                  \
        .natDexNum = NATIONAL_DEX_BLASTOISE,                            \
        .categoryName = _("龟甲"),                                 \
        .footprint = gMonFootprint_Blastoise,                           \
        LEARNSETS(Blastoise),                                           \
        .formSpeciesIdTable = sBlastoiseFormSpeciesIdTable,             \
        .formChangeTable = sBlastoiseFormChangeTable

    [SPECIES_BLASTOISE] =
    {
        BLASTOISE_MISC_INFO,
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .expYield = 239,
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .cryId = CRY_BLASTOISE,
        .height = 16,
        .weight = 855,
        .description = COMPOUND_STRING("身体很重，\n压住对手后就能让对手昏厥.\n遇到危险时会躲进壳里."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Blastoise, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Blastoise,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 20,
        BACK_PIC(Blastoise, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Blastoise),
        ICON(Blastoise, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BLASTOISE_MEGA] =
    {
        BLASTOISE_MISC_INFO,
        .baseHP        = 79,
        .baseAttack    = 103,
        .baseDefense   = 120,
        .baseSpeed     = 78,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .expYield = 284,
        .abilities = { ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER },
        .cryId = CRY_BLASTOISE_MEGA,
        .height = 16,
        .weight = 1011,
        .description = COMPOUND_STRING("The cannon on its back is as powerful\n""as a tank gun. Its tough legs and back\n""enable it to withstand the recoil from\n""firing the cannon."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(BlastoiseMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_BlastoiseMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(BlastoiseMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(BlastoiseMega),
        ICON(BlastoiseMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_BLASTOISE_GIGANTAMAX] =
    {
        BLASTOISE_MISC_INFO,
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .expYield = 239,
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH },
        .cryId = CRY_BLASTOISE,
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING("It's not very good at precision\n""shooting. When attacking, it just fires\n""its 31 cannons over and over and\n""over."),
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(BlastoiseGigantamax, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_BlastoiseGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(BlastoiseGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(BlastoiseGigantamax),
        ICON(BlastoiseGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_CATERPIE
    [SPECIES_CATERPIE] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 255,
        .expYield = 39,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("绿毛虫"),
        .cryId = CRY_CATERPIE,
        .natDexNum = NATIONAL_DEX_CATERPIE,
        .categoryName = _("虫宝宝"),
        .height = 3,
        .weight = 29,
        .description = COMPOUND_STRING("会从头部的触角中释放出\n强烈的臭气，以此\n来赶走敌人保护自己."),
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Caterpie, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Caterpie,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Caterpie, 48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Caterpie),
        ICON(Caterpie, 1),
        .footprint = gMonFootprint_Caterpie,
        LEARNSETS(Caterpie),
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_METAPOD}),
    },

    [SPECIES_METAPOD] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("铁甲蛹"),
        .cryId = CRY_METAPOD,
        .natDexNum = NATIONAL_DEX_METAPOD,
        .categoryName = _("蛹"),
        .height = 7,
        .weight = 99,
        .description = COMPOUND_STRING("虽然有坚硬的外壳，\n因为壳里的身体很软，\n所以无法抵抗强力的攻击."),
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Metapod, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Metapod,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Metapod, 40, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Metapod),
        ICON(Metapod, 1),
        .footprint = gMonFootprint_Metapod,
        LEARNSETS(Metapod),
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BUTTERFREE}),
    },

#define BUTTERFREE_MISC_INFO                                                        \
        .baseHP        = 60,                                                        \
        .baseAttack    = 45,                                                        \
        .baseDefense   = 50,                                                        \
        .baseSpeed     = 70,                                                        \
        .baseSpDefense = 80,                                                        \
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 90 : 80,                        \
        .types = { TYPE_BUG, TYPE_FLYING },                                         \
        .catchRate = 45,                                                            \
        .expYield = 178,                                                            \
        .evYield_SpAttack = 2,                                                      \
        .evYield_SpDefense = 1,                                                     \
        .itemRare = ITEM_SILVER_POWDER,                                             \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 15,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },                              \
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_TINTED_LENS },  \
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .speciesName = _("巴大蝶"),                                             \
        .cryId = CRY_BUTTERFREE,                                                    \
        .natDexNum = NATIONAL_DEX_BUTTERFREE,                                       \
        .categoryName = _("蝴蝶"),                                             \
        .footprint = gMonFootprint_Butterfree,                                      \
        LEARNSETS(Butterfree),                                                      \
        .formSpeciesIdTable = sButterfreeFormSpeciesIdTable,                        \
        .formChangeTable = sButterfreeFormChangeTable

    [SPECIES_BUTTERFREE] =
    {
        BUTTERFREE_MISC_INFO,
        .height = 11,
        .weight = 320,
        .description = COMPOUND_STRING("当它飞快地扑打翅膀，\n带有剧毒的鳞粉就会\n随着风向这里飘过来."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Butterfree, 64, 56),
        FRONT_PIC_FEMALE(Butterfree, 64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Butterfree,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 12,
        BACK_PIC(Butterfree, 64, 56),
        BACK_PIC_FEMALE(Butterfree, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Butterfree),
        ICON(Butterfree, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_BUTTERFREE_GIGANTAMAX] =
    {
        BUTTERFREE_MISC_INFO,
        .height = 170,
        .weight = 0,
        .description = COMPOUND_STRING("Once it has opponents trapped in a\n""tornado that could blow away a 10-\n""ton truck, it finishes them off with\n""its poisonous scales."),
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ButterfreeGigantamax, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_ButterfreeGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(ButterfreeGigantamax, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ButterfreeGigantamax),
        ICON(ButterfreeGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CATERPIE

#if P_FAMILY_WEEDLE
    [SPECIES_WEEDLE] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 255,
        .expYield = 39,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("杂草"),
        .cryId = CRY_WEEDLE,
        .natDexNum = NATIONAL_DEX_WEEDLE,
        .categoryName = _("毛毛虫"),
        .height = 3,
        .weight = 32,
        .description = COMPOUND_STRING("头上长有尖锐的针.\n它喜欢藏在森林或\n草丛里大量吞食树叶."),
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Weedle, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Weedle,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        BACK_PIC(Weedle, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Weedle),
        ICON(Weedle, 2),
        .footprint = gMonFootprint_Weedle,
        LEARNSETS(Weedle),
        .evolutions = EVOLUTION({EVO_LEVEL, 7, SPECIES_KAKUNA}),
    },

    [SPECIES_KAKUNA] =
    {
        .baseHP        = 45,
        .baseAttack    = 25,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("铁壳蛹"),
        .cryId = CRY_KAKUNA,
        .natDexNum = NATIONAL_DEX_KAKUNA,
        .categoryName = _("蛹"),
        .height = 6,
        .weight = 100,
        .description = COMPOUND_STRING("虽然几乎动也动不了，\n但是如果遇到了危险，\n有时似乎会竖起毒刺来反抗."),
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kakuna, 24, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Kakuna,
        .frontAnimId = ANIM_GLOW_ORANGE,
        .frontAnimDelay = 20,
        BACK_PIC(Kakuna, 32, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Kakuna),
        ICON(Kakuna, 2),
        .footprint = gMonFootprint_Kakuna,
        LEARNSETS(Kakuna),
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_BEEDRILL}),
    },

#define BEEDRILL_ATTACK (P_UPDATED_STATS >= GEN_6 ? 90 : 80)

#define BEEDRILL_MISC_INFO                                  \
        .types = { TYPE_BUG, TYPE_POISON },                 \
        .catchRate = 45,                                    \
        .evYield_Attack = 2,                                \
        .evYield_SpDefense = 1,                             \
        .itemRare = ITEM_POISON_BARB,                       \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 15,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },      \
        .bodyColor = BODY_COLOR_YELLOW,                     \
        .speciesName = _("大针蜂"),                       \
        .natDexNum = NATIONAL_DEX_BEEDRILL,                 \
        .categoryName = _("毒蜂"),                    \
        .footprint = gMonFootprint_Beedrill,                \
        LEARNSETS(Beedrill),                                \
        .formSpeciesIdTable = sBeedrillFormSpeciesIdTable,  \
        .formChangeTable = sBeedrillFormChangeTable

    [SPECIES_BEEDRILL] =
    {
        BEEDRILL_MISC_INFO,
        .baseHP        = 65,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .baseAttack    = BEEDRILL_ATTACK,
        .expYield = 178,
        .abilities = { ABILITY_SWARM, ABILITY_NONE, ABILITY_SNIPER },
        .cryId = CRY_BEEDRILL,
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING("它会用双手和尾部的3根\n毒针反复刺伤敌人."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Beedrill, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Beedrill,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 9,
        BACK_PIC(Beedrill, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Beedrill),
        ICON(Beedrill, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_BEEDRILL_MEGA] =
    {
        BEEDRILL_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = BEEDRILL_ATTACK + 60,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 15,
        .baseSpDefense = 80,
        .expYield = 223,
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY },
        .cryId = CRY_BEEDRILL_MEGA,
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING("Its legs have become poison stingers.\n""It stabs its prey repeatedly with the\n""stingers on its limbs, dealing the final\n""blow with the stinger on its rear."),
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(BeedrillMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_BeedrillMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(BeedrillMega, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(BeedrillMega),
        ICON(BeedrillMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_WEEDLE

#if P_FAMILY_PIDGEY
    [SPECIES_PIDGEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 56,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 50,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("波波"),
        .cryId = CRY_PIDGEY,
        .natDexNum = NATIONAL_DEX_PIDGEY,
        .categoryName = _("小鸟"),
        .height = 3,
        .weight = 18,
        .description = COMPOUND_STRING("性格沉着冷静，即使受到\n攻击也很少反击，只会朝\n对手扬起沙子保护自己."),
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pidgey, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pidgey,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Pidgey, 56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Pidgey),
        ICON(Pidgey, 0),
        .footprint = gMonFootprint_Pidgey,
        LEARNSETS(Pidgey),
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_PIDGEOTTO}),
    },

    [SPECIES_PIDGEOTTO] =
    {
        .baseHP        = 63,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 71,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 120,
        .expYield = 122,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("比比鸟"),
        .cryId = CRY_PIDGEOTTO,
        .natDexNum = NATIONAL_DEX_PIDGEOTTO,
        .categoryName = _("鸟"),
        .height = 11,
        .weight = 300,
        .description = COMPOUND_STRING("拥有超群的体力，而且\n飞翔范围广，经常飞到\n很远的地方寻找食物."),
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pidgeotto, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Pidgeotto,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 25,
        BACK_PIC(Pidgeotto, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Pidgeotto),
        ICON(Pidgeotto, 0),
        .footprint = gMonFootprint_Pidgeotto,
        LEARNSETS(Pidgeotto),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_PIDGEOT}),
    },

#define PIDGEOT_SPEED (P_UPDATED_STATS >= GEN_6 ? 101 : 91)

#define PIDGEOT_MISC_INFO                                   \
        .types = { TYPE_NORMAL, TYPE_FLYING },              \
        .catchRate = 45,                                    \
        .evYield_Speed = 3,                                 \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 15,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },\
        .bodyColor = BODY_COLOR_BROWN,                      \
        .speciesName = _("大比鸟"),                        \
        .natDexNum = NATIONAL_DEX_PIDGEOT,                  \
        .categoryName = _("鸟"),                          \
        .footprint = gMonFootprint_Pidgeot,                 \
        LEARNSETS(Pidgeot),                                 \
        .formSpeciesIdTable = sPidgeotFormSpeciesIdTable,   \
        .formChangeTable = sPidgeotFormChangeTable

    [SPECIES_PIDGEOT] =
    {
        PIDGEOT_MISC_INFO,
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .baseSpeed     = PIDGEOT_SPEED,
        .expYield = 216,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS },
        .cryId = CRY_PIDGEOT,
        .height = 15,
        .weight = 395,
        .description = COMPOUND_STRING("以2马赫的飞行速度来觅食.\n它巨大的爪子是非常\n令人惧怕的武器."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pidgeot, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Pidgeot,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 5,
        BACK_PIC(Pidgeot, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Pidgeot),
        ICON(Pidgeot, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_PIDGEOT_MEGA] =
    {
        PIDGEOT_MISC_INFO,
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = PIDGEOT_SPEED + 20,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .expYield = 261,
        .abilities = { ABILITY_NO_GUARD, ABILITY_NO_GUARD, ABILITY_NO_GUARD },
        .cryId = CRY_PIDGEOT_MEGA,
        .height = 22,
        .weight = 505,
        .description = COMPOUND_STRING("With its muscular strength now greatly\n""increased, it can fly continuously\n""for two weeks without resting."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PidgeotMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_PidgeotMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(PidgeotMega, 64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(PidgeotMega),
        ICON(PidgeotMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif
#endif //P_FAMILY_PIDGEY

#if P_FAMILY_RATTATA
#define RATTATA_FAMILY_MISC_INFO                            \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 15,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }

#define RATTATA_MISC_INFO                                   \
        .baseHP        = 30,                                \
        .baseAttack    = 56,                                \
        .baseDefense   = 35,                                \
        .baseSpeed     = 72,                                \
        .baseSpAttack  = 25,                                \
        .baseSpDefense = 35,                                \
        .catchRate = 255,                                   \
        .expYield = 51,                                     \
        .evYield_Speed = 1,                                 \
        .speciesName = _("小拉达"),                        \
        .cryId = CRY_RATTATA,                               \
        .natDexNum = NATIONAL_DEX_RATTATA,                  \
        .categoryName = _("鼠"),                         \
        .footprint = gMonFootprint_Rattata,                 \
        .formSpeciesIdTable = sRattataFormSpeciesIdTable

#define RATICATE_MISC_INFO                  \
        .catchRate = 127,                   \
        .expYield = 145,                    \
        .evYield_Speed = 2,                 \
        .speciesName = _("拉达"),       \
        .cryId = CRY_RATICATE,              \
        .natDexNum = NATIONAL_DEX_RATICATE, \
        .categoryName = _("鼠"),         \
        .height = 7,                        \
        .footprint = gMonFootprint_Raticate,\
        .formSpeciesIdTable = sRaticateFormSpeciesIdTable

    [SPECIES_RATTATA] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATTATA_MISC_INFO,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_PURPLE,
        .height = 3,
        .weight = 35,
        .description = COMPOUND_STRING("门牙会终生生长.\n但要是长得太长，\n就会因无法进食而饿死."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rattata, 40, 40),
        FRONT_PIC_FEMALE(Rattata, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Rattata,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Rattata, 64, 56),
        BACK_PIC_FEMALE(Rattata, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Rattata),
        ICON(Rattata, 2),
        LEARNSETS(Rattata),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_RATICATE}),
    },

    [SPECIES_RATICATE] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATICATE_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 81,
        .baseDefense   = 60,
        .baseSpeed     = 97,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_BROWN,
        .weight = 185,
        .description = COMPOUND_STRING("它的后脚上长着小蹼，以便\n它在水中游泳寻找食物."),
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Raticate, 64, 56),
        FRONT_PIC_FEMALE(Raticate, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Raticate,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        BACK_PIC(Raticate, 64, 48),
        BACK_PIC_FEMALE(Raticate, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Raticate),
        ICON(Raticate, 2),
        LEARNSETS(Raticate),
    },

#if P_ALOLAN_FORMS
    [SPECIES_RATTATA_ALOLAN] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATTATA_MISC_INFO,
        .types = { TYPE_DARK, TYPE_NORMAL },
        .itemRare = ITEM_PECHA_BERRY,
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .height = 3,
        .weight = 38,
        .description = COMPOUND_STRING("With its incisors, it gnaws through doors\n""and infiltrates people's homes.\n""Then, with a twitch of its whiskers,\n""it steals whatever food it finds."),
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(RattataAlolan, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_RattataAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(RattataAlolan, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RattataAlolan),
        ICON(RattataAlolan, 2),
        LEARNSETS(RattataAlolan),
        .isAlolanForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL_NIGHT, 20, SPECIES_RATICATE_ALOLAN}),
    },

    [SPECIES_RATICATE_ALOLAN] =
    {
        RATTATA_FAMILY_MISC_INFO,
        RATICATE_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_NORMAL },
        .itemRare = ITEM_PECHA_BERRY,
        .abilities = { ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT },
        .bodyColor = BODY_COLOR_BLACK,
        .weight = 255,
        .description = COMPOUND_STRING("It forms a group of Rattata, which it \n""assumes command of. Each group\n""has its own territory, and disputes\n""over food happen often."),
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(RaticateAlolan, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_RaticateAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(RaticateAlolan, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RaticateAlolan),
        ICON(RaticateAlolan, 2),
        LEARNSETS(RaticateAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_RATTATA

#if P_FAMILY_SPEAROW
    [SPECIES_SPEAROW] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 70,
        .baseSpAttack  = 31,
        .baseSpDefense = 31,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 52,
        .evYield_Speed = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("烈雀"),
        .cryId = CRY_SPEAROW,
        .natDexNum = NATIONAL_DEX_SPEAROW,
        .categoryName = _("小鸟"),
        .height = 3,
        .weight = 20,
        .description = COMPOUND_STRING("翅膀短，无法飞远.\n会跳来跳去忙个不停地\n啄食虫宝可梦."),
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Spearow, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Spearow,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Spearow, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Spearow),
        ICON(Spearow, 0),
        .footprint = gMonFootprint_Spearow,
        LEARNSETS(Spearow),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_FEAROW}),
    },

    [SPECIES_FEAROW] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 61,
        .baseSpDefense = 61,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 155,
        .evYield_Speed = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("大嘴雀"),
        .cryId = CRY_FEAROW,
        .natDexNum = NATIONAL_DEX_FEAROW,
        .categoryName = _("鸟嘴"),
        .height = 12,
        .weight = 380,
        .description = COMPOUND_STRING("经查证，\n在遥远的太古时代壁画中\n描绘有形似大嘴雀的宝可梦."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Fearow, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Fearow,
        .frontAnimId = ANIM_FIGURE_8,
        .frontAnimDelay = 2,
        .enemyMonElevation = 6,
        BACK_PIC(Fearow, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Fearow),
        ICON(Fearow, 0),
        .footprint = gMonFootprint_Fearow,
        LEARNSETS(Fearow),
    },
#endif //P_FAMILY_SPEAROW

#if P_FAMILY_EKANS
    [SPECIES_EKANS] =
    {
        .baseHP        = 35,
        .baseAttack    = 60,
        .baseDefense   = 44,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 54,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("阿柏蛇"),
        .cryId = CRY_EKANS,
        .natDexNum = NATIONAL_DEX_EKANS,
        .categoryName = _("蛇"),
        .height = 20,
        .weight = 69,
        .description = COMPOUND_STRING("它喜食鸟宝可梦的蛋.\n因为不咀嚼就整个吞下，\n所以有时会被噎住而昏倒."),
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ekans, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Ekans,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        BACK_PIC(Ekans, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Ekans),
        ICON(Ekans, 2),
        .footprint = gMonFootprint_Ekans,
        LEARNSETS(Ekans),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_ARBOK}),
    },

    [SPECIES_ARBOK] =
    {
        .baseHP        = 60,
        .baseAttack    = P_UPDATED_STATS >= GEN_7 ? 95 : 85,
        .baseDefense   = 69,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 79,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 90,
        .expYield = 157,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("阿柏怪"),
        .cryId = CRY_ARBOK,
        .natDexNum = NATIONAL_DEX_ARBOK,
        .categoryName = _("眼镜蛇"),
        .height = 35,
        .weight = 650,
        .description = COMPOUND_STRING("根据最新的研究显示，\n它们腹部的花纹有着\n20种以上不同的图案."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(Arbok, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Arbok,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Arbok, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Arbok),
        ICON(Arbok, 2),
        .footprint = gMonFootprint_Arbok,
        LEARNSETS(Arbok),
    },
#endif //P_FAMILY_EKANS

#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS
#define PICHU_MISC_INFO                                                                 \
        .baseHP        = 20,                                                            \
        .baseAttack    = 40,                                                            \
        .baseDefense   = 15,                                                            \
        .baseSpeed     = 60,                                                            \
        .baseSpAttack  = 35,                                                            \
        .baseSpDefense = 35,                                                            \
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },                                      \
        .catchRate = 190,                                                               \
        .expYield = 41,                                                                 \
        .evYield_Speed = 1,                                                             \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 10,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },           \
        .bodyColor = BODY_COLOR_YELLOW,                                                 \
        .speciesName = _("皮丘"),                                                      \
        .cryId = CRY_PICHU,                                                             \
        .natDexNum = NATIONAL_DEX_PICHU,                                                \
        .categoryName = _("小老鼠"),                                                \
        .height = 3,                                                                    \
        .weight = 20,                                                                   \
        .description = gPichuPokedexText,                                               \
        .pokemonScale = 508,                                                            \
        .pokemonOffset = 20,                                                            \
        .trainerScale = 256,                                                            \
        .trainerOffset = 0,                                                             \
        .footprint = gMonFootprint_Pichu,                                               \
        LEARNSETS(Pichu),                                                               \
        .formSpeciesIdTable = sPichuFormSpeciesIdTable

    [SPECIES_PICHU] =
    {
        PICHU_MISC_INFO,
        FRONT_PIC(Pichu, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Pichu,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        BACK_PIC(Pichu, 48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Pichu),
        ICON(Pichu, 1),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_PIKACHU}),
    },

    [SPECIES_PICHU_SPIKY_EARED] =
    {
        PICHU_MISC_INFO,
        .noFlip = TRUE,
        FRONT_PIC(PichuSpikyEared, 32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_PichuSpikyEared,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PichuSpikyEared, 48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PichuSpikyEared),
        ICON(PichuSpikyEared, 1),
    },
#endif //P_GEN_2_CROSS_EVOS

#define PIKACHU_MISC_INFO                                                       \
        .baseHP        = 35,                                                    \
        .baseAttack    = 55,                                                    \
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 40 : 30,                    \
        .baseSpeed     = 90,                                                    \
        .baseSpAttack  = 50,                                                    \
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 50 : 40,                    \
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },                              \
        .catchRate = 190,                                                       \
        .expYield = 112,                                                        \
        .evYield_Speed = 2,                                                     \
        .itemRare = ITEM_LIGHT_BALL,                                            \
        .eggCycles = 10,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },   \
        .bodyColor = BODY_COLOR_YELLOW,                                         \
        .speciesName = _("皮卡丘"),                                            \
        .cryId = CRY_PIKACHU,                                                   \
        .natDexNum = NATIONAL_DEX_PIKACHU,                                      \
        .categoryName = _("鼠"),                                             \
        .footprint = gMonFootprint_Pikachu,                                     \
        LEARNSETS(Pikachu),                                                     \
        .formSpeciesIdTable = sPikachuFormSpeciesIdTable

#define PIKACHU_REGULAR_SIZE_INFO   \
        .height = 4,                \
        .weight = 60,               \
        .pokemonScale = 479,        \
        .pokemonOffset = 19,        \
        .trainerScale = 256,        \
        .trainerOffset = 0

    [SPECIES_PIKACHU] =
    {
        PIKACHU_MISC_INFO,
        PIKACHU_REGULAR_SIZE_INFO,
        .genderRatio = PERCENT_FEMALE(50),
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .description = gPikachuPokedexText,
        FRONT_PIC(Pikachu, 48, 48),
        FRONT_PIC_FEMALE(Pikachu, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Pikachu,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 25,
        BACK_PIC(Pikachu, 64, 56),
        BACK_PIC_FEMALE(Pikachu, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Pikachu),
        ICON(Pikachu, 2),
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        ICON_FEMALE(Pikachu, 2),
    #endif
        .formChangeTable = sPikachuFormChangeTable,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU},
                                {EVO_NONE, 0, SPECIES_RAICHU_ALOLAN}),
    },

#if P_COSPLAY_PIKACHU_FORMS
#define PIKACHU_COSPLAY_MISC_INFO                                   \
    PIKACHU_MISC_INFO,                                              \
    PIKACHU_REGULAR_SIZE_INFO,                                      \
    .genderRatio = MON_FEMALE,                                      \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
    .description = gPikachuPokedexText

    [SPECIES_PIKACHU_COSPLAY]   =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuCosplay, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuCosplay,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuCosplay, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuCosplay),
        ICON(PikachuCosplay, 2),
    },

    [SPECIES_PIKACHU_ROCK_STAR] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuRockStar, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuRockStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuRockStar, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuRockStar),
        ICON(PikachuRockStar, 1),
    },

    [SPECIES_PIKACHU_BELLE] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        .noFlip = TRUE,
        FRONT_PIC(PikachuBelle, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuBelle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuBelle, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuBelle),
        ICON(PikachuBelle, 0),
    },

    [SPECIES_PIKACHU_POP_STAR] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        .noFlip = TRUE,
        FRONT_PIC(PikachuPopStar, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPopStar,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuPopStar, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuPopStar),
        ICON(PikachuPopStar, 0),
    },

    [SPECIES_PIKACHU_PH_D] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuPhD, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPhD,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuPhD, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuPhD),
        ICON(PikachuPhD, 1),
    },

    [SPECIES_PIKACHU_LIBRE] =
    {
        PIKACHU_COSPLAY_MISC_INFO,
        FRONT_PIC(PikachuLibre, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuLibre,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuLibre, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuLibre),
        ICON(PikachuLibre, 0),
    },

#endif //P_COSPLAY_PIKACHU_FORMS

#if P_CAP_PIKACHU_FORMS

#define PIKACHU_CAP_MISC_INFO                                       \
    PIKACHU_MISC_INFO,                                              \
    PIKACHU_REGULAR_SIZE_INFO,                                      \
    .genderRatio = MON_MALE,                                        \
    .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED }

    [SPECIES_PIKACHU_ORIGINAL_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .noFlip = TRUE,
        .description = COMPOUND_STRING("This Pikachu wears its partner's cap, which\n""is proof of the strong bond Pikachu and\n""its partner formed during adventures\n""across many different regions."),
        FRONT_PIC(PikachuOriginalCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuOriginalCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuOriginalCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuOriginalCap),
        ICON(PikachuOriginalCap, 0),
    },

    [SPECIES_PIKACHU_HOENN_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING("This Pikachu wears its partner's cap, which\n""is proof of the strong bond Pikachu and\n""its partner formed during adventures\n""across the Hoenn region together."),
        FRONT_PIC(PikachuHoennCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuHoennCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuHoennCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuHoennCap),
        ICON(PikachuHoennCap, 0),
    },

    [SPECIES_PIKACHU_SINNOH_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING("This Pikachu wears its partner's cap, which\n""is proof of the strong bond Pikachu and\n""its partner formed during adventures\n""across the Sinnoh region together."),
        FRONT_PIC(PikachuSinnohCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuSinnohCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuSinnohCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuSinnohCap),
        ICON(PikachuSinnohCap, 0),
    },

    [SPECIES_PIKACHU_UNOVA_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING("This Pikachu wears its partner's cap, which\n""is proof of the strong bond Pikachu and\n""its partner formed during adventures\n""across the Unova region together."),
        FRONT_PIC(PikachuUnovaCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuUnovaCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuUnovaCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuUnovaCap),
        ICON(PikachuUnovaCap, 0),
    },

    [SPECIES_PIKACHU_KALOS_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING("This Pikachu wears its partner's cap, which\n""is proof of the strong bond Pikachu and\n""its partner formed during adventures\n""across the Kalos region together."),
        FRONT_PIC(PikachuKalosCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuKalosCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuKalosCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuKalosCap),
        ICON(PikachuKalosCap, 0),
    },

    [SPECIES_PIKACHU_ALOLA_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING("This Pikachu wears its partner's cap, which\n""is proof of the strong bond Pikachu and\n""its partner formed during adventures\n""across the Alola region together."),
        FRONT_PIC(PikachuAlolaCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuAlolaCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuAlolaCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuAlolaCap),
        ICON(PikachuAlolaCap, 0),
    },

    [SPECIES_PIKACHU_PARTNER_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .noFlip = TRUE,
        .description = COMPOUND_STRING("This Pikachu wears its partner's cap, which\n""is proof of the strong bond Pikachu and\n""its partner formed as the two overcame\n""many hardships together."),
        FRONT_PIC(PikachuPartnerCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuPartnerCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuPartnerCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuPartnerCap),
        ICON(PikachuPartnerCap, 0),
    },

    [SPECIES_PIKACHU_WORLD_CAP] =
    {
        PIKACHU_CAP_MISC_INFO,
        .description = COMPOUND_STRING("This Pikachu wears its partner's cap, which\n""is proof of the strong bond Pikachu and\n""its partner formed during adventures\n""across the world together."),
        FRONT_PIC(PikachuWorldCap, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_PikachuWorldCap,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuWorldCap, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuWorldCap),
        ICON(PikachuWorldCap, 0),
    },

#endif //P_CAP_PIKACHU_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_PIKACHU_GIGANTAMAX] =
    {
        PIKACHU_MISC_INFO,
        .genderRatio = PERCENT_FEMALE(50),
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },
        .height = 210,
        .weight = 0,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .description = COMPOUND_STRING("When it smashes its opponents with\n""its bolt-shaped tail, it delivers a\n""surge of electricity equivalent to a\n""lightning strike."),
        FRONT_PIC(PikachuGigantamax, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_PikachuGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PikachuGigantamax, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PikachuGigantamax),
        ICON(PikachuGigantamax, 2),
        .formChangeTable = sPikachuFormChangeTable,
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

#define RAICHU_SPEED (P_UPDATED_STATS >= GEN_6 ? 110 : 100)

#define RAICHU_MISC_INFO                                    \
        .catchRate = 75,                                    \
        .expYield = 218,                                    \
        .evYield_Speed = 3,                                 \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 10,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },  \
        .speciesName = _("雷丘"),                         \
        .cryId = CRY_RAICHU,                                \
        .natDexNum = NATIONAL_DEX_RAICHU,                   \
        .categoryName = _("鼠"),                         \
        .footprint = gMonFootprint_Raichu,                  \
        .formSpeciesIdTable = sRaichuFormSpeciesIdTable

    [SPECIES_RAICHU] =
    {
        RAICHU_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 55,
        .baseSpeed     = RAICHU_SPEED,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 8,
        .weight = 300,
        .description = COMPOUND_STRING("如果电囊空了，\n它就会直直地竖起尾巴，\n收集空气中的电流."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Raichu, 64, 64),
        FRONT_PIC_FEMALE(Raichu, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Raichu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Raichu, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Raichu),
        ICON(Raichu, 0),
        LEARNSETS(Raichu),
    },

#if P_ALOLAN_FORMS
    [SPECIES_RAICHU_ALOLAN] =
    {
        RAICHU_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = RAICHU_SPEED,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_PSYCHIC },
        .abilities = { ABILITY_SURGE_SURFER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .isAlolanForm = TRUE,
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING("It uses psychokinesis to control\n""electricity. It focuses psychic energy\n""into its tail and rides it like it's surfing.\n""Another name for this Pokémon is 'hodad'."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(RaichuAlolan, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RaichuAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(RaichuAlolan, 56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RaichuAlolan),
        ICON(RaichuAlolan, 2),
        LEARNSETS(RaichuAlolan),
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
#define SANDSHREW_FAMILY_MISC_INFO                          \
        .itemRare = ITEM_GRIP_CLAW,                         \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }

#define SANDSHREW_MISC_INFO                                 \
        .catchRate = 255,                                   \
        .expYield = 60,                                     \
        .evYield_Defense = 1,                               \
        .speciesName = _("穿山鼠"),                      \
        .cryId = CRY_SANDSHREW,                             \
        .natDexNum = NATIONAL_DEX_SANDSHREW,                \
        .categoryName = _("鼠"),                         \
        .footprint = gMonFootprint_Sandshrew,               \
        .formSpeciesIdTable = sSandshrewFormSpeciesIdTable, \
        SANDSHREW_FAMILY_MISC_INFO

#define SANDSLASH_MISC_INFO                                 \
        .catchRate = 90,                                    \
        .expYield = 158,                                    \
        .evYield_Defense = 2,                               \
        .speciesName = _("穿山王"),                      \
        .cryId = CRY_SANDSLASH,                             \
        .natDexNum = NATIONAL_DEX_SANDSLASH,                \
        .categoryName = _("鼠"),                         \
        .footprint = gMonFootprint_Sandslash,               \
        .formSpeciesIdTable = sSandslashFormSpeciesIdTable, \
        SANDSHREW_FAMILY_MISC_INFO

    [SPECIES_SANDSHREW] =
    {
        SANDSHREW_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 6,
        .weight = 120,
        .description = COMPOUND_STRING("身体很干燥.\n但据说在夜里降温时，\n它的表皮上会有露水凝结."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sandshrew, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Sandshrew,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST_SHORT,
        BACK_PIC(Sandshrew, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Sandshrew),
        ICON(Sandshrew, 2),
        LEARNSETS(Sandshrew),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_SANDSLASH}),
    },

    [SPECIES_SANDSLASH] =
    {
        SANDSLASH_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING("爪子和角经常会折断.\n折断的爪子和角会被\n制作成用来耕作土地的用具."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sandslash, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Sandslash,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Sandslash, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Sandslash),
        ICON(Sandslash, 2),
        LEARNSETS(Sandslash),
    },

#if P_ALOLAN_FORMS
    [SPECIES_SANDSHREW_ALOLAN] =
    {
        SANDSHREW_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 10,
        .baseSpDefense = 35,
        .types = { TYPE_ICE, TYPE_STEEL },
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .height = 7,
        .weight = 400,
        .description = COMPOUND_STRING("Life on mountains covered with deep snow\n""has granted this Pokémon a body of ice\n""that's as hard as steel.\n""Predators go after its soft belly."),
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SandshrewAlolan, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_SandshrewAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SandshrewAlolan, 56, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SandshrewAlolan),
        ICON(SandshrewAlolan, 0),
        LEARNSETS(SandshrewAlolan),
        .isAlolanForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_SANDSLASH_ALOLAN}),
    },

    [SPECIES_SANDSLASH_ALOLAN] =
    {
        SANDSLASH_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 65,
        .baseSpAttack  = 25,
        .baseSpDefense = 65,
        .types = { TYPE_ICE, TYPE_STEEL },
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .height = 12,
        .weight = 550,
        .description = COMPOUND_STRING("It uses large, hooked claws to cut a path\n""through deep snow as it runs.\n""On snowy mountains, this Sandslash\n""is faster than any other Pokémon."),
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(SandslashAlolan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SandslashAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SandslashAlolan, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SandslashAlolan),
        ICON(SandslashAlolan, 0),
        LEARNSETS(SandslashAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_NIDORAN
    [SPECIES_NIDORAN_F] =
    {
        .baseHP        = 55,
        .baseAttack    = 47,
        .baseDefense   = 52,
        .baseSpeed     = 41,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 235,
        .expYield = 55,
        .evYield_HP = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("尼多兰"),
        .cryId = CRY_NIDORAN_F,
        .natDexNum = NATIONAL_DEX_NIDORAN_F,
        .categoryName = _("毒针"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING("Its highly toxic barbs are thought to have\n""developed as protection for this small-\n""bodied Pokémon. When enraged, it releases\n""a horrible toxin from its horn."),
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(NidoranF, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_NidoranF,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 28,
        BACK_PIC(NidoranF, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(NidoranF),
        ICON(NidoranF, 0),
        .footprint = gMonFootprint_NidoranF,
        LEARNSETS(NidoranF),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINA}),
    },

    [SPECIES_NIDORINA] =
    {
        .baseHP        = 70,
        .baseAttack    = 62,
        .baseDefense   = 67,
        .baseSpeed     = 56,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 120,
        .expYield = 128,
        .evYield_HP = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("尼多娜"),
        .cryId = CRY_NIDORINA,
        .natDexNum = NATIONAL_DEX_NIDORINA,
        .categoryName = _("毒针"),
        .height = 8,
        .weight = 200,
        .description = COMPOUND_STRING("待在巢穴深处的时候，\n它一定会把身上的刺收起来.\n这表明它正处于放松状态."),
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidorina, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Nidorina,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Nidorina, 56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Nidorina),
        ICON(Nidorina, 0),
        .footprint = gMonFootprint_Nidorina,
        LEARNSETS(Nidorina),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN}),
    },

    [SPECIES_NIDOQUEEN] =
    {
        .baseHP        = 90,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 92 : 82,
        .baseDefense   = 87,
        .baseSpeed     = 76,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = { TYPE_POISON, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 227,
        .evYield_HP = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("尼多后"),
        .cryId = CRY_NIDOQUEEN,
        .natDexNum = NATIONAL_DEX_NIDOQUEEN,
        .categoryName = _("钻锥"),
        .height = 13,
        .weight = 600,
        .description = COMPOUND_STRING("坚硬的鳞片覆盖着强壮的\n身体.据说它的鳞片会\n自己长出新的."),
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidoqueen, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Nidoqueen,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Nidoqueen, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Nidoqueen),
        ICON(Nidoqueen, 2),
        .footprint = gMonFootprint_Nidoqueen,
        LEARNSETS(Nidoqueen),
    },

    [SPECIES_NIDORAN_M] =
    {
        .baseHP        = 46,
        .baseAttack    = 57,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 235,
        .expYield = 55,
        .evYield_Attack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("尼多朗"),
        .cryId = CRY_NIDORAN_M,
        .natDexNum = NATIONAL_DEX_NIDORAN_M,
        .categoryName = _("毒针"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING("The male Nidoran has developed muscles\n""that freely move its ears in any direction.\n""Even the slightest sound does not escape\n""this Pokémon's notice."),
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(NidoranM, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_NidoranM,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(NidoranM, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(NidoranM),
        ICON(NidoranM, 2),
        .footprint = gMonFootprint_NidoranM,
        LEARNSETS(NidoranM),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_NIDORINO}),
    },

    [SPECIES_NIDORINO] =
    {
        .baseHP        = 61,
        .baseAttack    = 72,
        .baseDefense   = 57,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 120,
        .expYield = 128,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("尼多力诺"),
        .cryId = CRY_NIDORINO,
        .natDexNum = NATIONAL_DEX_NIDORINO,
        .categoryName = _("毒针"),
        .height = 9,
        .weight = 195,
        .description = COMPOUND_STRING("头上的犄角里含有毒素，\n当犄角撞穿了什么东西时，\n毒素就会随着冲击而流出."),
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidorino, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Nidorino,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Nidorino, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Nidorino),
        ICON(Nidorino, 2),
        .footprint = gMonFootprint_Nidorino,
        LEARNSETS(Nidorino),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING}),
    },

    [SPECIES_NIDOKING] =
    {
        .baseHP        = 81,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 102 : 92,
        .baseDefense   = 77,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_POISON, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 227,
        .evYield_Attack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("尼多王"),
        .cryId = CRY_NIDOKING,
        .natDexNum = NATIONAL_DEX_NIDOKING,
        .categoryName = _("钻锥"),
        .height = 14,
        .weight = 620,
        .description = COMPOUND_STRING("通过活用自己钢一般坚硬的\n皮肤来使出强力的撞击.它\n的犄角坚硬得能够刺穿钻石."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nidoking, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Nidoking,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 25,
        BACK_PIC(Nidoking, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Nidoking),
        ICON(Nidoking, 2),
        .footprint = gMonFootprint_Nidoking,
        LEARNSETS(Nidoking),
    },
#endif //P_FAMILY_NIDORAN

#if P_FAMILY_CLEFAIRY
#if P_UPDATED_TYPES >= GEN_6
    #define CLEFAIRY_FAMILY_TYPES { TYPE_FAIRY, TYPE_FAIRY }
#else
    #define CLEFAIRY_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL }
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_CLEFFA] =
    {
        .baseHP        = 50,
        .baseAttack    = 25,
        .baseDefense   = 28,
        .baseSpeed     = 15,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 150,
        .expYield = 44,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("皮宝宝"),
        .cryId = CRY_CLEFFA,
        .natDexNum = NATIONAL_DEX_CLEFFA,
        .categoryName = _("星型"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING("根据当地的传说，\n皮宝宝经常出没的\n地方就是流星陨落之处."),
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cleffa, 32, 32),
        .frontPicYOffset = 18,
        .frontAnimFrames = sAnims_Cleffa,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Cleffa, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Cleffa),
        ICON(Cleffa, 0),
        .footprint = gMonFootprint_Cleffa,
        LEARNSETS(Cleffa),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_CLEFAIRY] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 48,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 150,
        .expYield = 113,
        .evYield_HP = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("皮皮"),
        .cryId = CRY_CLEFAIRY,
        .natDexNum = NATIONAL_DEX_CLEFAIRY,
        .categoryName = _("妖精"),
        .height = 6,
        .weight = 75,
        .description = COMPOUND_STRING("因可爱的举止和叫声而\n广受欢迎的宝可梦.\n不过很少被人发现."),
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Clefairy, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Clefairy,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Clefairy, 56, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Clefairy),
        ICON(Clefairy, 0),
        .footprint = gMonFootprint_Clefairy,
        LEARNSETS(Clefairy),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}),
    },

    [SPECIES_CLEFABLE] =
    {
        .baseHP        = 95,
        .baseAttack    = 70,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseSpDefense = 90,
        .types = CLEFAIRY_FAMILY_TYPES,
        .catchRate = 25,
        .expYield = 217,
        .evYield_HP = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_UNAWARE },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("皮可西"),
        .cryId = CRY_CLEFABLE,
        .natDexNum = NATIONAL_DEX_CLEFABLE,
        .categoryName = _("妖精"),
        .height = 13,
        .weight = 400,
        .description = COMPOUND_STRING("A Clefable uses its wings to skip lightly \n""as if it were flying. Its bouncy step\n""lets it even walk on water. On quiet,\n""moonlit nights, it strolls on lakes."),
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Clefable, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Clefable,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Clefable, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Clefable),
        ICON(Clefable, 0),
        .footprint = gMonFootprint_Clefable,
        LEARNSETS(Clefable),
    },
#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
#define VULPIX_FAMILY_MISC_INFO                             \
        .genderRatio = PERCENT_FEMALE(75),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }

#define VULPIX_MISC_INFO                                \
        .baseHP        = 38,                            \
        .baseAttack    = 41,                            \
        .baseDefense   = 40,                            \
        .baseSpeed     = 65,                            \
        .baseSpAttack  = 50,                            \
        .baseSpDefense = 65,                            \
        .catchRate = 190,                               \
        .expYield = 60,                                 \
        .evYield_Speed = 1,                             \
        .speciesName = _("六尾"),                     \
        .cryId = CRY_VULPIX,                            \
        .natDexNum = NATIONAL_DEX_VULPIX,               \
        .categoryName = _("狐狸"),                       \
        .height = 6,                                    \
        .weight = 99,                                   \
        .pokemonScale = 542,                            \
        .pokemonOffset = 19,                            \
        .trainerScale = 256,                            \
        .trainerOffset = 0,                             \
        .footprint = gMonFootprint_Vulpix,              \
        .formSpeciesIdTable = sVulpixFormSpeciesIdTable,\
        VULPIX_FAMILY_MISC_INFO

#define NINETALES_MISC_INFO                                 \
        .catchRate = 75,                                    \
        .expYield = 177,                                    \
        .evYield_Speed = 1,                                 \
        .evYield_SpDefense = 1,                             \
        .speciesName = _("九尾"),                      \
        .cryId = CRY_NINETALES,                             \
        .natDexNum = NATIONAL_DEX_NINETALES,                \
        .categoryName = _("狐狸"),                           \
        .height = 11,                                       \
        .weight = 199,                                      \
        .pokemonScale = 339,                                \
        .pokemonOffset = 10,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Ninetales,               \
        .formSpeciesIdTable = sNinetalesFormSpeciesIdTable, \
        VULPIX_FAMILY_MISC_INFO

    [SPECIES_VULPIX] =
    {
        VULPIX_MISC_INFO,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .itemRare = ITEM_CHARCOAL,
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_BROWN,
        .description = COMPOUND_STRING("虽然还是幼崽，却有着6根\n美丽的尾巴.长大后，\n尾巴会变得更多."),
        FRONT_PIC(Vulpix, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Vulpix,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Vulpix, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Vulpix),
        ICON(Vulpix, 5),
        LEARNSETS(Vulpix),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}),
    },

    [SPECIES_NINETALES] =
    {
        NINETALES_MISC_INFO,
        .baseHP        = 73,
        .baseAttack    = 76,
        .baseDefense   = 75,
        .baseSpeed     = 100,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .itemRare = ITEM_CHARCOAL,
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT },
        .bodyColor = BODY_COLOR_YELLOW,
        .description = COMPOUND_STRING("每一根尾巴里都蕴含着\n神通力.据说它的\n寿命长达1000年."),
        FRONT_PIC(Ninetales, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Ninetales,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Ninetales, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Ninetales),
        ICON(Ninetales, 3),
        LEARNSETS(Ninetales),
    },

#if P_ALOLAN_FORMS
    [SPECIES_VULPIX_ALOLAN] =
    {
        VULPIX_MISC_INFO,
        .types = { TYPE_ICE, TYPE_ICE },
        .itemRare = ITEM_SNOWBALL,
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .description = COMPOUND_STRING("They live together in a skulk, helping\n""one another. In hot weather, this Pokémon\n""makes ice shards with its six tails and\n""sprays them around to cool itself off."),
        FRONT_PIC(VulpixAlolan, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_VulpixAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VulpixAlolan, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(VulpixAlolan),
        ICON(VulpixAlolan, 2),
        LEARNSETS(VulpixAlolan),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_ICE_STONE, SPECIES_NINETALES_ALOLAN}),
        .isAlolanForm = TRUE,
    },

    [SPECIES_NINETALES_ALOLAN] =
    {
        NINETALES_MISC_INFO,
        .baseHP        = 73,
        .baseAttack    = 67,
        .baseDefense   = 75,
        .baseSpeed     = 109,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = { TYPE_ICE, TYPE_FAIRY },
        .itemRare = ITEM_SNOWBALL,
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING },
        .bodyColor = BODY_COLOR_BLUE,
        .description = COMPOUND_STRING("While it will guide travelers who get lost\n""on a snowy mountain down to the\n""mountain's base, it won't forgive anyone\n""who harms nature."),
        FRONT_PIC(NinetalesAlolan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_NinetalesAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(NinetalesAlolan, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(NinetalesAlolan),
        ICON(NinetalesAlolan, 2),
        LEARNSETS(NinetalesAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_VULPIX

#if P_FAMILY_JIGGLYPUFF
#if P_UPDATED_TYPES >= GEN_6
    #define JIGGLYPUFF_FAMILY_TYPES { TYPE_NORMAL, TYPE_FAIRY}
#else
    #define JIGGLYPUFF_FAMILY_TYPES { TYPE_NORMAL, TYPE_NORMAL}
#endif

#if P_GEN_2_CROSS_EVOS
    [SPECIES_IGGLYBUFF] =
    {
        .baseHP        = 90,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 20,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 170,
        .expYield = 42,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("宝宝丁"),
        .cryId = CRY_IGGLYBUFF,
        .natDexNum = NATIONAL_DEX_IGGLYBUFF,
        .categoryName = _("球"),
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING("嘭嘭嘭地弹跳着移动.\n动得多了出汗的话，\n会发出微甜的体味."),
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Igglybuff, 32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Igglybuff,
        .frontAnimId = ANIM_SWING_CONCAVE_FAST,
        BACK_PIC(Igglybuff, 40, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Igglybuff),
        ICON(Igglybuff, 1),
        .footprint = gMonFootprint_Igglybuff,
        LEARNSETS(Igglybuff),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_JIGGLYPUFF}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_JIGGLYPUFF] =
    {
        .baseHP        = 115,
        .baseAttack    = 45,
        .baseDefense   = 20,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 170,
        .expYield = 95,
        .evYield_HP = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("胖丁"),
        .cryId = CRY_JIGGLYPUFF,
        .natDexNum = NATIONAL_DEX_JIGGLYPUFF,
        .categoryName = _("球"),
        .height = 5,
        .weight = 55,
        .description = COMPOUND_STRING("把肚子鼓得大大的，\n唱出神奇的旋律.\n听到后就会马上昏昏欲睡."),
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Jigglypuff, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Jigglypuff,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        BACK_PIC(Jigglypuff, 56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Jigglypuff),
        ICON(Jigglypuff, 0),
        .footprint = gMonFootprint_Jigglypuff,
        LEARNSETS(Jigglypuff),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}),
    },

    [SPECIES_WIGGLYTUFF] =
    {
        .baseHP        = 140,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 85 : 75,
        .baseSpDefense = 50,
        .types = JIGGLYPUFF_FAMILY_TYPES,
        .catchRate = 50,
        .expYield = 196,
        .evYield_HP = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("胖可丁"),
        .cryId = CRY_WIGGLYTUFF,
        .natDexNum = NATIONAL_DEX_WIGGLYTUFF,
        .categoryName = _("球"),
        .height = 10,
        .weight = 120,
        .description = COMPOUND_STRING("身体非常有弹性，\n当它用力吸气时，\n身体可以无限制地膨胀."),
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wigglytuff, 48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Wigglytuff,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Wigglytuff, 56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Wigglytuff),
        ICON(Wigglytuff, 0),
        .footprint = gMonFootprint_Wigglytuff,
        LEARNSETS(Wigglytuff),
    },
#endif //P_FAMILY_JIGGLYPUFF

#if P_FAMILY_ZUBAT
    [SPECIES_ZUBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("超音蝠"),
        .cryId = CRY_ZUBAT,
        .natDexNum = NATIONAL_DEX_ZUBAT,
        .categoryName = _("蝙蝠"),
        .height = 8,
        .weight = 75,
        .description = COMPOUND_STRING("由于需要调查前方的状况，\n它会一边从嘴里\n发出超音波一边飞行."),
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Zubat, 56, 48),
        FRONT_PIC_FEMALE(Zubat, 56, 48),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Zubat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 16,
        BACK_PIC(Zubat, 56, 56),
        BACK_PIC_FEMALE(Zubat, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Zubat),
        ICON(Zubat, 2),
        .footprint = gMonFootprint_Zubat,
        LEARNSETS(Zubat),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_GOLBAT}),
    },

    [SPECIES_GOLBAT] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = { TYPE_POISON, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 159,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("大嘴蝠"),
        .cryId = CRY_GOLBAT,
        .natDexNum = NATIONAL_DEX_GOLBAT,
        .categoryName = _("蝙蝠"),
        .height = 16,
        .weight = 550,
        .description = COMPOUND_STRING("一次能吸300毫升的血液.\n有时会因吸血过多\n而无法飞行."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Golbat, 64, 56),
        FRONT_PIC_FEMALE(Golbat, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Golbat,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        BACK_PIC(Golbat, 56, 40),
        BACK_PIC_FEMALE(Golbat, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Golbat),
        ICON(Golbat, 2),
        .footprint = gMonFootprint_Golbat,
        LEARNSETS(Golbat),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_CROBAT}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_CROBAT] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_POISON, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 241,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("叉字蝠"),
        .cryId = CRY_CROBAT,
        .natDexNum = NATIONAL_DEX_CROBAT,
        .categoryName = _("蝙蝠"),
        .height = 18,
        .weight = 750,
        .description = COMPOUND_STRING("人和宝可梦的鲜血是其食物.\n只要不吸上一口，\n就会衰弱得无法飞行."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
        FRONT_PIC(Crobat, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Crobat,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        BACK_PIC(Crobat, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Crobat),
        ICON(Crobat, 2),
        .footprint = gMonFootprint_Crobat,
        LEARNSETS(Crobat),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZUBAT

#if P_FAMILY_ODDISH
    [SPECIES_ODDISH] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 255,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("走路草"),
        .cryId = CRY_ODDISH,
        .natDexNum = NATIONAL_DEX_ODDISH,
        .categoryName = _("杂草"),
        .height = 5,
        .weight = 54,
        .description = COMPOUND_STRING("白天会为躲避太阳而\n钻入凉爽的地下.\n会通过沐浴月光成长."),
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Oddish, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Oddish,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Oddish, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Oddish),
        ICON(Oddish, 4),
        .footprint = gMonFootprint_Oddish,
        LEARNSETS(Oddish),
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_GLOOM}),
    },

    [SPECIES_GLOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 120,
        .expYield = 138,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_STENCH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("臭臭花"),
        .cryId = CRY_GLOOM,
        .natDexNum = NATIONAL_DEX_GLOOM,
        .categoryName = _("杂草"),
        .height = 8,
        .weight = 86,
        .description = COMPOUND_STRING("看似口水的东西其实是\n甜甜的蜜.非常黏稠，\n只要碰到就会一直黏住."),
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gloom, 56, 48),
        FRONT_PIC_FEMALE(Gloom, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Gloom,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Gloom, 64, 48),
        BACK_PIC_FEMALE(Gloom, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Gloom),
        ICON(Gloom, 0),
        .footprint = gMonFootprint_Gloom,
        LEARNSETS(Gloom),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME},
                                {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}),
    },

    [SPECIES_VILEPLUME] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 110 : 100,
        .baseSpDefense = 90,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("霸王花"),
        .cryId = CRY_VILEPLUME,
        .natDexNum = NATIONAL_DEX_VILEPLUME,
        .categoryName = _("花"),
        .height = 12,
        .weight = 186,
        .description = COMPOUND_STRING("虽然花瓣越大，就能放出\n越多的花粉，但这样脑袋\n会变沉，容易疲倦."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vileplume, 56, 56),
        FRONT_PIC_FEMALE(Vileplume, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Vileplume,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Vileplume, 64, 56),
        BACK_PIC_FEMALE(Vileplume, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Vileplume),
        ICON(Vileplume, 0),
        .footprint = gMonFootprint_Vileplume,
        LEARNSETS(Vileplume),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_BELLOSSOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("铃铛"),
        .cryId = CRY_BELLOSSOM,
        .natDexNum = NATIONAL_DEX_BELLOSSOM,
        .categoryName = _("花"),
        .height = 4,
        .weight = 58,
        .description = COMPOUND_STRING("在南国大量生活着.\n跳舞时花瓣会互相碰触，\n发出悦耳的声音."),
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bellossom, 32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bellossom,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Bellossom, 48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Bellossom),
        ICON(Bellossom, 1),
        .footprint = gMonFootprint_Bellossom,
        LEARNSETS(Bellossom),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ODDISH

#if P_FAMILY_PARAS
    [SPECIES_PARAS] =
    {
        .baseHP        = 35,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_BUG, TYPE_GRASS },
        .catchRate = 190,
        .expYield = 57,
        .evYield_Attack = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_GRASS },
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("派拉斯"),
        .cryId = CRY_PARAS,
        .natDexNum = NATIONAL_DEX_PARAS,
        .categoryName = _("蘑菇"),
        .height = 3,
        .weight = 54,
        .description = COMPOUND_STRING("即使不停地吃，\n获取的营养也几乎都会\n被背上生长的蘑菇夺走."),
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Paras, 48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Paras,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .frontAnimDelay = 10,
        BACK_PIC(Paras, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Paras),
        ICON(Paras, 0),
        .footprint = gMonFootprint_Paras,
        LEARNSETS(Paras),
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_PARASECT}),
    },

    [SPECIES_PARASECT] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = { TYPE_BUG, TYPE_GRASS },
        .catchRate = 75,
        .expYield = 142,
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_GRASS },
        .abilities = { ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("派拉斯"),
        .cryId = CRY_PARASECT,
        .natDexNum = NATIONAL_DEX_PARASECT,
        .categoryName = _("蘑菇"),
        .height = 10,
        .weight = 295,
        .description = COMPOUND_STRING("从蘑菇的菌伞处撒出有毒的\n孢子.收集孢子用水煎\n就能成为中药."),
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Parasect, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Parasect,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 45,
        BACK_PIC(Parasect, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Parasect),
        ICON(Parasect, 0),
        .footprint = gMonFootprint_Parasect,
        LEARNSETS(Parasect),
    },
#endif //P_FAMILY_PARAS

#if P_FAMILY_VENONAT
    [SPECIES_VENONAT] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 190,
        .expYield = 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_TINTED_LENS, ABILITY_RUN_AWAY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("毛球"),
        .cryId = CRY_VENONAT,
        .natDexNum = NATIONAL_DEX_VENONAT,
        .categoryName = _("昆虫"),
        .height = 10,
        .weight = 300,
        .description = COMPOUND_STRING("在明亮的地方你便能发现它\n具有雷达功能的大眼其实是\n由许多个小眼睛聚集而成的."),
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
        FRONT_PIC(Venonat, 40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Venonat,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        .frontAnimDelay = 20,
        BACK_PIC(Venonat, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Venonat),
        ICON(Venonat, 2),
        .footprint = gMonFootprint_Venonat,
        LEARNSETS(Venonat),
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_VENOMOTH}),
    },

    [SPECIES_VENOMOTH] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 75,
        .expYield = 158,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_TINTED_LENS, ABILITY_WONDER_SKIN },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("摩鲁蛾"),
        .cryId = CRY_VENOMOTH,
        .natDexNum = NATIONAL_DEX_VENOMOTH,
        .categoryName = _("毒牙"),
        .height = 15,
        .weight = 125,
        .description = COMPOUND_STRING("碰到它播撒的鳞粉后，\n身体的感觉就会失常，\n变得无法笔直站立."),
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
        FRONT_PIC(Venomoth, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Venomoth,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 16,
        BACK_PIC(Venomoth, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Venomoth),
        ICON(Venomoth, 2),
        .footprint = gMonFootprint_Venomoth,
        LEARNSETS(Venomoth),
    },
#endif //P_FAMILY_VENONAT

#if P_FAMILY_DIGLETT
#define DIGLETT_FAMILY_MISC_INFO                            \
        .itemRare = ITEM_SOFT_SAND,                         \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .bodyColor = BODY_COLOR_BROWN

#define DIGLETT_MISC_INFO                                   \
        .catchRate = 255,                                   \
        .expYield = 53,                                     \
        .evYield_Speed = 1,                                 \
        .speciesName = _("地鼠"),                           \
        .cryId = CRY_DIGLETT,                               \
        .natDexNum = NATIONAL_DEX_DIGLETT,                  \
        .categoryName = _("鼹鼠"),                          \
        .height = 2,                                        \
        .pokemonScale = 833,                                \
        .pokemonOffset = 25,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Diglett,                 \
        .formSpeciesIdTable = sDiglettFormSpeciesIdTable,   \
        DIGLETT_FAMILY_MISC_INFO

#define DUGTRIO_MISC_INFO                                   \
        .catchRate = 50,                                    \
        .expYield = 149,                                    \
        .evYield_Speed = 2,                                 \
        .speciesName = _("三地鼠"),                          \
        .cryId = CRY_DUGTRIO,                               \
        .natDexNum = NATIONAL_DEX_DUGTRIO,                  \
        .categoryName = _("鼹鼠"),                          \
        .height = 7,                                        \
        .pokemonScale = 406,                                \
        .pokemonOffset = 18,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Dugtrio,                 \
        .formSpeciesIdTable = sDugtrioFormSpeciesIdTable,   \
        DIGLETT_FAMILY_MISC_INFO

#define DUGTRIO_ATTACK (P_UPDATED_STATS >= GEN_7 ? 100 : 80)

    [SPECIES_DIGLETT] =
    {
        DIGLETT_MISC_INFO,
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 25,
        .baseSpeed     = 95,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE },
        .weight = 8,
        .description = COMPOUND_STRING("地鼠经过之后的土壤会\n得到适当的翻动，\n成为最适合耕种的田地."),
        FRONT_PIC(Diglett, 32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Diglett,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 25,
        BACK_PIC(Diglett, 40, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Diglett),
        ICON(Diglett, 2),
        LEARNSETS(Diglett),
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DUGTRIO}),
    },

    [SPECIES_DUGTRIO] =
    {
        DUGTRIO_MISC_INFO,
        .baseHP        = 35,
        .baseAttack    = DUGTRIO_ATTACK,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE },
        .weight = 333,
        .description = COMPOUND_STRING("擅长团队合作的三胞胎地鼠.\n有时会挖掘到100公里深的\n地底，甚至引发地震."),
        FRONT_PIC(Dugtrio, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Dugtrio,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        .frontAnimDelay = 35,
        BACK_PIC(Dugtrio, 48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Dugtrio),
        ICON(Dugtrio, 2),
        LEARNSETS(Dugtrio),
    },

#if P_ALOLAN_FORMS
    [SPECIES_DIGLETT_ALOLAN] =
    {
        DIGLETT_MISC_INFO,
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_STEEL },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .weight = 10,
        .description = COMPOUND_STRING("The metal-rich geology of its habitat\n""caused it to develop steel whiskers on its\n""head that change shape depending on its\n""mood and when communicating with others."),
        FRONT_PIC(DiglettAlolan, 32, 40),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_DiglettAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(DiglettAlolan, 40, 48),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(DiglettAlolan),
        ICON(DiglettAlolan, 2),
        LEARNSETS(DiglettAlolan),
        .isAlolanForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_DUGTRIO_ALOLAN}),
    },

    [SPECIES_DUGTRIO_ALOLAN] =
    {
        DUGTRIO_MISC_INFO,
        .baseHP        = 35,
        .baseAttack    = DUGTRIO_ATTACK,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_STEEL },
        .abilities = { ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE },
        .noFlip = TRUE,
        .weight = 666,
        .description = COMPOUND_STRING("Their beautiful, metallic whiskers create\n""a sort of protective helmet on\n""heir heads, and they also function\n""as highly precise sensors."),
        FRONT_PIC(DugtrioAlolan, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_DugtrioAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(DugtrioAlolan, 64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(DugtrioAlolan),
        ICON(DugtrioAlolan, 2),
        LEARNSETS(DugtrioAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
#define MEOWTH_MISC_INFO                                                    \
        .catchRate = 255,                                                   \
        .expYield = 58,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                  \
        .speciesName = _("喵喵"),                                         \
        .cryId = CRY_MEOWTH,                                                \
        .natDexNum = NATIONAL_DEX_MEOWTH,                                   \
        .categoryName = _("妖怪猫"),                                   \
        .footprint = gMonFootprint_Meowth,                                  \
        .formSpeciesIdTable = sMeowthFormSpeciesIdTable

#define PERSIAN_MISC_INFO                                   \
        .catchRate = 90,                                    \
        .expYield = 154,                                    \
        .evYield_Speed = 2,                                 \
        .itemRare = ITEM_QUICK_CLAW,                        \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .speciesName = _("猫老大"),                        \
        .cryId = CRY_PERSIAN,                               \
        .natDexNum = NATIONAL_DEX_PERSIAN,                  \
        .categoryName = _("暹逻猫"),                    \
        .footprint = gMonFootprint_Persian,                 \
        .formSpeciesIdTable = sPersianFormSpeciesIdTable

    [SPECIES_MEOWTH] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Speed = 1,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING("喜欢收集亮晶晶的东西.\n当它心情好的时候，会让\n训练家一起欣赏自己的收藏."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Meowth, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Meowth,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .frontAnimDelay = 40,
        BACK_PIC(Meowth, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Meowth),
        ICON(Meowth, 1),
        LEARNSETS(Meowth),
        .formChangeTable = sMeowthFormChangeTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERSIAN}),
    },

    [SPECIES_PERSIAN] =
    {
        PERSIAN_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .abilities = { ABILITY_LIMBER, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 10,
        .weight = 320,
        .description = COMPOUND_STRING("性情高傲，很难让它听话.\n只要遇到看不顺眼的事，\n就会马上竖起自己的爪子."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Persian, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Persian,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 20,
        BACK_PIC(Persian, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Persian),
        ICON(Persian, 1),
        LEARNSETS(Persian),
    },

#if P_ALOLAN_FORMS
    [SPECIES_MEOWTH_ALOLAN] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .evYield_Speed = 1,
        .types = { TYPE_DARK, TYPE_DARK },
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .height = 4,
        .weight = 42,
        .description = COMPOUND_STRING("It's accustomed to luxury because it used\n""to live with Alolan royalty. Highly smart\n""and proud, it's famously difficult to\n""handle, but that also makes it popular."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MeowthAlolan, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_MeowthAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MeowthAlolan, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MeowthAlolan),
        ICON(MeowthAlolan, 2),
        LEARNSETS(MeowthAlolan),
        .isAlolanForm = TRUE,
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_PERSIAN_ALOLAN}),
    },

    [SPECIES_PERSIAN_ALOLAN] =
    {
        PERSIAN_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_DARK },
        .abilities = { ABILITY_FUR_COAT, ABILITY_TECHNICIAN, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_GRAY,
        .height = 11,
        .weight = 330,
        .description = COMPOUND_STRING("It looks down on everyone other than\n""itself. In contrast to its lovely face, it\n""is so brutal that it tortures its weakened\n""prey rather than finishing them off."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PersianAlolan, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_PersianAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PersianAlolan, 64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PersianAlolan),
        ICON(PersianAlolan, 2),
        LEARNSETS(PersianAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS

#if P_GALARIAN_FORMS
    [SPECIES_MEOWTH_GALARIAN] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Attack = 1,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .abilities = { ABILITY_PICKUP, ABILITY_TOUGH_CLAWS, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_BROWN,
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING("Living with a savage, seafaring people has\n""hardened its body so much that parts of it\n""turned to iron. Darker coins are harder\n""and garner more respect among Meowth."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MeowthGalarian, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MeowthGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MeowthGalarian, 64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MeowthGalarian),
        ICON(MeowthGalarian, 0),
        LEARNSETS(MeowthGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PERRSERKER}),
    },

    [SPECIES_PERRSERKER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .catchRate = 90,
        .expYield = 154,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_TOUGH_CLAWS, ABILITY_STEELY_SPIRIT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("喵头目"),
        .cryId = CRY_PERRSERKER,
        .natDexNum = NATIONAL_DEX_PERRSERKER,
        .categoryName = _("维京"),
        .height = 8,
        .weight = 280,
        .description = COMPOUND_STRING("有着十分好战的性格.\n头上像铁头盔一样的东西\n其实是它硬化后的体毛."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Perrserker, 48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Perrserker,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Perrserker, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Perrserker),
        ICON(Perrserker, 2),
        .footprint = gMonFootprint_Perrserker,
        LEARNSETS(Perrserker),
    },
#endif //P_GALARIAN_FORMS

#if P_GIGANTAMAX_FORMS
    [SPECIES_MEOWTH_GIGANTAMAX] =
    {
        MEOWTH_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Speed = 1,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = { ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .height = 330,
        .weight = 0,
        .description = COMPOUND_STRING("The pattern that has appeared on\n""its giant coin is thought to be the\n""key to unlocking the secrets of the\n""Dynamax phenomenon."),
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MeowthGigantamax, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MeowthGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MeowthGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MeowthGigantamax),
        ICON(MeowthGigantamax, 1),
        LEARNSETS(Meowth),
        .isGigantamax = TRUE,
        .formChangeTable = sMeowthFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MEOWTH

#if P_FAMILY_PSYDUCK
    [SPECIES_PSYDUCK] =
    {
        .baseHP        = 50,
        .baseAttack    = 52,
        .baseDefense   = 48,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 64,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("可达鸭"),
        .cryId = CRY_PSYDUCK,
        .natDexNum = NATIONAL_DEX_PSYDUCK,
        .categoryName = _("鸭"),
        .height = 8,
        .weight = 196,
        .description = COMPOUND_STRING("不受自己控制，\n时不时地会产生念力，\n导致头痛流泪."),
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Psyduck, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Psyduck,
        .frontAnimId = ANIM_V_JUMPS_H_JUMPS,
        BACK_PIC(Psyduck, 48, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Psyduck),
        ICON(Psyduck, 1),
        .footprint = gMonFootprint_Psyduck,
        LEARNSETS(Psyduck),
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_GOLDUCK}),
    },

    [SPECIES_GOLDUCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 78,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 75,
        .expYield = 175,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("哥达鸭"),
        .cryId = CRY_GOLDUCK,
        .natDexNum = NATIONAL_DEX_GOLDUCK,
        .categoryName = _("鸭"),
        .height = 17,
        .weight = 766,
        .description = COMPOUND_STRING("它靠修长的四肢和发达的\n大脚蹼在湖里优雅地游泳."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
        FRONT_PIC(Golduck, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Golduck,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        BACK_PIC(Golduck, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Golduck),
        ICON(Golduck, 0),
        .footprint = gMonFootprint_Golduck,
        LEARNSETS(Golduck),
    },
#endif //P_FAMILY_PSYDUCK

#if P_FAMILY_MANKEY
    [SPECIES_MANKEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_ANGER_POINT, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("猴怪"),
        .cryId = CRY_MANKEY,
        .natDexNum = NATIONAL_DEX_MANKEY,
        .categoryName = _("猪"),
        .height = 5,
        .weight = 280,
        .description = COMPOUND_STRING("身体轻盈，在树上生活.\n常因鸡毛蒜皮的小事发火\n而飞扑到周围的东西上."),
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mankey, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Mankey,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 20,
        BACK_PIC(Mankey, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Mankey),
        ICON(Mankey, 1),
        .footprint = gMonFootprint_Mankey,
        LEARNSETS(Mankey),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_PRIMEAPE}),
    },

    [SPECIES_PRIMEAPE] =
    {
        .baseHP        = 65,
        .baseAttack    = 105,
        .baseDefense   = 60,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 75,
        .expYield = 159,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_ANGER_POINT, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("火暴猴"),
        .cryId = CRY_PRIMEAPE,
        .natDexNum = NATIONAL_DEX_PRIMEAPE,
        .categoryName = _("猪"),
        .height = 10,
        .weight = 320,
        .description = COMPOUND_STRING("根据某位研究者的论文，\n即使在精灵球里，\n火暴猴好像也在发怒."),
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Primeape, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Primeape,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Primeape, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Primeape),
        ICON(Primeape, 2),
        .footprint = gMonFootprint_Primeape,
        LEARNSETS(Primeape),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_RAGE_FIST, SPECIES_ANNIHILAPE}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_ANNIHILAPE] =
    {
        .baseHP        = 110,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = { TYPE_FIGHTING, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 268,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Annihilape"),
        .cryId = CRY_ANNIHILAPE,
        .natDexNum = NATIONAL_DEX_ANNIHILAPE,
        .categoryName = _("Rage Monkey"),
        .height = 12,
        .weight = 560,
        .description = COMPOUND_STRING("When its anger rose beyond a\n""critical point, this Pokémon gained power\n""that is unfettered by the limits of\n""its physical body."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Annihilape, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Annihilape,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Annihilape, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Annihilape),
        ICON(Annihilape, 0),
        //.footprint = gMonFootprint_Annihilape,
        LEARNSETS(Annihilape),
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_MANKEY

#if P_FAMILY_GROWLITHE
#define GROWLITHE_FAMILY_MISC_INFO                                                  \
        .genderRatio = PERCENT_FEMALE(25),                                          \
        .eggCycles = 20,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                          \
        .bodyColor = BODY_COLOR_BROWN

#define GROWLITHE_MISC_INFO                                 \
        .catchRate = 190,                                   \
        .expYield = 70,                                     \
        .evYield_Attack = 1,                                \
        .speciesName = _("卡蒂狗"),                      \
        .cryId = CRY_GROWLITHE,                             \
        .natDexNum = NATIONAL_DEX_GROWLITHE,                \
        .footprint = gMonFootprint_Growlithe,               \
        .formSpeciesIdTable = sGrowlitheFormSpeciesIdTable, \
        GROWLITHE_FAMILY_MISC_INFO

#define ARCANINE_MISC_INFO                                  \
        .catchRate = 75,                                    \
        .expYield = 194,                                    \
        .evYield_Attack = 2,                                \
        .speciesName = _("风速狗"),                       \
        .cryId = CRY_ARCANINE,                              \
        .natDexNum = NATIONAL_DEX_ARCANINE,                 \
        .categoryName = _("传说"),                     \
        .footprint = gMonFootprint_Arcanine,                \
        .formSpeciesIdTable = sArcanineFormSpeciesIdTable,  \
        GROWLITHE_FAMILY_MISC_INFO

    [SPECIES_GROWLITHE] =
    {
        GROWLITHE_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED },
        .categoryName = _("小狗"),
        .height = 7,
        .weight = 190,
        .description = COMPOUND_STRING("性格忠诚.\n为了保护自己的训练家，\n会拼命地朝对手狂吠."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Growlithe, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Growlithe,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 30,
        BACK_PIC(Growlithe, 48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Growlithe),
        ICON(Growlithe, 3),
        LEARNSETS(Growlithe),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}),
    },

    [SPECIES_ARCANINE] =
    {
        ARCANINE_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 95,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED },
        .height = 19,
        .weight = 1550,
        .description = COMPOUND_STRING("从古时候起就是俘获了众多\n人心的美丽宝可梦.\n能像飞一样轻巧地奔跑."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        FRONT_PIC(Arcanine, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Arcanine,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 8,
        BACK_PIC(Arcanine, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Arcanine),
        ICON(Arcanine, 3),
        LEARNSETS(Arcanine),
    },

#if P_HISUIAN_FORMS
    [SPECIES_GROWLITHE_HISUIAN] =
    {
        GROWLITHE_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_ROCK },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .categoryName = _("放哨"),
        .height = 8,
        .weight = 227,
        .description = COMPOUND_STRING("They patrol their territory in pairs.\n""It's believed the igneous rock components\n""in the fur of this species are the result\n""of volcanic activity in its habitat."),
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(GrowlitheHisuian, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_GrowlitheHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GrowlitheHisuian, 56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GrowlitheHisuian),
        ICON(GrowlitheHisuian, 0),
        LEARNSETS(GrowlitheHisuian),
        .isHisuianForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE_HISUIAN}),
    },

    [SPECIES_ARCANINE_HISUIAN] =
    {
        ARCANINE_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_ROCK },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD },
        .height = 20,
        .weight = 1680,
        .description = COMPOUND_STRING("Snaps at its foes with fangs cloaked in\n""blazing flame. Despite its bulk, it deftly\n""feints every which way, leading opponents\n""on a deceptively merry chase."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
        FRONT_PIC(ArcanineHisuian, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ArcanineHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ArcanineHisuian, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ArcanineHisuian),
        ICON(ArcanineHisuian, 0),
        LEARNSETS(ArcanineHisuian),
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_POLIWAG
    [SPECIES_POLIWAG] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 60,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("蚊香蝌蚪"),
        .cryId = CRY_POLIWAG,
        .natDexNum = NATIONAL_DEX_POLIWAG,
        .categoryName = _("蝌蚪"),
        .height = 6,
        .weight = 124,
        .description = COMPOUND_STRING("漩涡是透明可见的内脏.\n当颜色带有白色时，\n说明是生什么病了."),
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Poliwag, 64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Poliwag,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Poliwag, 48, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Poliwag),
        ICON(Poliwag, 0),
        .footprint = gMonFootprint_Poliwag,
        LEARNSETS(Poliwag),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_POLIWHIRL}),
    },

    [SPECIES_POLIWHIRL] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 120,
        .expYield = 135,
        .evYield_Speed = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("蚊香君"),
        .cryId = CRY_POLIWHIRL,
        .natDexNum = NATIONAL_DEX_POLIWHIRL,
        .categoryName = _("蝌蚪"),
        .height = 10,
        .weight = 200,
        .description = COMPOUND_STRING("据说它会在要被对手攻击时\n用腹部的漩涡让对方睡着，\n趁机逃跑."),
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Poliwhirl, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Poliwhirl,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 5,
        BACK_PIC(Poliwhirl, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Poliwhirl),
        ICON(Poliwhirl, 0),
        .footprint = gMonFootprint_Poliwhirl,
        LEARNSETS(Poliwhirl),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH},
                                {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED},
                                {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED}),
    },

    [SPECIES_POLIWRATH] =
    {
        .baseHP        = 90,
        .baseAttack    = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .types = { TYPE_WATER, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 230,
        .evYield_Defense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("蚊香泳士"),
        .cryId = CRY_POLIWRATH,
        .natDexNum = NATIONAL_DEX_POLIWRATH,
        .categoryName = _("蝌蚪"),
        .height = 13,
        .weight = 540,
        .description = COMPOUND_STRING("虽然在水宝可梦中是属于\n游泳健将那一类的，\n但平时却生活在陆地上."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Poliwrath, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Poliwrath,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Poliwrath, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Poliwrath),
        ICON(Poliwrath, 0),
        .footprint = gMonFootprint_Poliwrath,
        LEARNSETS(Poliwrath),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_POLITOED] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_DRIZZLE },
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .speciesName = _("蚊香蛙皇"),
        .cryId = CRY_POLITOED,
        .natDexNum = NATIONAL_DEX_POLITOED,
        .categoryName = _("蛙"),
        .height = 11,
        .weight = 339,
        .description = COMPOUND_STRING("明明叫声有如嚎叫一般，\n但某位作曲家却受其影响\n创作了优美的叙事曲."),
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Politoed, 48, 56),
        FRONT_PIC_FEMALE(Politoed, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Politoed,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 40,
        BACK_PIC(Politoed, 56, 56),
        BACK_PIC_FEMALE(Politoed, 56, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Politoed),
        ICON(Politoed, 1),
        .footprint = gMonFootprint_Politoed,
        LEARNSETS(Politoed),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG

#if P_FAMILY_ABRA
    [SPECIES_ABRA] =
    {
        .baseHP        = 25,
        .baseAttack    = 20,
        .baseDefense   = 15,
        .baseSpeed     = 90,
        .baseSpAttack  = 105,
        .baseSpDefense = 55,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 200,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("凯西"),
        .cryId = CRY_ABRA,
        .natDexNum = NATIONAL_DEX_ABRA,
        .categoryName = _("念力"),
        .height = 9,
        .weight = 195,
        .description = COMPOUND_STRING("即使是在睡梦中也会使用\n各种超能力，所以\n分辨不出它是不是醒着."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Abra, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Abra,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Abra, 56, 48),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Abra),
        ICON(Abra, 2),
        .footprint = gMonFootprint_Abra,
        LEARNSETS(Abra),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_KADABRA}),
    },

    [SPECIES_KADABRA] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 100,
        .expYield = 140,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("勇基拉"),
        .cryId = CRY_KADABRA,
        .natDexNum = NATIONAL_DEX_KADABRA,
        .categoryName = _("念力"),
        .height = 13,
        .weight = 565,
        .description = COMPOUND_STRING("虽然有着强大的精神力，\n但如果没有拿着银汤匙，\n精神力量就会减半."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kadabra, 64, 56),
        FRONT_PIC_FEMALE(Kadabra, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Kadabra,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Kadabra, 64, 48),
        BACK_PIC_FEMALE(Kadabra, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Kadabra),
        ICON(Kadabra, 2),
        .footprint = gMonFootprint_Kadabra,
        LEARNSETS(Kadabra),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_ALAKAZAM},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_ALAKAZAM}),
    },

#define ALAKAZAM_SP_DEF (P_UPDATED_STATS >= GEN_6 ? 95 : 85)

#define ALAKAZAM_MISC_INFO                                          \
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },                    \
        .catchRate = 50,                                            \
        .evYield_SpAttack = 3,                                      \
        .itemRare = ITEM_TWISTED_SPOON,                             \
        .genderRatio = PERCENT_FEMALE(25),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_SLOW,                           \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },\
        .bodyColor = BODY_COLOR_BROWN,                              \
        .speciesName = _("胡地"),                               \
        .natDexNum = NATIONAL_DEX_ALAKAZAM,                         \
        .categoryName = _("念力"),                                   \
        .footprint = gMonFootprint_Alakazam,                        \
        LEARNSETS(Alakazam),                                        \
        .formSpeciesIdTable = sAlakazamFormSpeciesIdTable,          \
        .formChangeTable = sAlakazamFormChangeTable

    [SPECIES_ALAKAZAM] =
    {
        ALAKAZAM_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 120,
        .baseSpAttack  = 135,
        .baseSpDefense = ALAKAZAM_SP_DEF,
        .expYield = 225,
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD },
        .cryId = CRY_ALAKAZAM,
        .height = 15,
        .weight = 480,
        .description = COMPOUND_STRING("智商大约有5000.\n强大的念力满溢出来，\n光是呆在旁边就会头痛不已."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Alakazam, 64, 64),
        FRONT_PIC_FEMALE(Alakazam, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Alakazam,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Alakazam, 64, 56),
        BACK_PIC_FEMALE(Alakazam, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(Alakazam),
        ICON(Alakazam, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_ALAKAZAM_MEGA] =
    {
        ALAKAZAM_MISC_INFO,
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpeed     = 150,
        .baseSpAttack  = 175,
        .baseSpDefense = ALAKAZAM_SP_DEF + 10,
        .expYield = 270,
        .abilities = { ABILITY_TRACE, ABILITY_TRACE, ABILITY_TRACE },
        .cryId = CRY_ALAKAZAM_MEGA,
        .height = 12,
        .weight = 480,
        .description = COMPOUND_STRING("Having traded away its muscles, Alakazam's\n""true power has been unleashed. With its\n""psychic powers, it can foresee all things."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(AlakazamMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AlakazamMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(AlakazamMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(AlakazamMega),
        ICON(AlakazamMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
    [SPECIES_MACHOP] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 180,
        .expYield = 61,
        .evYield_Attack = 1,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("腕力"),
        .cryId = CRY_MACHOP,
        .natDexNum = NATIONAL_DEX_MACHOP,
        .categoryName = _("怪力"),
        .height = 8,
        .weight = 195,
        .description = COMPOUND_STRING("全身都是肌肉，\n虽然只有小孩那么大，\n却可以扔飞100个成年人."),
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Machop, 48, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Machop,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Machop, 48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Machop),
        ICON(Machop, 0),
        .footprint = gMonFootprint_Machop,
        LEARNSETS(Machop),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MACHOKE}),
    },

    [SPECIES_MACHOKE] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 90,
        .expYield = 142,
        .evYield_Attack = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("豪力"),
        .cryId = CRY_MACHOKE,
        .natDexNum = NATIONAL_DEX_MACHOKE,
        .categoryName = _("怪力"),
        .height = 15,
        .weight = 705,
        .description = COMPOUND_STRING("因为肉体非常强韧，所以戴\n着力量限制腰带来控制力量."),
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Machoke, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Machoke,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Machoke, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Machoke),
        ICON(Machoke, 2),
        .footprint = gMonFootprint_Machoke,
        LEARNSETS(Machoke),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_MACHAMP},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_MACHAMP}),
    },

#define MACHAMP_MISC_INFO                                                   \
        .baseHP        = 90,                                                \
        .baseAttack    = 130,                                               \
        .baseDefense   = 80,                                                \
        .baseSpeed     = 55,                                                \
        .baseSpAttack  = 65,                                                \
        .baseSpDefense = 85,                                                \
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },                          \
        .catchRate = 45,                                                    \
        .expYield = 227,                                                    \
        .evYield_Attack = 3,                                                \
        .itemRare = ITEM_FOCUS_BAND,                                        \
        .genderRatio = PERCENT_FEMALE(25),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },        \
        .abilities = { ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST }, \
        .bodyColor = BODY_COLOR_GRAY,                                       \
        .speciesName = _("怪力"),                                        \
        .cryId = CRY_MACHAMP,                                               \
        .natDexNum = NATIONAL_DEX_MACHAMP,                                  \
        .categoryName = _("怪力"),                                    \
        .footprint = gMonFootprint_Machamp,                                 \
        LEARNSETS(Machamp),                                                 \
        .formSpeciesIdTable = sMachampFormSpeciesIdTable,                   \
        .formChangeTable = sMachampFormChangeTable

    [SPECIES_MACHAMP] =
    {
        MACHAMP_MISC_INFO,
        .height = 16,
        .weight = 1300,
        .description = COMPOUND_STRING("4只手臂在思考之前就会\n反射性地行动，\n使出多发拳击."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        FRONT_PIC(Machamp, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Machamp,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Machamp, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Machamp),
        ICON(Machamp, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_MACHAMP_GIGANTAMAX] =
    {
        MACHAMP_MISC_INFO,
        .height = 250,
        .weight = 0,
        .description = COMPOUND_STRING("One of these Pokémon once used\n""its immeasurable strength to lift a\n""large ship that was in trouble. It\n""then carried the ship to port."),
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
        FRONT_PIC(MachampGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MachampGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MachampGigantamax, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MachampGigantamax),
        ICON(MachampGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
    [SPECIES_BELLSPROUT] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 70,
        .baseSpDefense = 30,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 255,
        .expYield = 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("铃铛"),
        .cryId = CRY_BELLSPROUT,
        .natDexNum = NATIONAL_DEX_BELLSPROUT,
        .categoryName = _("花"),
        .height = 7,
        .weight = 40,
        .description = COMPOUND_STRING("喜欢温度高，有一定湿度的\n地方.它会用身上的\n藤蔓抓小虫来吃."),
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Bellsprout, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Bellsprout,
        .frontAnimId = ANIM_H_JUMPS,
        BACK_PIC(Bellsprout, 40, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Bellsprout),
        ICON(Bellsprout, 1),
        .footprint = gMonFootprint_Bellsprout,
        LEARNSETS(Bellsprout),
        .evolutions = EVOLUTION({EVO_LEVEL, 21, SPECIES_WEEPINBELL}),
    },

    [SPECIES_WEEPINBELL] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 120,
        .expYield = 137,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("口呆花"),
        .cryId = CRY_WEEPINBELL,
        .natDexNum = NATIONAL_DEX_WEEPINBELL,
        .categoryName = _("捕绳"),
        .height = 10,
        .weight = 64,
        .description = COMPOUND_STRING("它在肚子饿的时候会吞掉\n周围会动的东西，\n分泌溶解液让其致命."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Weepinbell, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Weepinbell,
        .frontAnimId = ANIM_SWING_CONVEX,
        .frontAnimDelay = 3,
        BACK_PIC(Weepinbell, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Weepinbell),
        ICON(Weepinbell, 1),
        .footprint = gMonFootprint_Weepinbell,
        LEARNSETS(Weepinbell),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}),
    },

    [SPECIES_VICTREEBEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 70 : 60,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 221,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("大食花"),
        .cryId = CRY_VICTREEBEL,
        .natDexNum = NATIONAL_DEX_VICTREEBEL,
        .categoryName = _("捕绳"),
        .height = 17,
        .weight = 155,
        .description = COMPOUND_STRING("被它吞进体内的东西不管\n有多硬，都会被溶解液\n不留痕迹地溶化掉."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
        FRONT_PIC(Victreebel, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Victreebel,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Victreebel, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Victreebel),
        ICON(Victreebel, 1),
        .footprint = gMonFootprint_Victreebel,
        LEARNSETS(Victreebel),
    },
#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_TENTACOOL
    [SPECIES_TENTACOOL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_POISON },
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("玛瑙水母"),
        .cryId = CRY_TENTACOOL,
        .natDexNum = NATIONAL_DEX_TENTACOOL,
        .categoryName = _("水母"),
        .height = 9,
        .weight = 455,
        .description = COMPOUND_STRING("有时能在沙滩上发现它\n干巴巴的身体，但是它\n只要沾到水就能复活."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tentacool, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Tentacool,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Tentacool, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Tentacool),
        ICON(Tentacool, 0),
        .footprint = gMonFootprint_Tentacool,
        LEARNSETS(Tentacool),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_TENTACRUEL}),
    },

    [SPECIES_TENTACRUEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = { TYPE_WATER, TYPE_POISON },
        .catchRate = 60,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("毒刺水母"),
        .cryId = CRY_TENTACRUEL,
        .natDexNum = NATIONAL_DEX_TENTACRUEL,
        .categoryName = _("水母"),
        .height = 16,
        .weight = 550,
        .description = COMPOUND_STRING("它能让80条触手自由伸缩，\n靠缠住猎物后注入\n毒素来让其变弱."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
        FRONT_PIC(Tentacruel, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Tentacruel,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        BACK_PIC(Tentacruel, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Tentacruel),
        ICON(Tentacruel, 0),
        .footprint = gMonFootprint_Tentacruel,
        LEARNSETS(Tentacruel),
    },
#endif //P_FAMILY_TENTACOOL

#if P_FAMILY_GEODUDE
#define KANTONIAN_GEODUDE_FAMILY_INFO                                       \
        .types = { TYPE_ROCK, TYPE_GROUND },                                \
        .itemRare = ITEM_EVERSTONE,                                         \
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL }

#define GEODUDE_FAMILY_MISC_INFO                                \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 15,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_SLOW,                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },  \
        .bodyColor = BODY_COLOR_BROWN

#define GEODUDE_MISC_INFO                                   \
        .baseHP        = 40,                                \
        .baseAttack    = 80,                                \
        .baseDefense   = 100,                               \
        .baseSpeed     = 20,                                \
        .baseSpAttack  = 30,                                \
        .baseSpDefense = 30,                                \
        .catchRate = 255,                                   \
        .expYield = 60,                                     \
        .evYield_Defense = 1,                               \
        .speciesName = _("小拳石"),                        \
        .cryId = CRY_GEODUDE,                               \
        .natDexNum = NATIONAL_DEX_GEODUDE,                  \
        .categoryName = _("岩石"),                          \
        .height = 4,                                        \
        .pokemonScale = 347,                                \
        .pokemonOffset = 18,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Geodude,                 \
        .formSpeciesIdTable = sGeodudeFormSpeciesIdTable,   \
        GEODUDE_FAMILY_MISC_INFO

#define GRAVELER_MISC_INFO                                  \
        .baseHP        = 55,                                \
        .baseAttack    = 95,                                \
        .baseDefense   = 115,                               \
        .baseSpeed     = 35,                                \
        .baseSpAttack  = 45,                                \
        .baseSpDefense = 45,                                \
        .catchRate = 120,                                   \
        .expYield = 137,                                    \
        .evYield_Defense = 2,                               \
        .speciesName = _("隆隆石"),                       \
        .cryId = CRY_GRAVELER,                              \
        .natDexNum = NATIONAL_DEX_GRAVELER,                 \
        .categoryName = _("岩石"),                          \
        .height = 10,                                       \
        .pokemonScale = 256,                                \
        .pokemonOffset = 2,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Graveler,                \
        .formSpeciesIdTable = sGravelerFormSpeciesIdTable,  \
        GEODUDE_FAMILY_MISC_INFO

#define GOLEM_ATTACK (P_UPDATED_STATS >= GEN_6 ? 120 : 110)

#define GOLEM_MISC_INFO                                 \
        .baseHP        = 80,                            \
        .baseAttack    = GOLEM_ATTACK,                  \
        .baseDefense   = 130,                           \
        .baseSpeed     = 45,                            \
        .baseSpAttack  = 55,                            \
        .baseSpDefense = 65,                            \
        .catchRate = 45,                                \
        .expYield = 223,                                \
        .evYield_Defense = 3,                           \
        .speciesName = _("隆隆岩"),                      \
        .cryId = CRY_GOLEM,                             \
        .natDexNum = NATIONAL_DEX_GOLEM,                \
        .categoryName = _("重量级"),                   \
        .footprint = gMonFootprint_Golem,               \
        .formSpeciesIdTable = sGolemFormSpeciesIdTable, \
        GEODUDE_FAMILY_MISC_INFO

    [SPECIES_GEODUDE] =
    {
        KANTONIAN_GEODUDE_FAMILY_INFO,
        GEODUDE_MISC_INFO,
        .weight = 200,
        .description = COMPOUND_STRING("大多栖息于山路.由于\n不留神踩到它会使它大\n发雷霆，得多加小心."),
        FRONT_PIC(Geodude, 64, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_Geodude,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        .enemyMonElevation = 10,
        BACK_PIC(Geodude, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Geodude),
        ICON(Geodude, 1),
        LEARNSETS(Geodude),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GRAVELER}),
    },

    [SPECIES_GRAVELER] =
    {
        KANTONIAN_GEODUDE_FAMILY_INFO,
        GRAVELER_MISC_INFO,
        .weight = 1050,
        .description = COMPOUND_STRING("常在山路上滚来滚去.\n滚动时从来不关心前面的\n路上都有什么."),
        FRONT_PIC(Graveler, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Graveler,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Graveler, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Graveler),
        ICON(Graveler, 1),
        LEARNSETS(Graveler),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM}),
    },

    [SPECIES_GOLEM] =
    {
        KANTONIAN_GEODUDE_FAMILY_INFO,
        GOLEM_MISC_INFO,
        .height = 14,
        .weight = 3000,
        .description = COMPOUND_STRING("即使用炸药爆破身体也\n毫发无伤，但非常\n讨厌湿气和雨."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(Golem, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Golem,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        BACK_PIC(Golem, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Golem),
        ICON(Golem, 2),
        LEARNSETS(Golem),
    },

#if P_ALOLAN_FORMS
#define ALOLAN_GEODUDE_FAMILY_INFO                                              \
        .types = { TYPE_ROCK, TYPE_ELECTRIC },                                  \
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE },\
        .isAlolanForm = TRUE

    [SPECIES_GEODUDE_ALOLAN] =
    {
        ALOLAN_GEODUDE_FAMILY_INFO,
        GEODUDE_MISC_INFO,
        .itemRare = ITEM_CELL_BATTERY,
        .weight = 203,
        .description = COMPOUND_STRING("Its body is a magnetic stone. Iron sand\n""attach to parts of its body with stronger\n""magnetism. If you carelessly step on one,\n""it will headbutt and shock you in anger."),
        FRONT_PIC(GeodudeAlolan, 48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_GeodudeAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 16,
        BACK_PIC(GeodudeAlolan, 64, 56),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GeodudeAlolan),
        ICON(GeodudeAlolan, 2),
        LEARNSETS(GeodudeAlolan),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_GRAVELER_ALOLAN}),
    },

    [SPECIES_GRAVELER_ALOLAN] =
    {
        ALOLAN_GEODUDE_FAMILY_INFO,
        GRAVELER_MISC_INFO,
        .itemRare = ITEM_CELL_BATTERY,
        .weight = 1100,
        .description = COMPOUND_STRING("When two Graveler smash each other over\n""dravite, their favorite food, they cause\n""flashes of light and booming noises.\n""People call them “fireworks of the earth.”"),
        FRONT_PIC(GravelerAlolan, 64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_GravelerAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GravelerAlolan, 64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GravelerAlolan),
        ICON(GravelerAlolan, 2),
        LEARNSETS(GravelerAlolan),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GOLEM_ALOLAN},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GOLEM_ALOLAN}),
    },

    [SPECIES_GOLEM_ALOLAN] =
    {
        ALOLAN_GEODUDE_FAMILY_INFO,
        GOLEM_MISC_INFO,
        .itemCommon = ITEM_CELL_BATTERY,
        .height = 17,
        .weight = 3160,
        .description = COMPOUND_STRING("It fires rocks charged with electricity.\n""Even if the rock isn't fired that\n""accurately, just grazing an opponent\n""will cause numbness and fainting."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(GolemAlolan, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GolemAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GolemAlolan, 64, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GolemAlolan),
        ICON(GolemAlolan, 2),
        LEARNSETS(GolemAlolan),
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GEODUDE

#if P_FAMILY_PONYTA
#define KANTONIAN_PONYTA_FAMILY_INFO                                                \
        .types = { TYPE_FIRE, TYPE_FIRE },                                          \
        .abilities = { ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY },  \
        .bodyColor = BODY_COLOR_YELLOW

#define PONYTA_FAMILY_MISC_INFO                             \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD }

#define PONYTA_MISC_INFO                                \
        .baseHP        = 50,                            \
        .baseAttack    = 85,                            \
        .baseDefense   = 55,                            \
        .baseSpeed     = 90,                            \
        .baseSpAttack  = 65,                            \
        .baseSpDefense = 65,                            \
        .catchRate = 190,                               \
        .expYield = 82,                                 \
        .evYield_Speed = 1,                             \
        .speciesName = _("小火马"),                     \
        .cryId = CRY_PONYTA,                            \
        .natDexNum = NATIONAL_DEX_PONYTA,               \
        .footprint = gMonFootprint_Ponyta,              \
        .formSpeciesIdTable = sPonytaFormSpeciesIdTable,\
        PONYTA_FAMILY_MISC_INFO

#define RAPIDASH_MISC_INFO                                  \
        .baseHP        = 65,                                \
        .baseAttack    = 100,                               \
        .baseDefense   = 70,                                \
        .baseSpeed     = 105,                               \
        .baseSpAttack  = 80,                                \
        .baseSpDefense = 80,                                \
        .catchRate = 60,                                    \
        .expYield = 175,                                    \
        .evYield_Speed = 2,                                 \
        .speciesName = _("烈焰马"),                       \
        .cryId = CRY_RAPIDASH,                              \
        .natDexNum = NATIONAL_DEX_RAPIDASH,                 \
        .height = 17,                                       \
        .pokemonScale = 256,                                \
        .pokemonOffset = 0,                                 \
        .trainerScale = 289,                                \
        .trainerOffset = 1,                                 \
        .footprint = gMonFootprint_Rapidash,                \
        .formSpeciesIdTable = sRapidashFormSpeciesIdTable,  \
        PONYTA_FAMILY_MISC_INFO

    [SPECIES_PONYTA] =
    {
        KANTONIAN_PONYTA_FAMILY_INFO,
        PONYTA_MISC_INFO,
        .categoryName = _("火之马"),
        .height = 10,
        .weight = 300,
        .description = COMPOUND_STRING("得到了小火马认可的人，在\n触摸它燃烧着的鬃毛时不会\n觉得烫手，真是不可思议."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ponyta, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Ponyta,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 10,
        BACK_PIC(Ponyta, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Ponyta),
        ICON(Ponyta, 3),
        LEARNSETS(Ponyta),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_RAPIDASH}),
    },

    [SPECIES_RAPIDASH] =
    {
        KANTONIAN_PONYTA_FAMILY_INFO,
        RAPIDASH_MISC_INFO,
        .categoryName = _("火之马"),
        .weight = 950,
        .description = COMPOUND_STRING("奔跑速度最快的烈焰马会\n成为首领，决定族群前往\n的地点和奔跑速度."),
        FRONT_PIC(Rapidash, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Rapidash,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Rapidash, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Rapidash),
        ICON(Rapidash, 3),
        LEARNSETS(Rapidash),
    },

#define GALARIAN_PONYTA_FAMILY_INFO                                                 \
        .abilities = { ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION },\
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .isGalarianForm = TRUE

#if P_GALARIAN_FORMS
    [SPECIES_PONYTA_GALARIAN] =
    {
        GALARIAN_PONYTA_FAMILY_INFO,
        PONYTA_MISC_INFO,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .categoryName = _("Unique Horn"),
        .height = 8,
        .weight = 240,
        .description = COMPOUND_STRING("Its small horn hides a healing power.\n""This Pokémon will look into your eyes and\n""read the contents of your heart. If it\n""finds evil there, it promptly hides away."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PonytaGalarian, 64, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_PonytaGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(PonytaGalarian, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(PonytaGalarian),
        ICON(PonytaGalarian, 2),
        LEARNSETS(PonytaGalarian),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_RAPIDASH_GALARIAN}),
    },

    [SPECIES_RAPIDASH_GALARIAN] =
    {
        GALARIAN_PONYTA_FAMILY_INFO,
        RAPIDASH_MISC_INFO,
        .types = { TYPE_PSYCHIC, TYPE_FAIRY },
        .categoryName = _("Unique Horn"),
        .weight = 800,
        .description = COMPOUND_STRING("Little can stand up to its psycho cut.\n""Unleashed from this Pokémon's horn,\n""the move will punch a hole right\n""through a thick metal sheet."),
        FRONT_PIC(RapidashGalarian, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RapidashGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(RapidashGalarian, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RapidashGalarian),
        ICON(RapidashGalarian, 2),
        LEARNSETS(RapidashGalarian),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_PONYTA

#if P_FAMILY_SLOWPOKE
#define SLOWPOKE_MISC_INFO                                      \
        .baseHP        = 90,                                    \
        .baseAttack    = 65,                                    \
        .baseDefense   = 65,                                    \
        .baseSpeed     = 15,                                    \
        .baseSpAttack  = 40,                                    \
        .baseSpDefense = 40,                                    \
        .catchRate = 190,                                       \
        .expYield = 63,                                         \
        .evYield_HP = 1,                                        \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },  \
        .bodyColor = BODY_COLOR_PINK,                           \
        .speciesName = _("呆呆兽"),                           \
        .natDexNum = NATIONAL_DEX_SLOWPOKE,                     \
        .categoryName = _("憨憨"),                             \
        .height = 12,                                           \
        .weight = 360,                                          \
        .pokemonScale = 256,                                    \
        .pokemonOffset = 10,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Slowpoke,                    \
        .formSpeciesIdTable = sSlowpokeFormSpeciesIdTable

#define SLOWBRO_MISC_INFO                                       \
        .catchRate = 75,                                        \
        .itemRare = ITEM_KINGS_ROCK,                            \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },  \
        .bodyColor = BODY_COLOR_PINK,                           \
        .speciesName = _("呆壳兽"),                            \
        .cryId = CRY_SLOWBRO,                                   \
        .natDexNum = NATIONAL_DEX_SLOWBRO,                      \
        .categoryName = _("寄居蟹"),                       \
        .footprint = gMonFootprint_Slowbro,                     \
        .formSpeciesIdTable = sSlowbroFormSpeciesIdTable

#define SLOWKING_MISC_INFO                                      \
        .catchRate = 70,                                        \
        .expYield = 172,                                        \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },  \
        .bodyColor = BODY_COLOR_PINK,                           \
        .speciesName = _("呆呆王"),                           \
        .cryId = CRY_SLOWKING,                                  \
        .natDexNum = NATIONAL_DEX_SLOWKING,                     \
        .weight = 795,                                          \
        .footprint = gMonFootprint_Slowking,                    \
        .formSpeciesIdTable = sSlowkingFormSpeciesIdTable

    [SPECIES_SLOWPOKE] =
    {
        SLOWPOKE_MISC_INFO,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .itemRare = ITEM_LAGGING_TAIL,
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .cryId = CRY_SLOWPOKE,
        .description = COMPOUND_STRING("非常呆，动作也很缓慢.\n从不在意时间的流逝，\n过着悠闲的生活."),
        FRONT_PIC(Slowpoke, 64, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Slowpoke,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Slowpoke, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Slowpoke),
        ICON(Slowpoke, 0),
        LEARNSETS(Slowpoke),
        .evolutions = EVOLUTION({EVO_LEVEL, 37, SPECIES_SLOWBRO},
                                {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING},
                                {EVO_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}),
    },

    [SPECIES_SLOWBRO] =
    {
        SLOWBRO_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .expYield = 172,
        .evYield_Defense = 2,
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .height = 16,
        .weight = 785,
        .description = COMPOUND_STRING("基本上一直在发呆.当尾巴\n被切断，大舌贝脱落后，\n它就会变回呆呆兽."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(Slowbro, 56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Slowbro,
        .frontAnimId = ANIM_H_STRETCH,
        BACK_PIC(Slowbro, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Slowbro),
        ICON(Slowbro, 0),
        LEARNSETS(Slowbro),
        .formChangeTable = sSlowbroFormChangeTable,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING] =
    {
        SLOWKING_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 110,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .categoryName = _("王者"),
        .height = 20,
        .description = COMPOUND_STRING("脑海中经常会涌现出一些\n像是改变世界的想法，\n但不久后会依次忘记."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(Slowking, 48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Slowking,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Slowking, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Slowking),
        ICON(Slowking, 0),
        LEARNSETS(Slowking),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_MEGA_EVOLUTIONS
    [SPECIES_SLOWBRO_MEGA] =
    {
        SLOWBRO_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 180,
        .baseSpeed     = 30,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .expYield = 207,
        .evYield_Defense = 2,
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR },
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING("When bathed in the energy of Mega\n""Evolution, Shellder converts into\n""impregnable armor. There is virtually no\n""change in Slowpoke."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(SlowbroMega, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SlowbroMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowbroMega, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(SlowbroMega),
        ICON(SlowbroMega, 0),
        LEARNSETS(Slowbro),
        .formChangeTable = sSlowbroFormChangeTable,
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GALARIAN_FORMS
    [SPECIES_SLOWPOKE_GALARIAN] =
    {
        SLOWPOKE_MISC_INFO,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .abilities = { ABILITY_GLUTTONY, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .cryId = CRY_SLOWPOKE_GALARIAN,
        .description = COMPOUND_STRING("Although it is normally zoned out, its\n""expression abruptly sharpens on occasion.\n""The cause seems to lie in Slowpoke's diet,\n""which also give their tails a spicy flavor."),
        FRONT_PIC(SlowpokeGalarian, 56, 32),
        .frontPicYOffset = 19,
        .frontAnimFrames = sAnims_SlowpokeGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowpokeGalarian, 64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SlowpokeGalarian),
        ICON(SlowpokeGalarian, 1),
        LEARNSETS(SlowpokeGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_GALARICA_CUFF, SPECIES_SLOWBRO_GALARIAN},
                                {EVO_ITEM, ITEM_GALARICA_WREATH, SPECIES_SLOWKING_GALARIAN}),
    },

    [SPECIES_SLOWBRO_GALARIAN] =
    {
        SLOWBRO_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .types = { TYPE_POISON, TYPE_PSYCHIC },
        .expYield = 172,
        .evYield_Attack = 2,
        .abilities = { ABILITY_QUICK_DRAW, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .height = 16,
        .weight = 705,
        .description = COMPOUND_STRING("A Shellder bite set off a chemical reaction\n""with the spices inside Slowbro's body,\n""causing Slowbro to become a\n""Poison-type Pokémon."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
        FRONT_PIC(SlowbroGalarian, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_SlowbroGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowbroGalarian, 64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SlowbroGalarian),
        ICON(SlowbroGalarian, 0),
        LEARNSETS(SlowbroGalarian),
        .isGalarianForm = TRUE,
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING_GALARIAN] =
    {
        SLOWKING_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 110,
        .baseSpDefense = 110,
        .types = { TYPE_POISON, TYPE_PSYCHIC },
        .evYield_SpDefense = 2,
        .abilities = { ABILITY_CURIOUS_MEDICINE, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR },
        .categoryName = _("Hexpert"),
        .height = 18,
        .description = COMPOUND_STRING("A combination of toxins and the shock of\n""evolving has increased Shellder's\n""intelligence to the point that Shellder\n""now controls Slowking."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(SlowkingGalarian, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SlowkingGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SlowkingGalarian, 56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SlowkingGalarian),
        ICON(SlowkingGalarian, 2),
        LEARNSETS(SlowkingGalarian),
        .isGalarianForm = TRUE,
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_MAGNEMITE
    [SPECIES_MAGNEMITE] =
    {
        .baseHP        = 25,
        .baseAttack    = 35,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 95,
        .baseSpDefense = 55,
        .types = { TYPE_ELECTRIC, TYPE_STEEL },
        .catchRate = 190,
        .expYield = 65,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("小磁怪"),
        .cryId = CRY_MAGNEMITE,
        .natDexNum = NATIONAL_DEX_MAGNEMITE,
        .categoryName = _("磁铁"),
        .height = 3,
        .weight = 60,
        .description = COMPOUND_STRING("聚集在有电的地方.\n也会密密麻麻地贴在\n输送电力的铁塔等地方."),
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magnemite, 48, 32),
        .frontPicYOffset = 20,
        .frontAnimFrames = sAnims_Magnemite,
        .frontAnimId = ANIM_TUMBLING_FRONT_FLIP_TWICE,
        .enemyMonElevation = 17,
        BACK_PIC(Magnemite, 48, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Magnemite),
        ICON(Magnemite, 0),
        .footprint = gMonFootprint_Magnemite,
        LEARNSETS(Magnemite),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MAGNETON}),
    },

    [SPECIES_MAGNETON] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .types = { TYPE_ELECTRIC, TYPE_STEEL },
        .catchRate = 60,
        .expYield = 163,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("磁铁"),
        .cryId = CRY_MAGNETON,
        .natDexNum = NATIONAL_DEX_MAGNETON,
        .categoryName = _("磁铁"),
        .height = 10,
        .weight = 600,
        .description = COMPOUND_STRING("雨云形成后，它们就会\n聚集在高处，等待着从\n天上落下雷电."),
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magneton, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Magneton,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = 9,
        BACK_PIC(Magneton, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Magneton),
        ICON(Magneton, 0),
        .footprint = gMonFootprint_Magneton,
        LEARNSETS(Magneton),
        .evolutions = EVOLUTION({EVO_MAPSEC, MAPSEC_NEW_MAUVILLE, SPECIES_MAGNEZONE},
                                {EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_MAGNEZONE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGNEZONE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = { TYPE_ELECTRIC, TYPE_STEEL },
        .catchRate = 30,
        .expYield = 241,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("自爆磁怪"),
        .cryId = CRY_MAGNEZONE,
        .natDexNum = NATIONAL_DEX_MAGNEZONE,
        .categoryName = _("磁铁"),
        .height = 12,
        .weight = 1800,
        .description = COMPOUND_STRING("直至今日仍有人们\n相信它是来自宇宙的.\n会释放出强力的磁力."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magnezone, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magnezone,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 4,
        BACK_PIC(Magnezone, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Magnezone),
        ICON(Magnezone, 0),
        .footprint = gMonFootprint_Magnezone,
        LEARNSETS(Magnezone),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGNEMITE

#if P_FAMILY_FARFETCHD
#define FARFETCHD_ATTACK (P_UPDATED_STATS >= GEN_7 ? 90 : 65)

#define FARFETCHD_MISC_INFO                                 \
        .catchRate = 45,                                    \
        .expYield = 132,                                    \
        .evYield_Attack = 1,                                \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FIELD }, \
        .bodyColor = BODY_COLOR_BROWN,                      \
        .speciesName = _("大葱鸭"),                     \
        .cryId = CRY_FARFETCHD,                             \
        .natDexNum = NATIONAL_DEX_FARFETCHD,                \
        .categoryName = _("黄嘴鸭"),                     \
        .footprint = gMonFootprint_Farfetchd,               \
        .formSpeciesIdTable = sFarfetchdFormSpeciesIdTable

    [SPECIES_FARFETCHD] =
    {
        FARFETCHD_MISC_INFO,
        .baseHP        = 52,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .baseAttack    = FARFETCHD_ATTACK,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .itemRare = ITEM_LEEK,
        .abilities = { ABILITY_KEEN_EYE, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .height = 8,
        .weight = 150,
        .description = COMPOUND_STRING("用植物的茎来战斗.\n茎的挥舞方式存在着\n好几种不同的流派."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Farfetchd, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Farfetchd,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        BACK_PIC(Farfetchd, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Farfetchd),
        ICON(Farfetchd, 1),
        LEARNSETS(Farfetchd),
    },

#if P_GALARIAN_FORMS
    [SPECIES_FARFETCHD_GALARIAN] =
    {
        FARFETCHD_MISC_INFO,
        .baseHP        = 52,
        .baseAttack    = FARFETCHD_ATTACK + 5,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .itemCommon = ITEM_LEEK,
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .height = 8,
        .weight = 420,
        .description = COMPOUND_STRING("The stalks of leeks are thicker and longer\n""in the Galar region. Brave Farfetch'd\n""warriors that adapted to these stalks\n""took on a unique form."),
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(FarfetchdGalarian, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_FarfetchdGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(FarfetchdGalarian, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(FarfetchdGalarian),
        ICON(FarfetchdGalarian, 1),
        LEARNSETS(FarfetchdGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_CRITICAL_HITS, 3, SPECIES_SIRFETCHD}),
    },

    [SPECIES_SIRFETCHD] =
    {
        .baseHP        = 62,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 68,
        .baseSpDefense = 82,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FIELD },
        .abilities = { ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("葱游兵"),
        .cryId = CRY_SIRFETCHD,
        .natDexNum = NATIONAL_DEX_SIRFETCHD,
        .categoryName = _("黄嘴鸭"),
        .height = 8,
        .weight = 1170,
        .description = COMPOUND_STRING("会用坚硬的葱叶抵挡攻击，\n接着用锋利的茎反击.\n它的葱既是武器也是食材."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Sirfetchd, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sirfetchd,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sirfetchd, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Sirfetchd),
        ICON(Sirfetchd, 1),
        .footprint = gMonFootprint_Sirfetchd,
        LEARNSETS(Sirfetchd),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_DODUO
    [SPECIES_DODUO] =
    {
        .baseHP        = 35,
        .baseAttack    = 85,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 190,
        .expYield = 62,
        .evYield_Attack = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("嘟嘟"),
        .cryId = CRY_DODUO,
        .natDexNum = NATIONAL_DEX_DODUO,
        .categoryName = _("两头鸟"),
        .height = 14,
        .weight = 392,
        .description = COMPOUND_STRING("羽毛较短所以不擅长飞行，\n但是拥有发达的双脚，\n能够以很快的速度奔跑."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
        FRONT_PIC(Doduo, 64, 56),
        FRONT_PIC_FEMALE(Doduo, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Doduo,
        .frontAnimId = ANIM_H_SHAKE_SLOW,
        BACK_PIC(Doduo, 64, 56),
        BACK_PIC_FEMALE(Doduo, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Doduo),
        ICON(Doduo, 2),
        .footprint = gMonFootprint_Doduo,
        LEARNSETS(Doduo),
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_DODRIO}),
    },

    [SPECIES_DODRIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 110 : 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 165,
        .evYield_Attack = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("嘟嘟利"),
        .cryId = CRY_DODRIO,
        .natDexNum = NATIONAL_DEX_DODRIO,
        .categoryName = _("三头鸟"),
        .height = 18,
        .weight = 852,
        .description = COMPOUND_STRING("由嘟嘟的某个头分裂出的\n变种.以60千米的时速\n在草原上奔跑."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
        FRONT_PIC(Dodrio, 64, 64),
        FRONT_PIC_FEMALE(Dodrio, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dodrio,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Dodrio, 64, 64),
        BACK_PIC_FEMALE(Dodrio, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Dodrio),
        ICON(Dodrio, 2),
        .footprint = gMonFootprint_Dodrio,
        LEARNSETS(Dodrio),
    },
#endif //P_FAMILY_DODUO

#if P_FAMILY_SEEL
    [SPECIES_SEEL] =
    {
        .baseHP        = 65,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 65,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("小海狮"),
        .cryId = CRY_SEEL,
        .natDexNum = NATIONAL_DEX_SEEL,
        .categoryName = _("海狮"),
        .height = 11,
        .weight = 900,
        .description = COMPOUND_STRING("喜欢天寒地冻的地方，\n就算零下10度\n也能愉快地游泳."),
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seel, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Seel,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Seel, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Seel),
        ICON(Seel, 0),
        .footprint = gMonFootprint_Seel,
        LEARNSETS(Seel),
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_DEWGONG}),
    },

    [SPECIES_DEWGONG] =
    {
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = { TYPE_WATER, TYPE_ICE },
        .catchRate = 75,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("白海狮"),
        .cryId = CRY_DEWGONG,
        .natDexNum = NATIONAL_DEX_DEWGONG,
        .categoryName = _("海狮"),
        .height = 17,
        .weight = 1200,
        .description = COMPOUND_STRING("进食后会在沙滩上晒\n日光浴.会通过提高\n体温来帮助消化."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
        FRONT_PIC(Dewgong, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Dewgong,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Dewgong, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Dewgong),
        ICON(Dewgong, 2),
        .footprint = gMonFootprint_Dewgong,
        LEARNSETS(Dewgong),
    },
#endif //P_FAMILY_SEEL

#if P_FAMILY_GRIMER
#define GRIMER_FAMILY_MISC_INFO                                     \
        .itemRare = ITEM_BLACK_SLUDGE,                              \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS }

#define GRIMER_MISC_INFO                                \
        .baseHP        = 80,                            \
        .baseAttack    = 80,                            \
        .baseDefense   = 50,                            \
        .baseSpeed     = 25,                            \
        .baseSpAttack  = 40,                            \
        .baseSpDefense = 50,                            \
        .catchRate = 190,                               \
        .expYield = 65,                                 \
        .evYield_HP = 1,                                \
        .speciesName = _("臭泥"),                     \
        .cryId = CRY_GRIMER,                            \
        .natDexNum = NATIONAL_DEX_GRIMER,               \
        .categoryName = _("污泥"),                    \
        .footprint = gMonFootprint_Grimer,              \
        .formSpeciesIdTable = sGrimerFormSpeciesIdTable,\
        GRIMER_FAMILY_MISC_INFO

#define MUK_MISC_INFO                                   \
        .baseHP        = 105,                           \
        .baseAttack    = 105,                           \
        .baseDefense   = 75,                            \
        .baseSpeed     = 50,                            \
        .baseSpAttack  = 65,                            \
        .baseSpDefense = 100,                           \
        .catchRate = 75,                                \
        .expYield = 175,                                \
        .evYield_HP = 1,                                \
        .evYield_Attack = 1,                            \
        .speciesName = _("臭臭泥"),                        \
        .cryId = CRY_MUK,                               \
        .natDexNum = NATIONAL_DEX_MUK,                  \
        .categoryName = _("污泥"),                    \
        .footprint = gMonFootprint_Muk,                 \
        .formSpeciesIdTable = sMukFormSpeciesIdTable,   \
        GRIMER_FAMILY_MISC_INFO

#define KANTONIAN_GRIMER_FAMILY_INFO                                                \
        .types = { TYPE_POISON, TYPE_POISON },                                      \
        .abilities = { ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_POISON_TOUCH }, \
        .bodyColor = BODY_COLOR_PURPLE

    [SPECIES_GRIMER] =
    {
        KANTONIAN_GRIMER_FAMILY_INFO,
        GRIMER_MISC_INFO,
        .height = 9,
        .weight = 300,
        .description = COMPOUND_STRING("工厂排放的污泥废液是\n其主要的饵料.\n最近其数量减少了."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Grimer, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Grimer,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Grimer, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Grimer),
        ICON(Grimer, 2),
        LEARNSETS(Grimer),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK}),
    },

    [SPECIES_MUK] =
    {
        KANTONIAN_GRIMER_FAMILY_INFO,
        MUK_MISC_INFO,
        .height = 12,
        .weight = 300,
        .description = COMPOUND_STRING("在环境治理后的现在，\n明显已经看不到它们的\n身影了.据说早晚会灭绝."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Muk, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Muk,
        .frontAnimId = ANIM_DEEP_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 45,
        BACK_PIC(Muk, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_STRETCH,
        PALETTES(Muk),
        ICON(Muk, 2),
        LEARNSETS(Muk),
    },

#if P_ALOLAN_FORMS
#define ALOLAN_GRIMER_FAMILY_INFO                                                           \
        .types = { TYPE_POISON, TYPE_DARK },                                                \
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY },  \
        .bodyColor = BODY_COLOR_GREEN,                                                      \
        .isAlolanForm = TRUE

    [SPECIES_GRIMER_ALOLAN] =
    {
        ALOLAN_GRIMER_FAMILY_INFO,
        GRIMER_MISC_INFO,
        .height = 7,
        .weight = 420,
        .description = COMPOUND_STRING("There are a hundred or so of them living\n""in Alola's waste-disposal site. They're all\n""hard workers who eat a lot of trash. Grimer\n""seems to relish any and all kinds of trash."),
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(GrimerAlolan, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_GrimerAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GrimerAlolan, 64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GrimerAlolan),
        ICON(GrimerAlolan, 1),
        LEARNSETS(GrimerAlolan),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_MUK_ALOLAN}),
    },

    [SPECIES_MUK_ALOLAN] =
    {
        MUK_MISC_INFO,
        ALOLAN_GRIMER_FAMILY_INFO,
        .noFlip = TRUE,
        .height = 10,
        .weight = 520,
        .description = COMPOUND_STRING("While it's unexpectedly quiet and friendly,\n""if it's not fed any trash for a while,,\n""it will smash its Trainer's furnishings,\n""and eat up the fragments."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MukAlolan, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_MukAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MukAlolan, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MukAlolan),
        ICON(MukAlolan, 0),
        LEARNSETS(MukAlolan),
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_GRIMER

#if P_FAMILY_SHELLDER
    [SPECIES_SHELLDER] =
    {
        .baseHP        = 30,
        .baseAttack    = 65,
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense = 1,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("大舌贝"),
        .cryId = CRY_SHELLDER,
        .natDexNum = NATIONAL_DEX_SHELLDER,
        .categoryName = _("双壳"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING("通过片贝壳的不断\n开合来向后方游动.\n游动的速度相当快."),
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Shellder, 40, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Shellder,
        .frontAnimId = ANIM_TWIST,
        .frontAnimDelay = 20,
        BACK_PIC(Shellder, 48, 24),
        .backPicYOffset = 21,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Shellder),
        ICON(Shellder, 2),
        .footprint = gMonFootprint_Shellder,
        LEARNSETS(Shellder),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}),
    },

    [SPECIES_CLOYSTER] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 180,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_ICE },
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense = 2,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("刺甲贝"),
        .cryId = CRY_CLOYSTER,
        .natDexNum = NATIONAL_DEX_CLOYSTER,
        .categoryName = _("双壳"),
        .height = 15,
        .weight = 1325,
        .description = COMPOUND_STRING("贝壳非常坚硬，\n连燃烧弹都无法破坏.\n只有攻击的时候才会张开."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
        FRONT_PIC(Cloyster, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Cloyster,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Cloyster, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Cloyster),
        ICON(Cloyster, 2),
        .footprint = gMonFootprint_Cloyster,
        LEARNSETS(Cloyster),
    },
#endif //P_FAMILY_SHELLDER

#if P_FAMILY_GASTLY
    [SPECIES_GASTLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 35,
        .types = { TYPE_GHOST, TYPE_POISON },
        .catchRate = 190,
        .expYield = 62,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("鬼斯"),
        .cryId = CRY_GASTLY,
        .natDexNum = NATIONAL_DEX_GASTLY,
        .categoryName = _("气体"),
        .height = 13,
        .weight = 1,
        .description = COMPOUND_STRING("能用稀薄气体状的\n身体潜入任何地方，\n但只要起风就会被吹跑."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gastly, 64, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Gastly,
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = 13,
        BACK_PIC(Gastly, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Gastly),
        ICON(Gastly, 2),
        .footprint = gMonFootprint_Gastly,
        LEARNSETS(Gastly),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_HAUNTER}),
    },

    [SPECIES_HAUNTER] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 55,
        .types = { TYPE_GHOST, TYPE_POISON },
        .catchRate = 90,
        .expYield = 142,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("鬼斯通"),
        .cryId = CRY_HAUNTER,
        .natDexNum = NATIONAL_DEX_HAUNTER,
        .categoryName = _("气体"),
        .height = 16,
        .weight = 1,
        .description = COMPOUND_STRING("据说如果被它气体状的舌头\n舔到，身体就会无法停止\n颤抖，最终将会导致死亡."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Haunter, 64, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Haunter,
        .frontAnimId = ANIM_FLICKER_INCREASING,
        .frontAnimDelay = 23,
        .enemyMonElevation = 14,
        BACK_PIC(Haunter, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Haunter),
        ICON(Haunter, 2),
        .footprint = gMonFootprint_Haunter,
        LEARNSETS(Haunter),
        .evolutions = EVOLUTION({EVO_TRADE, 0, SPECIES_GENGAR},
                                {EVO_ITEM, ITEM_LINKING_CORD, SPECIES_GENGAR}),
    },

#if P_UPDATED_ABILITIES >= GEN_7
#define GENGAR_ABILITIES {ABILITY_CURSED_BODY, ABILITY_NONE}
#else
#define GENGAR_ABILITIES {ABILITY_LEVITATE, ABILITY_NONE}
#endif

#define GENGAR_MISC_INFO                                            \
        .types = { TYPE_GHOST, TYPE_POISON },                       \
        .catchRate = 45,                                            \
        .evYield_SpAttack = 3,                                      \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_SLOW,                           \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },  \
        .bodyColor = BODY_COLOR_PURPLE,                             \
        .speciesName = _("耿鬼"),                                 \
        .natDexNum = NATIONAL_DEX_GENGAR,                           \
        .categoryName = _("影子"),                                \
        .footprint = gMonFootprint_Gengar,                          \
        LEARNSETS(Gengar),                                          \
        .formSpeciesIdTable = sGengarFormSpeciesIdTable,            \
        .formChangeTable = sGengarFormChangeTable

    [SPECIES_GENGAR] =
    {
        GENGAR_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .expYield = 225,
        .abilities = GENGAR_ABILITIES,
        .height = 15,
        .weight = 405,
        .description = COMPOUND_STRING("据说它会为了夺取山中遇难\n者的生命而从黑暗中出现."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        FRONT_PIC(Gengar, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Gengar,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        BACK_PIC(Gengar, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Gengar),
        ICON(Gengar, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GENGAR_MEGA] =
    {
        GENGAR_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 170,
        .baseSpDefense = 95,
        .expYield = 270,
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG },
        .isMegaEvolution = TRUE,
        .height = 14,
        .weight = 405,
        .description = COMPOUND_STRING("Gengar's relationships are warped. It\n""tries to take the lives of anyone and\n""everyone. It will even try to curse the\n""Trainer who is its master!"),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        FRONT_PIC(GengarMega, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_GengarMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GengarMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(GengarMega),
        ICON(GengarMega, 2),
    },
#endif //P_MEGA_EVOLUTIONS

#if P_GIGANTAMAX_FORMS
    [SPECIES_GENGAR_GIGANTAMAX] =
    {
        GENGAR_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .expYield = 225,
        .abilities = GENGAR_ABILITIES,
        .isGigantamax = TRUE,
        .height = 200,
        .weight = 0,
        .description = COMPOUND_STRING("Rumor has it that its gigantic\n""mouth leads not into its body, filled\n""with cursed energy, but instead\n""directly to the afterlife."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
        FRONT_PIC(GengarGigantamax, 64, 64),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_GengarGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GengarGigantamax, 64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GengarGigantamax),
        ICON(GengarGigantamax, 2),
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
    [SPECIES_ONIX] =
    {
        .baseHP        = 35,
        .baseAttack    = 45,
        .baseDefense   = 160,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 77,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("大岩蛇"),
        .cryId = CRY_ONIX,
        .natDexNum = NATIONAL_DEX_ONIX,
        .categoryName = _("岩蛇"),
        .height = 88,
        .weight = 2100,
        .description = COMPOUND_STRING("弯曲扭动巨大结实的\n身体，以时速80公里的\n猛烈劲头向前挖进."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
        FRONT_PIC(Onix, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Onix,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Onix, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Onix),
        ICON(Onix, 2),
        .footprint = gMonFootprint_Onix,
        LEARNSETS(Onix),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX},
                                {EVO_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX}),
    },

#if P_GEN_2_CROSS_EVOS
#define STEELIX_MISC_INFO                                       \
        .types = { TYPE_STEEL, TYPE_GROUND },                   \
        .catchRate = 25,                                        \
        .evYield_Defense = 2,                                   \
        .itemRare = ITEM_METAL_COAT,                            \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 25,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },  \
        .bodyColor = BODY_COLOR_GRAY,                           \
        .speciesName = _("大钢蛇"),                            \
        .natDexNum = NATIONAL_DEX_STEELIX,                      \
        .categoryName = _("铁类"),                        \
        .footprint = gMonFootprint_Steelix,                     \
        LEARNSETS(Steelix),                                     \
        .formSpeciesIdTable = sSteelixFormSpeciesIdTable,       \
        .formChangeTable = sSteelixFormChangeTable

    [SPECIES_STEELIX] =
    {
        STEELIX_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 85,
        .baseDefense   = 200,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .expYield = 179,
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SHEER_FORCE },
        .cryId = CRY_STEELIX,
        .height = 92,
        .weight = 4000,
        .description = COMPOUND_STRING("据说当大岩蛇活到了100年\n以上，身体的成分就会\n变得如同钻石一般."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        FRONT_PIC(Steelix, 64, 64),
        FRONT_PIC_FEMALE(Steelix, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Steelix,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 45,
        BACK_PIC(Steelix, 64, 64),
        BACK_PIC_FEMALE(Steelix, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Steelix),
        ICON(Steelix, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_STEELIX_MEGA] =
    {
        STEELIX_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 230,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .expYield = 214,
        .abilities = { ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE },
        .cryId = CRY_STEELIX_MEGA,
        .height = 105,
        .weight = 7400,
        .description = COMPOUND_STRING("The cells within its body, crystallized by\n""the energy produced from Mega Evolution,\n""are stronger than any mineral and able\n""to withstand any temperature."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
        FRONT_PIC(SteelixMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SteelixMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SteelixMega, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(SteelixMega),
        ICON(SteelixMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX

#if P_FAMILY_DROWZEE
    [SPECIES_DROWZEE] =
    {
        .baseHP        = 60,
        .baseAttack    = 48,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 43,
        .baseSpDefense = 90,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 190,
        .expYield = 66,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("催眠貘"),
        .cryId = CRY_DROWZEE,
        .natDexNum = NATIONAL_DEX_DROWZEE,
        .categoryName = _("催眠"),
        .height = 10,
        .weight = 324,
        .description = COMPOUND_STRING("如果你每晚与它一起睡觉，\n它偶尔会让你梦见\n它以前吃过的梦."),
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Drowzee, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drowzee,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 48,
        BACK_PIC(Drowzee, 56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Drowzee),
        ICON(Drowzee, 2),
        .footprint = gMonFootprint_Drowzee,
        LEARNSETS(Drowzee),
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_HYPNO}),
    },

    [SPECIES_HYPNO] =
    {
        .baseHP        = 85,
        .baseAttack    = 73,
        .baseDefense   = 70,
        .baseSpeed     = 67,
        .baseSpAttack  = 73,
        .baseSpDefense = 115,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 75,
        .expYield = 169,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("引梦貘人"),
        .cryId = CRY_HYPNO,
        .natDexNum = NATIONAL_DEX_HYPNO,
        .categoryName = _("催眠"),
        .height = 16,
        .weight = 756,
        .description = COMPOUND_STRING("是非常危险的宝可梦，\n但祈求良好睡眠的\n人们称其为救世主."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Hypno, 64, 64),
        FRONT_PIC_FEMALE(Hypno, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Hypno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        BACK_PIC(Hypno, 64, 56),
        BACK_PIC_FEMALE(Hypno, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Hypno),
        ICON(Hypno, 2),
        .footprint = gMonFootprint_Hypno,
        LEARNSETS(Hypno),
    },
#endif //P_FAMILY_DROWZEE

#if P_FAMILY_KRABBY
    [SPECIES_KRABBY] =
    {
        .baseHP        = 30,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 65,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("大钳蟹"),
        .cryId = CRY_KRABBY,
        .natDexNum = NATIONAL_DEX_KRABBY,
        .categoryName = _("沼泽蟹"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING("能在海边上找到它.\n巨大的钳子即使断掉，\n今后也会再长出来."),
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Krabby, 64, 48),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Krabby,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Krabby, 56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        PALETTES(Krabby),
        ICON(Krabby, 0),
        .footprint = gMonFootprint_Krabby,
        LEARNSETS(Krabby),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_KINGLER}),
    },

#define KINGLER_MISC_INFO                                                               \
        .baseHP        = 55,                                                            \
        .baseAttack    = 130,                                                           \
        .baseDefense   = 115,                                                           \
        .baseSpeed     = 75,                                                            \
        .baseSpAttack  = 50,                                                            \
        .baseSpDefense = 50,                                                            \
        .types = { TYPE_WATER, TYPE_WATER },                                            \
        .catchRate = 60,                                                                \
        .expYield = 166,                                                                \
        .evYield_Attack = 2,                                                            \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },                          \
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE },\
        .bodyColor = BODY_COLOR_RED,                                                    \
        .noFlip = TRUE,                                                                 \
        .speciesName = _("巨钳蟹"),                                                    \
        .cryId = CRY_KINGLER,                                                           \
        .natDexNum = NATIONAL_DEX_KINGLER,                                              \
        .categoryName = _("铗子"),                                                    \
        .footprint = gMonFootprint_Kingler,                                             \
        LEARNSETS(Kingler),                                                             \
        .formSpeciesIdTable = sKinglerFormSpeciesIdTable,                               \
        .formChangeTable = sKinglerFormChangeTable

    [SPECIES_KINGLER] =
    {
        KINGLER_MISC_INFO,
        .height = 13,
        .weight = 600,
        .description = COMPOUND_STRING("巨大的钳子破坏力十足，\n但是因为太过沉重，\n不战斗的时候就很碍事."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kingler, 64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Kingler,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 4,
        BACK_PIC(Kingler, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Kingler),
        ICON(Kingler, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_KINGLER_GIGANTAMAX] =
    {
        KINGLER_MISC_INFO,
        .height = 190,
        .weight = 0,
        .description = COMPOUND_STRING("The flow of Gigantamax energy has\n""spurred this Pokémon's left pincer\n""to grow to an enormous size. That\n""claw can pulverize anything."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(KinglerGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KinglerGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(KinglerGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(KinglerGigantamax),
        ICON(KinglerGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KRABBY

#if P_FAMILY_VOLTORB
#define VOLTORB_FAMILY_MISC_INFO                                                \
        .genderRatio = MON_GENDERLESS,                                          \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },                  \
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH }, \
        .bodyColor = BODY_COLOR_RED

#define VOLTORB_MISC_INFO                                   \
        .baseHP        = 40,                                \
        .baseAttack    = 30,                                \
        .baseDefense   = 50,                                \
        .baseSpeed     = 100,                               \
        .baseSpAttack  = 55,                                \
        .baseSpDefense = 55,                                \
        .catchRate = 190,                                   \
        .expYield = 66,                                     \
        .evYield_Speed = 1,                                 \
        .speciesName = _("霹雳电球"),                        \
        .cryId = CRY_VOLTORB,                               \
        .natDexNum = NATIONAL_DEX_VOLTORB,                  \
        .height = 5,                                        \
        .pokemonScale = 364,                                \
        .pokemonOffset = -8,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Voltorb,                 \
        .formSpeciesIdTable = sVoltorbFormSpeciesIdTable,   \
        VOLTORB_FAMILY_MISC_INFO

#define ELECTRODE_MISC_INFO                                     \
        .baseHP        = 60,                                    \
        .baseAttack    = 50,                                    \
        .baseDefense   = 70,                                    \
        .baseSpAttack  = 80,                                    \
        .baseSpDefense = 80,                                    \
        .baseSpeed     = P_UPDATED_STATS >= GEN_7 ? 150 : 140,  \
        .catchRate = 60,                                        \
        .expYield = 172,                                        \
        .evYield_Speed = 2,                                     \
        .speciesName = _("顽皮雷弹"),                          \
        .cryId = CRY_ELECTRODE,                                 \
        .natDexNum = NATIONAL_DEX_ELECTRODE,                    \
        .height = 12,                                           \
        .pokemonScale = 256,                                    \
        .pokemonOffset = 0,                                     \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Electrode,                   \
        .formSpeciesIdTable = sElectrodeFormSpeciesIdTable,     \
        VOLTORB_FAMILY_MISC_INFO

    [SPECIES_VOLTORB] =
    {
        VOLTORB_MISC_INFO,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .categoryName = _("球"),
        .weight = 104,
        .description = COMPOUND_STRING("据说它与精灵球相似的外形\n其实是它的保护色，但它很\n容易自爆这一点也出人意料."),
        FRONT_PIC(Voltorb, 32, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Voltorb,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Voltorb, 48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Voltorb),
        ICON(Voltorb, 0),
        LEARNSETS(Voltorb),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ELECTRODE}),
    },

    [SPECIES_ELECTRODE] =
    {
        ELECTRODE_MISC_INFO,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .categoryName = _("球"),
        .weight = 666,
        .description = COMPOUND_STRING("只要受到一点撞击，\n就会由于体内的\n电能溢出导致爆炸."),
        FRONT_PIC(Electrode, 48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Electrode,
        .frontAnimId = ANIM_SHRINK_GROW_VIBRATE_SLOW,
        BACK_PIC(Electrode, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Electrode),
        ICON(Electrode, 0),
        LEARNSETS(Electrode),
    },

#if P_HISUIAN_FORMS
    [SPECIES_VOLTORB_HISUIAN] =
    {
        VOLTORB_MISC_INFO,
        .types = { TYPE_ELECTRIC, TYPE_GRASS },
        .categoryName = _("Sphere"),
        .weight = 130,
        .description = COMPOUND_STRING("It esembles an ancient Poké Ball design.\n""When excited, it discharges the electric\n""current it has stored in its belly, then\n""lets out a great, uproarious laugh."),
        FRONT_PIC(VoltorbHisuian, 32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_VoltorbHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(VoltorbHisuian, 48, 32),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(VoltorbHisuian),
        ICON(VoltorbHisuian, 0),
        LEARNSETS(VoltorbHisuian),
        .isHisuianForm = TRUE,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_ELECTRODE_HISUIAN}),
    },

    [SPECIES_ELECTRODE_HISUIAN] =
    {
        ELECTRODE_MISC_INFO,
        .types = { TYPE_ELECTRIC, TYPE_GRASS },
        .categoryName = _("Sphere"),
        .weight = 710,
        .description = COMPOUND_STRING("The tissue on the surface of its body is\n""similar in composition to an Apricorn.\n""When irritated, it lets loose an electric\n""current equal to 20 lightning bolts."),
        FRONT_PIC(ElectrodeHisuian, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_ElectrodeHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ElectrodeHisuian, 64, 40),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ElectrodeHisuian),
        ICON(ElectrodeHisuian, 1),
        LEARNSETS(ElectrodeHisuian),
        .isHisuianForm = TRUE,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_VOLTORB

#if P_FAMILY_EXEGGCUTE
    [SPECIES_EXEGGCUTE] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = { TYPE_GRASS, TYPE_PSYCHIC },
        .catchRate = 90,
        .expYield = 65,
        .evYield_Defense = 1,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("蛋蛋"),
        .cryId = CRY_EXEGGCUTE,
        .natDexNum = NATIONAL_DEX_EXEGGCUTE,
        .categoryName = _("蛋"),
        .height = 4,
        .weight = 25,
        .description = COMPOUND_STRING("用心灵感应与伙伴交流.\n据说兼有植物与某种别的\n遗传基因."),
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Exeggcute, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Exeggcute,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Exeggcute, 64, 32),
        .backPicYOffset = 18,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Exeggcute),
        ICON(Exeggcute, 0),
        .footprint = gMonFootprint_Exeggcute,
        LEARNSETS(Exeggcute),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR},
                                {EVO_NONE, 0, SPECIES_EXEGGUTOR_ALOLAN}),
    },

#define EXEGGUTOR_MISC_INFO                                 \
        .catchRate = 45,                                    \
        .expYield = 186,                                    \
        .evYield_SpAttack = 2,                              \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },  \
        .bodyColor = BODY_COLOR_YELLOW,                     \
        .speciesName = _("椰蛋树"),                      \
        .cryId = CRY_EXEGGUTOR,                             \
        .natDexNum = NATIONAL_DEX_EXEGGUTOR,                \
        .categoryName = _("椰子"),                       \
        .footprint = gMonFootprint_Exeggutor,               \
        .formSpeciesIdTable = sExeggutorFormSpeciesIdTable

#define EXEGGUTOR_SP_DEF (P_UPDATED_STATS >= GEN_7 ? 75 : 65)

    [SPECIES_EXEGGUTOR] =
    {
        EXEGGUTOR_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 125,
        .baseSpDefense = EXEGGUTOR_SP_DEF,
        .types = { TYPE_GRASS, TYPE_PSYCHIC },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST },
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING("由于三个头各自都在\n思考自己喜欢的事情，\n所以它的叫声非常吵闹."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(Exeggutor, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Exeggutor,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Exeggutor, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Exeggutor),
        ICON(Exeggutor, 1),
        LEARNSETS(Exeggutor),
    },

#if P_ALOLAN_FORMS
    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        EXEGGUTOR_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 125,
        .baseSpDefense = EXEGGUTOR_SP_DEF,
        .types = { TYPE_GRASS, TYPE_DRAGON },
        .abilities = { ABILITY_FRISK, ABILITY_NONE, ABILITY_HARVEST },
        .height = 109,
        .weight = 4156,
        .description = COMPOUND_STRING("Alola is the best environment for\n""this Pokémon. Local people take pride\n""in its appearance, saying this is how\n""Exeggutor ought to look."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
        FRONT_PIC(ExeggutorAlolan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_ExeggutorAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ExeggutorAlolan, 64, 56),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ExeggutorAlolan),
        ICON(ExeggutorAlolan, 1),
        LEARNSETS(ExeggutorAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
    [SPECIES_CUBONE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 190,
        .expYield = 64,
        .evYield_Defense = 1,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("卡拉卡拉"),
        .cryId = CRY_CUBONE,
        .natDexNum = NATIONAL_DEX_CUBONE,
        .categoryName = _("孤独"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING("它头上戴着死去母亲的头骨.\n它的哭声会在头骨里\n回响出悲伤的旋律."),
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cubone, 56, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Cubone,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 30,
        BACK_PIC(Cubone, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Cubone),
        ICON(Cubone, 2),
        .footprint = gMonFootprint_Cubone,
        LEARNSETS(Cubone),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_MAROWAK},
                                {EVO_NONE, 0, SPECIES_MAROWAK_ALOLAN}),
    },

#define MAROWAK_MISC_INFO                                       \
        .baseHP        = 60,                                    \
        .baseAttack    = 80,                                    \
        .baseDefense   = 110,                                   \
        .baseSpeed     = 45,                                    \
        .baseSpAttack  = 50,                                    \
        .baseSpDefense = 80,                                    \
        .catchRate = 75,                                        \
        .expYield = 149,                                        \
        .evYield_Defense = 2,                                   \
        .itemRare = ITEM_THICK_CLUB,                            \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },  \
        .speciesName = _("嘎啦嘎啦"),                            \
        .cryId = CRY_MAROWAK,                                   \
        .natDexNum = NATIONAL_DEX_MAROWAK,                      \
        .categoryName = _("爱骨"),                       \
        .height = 10,                                           \
        .pokemonScale = 293,                                    \
        .pokemonOffset = 12,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Marowak,                     \
        .formSpeciesIdTable = sMarowakFormSpeciesIdTable

    [SPECIES_MAROWAK] =
    {
        MAROWAK_MISC_INFO,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .weight = 450,
        .description = COMPOUND_STRING("身体曾经又小又弱，\n在习惯了使用骨头战斗后\n才变成了粗暴的性格."),
        FRONT_PIC(Marowak, 56, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Marowak,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Marowak, 48, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Marowak),
        ICON(Marowak, 2),
        LEARNSETS(Marowak),
    },

#if P_ALOLAN_FORMS
    [SPECIES_MAROWAK_ALOLAN] =
    {
        MAROWAK_MISC_INFO,
        .types = { TYPE_FIRE, TYPE_GHOST },
        .abilities = { ABILITY_CURSED_BODY, ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD },
        .bodyColor = BODY_COLOR_PURPLE,
        .weight = 340,
        .description = COMPOUND_STRING("The cursed flames that light up the bone\n""carried by this Pokémon are said\n""to cause both mental and physical\n""pain that will never fade."),
        FRONT_PIC(MarowakAlolan, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_MarowakAlolan,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MarowakAlolan, 56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MarowakAlolan),
        ICON(MarowakAlolan, 1),
        LEARNSETS(MarowakAlolan),
        .isAlolanForm = TRUE,
    },
#endif //P_ALOLAN_FORMS
#endif //P_FAMILY_CUBONE

#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
    [SPECIES_TYROGUE] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 75,
        .expYield = 42,
        .evYield_Attack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_GUTS, ABILITY_STEADFAST, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("无畏小子"),
        .cryId = CRY_TYROGUE,
        .natDexNum = NATIONAL_DEX_TYROGUE,
        .categoryName = _("打斗"),
        .height = 7,
        .weight = 210,
        .description = COMPOUND_STRING("体型偏小却不可轻视，因为\n它只要发现合适的对手便会\n马上扑上去大打出手."),
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tyrogue, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Tyrogue,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        BACK_PIC(Tyrogue, 48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Tyrogue),
        ICON(Tyrogue, 2),
        .footprint = gMonFootprint_Tyrogue,
        LEARNSETS(Tyrogue),
        .evolutions = EVOLUTION({EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_HITMONCHAN},
                                {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_HITMONLEE},
                                {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_HITMONLEE] =
    {
        .baseHP        = 50,
        .baseAttack    = 120,
        .baseDefense   = 53,
        .baseSpeed     = 87,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 159,
        .evYield_Attack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_LIMBER, ABILITY_RECKLESS, ABILITY_UNBURDEN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("飞腿郎"),
        .cryId = CRY_HITMONLEE,
        .natDexNum = NATIONAL_DEX_HITMONLEE,
        .categoryName = _("踢腿"),
        .height = 15,
        .weight = 498,
        .description = COMPOUND_STRING("腿能自由地伸缩，\n即使离得很远，\n也能把对手踢飞."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
        FRONT_PIC(Hitmonlee, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Hitmonlee,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Hitmonlee, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Hitmonlee),
        ICON(Hitmonlee, 2),
        .footprint = gMonFootprint_Hitmonlee,
        LEARNSETS(Hitmonlee),
    },

    [SPECIES_HITMONCHAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 79,
        .baseSpeed     = 76,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_IRON_FIST, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("快拳郎"),
        .cryId = CRY_HITMONCHAN,
        .natDexNum = NATIONAL_DEX_HITMONCHAN,
        .categoryName = _("拳击"),
        .height = 14,
        .weight = 502,
        .description = COMPOUND_STRING("打出的拳击甚至能劈开空气.\n但攻击3分钟后，\n它似乎就会想休息一下."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
        FRONT_PIC(Hitmonchan, 48, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Hitmonchan,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Hitmonchan, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Hitmonchan),
        ICON(Hitmonchan, 2),
        .footprint = gMonFootprint_Hitmonchan,
        LEARNSETS(Hitmonchan),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_HITMONTOP] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_INTIMIDATE, ABILITY_TECHNICIAN, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("战舞郎"),
        .cryId = CRY_HITMONTOP,
        .natDexNum = NATIONAL_DEX_HITMONTOP,
        .categoryName = _("倒立"),
        .height = 14,
        .weight = 480,
        .description = COMPOUND_STRING("会通过倒立来扰乱对方的\n节奏，然后趁隙施展华丽\n的踢击."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Hitmontop, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Hitmontop,
        .frontAnimId = ANIM_SWING_CONCAVE,
        BACK_PIC(Hitmontop, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        PALETTES(Hitmontop),
        ICON(Hitmontop, 2),
        .footprint = gMonFootprint_Hitmontop,
        LEARNSETS(Hitmontop),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS

#if P_FAMILY_LICKITUNG
    [SPECIES_LICKITUNG] =
    {
        .baseHP        = 90,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 77,
        .evYield_HP = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("大舌头"),
        .cryId = CRY_LICKITUNG,
        .natDexNum = NATIONAL_DEX_LICKITUNG,
        .categoryName = _("舔舔"),
        .height = 12,
        .weight = 655,
        .description = COMPOUND_STRING("会用舌头将污渍舔干净.舔\n过之后有点臭臭的，所以是\n否真的干净很令人怀疑."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Lickitung, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Lickitung,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Lickitung, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Lickitung),
        ICON(Lickitung, 0),
        .footprint = gMonFootprint_Lickitung,
        LEARNSETS(Lickitung),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ROLLOUT, SPECIES_LICKILICKY}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LICKILICKY] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 95,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 180,
        .evYield_HP = 3,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("大舌舔"),
        .cryId = CRY_LICKILICKY,
        .natDexNum = NATIONAL_DEX_LICKILICKY,
        .categoryName = _("舔舔"),
        .height = 17,
        .weight = 1400,
        .description = COMPOUND_STRING("比起手脚，它更擅长使用\n舌头.哪怕是1粒小小的\n豆子也能灵活地摘下."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
        FRONT_PIC(Lickilicky, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lickilicky,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Lickilicky, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Lickilicky),
        ICON(Lickilicky, 1),
        .footprint = gMonFootprint_Lickilicky,
        LEARNSETS(Lickilicky),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LICKITUNG

#if P_FAMILY_KOFFING
    [SPECIES_KOFFING] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 190,
        .expYield = 68,
        .evYield_Defense = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        #if P_UPDATED_ABILITIES >= GEN_8
            .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH },
        #else
            .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("瓦斯弹"),
        .cryId = CRY_KOFFING,
        .natDexNum = NATIONAL_DEX_KOFFING,
        .categoryName = _("毒气"),
        .height = 6,
        .weight = 10,
        .description = COMPOUND_STRING("身体里充满了毒气.\n会为了寻求湿垃圾腐烂的\n气味而来到垃圾场."),
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Koffing, 56, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Koffing,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 14,
        BACK_PIC(Koffing, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Koffing),
        ICON(Koffing, 2),
        .footprint = gMonFootprint_Koffing,
        LEARNSETS(Koffing),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_WEEZING},
                                {EVO_NONE, 0, SPECIES_WEEZING_GALARIAN}),
    },

#define WEEZING_MISC_INFO                                           \
        .baseHP        = 65,                                        \
        .baseAttack    = 90,                                        \
        .baseDefense   = 120,                                       \
        .baseSpeed     = 60,                                        \
        .baseSpAttack  = 85,                                        \
        .baseSpDefense = 70,                                        \
        .catchRate = 60,                                            \
        .expYield = 172,                                            \
        .evYield_Defense = 2,                                       \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },  \
        .noFlip = TRUE,                                             \
        .speciesName = _("双弹瓦斯"),                                \
        .cryId = CRY_WEEZING,                                       \
        .natDexNum = NATIONAL_DEX_WEEZING,                          \
        .categoryName = _("毒气"),                            \
        .footprint = gMonFootprint_Weezing,                         \
        .formSpeciesIdTable = sWeezingFormSpeciesIdTable

    [SPECIES_WEEZING] =
    {
        WEEZING_MISC_INFO,
        .types = { TYPE_POISON, TYPE_POISON },
        .itemRare = ITEM_SMOKE_BALL,
        #if P_UPDATED_ABILITIES >= GEN_8
            .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH },
        #else
            .abilities = { ABILITY_LEVITATE, ABILITY_NONE },
        #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .height = 12,
        .weight = 95,
        .description = COMPOUND_STRING("它要靠吸收垃圾里的毒气、\n细菌和灰尘来维持生命."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Weezing, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Weezing,
        .frontAnimId = ANIM_V_SLIDE,
        .enemyMonElevation = 3,
        BACK_PIC(Weezing, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Weezing),
        ICON(Weezing, 2),
        LEARNSETS(Weezing),
    },

#if P_GALARIAN_FORMS
    [SPECIES_WEEZING_GALARIAN] =
    {
        WEEZING_MISC_INFO,
        .types = { TYPE_POISON, TYPE_FAIRY },
        .itemRare = ITEM_MISTY_SEED,
        .abilities = { ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_MISTY_SURGE },
        .bodyColor = BODY_COLOR_GRAY,
        .isGalarianForm = TRUE,
        .height = 30,
        .weight = 160,
        .description = COMPOUND_STRING("Long ago, when droves of factories fouled\n""the air with pollution, it changed into this\n""form for some reason. It consumes air\n""pollutant particles, expelling clean air."),
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(WeezingGalarian, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_WeezingGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        BACK_PIC(WeezingGalarian, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(WeezingGalarian),
        ICON(WeezingGalarian, 1),
        LEARNSETS(WeezingGalarian),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_KOFFING

#if P_FAMILY_RHYHORN
    [SPECIES_RHYHORN] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_GROUND, TYPE_ROCK },
        .catchRate = 120,
        .expYield = 69,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("独角犀牛"),
        .cryId = CRY_RHYHORN,
        .natDexNum = NATIONAL_DEX_RHYHORN,
        .categoryName = _("尖角"),
        .height = 10,
        .weight = 1150,
        .description = COMPOUND_STRING("虽然头脑很差但力气很大，\n可以用撞击把高楼\n大厦撞得粉粹."),
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rhyhorn, 56, 40),
        FRONT_PIC_FEMALE(Rhyhorn, 56, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Rhyhorn,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Rhyhorn, 64, 48),
        BACK_PIC_FEMALE(Rhyhorn, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Rhyhorn),
        ICON(Rhyhorn, 1),
        .footprint = gMonFootprint_Rhyhorn,
        LEARNSETS(Rhyhorn),
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_RHYDON}),
    },

    [SPECIES_RHYDON] =
    {
        .baseHP        = 105,
        .baseAttack    = 130,
        .baseDefense   = 120,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_ROCK },
        .catchRate = 60,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("钻角犀兽"),
        .cryId = CRY_RHYDON,
        .natDexNum = NATIONAL_DEX_RHYDON,
        .categoryName = _("钻锥"),
        .height = 19,
        .weight = 1200,
        .description = COMPOUND_STRING("全身被铠甲般的皮肤保护着.\n甚至能在2000度的\n熔岩里生存."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
        FRONT_PIC(Rhydon, 64, 56),
        FRONT_PIC_FEMALE(Rhydon, 64, 56),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Rhydon,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Rhydon, 64, 56),
        BACK_PIC_FEMALE(Rhydon, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Rhydon),
        ICON(Rhydon, 1),
        .footprint = gMonFootprint_Rhydon,
        LEARNSETS(Rhydon),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR},
                                {EVO_ITEM, ITEM_PROTECTOR, SPECIES_RHYPERIOR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_RHYPERIOR] =
    {
        .baseHP        = 115,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_GROUND, TYPE_ROCK },
        .catchRate = 30,
        .expYield = 241,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_SOLID_ROCK, ABILITY_RECKLESS },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("超甲狂犀"),
        .cryId = CRY_RHYPERIOR,
        .natDexNum = NATIONAL_DEX_RHYPERIOR,
        .categoryName = _("钻锥"),
        .height = 24,
        .weight = 2828,
        .description = COMPOUND_STRING("用护具弹开敌人的攻击，\n在对手畏缩时用自己引\n以为傲的钻头贯穿对方."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        FRONT_PIC(Rhyperior, 64, 64),
        FRONT_PIC_FEMALE(Rhyperior, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Rhyperior,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        BACK_PIC(Rhyperior, 64, 64),
        BACK_PIC_FEMALE(Rhyperior, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Rhyperior),
        ICON(Rhyperior, 0),
        .footprint = gMonFootprint_Rhyperior,
        LEARNSETS(Rhyperior),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RHYHORN

#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
    [SPECIES_HAPPINY] =
    {
        .baseHP        = 100,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 130,
        .expYield = 110,
        .evYield_HP = 1,
        .itemCommon = ITEM_OVAL_STONE,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_FRIEND_GUARD },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("小福蛋"),
        .cryId = CRY_HAPPINY,
        .natDexNum = NATIONAL_DEX_HAPPINY,
        .categoryName = _("家家酒"),
        .height = 6,
        .weight = 244,
        .description = COMPOUND_STRING("因为很小，还不能生蛋.\n会寻找白白的圆圆的\n石头来作为替代."),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Happiny, 32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Happiny,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Happiny, 48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Happiny),
        ICON(Happiny, 0),
        .footprint = gMonFootprint_Happiny,
        LEARNSETS(Happiny),
        .evolutions = EVOLUTION({EVO_ITEM_HOLD_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY},
                                {EVO_ITEM_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_CHANSEY] =
    {
        .baseHP        = 250,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 105,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 395,
        .evYield_HP = 2,
        .itemCommon = ITEM_LUCKY_PUNCH,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("吉利蛋"),
        .cryId = CRY_CHANSEY,
        .natDexNum = NATIONAL_DEX_CHANSEY,
        .categoryName = _("蛋"),
        .height = 11,
        .weight = 346,
        .description = COMPOUND_STRING("吉利蛋生下的蛋饱含丰富的\n营养.是许多宝可梦\n非常爱吃的东西."),
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chansey, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Chansey,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Chansey, 64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Chansey),
        ICON(Chansey, 0),
        .footprint = gMonFootprint_Chansey,
        LEARNSETS(Chansey),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_BLISSEY] =
    {
        .baseHP        = 255,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 135,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 608,
        .evYield_HP = 3,
        .itemRare = ITEM_LUCKY_EGG,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("幸福蛋"),
        .cryId = CRY_BLISSEY,
        .natDexNum = NATIONAL_DEX_BLISSEY,
        .categoryName = _("幸福"),
        .height = 15,
        .weight = 468,
        .description = COMPOUND_STRING("蓬松的体毛是感应器.\n可以捕捉到宝可梦和\n人类的心情."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
        FRONT_PIC(Blissey, 56, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Blissey,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Blissey, 64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Blissey),
        ICON(Blissey, 0),
        .footprint = gMonFootprint_Blissey,
        LEARNSETS(Blissey),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CHANSEY

#if P_FAMILY_TANGELA
    [SPECIES_TANGELA] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 100,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 87,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("蔓藤怪"),
        .cryId = CRY_TANGELA,
        .natDexNum = NATIONAL_DEX_TANGELA,
        .categoryName = _("藤蔓状"),
        .height = 10,
        .weight = 350,
        .description = COMPOUND_STRING("全身被蓝色的蔓藤覆盖，\n真面目不为人知.据说，\n它的蔓藤会持续不断地生长."),
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Tangela, 48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Tangela,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        BACK_PIC(Tangela, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        PALETTES(Tangela),
        ICON(Tangela, 0),
        .footprint = gMonFootprint_Tangela,
        LEARNSETS(Tangela),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TANGROWTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 50,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 30,
        .expYield = 187,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("巨蔓藤"),
        .cryId = CRY_TANGROWTH,
        .natDexNum = NATIONAL_DEX_TANGROWTH,
        .categoryName = _("藤蔓状"),
        .height = 20,
        .weight = 1286,
        .description = COMPOUND_STRING("到了温暖的季节，\n植物的藤蔓就会不停生长，\n连眼珠都会被遮住."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        FRONT_PIC(Tangrowth, 64, 64),
        FRONT_PIC_FEMALE(Tangrowth, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Tangrowth,
        .frontAnimId = ANIM_H_STRETCH,
        BACK_PIC(Tangrowth, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Tangrowth),
        ICON(Tangrowth, 0),
        .footprint = gMonFootprint_Tangrowth,
        LEARNSETS(Tangrowth),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA

#if P_FAMILY_KANGASKHAN
#define KANGASKHAN_MISC_INFO                                    \
        .types = { TYPE_NORMAL, TYPE_NORMAL },                  \
        .catchRate = 45,                                        \
        .evYield_HP = 2,                                        \
        .genderRatio = MON_FEMALE,                              \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },  \
        .bodyColor = BODY_COLOR_BROWN,                          \
        .speciesName = _("袋兽"),                         \
        .natDexNum = NATIONAL_DEX_KANGASKHAN,                   \
        .categoryName = _("亲子"),                            \
        .height = 22,                                           \
        .pokemonScale = 256,                                    \
        .pokemonOffset = 0,                                     \
        .trainerScale = 387,                                    \
        .trainerOffset = 8,                                     \
        .footprint = gMonFootprint_Kangaskhan,                  \
        LEARNSETS(Kangaskhan),                                  \
        .formSpeciesIdTable = sKangaskhanFormSpeciesIdTable,    \
        .formChangeTable = sKangaskhanFormChangeTable

    [SPECIES_KANGASKHAN] =
    {
        KANGASKHAN_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .expYield = 172,
        .abilities = { ABILITY_EARLY_BIRD, ABILITY_SCRAPPY, ABILITY_INNER_FOCUS },
        .cryId = CRY_KANGASKHAN,
        .weight = 800,
        .description = COMPOUND_STRING("袋兽的母爱很深.\n如果是为了守护自己的孩子，\n据说连死都毫不畏惧."),
        FRONT_PIC(Kangaskhan, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Kangaskhan,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Kangaskhan, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Kangaskhan),
        ICON(Kangaskhan, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_KANGASKHAN_MEGA] =
    {
        KANGASKHAN_MISC_INFO,
        .baseHP        = 105,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .expYield = 207,
        .abilities = { ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND },
        .isMegaEvolution = TRUE,
        .cryId = CRY_KANGASKHAN_MEGA,
        .weight = 1000,
        .description = COMPOUND_STRING("When the mother sees the back of her\n""Mega-Evolved child, it makes her think\n""of the day when her child will inevitably\n""leave her."),
        FRONT_PIC(KangaskhanMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_KangaskhanMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(KangaskhanMega, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(KangaskhanMega),
        ICON(KangaskhanMega, 2),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_KANGASKHAN

#if P_FAMILY_HORSEA
    [SPECIES_HORSEA] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 59,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("墨海马"),
        .cryId = CRY_HORSEA,
        .natDexNum = NATIONAL_DEX_HORSEA,
        .categoryName = _("龙"),
        .height = 4,
        .weight = 80,
        .description = COMPOUND_STRING("在感到危险时会从嘴里用力\n地喷出水或者特殊的墨汁."),
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Horsea, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Horsea,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Horsea, 48, 40),
        .backPicYOffset = 14,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Horsea),
        ICON(Horsea, 0),
        .footprint = gMonFootprint_Horsea,
        LEARNSETS(Horsea),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_SEADRA}),
    },

    [SPECIES_SEADRA] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 75,
        .expYield = 154,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_POISON_POINT, ABILITY_SNIPER, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("海刺龙"),
        .cryId = CRY_SEADRA,
        .natDexNum = NATIONAL_DEX_SEADRA,
        .categoryName = _("龙"),
        .height = 12,
        .weight = 250,
        .description = COMPOUND_STRING("摸它的背鳍会导致麻痹.\n为了避免在睡觉时被水冲走，\n它会用尾巴缠住珊瑚."),
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seadra, 64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Seadra,
        .frontAnimId = ANIM_V_SLIDE,
        BACK_PIC(Seadra, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Seadra),
        ICON(Seadra, 0),
        .footprint = gMonFootprint_Seadra,
        LEARNSETS(Seadra),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA},
                                {EVO_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_KINGDRA] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .types = { TYPE_WATER, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 243,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("刺龙王"),
        .cryId = CRY_KINGDRA,
        .natDexNum = NATIONAL_DEX_KINGDRA,
        .categoryName = _("龙"),
        .height = 18,
        .weight = 1520,
        .description = COMPOUND_STRING("平时好像会隐藏在\n海底洞穴中.打个\n哈欠就会引发潮旋."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
        FRONT_PIC(Kingdra, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Kingdra,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        BACK_PIC(Kingdra, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Kingdra),
        ICON(Kingdra, 0),
        .footprint = gMonFootprint_Kingdra,
        LEARNSETS(Kingdra),
    },
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA

#if P_FAMILY_GOLDEEN
    [SPECIES_GOLDEEN] =
    {
        .baseHP        = 45,
        .baseAttack    = 67,
        .baseDefense   = 60,
        .baseSpeed     = 63,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 64,
        .evYield_Attack = 1,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("角金鱼"),
        .cryId = CRY_GOLDEEN,
        .natDexNum = NATIONAL_DEX_GOLDEEN,
        .categoryName = _("金鱼"),
        .height = 6,
        .weight = 150,
        .description = COMPOUND_STRING("会优雅地摇摆背鳍、\n胸鳍和尾鳍，所以被\n称之为水中的舞者."),
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Goldeen, 64, 40),
        FRONT_PIC_FEMALE(Goldeen, 64, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Goldeen,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        BACK_PIC(Goldeen, 64, 48),
        BACK_PIC_FEMALE(Goldeen, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Goldeen),
        ICON(Goldeen, 0),
        .footprint = gMonFootprint_Goldeen,
        LEARNSETS(Goldeen),
        .evolutions = EVOLUTION({EVO_LEVEL, 33, SPECIES_SEAKING}),
    },

    [SPECIES_SEAKING] =
    {
        .baseHP        = 80,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 68,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 60,
        .expYield = 158,
        .evYield_Attack = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("金鱼王"),
        .cryId = CRY_SEAKING,
        .natDexNum = NATIONAL_DEX_SEAKING,
        .categoryName = _("金鱼"),
        .height = 13,
        .weight = 390,
        .description = COMPOUND_STRING("到了秋天，体内的脂肪\n会因为要去求偶而增加，\n颜色也会变得非常漂亮."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Seaking, 64, 56),
        FRONT_PIC_FEMALE(Seaking, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Seaking,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        BACK_PIC(Seaking, 64, 56),
        BACK_PIC_FEMALE(Seaking, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        PALETTES(Seaking),
        ICON(Seaking, 0),
        .footprint = gMonFootprint_Seaking,
        LEARNSETS(Seaking),
    },
#endif //P_FAMILY_GOLDEEN

#if P_FAMILY_STARYU
    [SPECIES_STARYU] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 68,
        .evYield_Speed = 1,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_ILLUMINATE, ABILITY_NATURAL_CURE, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("海星星"),
        .cryId = CRY_STARYU,
        .natDexNum = NATIONAL_DEX_STARYU,
        .categoryName = _("星型"),
        .height = 8,
        .weight = 345,
        .description = COMPOUND_STRING("在各地都流传着星屑掉到\n海里就会变成海星星\n这样的民间故事."),
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Staryu, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Staryu,
        .frontAnimId = ANIM_TWIST_TWICE,
        BACK_PIC(Staryu, 56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Staryu),
        ICON(Staryu, 2),
        .footprint = gMonFootprint_Staryu,
        LEARNSETS(Staryu),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}),
    },

    [SPECIES_STARMIE] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 115,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .catchRate = 60,
        .expYield = 182,
        .evYield_Speed = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_ILLUMINATE, ABILITY_NATURAL_CURE, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("宝石海星"),
        .cryId = CRY_STARMIE,
        .natDexNum = NATIONAL_DEX_STARMIE,
        .categoryName = _("谜"),
        .height = 11,
        .weight = 800,
        .description = COMPOUND_STRING("能旋转几何图形一样的\n身体在水中游泳.\n好像一直在发射神秘的电波."),
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Starmie, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Starmie,
        .frontAnimId = ANIM_TWIST,
        BACK_PIC(Starmie, 64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Starmie),
        ICON(Starmie, 2),
        .footprint = gMonFootprint_Starmie,
        LEARNSETS(Starmie),
    },
#endif //P_FAMILY_STARYU

#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MIME_JR] =
    {
        .baseHP        = 20,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY },
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        #endif
        .catchRate = 145,
        .expYield = 62,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("魔尼尼"),
        .cryId = CRY_MIME_JR,
        .natDexNum = NATIONAL_DEX_MIME_JR,
        .categoryName = _("默剧"),
        .height = 6,
        .weight = 130,
        .description = COMPOUND_STRING("In an attempt to confuse its enemy,\n""it mimics the enemy's movements.\n""Once mimicked, the foe cannot take\n""its eyes off this Pokémon."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MimeJr, 32, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_MimeJr,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(MimeJr, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(MimeJr),
        ICON(MimeJr, 0),
        .footprint = gMonFootprint_MimeJr,
        LEARNSETS(MimeJr),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_MR_MIME},
                                {EVO_NONE, 0, SPECIES_MR_MIME_GALARIAN}),
    },
#endif //P_GEN_4_CROSS_EVOS

#define MR_MIME_MISC_INFO                                           \
        .catchRate = 45,                                            \
        .expYield = 161,                                            \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 25,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },\
        .speciesName = _("魔墙人偶"),                               \
        .cryId = CRY_MR_MIME,                                       \
        .natDexNum = NATIONAL_DEX_MR_MIME,                          \
        .footprint = gMonFootprint_MrMime,                          \
        .formSpeciesIdTable = sMrMimeFormSpeciesIdTable

    [SPECIES_MR_MIME] =
    {
        MR_MIME_MISC_INFO,
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY },
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        #endif
        .evYield_SpDefense = 2,
        .abilities = { ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_PINK,
        .categoryName = _("障碍"),
        .height = 13,
        .weight = 545,
        .description = COMPOUND_STRING("A Mr. Mime is a master of pantomime. It can\n""convince others that something unseeable\n""actually exists. Once believed, the\n""imaginary object does become real."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MrMime, 56, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_MrMime,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(MrMime, 64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(MrMime),
        ICON(MrMime, 0),
        LEARNSETS(MrMime),
    },

#if P_GALARIAN_FORMS
    [SPECIES_MR_MIME_GALARIAN] =
    {
        MR_MIME_MISC_INFO,
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .evYield_Speed = 2,
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .categoryName = _("舞蹈"),
        .height = 14,
        .weight = 568,
        .description = COMPOUND_STRING("Its talent is tap-dancing. It can radiate\n""chilliness from the bottoms of its feet to\n""to create a floor of ice, which this\n""Pokémon can kick up to use as a barrier."),
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(MrMimeGalarian, 56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_MrMimeGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MrMimeGalarian, 64, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MrMimeGalarian),
        ICON(MrMimeGalarian, 0),
        LEARNSETS(MrMimeGalarian),
        .isGalarianForm = TRUE,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_MR_RIME}),
    },

    [SPECIES_MR_RIME] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 182,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_TANGLED_FEET, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("踏冰人偶"),
        .cryId = CRY_MR_RIME,
        .natDexNum = NATIONAL_DEX_MR_RIME,
        .categoryName = _("喜剧演员"),
        .height = 15,
        .weight = 582,
        .description = COMPOUND_STRING("It's highly skilled at tap-dancing. It\n""waves its cane of ice in time with its\n""graceful movements."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        FRONT_PIC(MrRime, 56, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_MrRime,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MrRime, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MrRime),
        ICON(MrRime, 0),
        .footprint = gMonFootprint_MrRime,
        LEARNSETS(MrRime),
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
    [SPECIES_SCYTHER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 105,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 100,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_STEADFAST },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("飞天螳螂"),
        .cryId = CRY_SCYTHER,
        .natDexNum = NATIONAL_DEX_SCYTHER,
        .categoryName = _("螳螂"),
        .height = 15,
        .weight = 560,
        .description = COMPOUND_STRING("突然从草丛里窜出来，\n用锋利的镰刀斩砍的\n样子仿佛就像是忍者."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
        FRONT_PIC(Scyther, 56, 64),
        FRONT_PIC_FEMALE(Scyther, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Scyther,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 10,
        BACK_PIC(Scyther, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Scyther),
        ICON(Scyther, 1),
        .footprint = gMonFootprint_Scyther,
        LEARNSETS(Scyther),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR},
                                {EVO_ITEM, ITEM_BLACK_AUGURITE, SPECIES_KLEAVOR},
                                {EVO_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR}),
    },

#if P_GEN_2_CROSS_EVOS
#define SCIZOR_MISC_INFO                                \
        .types = { TYPE_BUG, TYPE_STEEL },              \
        .catchRate = 25,                                \
        .evYield_Attack = 2,                            \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 25,                                \
        .friendship = STANDARD_FRIENDSHIP,              \
        .growthRate = GROWTH_MEDIUM_FAST,               \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },  \
        .bodyColor = BODY_COLOR_RED,                    \
        .speciesName = _("巨钳螳螂"),                     \
        .natDexNum = NATIONAL_DEX_SCIZOR,               \
        .categoryName = _("铗子"),                    \
        .footprint = gMonFootprint_Scizor,              \
        LEARNSETS(Scizor),                              \
        .formSpeciesIdTable = sScizorFormSpeciesIdTable,\
        .formChangeTable = sScizorFormChangeTable

    [SPECIES_SCIZOR] =
    {
        SCIZOR_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .expYield = 175,
        .abilities = { ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_LIGHT_METAL },
        .cryId = CRY_SCIZOR,
        .height = 18,
        .weight = 1180,
        .description = COMPOUND_STRING("一旦认出敌人，\n就会用具有钢铁硬度的\n钳子毫不留情地将对方击溃."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Scizor, 64, 64),
        FRONT_PIC_FEMALE(Scizor, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Scizor,
        .frontAnimId = ANIM_H_VIBRATE,
        .frontAnimDelay = 19,
        BACK_PIC(Scizor, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Scizor),
        ICON(Scizor, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_SCIZOR_MEGA] =
    {
        SCIZOR_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .expYield = 210,
        .abilities = { ABILITY_TECHNICIAN, ABILITY_TECHNICIAN, ABILITY_TECHNICIAN },
        .isMegaEvolution = TRUE,
        .cryId = CRY_SCIZOR_MEGA,
        .height = 20,
        .weight = 1250,
        .description = COMPOUND_STRING("The excess energy that bathes this\n""Pokémon keeps it in constant danger of\n""overflow. It can't sustain a battle over\n""long periods of time."),
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(ScizorMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ScizorMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ScizorMega, 64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(ScizorMega),
        ICON(ScizorMega, 0),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_8_CROSS_EVOS
    [SPECIES_KLEAVOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = { TYPE_BUG, TYPE_ROCK },
        .catchRate = 15,
        .expYield = 175,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_SHEER_FORCE, ABILITY_SHARPNESS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Kleavor"),
        .cryId = CRY_KLEAVOR,
        .natDexNum = NATIONAL_DEX_KLEAVOR,
        .categoryName = _("Axe"),
        .height = 18,
        .weight = 890,
        .description = COMPOUND_STRING("A violent creature that fells trees with\n""its crude axes and shields itself with hard\n""stone. Should one encounter this Pokémon\n""in the wild, one's only recourse is to flee."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(Kleavor, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Kleavor,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Kleavor, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Kleavor),
        ICON(Kleavor, 2),
        //.footprint = gMonFootprint_Kleavor,
        LEARNSETS(Kleavor),
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_SCYTHER

#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SMOOCHUM] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("迷唇娃"),
        .cryId = CRY_SMOOCHUM,
        .natDexNum = NATIONAL_DEX_SMOOCHUM,
        .categoryName = _("吻"),
        .height = 4,
        .weight = 60,
        .description = COMPOUND_STRING("在确认某样东西时，会先用\n嘴唇而不是手去触碰试试.\n会经常用舌头舔去污渍."),
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Smoochum, 32, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Smoochum,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .frontAnimDelay = 40,
        BACK_PIC(Smoochum, 40, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Smoochum),
        ICON(Smoochum, 1),
        .footprint = gMonFootprint_Smoochum,
        LEARNSETS(Smoochum),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_JYNX}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_JYNX] =
    {
        .baseHP        = 65,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 95,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpAttack = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_DRY_SKIN },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("迷唇姐"),
        .cryId = CRY_JYNX,
        .natDexNum = NATIONAL_DEX_JYNX,
        .categoryName = _("人型"),
        .height = 14,
        .weight = 406,
        .description = COMPOUND_STRING("以独特的节奏悠然移动，\n仿佛是在跳舞.\n走路的姿势如同在扭腰一样."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
        FRONT_PIC(Jynx, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Jynx,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Jynx, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Jynx),
        ICON(Jynx, 2),
        .footprint = gMonFootprint_Jynx,
        LEARNSETS(Jynx),
    },
#endif //P_FAMILY_JYNX

#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
    [SPECIES_ELEKID] =
    {
        .baseHP        = 45,
        .baseAttack    = 63,
        .baseDefense   = 37,
        .baseSpeed     = 95,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 72,
        .evYield_Speed = 1,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("电击怪"),
        .cryId = CRY_ELEKID,
        .natDexNum = NATIONAL_DEX_ELEKID,
        .categoryName = _("电气"),
        .height = 6,
        .weight = 235,
        .description = COMPOUND_STRING("在家的时候，插座就相当\n于奶瓶.可以从中滋滋地\n吸取电力哦."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Elekid, 48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Elekid,
        .frontAnimId = ANIM_FLASH_YELLOW,
        BACK_PIC(Elekid, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_H_SHAKE,
        PALETTES(Elekid),
        ICON(Elekid, 1),
        .footprint = gMonFootprint_Elekid,
        LEARNSETS(Elekid),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ELECTABUZZ}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_ELECTABUZZ] =
    {
        .baseHP        = 65,
        .baseAttack    = 83,
        .baseDefense   = 57,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 172,
        .evYield_Speed = 2,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .speciesName = _("电击兽"),
        .cryId = CRY_ELECTABUZZ,
        .natDexNum = NATIONAL_DEX_ELECTABUZZ,
        .categoryName = _("电气"),
        .height = 11,
        .weight = 300,
        .description = COMPOUND_STRING("全身都带着电.\n会一圈圈抡动手臂\n进行充电后再出拳."),
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Electabuzz, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Electabuzz,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW,
        BACK_PIC(Electabuzz, 64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Electabuzz),
        ICON(Electabuzz, 1),
        .footprint = gMonFootprint_Electabuzz,
        LEARNSETS(Electabuzz),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE},
                                {EVO_ITEM, ITEM_ELECTIRIZER, SPECIES_ELECTIVIRE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_ELECTIVIRE] =
    {
        .baseHP        = 75,
        .baseAttack    = 123,
        .baseDefense   = 67,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 30,
        .expYield = 243,
        .evYield_Attack = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_MOTOR_DRIVE, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("电击魔兽"),
        .cryId = CRY_ELECTIVIRE,
        .natDexNum = NATIONAL_DEX_ELECTIVIRE,
        .categoryName = _("雷电"),
        .height = 18,
        .weight = 1386,
        .description = COMPOUND_STRING("握住冒着电火花的尾巴\n做成带电的拳头后，\n就会用尽全力猛殴."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(Electivire, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Electivire,
        .frontAnimId = ANIM_GLOW_YELLOW,
        BACK_PIC(Electivire, 64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Electivire),
        ICON(Electivire, 1),
        .footprint = gMonFootprint_Electivire,
        LEARNSETS(Electivire),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ

#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
    [SPECIES_MAGBY] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 37,
        .baseSpeed     = 83,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 73,
        .evYield_Speed = 1,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("鸭嘴宝宝"),
        .cryId = CRY_MAGBY,
        .natDexNum = NATIONAL_DEX_MAGBY,
        .categoryName = _("火种"),
        .height = 7,
        .weight = 214,
        .description = COMPOUND_STRING("由于体内流淌着熔岩一样的\n血液，因此体温可达600度."),
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magby, 32, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Magby,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Magby, 40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magby),
        ICON(Magby, 0),
        .footprint = gMonFootprint_Magby,
        LEARNSETS(Magby),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MAGMAR}),
    },
#endif //P_GEN_2_CROSS_EVOS

    [SPECIES_MAGMAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 57,
        .baseSpeed     = 93,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpAttack = 2,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("鸭嘴火兽"),
        .cryId = CRY_MAGMAR,
        .natDexNum = NATIONAL_DEX_MAGMAR,
        .categoryName = _("喷火"),
        .height = 13,
        .weight = 445,
        .description = COMPOUND_STRING("全身都在燃烧，\n光是呼出的气息就带着高温，\n打喷嚏时会同时喷出火焰."),
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magmar, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magmar,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Magmar, 64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magmar),
        ICON(Magmar, 0),
        .footprint = gMonFootprint_Magmar,
        LEARNSETS(Magmar),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR},
                                {EVO_ITEM, ITEM_MAGMARIZER, SPECIES_MAGMORTAR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGMORTAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 83,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 30,
        .expYield = 243,
        .evYield_SpAttack = 3,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("鸭嘴炎兽"),
        .cryId = CRY_MAGMORTAR,
        .natDexNum = NATIONAL_DEX_MAGMORTAR,
        .categoryName = _("爆炎"),
        .height = 16,
        .weight = 680,
        .description = COMPOUND_STRING("从手腕处发射出摄氏\n2000度的火球.连射\n时手腕会稍稍熔化."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(Magmortar, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Magmortar,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Magmortar, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Magmortar),
        ICON(Magmortar, 0),
        .footprint = gMonFootprint_Magmortar,
        LEARNSETS(Magmortar),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR

#if P_FAMILY_PINSIR
#define PINSIR_MISC_INFO                                \
        .catchRate = 45,                                \
        .evYield_Attack = 2,                            \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 25,                                \
        .friendship = STANDARD_FRIENDSHIP,              \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },  \
        .bodyColor = BODY_COLOR_BROWN,                  \
        .speciesName = _("凯罗斯"),                     \
        .natDexNum = NATIONAL_DEX_PINSIR,               \
        .categoryName = _("天牛"),               \
        .footprint = gMonFootprint_Pinsir,              \
        LEARNSETS(Pinsir),                              \
        .formSpeciesIdTable = sPinsirFormSpeciesIdTable,\
        .formChangeTable = sPinsirFormChangeTable

    [SPECIES_PINSIR] =
    {
        PINSIR_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 70,
        .types = { TYPE_BUG, TYPE_BUG },
        .expYield = 175,
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_MOLD_BREAKER, ABILITY_MOXIE },
        .cryId = CRY_PINSIR,
        .height = 15,
        .weight = 550,
        .description = COMPOUND_STRING("虽然身体壮实，\n但弱点是怕冷.到了晚上，\n就会将身体埋在树叶中睡觉."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Pinsir, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Pinsir,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Pinsir, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Pinsir),
        ICON(Pinsir, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_PINSIR_MEGA] =
    {
        PINSIR_MISC_INFO,
        .baseHP        = 65,
        .baseAttack    = 155,
        .baseDefense   = 120,
        .baseSpeed     = 105,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = { TYPE_BUG, TYPE_FLYING },
        .expYield = 210,
        .abilities = { ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE },
        .cryId = CRY_PINSIR_MEGA,
        .height = 17,
        .weight = 590,
        .description = COMPOUND_STRING("The influence of Mega Evolution leaves it\n""in a state of constant excitement.\n""It pierces enemies with its two large\n""horns before shredding them."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(PinsirMega, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_PinsirMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(PinsirMega, 64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(PinsirMega),
        ICON(PinsirMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_PINSIR

#if P_FAMILY_TAUROS
#define TAUROS_MISC_INFO                                    \
        .catchRate = 45,                                    \
        .expYield = 172,                                    \
        .genderRatio = MON_MALE,                            \
        .eggCycles = 20,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },  \
        .speciesName = _("肯泰罗"),                         \
        .cryId = CRY_TAUROS,                                \
        .natDexNum = NATIONAL_DEX_TAUROS,                   \
        .categoryName = _("蛮牛"),                     \
        .height = 14,                                       \
        .pokemonScale = 256,                                \
        .pokemonOffset = 0,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Tauros,                  \
        .formSpeciesIdTable = sTaurosFormSpeciesIdTable

    [SPECIES_TAUROS] =
    {
        TAUROS_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_SHEER_FORCE },
        .bodyColor = BODY_COLOR_BROWN,
        .weight = 884,
        .description = COMPOUND_STRING("精力充沛且个性火暴.\n一旦开始奔跑，在撞到\n东西之前都不会停下脚步."),
        FRONT_PIC(Tauros, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Tauros,
        .frontAnimId = ANIM_V_SHAKE_TWICE,
        .frontAnimDelay = 10,
        BACK_PIC(Tauros, 64, 48),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        PALETTES(Tauros),
        ICON(Tauros, 2),
        LEARNSETS(Tauros),
    },

#if P_PALDEAN_FORMS
#define TAUROS_PALDEAN_MISC_INFO                                                    \
        .baseHP        = 75,                                                        \
        .baseAttack    = 110,                                                       \
        .baseDefense   = 105,                                                       \
        .baseSpeed     = 100,                                                       \
        .baseSpAttack  = 30,                                                        \
        .baseSpDefense = 70,                                                        \
        .evYield_Attack = 2,                                                        \
        .abilities = { ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW }, \
        .bodyColor = BODY_COLOR_BLACK,                                              \
        .frontAnimFrames = sAnims_TaurosPaldean,                                    \
        /*.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,*/                                \
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,                                        \
        .isPaldeanForm = TRUE

    [SPECIES_TAUROS_PALDEAN_COMBAT_BREED] =
    {
        TAUROS_MISC_INFO,
        TAUROS_PALDEAN_MISC_INFO,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .weight = 1150,
        .description = COMPOUND_STRING("This Pokémon has a muscular body\n""and excels at close-quarters combat.\n""It uses its short horns to strike\n""the opponent’s weak spots."),
        FRONT_PIC(TaurosPaldeanCombatBreed, 64, 64),
        .frontPicYOffset = 5,
        BACK_PIC(TaurosPaldeanCombatBreed, 64, 48),
        .backPicYOffset = 9,
        PALETTES(TaurosPaldeanCombatBreed),
        ICON(TaurosPaldeanCombatBreed, 0),
        LEARNSETS(TaurosPaldeanCombatBreed),
    },

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED] =
    {
        TAUROS_MISC_INFO,
        TAUROS_PALDEAN_MISC_INFO,
        .types = { TYPE_FIGHTING, TYPE_FIRE },
        .weight = 850,
        .description = COMPOUND_STRING("When heated by fire energy, its horns can\n""get hotter than 1,800 degrees Fahrenheit.\n""Those gored by them will suffer\n""both wounds and burns."),
        FRONT_PIC(TaurosPaldeanBlazeBreed, 64, 64),
        .frontPicYOffset = 5,
        BACK_PIC(TaurosPaldeanBlazeBreed, 64, 48),
        .backPicYOffset = 9,
        PALETTES(TaurosPaldeanBlazeBreed),
        ICON(TaurosPaldeanBlazeBreed, 0),
        LEARNSETS(TaurosPaldeanBlazeBreed),
    },

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED] =
    {
        TAUROS_MISC_INFO,
        TAUROS_PALDEAN_MISC_INFO,
        .types = { TYPE_FIGHTING, TYPE_WATER },
        .weight = 1100,
        .description = COMPOUND_STRING("This Pokémon blasts water from holes on\n""the tips of its horns--the high-pressure\n""jets pierce right through\n""Tauros’s enemies."),
        FRONT_PIC(TaurosPaldeanAquaBreed, 64, 64),
        .frontPicYOffset = 5,
        BACK_PIC(TaurosPaldeanAquaBreed, 64, 48),
        .backPicYOffset = 9,
        PALETTES(TaurosPaldeanAquaBreed),
        ICON(TaurosPaldeanAquaBreed, 0),
        LEARNSETS(TaurosPaldeanAquaBreed),
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_TAUROS

#if P_FAMILY_MAGIKARP
    [SPECIES_MAGIKARP] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 15,
        .baseSpDefense = 20,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 40,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("鲤鱼王"),
        .cryId = CRY_MAGIKARP,
        .natDexNum = NATIONAL_DEX_MAGIKARP,
        .categoryName = _("鱼"),
        .height = 9,
        .weight = 100,
        .description = COMPOUND_STRING("力量和速度几乎都不行.\n是世界上最弱最可怜的\n宝可梦."),
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Magikarp, 48, 56),
        FRONT_PIC_FEMALE(Magikarp, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Magikarp,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        BACK_PIC(Magikarp, 64, 56),
        BACK_PIC_FEMALE(Magikarp, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        PALETTES(Magikarp),
        ICON(Magikarp, 0),
        .footprint = gMonFootprint_Magikarp,
        LEARNSETS(Magikarp),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_GYARADOS}),
    },

#define GYARADOS_MISC_INFO                                  \
        .catchRate = 45,                                    \
        .evYield_Attack = 2,                                \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 5,                                     \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_DRAGON },\
        .bodyColor = BODY_COLOR_BLUE,                       \
        .speciesName = _("暴鲤龙"),                       \
        .natDexNum = NATIONAL_DEX_GYARADOS,                 \
        .categoryName = _("凶恶"),                     \
        .height = 65,                                       \
        .pokemonScale = 256,                                \
        .pokemonOffset = 6,                                 \
        .trainerScale = 481,                                \
        .trainerOffset = 13,                                \
        .footprint = gMonFootprint_Gyarados,                \
        LEARNSETS(Gyarados),                                \
        .formSpeciesIdTable = sGyaradosFormSpeciesIdTable,  \
        .formChangeTable = sGyaradosFormChangeTable

    [SPECIES_GYARADOS] =
    {
        GYARADOS_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 125,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_FLYING },
        .expYield = 189,
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE },
        .cryId = CRY_GYARADOS,
        .weight = 2350,
        .description = COMPOUND_STRING("性格非常凶暴.\n从嘴里发出的破坏光线\n可以烧毁一切东西."),
        FRONT_PIC(Gyarados, 64, 64),
        FRONT_PIC_FEMALE(Gyarados, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Gyarados,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL,
        BACK_PIC(Gyarados, 64, 64),
        BACK_PIC_FEMALE(Gyarados, 64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Gyarados),
        ICON(Gyarados, 0),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_GYARADOS_MEGA] =
    {
        GYARADOS_MISC_INFO,
        .baseHP        = 95,
        .baseAttack    = 155,
        .baseDefense   = 109,
        .baseSpeed     = 81,
        .baseSpAttack  = 70,
        .baseSpDefense = 130,
        .types = { TYPE_WATER, TYPE_DARK },
        .expYield = 224,
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .cryId = CRY_GYARADOS_MEGA,
        .weight = 3050,
        .description = COMPOUND_STRING("Although it obeys its instinctive drive to\n""destroy everything within its reach, it\n""will respond to orders from a Trainer it\n""truly trusts."),
        FRONT_PIC(GyaradosMega, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_GyaradosMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 6,
        BACK_PIC(GyaradosMega, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(GyaradosMega),
        ICON(GyaradosMega, 0),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAGIKARP

#if P_FAMILY_LAPRAS
#define LAPRAS_MISC_INFO                                                                \
        .baseHP        = 130,                                                           \
        .baseAttack    = 85,                                                            \
        .baseDefense   = 80,                                                            \
        .baseSpeed     = 60,                                                            \
        .baseSpAttack  = 85,                                                            \
        .baseSpDefense = 95,                                                            \
        .types = { TYPE_WATER, TYPE_ICE },                                              \
        .catchRate = 45,                                                                \
        .expYield = 187,                                                                \
        .evYield_HP = 2,                                                                \
        .itemCommon = ITEM_MYSTIC_WATER,                                                \
        .itemRare = ITEM_MYSTIC_WATER,                                                  \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 40,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },                          \
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_SHELL_ARMOR, ABILITY_HYDRATION },  \
        .bodyColor = BODY_COLOR_BLUE,                                                   \
        .speciesName = _("拉普拉斯"),                                                     \
        .cryId = CRY_LAPRAS,                                                            \
        .natDexNum = NATIONAL_DEX_LAPRAS,                                               \
        .categoryName = _("座骑"),                                                 \
        .footprint = gMonFootprint_Lapras,                                              \
        LEARNSETS(Lapras),                                                              \
        .formSpeciesIdTable = sLaprasFormSpeciesIdTable,                                \
        .formChangeTable = sLaprasFormChangeTable

    [SPECIES_LAPRAS] =
    {
        LAPRAS_MISC_INFO,
        .height = 25,
        .weight = 2200,
        .description = COMPOUND_STRING("十分耐寒，不畏冰海.\n皮肤滑滑的，\n摸上去会有点凉."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(Lapras, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Lapras,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Lapras, 56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Lapras),
        ICON(Lapras, 2),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_LAPRAS_GIGANTAMAX] =
    {
        LAPRAS_MISC_INFO,
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING("Over 5,000 people can ride on its\n""shell at once. And it's a very\n""comfortable ride, without the slightest\n""shaking or swaying."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(LaprasGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_LaprasGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(LaprasGigantamax, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(LaprasGigantamax),
        ICON(LaprasGigantamax, 2),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_LAPRAS

#if P_FAMILY_DITTO
    [SPECIES_DITTO] =
    {
        .baseHP        = 48,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 48,
        .baseSpAttack  = 48,
        .baseSpDefense = 48,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 35,
        .expYield = 101,
        .evYield_HP = 1,
        .itemCommon = ITEM_QUICK_POWDER,
        .itemRare = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_DITTO, EGG_GROUP_DITTO },
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_IMPOSTER },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("百变怪"),
        .cryId = CRY_DITTO,
        .natDexNum = NATIONAL_DEX_DITTO,
        .categoryName = _("变身"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING("能够通过重组全身的细胞，\n变得与看到的东西一模一样，\n然而一旦放松就会变回原形."),
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Ditto, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Ditto,
        .frontAnimId = ANIM_CIRCULAR_STRETCH_TWICE,
        BACK_PIC(Ditto, 48, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        PALETTES(Ditto),
        ICON(Ditto, 2),
        .footprint = gMonFootprint_Ditto,
        LEARNSETS(Ditto),
    },
#endif //P_FAMILY_DITTO

#if P_FAMILY_EEVEE
#define EEVEE_MISC_INFO                                                                 \
        .baseHP        = 55,                                                            \
        .baseAttack    = 55,                                                            \
        .baseDefense   = 50,                                                            \
        .baseSpeed     = 55,                                                            \
        .baseSpAttack  = 45,                                                            \
        .baseSpDefense = 65,                                                            \
        .types = { TYPE_NORMAL, TYPE_NORMAL },                                          \
        .catchRate = 45,                                                                \
        .expYield = 65,                                                                 \
        .evYield_SpDefense = 1,                                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                                            \
        .eggCycles = 35,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },                              \
        .abilities = { ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION },  \
        .bodyColor = BODY_COLOR_BROWN,                                                  \
        .speciesName = _("伊布"),                                                      \
        .cryId = CRY_EEVEE,                                                             \
        .natDexNum = NATIONAL_DEX_EEVEE,                                                \
        .categoryName = _("进化"),                                                 \
        .footprint = gMonFootprint_Eevee,                                               \
        LEARNSETS(Eevee),                                                               \
        .formSpeciesIdTable = sEeveeFormSpeciesIdTable,                                 \
        .formChangeTable = sEeveeFormChangeTable

    [SPECIES_EEVEE] =
    {
        EEVEE_MISC_INFO,
        .height = 3,
        .weight = 65,
        .description = COMPOUND_STRING("由于不稳定的遗传基因，\n蕴含着各种各样进化\n可能性的特殊宝可梦."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Eevee, 40, 48),
        FRONT_PIC_FEMALE(Eevee, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Eevee,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Eevee, 56, 48),
        BACK_PIC_FEMALE(Eevee, 56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Eevee),
        ICON(Eevee, 2),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                                {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                                {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                                {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                                {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON},
                                {EVO_SPECIFIC_MAP, MAP_PETALBURG_WOODS, SPECIES_LEAFEON},
                                {EVO_ITEM, ITEM_LEAF_STONE, SPECIES_LEAFEON},
                                {EVO_SPECIFIC_MAP, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, SPECIES_GLACEON},
                                {EVO_ITEM, ITEM_ICE_STONE, SPECIES_GLACEON},
                                {EVO_FRIENDSHIP_MOVE_TYPE, TYPE_FAIRY, SPECIES_SYLVEON}),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_EEVEE_GIGANTAMAX] =
    {
        EEVEE_MISC_INFO,
        .height = 180,
        .weight = 0,
        .description = COMPOUND_STRING("Having gotten even friendlier and\n""more innocent, Eevee tries to play\n""with anyone around, only to end up\n""crushing them with its immense body."),
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(EeveeGigantamax, 64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_EeveeGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(EeveeGigantamax, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(EeveeGigantamax),
        ICON(EeveeGigantamax, 2),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_VAPOREON] =
    {
        .baseHP        = 130,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 184,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_WATER_ABSORB, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("水伊布"),
        .cryId = CRY_VAPOREON,
        .natDexNum = NATIONAL_DEX_VAPOREON,
        .categoryName = _("泡沫"),
        .height = 10,
        .weight = 290,
        .description = COMPOUND_STRING("身体细胞的结构与水分子\n相似.它能和水融为一体，\n让别人无法看见它."),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Vaporeon, 48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Vaporeon,
        .frontAnimId = ANIM_GLOW_BLUE,
        BACK_PIC(Vaporeon, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Vaporeon),
        ICON(Vaporeon, 0),
        .footprint = gMonFootprint_Vaporeon,
        LEARNSETS(Vaporeon),
    },

    [SPECIES_JOLTEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 184,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_VOLT_ABSORB, ABILITY_QUICK_FEET },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("雷伊布"),
        .cryId = CRY_JOLTEON,
        .natDexNum = NATIONAL_DEX_JOLTEON,
        .categoryName = _("灯"),
        .height = 8,
        .weight = 245,
        .description = COMPOUND_STRING("当雷伊布生气或是吃惊时，\n它全身的体毛会像针\n一样竖起来刺穿对手."),
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Jolteon, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Jolteon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Jolteon, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Jolteon),
        ICON(Jolteon, 2),
        .footprint = gMonFootprint_Jolteon,
        LEARNSETS(Jolteon),
    },

    [SPECIES_FLAREON] =
    {
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 184,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_FLASH_FIRE, ABILITY_GUTS },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("火伊布"),
        .cryId = CRY_FLAREON,
        .natDexNum = NATIONAL_DEX_FLAREON,
        .categoryName = _("火焰"),
        .height = 9,
        .weight = 250,
        .description = COMPOUND_STRING("当火焰在体内积蓄时，\n火伊布的体温也会\n随之上升到最高900度."),
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Flareon, 56, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Flareon,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Flareon, 64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Flareon),
        ICON(Flareon, 3),
        .footprint = gMonFootprint_Flareon,
        LEARNSETS(Flareon),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_ESPEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("太阳伊布"),
        .cryId = CRY_ESPEON,
        .natDexNum = NATIONAL_DEX_ESPEON,
        .categoryName = _("太阳"),
        .height = 9,
        .weight = 265,
        .description = COMPOUND_STRING("能通过感受空气的流动，\n准确地预测出接下来的\n天气和对手的行动等等."),
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Espeon, 48, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Espeon,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Espeon, 64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Espeon),
        ICON(Espeon, 2),
        .footprint = gMonFootprint_Espeon,
        LEARNSETS(Espeon),
    },

    [SPECIES_UMBREON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("月亮伊布"),
        .cryId = CRY_UMBREON,
        .natDexNum = NATIONAL_DEX_UMBREON,
        .categoryName = _("月光"),
        .height = 10,
        .weight = 270,
        .description = COMPOUND_STRING("发怒的时候会从全身的\n毛孔喷出混合了毒素的汗液，\n袭击对手的眼睛."),
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Umbreon, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Umbreon,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Umbreon, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Umbreon),
        ICON(Umbreon, 0),
        .footprint = gMonFootprint_Umbreon,
        LEARNSETS(Umbreon),
    },
#endif //P_GEN_2_CROSS_EVOS

#if P_GEN_4_CROSS_EVOS
    [SPECIES_LEAFEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 184,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("叶伊布"),
        .cryId = CRY_LEAFEON,
        .natDexNum = NATIONAL_DEX_LEAFEON,
        .categoryName = _("新绿"),
        .height = 10,
        .weight = 255,
        .description = COMPOUND_STRING("尾巴好似锐利的刀刃，\n锋利得无与伦比，\n连大树都能一斩为二."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Leafeon, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Leafeon,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Leafeon, 48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Leafeon),
        ICON(Leafeon, 1),
        .footprint = gMonFootprint_Leafeon,
        LEARNSETS(Leafeon),
    },

    [SPECIES_GLACEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_SNOW_CLOAK, ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("冰伊布"),
        .cryId = CRY_GLACEON,
        .natDexNum = NATIONAL_DEX_GLACEON,
        .categoryName = _("新雪"),
        .height = 8,
        .weight = 259,
        .description = COMPOUND_STRING("能够降下冰晶.\n被它的美貌迷住的猎物\n会在不知不觉间被冻住."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Glaceon, 64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Glaceon,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Glaceon, 56, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Glaceon),
        ICON(Glaceon, 0),
        .footprint = gMonFootprint_Glaceon,
        LEARNSETS(Glaceon),
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_GEN_6_CROSS_EVOS
    [SPECIES_SYLVEON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_CUTE_CHARM, ABILITY_PIXILATE },
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .speciesName = _("仙子伊布"),
        .cryId = CRY_SYLVEON,
        .natDexNum = NATIONAL_DEX_SYLVEON,
        .categoryName = _("连结"),
        .height = 10,
        .weight = 235,
        .description = COMPOUND_STRING("会从蝴蝶结般的触角里\n释放能够消除敌意的波动，\n借此平息纷争."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Sylveon, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Sylveon,
        .frontAnimId = ANIM_SHRINK_GROW,
        BACK_PIC(Sylveon, 64, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        PALETTES(Sylveon),
        ICON(Sylveon, 0),
        .footprint = gMonFootprint_Sylveon,
        LEARNSETS(Sylveon),
    },
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_EEVEE

#if P_FAMILY_PORYGON
    [SPECIES_PORYGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 79,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("多边兽"),
        .cryId = CRY_PORYGON,
        .natDexNum = NATIONAL_DEX_PORYGON,
        .categoryName = _("虚拟"),
        .height = 8,
        .weight = 365,
        .description = COMPOUND_STRING("因为能将身体化为数字数据，\n所以可以进入电脑空间."),
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Porygon, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Porygon,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        BACK_PIC(Porygon, 56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Porygon),
        ICON(Porygon, 0),
        .footprint = gMonFootprint_Porygon,
        LEARNSETS(Porygon),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2},
                                {EVO_ITEM, ITEM_UPGRADE, SPECIES_PORYGON2}),
    },

#if P_GEN_2_CROSS_EVOS
    [SPECIES_PORYGON2] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 180,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("多边兽II"),
        .cryId = CRY_PORYGON2,
        .natDexNum = NATIONAL_DEX_PORYGON2,
        .categoryName = _("虚拟"),
        .height = 6,
        .weight = 325,
        .description = COMPOUND_STRING("将行星的开发纳入视野，\n以当时的最新技术\n升级了多边兽."),
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Porygon2, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Porygon2,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        BACK_PIC(Porygon2, 56, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(Porygon2),
        ICON(Porygon2, 0),
        .footprint = gMonFootprint_Porygon2,
        LEARNSETS(Porygon2),
        .evolutions = EVOLUTION({EVO_TRADE_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z},
                                {EVO_ITEM, ITEM_DUBIOUS_DISC, SPECIES_PORYGON_Z}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_PORYGON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 135,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 241,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_DOWNLOAD, ABILITY_ANALYTIC },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("多边兽Z"),
        .cryId = CRY_PORYGON_Z,
        .natDexNum = NATIONAL_DEX_PORYGON_Z,
        .categoryName = _("虚拟"),
        .height = 9,
        .weight = 340,
        .description = COMPOUND_STRING("In order to create a more advanced\n""Pokémon, an additional program was\n""installed, but apparently it contained a\n""defect that made it move oddly."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(PorygonZ, 40, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Porygon_Z,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .enemyMonElevation = 12,
        BACK_PIC(PorygonZ, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        PALETTES(PorygonZ),
        ICON(PorygonZ, 0),
        .footprint = gMonFootprint_PorygonZ,
        LEARNSETS(PorygonZ),
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON

#if P_FAMILY_OMANYTE
    [SPECIES_OMANYTE] =
    {
        .baseHP        = 35,
        .baseAttack    = 40,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("菊石兽"),
        .cryId = CRY_OMANYTE,
        .natDexNum = NATIONAL_DEX_OMANYTE,
        .categoryName = _("螺旋"),
        .height = 4,
        .weight = 75,
        .description = COMPOUND_STRING("用化石复原出的宝可梦，\n靠巧妙地弯曲它的10条腿\n在古代的大海里飘荡."),
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Omanyte, 40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Omanyte,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        BACK_PIC(Omanyte, 48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Omanyte),
        ICON(Omanyte, 0),
        .footprint = gMonFootprint_Omanyte,
        LEARNSETS(Omanyte),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_OMASTAR}),
    },

    [SPECIES_OMASTAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 125,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("多刺菊石兽"),
        .cryId = CRY_OMASTAR,
        .natDexNum = NATIONAL_DEX_OMASTAR,
        .categoryName = _("螺旋"),
        .height = 10,
        .weight = 350,
        .description = COMPOUND_STRING("它拥有锋利的牙齿，\n但据说它由于外壳过大，\n不易移动而导致灭绝."),
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Omastar, 64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Omastar,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Omastar, 56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Omastar),
        ICON(Omastar, 0),
        .footprint = gMonFootprint_Omastar,
        LEARNSETS(Omastar),
    },
#endif //P_FAMILY_OMANYTE

#if P_FAMILY_KABUTO
    [SPECIES_KABUTO] =
    {
        .baseHP        = 30,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("化石盔"),
        .cryId = CRY_KABUTO,
        .natDexNum = NATIONAL_DEX_KABUTO,
        .categoryName = _("龟甲"),
        .height = 5,
        .weight = 115,
        .description = COMPOUND_STRING("除某些极少数地方外，\n该宝可梦已基本灭绝.\n会用坚硬的外壳保护身体."),
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kabuto, 40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Kabuto,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        BACK_PIC(Kabuto, 48, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Kabuto),
        ICON(Kabuto, 2),
        .footprint = gMonFootprint_Kabuto,
        LEARNSETS(Kabuto),
        .evolutions = EVOLUTION({EVO_LEVEL, 40, SPECIES_KABUTOPS}),
    },

    [SPECIES_KABUTOPS] =
    {
        .baseHP        = 60,
        .baseAttack    = 115,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("镰刀盔"),
        .cryId = CRY_KABUTOPS,
        .natDexNum = NATIONAL_DEX_KABUTOPS,
        .categoryName = _("龟甲"),
        .height = 13,
        .weight = 405,
        .description = COMPOUND_STRING("Kabutops once swam underwater to hunt \n""for prey. It was apparently evolving from\n""being a water dweller to living on land as\n""evident from changes in its gills and legs."),
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kabutops, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Kabutops,
        .frontAnimId = ANIM_H_SHAKE,
        BACK_PIC(Kabutops, 64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Kabutops),
        ICON(Kabutops, 2),
        .footprint = gMonFootprint_Kabutops,
        LEARNSETS(Kabutops),
    },
#endif //P_FAMILY_KABUTO

#if P_FAMILY_AERODACTYL
#define AERODACTYL_MISC_INFO                                \
        .types = { TYPE_ROCK, TYPE_FLYING },                \
        .catchRate = 45,                                    \
        .evYield_Speed = 2,                                 \
        .genderRatio = PERCENT_FEMALE(12.5),                \
        .eggCycles = 35,                                    \
        .friendship = STANDARD_FRIENDSHIP,                  \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },\
        .bodyColor = BODY_COLOR_PURPLE,                     \
        .speciesName = _("化石翼龙"),                     \
        .natDexNum = NATIONAL_DEX_AERODACTYL,               \
        .categoryName = _("化石"),                        \
        .footprint = gMonFootprint_Aerodactyl,              \
        LEARNSETS(Aerodactyl),                              \
        .formSpeciesIdTable = sAerodactylFormSpeciesIdTable,\
        .formChangeTable = sAerodactylFormChangeTable

    [SPECIES_AERODACTYL] =
    {
        AERODACTYL_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 130,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .expYield = 180,
        .abilities = { ABILITY_ROCK_HEAD, ABILITY_PRESSURE, ABILITY_UNNERVE },
        .cryId = CRY_AERODACTYL,
        .height = 18,
        .weight = 590,
        .description = COMPOUND_STRING("恐龙时代的宝可梦.\n用锯子一样的牙齿\n将猎物撕碎后吞食."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        FRONT_PIC(Aerodactyl, 64, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Aerodactyl,
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .enemyMonElevation = 9,
        BACK_PIC(Aerodactyl, 64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(Aerodactyl),
        ICON(Aerodactyl, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AERODACTYL_MEGA] =
    {
        AERODACTYL_MISC_INFO,
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 85,
        .baseSpeed     = 150,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .expYield = 215,
        .abilities = { ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS },
        .cryId = CRY_AERODACTYL_MEGA,
        .height = 21,
        .weight = 790,
        .description = COMPOUND_STRING("The power of Mega Evolution has\n""completely restored its genes. The rocks\n""on its body are harder than diamond."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
        FRONT_PIC(AerodactylMega, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AerodactylMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(AerodactylMega, 64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        PALETTES(AerodactylMega),
        ICON(AerodactylMega, 2),
        .isMegaEvolution = TRUE,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MUNCHLAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 5,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 50,
        .expYield = 78,
        .evYield_HP = 1,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_PICKUP, ABILITY_THICK_FAT, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("小卡比兽"),
        .cryId = CRY_MUNCHLAX,
        .natDexNum = NATIONAL_DEX_MUNCHLAX,
        .categoryName = _("大胃王"),
        .height = 6,
        .weight = 1050,
        .description = COMPOUND_STRING("在体毛下面储存食物.\n如果是自己信赖的对象，\n也会把食物分给对方一口."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Munchlax, 48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Munchlax,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Munchlax, 48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_GROW,
        PALETTES(Munchlax),
        ICON(Munchlax, 3),
        .footprint = gMonFootprint_Munchlax,
        LEARNSETS(Munchlax),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP, 0, SPECIES_SNORLAX}),
    },
#endif //P_GEN_4_CROSS_EVOS

#define SNORLAX_MISC_INFO                                                       \
        .baseHP        = 160,                                                   \
        .baseAttack    = 110,                                                   \
        .baseDefense   = 65,                                                    \
        .baseSpeed     = 30,                                                    \
        .baseSpAttack  = 65,                                                    \
        .baseSpDefense = 110,                                                   \
        .types = { TYPE_NORMAL, TYPE_NORMAL },                                  \
        .catchRate = 25,                                                        \
        .expYield = 189,                                                        \
        .evYield_HP = 2,                                                        \
        .itemCommon = ITEM_LEFTOVERS,                                           \
        .itemRare = ITEM_LEFTOVERS,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                    \
        .eggCycles = 40,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_SLOW,                                              \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },                  \
        .abilities = { ABILITY_IMMUNITY, ABILITY_THICK_FAT, ABILITY_GLUTTONY }, \
        .bodyColor = BODY_COLOR_BLACK,                                          \
        .speciesName = _("卡比兽"),                                            \
        .cryId = CRY_SNORLAX,                                                   \
        .natDexNum = NATIONAL_DEX_SNORLAX,                                      \
        .categoryName = _("睡觉"),                                          \
        .footprint = gMonFootprint_Snorlax,                                     \
        LEARNSETS(Snorlax),                                                     \
        .formSpeciesIdTable = sSnorlaxFormSpeciesIdTable,                       \
        .formChangeTable = sSnorlaxFormChangeTable

    [SPECIES_SNORLAX] =
    {
        SNORLAX_MISC_INFO,
        .height = 21,
        .weight = 4600,
        .description = COMPOUND_STRING("拥有一个结实的胃，\n即使吃了发霉腐烂的东西，\n也完全不会吃坏肚子."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        FRONT_PIC(Snorlax, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Snorlax,
        .frontAnimId = ANIM_V_STRETCH,
        BACK_PIC(Snorlax, 64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        PALETTES(Snorlax),
        ICON(Snorlax, 3),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_SNORLAX_GIGANTAMAX] =
    {
        SNORLAX_MISC_INFO,
        .height = 350,
        .weight = 0,
        .description = COMPOUND_STRING("Gigantamax energy has affected\n""stray seeds and even pebbles that\n""got stuck to Snorlax, making them grow\n""to a huge size."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
        FRONT_PIC(SnorlaxGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SnorlaxGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SnorlaxGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SnorlaxGigantamax),
        ICON(SnorlaxGigantamax, 3),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SNORLAX

#if P_FAMILY_ARTICUNO
#define ARTICUNO_MISC_INFO                                              \
        .catchRate = 3,                                                 \
        .genderRatio = MON_GENDERLESS,                                  \
        .friendship = 35,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .speciesName = _("急冻鸟"),                                   \
        .cryId = CRY_ARTICUNO,                                          \
        .natDexNum = NATIONAL_DEX_ARTICUNO,                             \
        .height = 17,                                                   \
        .pokemonScale = 256,                                            \
        .pokemonOffset = 0,                                             \
        .trainerScale = 309,                                            \
        .trainerOffset = 2,                                             \
        .footprint = gMonFootprint_Articuno,                            \
        .formSpeciesIdTable = sArticunoFormSpeciesIdTable,              \
        .isLegendary = TRUE

    [SPECIES_ARTICUNO] =
    {
        ARTICUNO_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 125,
        .types = { TYPE_ICE, TYPE_FLYING },
        .expYield = 261,
        .evYield_SpDefense = 3,
        .eggCycles = 80,
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_SNOW_CLOAK },
        .bodyColor = BODY_COLOR_BLUE,
        .categoryName = _("冷冻"),
        .weight = 554,
        .description = COMPOUND_STRING("传说的鸟宝可梦.\n它能将冬日空中的空气中\n含有的水分冻结，降下雪花."),
        FRONT_PIC(Articuno, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Articuno,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Articuno, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        PALETTES(Articuno),
        ICON(Articuno, 2),
        LEARNSETS(Articuno),
    },

#if P_GALARIAN_FORMS
    [SPECIES_ARTICUNO_GALARIAN] =
    {
        ARTICUNO_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_FLYING },
        .expYield = 290,
        .evYield_SpAttack = 3,
        .eggCycles = 120,
        .abilities = { ABILITY_COMPETITIVE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .categoryName = _("冷酷"),
        .weight = 509,
        .description = COMPOUND_STRING("It fires beams that immobilize opponents\n""as if they had been frozen solid.\n""Its feather-like blades of psychic energy\n""rip through thick iron sheets like paper."),
        FRONT_PIC(ArticunoGalarian, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_ArticunoGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        BACK_PIC(ArticunoGalarian, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ArticunoGalarian),
        ICON(ArticunoGalarian, 2),
        LEARNSETS(ArticunoGalarian),
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ARTICUNO

#if P_FAMILY_ZAPDOS
#define ZAPDOS_MISC_INFO                                                \
        .catchRate = 3,                                                 \
        .genderRatio = MON_GENDERLESS,                                  \
        .friendship = 35,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .bodyColor = BODY_COLOR_YELLOW,                                 \
        .speciesName = _("闪电鸟"),                                     \
        .cryId = CRY_ZAPDOS,                                            \
        .natDexNum = NATIONAL_DEX_ZAPDOS,                               \
        .height = 16,                                                   \
        .pokemonScale = 256,                                            \
        .pokemonOffset = 0,                                             \
        .trainerScale = 318,                                            \
        .trainerOffset = 3,                                             \
        .footprint = gMonFootprint_Zapdos,                              \
        .formSpeciesIdTable = sZapdosFormSpeciesIdTable,                \
        .isLegendary = TRUE

    [SPECIES_ZAPDOS] =
    {
        ZAPDOS_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = { TYPE_ELECTRIC, TYPE_FLYING },
        .expYield = 261,
        .evYield_SpAttack = 3,
        .eggCycles = 80,
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_STATIC },
        #else
            .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_LIGHTNING_ROD },
        #endif
        .categoryName = _("电气"),
        .weight = 526,
        .description = COMPOUND_STRING("传说的鸟宝可梦.\n据说它会在天空黑暗，\n落雷不断时出现."),
        FRONT_PIC(Zapdos, 64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Zapdos,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .enemyMonElevation = 8,
        BACK_PIC(Zapdos, 64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        PALETTES(Zapdos),
        ICON(Zapdos, 0),
        LEARNSETS(Zapdos),
    },

#if P_GALARIAN_FORMS
    [SPECIES_ZAPDOS_GALARIAN] =
    {
        ZAPDOS_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = { TYPE_FIGHTING, TYPE_FLYING },
        .expYield = 290,
        .evYield_Attack = 3,
        .eggCycles = 120,
        .abilities = { ABILITY_DEFIANT, ABILITY_NONE, ABILITY_NONE },
        .categoryName = _("Strong Legs"),
        .weight = 582,
        .description = COMPOUND_STRING("When its feathers rub together, they\n""produce a crackling sound like the\n""zapping of electricity. Apparently, it runs\n""through the mountains at over 180 mph."),
        FRONT_PIC(ZapdosGalarian, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ZapdosGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZapdosGalarian, 56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ZapdosGalarian),
        ICON(ZapdosGalarian, 0),
        LEARNSETS(ZapdosGalarian),
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZAPDOS

#if P_FAMILY_MOLTRES
#define MOLTRES_MISC_INFO                                               \
        .catchRate = 3,                                                 \
        .genderRatio = MON_GENDERLESS,                                  \
        .friendship = 35,                                               \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .speciesName = _("火焰鸟"),                                    \
        .cryId = CRY_MOLTRES,                                           \
        .natDexNum = NATIONAL_DEX_MOLTRES,                              \
        .height = 20,                                                   \
        .pokemonScale = 270,                                            \
        .pokemonOffset = 0,                                             \
        .trainerScale = 387,                                            \
        .trainerOffset = 8,                                             \
        .footprint = gMonFootprint_Moltres,                             \
        .formSpeciesIdTable = sMoltresFormSpeciesIdTable,               \
        .isLegendary = TRUE

    [SPECIES_MOLTRES] =
    {
        MOLTRES_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .expYield = 261,
        .evYield_SpAttack = 3,
        .eggCycles = 80,
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_YELLOW,
        .categoryName = _("火焰"),
        .weight = 600,
        .description = COMPOUND_STRING("传说的鸟宝可梦.当它\n挥舞起剧烈燃烧着的双翅，\n哪怕是夜空也会被点亮."),
        FRONT_PIC(Moltres, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Moltres,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        BACK_PIC(Moltres, 64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        PALETTES(Moltres),
        ICON(Moltres, 0),
        LEARNSETS(Moltres),
    },

#if P_GALARIAN_FORMS
    [SPECIES_MOLTRES_GALARIAN] =
    {
        MOLTRES_MISC_INFO,
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = { TYPE_DARK, TYPE_FLYING },
        .expYield = 290,
        .evYield_SpDefense = 3,
        .eggCycles = 120,
        .abilities = { ABILITY_BERSERK, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_RED,
        .categoryName = _("Malevolent"),
        .weight = 660,
        .description = COMPOUND_STRING("This Pokémon's sinister, flame-like aura\n""will consume the spirit of any creature\n""it hits. Victims become burned-out\n""shadows of themselves."),
        FRONT_PIC(MoltresGalarian, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_MoltresGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MoltresGalarian, 56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MoltresGalarian),
        ICON(MoltresGalarian, 0),
        LEARNSETS(MoltresGalarian),
        .isGalarianForm = TRUE,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MOLTRES

#if P_FAMILY_DRATINI
    [SPECIES_DRATINI] =
    {
        .baseHP        = 41,
        .baseAttack    = 64,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("迷你龙"),
        .cryId = CRY_DRATINI,
        .natDexNum = NATIONAL_DEX_DRATINI,
        .categoryName = _("龙"),
        .height = 18,
        .weight = 33,
        .description = COMPOUND_STRING("以接近每天一次的频率\n反复蜕皮并长大.\n刚蜕完皮的皮肤很娇嫩."),
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
        FRONT_PIC(Dratini, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Dratini,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dratini, 56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        PALETTES(Dratini),
        ICON(Dratini, 0),
        .footprint = gMonFootprint_Dratini,
        LEARNSETS(Dratini),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_DRAGONAIR}),
    },

    [SPECIES_DRAGONAIR] =
    {
        .baseHP        = 61,
        .baseAttack    = 84,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("哈克龙"),
        .cryId = CRY_DRAGONAIR,
        .natDexNum = NATIONAL_DEX_DRAGONAIR,
        .categoryName = _("龙"),
        .height = 40,
        .weight = 165,
        .description = COMPOUND_STRING("据说，在水晶般的珠子里\n蕴含着操纵天气的力量."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
        FRONT_PIC(Dragonair, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Dragonair,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Dragonair, 40, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        PALETTES(Dragonair),
        ICON(Dragonair, 0),
        .footprint = gMonFootprint_Dragonair,
        LEARNSETS(Dragonair),
        .evolutions = EVOLUTION({EVO_LEVEL, 55, SPECIES_DRAGONITE}),
    },

    [SPECIES_DRAGONITE] =
    {
        .baseHP        = 91,
        .baseAttack    = 134,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_DRAGON, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack = 3,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MULTISCALE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("快龙"),
        .cryId = CRY_DRAGONITE,
        .natDexNum = NATIONAL_DEX_DRAGONITE,
        .categoryName = _("龙"),
        .height = 22,
        .weight = 2100,
        .description = COMPOUND_STRING("平常都是非常稳重的，\n但如果触碰到了它的逆鳞，\n就会不毁灭一切不罢休."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(Dragonite, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dragonite,
        .frontAnimId = ANIM_V_SHAKE,
        BACK_PIC(Dragonite, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE,
        PALETTES(Dragonite),
        ICON(Dragonite, 2),
        .footprint = gMonFootprint_Dragonite,
        LEARNSETS(Dragonite),
    },
#endif //P_FAMILY_DRATINI

#if P_FAMILY_MEWTWO
#define SPECIES_MEWTWO_MISC_INFO                                        \
        .catchRate = 3,                                                 \
        .evYield_SpAttack = 3,                                          \
        .genderRatio = MON_GENDERLESS,                                  \
        .eggCycles = 120,                                               \
        .friendship = 0,                                                \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },\
        .bodyColor = BODY_COLOR_PURPLE,                                 \
        .speciesName = _("梦幻"),                                     \
        .natDexNum = NATIONAL_DEX_MEWTWO,                               \
        .categoryName = _("基因"),                                   \
        .footprint = gMonFootprint_Mewtwo,                              \
        LEARNSETS(Mewtwo),                                              \
        .formSpeciesIdTable = sMewtwoFormSpeciesIdTable,                \
        .formChangeTable = sMewtwoFormChangeTable,                      \
        .isLegendary = TRUE

    [SPECIES_MEWTWO] =
    {
        SPECIES_MEWTWO_MISC_INFO,
        .baseHP        = 106,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 90,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .expYield = 306,
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE },
        .cryId = CRY_MEWTWO,
        .height = 20,
        .weight = 1220,
        .description = COMPOUND_STRING("某位科学家的研究造就了\n超梦的诞生.\n它的力量专为战斗而存在."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(Mewtwo, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Mewtwo,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Mewtwo, 64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(Mewtwo),
        ICON(Mewtwo, 2),
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_MEWTWO_MEGA_X] =
    {
        SPECIES_MEWTWO_MISC_INFO,
        .baseHP        = 106,
        .baseAttack    = 190,
        .baseDefense   = 100,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_FIGHTING },
        .expYield = 351,
        .abilities = { ABILITY_STEADFAST, ABILITY_STEADFAST, ABILITY_STEADFAST },
        .isMegaEvolution = TRUE,
        .cryId = CRY_MEWTWO_MEGA_X,
        .height = 23,
        .weight = 1270,
        .description = COMPOUND_STRING("因重组了梦幻的遗传基因\n而诞生。据说有着所有\n宝可梦中最残暴的心。"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(MewtwoMegaX, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MewtwoMegaX,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MewtwoMegaX, 56, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(MewtwoMegaX),
        ICON(MewtwoMegaX, 2),
    },

    [SPECIES_MEWTWO_MEGA_Y] =
    {
        SPECIES_MEWTWO_MISC_INFO,
        .baseHP        = 106,
        .baseAttack    = 150,
        .baseDefense   = 70,
        .baseSpeed     = 140,
        .baseSpAttack  = 194,
        .baseSpDefense = 120,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .expYield = 351,
        .abilities = { ABILITY_INSOMNIA, ABILITY_INSOMNIA, ABILITY_INSOMNIA },
        .isMegaEvolution = TRUE,
        .cryId = CRY_MEWTWO_MEGA_Y,
        .height = 15,
        .weight = 330,
        .description = COMPOUND_STRING("Despite its diminished size, its mental\n""power has grown phenomenally. With a mere\n""thought, it can smash a skyscraper to\n""smithereens."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
        FRONT_PIC(MewtwoMegaY, 40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_MewtwoMegaY,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        BACK_PIC(MewtwoMegaY, 64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        PALETTES(MewtwoMegaY),
        ICON(MewtwoMegaY, 2),
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MEWTWO

#if P_FAMILY_MEW
    [SPECIES_MEW] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PINK,
        .isMythical = TRUE,
        .speciesName = _("梦幻"),
        .cryId = CRY_MEW,
        .natDexNum = NATIONAL_DEX_MEW,
        .categoryName = _("新种"),
        .height = 4,
        .weight = 40,
        .description = COMPOUND_STRING("虽然被人们视为已经灭绝，\n目击到这只幻之宝可梦的\n传闻依然接连不断."),
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Mew, 64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Mew,
        .frontAnimId = ANIM_ZIGZAG_SLOW,
        .enemyMonElevation = 11,
        BACK_PIC(Mew, 64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        PALETTES(Mew),
        ICON(Mew, 0),
        .footprint = gMonFootprint_Mew,
        LEARNSETS(Mew),
    },
#endif //P_FAMILY_MEW

#ifdef __INTELLISENSE__
};
#endif