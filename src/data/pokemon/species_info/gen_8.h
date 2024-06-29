#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen8[] =
{
#endif

#if P_FAMILY_GROOKEY
    [SPECIES_GROOKEY] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("敲音猴"),
        .cryId = CRY_GROOKEY,
        .natDexNum = NATIONAL_DEX_GROOKEY,
        .categoryName = _("小猴"),
        .height = 3,
        .weight = 50,
        .description = COMPOUND_STRING("当它用特别的木棒敲奏时，\n能够给予花草活力的力量\n就会变成音波扩散开来."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Grookey, 40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Grookey,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Grookey, 48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Grookey),
        ICON(Grookey, 1),
        .footprint = gMonFootprint_Grookey,
        LEARNSETS(Grookey),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_THWACKEY}),
    },

    [SPECIES_THWACKEY] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS },
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("啪咚猴"),
        .cryId = CRY_THWACKEY,
        .natDexNum = NATIONAL_DEX_THWACKEY,
        .categoryName = _("节拍"),
        .height = 7,
        .weight = 140,
        .description = COMPOUND_STRING("越是能用2根木棒敲奏出\n激烈节拍的啪咚猴，越是\n能获得伙伴们的尊敬."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Thwackey, 48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Thwackey,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Thwackey, 56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Thwackey),
        ICON(Thwackey, 1),
        .footprint = gMonFootprint_Thwackey,
        LEARNSETS(Thwackey),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_RILLABOOM}),
    },

#define RILLABOOM_MISC_INFO                                                     \
        .baseHP        = 100,                                                   \
        .baseAttack    = 125,                                                   \
        .baseDefense   = 90,                                                    \
        .baseSpeed     = 85,                                                    \
        .baseSpAttack  = 60,                                                    \
        .baseSpDefense = 70,                                                    \
        .types = { TYPE_GRASS, TYPE_GRASS },                                    \
        .catchRate = 45,                                                        \
        .expYield = 265,                                                        \
        .evYield_Attack = 3,                                                    \
        .genderRatio = PERCENT_FEMALE(12.5),                                    \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_SLOW,                                       \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS },                      \
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE },  \
        .bodyColor = BODY_COLOR_GREEN,                                          \
        .speciesName = _("轰擂金刚猩"),                                          \
        .cryId = CRY_RILLABOOM,                                                 \
        .natDexNum = NATIONAL_DEX_RILLABOOM,                                    \
        .categoryName = _("鼓手"),                                           \
        .footprint = gMonFootprint_Rillaboom,                                   \
        LEARNSETS(Rillaboom),                                                   \
        .formSpeciesIdTable = sRillaboomFormSpeciesIdTable,                     \
        .formChangeTable = sRillaboomFormChangeTable

    [SPECIES_RILLABOOM] =
    {
        RILLABOOM_MISC_INFO,
        .height = 21,
        .weight = 900,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .description = COMPOUND_STRING("能够通过打鼓来控制特别的\n树桩中的力量，\n操纵树根进行战斗."),
        FRONT_PIC(Rillaboom, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Rillaboom,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Rillaboom, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Rillaboom),
        ICON(Rillaboom, 1),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_RILLABOOM_GIGANTAMAX] =
    {
        RILLABOOM_MISC_INFO,
        .height = 280,
        .weight = 0,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        .description = COMPOUND_STRING("Rillaboom has become one with its\n""forest of drums and continues to lay\n""down beats that shake all of Galar."),
        FRONT_PIC(RillaboomGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_RillaboomGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(RillaboomGigantamax, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(RillaboomGigantamax),
        ICON(RillaboomGigantamax, 1),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GROOKEY

#if P_FAMILY_SCORBUNNY
    [SPECIES_SCORBUNNY] =
    {
        .baseHP        = 50,
        .baseAttack    = 71,
        .baseDefense   = 40,
        .baseSpeed     = 69,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("炎兔儿"),
        .cryId = CRY_SCORBUNNY,
        .natDexNum = NATIONAL_DEX_SCORBUNNY,
        .categoryName = _("兔子"),
        .height = 3,
        .weight = 45,
        .description = COMPOUND_STRING("一旦做好了战斗的准备，\n它鼻头上和脚底的肉球\n就会发出极度的高温."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Scorbunny, 40, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Scorbunny,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Scorbunny, 48, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Scorbunny),
        ICON(Scorbunny, 0),
        .footprint = gMonFootprint_Scorbunny,
        LEARNSETS(Scorbunny),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_RABOOT}),
    },

    [SPECIES_RABOOT] =
    {
        .baseHP        = 65,
        .baseAttack    = 86,
        .baseDefense   = 60,
        .baseSpeed     = 94,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 147,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("腾蹴小将"),
        .cryId = CRY_RABOOT,
        .natDexNum = NATIONAL_DEX_RABOOT,
        .categoryName = _("兔子"),
        .height = 6,
        .weight = 90,
        .description = COMPOUND_STRING("会用脚把树果从树木上踢落，\n用来练习颠球，\n借此锻炼自己的脚法."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Raboot, 40, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Raboot,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Raboot, 56, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Raboot),
        ICON(Raboot, 0),
        .footprint = gMonFootprint_Raboot,
        LEARNSETS(Raboot),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_CINDERACE}),
    },

#define CINDERACE_MISC_INFO                                             \
        .baseHP        = 80,                                            \
        .baseAttack    = 116,                                           \
        .baseDefense   = 75,                                            \
        .baseSpeed     = 119,                                           \
        .baseSpAttack  = 65,                                            \
        .baseSpDefense = 75,                                            \
        .types = { TYPE_FIRE, TYPE_FIRE },                              \
        .catchRate = 45,                                                \
        .expYield = 265,                                                \
        .evYield_Speed = 3,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE },         \
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO },   \
        .bodyColor = BODY_COLOR_WHITE,                                  \
        .speciesName = _("闪焰王牌"),                                  \
        .cryId = CRY_CINDERACE,                                         \
        .natDexNum = NATIONAL_DEX_CINDERACE,                            \
        .categoryName = _("前锋"),                                   \
        .footprint = gMonFootprint_Cinderace,                           \
        LEARNSETS(Cinderace),                                           \
        .formSpeciesIdTable = sCinderaceFormSpeciesIdTable,             \
        .formChangeTable = sCinderaceFormChangeTable

    [SPECIES_CINDERACE] =
    {
        CINDERACE_MISC_INFO,
        .height = 14,
        .weight = 330,
        .description = COMPOUND_STRING("会将石头像足球般用脚挑起，\n制造出缠绕着火焰的足球.\n会用猛烈的踢射来燃烧对手."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        FRONT_PIC(Cinderace, 40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cinderace,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Cinderace, 48, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Cinderace),
        ICON(Cinderace, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CINDERACE_GIGANTAMAX] =
    {
        CINDERACE_MISC_INFO,
        .height = 270,
        .weight = 0,
        .description = COMPOUND_STRING("Infused with Cinderace's fighting\n""spirit, the gigantic Pyro Ball never\n""misses its targets and completely\n""roasts opponents."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        FRONT_PIC(CinderaceGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CinderaceGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CinderaceGigantamax, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CinderaceGigantamax),
        ICON(CinderaceGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SCORBUNNY

#if P_FAMILY_SOBBLE
    [SPECIES_SOBBLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("泪眼蜥"),
        .cryId = CRY_SOBBLE,
        .natDexNum = NATIONAL_DEX_SOBBLE,
        .categoryName = _("水蜥"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING("皮肤在湿掉时会变色，\n仿佛像是隐身了一样，\n谁都看不见它的身影."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sobble, 40, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Sobble,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sobble, 40, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Sobble),
        ICON(Sobble, 2),
        .footprint = gMonFootprint_Sobble,
        LEARNSETS(Sobble),
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_DRIZZILE}),
    },

    [SPECIES_DRIZZILE] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 147,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("变涩蜥"),
        .cryId = CRY_DRIZZILE,
        .natDexNum = NATIONAL_DEX_DRIZZILE,
        .categoryName = _("水蜥"),
        .height = 7,
        .weight = 115,
        .description = COMPOUND_STRING("很有战略头脑，\n会把手掌分泌出的\n水分做成水弹攻击敌人."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Drizzile, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Drizzile,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Drizzile, 56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Drizzile),
        ICON(Drizzile, 2),
        .footprint = gMonFootprint_Drizzile,
        LEARNSETS(Drizzile),
        .evolutions = EVOLUTION({EVO_LEVEL, 35, SPECIES_INTELEON}),
    },

#define INTELEON_MISC_INFO                                              \
        .baseHP        = 70,                                            \
        .baseAttack    = 85,                                            \
        .baseDefense   = 65,                                            \
        .baseSpeed     = 120,                                           \
        .baseSpAttack  = 125,                                           \
        .baseSpDefense = 65,                                            \
        .types = { TYPE_WATER, TYPE_WATER },                            \
        .catchRate = 45,                                                \
        .expYield = 265,                                                \
        .evYield_Speed = 3,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },            \
        .abilities = { ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER }, \
        .bodyColor = BODY_COLOR_BLUE,                                   \
        .speciesName = _("千面避役"),                                   \
        .cryId = CRY_INTELEON,                                          \
        .natDexNum = NATIONAL_DEX_INTELEON,                             \
        .categoryName = _("特工"),                              \
        .footprint = gMonFootprint_Inteleon,                            \
        LEARNSETS(Inteleon),                                            \
        .formSpeciesIdTable = sInteleonFormSpeciesIdTable,              \
        .formChangeTable = sInteleonFormChangeTable

    [SPECIES_INTELEON] =
    {
        INTELEON_MISC_INFO,
        .height = 19,
        .weight = 452,
        .description = COMPOUND_STRING("身上隐藏着多种特殊能力，\n例如从手指喷射水流，\n以及用背部的翼膜滑翔等等."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        FRONT_PIC(Inteleon, 48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Inteleon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Inteleon, 56, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Inteleon),
        ICON(Inteleon, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_INTELEON_GIGANTAMAX] =
    {
        INTELEON_MISC_INFO,
        .height = 400,
        .weight = 0,
        .description = COMPOUND_STRING("Gigantamax Inteleon's Water Gun\n""move fires at Mach 7. As the Pokémon\n""takes aim, it uses the crest on its\n""head to gauge wind and temperature."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        FRONT_PIC(InteleonGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_InteleonGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(InteleonGigantamax, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(InteleonGigantamax),
        ICON(InteleonGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SOBBLE

#if P_FAMILY_SKWOVET
    [SPECIES_SKWOVET] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 55,
        .evYield_HP = 1,
        .itemRare = ITEM_ORAN_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_CHEEK_POUCH, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("贪心栗鼠"),
        .cryId = CRY_SKWOVET,
        .natDexNum = NATIONAL_DEX_SKWOVET,
        .categoryName = _("贪吃"),
        .height = 3,
        .weight = 25,
        .description = COMPOUND_STRING("由于它无论何时都在吃树果，\n让它比外表看起来还要顽强.\n会出现在田地里寻找树果."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Skwovet, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Skwovet,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Skwovet, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Skwovet),
        ICON(Skwovet, 2),
        .footprint = gMonFootprint_Skwovet,
        LEARNSETS(Skwovet),
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_GREEDENT}),
    },

    [SPECIES_GREEDENT] =
    {
        .baseHP        = 120,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 20,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 90,
        .expYield = 161,
        .evYield_HP = 2,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_CHEEK_POUCH, ABILITY_NONE, ABILITY_GLUTTONY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("藏饱栗鼠"),
        .cryId = CRY_GREEDENT,
        .natDexNum = NATIONAL_DEX_GREEDENT,
        .categoryName = _("贪欲"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING("在尾巴里囤积树果.\n虽然囤过头了就会掉出来，\n但是迟钝的它不会发现."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Greedent, 56, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Greedent,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Greedent, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Greedent),
        ICON(Greedent, 0),
        .footprint = gMonFootprint_Greedent,
        LEARNSETS(Greedent),
    },
#endif //P_FAMILY_SKWOVET

#if P_FAMILY_ROOKIDEE
    [SPECIES_ROOKIDEE] =
    {
        .baseHP        = 38,
        .baseAttack    = 47,
        .baseDefense   = 35,
        .baseSpeed     = 57,
        .baseSpAttack  = 33,
        .baseSpDefense = 35,
        .types = { TYPE_FLYING, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_UNNERVE, ABILITY_BIG_PECKS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("稚山雀"),
        .cryId = CRY_ROOKIDEE,
        .natDexNum = NATIONAL_DEX_ROOKIDEE,
        .categoryName = _("小鸟"),
        .height = 2,
        .weight = 18,
        .description = COMPOUND_STRING("娇小的体型让它敏捷地飞翔.\n利用攻其不备的战法将体型\n巨大的对手玩弄于股掌之间."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rookidee, 40, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Rookidee,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Rookidee, 64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Rookidee),
        ICON(Rookidee, 0),
        .footprint = gMonFootprint_Rookidee,
        LEARNSETS(Rookidee),
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_CORVISQUIRE}),
    },

    [SPECIES_CORVISQUIRE] =
    {
        .baseHP        = 68,
        .baseAttack    = 67,
        .baseDefense   = 55,
        .baseSpeed     = 77,
        .baseSpAttack  = 43,
        .baseSpDefense = 55,
        .types = { TYPE_FLYING, TYPE_FLYING },
        .catchRate = 120,
        .expYield = 128,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },
        .abilities = { ABILITY_KEEN_EYE, ABILITY_UNNERVE, ABILITY_BIG_PECKS },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("蓝鸦"),
        .cryId = CRY_CORVISQUIRE,
        .natDexNum = NATIONAL_DEX_CORVISQUIRE,
        .categoryName = _("乌鸦"),
        .height = 8,
        .weight = 160,
        .description = COMPOUND_STRING("经历无数次艰难的战斗后，\n它学会了该如何正确地\n判断敌人的力量."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Corvisquire, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Corvisquire,
        .frontAnimId = ANIM_CIRCLE_INTO_BG,
        .enemyMonElevation = 10,
        BACK_PIC(Corvisquire, 56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Corvisquire),
        ICON(Corvisquire, 0),
        .footprint = gMonFootprint_Corvisquire,
        LEARNSETS(Corvisquire),
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_CORVIKNIGHT}),
    },

#define CORVIKNIGHT_MISC_INFO                                                       \
        .baseHP        = 98,                                                        \
        .baseAttack    = 87,                                                        \
        .baseDefense   = 105,                                                       \
        .baseSpeed     = 67,                                                        \
        .baseSpAttack  = 53,                                                        \
        .baseSpDefense = 85,                                                        \
        .types = { TYPE_FLYING, TYPE_STEEL },                                       \
        .catchRate = 45,                                                            \
        .expYield = 248,                                                            \
        .evYield_Defense = 3,                                                       \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 15,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_SLOW,                                           \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING },                        \
        .abilities = { ABILITY_PRESSURE, ABILITY_UNNERVE, ABILITY_MIRROR_ARMOR },   \
        .bodyColor = BODY_COLOR_PURPLE,                                             \
        .speciesName = _("钢铠鸦"),                                             \
        .cryId = CRY_CORVIKNIGHT,                                                   \
        .natDexNum = NATIONAL_DEX_CORVIKNIGHT,                                      \
        .categoryName = _("乌鸦"),                                                 \
        .footprint = gMonFootprint_Corviknight,                                     \
        LEARNSETS(Corviknight),                                                     \
        .formSpeciesIdTable = sCorviknightFormSpeciesIdTable,                       \
        .formChangeTable = sCorviknightFormChangeTable

    [SPECIES_CORVIKNIGHT] =
    {
        CORVIKNIGHT_MISC_INFO,
        .height = 22,
        .weight = 750,
        .description = COMPOUND_STRING("在空中所向披靡.\n它那黑得发亮的钢铁之躯\n有着让敌人畏惧的威慑力."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        FRONT_PIC(Corviknight, 56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Corviknight,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Corviknight, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Corviknight),
        ICON(Corviknight, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CORVIKNIGHT_GIGANTAMAX] =
    {
        CORVIKNIGHT_MISC_INFO,
        .height = 140,
        .weight = 0,
        .description = COMPOUND_STRING("Imbued with Gigantamax energy, its\n""wings can whip up winds more\n""forceful than any a hurricane could\n""muster. The gusts blow everything away."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        FRONT_PIC(CorviknightGigantamax, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_CorviknightGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CorviknightGigantamax, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CorviknightGigantamax),
        ICON(CorviknightGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROOKIDEE

#if P_FAMILY_BLIPBUG
    [SPECIES_BLIPBUG] =
    {
        .baseHP        = 25,
        .baseAttack    = 20,
        .baseDefense   = 20,
        .baseSpeed     = 45,
        .baseSpAttack  = 25,
        .baseSpDefense = 45,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 255,
        .expYield = 36,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_COMPOUND_EYES, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("索侦虫"),
        .cryId = CRY_BLIPBUG,
        .natDexNum = NATIONAL_DEX_BLIPBUG,
        .categoryName = _("幼虫"),
        .height = 4,
        .weight = 80,
        .description = COMPOUND_STRING("经常出现在田地里的宝可梦.\n会通过长在身体上的\n毛来感应周围发生的事."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Blipbug, 32, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Blipbug,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Blipbug, 40, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Blipbug),
        ICON(Blipbug, 0),
        .footprint = gMonFootprint_Blipbug,
        LEARNSETS(Blipbug),
        .evolutions = EVOLUTION({EVO_LEVEL, 10, SPECIES_DOTTLER}),
    },

    [SPECIES_DOTTLER] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = { TYPE_BUG, TYPE_PSYCHIC },
        .catchRate = 120,
        .expYield = 117,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SWARM, ABILITY_COMPOUND_EYES, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("天罩虫"),
        .cryId = CRY_DOTTLER,
        .natDexNum = NATIONAL_DEX_DOTTLER,
        .categoryName = _("天线罩"),
        .height = 4,
        .weight = 195,
        .description = COMPOUND_STRING("正在壳里成长着.\n用精神力量掌握外界的状况，\n做好进化的准备."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dottler, 48, 40),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Dottler,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dottler, 56, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Dottler),
        ICON(Dottler, 2),
        .footprint = gMonFootprint_Dottler,
        LEARNSETS(Dottler),
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_ORBEETLE}),
    },

#define ORBEETLE_MISC_INFO                                                  \
        .baseHP        = 60,                                                \
        .baseAttack    = 45,                                                \
        .baseDefense   = 110,                                               \
        .baseSpeed     = 90,                                                \
        .baseSpAttack  = 80,                                                \
        .baseSpDefense = 120,                                               \
        .types = { TYPE_BUG, TYPE_PSYCHIC },                                \
        .catchRate = 45,                                                    \
        .expYield = 253,                                                    \
        .evYield_SpDefense = 3,                                             \
        .itemRare = ITEM_PSYCHIC_SEED,                                      \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 15,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },                      \
        .abilities = { ABILITY_SWARM, ABILITY_FRISK, ABILITY_TELEPATHY },   \
        .bodyColor = BODY_COLOR_RED,                                        \
        .speciesName = _("以欧路普"),                                       \
        .cryId = CRY_ORBEETLE,                                              \
        .natDexNum = NATIONAL_DEX_ORBEETLE,                                 \
        .categoryName = _("七星"),                                    \
        .footprint = gMonFootprint_Orbeetle,                                \
        LEARNSETS(Orbeetle),                                                \
        .formSpeciesIdTable = sOrbeetleFormSpeciesIdTable,                  \
        .formChangeTable = sOrbeetleFormChangeTable

    [SPECIES_ORBEETLE] =
    {
        ORBEETLE_MISC_INFO,
        .height = 4,
        .weight = 408,
        .description = COMPOUND_STRING("以头脑聪慧而闻名.\n大大的脑子是它拥有\n出众精神力量的证明."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Orbeetle, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Orbeetle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(Orbeetle, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Orbeetle),
        ICON(Orbeetle, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_ORBEETLE_GIGANTAMAX] =
    {
        ORBEETLE_MISC_INFO,
        .height = 140,
        .weight = 0,
        .description = COMPOUND_STRING("Its brain has grown to a\n""gargantuan size, as has the rest of its body.\n""This Pokémon's intellect and\n""psychic abilities are overpowering."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(OrbeetleGigantamax, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_OrbeetleGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(OrbeetleGigantamax, 64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(OrbeetleGigantamax),
        ICON(OrbeetleGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BLIPBUG

#if P_FAMILY_NICKIT
    [SPECIES_NICKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 28,
        .baseDefense   = 28,
        .baseSpeed     = 50,
        .baseSpAttack  = 47,
        .baseSpDefense = 52,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 255,
        .expYield = 49,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_UNBURDEN, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("狡小狐"),
        .cryId = CRY_NICKIT,
        .natDexNum = NATIONAL_DEX_NICKIT,
        .categoryName = _("狐狸"),
        .height = 6,
        .weight = 89,
        .description = COMPOUND_STRING("性格谨慎且狡猾.\n在偷盗食物逃走的时候\n会用尾巴擦掉自己的足迹."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Nickit, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Nickit,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Nickit, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Nickit),
        ICON(Nickit, 2),
        .footprint = gMonFootprint_Nickit,
        LEARNSETS(Nickit),
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_THIEVUL}),
    },

    [SPECIES_THIEVUL] =
    {
        .baseHP        = 70,
        .baseAttack    = 58,
        .baseDefense   = 58,
        .baseSpeed     = 90,
        .baseSpAttack  = 87,
        .baseSpDefense = 92,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 127,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_RUN_AWAY, ABILITY_UNBURDEN, ABILITY_STAKEOUT },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("滑大狐"),
        .cryId = CRY_THIEVUL,
        .natDexNum = NATIONAL_DEX_THIEVUL,
        .categoryName = _("狐狸"),
        .height = 12,
        .weight = 199,
        .description = COMPOUND_STRING("会偷偷在看中的猎物身上\n留下标记，追踪目标的气味，\n在对方放松警戒时偷盗."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Thievul, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Thievul,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Thievul, 56, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Thievul),
        ICON(Thievul, 2),
        .footprint = gMonFootprint_Thievul,
        LEARNSETS(Thievul),
    },
#endif //P_FAMILY_NICKIT

#if P_FAMILY_GOSSIFLEUR
    [SPECIES_GOSSIFLEUR] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 10,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 190,
        .expYield = 50,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_COTTON_DOWN, ABILITY_REGENERATOR, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("幼棉棉"),
        .cryId = CRY_GOSSIFLEUR,
        .natDexNum = NATIONAL_DEX_GOSSIFLEUR,
        .categoryName = _("花饰"),
        .height = 4,
        .weight = 22,
        .description = COMPOUND_STRING("当它把单脚扎进地面里，\n并且沐浴充分的阳光，\n花瓣就会染上鲜艳的颜色."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Gossifleur, 48, 56),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Gossifleur,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Gossifleur, 56, 48),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Gossifleur),
        ICON(Gossifleur, 1),
        .footprint = gMonFootprint_Gossifleur,
        LEARNSETS(Gossifleur),
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_ELDEGOSS}),
    },

    [SPECIES_ELDEGOSS] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 75,
        .expYield = 161,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS },
        .abilities = { ABILITY_COTTON_DOWN, ABILITY_REGENERATOR, ABILITY_EFFECT_SPORE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("白蓬蓬"),
        .cryId = CRY_ELDEGOSS,
        .natDexNum = NATIONAL_DEX_ELDEGOSS,
        .categoryName = _("棉饰"),
        .height = 5,
        .weight = 25,
        .description = COMPOUND_STRING("棉絮的种子营养丰富.它会\n通过风散播种子，让草木\n和宝可梦变得活力十足."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Eldegoss, 48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Eldegoss,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Eldegoss, 64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Eldegoss),
        ICON(Eldegoss, 1),
        .footprint = gMonFootprint_Eldegoss,
        LEARNSETS(Eldegoss),
    },
#endif //P_FAMILY_GOSSIFLEUR

#if P_FAMILY_WOOLOO
    [SPECIES_WOOLOO] =
    {
        .baseHP        = 42,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 48,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 122,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_FLUFFY, ABILITY_RUN_AWAY, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("毛辫羊"),
        .cryId = CRY_WOOLOO,
        .natDexNum = NATIONAL_DEX_WOOLOO,
        .categoryName = _("棉羊"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING("卷卷的体毛弹性十足.\n就算从悬崖上掉下去，\n也不会受伤."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Wooloo, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Wooloo,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Wooloo, 56, 32),
        .backPicYOffset = 18,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Wooloo),
        ICON(Wooloo, 0),
        .footprint = gMonFootprint_Wooloo,
        LEARNSETS(Wooloo),
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_DUBWOOL}),
    },

    [SPECIES_DUBWOOL] =
    {
        .baseHP        = 72,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 88,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 127,
        .expYield = 172,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_FLUFFY, ABILITY_STEADFAST, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("毛毛角羊"),
        .cryId = CRY_DUBWOOL,
        .natDexNum = NATIONAL_DEX_DUBWOOL,
        .categoryName = _("棉羊"),
        .height = 13,
        .weight = 430,
        .description = COMPOUND_STRING("长得长长的角是为了\n向异性求爱而存在的.\n它从不会把角当做武器."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dubwool, 48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Dubwool,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dubwool, 64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Dubwool),
        ICON(Dubwool, 2),
        .footprint = gMonFootprint_Dubwool,
        LEARNSETS(Dubwool),
    },
#endif //P_FAMILY_WOOLOO

#if P_FAMILY_CHEWTLE
    [SPECIES_CHEWTLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 64,
        .baseDefense   = 50,
        .baseSpeed     = 44,
        .baseSpAttack  = 38,
        .baseSpDefense = 38,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 57,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },
        .abilities = { ABILITY_STRONG_JAW, ABILITY_SHELL_ARMOR, ABILITY_SWIFT_SWIM },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("咬咬龟"),
        .cryId = CRY_CHEWTLE,
        .natDexNum = NATIONAL_DEX_CHEWTLE,
        .categoryName = _("咬住"),
        .height = 3,
        .weight = 85,
        .description = COMPOUND_STRING("有着不管看到什么都会咬\n上去的习性.这似乎是因为\n长门牙的时候会痒的缘故."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Chewtle, 32, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Chewtle,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Chewtle, 56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Chewtle),
        ICON(Chewtle, 0),
        .footprint = gMonFootprint_Chewtle,
        LEARNSETS(Chewtle),
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_DREDNAW}),
    },

#define DREDNAW_MISC_INFO                                                               \
        .baseHP        = 90,                                                            \
        .baseAttack    = 115,                                                           \
        .baseDefense   = 90,                                                            \
        .baseSpeed     = 74,                                                            \
        .baseSpAttack  = 48,                                                            \
        .baseSpDefense = 68,                                                            \
        .types = { TYPE_WATER, TYPE_ROCK },                                             \
        .catchRate = 75,                                                                \
        .expYield = 170,                                                                \
        .evYield_Attack = 2,                                                            \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1 },                          \
        .abilities = { ABILITY_STRONG_JAW, ABILITY_SHELL_ARMOR, ABILITY_SWIFT_SWIM },   \
        .bodyColor = BODY_COLOR_GREEN,                                                  \
        .speciesName = _("暴噬龟"),                                                    \
        .cryId = CRY_DREDNAW,                                                           \
        .natDexNum = NATIONAL_DEX_DREDNAW,                                              \
        .categoryName = _("紧咬"),                                                      \
        .footprint = gMonFootprint_Drednaw,                                             \
        LEARNSETS(Drednaw),                                                             \
        .formSpeciesIdTable = sDrednawFormSpeciesIdTable,                               \
        .formChangeTable = sDrednawFormChangeTable

    [SPECIES_DREDNAW] =
    {
        DREDNAW_MISC_INFO,
        .height = 10,
        .weight = 1155,
        .description = COMPOUND_STRING("性格凶暴的宝可梦.\n会用能咬断铁棍的\n颚部大口咬住猎物."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Drednaw, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drednaw,
        .frontAnimId = ANIM_GROW_VIBRATE,
        BACK_PIC(Drednaw, 64, 40),
        .backPicYOffset = 18,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Drednaw),
        ICON(Drednaw, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DREDNAW_GIGANTAMAX] =
    {
        DREDNAW_MISC_INFO,
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING("In the Galar region, there's a tale\n""about this Pokémon chewing up a\n""mountain and using the rubble to stop a\n""flood."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(DrednawGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DrednawGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(DrednawGigantamax, 64, 64),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(DrednawGigantamax),
        ICON(DrednawGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHEWTLE

#if P_FAMILY_YAMPER
    [SPECIES_YAMPER] =
    {
        .baseHP        = 59,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 26,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 255,
        .expYield = 54,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_BALL_FETCH, ABILITY_NONE, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("来电汪"),
        .cryId = CRY_YAMPER,
        .natDexNum = NATIONAL_DEX_YAMPER,
        .categoryName = _("小狗"),
        .height = 3,
        .weight = 135,
        .description = COMPOUND_STRING("因为想要得到零食而帮助\n人类工作的贪吃鬼.\n总是带着电火花跑来跑去."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Yamper, 40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Yamper,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Yamper, 48, 48),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Yamper),
        ICON(Yamper, 1),
        .footprint = gMonFootprint_Yamper,
        LEARNSETS(Yamper),
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_BOLTUND}),
    },

    [SPECIES_BOLTUND] =
    {
        .baseHP        = 69,
        .baseAttack    = 90,
        .baseDefense   = 60,
        .baseSpeed     = 121,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 172,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = { ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_COMPETITIVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("逐电犬"),
        .cryId = CRY_BOLTUND,
        .natDexNum = NATIONAL_DEX_BOLTUND,
        .categoryName = _("狗"),
        .height = 10,
        .weight = 340,
        .description = COMPOUND_STRING("电力增强了它的脚力.\n当以最高速度奔跑时，\n时速可以轻易超过90公里."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Boltund, 48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Boltund,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Boltund, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Boltund),
        ICON(Boltund, 1),
        .footprint = gMonFootprint_Boltund,
        LEARNSETS(Boltund),
    },
#endif //P_FAMILY_YAMPER

#if P_FAMILY_ROLYCOLY
    [SPECIES_ROLYCOLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 255,
        .expYield = 48,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_STEAM_ENGINE, ABILITY_HEATPROOF, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("小炭仔"),
        .cryId = CRY_ROLYCOLY,
        .natDexNum = NATIONAL_DEX_ROLYCOLY,
        .categoryName = _("石炭"),
        .height = 3,
        .weight = 120,
        .description = COMPOUND_STRING("在满是岩石的崎岖之路上\n也能像独轮车那样自在移动.\n靠燃烧煤炭维持生命."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Rolycoly, 40, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Rolycoly,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        BACK_PIC(Rolycoly, 64, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Rolycoly),
        ICON(Rolycoly, 0),
        .footprint = gMonFootprint_Rolycoly,
        LEARNSETS(Rolycoly),
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_CARKOL}),
    },

    [SPECIES_CARKOL] =
    {
        .baseHP        = 80,
        .baseAttack    = 60,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_FIRE },
        .catchRate = 120,
        .expYield = 144,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_STEAM_ENGINE, ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("大炭车"),
        .cryId = CRY_CARKOL,
        .natDexNum = NATIONAL_DEX_CARKOL,
        .categoryName = _("石炭"),
        .height = 11,
        .weight = 780,
        .description = COMPOUND_STRING("能通过高速旋转自己的脚，\n以30公里的时速奔跑.\n能喷出1000度的火焰."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Carkol, 48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Carkol,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Carkol, 64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Carkol),
        ICON(Carkol, 0),
        .footprint = gMonFootprint_Carkol,
        LEARNSETS(Carkol),
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_COALOSSAL}),
    },

#define COALOSSAL_MISC_INFO                                                             \
        .baseHP        = 110,                                                           \
        .baseAttack    = 80,                                                            \
        .baseDefense   = 120,                                                           \
        .baseSpeed     = 30,                                                            \
        .baseSpAttack  = 80,                                                            \
        .baseSpDefense = 90,                                                            \
        .types = { TYPE_ROCK, TYPE_FIRE },                                              \
        .catchRate = 45,                                                                \
        .expYield = 255,                                                                \
        .evYield_Defense = 3,                                                           \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 15,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                                               \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },                          \
        .abilities = { ABILITY_STEAM_ENGINE, ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE },  \
        .bodyColor = BODY_COLOR_BLACK,                                                  \
        .speciesName = _("石炭"),                                                  \
        .cryId = CRY_COALOSSAL,                                                         \
        .natDexNum = NATIONAL_DEX_COALOSSAL,                                            \
        .categoryName = _("石炭"),                                                      \
        .footprint = gMonFootprint_Coalossal,                                           \
        LEARNSETS(Coalossal),                                                           \
        .formSpeciesIdTable = sCoalossalFormSpeciesIdTable,                             \
        .formChangeTable = sCoalossalFormChangeTable

    [SPECIES_COALOSSAL] =
    {
        COALOSSAL_MISC_INFO,
        .height = 28,
        .weight = 3105,
        .description = COMPOUND_STRING("进入战斗状态后，\n它会把煤炭山燃烧得通红，\n飞撒火花来烧焦四周."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Coalossal, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Coalossal,
        .frontAnimId = ANIM_GLOW_RED,
        BACK_PIC(Coalossal, 64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Coalossal),
        ICON(Coalossal, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_COALOSSAL_GIGANTAMAX] =
    {
        COALOSSAL_MISC_INFO,
        .height = 420,
        .weight = 0,
        .description = COMPOUND_STRING("Its body is a colossal stove. With\n""Gigantamax energy stoking the fire,\n""this Pokémon's flame burns hotter\n""than 3,600 degrees Fahrenheit."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CoalossalGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_CoalossalGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CoalossalGigantamax, 64, 64),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CoalossalGigantamax),
        ICON(CoalossalGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROLYCOLY

#if P_FAMILY_APPLIN
    [SPECIES_APPLIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_DRAGON },
        .catchRate = 255,
        .expYield = 52,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("啃果虫"),
        .cryId = CRY_APPLIN,
        .natDexNum = NATIONAL_DEX_APPLIN,
        .categoryName = _("苹果居"),
        .height = 2,
        .weight = 5,
        .description = COMPOUND_STRING("一出生就躲进了苹果中.\n一边吃果肉一边成长.\n进化方向因苹果的味道而定."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Applin, 32, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Applin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Applin, 40, 48),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Applin),
        ICON(Applin, 1),
        .footprint = gMonFootprint_Applin,
        LEARNSETS(Applin),
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_TART_APPLE, SPECIES_FLAPPLE},
                                {EVO_ITEM, ITEM_SWEET_APPLE, SPECIES_APPLETUN},
                                {EVO_ITEM, ITEM_SYRUPY_APPLE, SPECIES_DIPPLIN}),
    },

#define FLAPPLE_MISC_INFO                                                   \
        .baseHP        = 70,                                                \
        .baseAttack    = 110,                                               \
        .baseDefense   = 80,                                                \
        .baseSpeed     = 70,                                                \
        .baseSpAttack  = 95,                                                \
        .baseSpDefense = 60,                                                \
        .types = { TYPE_GRASS, TYPE_DRAGON },                               \
        .catchRate = 45,                                                    \
        .expYield = 170,                                                    \
        .evYield_Attack = 2,                                                \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_ERRATIC,                                       \
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_DRAGON },                 \
        .abilities = { ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_HUSTLE },   \
        .bodyColor = BODY_COLOR_GREEN,                                      \
        .speciesName = _("苹裹龙"),                                        \
        .cryId = CRY_FLAPPLE,                                               \
        .natDexNum = NATIONAL_DEX_FLAPPLE,                                  \
        .categoryName = _("苹果翅"),                                    \
        .footprint = gMonFootprint_Flapple,                                 \
        LEARNSETS(Flapple),                                                 \
        .formSpeciesIdTable = sFlappleFormSpeciesIdTable,                   \
        .formChangeTable = sFlappleFormChangeTable

    [SPECIES_FLAPPLE] =
    {
        FLAPPLE_MISC_INFO,
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING("会用苹果皮的翅膀飞翔，\n并吐出强酸性的唾液.\n可以变成苹果的形状."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Flapple, 56, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Flapple,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        BACK_PIC(Flapple, 48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Flapple),
        ICON(Flapple, 1),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_FLAPPLE_GIGANTAMAX] =
    {
        FLAPPLE_MISC_INFO,
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING("Under the influence of Gigantamax\n""energy, it produces much more sweet\n""nectar, and its shape has changed\n""to resemble a giant apple."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(FlappleGigantamax, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_FlappleGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(FlappleGigantamax, 64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(FlappleGigantamax),
        ICON(FlappleGigantamax, 1),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

#define APPLETUN_MISC_INFO                                                      \
        .baseHP        = 110,                                                   \
        .baseAttack    = 85,                                                    \
        .baseDefense   = 80,                                                    \
        .baseSpeed     = 30,                                                    \
        .baseSpAttack  = 100,                                                   \
        .baseSpDefense = 80,                                                    \
        .types = { TYPE_GRASS, TYPE_DRAGON },                                   \
        .catchRate = 45,                                                        \
        .expYield = 170,                                                        \
        .evYield_HP = 2,                                                        \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_ERRATIC,                                           \
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_DRAGON },                     \
        .abilities = { ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_THICK_FAT },    \
        .bodyColor = BODY_COLOR_GREEN,                                          \
        .speciesName = _("丰蜜龙"),                                           \
        .cryId = CRY_APPLETUN,                                                  \
        .natDexNum = NATIONAL_DEX_APPLETUN,                                     \
        .categoryName = _("苹果汁"),                                      \
        .footprint = gMonFootprint_Appletun,                                    \
        LEARNSETS(Appletun),                                                    \
        .formSpeciesIdTable = sAppletunFormSpeciesIdTable,                      \
        .formChangeTable = sAppletunFormChangeTable

    [SPECIES_APPLETUN] =
    {
        APPLETUN_MISC_INFO,
        .height = 4,
        .weight = 130,
        .description = COMPOUND_STRING("身体被甜甜的蜜汁包裹，\n背部的皮尤其甘甜，\n过去曾经是小孩的零食."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Appletun, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Appletun,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Appletun, 64, 56),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Appletun),
        ICON(Appletun, 1),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_APPLETUN_GIGANTAMAX] =
    {
        APPLETUN_MISC_INFO,
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING("Due to Gigantamax energy, this\n""Pokémon's nectar has thickened. The\n""increased viscosity lets the nectar\n""absorb more damage than before."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(AppletunGigantamax, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_AppletunGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(AppletunGigantamax, 64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(AppletunGigantamax),
        ICON(AppletunGigantamax, 1),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
    [SPECIES_DIPPLIN] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 40,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = { TYPE_GRASS, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 170,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SUPERSWEET_SYRUP, ABILITY_GLUTTONY, ABILITY_STICKY_HOLD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dipplin"),
        .cryId = CRY_DIPPLIN,
        .natDexNum = NATIONAL_DEX_DIPPLIN,
        .categoryName = _("Candy Apple"),
        .height = 4,
        .weight = 44,
        .description = COMPOUND_STRING("Dipplin is two creatures in one Pokémon.\n""Its evolution was triggered by a special\n""apple grown only in one place."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dipplin, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Dipplin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dipplin, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Dipplin),
        ICON(Dipplin, 1),
        //.footprint = gMonFootprint_Dipplin,
        LEARNSETS(Dipplin),
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_APPLIN

#if P_FAMILY_SILICOBRA
    [SPECIES_SILICOBRA] =
    {
        .baseHP        = 52,
        .baseAttack    = 57,
        .baseDefense   = 75,
        .baseSpeed     = 46,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 255,
        .expYield = 63,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_SAND_SPIT, ABILITY_SHED_SKIN, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("沙包蛇"),
        .cryId = CRY_SILICOBRA,
        .natDexNum = NATIONAL_DEX_SILICOBRA,
        .categoryName = _("沙蛇"),
        .height = 22,
        .weight = 76,
        .description = COMPOUND_STRING("会从鼻孔喷射出沙子，\n趁敌人看不清的\n时候躲进地底下藏身."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        FRONT_PIC(Silicobra, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Silicobra,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Silicobra, 56, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Silicobra),
        ICON(Silicobra, 1),
        .footprint = gMonFootprint_Silicobra,
        LEARNSETS(Silicobra),
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_SANDACONDA}),
    },

#define SANDACONDA_MISC_INFO                                                        \
        .baseHP        = 72,                                                        \
        .baseAttack    = 107,                                                       \
        .baseDefense   = 125,                                                       \
        .baseSpeed     = 71,                                                        \
        .baseSpAttack  = 65,                                                        \
        .baseSpDefense = 70,                                                        \
        .types = { TYPE_GROUND, TYPE_GROUND },                                      \
        .catchRate = 120,                                                           \
        .expYield = 179,                                                            \
        .evYield_Defense = 2,                                                       \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 20,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON },                         \
        .abilities = { ABILITY_SAND_SPIT, ABILITY_SHED_SKIN, ABILITY_SAND_VEIL },   \
        .bodyColor = BODY_COLOR_GREEN,                                              \
        .speciesName = _("沙螺蟒"),                                             \
        .cryId = CRY_SANDACONDA,                                                    \
        .natDexNum = NATIONAL_DEX_SANDACONDA,                                       \
        .categoryName = _("沙蛇"),                                            \
        .footprint = gMonFootprint_Sandaconda,                                      \
        LEARNSETS(Sandaconda),                                                      \
        .formSpeciesIdTable = sSandacondaFormSpeciesIdTable,                        \
        .formChangeTable = sSandacondaFormChangeTable

    [SPECIES_SANDACONDA] =
    {
        SANDACONDA_MISC_INFO,
        .height = 38,
        .weight = 655,
        .description = COMPOUND_STRING("蜷缩身体后从鼻孔里\n喷射出100公斤的沙子.\n没有了沙子就会变得很懦弱."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
        FRONT_PIC(Sandaconda, 64, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Sandaconda,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Sandaconda, 64, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Sandaconda),
        ICON(Sandaconda, 1),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_SANDACONDA_GIGANTAMAX] =
    {
        SANDACONDA_MISC_INFO,
        .height = 220,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Its sand pouch has grown to tremendous\n"
            "proportions. More than 1,000,000 tons of\n"
            "sand now swirl around its body with enough\n"
            "speed and power to pulverize a skyscraper."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
        FRONT_PIC(SandacondaGigantamax, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SandacondaGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(SandacondaGigantamax, 64, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(SandacondaGigantamax),
        ICON(SandacondaGigantamax, 1),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SILICOBRA

#if P_FAMILY_CRAMORANT
#define CRAMORANT_MISC_INFO                                     \
        .baseHP        = 70,                                    \
        .baseAttack    = 85,                                    \
        .baseDefense   = 55,                                    \
        .baseSpeed     = 85,                                    \
        .baseSpAttack  = 85,                                    \
        .baseSpDefense = 95,                                    \
        .types = { TYPE_FLYING, TYPE_WATER },                   \
        .catchRate = 45,                                        \
        .expYield = 166,                                        \
        .evYield_SpDefense = 2,                                 \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING },   \
        .abilities = { ABILITY_GULP_MISSILE, ABILITY_NONE },    \
        .bodyColor = BODY_COLOR_BLUE,                           \
        .speciesName = _("古月鸟"),                          \
        .cryId = CRY_CRAMORANT,                                 \
        .natDexNum = NATIONAL_DEX_CRAMORANT,                    \
        .categoryName = _("一口吞"),                              \
        .height = 8,                                            \
        .weight = 180,                                          \
        .pokemonScale = 366,                                    \
        .pokemonOffset = 7,                                     \
        .trainerScale = 257,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Cramorant,                   \
        LEARNSETS(Cramorant),                                   \
        .formSpeciesIdTable = sCramorantFormSpeciesIdTable,     \
        .formChangeTable = sCramorantFormChangeTable

    [SPECIES_CRAMORANT] =
    {
        CRAMORANT_MISC_INFO,
        .description = COMPOUND_STRING("虽然拥有一击定胜负的威力，\n由于记性实在太差，对战\n还没结束就会忘记对手是谁."),
        FRONT_PIC(Cramorant, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cramorant,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Cramorant, 56, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Cramorant),
        ICON(Cramorant, 0),
    },

    [SPECIES_CRAMORANT_GULPING] =
    {
        CRAMORANT_MISC_INFO,
        .description = COMPOUND_STRING("Cramorant's gluttony led it to try\n""to swallow an Arrokuda whole, which\n""in turn led to Cramorant getting an\n""Arrokuda stuck in its throat."),
        FRONT_PIC(CramorantGulping, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cramorant,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CramorantGulping, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CramorantGulping),
        ICON(CramorantGulping, 0),
    },

    [SPECIES_CRAMORANT_GORGING] =
    {
        CRAMORANT_MISC_INFO,
        .description = COMPOUND_STRING("This Cramorant has accidentally\n""gotten a Pikachu lodged in its gullet.\n""Cramorant is choking a little, but it\n""isn't really bothered."),
        FRONT_PIC(CramorantGorging, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cramorant,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CramorantGorging, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CramorantGorging),
        ICON(CramorantGorging, 0),
    },
#endif //P_FAMILY_CRAMORANT

#if P_FAMILY_ARROKUDA
    [SPECIES_ARROKUDA] =
    {
        .baseHP        = 41,
        .baseAttack    = 63,
        .baseDefense   = 40,
        .baseSpeed     = 66,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_PROPELLER_TAIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("刺梭鱼"),
        .cryId = CRY_ARROKUDA,
        .natDexNum = NATIONAL_DEX_ARROKUDA,
        .categoryName = _("突击"),
        .height = 5,
        .weight = 10,
        .description = COMPOUND_STRING("尖锐的下巴是它的骄傲.\n只要发现周围有什么小动作，\n就会一直线冲过去."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Arrokuda, 56, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Arrokuda,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Arrokuda, 48, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Arrokuda),
        ICON(Arrokuda, 2),
        .footprint = gMonFootprint_Arrokuda,
        LEARNSETS(Arrokuda),
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_BARRASKEWDA}),
    },

    [SPECIES_BARRASKEWDA] =
    {
        .baseHP        = 61,
        .baseAttack    = 123,
        .baseDefense   = 60,
        .baseSpeed     = 136,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 60,
        .expYield = 172,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2 },
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_PROPELLER_TAIL },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("戽斗尖梭"),
        .cryId = CRY_BARRASKEWDA,
        .natDexNum = NATIONAL_DEX_BARRASKEWDA,
        .categoryName = _("穿刺"),
        .height = 13,
        .weight = 300,
        .description = COMPOUND_STRING("像长矛一样尖锐的下巴\n拥有钢铁般的硬度.\n据说它的肉好吃得惊人."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Barraskewda, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Barraskewda,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Barraskewda, 64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Barraskewda),
        ICON(Barraskewda, 2),
        .footprint = gMonFootprint_Barraskewda,
        LEARNSETS(Barraskewda),
    },
#endif //P_FAMILY_ARROKUDA

#if P_FAMILY_TOXEL
    [SPECIES_TOXEL] =
    {
        .baseHP        = 40,
        .baseAttack    = 38,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 54,
        .baseSpDefense = 35,
        .types = { TYPE_ELECTRIC, TYPE_POISON },
        .catchRate = 75,
        .expYield = 48,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_RATTLED, ABILITY_STATIC, ABILITY_KLUTZ },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("毒电婴"),
        .cryId = CRY_TOXEL,
        .natDexNum = NATIONAL_DEX_TOXEL,
        .categoryName = _("婴儿"),
        .height = 4,
        .weight = 110,
        .description = COMPOUND_STRING("通过让自身的毒素产生\n化学反应来发电.\n电力虽然弱，却能造成麻痹."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Toxel, 40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Toxel,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Toxel, 48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Toxel),
        ICON(Toxel, 2),
        .footprint = gMonFootprint_Toxel,
        LEARNSETS(Toxel),
        .evolutions = EVOLUTION({EVO_LEVEL_NATURE_AMPED, 30, SPECIES_TOXTRICITY_AMPED},
                                {EVO_LEVEL_NATURE_LOW_KEY, 30, SPECIES_TOXTRICITY_LOW_KEY}),
    },

#define TOXTRICITY_MISC_INFO                                            \
        .baseHP        = 75,                                            \
        .baseAttack    = 98,                                            \
        .baseDefense   = 70,                                            \
        .baseSpeed     = 75,                                            \
        .baseSpAttack  = 114,                                           \
        .baseSpDefense = 70,                                            \
        .types = { TYPE_ELECTRIC, TYPE_POISON },                        \
        .catchRate = 45,                                                \
        .expYield = 176,                                                \
        .evYield_SpAttack = 2,                                          \
        .genderRatio = PERCENT_FEMALE(50),                              \
        .eggCycles = 25,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE },    \
        .bodyColor = BODY_COLOR_PURPLE,                                 \
        .speciesName = _("颤弦蝾螈"),                                 \
        .natDexNum = NATIONAL_DEX_TOXTRICITY,                           \
        .categoryName = _("庞克"),                                      \
        .formSpeciesIdTable = sToxtricityFormSpeciesIdTable,            \
        .formChangeTable = sToxtricityAmpedFormChangeTable

    [SPECIES_TOXTRICITY_AMPED] =
    {
        TOXTRICITY_MISC_INFO,
        .abilities = { ABILITY_PUNK_ROCK, ABILITY_PLUS, ABILITY_TECHNICIAN },
        .cryId = CRY_TOXTRICITY_AMPED,
        .height = 16,
        .weight = 400,
        .description = COMPOUND_STRING("通过分解摄入体内的毒素来\n生成电力，发出与电吉他\n弹奏的旋律十分相似的声音."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(ToxtricityAmped, 48, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Toxtricity,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ToxtricityAmped, 56, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ToxtricityAmped),
        ICON(ToxtricityAmped, 2),
        .footprint = gMonFootprint_Toxtricity,
        LEARNSETS(ToxtricityAmped),

    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_TOXTRICITY_AMPED_GIGANTAMAX] =
    {
        TOXTRICITY_MISC_INFO,
        .abilities = { ABILITY_PUNK_ROCK, ABILITY_PLUS, ABILITY_TECHNICIAN },
        .cryId = CRY_TOXTRICITY_AMPED,
        .height = 240,
        .weight = 0,
        .description = gToxtricityGigantamaxPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(ToxtricityGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ToxtricityGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ToxtricityGigantamax, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ToxtricityGigantamax),
        ICON(ToxtricityGigantamax, 0),
        .footprint = gMonFootprint_Toxtricity,
        LEARNSETS(ToxtricityAmped),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_TOXTRICITY_LOW_KEY] =
    {
        TOXTRICITY_MISC_INFO,
        .abilities = { ABILITY_PUNK_ROCK, ABILITY_MINUS, ABILITY_TECHNICIAN },
        .cryId = CRY_TOXTRICITY_LOW_KEY,
        .height = 16,
        .weight = 400,
        .description = COMPOUND_STRING("Capable of generating 15,000 volts\n""of electricity, this Pokémon looks\n""down on all that would challenge it."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(ToxtricityLowKey, 48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Toxtricity,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ToxtricityLowKey, 48, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ToxtricityLowKey),
        ICON(ToxtricityLowKey, 2),
        .footprint = gMonFootprint_Toxtricity,
        LEARNSETS(ToxtricityLowKey),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_TOXTRICITY_LOW_KEY_GIGANTAMAX] =
    {
        TOXTRICITY_MISC_INFO,
        .abilities = { ABILITY_PUNK_ROCK, ABILITY_MINUS, ABILITY_TECHNICIAN },
        .cryId = CRY_TOXTRICITY_LOW_KEY,
        .height = 240,
        .weight = 0,
        .description = gToxtricityGigantamaxPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(ToxtricityGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_ToxtricityGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ToxtricityGigantamax, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ToxtricityGigantamax),
        ICON(ToxtricityGigantamax, 0),
        .footprint = gMonFootprint_Toxtricity,
        LEARNSETS(ToxtricityLowKey),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOXEL

#if P_FAMILY_SIZZLIPEDE
    [SPECIES_SIZZLIPEDE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_BUG },
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE, ABILITY_FLAME_BODY },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("烧火蚣"),
        .cryId = CRY_SIZZLIPEDE,
        .natDexNum = NATIONAL_DEX_SIZZLIPEDE,
        .categoryName = _("发热"),
        .height = 7,
        .weight = 10,
        .description = COMPOUND_STRING("靠储存在体内的可燃气体\n来发热.热度最高的是\n腹部的黄色部分."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Sizzlipede, 48, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Sizzlipede,
        .frontAnimId = ANIM_H_VIBRATE,
        BACK_PIC(Sizzlipede, 40, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Sizzlipede),
        ICON(Sizzlipede, 0),
        .footprint = gMonFootprint_Sizzlipede,
        LEARNSETS(Sizzlipede),
        .evolutions = EVOLUTION({EVO_LEVEL, 28, SPECIES_CENTISKORCH}),
    },

#define CENTISKORCH_MISC_INFO                                                           \
        .baseHP        = 100,                                                           \
        .baseAttack    = 115,                                                           \
        .baseDefense   = 65,                                                            \
        .baseSpeed     = 65,                                                            \
        .baseSpAttack  = 90,                                                            \
        .baseSpDefense = 90,                                                            \
        .types = { TYPE_FIRE, TYPE_BUG },                                               \
        .catchRate = 75,                                                                \
        .expYield = 184,                                                                \
        .evYield_Attack = 2,                                                            \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },                                  \
        .abilities = { ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE, ABILITY_FLAME_BODY },   \
        .bodyColor = BODY_COLOR_RED,                                                    \
        .speciesName = _("焚焰蚣"),                                                 \
        .cryId = CRY_CENTISKORCH,                                                       \
        .natDexNum = NATIONAL_DEX_CENTISKORCH,                                          \
        .categoryName = _("发热"),                                                  \
        .footprint = gMonFootprint_Centiskorch,                                         \
        LEARNSETS(Centiskorch),                                                         \
        .formSpeciesIdTable = sCentiskorchFormSpeciesIdTable,                           \
        .formChangeTable = sCentiskorchFormChangeTable

    [SPECIES_CENTISKORCH] =
    {
        CENTISKORCH_MISC_INFO,
        .height = 30,
        .weight = 1200,
        .description = COMPOUND_STRING("性格极具攻击性.\n危险的不只是它烧烫的身体，\n大大的獠牙也锐利无比."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Centiskorch, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Centiskorch,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Centiskorch, 56, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Centiskorch),
        ICON(Centiskorch, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CENTISKORCH_GIGANTAMAX] =
    {
        CENTISKORCH_MISC_INFO,
        .height = 750,
        .weight = 0,
        .description = COMPOUND_STRING("The heat that comes off a\n""Gigantamax Centiskorch may destabilize air\n""currents. Sometimes it can even\n""cause storms."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CentiskorchGigantamax, 64, 64),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_CentiskorchGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CentiskorchGigantamax, 64, 64),
        .backPicYOffset = 1,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CentiskorchGigantamax),
        ICON(CentiskorchGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SIZZLIPEDE

#if P_FAMILY_CLOBBOPUS
    [SPECIES_CLOBBOPUS] =
    {
        .baseHP        = 50,
        .baseAttack    = 68,
        .baseDefense   = 60,
        .baseSpeed     = 32,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 180,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("拳拳蛸"),
        .cryId = CRY_CLOBBOPUS,
        .natDexNum = NATIONAL_DEX_CLOBBOPUS,
        .categoryName = _("缠人"),
        .height = 6,
        .weight = 40,
        .description = COMPOUND_STRING("智商大致相当于3岁的儿童.\n虽然触手经常断掉，但因为\n能再生，所以它并不在意."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Clobbopus, 48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Clobbopus,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Clobbopus, 64, 40),
        .backPicYOffset = 14,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Clobbopus),
        ICON(Clobbopus, 0),
        .footprint = gMonFootprint_Clobbopus,
        LEARNSETS(Clobbopus),
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_TAUNT, SPECIES_GRAPPLOCT}),
    },

    [SPECIES_GRAPPLOCT] =
    {
        .baseHP        = 80,
        .baseAttack    = 118,
        .baseDefense   = 90,
        .baseSpeed     = 42,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_LIMBER, ABILITY_NONE, ABILITY_TECHNICIAN },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("八爪武师"),
        .cryId = CRY_GRAPPLOCT,
        .natDexNum = NATIONAL_DEX_GRAPPLOCT,
        .categoryName = _("柔术"),
        .height = 16,
        .weight = 390,
        .description = COMPOUND_STRING("全身都是肌肉.\n会用触手施展绞技，\n威力无与伦比."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        FRONT_PIC(Grapploct, 48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Grapploct,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Grapploct, 56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Grapploct),
        ICON(Grapploct, 2),
        .footprint = gMonFootprint_Grapploct,
        LEARNSETS(Grapploct),
    },
#endif //P_FAMILY_CLOBBOPUS

#if P_FAMILY_SINISTEA
#define SINISTEA_MISC_INFO                                                      \
        .baseHP        = 40,                                                    \
        .baseAttack    = 45,                                                    \
        .baseDefense   = 45,                                                    \
        .baseSpeed     = 50,                                                    \
        .baseSpAttack  = 74,                                                    \
        .baseSpDefense = 54,                                                    \
        .types = { TYPE_GHOST, TYPE_GHOST },                                    \
        .catchRate = 120,                                                       \
        .expYield = 62,                                                         \
        .evYield_SpAttack = 1,                                                  \
        .genderRatio = MON_GENDERLESS,                                          \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS },                \
        .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY }, \
        .bodyColor = BODY_COLOR_PURPLE,                                         \
        .speciesName = _("来悲茶"),                                           \
        .cryId = CRY_SINISTEA,                                                  \
        .natDexNum = NATIONAL_DEX_SINISTEA,                                     \
        .categoryName = _("红茶"),                                         \
        .height = 1,                                                            \
        .weight = 2,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        FRONT_PIC(Sinistea, 40, 32),                                            \
        .frontPicYOffset = 17,                                                  \
        .frontAnimFrames = sAnims_Sinistea,                                     \
        BACK_PIC(Sinistea, 48, 32),                                             \
        .backPicYOffset = 16,                                                   \
        PALETTES(Sinistea),                                                     \
        ICON(Sinistea, 2),                                                      \
        .footprint = gMonFootprint_Sinistea,                                    \
        LEARNSETS(Sinistea),                                                    \
        .formSpeciesIdTable = sSinisteaFormSpeciesIdTable
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,

    [SPECIES_SINISTEA_PHONY] =
    {
        SINISTEA_MISC_INFO,
        .description = COMPOUND_STRING("真货会吸走饮用者的精气.\n但市面上还是会有很多赝品."),
        .enemyMonElevation = 9,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_CRACKED_POT, SPECIES_POLTEAGEIST_PHONY}),
    },

    [SPECIES_SINISTEA_ANTIQUE] =
    {
        SINISTEA_MISC_INFO,
        .description = COMPOUND_STRING("The swirl pattern in this Pokémon's\n""body is its weakness. If it gets\n""stirred, the swirl loses its shape, and\n""Sinistea gets dizzy."),
        .enemyMonElevation = 10,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_CHIPPED_POT, SPECIES_POLTEAGEIST_ANTIQUE}),
    },

#define POLTEAGEIST_MISC_INFO                                                   \
        .baseHP        = 60,                                                    \
        .baseAttack    = 65,                                                    \
        .baseDefense   = 65,                                                    \
        .baseSpeed     = 70,                                                    \
        .baseSpAttack  = 134,                                                   \
        .baseSpDefense = 114,                                                   \
        .types = { TYPE_GHOST, TYPE_GHOST },                                    \
        .catchRate = 60,                                                        \
        .expYield = 178,                                                        \
        .evYield_SpAttack = 2,                                                  \
        .genderRatio = MON_GENDERLESS,                                          \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS },                \
        .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY }, \
        .bodyColor = BODY_COLOR_PURPLE,                                         \
        .speciesName = _("怖思壶"),                                         \
        .cryId = CRY_POLTEAGEIST,                                               \
        .natDexNum = NATIONAL_DEX_POLTEAGEIST,                                  \
        .categoryName = _("红茶"),                                         \
        .height = 2,                                                            \
        .weight = 4,                                                            \
        .pokemonScale = 682,                                                    \
        .pokemonOffset = 24,                                                    \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0,                                                     \
        FRONT_PIC(Polteageist, 48, 48),                                         \
        .frontPicYOffset = 11,                                                  \
        .frontAnimFrames = sAnims_Polteageist,                                  \
        BACK_PIC(Polteageist, 64, 40),                                          \
        .backPicYOffset = 13,                                                   \
        PALETTES(Polteageist),                                                  \
        ICON(Polteageist, 2),                                                   \
        .footprint = gMonFootprint_Polteageist,                                 \
        LEARNSETS(Polteageist),                                                 \
        .formSpeciesIdTable = sPolteageistFormSpeciesIdTable
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,

    [SPECIES_POLTEAGEIST_PHONY] =
    {
        POLTEAGEIST_MISC_INFO,
        .description = COMPOUND_STRING("住在古董茶壶里.\n虽然大多数都是赝品，\n但偶尔也能发现真货."),
        .enemyMonElevation = 12,
    },

    [SPECIES_POLTEAGEIST_ANTIQUE] =
    {
        POLTEAGEIST_MISC_INFO,
        .description = COMPOUND_STRING("Trainers Polteageist trusts will be\n""allowed to experience its\n""distinctive flavor and aroma firsthand by\n""sampling just a tiny bit of its tea."),
        .enemyMonElevation = 11,
    },
#endif //P_FAMILY_SINISTEA

#if P_FAMILY_HATENNA
    [SPECIES_HATENNA] =
    {
        .baseHP        = 42,
        .baseAttack    = 30,
        .baseDefense   = 45,
        .baseSpeed     = 39,
        .baseSpAttack  = 56,
        .baseSpDefense = 53,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 235,
        .expYield = 53,
        .evYield_SpAttack = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("迷布莉姆"),
        .cryId = CRY_HATENNA,
        .natDexNum = NATIONAL_DEX_HATENNA,
        .categoryName = _("宁静"),
        .height = 4,
        .weight = 34,
        .description = COMPOUND_STRING("通过头部的突起物来\n感应生物的情感.\n只对温和的人敞开心扉."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Hatenna, 48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Hatenna,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Hatenna, 40, 40),
        .backPicYOffset = 12,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Hatenna),
        ICON(Hatenna, 0),
        .footprint = gMonFootprint_Hatenna,
        LEARNSETS(Hatenna),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_HATTREM}),
    },

    [SPECIES_HATTREM] =
    {
        .baseHP        = 57,
        .baseAttack    = 40,
        .baseDefense   = 65,
        .baseSpeed     = 49,
        .baseSpAttack  = 86,
        .baseSpDefense = 73,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 120,
        .expYield = 130,
        .evYield_SpAttack = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },
        .abilities = { ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("提布莉姆m"),
        .cryId = CRY_HATTREM,
        .natDexNum = NATIONAL_DEX_HATTREM,
        .categoryName = _("肃静"),
        .height = 6,
        .weight = 48,
        .description = COMPOUND_STRING("遇到情绪激昂的对手时，\n无论对方是谁，\n都会用粗暴的方式使其沉默."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Hattrem, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Hattrem,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Hattrem, 56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Hattrem),
        ICON(Hattrem, 0),
        .footprint = gMonFootprint_Hattrem,
        LEARNSETS(Hattrem),
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_HATTERENE}),
    },

#define HATTERENE_MISC_INFO                                                             \
        .baseHP        = 57,                                                            \
        .baseAttack    = 90,                                                            \
        .baseDefense   = 95,                                                            \
        .baseSpeed     = 29,                                                            \
        .baseSpAttack  = 136,                                                           \
        .baseSpDefense = 103,                                                           \
        .types = { TYPE_PSYCHIC, TYPE_FAIRY },                                          \
        .catchRate = 45,                                                                \
        .expYield = 255,                                                                \
        .evYield_SpAttack = 3,                                                          \
        .genderRatio = MON_FEMALE,                                                      \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },                              \
        .abilities = { ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE },    \
        .bodyColor = BODY_COLOR_PINK,                                                   \
        .speciesName = _("布莉姆温"),                                                  \
        .cryId = CRY_HATTERENE,                                                         \
        .natDexNum = NATIONAL_DEX_HATTERENE,                                            \
        .categoryName = _("寂静"),                                                    \
        .footprint = gMonFootprint_Hatterene,                                           \
        LEARNSETS(Hatterene),                                                           \
        .formSpeciesIdTable = sHattereneFormSpeciesIdTable,                             \
        .formChangeTable = sHattereneFormChangeTable

    [SPECIES_HATTERENE] =
    {
        HATTERENE_MISC_INFO,
        .height = 21,
        .weight = 51,
        .description = COMPOUND_STRING("由于会朝四周释放足以\n引起头痛的精神力量，\n其他生物都躲得远远的."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        FRONT_PIC(Hatterene, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Hatterene,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Hatterene, 56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Hatterene),
        ICON(Hatterene, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_HATTERENE_GIGANTAMAX] =
    {
        HATTERENE_MISC_INFO,
        .height = 260,
        .weight = 0,
        .description = COMPOUND_STRING("This Pokémon can read the\n""emotions of creatures over 30 miles away.\n""The minute it senses hostility, it\n""goes on the attack."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        FRONT_PIC(HattereneGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HattereneGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(HattereneGigantamax, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(HattereneGigantamax),
        ICON(HattereneGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_HATENNA

#if P_FAMILY_IMPIDIMP
    [SPECIES_IMPIDIMP] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .types = { TYPE_DARK, TYPE_FAIRY },
        .catchRate = 255,
        .expYield = 53,
        .evYield_SpAttack = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("捣蛋小妖"),
        .cryId = CRY_IMPIDIMP,
        .natDexNum = NATIONAL_DEX_IMPIDIMP,
        .categoryName = _("捉弄"),
        .height = 4,
        .weight = 55,
        .description = COMPOUND_STRING("不但会溜进民宅偷盗，还会\n吸收人们悔恨时的负面能量."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Impidimp, 48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Impidimp,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Impidimp, 48, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Impidimp),
        ICON(Impidimp, 0),
        .footprint = gMonFootprint_Impidimp,
        LEARNSETS(Impidimp),
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_MORGREM}),
    },

    [SPECIES_MORGREM] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 75,
        .baseSpDefense = 55,
        .types = { TYPE_DARK, TYPE_FAIRY },
        .catchRate = 120,
        .expYield = 130,
        .evYield_SpAttack = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE },
        .abilities = { ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("诈唬魔"),
        .cryId = CRY_MORGREM,
        .natDexNum = NATIONAL_DEX_MORGREM,
        .categoryName = _("坏心眼"),
        .height = 8,
        .weight = 125,
        .description = COMPOUND_STRING("会先装成要下跪道歉的样子，\n然后用后脑勺尖\n如长矛的头发刺向对手."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        FRONT_PIC(Morgrem, 48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Morgrem,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Morgrem, 56, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Morgrem),
        ICON(Morgrem, 0),
        .footprint = gMonFootprint_Morgrem,
        LEARNSETS(Morgrem),
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_GRIMMSNARL}),
    },

#define GRIMMSNARL_MISC_INFO                                                    \
        .baseHP        = 95,                                                    \
        .baseAttack    = 120,                                                   \
        .baseDefense   = 65,                                                    \
        .baseSpeed     = 60,                                                    \
        .baseSpAttack  = 95,                                                    \
        .baseSpDefense = 75,                                                    \
        .types = { TYPE_DARK, TYPE_FAIRY },                                     \
        .catchRate = 45,                                                        \
        .expYield = 255,                                                        \
        .evYield_Attack = 3,                                                    \
        .genderRatio = MON_MALE,                                                \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE },                 \
        .abilities = { ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET },  \
        .bodyColor = BODY_COLOR_PURPLE,                                         \
        .speciesName = _("长毛巨魔"),                                         \
        .cryId = CRY_GRIMMSNARL,                                                \
        .natDexNum = NATIONAL_DEX_GRIMMSNARL,                                   \
        .categoryName = _("健美"),                                           \
        .footprint = gMonFootprint_Grimmsnarl,                                  \
        LEARNSETS(Grimmsnarl),                                                  \
        .formSpeciesIdTable = sGrimmsnarlFormSpeciesIdTable,                    \
        .formChangeTable = sGrimmsnarlFormChangeTable

    [SPECIES_GRIMMSNARL] =
    {
        GRIMMSNARL_MISC_INFO,
        .height = 15,
        .weight = 610,
        .description = COMPOUND_STRING("毛发能发挥肌肉纤维般的\n作用.伸展开来时会像\n触手那样把对手缠绕起来."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        FRONT_PIC(Grimmsnarl, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Grimmsnarl,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Grimmsnarl, 64, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Grimmsnarl),
        ICON(Grimmsnarl, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_GRIMMSNARL_GIGANTAMAX] =
    {
        GRIMMSNARL_MISC_INFO,
        .height = 320,
        .weight = 0,
        .description = COMPOUND_STRING("Gigantamax energy has caused more\n""hair to sprout all over its body.\n""With the added strength, it can jump\n""over the world's tallest building."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        FRONT_PIC(GrimmsnarlGigantamax, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_GrimmsnarlGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(GrimmsnarlGigantamax, 64, 64),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(GrimmsnarlGigantamax),
        ICON(GrimmsnarlGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_IMPIDIMP

#if P_FAMILY_MILCERY
    [SPECIES_MILCERY] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 34,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 200,
        .expYield = 54,
        .evYield_SpDefense = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_AROMA_VEIL },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("小仙奶"),
        .cryId = CRY_MILCERY,
        .natDexNum = NATIONAL_DEX_MILCERY,
        .categoryName = _("鲜奶油"),
        .height = 2,
        .weight = 3,
        .description = COMPOUND_STRING("据说有小仙奶现身过的\n蛋糕店保证能生意兴隆."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Milcery, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Milcery,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 10,
        BACK_PIC(Milcery, 56, 48),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Milcery),
        ICON(Milcery, 1),
        .footprint = gMonFootprint_Milcery,
        LEARNSETS(Milcery),
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL},
                                {EVO_LEVEL, 0, SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL}),
    },

#define ALCREMIE_MISC_INFO(color)                                               \
        .baseHP        = 65,                                                    \
        .baseAttack    = 60,                                                    \
        .baseDefense   = 75,                                                    \
        .baseSpeed     = 64,                                                    \
        .baseSpAttack  = 110,                                                   \
        .baseSpDefense = 121,                                                   \
        .types = { TYPE_FAIRY, TYPE_FAIRY },                                    \
        .catchRate = 100,                                                       \
        .expYield = 173,                                                        \
        .evYield_SpDefense = 2,                                                 \
        .genderRatio = MON_FEMALE,                                              \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS },                  \
        .abilities = { ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_AROMA_VEIL },  \
        .bodyColor = color

#define ALCREMIE_REGULAR_SPECIES_INFO(sweet, cream, color)  \
    {                                                       \
        ALCREMIE_MISC_INFO(color),                          \
        .speciesName = _("Alcremie"),                       \
        .cryId = CRY_ALCREMIE,                              \
        .natDexNum = NATIONAL_DEX_ALCREMIE,                 \
        .categoryName = _("鲜奶油"),                         \
        .height = 3,                                        \
        .weight = 5,                                        \
        .description = gAlcremie ##cream##PokedexText,      \
        .pokemonScale = 530,                                \
        .pokemonOffset = 13,                                \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        FRONT_PIC(Alcremie ##sweet, 40, 56),                \
        .frontPicYOffset = 7,                               \
        .frontAnimFrames = sAnims_Alcremie,                 \
        BACK_PIC(Alcremie ##sweet, 48, 56),                 \
        .backPicYOffset = 9,                                \
        .palette = gMonPalette_Alcremie ##sweet##cream,     \
        .shinyPalette = gMonShinyPalette_Alcremie ##sweet,  \
        ICON(AlcremieStrawberryVanillaCream, 1),            \
        .footprint = gMonFootprint_Alcremie,                \
        LEARNSETS(Alcremie),                                \
        .formSpeciesIdTable = sAlcremieFormSpeciesIdTable,  \
        .formChangeTable = sAlcremieFormChangeTable,        \
    }
        //ICON(AlcremieStrawberry##cream##, 1),
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        //.backAnimId = BACK_ANIM_NONE,

    [SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM] = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM]    = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM]  = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM]    = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM]   = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM]  = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL]    = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL] = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL] = ALCREMIE_REGULAR_SPECIES_INFO(Strawberry, RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_VANILLA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_BERRY_RUBY_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_BERRY_MATCHA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_BERRY_MINT_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_BERRY_LEMON_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_SALTED_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_BERRY_RUBY_SWIRL]         = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_CARAMEL_SWIRL]      = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_BERRY_RAINBOW_SWIRL]      = ALCREMIE_REGULAR_SPECIES_INFO(Berry,      RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_VANILLA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Love,       VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_LOVE_RUBY_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO(Love,       RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_LOVE_MATCHA_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Love,       MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_LOVE_MINT_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO(Love,       MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_LOVE_LEMON_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO(Love,       LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_SALTED_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Love,       SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_LOVE_RUBY_SWIRL]          = ALCREMIE_REGULAR_SPECIES_INFO(Love,       RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_CARAMEL_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO(Love,       CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_LOVE_RAINBOW_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO(Love,       RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_VANILLA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Star,       VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STAR_RUBY_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO(Star,       RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_STAR_MATCHA_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Star,       MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_STAR_MINT_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO(Star,       MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_STAR_LEMON_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO(Star,       LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_SALTED_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Star,       SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STAR_RUBY_SWIRL]          = ALCREMIE_REGULAR_SPECIES_INFO(Star,       RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_CARAMEL_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO(Star,       CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_STAR_RAINBOW_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO(Star,       RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_CLOVER_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_CLOVER_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_CLOVER_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_CLOVER_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_CLOVER_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_CLOVER_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Clover,     RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_FLOWER_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_FLOWER_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_FLOWER_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_FLOWER_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_FLOWER_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_FLOWER_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Flower,     RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_RIBBON_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_RIBBON_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_RIBBON_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_RIBBON_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_RIBBON_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_RIBBON_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO(Ribbon,     RainbowSwirl, BODY_COLOR_YELLOW),
#if P_GIGANTAMAX_FORMS
    [SPECIES_ALCREMIE_GIGANTAMAX] =
    {
        ALCREMIE_MISC_INFO(BODY_COLOR_YELLOW),
        .isGigantamax = TRUE,
        .speciesName = _("Alcremie"),
        .cryId = CRY_ALCREMIE,
        .natDexNum = NATIONAL_DEX_ALCREMIE,
        .categoryName = _("鲜奶油"),
        .height = 3,
        .weight = 5,
        .description = COMPOUND_STRING("It launches swarms of missiles,\n""each made of cream and loaded with\n""100,000 kilocalories. Get hit by one of\n""these, and your head will swim."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(AlcremieGigantamax, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_AlcremieGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(AlcremieGigantamax, 64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(AlcremieGigantamax),
        ICON(AlcremieGigantamax, 1),
        .footprint = gMonFootprint_Alcremie,
        LEARNSETS(Alcremie),
        .formSpeciesIdTable = sAlcremieFormSpeciesIdTable,
        .formChangeTable = sAlcremieFormChangeTable,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MILCERY

#if P_FAMILY_FALINKS
    [SPECIES_FALINKS] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 165,
        .evYield_Attack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("列阵兵"),
        .cryId = CRY_FALINKS,
        .natDexNum = NATIONAL_DEX_FALINKS,
        .categoryName = _("阵型"),
        .height = 30,
        .weight = 620,
        .description = COMPOUND_STRING("列阵兵由1个头头和\n5个跟班组成.头头\n的命令不可违抗."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Falinks, 56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Falinks,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Falinks, 64, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Falinks),
        ICON(Falinks, 0),
        .footprint = gMonFootprint_Falinks,
        LEARNSETS(Falinks),
    },
#endif //P_FAMILY_FALINKS

#if P_FAMILY_PINCURCHIN
    [SPECIES_PINCURCHIN] =
    {
        .baseHP        = 48,
        .baseAttack    = 101,
        .baseDefense   = 95,
        .baseSpeed     = 15,
        .baseSpAttack  = 91,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 75,
        .expYield = 152,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS },
        .abilities = { ABILITY_LIGHTNING_ROD, ABILITY_NONE, ABILITY_ELECTRIC_SURGE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("啪嚓海胆"),
        .cryId = CRY_PINCURCHIN,
        .natDexNum = NATIONAL_DEX_PINCURCHIN,
        .categoryName = _("海胆"),
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING("能从刺的尖端放电.\n会用锐利的牙齿刮取\n附在岩石上的海藻吃."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Pincurchin, 40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Pincurchin,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Pincurchin, 56, 40),
        .backPicYOffset = 13,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Pincurchin),
        ICON(Pincurchin, 0),
        .footprint = gMonFootprint_Pincurchin,
        LEARNSETS(Pincurchin),
    },
#endif //P_FAMILY_PINCURCHIN

#if P_FAMILY_SNOM
    [SPECIES_SNOM] =
    {
        .baseHP        = 30,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 30,
        .types = { TYPE_ICE, TYPE_BUG },
        .catchRate = 190,
        .expYield = 37,
        .evYield_SpAttack = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_ICE_SCALES },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("雪吞虫"),
        .cryId = CRY_SNOM,
        .natDexNum = NATIONAL_DEX_SNOM,
        .categoryName = _("虫宝宝"),
        .height = 3,
        .weight = 38,
        .description = COMPOUND_STRING("会吃地面上的积雪.\n吃得越多，\n背上的刺就会长得越挺拔."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Snom, 40, 32),
        .frontPicYOffset = 20,
        .frontAnimFrames = sAnims_Snom,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Snom, 48, 32),
        .backPicYOffset = 17,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Snom),
        ICON(Snom, 0),
        .footprint = gMonFootprint_Snom,
        LEARNSETS(Snom),
        .evolutions = EVOLUTION({EVO_FRIENDSHIP_NIGHT, 0, SPECIES_FROSMOTH}),
    },

    [SPECIES_FROSMOTH] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = { TYPE_ICE, TYPE_BUG },
        .catchRate = 75,
        .expYield = 166,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = { ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_ICE_SCALES },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("雪绒蛾"),
        .cryId = CRY_FROSMOTH,
        .natDexNum = NATIONAL_DEX_FROSMOTH,
        .categoryName = _("冰蛾"),
        .height = 13,
        .weight = 420,
        .description = COMPOUND_STRING("绝不放过破坏山野环境的人.\n会用冰冷的翅膀四处飞翔，\n制造出暴风雪来惩罚他们."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Frosmoth, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Frosmoth,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(Frosmoth, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Frosmoth),
        ICON(Frosmoth, 0),
        .footprint = gMonFootprint_Frosmoth,
        LEARNSETS(Frosmoth),
    },
#endif //P_FAMILY_SNOM

#if P_FAMILY_STONJOURNER
    [SPECIES_STONJOURNER] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 135,
        .baseSpeed     = 70,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 60,
        .expYield = 165,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_POWER_SPOT, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("巨石丁"),
        .cryId = CRY_STONJOURNER,
        .natDexNum = NATIONAL_DEX_STONJOURNER,
        .categoryName = _("巨石"),
        .height = 25,
        .weight = 5200,
        .description = COMPOUND_STRING("伫立在大草原里，\n每天眺望着日升日落.\n擅长强而有力的踢技."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        FRONT_PIC(Stonjourner, 48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Stonjourner,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Stonjourner, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Stonjourner),
        ICON(Stonjourner, 2),
        .footprint = gMonFootprint_Stonjourner,
        LEARNSETS(Stonjourner),
    },
#endif //P_FAMILY_STONJOURNER

#if P_FAMILY_EISCUE
#define EISCUE_MISC_INFO                                        \
        .types = { TYPE_ICE, TYPE_ICE },                        \
        .catchRate = 60,                                        \
        .expYield = 165,                                        \
        .evYield_Defense = 2,                                   \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 25,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD },    \
        .abilities = { ABILITY_ICE_FACE, ABILITY_NONE },        \
        .bodyColor = BODY_COLOR_BLUE,                           \
        .speciesName = _("冰砌鹅"),                             \
        .natDexNum = NATIONAL_DEX_EISCUE,                       \
        .categoryName = _("企鹅"),                           \
        .height = 14,                                           \
        .weight = 890,                                          \
        .pokemonScale = 265,                                    \
        .pokemonOffset = 2,                                     \
        .trainerScale = 262,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Eiscue,                      \
        LEARNSETS(Eiscue),                                      \
        .formSpeciesIdTable = sEiscueFormSpeciesIdTable,        \
        .formChangeTable = sEiscueFormChangeTable

    [SPECIES_EISCUE_ICE_FACE] =
    {
        EISCUE_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .cryId = CRY_EISCUE_ICE_FACE,
        .description = COMPOUND_STRING("从非常寒冷的地方漂流而来.\n它那一脸惆怅的表情让\n许多人为之着迷."),
        FRONT_PIC(EiscueIceFace, 40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Eiscue,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(EiscueIceFace, 48, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(EiscueIceFace),
        ICON(EiscueIceFace, 0),
    },

    [SPECIES_EISCUE_NOICE_FACE] =
    {
        EISCUE_MISC_INFO,
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 130,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .cryId = CRY_EISCUE_NOICE_FACE,
        .description = COMPOUND_STRING("The hair on its head connects to\n""the surface of its brain. When this\n""Pokémon has something on its mind,\n""its hair chills the air around it."),
        FRONT_PIC(EiscueNoiceFace, 40, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Eiscue,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(EiscueNoiceFace, 40, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(EiscueNoiceFace),
        ICON(EiscueNoiceFace, 0),
    },
#endif //P_FAMILY_EISCUE

#if P_FAMILY_INDEEDEE
#define INDEEDEE_MISC_INFO                                  \
        .types = { TYPE_PSYCHIC, TYPE_NORMAL },             \
        .catchRate = 30,                                    \
        .expYield = 166,                                    \
        .eggCycles = 40,                                    \
        .friendship = 140,                                  \
        .growthRate = GROWTH_FAST,                          \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY },  \
        .bodyColor = BODY_COLOR_PURPLE,                     \
        .speciesName = _("爱管侍"),                       \
        .natDexNum = NATIONAL_DEX_INDEEDEE,                 \
        .categoryName = _("感情"),                       \
        .height = 9,                                        \
        .weight = 280,                                      \
        .pokemonScale = 338,                                \
        .pokemonOffset = 8,                                 \
        .trainerScale = 256,                                \
        .trainerOffset = 0,                                 \
        .footprint = gMonFootprint_Indeedee,                \
        .formSpeciesIdTable = sIndeedeeFormSpeciesIdTable

    [SPECIES_INDEEDEE_MALE] =
    {
        INDEEDEE_MISC_INFO,
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .evYield_SpAttack = 2,
        .genderRatio = MON_MALE,
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_SYNCHRONIZE, ABILITY_PSYCHIC_SURGE },
        .cryId = CRY_INDEEDEE_MALE,
        .description = COMPOUND_STRING("雄性就像管家一样，\n在主人的身边打理一切.\n雌性十分擅长带孩子."),
        FRONT_PIC(IndeedeeMale, 40, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Indeedee,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(IndeedeeMale, 56, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IndeedeeMale),
        ICON(IndeedeeMale, 2),
        LEARNSETS(IndeedeeMale),
    },

    [SPECIES_INDEEDEE_FEMALE] =
    {
        INDEEDEE_MISC_INFO,
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 105,
        .evYield_SpDefense = 2,
        .genderRatio = MON_FEMALE,
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_SYNCHRONIZE, ABILITY_PSYCHIC_SURGE },
        .cryId = CRY_INDEEDEE_FEMALE,
        .description = COMPOUND_STRING("They diligently serve people and\n""Pokémon so they can gather feelings\n""of gratitude. The females are\n""particularly good at babysitting."),
        FRONT_PIC(IndeedeeFemale, 40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Indeedee,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(IndeedeeFemale, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(IndeedeeFemale),
        ICON(IndeedeeFemale, 2),
        LEARNSETS(IndeedeeFemale),
    },
#endif //P_FAMILY_INDEEDEE

#if P_FAMILY_MORPEKO
#define MORPEKO_MISC_INFO                                       \
        .baseHP        = 58,                                    \
        .baseAttack    = 95,                                    \
        .baseDefense   = 58,                                    \
        .baseSpeed     = 97,                                    \
        .baseSpAttack  = 70,                                    \
        .baseSpDefense = 58,                                    \
        .types = { TYPE_ELECTRIC, TYPE_DARK },                  \
        .catchRate = 180,                                       \
        .expYield = 153,                                        \
        .evYield_Speed = 2,                                     \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 10,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY },      \
        .abilities = { ABILITY_HUNGER_SWITCH, ABILITY_NONE },   \
        .bodyColor = BODY_COLOR_YELLOW,                         \
        .speciesName = _("莫鲁贝可"),                            \
        .natDexNum = NATIONAL_DEX_MORPEKO,                      \
        .categoryName = _("双面"),                         \
        .height = 3,                                            \
        .weight = 30,                                           \
        .pokemonScale = 530,                                    \
        .pokemonOffset = 13,                                    \
        .trainerScale = 256,                                    \
        .trainerOffset = 0,                                     \
        .footprint = gMonFootprint_Morpeko,                     \
        LEARNSETS(Morpeko),                                     \
        .formSpeciesIdTable = sMorpekoFormSpeciesIdTable,       \
        .formChangeTable = sMorpekoFormChangeTable

    [SPECIES_MORPEKO_FULL_BELLY] =
    {
        MORPEKO_MISC_INFO,
        .cryId = CRY_MORPEKO_FULL_BELLY,
        .description = COMPOUND_STRING("总是饿着肚子.\n会吃掉装在像口袋一样的\n袋子里的种子来发电."),
        FRONT_PIC(MorpekoFullBelly, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Morpeko,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MorpekoFullBelly, 48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MorpekoFullBelly),
        ICON(MorpekoFullBelly, 2),
    },

    [SPECIES_MORPEKO_HANGRY] =
    {
        MORPEKO_MISC_INFO,
        .cryId = CRY_MORPEKO_HANGRY,
        .description = COMPOUND_STRING("Intense hunger drives it to\n""extremes of violence, and the electricity\n""in its cheek sacs has converted into\n""a Dark-type energy."),
        FRONT_PIC(MorpekoHangry, 32, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Morpeko,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(MorpekoHangry, 48, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(MorpekoHangry),
        ICON(MorpekoHangry, 2),
    },
#endif //P_FAMILY_MORPEKO

#if P_FAMILY_CUFANT
    [SPECIES_CUFANT] =
    {
        .baseHP        = 72,
        .baseAttack    = 80,
        .baseDefense   = 49,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 49,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .catchRate = 190,
        .expYield = 66,
        .evYield_Attack = 1,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_MINERAL },
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_HEAVY_METAL },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("铜象"),
        .cryId = CRY_CUFANT,
        .natDexNum = NATIONAL_DEX_CUFANT,
        .categoryName = _("像铜"),
        .height = 12,
        .weight = 1000,
        .description = COMPOUND_STRING("能轻松举起重达5吨的\n货物的大力士宝可梦.\n会用鼻子挖地."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Cufant, 56, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Cufant,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Cufant, 64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Cufant),
        ICON(Cufant, 0),
        .footprint = gMonFootprint_Cufant,
        LEARNSETS(Cufant),
        .evolutions = EVOLUTION({EVO_LEVEL, 34, SPECIES_COPPERAJAH}),
    },

#define COPPERAJAH_MISC_INFO                                                        \
        .baseHP        = 122,                                                       \
        .baseAttack    = 130,                                                       \
        .baseDefense   = 69,                                                        \
        .baseSpeed     = 30,                                                        \
        .baseSpAttack  = 80,                                                        \
        .baseSpDefense = 69,                                                        \
        .types = { TYPE_STEEL, TYPE_STEEL },                                        \
        .catchRate = 90,                                                            \
        .expYield = 175,                                                            \
        .evYield_Attack = 2,                                                        \
        .itemRare = ITEM_LAGGING_TAIL,                                              \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 25,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_MINERAL },                        \
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_HEAVY_METAL },    \
        .bodyColor = BODY_COLOR_GREEN,                                              \
        .speciesName = _("大王铜象"),                                             \
        .cryId = CRY_COPPERAJAH,                                                    \
        .natDexNum = NATIONAL_DEX_COPPERAJAH,                                       \
        .categoryName = _("像铜"),                                            \
        .footprint = gMonFootprint_Copperajah,                                      \
        LEARNSETS(Copperajah),                                                      \
        .formSpeciesIdTable = sCopperajahFormSpeciesIdTable,                        \
        .formChangeTable = sCopperajahFormChangeTable

    [SPECIES_COPPERAJAH] =
    {
        COPPERAJAH_MISC_INFO,
        .height = 30,
        .weight = 6500,
        .description = COMPOUND_STRING("群居的宝可梦.\n鼻子的握力十分强劲，\n甚至能把大石头弄得粉碎."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Copperajah, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Copperajah,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Copperajah, 64, 32),
        .backPicYOffset = 16,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Copperajah),
        ICON(Copperajah, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_COPPERAJAH_GIGANTAMAX] =
    {
        COPPERAJAH_MISC_INFO,
        .height = 230,
        .weight = 0,
        .description = COMPOUND_STRING("After this Pokémon has\n""Gigantamaxed, its massive nose can utterly\n""demolish large structures with a single\n""smashing blow."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CopperajahGigantamax, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_CopperajahGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CopperajahGigantamax, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CopperajahGigantamax),
        ICON(CopperajahGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CUFANT

#if P_FAMILY_DRACOZOLT
    [SPECIES_DRACOZOLT] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = { TYPE_ELECTRIC, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_HUSTLE, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("雷鸟龙"),
        .cryId = CRY_DRACOZOLT,
        .natDexNum = NATIONAL_DEX_DRACOZOLT,
        .categoryName = _("化石"),
        .height = 18,
        .weight = 1900,
        .description = COMPOUND_STRING("会用尾部结实的肌肉发电.\n与下半身相比，\n上半身真的太小了."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(Dracozolt, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Dracozolt,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dracozolt, 64, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Dracozolt),
        ICON(Dracozolt, 1),
        .footprint = gMonFootprint_Dracozolt,
        LEARNSETS(Dracozolt),
    },
#endif //P_FAMILY_DRACOZOLT

#if P_FAMILY_ARCTOZOLT
    [SPECIES_ARCTOZOLT] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = { TYPE_ELECTRIC, TYPE_ICE },
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_STATIC, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("雷鸟海兽"),
        .cryId = CRY_ARCTOZOLT,
        .natDexNum = NATIONAL_DEX_ARCTOZOLT,
        .categoryName = _("化石"),
        .height = 23,
        .weight = 1500,
        .description = COMPOUND_STRING("它冻成冰的上半身在\n颤抖后可以产生电能.\n非常不擅长走路."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        FRONT_PIC(Arctozolt, 56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Arctozolt,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Arctozolt, 56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Arctozolt),
        ICON(Arctozolt, 2),
        .footprint = gMonFootprint_Arctozolt,
        LEARNSETS(Arctozolt),
    },
#endif //P_FAMILY_ARCTOZOLT

#if P_FAMILY_DRACOVISH
    [SPECIES_DRACOVISH] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 177,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_STRONG_JAW, ABILITY_SAND_RUSH },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("鳃鱼龙"),
        .cryId = CRY_DRACOVISH,
        .natDexNum = NATIONAL_DEX_DRACOVISH,
        .categoryName = _("化石"),
        .height = 23,
        .weight = 2150,
        .description = COMPOUND_STRING("虽然能用自豪的脚力\n以60公里的时速奔跑，\n但是只能在水中呼吸."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        FRONT_PIC(Dracovish, 48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Dracovish,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Dracovish, 64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Dracovish),
        ICON(Dracovish, 0),
        .footprint = gMonFootprint_Dracovish,
        LEARNSETS(Dracovish),
    },
#endif //P_FAMILY_DRACOVISH

#if P_FAMILY_ARCTOVISH
    [SPECIES_ARCTOVISH] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 55,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = { TYPE_WATER, TYPE_ICE },
        .catchRate = 45,
        .expYield = 177,
        .evYield_Defense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_WATER_ABSORB, ABILITY_ICE_BODY, ABILITY_SLUSH_RUSH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("鳃鱼海兽"),
        .cryId = CRY_ARCTOVISH,
        .natDexNum = NATIONAL_DEX_ARCTOVISH,
        .categoryName = _("化石"),
        .height = 20,
        .weight = 1750,
        .description = COMPOUND_STRING("面部的皮肤无论受到什么\n攻击都不会受伤，但由于\n呼吸起来不方便而灭绝了."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        FRONT_PIC(Arctovish, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Arctovish,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Arctovish, 64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Arctovish),
        ICON(Arctovish, 0),
        .footprint = gMonFootprint_Arctovish,
        LEARNSETS(Arctovish),
    },
#endif //P_FAMILY_ARCTOVISH

#if P_FAMILY_DURALUDON
#define DURALUDON_MISC_INFO                                                             \
        .baseHP        = 70,                                                            \
        .baseAttack    = 95,                                                            \
        .baseDefense   = 115,                                                           \
        .baseSpeed     = 85,                                                            \
        .baseSpAttack  = 120,                                                           \
        .baseSpDefense = 50,                                                            \
        .types = { TYPE_STEEL, TYPE_DRAGON },                                           \
        .catchRate = 45,                                                                \
        .expYield = 187,                                                                \
        .evYield_SpAttack = 2,                                                          \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 30,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_DRAGON },                           \
        .abilities = { ABILITY_LIGHT_METAL, ABILITY_HEAVY_METAL, ABILITY_STALWART },    \
        .bodyColor = BODY_COLOR_WHITE,                                                  \
        .speciesName = _("铝钢龙"),                                                  \
        .cryId = CRY_DURALUDON,                                                         \
        .natDexNum = NATIONAL_DEX_DURALUDON,                                            \
        .categoryName = _("合金"),                                                     \
        .footprint = gMonFootprint_Duraludon,                                           \
        LEARNSETS(Duraludon),                                                           \
        .formSpeciesIdTable = sDuraludonFormSpeciesIdTable,                             \
        .formChangeTable = sDuraludonFormChangeTable

    [SPECIES_DURALUDON] =
    {
        DURALUDON_MISC_INFO,
        .height = 18,
        .weight = 400,
        .description = COMPOUND_STRING("身体犹如打磨过的金属，\n虽然轻而坚硬，\n却有着容易生锈的弱点."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(Duraludon, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Duraludon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Duraludon, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Duraludon),
        ICON(Duraludon, 0),
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DURALUDON_GIGANTAMAX] =
    {
        DURALUDON_MISC_INFO,
        .height = 430,
        .weight = 0,
        .description = COMPOUND_STRING("The hardness of its cells is\n""exceptional, even among Steel types. It\n""also has a body structure that's\n""resistant to earthquakes."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        FRONT_PIC(DuraludonGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_DuraludonGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(DuraludonGigantamax, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(DuraludonGigantamax),
        ICON(DuraludonGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_DURALUDON

#if P_FAMILY_DREEPY
    [SPECIES_DREEPY] =
    {
        .baseHP        = 28,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 82,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = { TYPE_DRAGON, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 54,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("多龙梅西亚"),
        .cryId = CRY_DREEPY,
        .natDexNum = NATIONAL_DEX_DREEPY,
        .categoryName = _("哀怨"),
        .height = 5,
        .weight = 20,
        .description = COMPOUND_STRING("曾经栖息在古代的大海.\n在重生为幽灵宝可梦后，\n会在昔日的住处徘徊."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dreepy, 48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Dreepy,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(Dreepy, 56, 40),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Dreepy),
        ICON(Dreepy, 0),
        .footprint = gMonFootprint_Dreepy,
        LEARNSETS(Dreepy),
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_DRAKLOAK}),
    },

    [SPECIES_DRAKLOAK] =
    {
        .baseHP        = 68,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 102,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 144,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("多龙奇"),
        .cryId = CRY_DRAKLOAK,
        .natDexNum = NATIONAL_DEX_DRAKLOAK,
        .categoryName = _("保姆"),
        .height = 14,
        .weight = 110,
        .description = COMPOUND_STRING("飞行速度为每小时200公里.\n与多龙梅西亚一起战斗，\n到它进化为止都会细心照顾."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
        FRONT_PIC(Drakloak, 64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Drakloak,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(Drakloak, 64, 48),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Drakloak),
        ICON(Drakloak, 0),
        .footprint = gMonFootprint_Drakloak,
        LEARNSETS(Drakloak),
        .evolutions = EVOLUTION({EVO_LEVEL, 60, SPECIES_DRAGAPULT}),
    },

    [SPECIES_DRAGAPULT] =
    {
        .baseHP        = 88,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 142,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .types = { TYPE_DRAGON, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 300,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_DRAGON },
        .abilities = { ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("多龙巴鲁托"),
        .cryId = CRY_DRAGAPULT,
        .natDexNum = NATIONAL_DEX_DRAGAPULT,
        .categoryName = _("隐形"),
        .height = 30,
        .weight = 500,
        .description = COMPOUND_STRING("它角里的多龙梅西亚似乎\n满心期待着能被以\n音速发射出去."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Dragapult, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Dragapult,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 3,
        BACK_PIC(Dragapult, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Dragapult),
        ICON(Dragapult, 0),
        .footprint = gMonFootprint_Dragapult,
        LEARNSETS(Dragapult),
    },
#endif //P_FAMILY_DREEPY

#if P_FAMILY_ZACIAN
#define ZACIAN_MISC_INFO                                                                \
        .catchRate = 10,                                                                \
        .evYield_Speed = 3,                                                             \
        .genderRatio = MON_GENDERLESS,                                                  \
        .eggCycles = 120,                                                               \
        .friendship = 0,                                                                \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .abilities = { ABILITY_INTREPID_SWORD, ABILITY_NONE },                          \
        .bodyColor = BODY_COLOR_BLUE,                                                   \
        .isLegendary = TRUE,                                                            \
        .speciesName = _("苍响"),                                                     \
        .natDexNum = NATIONAL_DEX_ZACIAN,                                               \
        .categoryName = _("强者"),                                                   \
        .height = 28,                                                                   \
        .pokemonScale = 275,                                                            \
        .pokemonOffset = 7,                                                             \
        .trainerScale = 256,                                                            \
        .trainerOffset = 0,                                                             \
        .footprint = gMonFootprint_Zacian,                                              \
        LEARNSETS(Zacian),                                                              \
        .formSpeciesIdTable = sZacianFormSpeciesIdTable,                                \
        .formChangeTable = sZacianFormChangeTable

    [SPECIES_ZACIAN_HERO_OF_MANY_BATTLES] =
    {
        ZACIAN_MISC_INFO,
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .baseDefense   = 115,
        .baseSpeed     = 138,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .expYield = 335,
        .cryId = CRY_ZACIAN_HERO_OF_MANY_BATTLES,
        .weight = 1100,
        .description = COMPOUND_STRING("被称为妖精王之剑，让敌友\n都对其敬畏不已.能以一剑\n将之拿下超极巨化宝可梦."),
        FRONT_PIC(ZacianHeroOfManyBattles, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Zacian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZacianHeroOfManyBattles, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ZacianHeroOfManyBattles),
        ICON(ZacianHeroOfManyBattles, 2),
    },

    [SPECIES_ZACIAN_CROWNED_SWORD] =
    {
        ZACIAN_MISC_INFO,
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 150 : 170,
        .baseDefense   = 115,
        .baseSpeed     = 148,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        .types = { TYPE_FAIRY, TYPE_STEEL },
        .expYield = 360,
        .cryId = CRY_ZACIAN_CROWNED_SWORD,
        .weight = 3550,
        .description = COMPOUND_STRING("Able to cut down anything with a\n""single strike, it became known as the\n""Fairy King's Sword, and it inspired\n""awe in friend and foe alike."),
        FRONT_PIC(ZacianCrownedSword, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zacian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZacianCrownedSword, 64, 56),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ZacianCrownedSword),
        ICON(ZacianCrownedSword, 2),
    },
#endif //P_FAMILY_ZACIAN

#if P_FAMILY_ZAMAZENTA
#define ZAMAZENTA_MISC_INFO                                                             \
        .catchRate = 10,                                                                \
        .evYield_Speed = 3,                                                             \
        .genderRatio = MON_GENDERLESS,                                                  \
        .eggCycles = 120,                                                               \
        .friendship = 0,                                                                \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .abilities = { ABILITY_DAUNTLESS_SHIELD, ABILITY_NONE },                        \
        .bodyColor = BODY_COLOR_RED,                                                    \
        .isLegendary = TRUE,                                                            \
        .speciesName = _("藏玛然特"),                                                  \
        .natDexNum = NATIONAL_DEX_ZAMAZENTA,                                            \
        .categoryName = _("强者"),                                                   \
        .height = 29,                                                                   \
        .pokemonScale = 275,                                                            \
        .pokemonOffset = 7,                                                             \
        .trainerScale = 256,                                                            \
        .trainerOffset = 0,                                                             \
        .footprint = gMonFootprint_Zamazenta,                                           \
        LEARNSETS(Zamazenta),                                                           \
        .formSpeciesIdTable = sZamazentaFormSpeciesIdTable,                             \
        .formChangeTable = sZamazentaFormChangeTable

    [SPECIES_ZAMAZENTA_HERO_OF_MANY_BATTLES] =
    {
        ZAMAZENTA_MISC_INFO,
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .baseDefense   = 115,
        .baseSpeed     = 138,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .expYield = 335,
        .cryId = CRY_ZAMAZENTA_HERO_OF_MANY_BATTLES,
        .weight = 2100,
        .description = COMPOUND_STRING("被称为格斗王之盾，受到人\n们的畏惧与尊崇.能轻易抵\n消超极巨化宝可梦的攻击."),
        FRONT_PIC(ZamazentaHeroOfManyBattles, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zamazenta,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZamazentaHeroOfManyBattles, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ZamazentaHeroOfManyBattles),
        ICON(ZamazentaHeroOfManyBattles, 2),
    },

    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] =
    {
        ZAMAZENTA_MISC_INFO,
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .baseDefense   = P_UPDATED_STATS >= GEN_9 ? 140 : 145,
        .baseSpeed     = 128,
        .baseSpAttack  = 80,
        .baseSpDefense = P_UPDATED_STATS >= GEN_9 ? 140 : 145,
        .types = { TYPE_FIGHTING, TYPE_STEEL },
        .expYield = 360,
        .cryId = CRY_ZAMAZENTA_CROWNED_SHIELD,
        .weight = 7850,
        .description = COMPOUND_STRING("Its ability to deflect any attack\n""led to it being known as the Fighting\n""Master's Shield. It was feared and\n""respected by all."),
        FRONT_PIC(ZamazentaCrownedShield, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Zamazenta,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZamazentaCrownedShield, 64, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ZamazentaCrownedShield),
        ICON(ZamazentaCrownedShield, 2),
    },
#endif //P_FAMILY_ZAMAZENTA

#if P_FAMILY_ETERNATUS
#define ETERNATUS_MISC_INFO                                                             \
        .types = { TYPE_POISON, TYPE_DRAGON },                                          \
        .catchRate = 255,                                                               \
        .evYield_HP = 3,                                                                \
        .genderRatio = MON_GENDERLESS,                                                  \
        .eggCycles = 120,                                                               \
        .friendship = 0,                                                                \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE },                                \
        .bodyColor = BODY_COLOR_PURPLE,                                                 \
        .isLegendary = TRUE,                                                            \
        .speciesName = _("无极汰那"),                                                  \
        .natDexNum = NATIONAL_DEX_ETERNATUS,                                            \
        .categoryName = _("Gigantic"),                                                  \
        .footprint = gMonFootprint_Eternatus,                                           \
        LEARNSETS(Eternatus),                                                           \
        .formSpeciesIdTable = sEternatusFormSpeciesIdTable

    [SPECIES_ETERNATUS] =
    {
        ETERNATUS_MISC_INFO,
        .baseHP        = 140,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 130,
        .baseSpAttack  = 145,
        .baseSpDefense = 95,
        .expYield = 345,
        .cryId = CRY_ETERNATUS,
        .height = 200,
        .weight = 9500,
        .pokemonScale = 230,
        .pokemonOffset = 0,
        .trainerScale = 4852,
        .trainerOffset = 20,
        .description = COMPOUND_STRING("会用胸部的核心吸收\n伽勒尔地区涌出的能量，\n借以保持自己的活力。"),
        FRONT_PIC(Eternatus, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Eternatus,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 4,
        BACK_PIC(Eternatus, 64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Eternatus),
        ICON(Eternatus, 0),
    },

    [SPECIES_ETERNATUS_ETERNAMAX] =
    {
        ETERNATUS_MISC_INFO,
        .baseHP        = 255,
        .baseAttack    = 115,
        .baseDefense   = 250,
        .baseSpeed     = 130,
        .baseSpAttack  = 125,
        .baseSpDefense = 250,
        .expYield = 563,
        .cryId = CRY_ETERNATUS_ETERNAMAX,
        .height = 1000,
        .weight = 0,
        .pokemonScale = 230,
        .pokemonOffset = 0,
        .trainerScale = 4852,
        .trainerOffset = 20,
        .description = COMPOUND_STRING("As a result of Rose's meddling,\n""Eternatus absorbed all the energy in\n""the Galar region. It's now in a state\n""of power overload."),
        FRONT_PIC(EternatusEternamax, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Eternatus,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 13,
        BACK_PIC(EternatusEternamax, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(EternatusEternamax),
        ICON(EternatusEternamax, 0),
    },
#endif //P_FAMILY_ETERNATUS

#if P_FAMILY_KUBFU
    [SPECIES_KUBFU] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 60,
        .baseSpeed     = 72,
        .baseSpAttack  = 53,
        .baseSpDefense = 50,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 3,
        .expYield = 77,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .isLegendary = TRUE,
        .speciesName = _("熊徒弟"),
        .cryId = CRY_KUBFU,
        .natDexNum = NATIONAL_DEX_KUBFU,
        .categoryName = _("Wushu"),
        .height = 6,
        .weight = 120,
        .description = COMPOUND_STRING("拉紧头上又白又长\n的体毛，就会变得\n斗气势高昂，并从\n丹田涌出力量。"),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Kubfu, 40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Kubfu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Kubfu, 56, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Kubfu),
        ICON(Kubfu, 1),
        .footprint = gMonFootprint_Kubfu,
        LEARNSETS(Kubfu),
        .evolutions = EVOLUTION({EVO_DARK_SCROLL, 0, SPECIES_URSHIFU_SINGLE_STRIKE_STYLE},
                                {EVO_ITEM, ITEM_SCROLL_OF_DARKNESS, SPECIES_URSHIFU_SINGLE_STRIKE_STYLE},
                                {EVO_WATER_SCROLL, 0, SPECIES_URSHIFU_RAPID_STRIKE_STYLE},
                                {EVO_ITEM, ITEM_SCROLL_OF_WATERS, SPECIES_URSHIFU_RAPID_STRIKE_STYLE}),
    },

#define URSHIFU_MISC_INFO(style)                                                        \
        .baseHP        = 100,                                                           \
        .baseAttack    = 130,                                                           \
        .baseDefense   = 100,                                                           \
        .baseSpeed     = 97,                                                            \
        .baseSpAttack  = 63,                                                            \
        .baseSpDefense = 60,                                                            \
        .catchRate = 3,                                                                 \
        .expYield = 275,                                                                \
        .evYield_Attack = 3,                                                            \
        .genderRatio = PERCENT_FEMALE(12.5),                                            \
        .eggCycles = 120,                                                               \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .abilities = { ABILITY_UNSEEN_FIST, ABILITY_NONE },                             \
        .bodyColor = BODY_COLOR_GRAY,                                                   \
        .isLegendary = TRUE,                                                            \
        .speciesName = _("武道熊师"),                                                    \
        .natDexNum = NATIONAL_DEX_URSHIFU,                                              \
        .categoryName = _("Wushu"),                                                     \
        .footprint = gMonFootprint_Urshifu,                                             \
        .formSpeciesIdTable = sUrshifuFormSpeciesIdTable

#define URSHIFU_SINGLE_STRIKE_STYLE_MISC_INFO       \
        .types = { TYPE_FIGHTING, TYPE_DARK },      \
        .cryId = CRY_URSHIFU_SINGLE_STRIKE_STYLE,   \
        LEARNSETS(UrshifuSingleStrikeStyle),        \
        URSHIFU_MISC_INFO(SingleStrike)

    [SPECIES_URSHIFU_SINGLE_STRIKE_STYLE] =
    {
        URSHIFU_SINGLE_STRIKE_STYLE_MISC_INFO,
        .height = 19,
        .weight = 1050,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .description = COMPOUND_STRING("生活在遥远地区的山岳\n地带。通过在断崖绝壁\n上奔跑来锻炼腰腿，\n磨炼招式。"),
        FRONT_PIC(UrshifuSingleStrikeStyle, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Urshifu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(UrshifuSingleStrikeStyle, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(UrshifuSingleStrikeStyle),
        ICON(Urshifu, 2),
        .formChangeTable = sUrshifuSingleStrikeFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_URSHIFU_SINGLE_STRIKE_STYLE_GIGANTAMAX] =
    {
        URSHIFU_SINGLE_STRIKE_STYLE_MISC_INFO,
        .height = 290,
        .weight = 0,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .description = COMPOUND_STRING("People call it the embodiment of\n""rage. It's said that this Pokémon's\n""terrifying expression and shout will\n""rid the world of malevolence."),
        FRONT_PIC(UrshifuSingleStrikeStyleGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_UrshifuSingleStrikeStyleGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(UrshifuSingleStrikeStyleGigantamax, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(UrshifuSingleStrikeStyleGigantamax),
        ICON(UrshifuSingleStrikeStyleGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS

#define URSHIFU_RAPID_STRIKE_STYLE_MISC_INFO        \
        .types = { TYPE_FIGHTING, TYPE_WATER },     \
        .cryId = CRY_URSHIFU_RAPID_STRIKE_STYLE,    \
        LEARNSETS(UrshifuRapidStrikeStyle),         \
        URSHIFU_MISC_INFO(RapidStrike)

    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE] =
    {
        URSHIFU_RAPID_STRIKE_STYLE_MISC_INFO,
        .height = 19,
        .weight = 1050,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .description = COMPOUND_STRING("This form of Urshifu is a strong\n""believer in defeating foes by raining\n""many blows down on them. Its\n""strikes are nonstop, flowing like a river."),
        FRONT_PIC(UrshifuRapidStrikeStyle, 56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Urshifu,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(UrshifuRapidStrikeStyle, 64, 56),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(UrshifuRapidStrikeStyle),
        ICON(Urshifu, 2),
        .formChangeTable = sUrshifuRapidStrikeFormChangeTable,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE_GIGANTAMAX] =
    {
        URSHIFU_RAPID_STRIKE_STYLE_MISC_INFO,
        .height = 260,
        .weight = 0,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .description = COMPOUND_STRING("As it waits for the right moment to\n""unleash its Gigantamax power, this\n""Pokémon maintains a perfect one-\n""legged stance. It won't even twitch."),
        FRONT_PIC(UrshifuRapidStrikeStyleGigantamax, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_UrshifuRapidStrikeStyleGigantamax,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(UrshifuRapidStrikeStyleGigantamax, 64, 64),
        .backPicYOffset = 4,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(UrshifuRapidStrikeStyleGigantamax),
        ICON(UrshifuRapidStrikeStyleGigantamax, 0),
        .isGigantamax = TRUE,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KUBFU


#if P_FAMILY_ZARUDE
#define ZARUDE_MISC_INFO                                                                \
        .baseHP        = 105,                                                           \
        .baseAttack    = 120,                                                           \
        .baseDefense   = 105,                                                           \
        .baseSpeed     = 105,                                                           \
        .baseSpAttack  = 70,                                                            \
        .baseSpDefense = 95,                                                            \
        .types = { TYPE_DARK, TYPE_GRASS },                                             \
        .catchRate = 3,                                                                 \
        .expYield = 300,                                                                \
        .evYield_Attack = 3,                                                            \
        .genderRatio = MON_GENDERLESS,                                                  \
        .eggCycles = 120,                                                               \
        .friendship = 0,                                                                \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .abilities = { ABILITY_LEAF_GUARD, ABILITY_NONE },                              \
        .bodyColor = BODY_COLOR_GREEN,                                                  \
        .isMythical = TRUE,                                                             \
        .speciesName = _("萨戮德"),                                                     \
        .cryId = CRY_ZARUDE,                                                            \
        .natDexNum = NATIONAL_DEX_ZARUDE,                                               \
        .categoryName = _("流氓"),                                              \
        .height = 18,                                                                   \
        .weight = 700,                                                                  \
        .pokemonScale = 267,                                                            \
        .pokemonOffset = 2,                                                             \
        .trainerScale = 286,                                                            \
        .trainerOffset = 1,                                                             \
        .footprint = gMonFootprint_Zarude,                                              \
        LEARNSETS(Zarude),                                                              \
        .formSpeciesIdTable = sZarudeFormSpeciesIdTable

    [SPECIES_ZARUDE] =
    {
        ZARUDE_MISC_INFO,
        .description = COMPOUND_STRING("成群结队地在密林中\n生活。攻击性很强，森林\n中栖息的宝可梦都很\n怕它。"),
        FRONT_PIC(Zarude, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zarude,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Zarude, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Zarude),
        ICON(Zarude, 1),
    },
    [SPECIES_ZARUDE_DADA] =
    {
        ZARUDE_MISC_INFO,
        .description = COMPOUND_STRING("This Zarude's special strength\n""stems from its love and care for an\n""orphaned human child that the Pokémon\n""has raised."),
        FRONT_PIC(ZarudeDada, 64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Zarude,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(ZarudeDada, 64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(ZarudeDada),
        ICON(ZarudeDada, 1),
    },
#endif //P_FAMILY_ZARUDE

#if P_FAMILY_REGIELEKI
    [SPECIES_REGIELEKI] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 200,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 3,
        .expYield = 290,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_TRANSISTOR, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("雷吉艾勒奇"),
        .cryId = CRY_REGIELEKI,
        .natDexNum = NATIONAL_DEX_REGIELEKI,
        .categoryName = _("Electron"),
        .height = 12,
        .weight = 1450,
        .description = COMPOUND_STRING("整个身体是制造电能的\n器官。可以制造出伽勒\n尔全域所需的电力。"),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Regieleki, 64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Regieleki,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 8,
        BACK_PIC(Regieleki, 64, 48),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Regieleki),
        ICON(Regieleki, 0),
        .footprint = gMonFootprint_Regieleki,
        LEARNSETS(Regieleki),
        .isLegendary = TRUE,
    },
#endif //P_FAMILY_REGIELEKI

#if P_FAMILY_REGIDRAGO
    [SPECIES_REGIDRAGO] =
    {
        .baseHP        = 200,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 3,
        .expYield = 290,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_DRAGONS_MAW, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .isLegendary = TRUE,
        .speciesName = _("雷吉铎拉戈"),
        .cryId = CRY_REGIDRAGO,
        .natDexNum = NATIONAL_DEX_REGIDRAGO,
        .categoryName = _("龙"),
        .height = 21,
        .weight = 2000,
        .description = COMPOUND_STRING("整个身体是龙之能量的\n结晶。据说它拥有所有龙\n宝可梦的能力。"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
        FRONT_PIC(Regidrago, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Regidrago,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        BACK_PIC(Regidrago, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Regidrago),
        ICON(Regidrago, 0),
        .footprint = gMonFootprint_Regidrago,
        LEARNSETS(Regidrago),
    },
#endif //P_FAMILY_REGIDRAGO

#if P_FAMILY_GLASTRIER
    [SPECIES_GLASTRIER] =
    {
        .baseHP        = 100,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 3,
        .expYield = 290,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_CHILLING_NEIGH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .isLegendary = TRUE,
        .speciesName = _("雪暴马"),
        .cryId = CRY_GLASTRIER,
        .natDexNum = NATIONAL_DEX_GLASTRIER,
        .categoryName = _("Wild Horse"),
        .height = 22,
        .weight = 8000,
        .description = COMPOUND_STRING("拥有十分惊人的怪力。\n戴在脸上的冰之面罩\n硬度是钻石的100倍。"),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
        FRONT_PIC(Glastrier, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Glastrier,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Glastrier, 56, 64),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Glastrier),
        ICON(Glastrier, 0),
        .footprint = gMonFootprint_Glastrier,
        LEARNSETS(Glastrier),
    },
#endif //P_FAMILY_GLASTRIER

#if P_FAMILY_SPECTRIER
    [SPECIES_SPECTRIER] =
    {
        .baseHP        = 100,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 145,
        .baseSpDefense = 80,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 3,
        .expYield = 290,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_GRIM_NEIGH, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .isLegendary = TRUE,
        .speciesName = _("灵幽马"),
        .cryId = CRY_SPECTRIER,
        .natDexNum = NATIONAL_DEX_SPECTRIER,
        .categoryName = _("Swift Horse"),
        .height = 20,
        .weight = 445,
        .description = COMPOUND_STRING("在黑暗的夜晚中奔跑，\n吸取正在睡觉的生物\n的生命能量。喜欢\n孤独和静寂。"),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        FRONT_PIC(Spectrier, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Spectrier,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Spectrier, 56, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Spectrier),
        ICON(Spectrier, 0),
        .footprint = gMonFootprint_Spectrier,
        LEARNSETS(Spectrier),
    },
#endif //P_FAMILY_SPECTRIER

#define CALYREX_MISC_INFO                                   \
        .speciesName = _("蕾冠王"),                        \
        .natDexNum = NATIONAL_DEX_CALYREX,                  \
        .footprint = gMonFootprint_Calyrex,                 \
        .formSpeciesIdTable = sCalyrexFormSpeciesIdTable,   \
        .isLegendary = TRUE

#if P_FAMILY_CALYREX
    [SPECIES_CALYREX] =
    {
        CALYREX_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_PSYCHIC, TYPE_GRASS },
        .catchRate = 3,
        .expYield = 250,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_UNNERVE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .cryId = CRY_CALYREX,
        .categoryName = _("King"),
        .height = 11,
        .weight = 77,
        .description = COMPOUND_STRING("曾经在很久以前统治着\n伽勒尔的传说之王。\n拥有治愈心灵和让\n草木发芽的能力。"),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(Calyrex, 48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Calyrex,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(Calyrex, 56, 48),
        .backPicYOffset = 10,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(Calyrex),
        ICON(Calyrex, 0),
        LEARNSETS(Calyrex),
    },

#if P_FUSION_FORMS
    [SPECIES_CALYREX_ICE_RIDER] =
    {
        CALYREX_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 165,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 85,
        .baseSpDefense = 130,
        .types = { TYPE_PSYCHIC, TYPE_ICE },
        .catchRate = 3,
        .expYield = 340,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_AS_ONE_ICE_RIDER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .cryId = CRY_CALYREX_ICE_RIDER,
        .categoryName = _("High King"),
        .height = 24,
        .weight = 8091,
        .description = COMPOUND_STRING("According to lore, this Pokémon\n""showed no mercy to those who got in\n""its way, yet it would heal its\n""opponents' wounds after battle."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CalyrexIceRider, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Calyrex,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CalyrexIceRider, 64, 64),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CalyrexIceRider),
        ICON(CalyrexIceRider, 0),
        LEARNSETS(CalyrexIceRider),
        .cannotBeTraded = TRUE,
    },

    [SPECIES_CALYREX_SHADOW_RIDER] =
    {
        CALYREX_MISC_INFO,
        .baseHP        = 100,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 150,
        .baseSpAttack  = 165,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_GHOST },
        .catchRate = 3,
        .expYield = 340,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_AS_ONE_SHADOW_RIDER, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .cryId = CRY_CALYREX_SHADOW_RIDER,
        .categoryName = _("High King"),
        .height = 24,
        .weight = 536,
        .description = COMPOUND_STRING("It's said that Calyrex and a\n""Pokémon that had bonded with it ran all\n""across the Galar region to bring green\n""to the wastelands."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CalyrexShadowRider, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Calyrex,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CalyrexShadowRider, 64, 56),
        .backPicYOffset = 7,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(CalyrexShadowRider),
        ICON(CalyrexShadowRider, 0),
        LEARNSETS(CalyrexShadowRider),
        .cannotBeTraded = TRUE,
    },
#endif //P_FUSION_FORMS
#endif //P_FAMILY_CALYREX

#if P_FAMILY_ENAMORUS
#define ENAMORUS_MISC_INFO                                                              \
        .types = { TYPE_FAIRY, TYPE_FLYING },                                           \
        .catchRate = 3,                                                                 \
        .expYield = 116,                                                                \
        .evYield_SpAttack = 3,                                                          \
        .genderRatio = MON_FEMALE,                                                      \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },    \
        .bodyColor = BODY_COLOR_PINK,                                                   \
        .isLegendary = TRUE,                                                            \
        .speciesName = _("Enamorus"),                                                   \
        .natDexNum = NATIONAL_DEX_ENAMORUS,                                             \
        .categoryName = _("Love-Hate"),                                                 \
        .height = 16,                                                                   \
        .weight = 480,                                                                  \
        .pokemonScale = 259,                                                            \
        .pokemonOffset = 1,                                                             \
        .trainerScale = 296,                                                            \
        .trainerOffset = 1,                                                             \
        LEARNSETS(Enamorus),                                                            \
        .formSpeciesIdTable = sEnamorusFormSpeciesIdTable

    [SPECIES_ENAMORUS_INCARNATE] =
    {
        ENAMORUS_MISC_INFO,
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 106,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_CONTRARY },
        .cryId = CRY_ENAMORUS_INCARNATE,
        .description = COMPOUND_STRING("Its arrival brings an end to the winter.\n""According to legend, this Pokémon's love\n""gives rise to the budding of fresh life\n""across the land."),
        FRONT_PIC(EnamorusIncarnate, 64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_EnamorusIncarnate,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 7,
        BACK_PIC(EnamorusIncarnate, 64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(EnamorusIncarnate),
        ICON(EnamorusIncarnate, 1),
        //.footprint = gMonFootprint_EnamorusIncarnate,
    },

    [SPECIES_ENAMORUS_THERIAN] =
    {
        ENAMORUS_MISC_INFO,
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 110,
        .baseSpeed     = 46,
        .baseSpAttack  = 135,
        .baseSpDefense = 100,
        .abilities = { ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_NONE },
        .cryId = CRY_ENAMORUS_THERIAN,
        .description = COMPOUND_STRING("From the clouds, it descends upon\n""those who treat any form of life\n""with disrespect and metes out\n""wrathful, ruthless punishment."),
        FRONT_PIC(EnamorusTherian, 64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_EnamorusTherian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(EnamorusTherian, 64, 64),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        PALETTES(EnamorusTherian),
        ICON(EnamorusTherian, 1),
        //.footprint = gMonFootprint_Enamorus,
    },
#endif //P_FAMILY_ENAMORUS

#ifdef __INTELLISENSE__
};
#endif