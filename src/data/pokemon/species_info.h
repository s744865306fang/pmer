#include "constants/abilities.h"

// Shared Pokédex entries
const u8 gPichuPokedexText[] = _("脸颊上的电囊还很小，\n如果囊里的电太多了，\n就会漏出来电到自己.");

const u8 gPikachuPokedexText[] = _("皮卡丘们把尾巴贴在一起\n交换电流，其实\n是在互相打招呼.");

const u8 gUnownPokedexText[] = _("身体很薄，会一直贴\n在墙上.它的外形\n好像有着某种含义.");

const u8 gDeoxysNormalPokedexText[] = _("附着在陨石上的\n宇宙病毒的DNA\n变异后生成的宝可梦.");

const u8 gArceusPokedexText[] = _("在神话里，\n它被描述为宇宙尚未存在时，\n就诞生的最早的宝可梦.");

const u8 gGenesectPokedexText[] = _("3亿年前就存在的宝可梦.\n被等离子队改造，\n背上安装了炮台.");

const u8 gGreninjaPokedexText[] = _("像忍者般神出鬼没.\n以敏捷的动作玩弄对手，\n再用水之手里剑将对方劈开.");

const u8 gFurfrouPokedexText[] = _("如果置之不理，\n体毛会不断地长长，\n但只允许信赖的人修剪.");

const u8 gXerneasPokedexText[] = _("据说，当头上的角闪着\n七色光时，\n会分享永恒的生命.");

const u8 gZygarde50PokedexText[] = _("被认为监视着生态系统.\n有传言，\n它蕴藏着更为强大的力量.");

const u8 gZygarde10PokedexText[] = _("This is Zygarde when about 10% of\n""its pieces have been assembled. It\n""leaps at its opponent's chest and\n""sinks its sharp fangs into them.");

const u8 gRockruffPokedexText[] = _("把脖子上的岩石蹭过来是\n感情深厚的证明.\n但是岩石很锋利，相当疼.");

const u8 gSilvallyNormalPokedexText[] = _("这个名字是由第一个让\n“属性-空”进化成这个\n样子的少年来取的.");

const u8 gSilvallyMemoryPokedexText[] = _("Upon awakening, its RKS System is\n""activated. By employing specific\n""memories, this Pokémon can adapt its\n""type to confound its enemies.");

const u8 gMiniorMeteorPokedexText[] = _("外壳非常坚固，但落到地上\n的冲击会让它碎成细屑.");

const u8 gMiniorCorePokedexText[] = _("If its core stays exposed, it will\n""soon die off. It's possible that it\n""may survive if it's put into a Poké Ball\n""quickly enough.");

const u8 gAlcremieVanillaCreamPokedexText[] = _("它会把自己用鲜奶油\n装饰过的树果送给\n自己信任的训练家.");

const u8 gAlcremieRubyCreamPokedexText[] = _("The moment it evolved, it took on a\n""sweet and tart flavor. This is\n""because of the way its cells\n""spontaneously shifted during evolution.");

const u8 gAlcremieMatchaCreamPokedexText[] = _("The moment it evolved, it took on\n""an aromatic flavor. This is because\n""of the way its cells spontaneously\n""shifted during evolution.");

const u8 gAlcremieMintCreamPokedexText[] = _("The moment it evolved, it took on a\n""refreshing flavor. This is because\n""of the way its cells spontaneously\n""shifted during evolution.");

const u8 gAlcremieLemonCreamPokedexText[] = _("The moment it evolved, it took on a\n""sour flavor. This is because of the\n""way its cells spontaneously shifted\n""during evolution.");

const u8 gAlcremieSaltedCreamPokedexText[] = _("The moment it evolved, it took on a\n""salty flavor. This is because of the\n""way its cells spontaneously shifted\n""during evolution.");

const u8 gAlcremieRubySwirlPokedexText[] = _("The moment it evolved, it took on a\n""mixed flavor. This is because of the\n""way its cells spontaneously shifted\n""during evolution.");

const u8 gAlcremieCaramelSwirlPokedexText[] = _("The moment it evolved, it took on a\n""bitter flavor. This is because of\n""the way its cells spontaneously\n""shifted during evolution.");

const u8 gAlcremieRainbowSwirlPokedexText[] = _("The moment it evolved, it took on a\n""complex flavor. This is because of\n""the way its cells spontaneously\n""shifted during evolution.");

const u8 gToxtricityGigantamaxPokedexText[] = _("Out of control after its own\n""poison penetrated its brain, it tears\n""across the land in a rampage,\n""contaminating the earth with toxic sweat.");

const u8 gOgerponTealMaskPokedexText[] = _("This Pokémon's type changes based on\n""which mask it's wearing. It confounds\n""its enemies with nimble movements\n""and kicks.");

const u8 gOgerponWellspringMaskPokedexText[] = _("This form excels in both attack\n""and defense. It ceaselessly unleashes\n""moves like a spring gushes water.");

const u8 gOgerponHearthflameMaskPokedexText[] = _("This form is the most aggressive,\n""bombarding enemies with the\n""intensity of flames blazing within a hearth.");

const u8 gOgerponCornerstoneMaskPokedexText[] = _("In this form, it draws on the power\n""of stone. Its body is rock-solid,\n""protecting it from all manner of\n""attacks.");

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }

#define FRONT_PIC(sprite, width, height)                    \
        .frontPic = gMonFrontPic_## sprite,                 \
        .frontPicSize = MON_COORDS_SIZE(width, height)

#define FRONT_PIC_FEMALE(sprite, width, height)             \
        .frontPicFemale = gMonFrontPic_## sprite##F,        \
        .frontPicSizeFemale = MON_COORDS_SIZE(width, height)

#define BACK_PIC(sprite, width, height)                     \
        .backPic = gMonBackPic_## sprite,                   \
        .backPicSize = MON_COORDS_SIZE(width, height)

#define BACK_PIC_FEMALE(sprite, width, height)              \
        .backPicFemale = gMonBackPic_## sprite##F,          \
        .backPicSizeFemale = MON_COORDS_SIZE(width, height)

#define PALETTES(pal)                                       \
        .palette = gMonPalette_## pal,                      \
        .shinyPalette = gMonShinyPalette_## pal

#define PALETTE_FEMALE(pal)                                 \
        .paletteFemale = gMonPalette_## pal##F,             \
        .shinyPaletteFemale = gMonShinyPalette_## pal##F

#define ICON(sprite, palId)                                 \
        .iconSprite = gMonIcon_## sprite,                   \
        .iconPalIndex = palId

#define ICON_FEMALE(sprite, palId)                          \
        .iconSpriteFemale = gMonIcon_## sprite##F,          \
        .iconPalIndexFemale = palId

#define LEARNSETS(learn)                                    \
        .levelUpLearnset = s ## learn##LevelUpLearnset,     \
        .teachableLearnset = s ## learn##TeachableLearnset

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("未知"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CircledQuestionMark, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_None,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CircledQuestionMark, 40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        PALETTES(CircledQuestionMark),
        ICON(QuestionMark, 0),
        LEARNSETS(None),
    },

    #include "species_info/gen_1.h"
    #include "species_info/gen_2.h"
    #include "species_info/gen_3.h"
    #include "species_info/gen_4.h"
    #include "species_info/gen_5.h"
    #include "species_info/gen_6.h"
    #include "species_info/gen_7.h"
    #include "species_info/gen_8.h"
    #include "species_info/gen_9.h"

    [SPECIES_EGG] =
    {
        FRONT_PIC(Egg, 24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        ICON(Egg, 1),
    },

    /* You may add any custom species below this point based on the following structure: */

    /*
    [SPECIES_NONE] =
    {
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = { TYPE_MYSTERY, TYPE_MYSTERY },
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("未知"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CircledQuestionMark, 64, 64),
        //FRONT_PIC_FEMALE(CircledQuestionMark, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 0,
        BACK_PIC(CircledQuestionMark, 64, 64),
        //BACK_PIC_FEMALE(CircledQuestionMark, 64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        PALETTES(CircledQuestionMark),
        //PALETTE_FEMALE(CircledQuestionMark),
        ICON(QuestionMark, 0),
        //ICON_FEMALE(QuestionMark, 1),
        //.footprint = gMonFootprint_None,
        LEARNSETS(None),
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        .allPerfectIVs = TRUE,
    },
    */
};
