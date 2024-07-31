#include "constants/moves.h"

#if I_USE_EVO_HELD_ITEMS_FROM_BAG == TRUE
    #define EVO_HELD_ITEM_TYPE ITEM_USE_PARTY_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_EvolutionStone
#else
    #define EVO_HELD_ITEM_TYPE ITEM_USE_BAG_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_CannotUse
#endif

#define GEM_BOOST_PARAM ((I_GEM_BOOST_POWER >= GEN_6) ? 30 : 50)
#define TYPE_BOOST_PARAM ((I_TYPE_BOOST_POWER >= GEN_4) ? 20 : 10) // For non Pokémon-specific type-boosting held items.
#define POWER_ITEM_BOOST ((I_POWER_ITEM_BOOST >= GEN_7) ? 8 : 4)

#define X_ITEM_STAGES ((B_X_ITEMS_BUFF >= GEN_7) ? 2 : 1)

#define TREASURE_FACTOR ((I_SELL_VALUE_FRACTION >= GEN_9) ? 2 : 1)

// Shared Item Description entries

static const u8 sFullHealDesc[] = _("能治愈1只宝可梦\n的所有异常状态。");

static const u8 sPokeDollDesc[] = _("携带后与野生宝可\n梦的战斗中绝对可\n以逃走。.");

static const u8 sMaxReviveDesc[] = _("能让1只濒死的宝\n可梦回复所有HP\n。");

static const u8 sHealthFeatherDesc[] = _("能稍微提高宝可梦\n的HP的基础点数\n。");

static const u8 sMuscleFeatherDesc[] = _("能稍微提高宝可梦\n的攻击的基础点数\n。");

static const u8 sResistFeatherDesc[] = _("能稍微提高宝可梦\n的防御的基础点数\n。");

static const u8 sGeniusFeatherDesc[] = _("能稍微提高宝可梦\n的特攻的基础点数\n。");

static const u8 sCleverFeatherDesc[] = _("能稍微提高宝可梦\n的特防的基础点数\n。");

static const u8 sSwiftFeatherDesc[] = _("能稍微提高宝可梦\n的速度的基础点数\n。");

static const u8 sBigMushroomDesc[] = _("在一些爱好者中有\n着非常高的人气。");

static const u8 sShardsDesc[] = _("能够卖掉的古代物\n品。");

static const u8 sRootFossilDesc[] = _("很久以前古代宝可\n梦的化石。好像是\n根的一部分。");

static const u8 sFossilizedFishDesc[] = _("远古时代宝可梦化\n石残片。本来面目\n仍是未解之谜。");

static const u8 sBeadMailDesc[] = _("一张能显示持有者\n的信纸，可以让宝\n可梦携带");

static const u8 sEvolutionStoneDesc[] = _("能让某些特定宝可\n梦进化的神奇石头\n。");

static const u8 sNectarDesc[] = _("可以改变特定宝可\n梦的样子的花蜜。");

static const u8 sCharizarditeDesc[] = _("让喷火龙携带后，\n在战斗时就能超级\n进化的超级石。");

static const u8 sMewtwoniteDesc[] = _("让超梦携带后，在\n战斗时就能超级进\n化的超级石。");

static const u8 sSeaIncenseDesc[] = _("有着神奇香气的薰\n香。");

static const u8 sOddIncenseDesc[] = _("有着神奇香气的薰\n香。");

static const u8 sRockIncenseDesc[] = _("有着神奇香气的薰\n香。");

static const u8 sFullIncenseDesc[] = _("有着神奇香气的薰\n香。");

static const u8 sRoseIncenseDesc[] = _("有着神奇香气的薰\n香。");

static const u8 sLuckIncenseDesc[] = _("有着神奇香气的薰\n香。");

static const u8 sPureIncenseDesc[] = _("有着神奇香气的薰\n香。");

static const u8 sKingsRockDesc[] = _("在造成伤害时，有\n时会让对手畏缩。");

static const u8 sFigyBerryDesc[] = _("携带后危机时回复\nHP。若讨厌这味\n道会混乱。");

static const u8 sQuestionMarksDesc[] = _("?????");

static const u8 sKeyToRoomDesc[] = _("进入弃船的房间时\n所需的钥匙。");

static const u8 sTeraShardDesc[] = _("破碎掉的太晶宝石\n有极低概率会结晶\n成此物。");

static const u8 sGenericMulchDesc[] = _("培育树果时的肥料\n。但完全不适合丰\n缘的土壤。");

const struct Item gItemsInfo[] =
{
    [ITEM_NONE] =
    {
        .name = _("????????"),
        .price = 0,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Poké Balls

    [ITEM_POKE_BALL] =
    {
        .name = _("精灵球"),
        .price = 200,
        .description = COMPOUND_STRING(
            "用于投向野生宝可\n梦并将其捕捉的球\n。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_POKE_BALL - FIRST_BALL,
    },

    [ITEM_GREAT_BALL] =
    {
        .name = _("超级球"),
        .price = 600,
        .description = COMPOUND_STRING(
            "比精灵球更容易捉\n到宝可梦的，性能\n还算不错的球。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_GREAT_BALL - FIRST_BALL,
    },

    [ITEM_ULTRA_BALL] =
    {
        .name = _("高级球"),
        .price = (I_PRICE >= GEN_7) ? 800 : 1200,
        .description = COMPOUND_STRING(
            "比超级球更容易捉\n到宝可梦的，性能\n非常不错的球。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_ULTRA_BALL - FIRST_BALL,
    },

    [ITEM_MASTER_BALL] =
    {
        .name = _("大师球"),
        .price = 0,
        .description = COMPOUND_STRING(
            "必定能捉到野生宝\n可梦的，性能最好\n的球。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_MASTER_BALL - FIRST_BALL,
    },

    [ITEM_PREMIER_BALL] =
    {
        .name = _("纪念球"),
        .price = (I_PRICE >= GEN_7) ? 20 : 200,
        .description = COMPOUND_STRING(
            "有点珍贵的球。特\n制出来的某种纪念\n品。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_PREMIER_BALL - FIRST_BALL,
    },

    [ITEM_HEAL_BALL] =
    {
        .name = _("治愈球"),
        .price = 300,
        .description = COMPOUND_STRING(
            "有点温柔的球。能\n回复捉到宝可梦的\nHP并治愈异常。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_HEAL_BALL - FIRST_BALL,
    },

    [ITEM_NET_BALL] =
    {
        .name = _("捕网球"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。能容易地捕捉水\n或虫属性宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_NET_BALL - FIRST_BALL,
    },

    [ITEM_NEST_BALL] =
    {
        .name = _("巢穴球"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。野生宝可梦越弱\n越容易捕捉。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_NEST_BALL - FIRST_BALL,
    },

    [ITEM_DIVE_BALL] =
    {
        .name = _("潜水球"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。容易捕捉生活在\n水世界的宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_DIVE_BALL - FIRST_BALL,
    },

    [ITEM_DUSK_BALL] =
    {
        .name = _("黑暗球"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。容易在夜晚或洞\n窟等捕捉宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_DUSK_BALL - FIRST_BALL,
    },

    [ITEM_TIMER_BALL] =
    {
        .name = _("计时球"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。回合数越多会越\n容易捕捉。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_TIMER_BALL - FIRST_BALL,
    },

    [ITEM_QUICK_BALL] =
    {
        .name = _("先机球"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。战斗开始使用容\n易捉到宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_QUICK_BALL - FIRST_BALL,
    },

    [ITEM_REPEAT_BALL] =
    {
        .name = _("重复球"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。容易捕捉曾捉到\n过的宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_REPEAT_BALL - FIRST_BALL,
    },

    [ITEM_LUXURY_BALL] =
    {
        .name = _("豪华球"),
        .price = (I_PRICE >= GEN_8) ? 3000 : 1000,
        .description = COMPOUND_STRING(
            "住着十分惬意的球\n。捉到宝可梦变得\n容易亲密。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_LUXURY_BALL - FIRST_BALL,
    },

    [ITEM_LEVEL_BALL] =
    {
        .name = _("等级球"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。宝可梦等级越低\n越容易捕捉。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_LEVEL_BALL - FIRST_BALL,
    },

    [ITEM_LURE_BALL] =
    {
        .name = _("诱饵球"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。容易捕捉用钓竿\n钓上来的宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_LURE_BALL - FIRST_BALL,
    },

    [ITEM_MOON_BALL] =
    {
        .name = _("月亮球"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。容易捕捉用月之\n石进化的宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_MOON_BALL - FIRST_BALL,
    },

    [ITEM_FRIEND_BALL] =
    {
        .name = _("友友球"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。捉到宝可梦会立\n刻变得亲密起来。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_FRIEND_BALL - FIRST_BALL,
    },

    [ITEM_LOVE_BALL] =
    {
        .name = _("甜蜜球"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。容易捕捉性别不\n同的宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_LOVE_BALL - FIRST_BALL,
    },

    [ITEM_FAST_BALL] =
    {
        .name = _("速度球"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。容易捕捉速度很\n快的宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_FAST_BALL - FIRST_BALL,
    },

    [ITEM_HEAVY_BALL] =
    {
        .name = _("沉重球"),
        .price = (I_PRICE >= GEN_7) ? 0 : 300,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。容易捕捉沉重的\n宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_HEAVY_BALL - FIRST_BALL,
    },

    [ITEM_DREAM_BALL] =
    {
        .name = _("梦境球"),
        .price = 0,
        .description = COMPOUND_STRING(
            "有点与众不同的球\n。容易捕捉睡眠状\n态的宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_DREAM_BALL - FIRST_BALL,
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = _("狩猎球"),
        .price = 0,
        .description = COMPOUND_STRING(
            "曾在狩猎地带以及\n大湿地被使用。是\n一种特殊的球。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_SAFARI_BALL - FIRST_BALL,
    },

    [ITEM_SPORT_BALL] =
    {
        .name = _("竞赛球"),
        .price = (I_PRICE < GEN_3 || I_PRICE >= GEN_9) ? 0 : 300,
        .description = COMPOUND_STRING(
            "曾在城都地区的捕\n虫大赛上使用的特\n殊的球。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_SPORT_BALL - FIRST_BALL,
    },

    [ITEM_PARK_BALL] =
    {
        .name = _("公园球"),
        .price = 0,
        .description = COMPOUND_STRING(
            "在伙伴公园里使用\n的特殊的球。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_PARK_BALL - FIRST_BALL,
    },

    [ITEM_BEAST_BALL] =
    {
        .name = _("究极球"),
        .price = 0,
        .description = COMPOUND_STRING(
            "为究极异兽制作的\n特殊精灵球。很难\n捕捉其他宝可梦。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_BEAST_BALL - FIRST_BALL,
    },

    [ITEM_CHERISH_BALL] =
    {
        .name = _("贵重球"),
        .price = 0,
        .description = COMPOUND_STRING(
            "相当珍贵的球。特\n制出来的某种纪念\n品。"),
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_USE_BAG_MENU,
        .battleUsage = EFFECT_ITEM_THROW_BALL,
        .secondaryId = ITEM_CHERISH_BALL - FIRST_BALL,
    },

// Medicine

    [ITEM_POTION] =
    {
        .name = _("伤药"),
        .price = (I_PRICE >= GEN_7) ? 200 : 300,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "喷雾式伤药。能让\n宝可梦回复20H\nP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Potion,
        .flingPower = 30,
    },

    [ITEM_SUPER_POTION] =
    {
        .name = _("好伤药"),
        .price = 700,
        .holdEffectParam = 60,
        .description = COMPOUND_STRING(
            "喷雾式伤药。能让\n宝可梦回复60H\nP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SuperPotion,
        .flingPower = 30,
    },

    [ITEM_HYPER_POTION] =
    {
        .name = _("厉害伤药"),
        .price = (I_PRICE >= GEN_2 || I_PRICE <= GEN_6) ? 1200 : 1500,
        .holdEffectParam = 120,
        .description = COMPOUND_STRING(
            "喷雾式伤药。能让\n宝可梦回复120\nHP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_HyperPotion,
        .flingPower = 30,
    },

    [ITEM_MAX_POTION] =
    {
        .name = _("全满药"),
        .price = 2500,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "喷雾式伤药。能让\n宝可梦回复所有H\nP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_MaxPotion,
        .flingPower = 30,
    },

    [ITEM_FULL_RESTORE] =
    {
        .name = _("全复药"),
        .price = 3000,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "能回复宝可梦的所\n有HP并治愈所有\n异常状态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_HEAL_AND_CURE_STATUS,
        .effect = gItemEffect_FullRestore,
        .flingPower = 30,
    },

    [ITEM_REVIVE] =
    {
        .name = _("活力碎片"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 1500,
        .description = COMPOUND_STRING(
            "能让1只陷入濒死\n的宝可梦复活，并\n回复一半HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_Revive,
        .flingPower = 30,
    },

    [ITEM_MAX_REVIVE] =
    {
        .name = _("活力块"),
        .price = 4000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_MaxRevive,
        .flingPower = 30,
    },

    [ITEM_FRESH_WATER] =
    {
        .name = _("美味之水"),
        .price = 200,
        .holdEffectParam = 30,
        .description = COMPOUND_STRING(
            "富含矿物质的水。\n能让宝可梦回复3\n0HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_FreshWater,
        .flingPower = 30,
    },

    [ITEM_SODA_POP] =
    {
        .name = _("劲爽汽水"),
        .price = 300,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "翻腾着气泡的汽水\n。能让宝可梦回复\n50HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SodaPop,
        .flingPower = 30,
    },

    [ITEM_LEMONADE] =
    {
        .name = _("果汁牛奶"),
        .price = (I_PRICE >= GEN_7) ? 400 : 350,
        .holdEffectParam = 70,
        .description = COMPOUND_STRING(
            "非常香甜的牛奶。\n能让宝可梦回复7\n0HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Lemonade,
        .flingPower = 30,
    },

    [ITEM_MOOMOO_MILK] =
    {
        .name = _("哞哞鲜奶"),
        .price = (I_PRICE >= GEN_7) ? 600 : 500,
        .holdEffectParam = 100,
        .description = COMPOUND_STRING(
            "营养百分百的牛奶\n。能让宝可梦回复\n100HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_MoomooMilk,
        .flingPower = 30,
    },

    [ITEM_ENERGY_POWDER] =
    {
        .name = _("元气粉"),
        .price = 500,
        .description = COMPOUND_STRING(
            "非常苦的药粉。能\n让宝可梦回复60\nHP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_EnergyPowder,
        .flingPower = 30,
    },

    [ITEM_ENERGY_ROOT] =
    {
        .name = _("元气根"),
        .price = (I_PRICE >= GEN_7) ? 1200 : 800,
        .description = COMPOUND_STRING(
            "非常苦的根。能让\n宝可梦回复120\nHP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_EnergyRoot,
        .flingPower = 30,
    },

    [ITEM_HEAL_POWDER] =
    {
        .name = _("万能粉"),
        .price = (I_PRICE >= GEN_7) ? 300 : 450,
        .description = COMPOUND_STRING(
            "非常苦的药粉。能\n治愈宝可梦的所有\n异常状态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_HealPowder,
        .flingPower = 30,
    },

    [ITEM_REVIVAL_HERB] =
    {
        .name = _("复活草"),
        .price = 2800,
        .description = COMPOUND_STRING(
            "非常苦的药草。能\n让1只濒死的宝可\n梦回复所有HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_RevivalHerb,
        .flingPower = 30,
    },

    [ITEM_ANTIDOTE] =
    {
        .name = _("解毒药"),
        .price = (I_PRICE >= GEN_7) ? 200 : 100,
        .description = COMPOUND_STRING(
            "喷雾式药水。能治\n愈宝可梦的中毒状\n态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Antidote,
        .flingPower = 30,
    },

    [ITEM_PARALYZE_HEAL] =
    {
        .name = _("解麻药"),
        .price = (I_PRICE == GEN_7) ? 300 : 200,
        .description = COMPOUND_STRING(
            "喷雾式药水。能治\n愈宝可梦的麻痹状\n态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_ParalyzeHeal,
        .flingPower = 30,
    },

    [ITEM_BURN_HEAL] =
    {
        .name = _("灼伤药"),
        .price = (I_PRICE == GEN_7) ? 300 : ((I_PRICE <= GEN_7) ? 250 : 200),
        .description = COMPOUND_STRING(
            "喷雾式药水。能治\n愈宝可梦的灼伤状\n态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_BurnHeal,
        .flingPower = 30,
    },

    [ITEM_ICE_HEAL] =
    {
        .name = _("解冻药"),
        .price = (I_PRICE == GEN_7) ? 100 : ((I_PRICE <= GEN_7) ? 250 : 200),
        .description = COMPOUND_STRING(
            "喷雾式药水。能治\n愈宝可梦的冰冻状\n态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_IceHeal,
        .flingPower = 30,
    },

    [ITEM_AWAKENING] =
    {
        .name = _("解眠药"),
        .price = (I_PRICE >= GEN_2 && I_PRICE <= GEN_6) ? 250 : ((I_PRICE == GEN_7) ? 100 : 200),
        .description = COMPOUND_STRING(
            "喷雾式药水。能治\n愈宝可梦的睡眠状\n态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 30,
    },

    [ITEM_FULL_HEAL] =
    {
        .name = _("万灵药"),
        .price = (I_PRICE >= GEN_7) ? 400 : 600,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
    },

    [ITEM_ETHER] =
    {
        .name = _("PP单项小补剂"),
        .price = (I_PRICE >= GEN_2) ? 1200 : 1,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "能让宝可梦学会的\n其中1个招式回复\n10PP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_Ether,
        .flingPower = 30,
    },

    [ITEM_MAX_ETHER] =
    {
        .name = _("PP单项全补剂"),
        .price = (I_PRICE >= GEN_2) ? 2000 : 1,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "能让宝可梦学会的\n其中1个招式回复\n所有PP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_MaxEther,
        .flingPower = 30,
    },

    [ITEM_ELIXIR] =
    {
        .name = _("PP多项小补剂"),
        .price = (I_PRICE >= GEN_2) ? 3000 : 1,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "能让宝可梦学会的\n4个招式各回复1\n0PP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_Elixir,
        .flingPower = 30,
    },

    [ITEM_MAX_ELIXIR] =
    {
        .name = _("PP多项全补剂"),
        .price = (I_PRICE >= GEN_2) ? 4500 : 1,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "能让宝可梦学会的\n4个招式回复所有\nPP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_MaxElixir,
        .flingPower = 30,
    },

    [ITEM_BERRY_JUICE] =
    {
        .name = _("树果汁"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "100%树果果汁\n。能让宝可梦回复\n20HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Potion,
        .flingPower = 30,
    },

    [ITEM_SACRED_ASH] =
    {
        .name = _("圣灰"),
        .price = (I_PRICE >= GEN_7) ? 50000 : 200,
        .description = COMPOUND_STRING(
            "能让陷入濒死的全\n部宝可梦回复所有\nHP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
        .effect = gItemEffect_SacredAsh,
        .flingPower = 30,
    },

    [ITEM_SWEET_HEART] =
    {
        .name = _("心形甜点"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 100,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "非常甜腻的巧克力\n。能让宝可梦回复\n20HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Potion,
        .flingPower = 30,
    },

    [ITEM_MAX_HONEY] =
    {
        .name = _("极巨甜蜜"),
        .price = 8000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_MaxRevive,
        .flingPower = 30,
    },

// Regional Specialties

    [ITEM_PEWTER_CRUNCHIES] =
    {
        .name = _("深灰米果"),
        .price = 250,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
    },

    [ITEM_RAGE_CANDY_BAR] =
    {
        .name = _("愤怒馒头"),
        .price = (I_PRICE >= GEN_7) ? 350 : 300,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
    },

    [ITEM_LAVA_COOKIE] =
    {
        .name = _("釜炎仙贝"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = COMPOUND_STRING(
            "釜炎特产的仙贝。\n能治愈宝可梦的所\n有异常状态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
    },

    [ITEM_OLD_GATEAU] =
    {
        .name = _("森之羊羹"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
    },

    [ITEM_CASTELIACONE] =
    {
        .name = _("飞云冰淇淋"),
        .price = (I_PRICE >= GEN_7) ? 350 : 100,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
    },

    [ITEM_LUMIOSE_GALETTE] =
    {
        .name = _("密阿雷格雷饼"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
    },

    [ITEM_SHALOUR_SABLE] =
    {
        .name = _("娑罗沙布蕾"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
    },

    [ITEM_BIG_MALASADA] =
    {
        .name = _("大马拉萨达"),
        .price = 350,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
    },

// Vitamins

    [ITEM_HP_UP] =
    {
        .name = _("HP增强剂"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "宝可梦的营养饮料\n。能提高宝可梦的\nHP的基础点数。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_HPUp,
        .flingPower = 30,
    },

    [ITEM_PROTEIN] =
    {
        .name = _("攻击增强剂"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "宝可梦的营养饮料\n。能提高宝可梦的\n攻击的基础点数。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Protein,
        .flingPower = 30,
    },

    [ITEM_IRON] =
    {
        .name = _("防御增强剂"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "宝可梦的营养饮料\n。能提高宝可梦的\n防御的基础点数。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Iron,
        .flingPower = 30,
    },

    [ITEM_CALCIUM] =
    {
        .name = _("特攻增强剂"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "宝可梦的营养饮料\n。能提高宝可梦的\n特攻的基础点数。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Calcium,
        .flingPower = 30,
    },

    [ITEM_ZINC] =
    {
        .name = _("特防增强剂"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "宝可梦的营养饮料\n。能提高宝可梦的\n特防的基础点数。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Zinc,
        .flingPower = 30,
    },

    [ITEM_CARBOS] =
    {
        .name = _("速度增强剂"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "宝可梦的营养饮料\n。能提高宝可梦的\n速度的基础点数。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_Carbos,
        .flingPower = 30,
    },

    [ITEM_PP_UP] =
    {
        .name = _("PP提升剂"),
        .price = (I_PRICE == GEN_1) ? 1 : ((I_PRICE >= GEN_7) ? 10000 : 9800),
        .description = COMPOUND_STRING(
            "能让宝可梦学会的\n其中1个招式PP\n最大值少量提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
        .effect = gItemEffect_PPUp,
        .flingPower = 30,
    },

    [ITEM_PP_MAX] =
    {
        .name = _("PP极限提升剂"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 9800,
        .description = COMPOUND_STRING(
            "能将宝可梦学会的\n其中1个招式PP\n最大值提至最高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
        .effect = gItemEffect_PPMax,
        .flingPower = 30,
    },

// EV Feathers

    [ITEM_HEALTH_FEATHER] =
    {
        .name = _("体力之羽"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sHealthFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_HpFeather,
        .flingPower = 20,
    },

    [ITEM_MUSCLE_FEATHER] =
    {
        .name = _("肌力之羽"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sMuscleFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_AtkFeather,
        .flingPower = 20,
    },

    [ITEM_RESIST_FEATHER] =
    {
        .name = _("抵抗之羽"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sResistFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_DefFeather,
        .flingPower = 20,
    },

    [ITEM_GENIUS_FEATHER] =
    {
        .name = _("智力之羽"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sGeniusFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpatkFeather,
        .flingPower = 20,
    },

    [ITEM_CLEVER_FEATHER] =
    {
        .name = _("精神之羽"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sCleverFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpdefFeather,
        .flingPower = 20,
    },

    [ITEM_SWIFT_FEATHER] =
    {
        .name = _("瞬发之羽"),
        .price = (I_PRICE >= GEN_7) ? 300 : 3000,
        .description = sSwiftFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpeedFeather,
        .flingPower = 20,
    },

// Ability Modifiers

    [ITEM_ABILITY_CAPSULE] =
    {
        .name = _("特性胶囊"),
        .price = (I_PRICE < GEN_7) ? 1000 : ((I_PRICE < GEN_9) ? 10000 : 100000),
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "能让有着2种特性\n的宝可梦特性变为\n另一种的胶囊。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityCapsule,
    },

    [ITEM_ABILITY_PATCH] =
    {
        .name = _("特性膏药"),
        .price = (I_PRICE >= GEN_9) ? 250000 : 20,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "可以改变宝可梦特\n性的膏药。其特性\n会变为稀有特性。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityPatch,
    },

// Mints

    [ITEM_LONELY_MINT] =
    {
        .name = _("怕寂寞薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，攻\n击会易于提高，而\n防御则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_LONELY,
        .flingPower = 10,
    },

    [ITEM_ADAMANT_MINT] =
    {
        .name = _("Adamant Mint"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，攻\n击会易于提高，而\n特攻则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_ADAMANT,
        .flingPower = 10,
    },

    [ITEM_NAUGHTY_MINT] =
    {
        .name = _("顽皮薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，攻\n击容易提高，而特\n防则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_NAUGHTY,
        .flingPower = 10,
    },

    [ITEM_BRAVE_MINT] =
    {
        .name = _("勇敢薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，攻\n击容易提高，而速\n度则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_BRAVE,
        .flingPower = 10,
    },

    [ITEM_BOLD_MINT] =
    {
        .name = _("大胆薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，防\n御容易提高，而攻\n击则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_BOLD,
        .flingPower = 10,
    },

    [ITEM_IMPISH_MINT] =
    {
        .name = _("淘气薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，防\n御容易提高，而特\n攻则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_IMPISH,
        .flingPower = 10,
    },

    [ITEM_LAX_MINT] =
    {
        .name = _("乐天薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，防\n御容易提高，而特\n防则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_LAX,
        .flingPower = 10,
    },

    [ITEM_RELAXED_MINT] =
    {
        .name = _("悠闲薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，防\n御容易提高，而速\n度则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_RELAXED,
        .flingPower = 10,
    },

    [ITEM_MODEST_MINT] =
    {
        .name = _("内敛薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，特\n攻容易提高，而攻\n击则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_MODEST,
        .flingPower = 10,
    },

    [ITEM_MILD_MINT] =
    {
        .name = _("慢吞吞薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，特\n攻容易提高，而防\n御则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_MILD,
        .flingPower = 10,
    },

    [ITEM_RASH_MINT] =
    {
        .name = _("马虎薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，特\n攻容易提高，而特\n防则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_RASH,
        .flingPower = 10,
    },

    [ITEM_QUIET_MINT] =
    {
        .name = _("冷静薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，特\n攻容易提高，而速\n度则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_QUIET,
        .flingPower = 10,
    },

    [ITEM_CALM_MINT] =
    {
        .name = _("温和薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，特\n防容易提高，而攻\n击则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_CALM,
        .flingPower = 10,
    },

    [ITEM_GENTLE_MINT] =
    {
        .name = _("温顺薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，特\n防容易提高，而防\n御则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_GENTLE,
        .flingPower = 10,
    },

    [ITEM_CAREFUL_MINT] =
    {
        .name = _("慎重薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，特\n防容易提高，而特\n攻则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_CAREFUL,
        .flingPower = 10,
    },

    [ITEM_SASSY_MINT] =
    {
        .name = _("自大薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，特\n防容易提高，而速\n度则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_SASSY,
        .flingPower = 10,
    },

    [ITEM_TIMID_MINT] =
    {
        .name = _("胆小薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，速\n度容易提高，而攻\n击则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_TIMID,
        .flingPower = 10,
    },

    [ITEM_HASTY_MINT] =
    {
        .name = _("急躁薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，速\n度容易提高，而防\n御则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_HASTY,
        .flingPower = 10,
    },

    [ITEM_JOLLY_MINT] =
    {
        .name = _("爽朗薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，速\n度容易提高，而特\n攻则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_JOLLY,
        .flingPower = 10,
    },

    [ITEM_NAIVE_MINT] =
    {
        .name = _("天真薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，速\n度容易提高，而特\n防则难以提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_NAIVE,
        .flingPower = 10,
    },

    [ITEM_SERIOUS_MINT] =
    {
        .name = _("认真薄荷"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 20,
        .description = COMPOUND_STRING(
            "宝可梦闻了后，能\n力全方位提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Mint,
        .secondaryId = NATURE_SERIOUS,
        .flingPower = 10,
    },

// Candy

    [ITEM_RARE_CANDY] =
    {
        .name = _("神奇糖果"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 4800,
        .description = COMPOUND_STRING(
            "充满能量的糖果。\n给宝可梦后，等级\n会提高1。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_XS] =
    {
        .name = _("经验糖果XS"),
        .price = 20,
        .holdEffectParam = EXP_100,
        .description = COMPOUND_STRING(
            "充满能量的糖果。\n给宝可梦后，可增\n加一点点经验值。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_S] =
    {
        .name = _("经验糖果S"),
        .price = 240,
        .holdEffectParam = EXP_800,
        .description = COMPOUND_STRING(
            "充满能量的糖果。\n给宝可梦后，可增\n加少许经验值。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_M] =
    {
        .name = _("经验糖果M"),
        .price = 1000,
        .holdEffectParam = EXP_3000,
        .description = COMPOUND_STRING(
            "充满能量的糖果。\n给宝可梦后，可增\n加经验值。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_L] =
    {
        .name = _("经验糖果L"),
        .price = 3000,
        .holdEffectParam = EXP_10000,
        .description = COMPOUND_STRING(
            "充满能量的糖果。\n给宝可梦后，可增\n加许多经验值。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
    },

    [ITEM_EXP_CANDY_XL] =
    {
        .name = _("经验糖果XL"),
        .price = 10000,
        .holdEffectParam = EXP_30000,
        .description = COMPOUND_STRING(
            "充满能量的糖果。\n给宝可梦后，可增\n加大量经验值。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
        .effect = gItemEffect_RareCandy,
        .flingPower = 30,
    },

    [ITEM_DYNAMAX_CANDY] =
    {
        .name = _("极巨糖果"),
        .price = 0,
        .description = COMPOUND_STRING(
            "充满能量的糖果。\n给宝可梦后，极巨\n化等级能提高1。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_DynamaxCandy,
        .flingPower = 30,
    },

// Medicinal Flutes

    [ITEM_BLUE_FLUTE] =
    {
        .name = _("蓝色玻璃哨"),
        .price = (I_PRICE >= GEN_7) ? 20 : 100,
        .description = COMPOUND_STRING(
            "以蓝色玻璃制成的\n哨子。可以治愈睡\n眠状态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 30,
    },

    [ITEM_YELLOW_FLUTE] =
    {
        .name = _("黄色玻璃哨"),
        .price = (I_PRICE >= GEN_7) ? 20 : 300,
        .description = COMPOUND_STRING(
            "以黄色玻璃制成的\n哨子。可以治愈混\n乱状态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_YellowFlute,
        .flingPower = 30,
    },

    [ITEM_RED_FLUTE] =
    {
        .name = _("红色玻璃哨"),
        .price = (I_PRICE >= GEN_7) ? 20 : 200,
        .description = COMPOUND_STRING(
            "以红色玻璃制成的\n哨子。可以治愈着\n迷状态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_RedFlute,
        .flingPower = 30,
    },

// Encounter-modifying Flutes

    [ITEM_BLACK_FLUTE] =
    {
        .name = _("黑色玻璃哨"),
        .price = (I_PRICE >= GEN_7) ? 20 : 400,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "以黑色玻璃制成的\n哨子。更容易遇到\n强大的宝可梦。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .flingPower = 30,
    },

    [ITEM_WHITE_FLUTE] =
    {
        .name = _("白色玻璃哨"),
        .price = (I_PRICE >= GEN_7) ? 20 : 500,
        .holdEffectParam = 150,
        .description = COMPOUND_STRING(
            "以白色玻璃制成的\n哨子。更容易遇到\n弱小的宝可梦。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .flingPower = 30,
    },

// Encounter Modifiers

    [ITEM_REPEL] =
    {
        .name = _("除虫喷雾"),
        .price = (I_PRICE >= GEN_7) ? 400 : 350,
        .holdEffectParam = 100,
        .description = COMPOUND_STRING(
            "使用后一段时间内\n，弱小的野生宝可\n梦将不会出现。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
    },

    [ITEM_SUPER_REPEL] =
    {
        .name = _("白银喷雾"),
        .price = (I_PRICE >= GEN_7) ? 700 : 500,
        .holdEffectParam = 200,
        .description = COMPOUND_STRING(
            "弱小的野生宝可梦\n将不会出现。效果\n比除虫喷雾持久。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
    },

    [ITEM_MAX_REPEL] =
    {
        .name = _("黄金喷雾"),
        .price = (I_PRICE >= GEN_7) ? 900 : 700,
        .holdEffectParam = 250,
        .description = COMPOUND_STRING(
            "弱小的野生宝可梦\n将不会出现。效果\n比白银喷雾持久。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
    },

    [ITEM_LURE] =
    {
        .name = _("引虫香水"),
        .price = 400,
        .holdEffectParam = 100,
        .description = COMPOUND_STRING(
            "使用该香水后一段\n时间内，稀有宝可\n梦会更容易出现。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
    },

    [ITEM_SUPER_LURE] =
    {
        .name = _("白银香水"),
        .price = 700,
        .holdEffectParam = 200,
        .description = COMPOUND_STRING(
            "使用后稀有宝可梦\n会更易出现。效果\n比引虫香水持久。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
    },

    [ITEM_MAX_LURE] =
    {
        .name = _("黄金香水"),
        .price = 900,
        .holdEffectParam = 250,
        .description = COMPOUND_STRING(
            "使用后稀有宝可梦\n会更易出现。效果\n比白银香水持久。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
    },

    [ITEM_ESCAPE_ROPE] =
    {
        .name = _("离洞绳"),
        .description = COMPOUND_STRING(
            "结实的长绳。可从\n洞窟或迷宫中脱身\n。能够反复使用。"),
        #if I_KEY_ESCAPE_ROPE >= GEN_8
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #else
            .price = (I_PRICE >= GEN_7) ? 1000 : 550,
            .pocket = POCKET_ITEMS,
        #endif
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
        .flingPower = 30,
    },

// X Items

    [ITEM_X_ATTACK] =
    {
        .name = _("力量强化"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 500,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "大幅提高战斗中宝\n可梦攻击的道具。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XAttack,
        .flingPower = 30,
    },

    [ITEM_X_DEFENSE] =
    {
        .name = _("防御强化"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 550,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "大幅提高战斗中宝\n可梦防御的道具。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XDefense,
        .flingPower = 30,
    },

    [ITEM_X_SP_ATK] =
    {
        .name = _("特攻强化"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "大幅提高战斗中宝\n可梦特攻的道具。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XSpecialAttack,
        .flingPower = 30,
    },

    [ITEM_X_SP_DEF] =
    {
        .name = _("特防强化"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "大幅提高战斗中宝\n可梦特防的道具。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XSpecialDefense,
        .flingPower = 30,
    },

    [ITEM_X_SPEED] =
    {
        .name = _("速度强化"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "大幅提高战斗中宝\n可梦速度的道具。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XSpeed,
        .flingPower = 30,
    },

    [ITEM_X_ACCURACY] =
    {
        .name = _("命中强化"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 950,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "大幅提高战斗中宝\n可梦命中的道具。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_STAT,
        .effect = gItemEffect_XAccuracy,
        .flingPower = 30,
    },

    [ITEM_DIRE_HIT] =
    {
        .name = _("要害攻击"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 650,
        .description = COMPOUND_STRING(
            "击中要害的几率会\n大幅提高。只能使\n用1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_SET_FOCUS_ENERGY,
        .effect = gItemEffect_DireHit,
        .flingPower = 30,
    },

    [ITEM_GUARD_SPEC] =
    {
        .name = _("能力防守"),
        .price = (I_PRICE >= GEN_7) ? 1500 : 700,
        .description = COMPOUND_STRING(
            "在战斗中，5回合\n内不让我方能力降\n低的道具。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_SET_MIST,
        .effect = gItemEffect_GuardSpec,
        .flingPower = 30,
    },

    [ITEM_POKE_DOLL] =
    {
        .name = _("皮皮玩偶"),
        .price = (I_PRICE < GEN_7) ? 1000 : ((I_PRICE == GEN_7) ? 100 : 300),
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
    },

    [ITEM_FLUFFY_TAIL] =
    {
        .name = _("向尾喵的尾巴"),
        .price = (I_PRICE >= GEN_7) ? 100 : 1000,
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
    },

    [ITEM_POKE_TOY] =
    {
        .name = _("宝可尾草"),
        .price = (I_PRICE >= GEN_7) ? 100 : 1000,
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
    },

    [ITEM_MAX_MUSHROOMS] =
    {
        .name = _("极巨菇菇"),
        .price = 8000,
        .description = COMPOUND_STRING(
            "有某种神奇力量的\n蘑菇，能改变宝可\n梦极巨化的样子。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_ALL_STATS,
        .flingPower = 30,
    },

// Treasures

    [ITEM_BOTTLE_CAP] =
    {
        .name = _("银色王冠"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 5000,
        .description = COMPOUND_STRING(
            "银色的美丽王冠。\n有些人收到它会很\n高兴。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_GOLD_BOTTLE_CAP] =
    {
        .name = _("金色王冠"),
        .price = (I_PRICE >= GEN_9) ? 60000 : 10000,
        .description = COMPOUND_STRING(
            "金色的美丽王冠。\n有些人收到它会很\n高兴。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_NUGGET] =
    {
        .name = _("金珠"),
        .price = 10000 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "闪着金光，以纯金\n制成的珠子。可以\n在商店高价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BIG_NUGGET] =
    {
        .name = _("巨大金珠"),
        .price = (I_PRICE >= GEN_7) ? (40000 * TREASURE_FACTOR) : 20000,
        .description = COMPOUND_STRING(
            "以纯金制成闪着金\n光的大珠子。可以\n在商店高价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 130,
    },

    [ITEM_TINY_MUSHROOM] =
    {
        .name = _("小蘑菇"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "珍稀的小蘑菇。在\n一些爱好者中有着\n相当高的人气。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BIG_MUSHROOM] =
    {
        .name = _("大蘑菇"),
        .price = 5000 * TREASURE_FACTOR,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BALM_MUSHROOM] =
    {
        .name = _("芳香蘑菇"),
        .price = (I_PRICE >= GEN_7) ? 15000 * TREASURE_FACTOR: 12500,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_PEARL] =
    {
        .name = _("珍珠"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR: 1400,
        .description = COMPOUND_STRING(
            "散发着光泽且有点\n小的珍珠。可以在\n商店低价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BIG_PEARL] =
    {
        .name = _("大珍珠"),
        .price = (I_PRICE >= GEN_7) ? 8000 * TREASURE_FACTOR: 7500,
        .description = COMPOUND_STRING(
            "散发着光泽且相当\n大颗的珍珠。可以\n在商店高价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_PEARL_STRING] =
    {
        .name = _("丸子珍珠"),
        .price = (I_PRICE >= GEN_8) ? 15000 * TREASURE_FACTOR: ((I_PRICE == GEN_7) ? 30000 : 15000),
        .description = COMPOUND_STRING(
            "散发着光泽且非常\n大颗的珍珠。可以\n在商店高价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_STARDUST] =
    {
        .name = _("星星沙子"),
        .price = (I_PRICE >= GEN_7) ? 3000 * TREASURE_FACTOR: 2000,
        .description = COMPOUND_STRING(
            "手感细腻且美丽的\n红色沙子。可以在\n商店低价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_STAR_PIECE] =
    {
        .name = _("星星碎片"),
        .price = (I_PRICE >= GEN_7) ? 12000 * TREASURE_FACTOR: 9800,
        .description = COMPOUND_STRING(
            "闪红光且十分美丽\n的宝石碎片。可以\n在商店高价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_COMET_SHARD] =
    {
        .name = _("彗星碎片"),
        .price = (I_PRICE <= GEN_5) ? 0 : ((I_PRICE == GEN_6) ? 30000 : ((I_PRICE == GEN_7) ? 60000 : 25000 * TREASURE_FACTOR)),
        .description = COMPOUND_STRING(
            "彗星临近时掉落到\n地表的碎片。可以\n在商店高价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SHOAL_SALT] =
    {
        .name = _("浅滩海盐"),
        .price = 20,
        .description = COMPOUND_STRING(
            "在浅滩洞穴这地方\n找到的海盐。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SHOAL_SHELL] =
    {
        .name = _("浅滩贝壳"),
        .price = 20,
        .description = COMPOUND_STRING(
            "在浅滩洞穴这地方\n找到的贝壳。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RED_SHARD] =
    {
        .name = _("红色碎片"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .description = sShardsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BLUE_SHARD] =
    {
        .name = _("蓝色碎片"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .description = sShardsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_YELLOW_SHARD] =
    {
        .name = _("黄色碎片"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .description = sShardsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_GREEN_SHARD] =
    {
        .name = _("绿色碎片"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .description = sShardsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_HEART_SCALE] =
    {
        .name = _("心之鳞片"),
        .price = 100,
        .description = COMPOUND_STRING(
            "有着美丽心形外形\n的珍稀鳞片。有些\n人收到会很高兴。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_HONEY] =
    {
        .name = _("甜甜蜜"),
        .price = (I_PRICE < GEN_5) ? 100 : ((I_PRICE < GEN_8) ? 300 : 900),
        .description = COMPOUND_STRING(
            "宝可梦采集的清甜\n芬芳的花蜜。可在\n商店里廉价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Honey,
        .flingPower = 30,
    },

    [ITEM_RARE_BONE] =
    {
        .name = _("贵重骨头"),
        .price = (I_PRICE >= GEN_7) ? 5000 * TREASURE_FACTOR: 10000,
        .description = COMPOUND_STRING(
            "在考古学上非常贵\n重的骨头。可以在\n商店高价出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_ODD_KEYSTONE] =
    {
        .name = _("楔石"),
        .price = 2100,
        .description = COMPOUND_STRING(
            "保护石之塔的重要\n石头。有时能从石\n头里听到声音。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_PRETTY_FEATHER] =
    {
        .name = _("美丽之羽"),
        .price = (I_PRICE >= GEN_7) ? 1000 * TREASURE_FACTOR: 200,
        .description = COMPOUND_STRING(
            "仅仅只是漂亮，没\n有任何效果，极其\n普通的羽毛。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 20,
    },

    [ITEM_RELIC_COPPER] =
    {
        .name = _("古代铜币"),
        .price = 0,
        .description = COMPOUND_STRING(
            "约3000年前的\n文明使用的铜币。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_SILVER] =
    {
        .name = _("古代银币"),
        .price = 0,
        .description = COMPOUND_STRING(
            "约3000年前的\n文明使用的银币。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_GOLD] =
    {
        .name = _("古代金币"),
        .price = 0,
        .description = COMPOUND_STRING(
            "约3000年前的\n文明使用的金币。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_VASE] =
    {
        .name = _("古代之壶"),
        .price = 0,
        .description = COMPOUND_STRING(
            "约3000年前的\n文明制造的壶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_BAND] =
    {
        .name = _("古代手镯"),
        .price = 0,
        .description = COMPOUND_STRING(
            "约3000年前的\n文明制造的手镯。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_STATUE] =
    {
        .name = _("古代石像"),
        .price = 0,
        .description = COMPOUND_STRING(
            "约3000年前的\n文明制造的石像。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_RELIC_CROWN] =
    {
        .name = _("古代王冠"),
        .price = 0,
        .description = COMPOUND_STRING(
            "约3000年前的\n文明制造的王冠。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_STRANGE_SOUVENIR] =
    {
        .name = _("神秘摆设"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 10,
        .description = COMPOUND_STRING(
            "据说是模仿古时候\n被称为守护神宝可\n梦而制作的摆设。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Fossils

    [ITEM_HELIX_FOSSIL] =
    {
        .name = _("贝壳化石"),
        .description = COMPOUND_STRING(
            "很久以前的古代宝\n可梦的化石。好像\n是贝壳的一部分。"),
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000: 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_DOME_FOSSIL] =
    {
        .name = _("甲壳化石"),
        .description = COMPOUND_STRING(
            "很久以前的古代宝\n可梦的化石。好像\n是甲壳的一部分。"),
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000: 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_OLD_AMBER] =
    {
        .name = _("秘密琥珀"),
        .description = COMPOUND_STRING(
            "封存着古代宝可梦\n遗传基因的琥珀，\n透着点红色。"),
        #if I_KEY_FOSSILS >= GEN_4
            .price = 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_ROOT_FOSSIL] =
    {
        .name = _("根状化石"),
        .description = sRootFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000: 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_CLAW_FOSSIL] =
    {
        .name = _("爪子化石"),
        .description = sRootFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000: 1000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_ARMOR_FOSSIL] =
    {
        .name = _("盾甲化石"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "很久以前的古代宝\n可梦的化石。好像\n是领饰的一部分。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_SKULL_FOSSIL] =
    {
        .name = _("头盖化石"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "很久以前的古代宝\n可梦的化石。好像\n是头部的一部分。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_COVER_FOSSIL] =
    {
        .name = _("背盖化石"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "很久以前的古代宝\n可梦的化石。好像\n是后背的一部分。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_PLUME_FOSSIL] =
    {
        .name = _("羽毛化石"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "据说是鸟宝可梦祖\n先的化石。好像是\n翅膀的一部分。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_JAW_FOSSIL] =
    {
        .name = _("颚之化石"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "很久以前的古代宝\n可梦的化石。好像\n是巨颚的一部分。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_SAIL_FOSSIL] =
    {
        .name = _("鳍之化石"),
        .price = (I_PRICE >= GEN_7) ? 7000: 1000,
        .description = COMPOUND_STRING(
            "很久以前古代宝可\n梦的化石。好像是\n头鳍的一部分。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_FOSSILIZED_BIRD] =
    {
        .name = _("化石鸟"),
        .price = 5000,
        .description = COMPOUND_STRING(
            "远古时代宝可梦化\n石残片。本来面目\n至今是未解之谜。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_FOSSILIZED_FISH] =
    {
        .name = _("化石鱼"),
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_FOSSILIZED_DRAKE] =
    {
        .name = _("化石龙"),
        .price = 5000,
        .description = COMPOUND_STRING(
            "远古时代宝可梦化\n石残片。本来面目\n至今是未解之谜。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_FOSSILIZED_DINO] =
    {
        .name = _("化石海兽"),
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

// Mulch

    [ITEM_GROWTH_MULCH] =
    {
        .name = _("速速肥"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "培育树果时的肥料\n。但完全不适合丰\n缘的土壤。"),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_GROWTH_MULCH),
        .flingPower = 30,
    },

    [ITEM_DAMP_MULCH] =
    {
        .name = _("湿湿肥"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "培育树果时的肥料\n。但完全不适合丰\n缘的土壤。"),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_DAMP_MULCH),
        .flingPower = 30,
    },

    [ITEM_STABLE_MULCH] =
    {
        .name = _("久久肥"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "培育树果时的肥料\n。但完全不适合丰\n缘的土壤。"),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_STABLE_MULCH),
        .flingPower = 30,
    },

    [ITEM_GOOEY_MULCH] =
    {
        .name = _("粘粘肥"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "培育树果时的肥料\n。但完全不适合丰\n缘的土壤。"),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_GOOEY_MULCH),
        .flingPower = 30,
    },

    [ITEM_RICH_MULCH] =
    {
        .name = _("硕果肥"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "培育树果时的肥料\n。但完全不适合丰\n缘的土壤。"),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_RICH_MULCH),
        .flingPower = 30,
    },

    [ITEM_SURPRISE_MULCH] =
    {
        .name = _("吃惊肥"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "培育树果时的肥料\n。但完全不适合丰\n缘的土壤。"),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_SURPRISE_MULCH),
        .flingPower = 30,
    },

    [ITEM_BOOST_MULCH] =
    {
        .name = _("劲劲肥"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "培育树果时的肥料\n。但完全不适合丰\n缘的土壤。"),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_BOOST_MULCH),
        .flingPower = 30,
    },

    [ITEM_AMAZE_MULCH] =
    {
        .name = _("超效肥"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "培育树果时的肥料\n。但完全不适合丰\n缘的土壤。"),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_AMAZE_MULCH),
        .flingPower = 30,
    },

// Apricorns

    [ITEM_RED_APRICORN] =
    {
        .name = _("红球果"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "红色的球果。有种\n刺鼻的气味。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_APRICORN] =
    {
        .name = _("蓝球果"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "蓝色的球果。略有\n一股青草的香味。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_APRICORN] =
    {
        .name = _("黄球果"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "黄色的球果。有种\n清爽的香味。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_APRICORN] =
    {
        .name = _("绿球果"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "绿色的球果。有种\n焦香的香味，非常\n神奇。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINK_APRICORN] =
    {
        .name = _("粉球果"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "粉红色的球果。有\n种甜甜的，好闻的\n香味。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHITE_APRICORN] =
    {
        .name = _("白球果"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "白色的球果。没有\n任何气味。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_APRICORN] =
    {
        .name = _("黑球果"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "黑色的球果。有种\n无法形容的气味。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WISHING_PIECE] =
    {
        .name = _("许愿星块"),
        .price = 20,
        .description = COMPOUND_STRING(
            "投掷到宝可梦的巢\n穴里会吸引极巨化\n宝可梦。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 50,
    },

    [ITEM_GALARICA_TWIG] =
    {
        .name = _("伽勒豆蔻枝"),
        .price = 20 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "伽勒豆蔻的枝条。\n可以用来制作某种\n宝可梦的饰品。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_ARMORITE_ORE] =
    {
        .name = _("铠甲矿石"),
        .price = 20,
        .description = COMPOUND_STRING(
            "能够在铠岛找出的\n珍稀石头。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_DYNITE_ORE] =
    {
        .name = _("极矿石"),
        .price = 20,
        .description = COMPOUND_STRING(
            "能够在王冠雪原找\n出的珍稀石头。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Mail

    [ITEM_ORANGE_MAIL] =
    {
        .name = _("橙色邮件"),
        .price = 50,
        .description = COMPOUND_STRING(
            "印有蛇纹熊的信纸\n，可以让宝可梦携\n带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_ORANGE_MAIL),
    },

    [ITEM_HARBOR_MAIL] =
    {
        .name = _("港口邮件"),
        .price = 50,
        .description = COMPOUND_STRING(
            "印有长翅鸥的信纸\n，可以让宝可梦携\n带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_HARBOR_MAIL),
    },

    [ITEM_GLITTER_MAIL] =
    {
        .name = _("闪亮邮件"),
        .price = 50,
        .description = COMPOUND_STRING(
            "印有皮卡丘的信纸\n，可以让宝可梦携\n带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_GLITTER_MAIL),
    },

    [ITEM_MECH_MAIL] =
    {
        .name = _("机械邮件"),
        .price = 50,
        .description = COMPOUND_STRING(
            "印有小磁怪的信纸\n，可以让宝可梦携\n带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_MECH_MAIL),
    },

    [ITEM_WOOD_MAIL] =
    {
        .name = _("木纹邮件"),
        .price = 50,
        .description = COMPOUND_STRING(
            "印有懒人獭的信纸\n，可以让宝可梦携\n带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
    },

    [ITEM_WAVE_MAIL] =
    {
        .name = _("波涛邮件"),
        .price = 50,
        .description = COMPOUND_STRING(
            "印有吼吼鲸的信纸\n，可以让宝可梦携\n带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
    },

    [ITEM_BEAD_MAIL] =
    {
        .name = _("珠宝邮件"),
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
    },

    [ITEM_SHADOW_MAIL] =
    {
        .name = _("影子邮件"),
        .price = 50,
        .description = COMPOUND_STRING(
            "印有夜巡灵的信纸\n，可以让宝可梦携\n带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
    },

    [ITEM_TROPIC_MAIL] =
    {
        .name = _("热带邮件"),
        .price = 50,
        .description = COMPOUND_STRING(
            "印有美丽花的信纸\n，可以让宝可梦携\n带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
    },

    [ITEM_DREAM_MAIL] =
    {
        .name = _("梦境邮件"),
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
    },

    [ITEM_FAB_MAIL] =
    {
        .name = _("华丽邮件"),
        .pluralName = _("Fab Mail"),
        .price = 50,
        .description = COMPOUND_STRING(
            "一张华丽的信纸，\n可以让宝可梦携带\n。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
    },

    [ITEM_RETRO_MAIL] =
    {
        .name = _("复古邮件"),
        .price = 50,
        .description = COMPOUND_STRING(
            "印有三种宝可梦的\n信纸，可以让宝可\n梦携带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
    },

// Evolution Items

    [ITEM_FIRE_STONE] =
    {
        .name = _("火之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_WATER_STONE] =
    {
        .name = _("水之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_THUNDER_STONE] =
    {
        .name = _("雷之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_LEAF_STONE] =
    {
        .name = _("叶之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_ICE_STONE] =
    {
        .name = _("冰之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_SUN_STONE] =
    {
        .name = _("日之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_MOON_STONE] =
    {
        .name = _("月之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_SHINY_STONE] =
    {
        .name = _("光之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_DUSK_STONE] =
    {
        .name = _("暗之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_DAWN_STONE] =
    {
        .name = _("觉醒之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 2100,
        .description = sEvolutionStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_SWEET_APPLE] =
    {
        .name = _("甜甜苹果"),
        .price = 2200,
        .description = COMPOUND_STRING(
            "这种甜美的苹果可\n以使特定的宝可梦\n进化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_TART_APPLE] =
    {
        .name = _("酸酸苹果"),
        .price = 2200,
        .description = COMPOUND_STRING(
            "这种酸酸的苹果可\n以使特定的宝可梦\n进化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_CRACKED_POT] =
    {
        .name = _("破裂的茶壶"),
        .price = 1600,
        .description = COMPOUND_STRING(
            "这个神奇的茶壶虽\n有破裂，可以使特\n定的宝可梦进化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_CHIPPED_POT] =
    {
        .name = _("缺损的茶壶"),
        .price = 38000,
        .description = COMPOUND_STRING(
            "这个神奇的茶壶虽\n有缺陷，可以使特\n定的宝可梦进化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_GALARICA_CUFF] =
    {
        .name = _("伽勒豆蔻手环"),
        .price = (I_PRICE >= GEN_9) ? 3000 : 6000,
        .description = COMPOUND_STRING(
            "用伽勒豆蔻枝编的\n手环。伽勒尔呆呆\n兽戴上会很开心。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_GALARICA_WREATH] =
    {
        .name = _("伽勒豆蔻花圈"),
        .price = (I_PRICE >= GEN_9) ? 3000 : 6000,
        .description = COMPOUND_STRING(
            "用伽勒豆蔻枝编的\n花冠。伽勒尔呆呆\n兽戴上会很开心。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_DRAGON_SCALE] =
    {
        .name = _("龙之鳞片"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "又硬又坚固的鳞片\n。龙属性宝可梦有\n时会携带它。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_UPGRADE] =
    {
        .name = _("升级数据"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .holdEffect = HOLD_EFFECT_UPGRADE,
        .description = COMPOUND_STRING(
            "内部储存了各种信\n息的透明机器。西\n尔佛公司制造。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_PROTECTOR] =
    {
        .name = _("护具"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "某种护具。非常坚\n硬而且沉重。某种\n宝可梦很喜欢它。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_ELECTIRIZER] =
    {
        .name = _("电力增幅器"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "积蓄着庞大电气力\n量的箱子。某种宝\n可梦很喜欢它。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_MAGMARIZER] =
    {
        .name = _("熔岩增幅器"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "积蓄着庞大熔岩能\n量的箱子。某种宝\n可梦很喜欢它。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_DUBIOUS_DISC] =
    {
        .name = _("可疑补丁"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "内部储存了奇怪信\n息的透明机器。制\n造者不明。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 50,
    },

    [ITEM_REAPER_CLOTH] =
    {
        .name = _("灵界之布"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "蕴含着惊人强大灵\n力的布。某种宝可\n梦很喜欢它。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 10,
    },

    [ITEM_PRISM_SCALE] =
    {
        .name = _("美丽鳞片"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 2000 : 500),
        .description = COMPOUND_STRING(
            "能让某些宝可梦进\n化的神奇鳞片。散\n发着虹色光辉。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_WHIPPED_DREAM] =
    {
        .name = _("泡沫奶油"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "松软起着泡的有点\n甜的奶油。某种宝\n可梦很喜欢它。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_SACHET] =
    {
        .name = _("香袋"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "装着散发香气的香\n料的袋子。某种宝\n可梦很喜欢它。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_OVAL_STONE] =
    {
        .name = _("浑圆之石"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 2100,
        .description = COMPOUND_STRING(
            "能让某些宝可梦进\n化的神奇石头。像\n珠子一般圆润。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_STRAWBERRY_SWEET] =
    {
        .name =_("草莓糖饰"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "草莓形状的工艺糖\n果。小仙奶非常喜\n欢。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LOVE_SWEET] =
    {
        .name = _("爱心糖饰"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "爱心形状的工艺糖\n果。小仙奶非常喜\n欢。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BERRY_SWEET] =
    {
        .name = _("野莓糖饰"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "浆果形状的工艺糖\n果。小仙奶非常喜\n欢。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CLOVER_SWEET] =
    {
        .name = _("幸运草糖饰"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "四叶草形状的工艺\n糖果。小仙奶非常\n喜欢。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FLOWER_SWEET] =
    {
        .name = _("花朵糖饰"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "花朵形状的工艺糖\n果。小仙奶非常喜\n欢。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_STAR_SWEET] =
    {
        .name = _("星星糖饰"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "星星形状的工艺糖\n果。小仙奶非常喜\n欢。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RIBBON_SWEET] =
    {
        .name = _("蝴蝶结糖饰"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "蝴蝶结形状的工艺\n糖果。小仙奶非常\n喜欢。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_EVERSTONE] =
    {
        .name = _("不变之石"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 200,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = COMPOUND_STRING(
            "携带后，宝可梦在\n此期间不会进化的\n神奇石头。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Nectars

    [ITEM_RED_NECTAR] =
    {
        .name = _("朱红色花蜜"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sNectarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
    },

    [ITEM_YELLOW_NECTAR] =
    {
        .name = _("金黄色花蜜"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sNectarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
    },

    [ITEM_PINK_NECTAR] =
    {
        .name = _("桃粉色花蜜"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sNectarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
    },

    [ITEM_PURPLE_NECTAR] =
    {
        .name = _("兰紫色花蜜"),
        .price = 300,
        .holdEffectParam = 0,
        .description = sNectarDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
        .flingPower = 10,
    },

// Plates

    [ITEM_FLAME_PLATE] =
    {
        .name = _("火球石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "火属性的石板。携\n带后，火招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 90,
    },

    [ITEM_SPLASH_PLATE] =
    {
        .name = _("水滴石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "水属性的石板。携\n带后，水招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 90,
    },

    [ITEM_ZAP_PLATE] =
    {
        .name = _("雷电石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "电属性的石板。携\n带后，电招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 90,
    },

    [ITEM_MEADOW_PLATE] =
    {
        .name = _("碧绿石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "草属性的石板。携\n带后，草招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .flingPower = 90,
    },

    [ITEM_ICICLE_PLATE] =
    {
        .name = _("冰柱石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "冰属性的石板。携\n带后，冰招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 90,
    },

    [ITEM_FIST_PLATE] =
    {
        .name = _("拳头石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "格斗属性的石板。\n携带后，格斗招式\n威力会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .flingPower = 90,
    },

    [ITEM_TOXIC_PLATE] =
    {
        .name = _("剧毒石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "毒属性的石板。携\n带后，毒招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .flingPower = 90,
    },

    [ITEM_EARTH_PLATE] =
    {
        .name = _("大地石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "地面属性的石板。\n携带后，地面招式\n威力会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .flingPower = 90,
    },

    [ITEM_SKY_PLATE] =
    {
        .name = _("蓝天石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "飞行属性的石板。\n携带后，飞行招式\n威力会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .flingPower = 90,
    },

    [ITEM_MIND_PLATE] =
    {
        .name = _("神奇石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "超能属性的石板。\n携带后，超能招式\n威力会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .flingPower = 90,
    },

    [ITEM_INSECT_PLATE] =
    {
        .name = _("玉虫石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "虫属性的石板。携\n带后，虫招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .flingPower = 90,
    },

    [ITEM_STONE_PLATE] =
    {
        .name = _("岩石石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "岩石属性的石板。\n携带后，岩石招式\n威力会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .flingPower = 90,
    },

    [ITEM_SPOOKY_PLATE] =
    {
        .name = _("妖怪石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "幽灵属性的石板。\n携带后，幽灵招式\n威力会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .flingPower = 90,
    },

    [ITEM_DRACO_PLATE] =
    {
        .name = _("龙之石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "龙属性的石板。携\n带后，龙招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .flingPower = 90,
    },

    [ITEM_DREAD_PLATE] =
    {
        .name = _("恶颜石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "恶属性的石板。携\n带后，恶招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .flingPower = 90,
    },

    [ITEM_IRON_PLATE] =
    {
        .name = _("钢铁石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "钢属性的石板。携\n带后，钢招式威力\n会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
        .flingPower = 90,
    },

    [ITEM_PIXIE_PLATE] =
    {
        .name = _("妖精石板"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "妖精属性的石板。\n携带后，妖精招式\n威力会增强。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .flingPower = 90,
    },

// Drives

    [ITEM_DOUSE_DRIVE] =
    {
        .name = _("水流卡带"),
        .price = (I_PRICE >= GEN_7) ? 0 : 1000,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING(
            "携带后，盖诺赛克\n特的某招式就会变\n为水属性。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 70,
    },

    [ITEM_SHOCK_DRIVE] =
    {
        .name = _("闪电卡带"),
        .price = (I_PRICE >= GEN_7) ? 0 : 1000,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING(
            "携带后，盖诺赛克\n特的某招式就会变\n为电属性。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 70,
    },

    [ITEM_BURN_DRIVE] =
    {
        .name = _("火焰卡带"),
        .price = (I_PRICE >= GEN_7) ? 0 : 1000,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING(
            "携带后，盖诺赛克\n特的某招式就会变\n为火属性。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 70,
    },

    [ITEM_CHILL_DRIVE] =
    {
        .name = _("冰冻卡带"),
        .price = (I_PRICE >= GEN_7) ? 0 : 1000,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = COMPOUND_STRING(
            "携带后，盖诺赛克\n特的某招式就会变\n为冰属性。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 70,
    },

// Memories

    [ITEM_FIRE_MEMORY] =
    {
        .name = _("火焰存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有火数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 50,
    },

    [ITEM_WATER_MEMORY] =
    {
        .name = _("清水存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有水数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 50,
    },

    [ITEM_ELECTRIC_MEMORY] =
    {
        .name = _("电子存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有电数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 50,
    },

    [ITEM_GRASS_MEMORY] =
    {
        .name = _("青草存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有草数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .flingPower = 50,
    },

    [ITEM_ICE_MEMORY] =
    {
        .name = _("冰雪存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有冰数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 50,
    },

    [ITEM_FIGHTING_MEMORY] =
    {
        .name = _("格斗存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有格斗数据的存\n储碟。某宝可梦携\n带后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .flingPower = 50,
    },

    [ITEM_POISON_MEMORY] =
    {
        .name = _("毒存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有毒数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .flingPower = 50,
    },

    [ITEM_GROUND_MEMORY] =
    {
        .name = _("大地存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有地面数据的存\n储碟。某宝可梦携\n带后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .flingPower = 50,
    },

    [ITEM_FLYING_MEMORY] =
    {
        .name = _("飞翔存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有飞行数据的存\n储碟。某宝可梦携\n带后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .flingPower = 50,
    },

    [ITEM_PSYCHIC_MEMORY] =
    {
        .name = _("精神存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有超能数据的存\n储碟。某宝可梦携\n带后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .flingPower = 50,
    },

    [ITEM_BUG_MEMORY] =
    {
        .name = _("虫子存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有虫数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .flingPower = 50,
    },

    [ITEM_ROCK_MEMORY] =
    {
        .name = _("岩石存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有岩石数据的存\n储碟。某宝可梦携\n带后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .flingPower = 50,
    },

    [ITEM_GHOST_MEMORY] =
    {
        .name = _("Ghost Memory"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有幽灵数据的存\n储碟。某宝可梦携\n带后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .flingPower = 50,
    },

    [ITEM_DRAGON_MEMORY] =
    {
        .name = _("龙存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有龙数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .flingPower = 50,
    },

    [ITEM_DARK_MEMORY] =
    {
        .name = _("黑暗存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有恶数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .flingPower = 50,
    },

    [ITEM_STEEL_MEMORY] =
    {
        .name = _("钢铁存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有钢数据的存储\n碟。某宝可梦携带\n后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
        .flingPower = 50,
    },

    [ITEM_FAIRY_MEMORY] =
    {
        .name = _("妖精存储碟"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "装有妖精数据的存\n储碟。某宝可梦携\n带后属性会变化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .flingPower = 50,
    },

    [ITEM_RUSTED_SWORD] =
    {
        .name = _("腐朽的剑"),
        .price = 0,
        .description = COMPOUND_STRING(
            "据说很久以前英雄\n的剑。而现在早已\n变得锈迹斑斑。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUSTED_SHIELD] =
    {
        .name = _("腐朽的盾"),
        .price = 0,
        .description = COMPOUND_STRING(
            "据说很久以前英雄\n的盾。而现在早已\n变得锈迹斑斑。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Colored Orbs

    [ITEM_RED_ORB] =
    {
        .name = _("朱红色宝珠"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = COMPOUND_STRING(
            "散发着红色光辉的\n宝珠。据说和丰缘\n传说渊源颇深。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_ORB] =
    {
        .name = _("靛蓝色宝珠"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = COMPOUND_STRING(
            "散发着蓝色光辉的\n宝珠。据说和丰缘\n传说渊源颇深。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mega Stones

    [ITEM_VENUSAURITE] =
    {
        .name = _("妙蛙花石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让妙蛙花携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_CHARIZARDITE_X] =
    {
        .name = _("喷火龙石X"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_CHARIZARDITE_Y] =
    {
        .name = _("喷火龙石Y"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BLASTOISINITE] =
    {
        .name = _("水箭龟石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让水箭龟携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BEEDRILLITE] =
    {
        .name = _("大针蜂石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "大针蜂携带后，在\n战斗时能超级进化\n的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_PIDGEOTITE] =
    {
        .name = _("大比鸟石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让大比鸟携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ALAKAZITE] =
    {
        .name = _("胡地石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让胡地携带后，在\n战斗时能超级进化\n的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SLOWBRONITE] =
    {
        .name = _("呆壳兽石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让呆壳兽携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GENGARITE] =
    {
        .name = _("耿鬼石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让耿鬼携带后，在\n战斗时能超级进化\n的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_KANGASKHANITE] =
    {
        .name = _("袋兽石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让袋兽携带后，在\n战斗时能超级进化\n的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_PINSIRITE] =
    {
        .name = _("凯罗斯石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让凯罗斯携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GYARADOSITE] =
    {
        .name = _("暴鲤龙石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让暴鲤龙携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_AERODACTYLITE] =
    {
        .name = _("化石翼龙石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让化石翼龙携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MEWTWONITE_X] =
    {
        .name = _("超梦石X"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MEWTWONITE_Y] =
    {
        .name = _("超梦石Y"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_AMPHAROSITE] =
    {
        .name = _("电龙石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让电龙带后，在战\n斗时就能超级进化\n的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_STEELIXITE] =
    {
        .name = _("大钢蛇石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让大钢蛇携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SCIZORITE] =
    {
        .name = _("巨钳螳螂石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让巨钳螳螂携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_HERACRONITE] =
    {
        .name = _("赫拉克罗斯石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让赫拉克罗斯携带\n后，在战斗时能超\n级进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_HOUNDOOMINITE] =
    {
        .name = _("黑鲁加石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让黑鲁加携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_TYRANITARITE] =
    {
        .name = _("班基拉斯石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让班基拉斯携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SCEPTILITE] =
    {
        .name = _("蜥蜴王石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让蜥蜴王携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BLAZIKENITE] =
    {
        .name = _("火焰鸡石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让火焰鸡携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SWAMPERTITE] =
    {
        .name = _("巨沼怪石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让巨沼怪携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GARDEVOIRITE] =
    {
        .name = _("沙奈朵石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让沙奈朵携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SABLENITE] =
    {
        .name = _("勾魂眼石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让勾魂眼携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MAWILITE] =
    {
        .name = _("大嘴娃石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让大嘴娃携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_AGGRONITE] =
    {
        .name = _("波士可多拉石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让波士可多拉携带\n后，在战斗时能超\n级进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MEDICHAMITE] =
    {
        .name = _("恰雷姆石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让恰雷姆携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_MANECTITE] =
    {
        .name = _("雷电兽石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让雷电兽携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SHARPEDONITE] =
    {
        .name = _("巨牙鲨石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让巨牙鲨携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_CAMERUPTITE] =
    {
        .name = _("喷火驼石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "喷火驼携带后，在\n战斗时能超级进化\n的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ALTARIANITE] =
    {
        .name = _("七夕青鸟石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让七夕青鸟携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BANETTITE] =
    {
        .name = _("诅咒娃娃石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让诅咒娃娃携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ABSOLITE] =
    {
        .name = _("阿勃梭鲁石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让阿勃梭鲁携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GLALITITE] =
    {
        .name = _("冰鬼护石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让冰鬼护携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SALAMENCITE] =
    {
        .name = _("暴飞龙石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "暴飞龙携带后，在\n战斗时能超级进化\n的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_METAGROSSITE] =
    {
        .name = _("巨金怪石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让巨金怪携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_LATIASITE] =
    {
        .name = _("拉帝亚斯石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让拉帝亚斯携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_LATIOSITE] =
    {
        .name = _("拉帝欧斯石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让拉帝欧斯携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_LOPUNNITE] =
    {
        .name = _("长耳兔石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "长耳兔携带后，在\n战斗时能超级进化\n的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GARCHOMPITE] =
    {
        .name = _("烈咬陆鲨石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让烈咬陆鲨携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_LUCARIONITE] =
    {
        .name = _("路卡利欧石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让路卡利欧携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ABOMASITE] =
    {
        .name = _("暴雪王石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让暴雪王携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_GALLADITE] =
    {
        .name = _("艾路雷朵石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让艾路雷朵携带后\n，在战斗时能超级\n进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_AUDINITE] =
    {
        .name = _("差不多娃娃石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让差不多娃娃携带\n后，在战斗时能超\n级进化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_DIANCITE] =
    {
        .name = _("蒂安希石"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = COMPOUND_STRING(
            "让蒂安希携带后，\n在战斗时能超级进\n化的超级石。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

// Gems

    [ITEM_NORMAL_GEM] =
    {
        .name = _("一般宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "一般属性的宝石。\n携带后，一般招式\n威力会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
    },

    [ITEM_FIRE_GEM] =
    {
        .name = _("火之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "火属性的宝石。携\n带后，火招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_WATER_GEM] =
    {
        .name = _("水之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "水属性的宝石。携\n带后，水招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ELECTRIC_GEM] =
    {
        .name = _("电之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "电属性的宝石。携\n带后，电招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_GRASS_GEM] =
    {
        .name = _("草之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "草属性的宝石。携\n带后，草招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICE_GEM] =
    {
        .name = _("冰之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "冰属性的宝石。携\n带后，冰招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIGHTING_GEM] =
    {
        .name = _("格斗宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "格斗属性的宝石。\n携带后，格斗招式\n威力会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_POISON_GEM] =
    {
        .name = _("毒之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "毒属性的宝石。携\n带后，毒招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_GROUND_GEM] =
    {
        .name = _("地面宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "地面属性的宝石。\n携带后，地面招式\n威力会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_FLYING_GEM] =
    {
        .name = _("飞行宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "飞行属性的宝石。\n携带后，飞行招式\n威力会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_PSYCHIC_GEM] =
    {
        .name = _("超能宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "超能属性的宝石。\n携带后，超能招式\n威力会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_BUG_GEM] =
    {
        .name = _("虫之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "虫属性的宝石。携\n带后，虫招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_ROCK_GEM] =
    {
        .name = _("岩石宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "岩石属性的宝石。\n携带后，岩石招式\n威力会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_GHOST_GEM] =
    {
        .name = _("幽灵宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "幽灵属性的宝石。\n携带后，幽灵招式\n威力会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRAGON_GEM] =
    {
        .name = _("龙之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "龙属性的宝石。携\n带后，龙招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DARK_GEM] =
    {
        .name = _("恶之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "恶属性的宝石。携\n带后，恶招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_STEEL_GEM] =
    {
        .name = _("钢之宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "钢属性的宝石。携\n带后，钢招式威力\n会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_FAIRY_GEM] =
    {
        .name = _("妖精宝石"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = GEM_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "妖精属性的宝石。\n携带后，妖精招式\n威力会增强1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

// Z-Crystals

    [ITEM_NORMALIUM_Z] =
    {
        .name = _("一般Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将一般属性的招\n式升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
    },

    [ITEM_FIRIUM_Z] =
    {
        .name = _("火Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将火属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_WATERIUM_Z] =
    {
        .name = _("水Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将水属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ELECTRIUM_Z] =
    {
        .name = _("电Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将电属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_GRASSIUM_Z] =
    {
        .name = _("草Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将草属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICIUM_Z] =
    {
        .name = _("冰Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将冰属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIGHTINIUM_Z] =
    {
        .name = _("格斗Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将格斗属性的招\n式升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_POISONIUM_Z] =
    {
        .name = _("毒Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将毒属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_GROUNDIUM_Z] =
    {
        .name = _("地面Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将地面属性的招\n式升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_FLYINIUM_Z] =
    {
        .name = _("飞行Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将飞行属性的招\n式升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_PSYCHIUM_Z] =
    {
        .name = _("超能Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将超能属性的招\n式升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_BUGINIUM_Z] =
    {
        .name = _("虫Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将虫属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_ROCKIUM_Z] =
    {
        .name = _("岩石Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将岩石属性的招\n式升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_GHOSTIUM_Z] =
    {
        .name = _("幽灵Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将幽灵属性的招\n式升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRAGONIUM_Z] =
    {
        .name = _("龙Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将龙属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DARKINIUM_Z] =
    {
        .name = _("恶Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将恶属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_STEELIUM_Z] =
    {
        .name = _("钢Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将钢属性的招式\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_FAIRIUM_Z] =
    {
        .name = _("妖精Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将妖精属性的招\n式升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

    [ITEM_PIKANIUM_Z] =
    {
        .name = _("皮卡丘Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将皮卡丘的伏特\n攻击升级成Z招式\n的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_EEVIUM_Z] =
    {
        .name = _("伊布Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将伊布的珍藏升\n级成Z招式的Z结\n晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_SNORLIUM_Z] =
    {
        .name = _("卡比兽Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将卡比兽的终极\n冲击升级成Z招式\n的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_MEWNIUM_Z] =
    {
        .name = _("梦幻Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将梦幻的精神强\n念升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_DECIDIUM_Z] =
    {
        .name = _("狙射树枭Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将狙射树枭的缝\n影升级成Z招式的\nZ结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_INCINIUM_Z] =
    {
        .name = _("炽焰咆哮虎Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将炽焰咆哮虎的\nDD金勾臂升级成\nZ招式的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_PRIMARIUM_Z] =
    {
        .name = _("西狮海壬Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将西狮海壬的泡\n影的咏叹调升级成\nZ招式的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_LYCANIUM_Z] =
    {
        .name = _("鬃岩狼人Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将鬃岩狼人的尖\n石攻击升级成Z招\n式的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_MIMIKIUM_Z] =
    {
        .name = _("谜拟丘Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将谜拟Q的嬉闹\n升级成Z招式的Z\n结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_KOMMONIUM_Z] =
    {
        .name = _("杖尾鳞甲龙Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将杖尾鳞甲龙的\n鳞片噪音升级成Z\n招式的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_TAPUNIUM_Z] =
    {
        .name = _("卡璞Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将卡璞们的自然\n之怒升级成Z招式\n的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  //signature z move
    },

    [ITEM_SOLGANIUM_Z] =
    {
        .name = _("索尔迦雷欧Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将索尔迦雷欧的\n流星闪冲升级成Z\n招式的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_LUNALIUM_Z] =
    {
        .name = _("露奈雅拉Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将露奈雅拉的暗\n影之光升级成Z招\n式的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_MARSHADIUM_Z] =
    {
        .name = _("玛夏多Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将玛夏多的暗影\n偷盗升级成Z招式\n的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_ALORAICHIUM_Z] =
    {
        .name = _("阿罗雷Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将阿罗拉雷丘的\n十万伏特升级成Z\n招式的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_PIKASHUNIUM_Z] =
    {
        .name = _("智皮卡Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "会将戴帽子皮卡丘\n的十万伏特升级成\nZ招式的Z结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255,  // signature z move
    },

    [ITEM_ULTRANECROZIUM_Z] =
    {
        .name = _("究极奈克洛Z"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = COMPOUND_STRING(
            "能让和合体的奈克\n洛兹玛变成崭新样\n子的结晶。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255, //signature z move
    },

// Species-specific Held Items

    [ITEM_LIGHT_BALL] =
    {
        .name = _("电气球"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 100,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
        .description = COMPOUND_STRING(
            "让皮卡丘携带后，\n攻击和特攻提高的\n神奇之球。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LEEK] =
    {
        .name = _("大葱"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .holdEffect = HOLD_EFFECT_LEEK,
        .description = COMPOUND_STRING(
            "让大葱鸭携带后，\n招式会变得容易击\n中要害的大葱。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_THICK_CLUB] =
    {
        .name = _("粗骨头"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 500,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
        .description = COMPOUND_STRING(
            "让卡拉卡拉或嘎啦\n嘎啦携带后，攻击\n就会提高的骨头。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 90,
    },

    [ITEM_LUCKY_PUNCH] =
    {
        .name = _("吉利拳"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 10,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
        .description = COMPOUND_STRING(
            "让吉利蛋携带后，\n招式会变得容易击\n中要害的拳套。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
    },

    [ITEM_METAL_POWDER] =
    {
        .name = _("金属粉"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 10,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
        .description = COMPOUND_STRING(
            "让百变怪携带后，\n防御就会提高的神\n奇粉末。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_QUICK_POWDER] =
    {
        .name = _("速度粉"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 10,
        .holdEffect = HOLD_EFFECT_QUICK_POWDER,
        .description = COMPOUND_STRING(
            "让百变怪携带后，\n速度就会提高的神\n奇粉末。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
        .name = _("深海鳞片"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
        .description = COMPOUND_STRING(
            "让珍珠贝携带后，\n特防就会提高的鳞\n片。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
        .name = _("深海之牙"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
        .description = COMPOUND_STRING(
            "让珍珠贝携带后，\n特攻就会提高的牙\n齿。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 90,
    },

    [ITEM_SOUL_DEW] =
    {
        .name = _("心之水滴"),
        .price = (I_PRICE >= GEN_7) ? 0 : 200,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
        .holdEffectParam = B_SOUL_DEW_BOOST >= GEN_7 ? 20 : 50,
        .description = COMPOUND_STRING(
            "让水都携带后，超\n能和龙招式威力提\n高的神奇珠子。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_ADAMANT_ORB] =
    {
        .name = _("金刚宝珠"),
        .price = (I_PRICE >= GEN_7) ? 0 : 10000,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "让帝牙卢卡携带的\n话，龙和钢招式威\n力就会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_LUSTROUS_ORB] =
    {
        .name = _("白玉宝珠"),
        .price = (I_PRICE >= GEN_7) ? 0 : 10000,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "让帕路奇亚携带的\n话，龙和水招式威\n力就会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_GRISEOUS_ORB] =
    {
        .name = _("白金宝珠"),
        .price = (I_PRICE >= GEN_7) ? 0 : 10000,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "让骑拉帝纳携带的\n话，龙和幽灵招式\n威力就会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

// Incenses

    [ITEM_SEA_INCENSE] =
    {
        .name = _("海潮薰香"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LAX_INCENSE] =
    {
        .name = _("悠闲薰香"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 9600,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "携带后，对手招式\n会变得不容易命中\n。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ODD_INCENSE] =
    {
        .name = _("奇异薰香"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 20,
        .description = sOddIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ROCK_INCENSE] =
    {
        .name = _("岩石薰香"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 20,
        .description = sRockIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FULL_INCENSE] =
    {
        .name = _("饱腹薰香"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 9600,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .holdEffectParam = 5,
        .description = sFullIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WAVE_INCENSE] =
    {
        .name = _("涟漪薰香"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ROSE_INCENSE] =
    {
        .name = _("花朵薰香"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 20,
        .description = sRoseIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LUCK_INCENSE] =
    {
        .name = _("幸运薰香"),
        .price = (I_PRICE >= GEN_7) ? 11000 : 9600,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .description = sLuckIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PURE_INCENSE] =
    {
        .name = _("洁净薰香"),
        .price = (I_PRICE >= GEN_7) ? 6000 : 9600,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

// Contest Scarves

    [ITEM_RED_SCARF] =
    {
        .name = _("红色头巾"),
        .price = 100,
        .description = COMPOUND_STRING(
            "携带它去参加华丽\n大赛的话会比平时\n更加帅气。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BLUE_SCARF] =
    {
        .name = _("蓝色头巾"),
        .price = 100,
        .description = COMPOUND_STRING(
            "携带它去参加华丽\n大赛的话会比平时\n更加美丽。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PINK_SCARF] =
    {
        .name = _("粉红头巾"),
        .price = 100,
        .description = COMPOUND_STRING(
            "携带它去参加华丽\n大赛的话会比平时\n更加可爱。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_GREEN_SCARF] =
    {
        .name = _("绿色头巾"),
        .price = 100,
        .description = COMPOUND_STRING(
            "携带它去参加华丽\n大赛的话会比平时\n更加聪明。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_YELLOW_SCARF] =
    {
        .name = _("黄色头巾"),
        .price = 100,
        .description = COMPOUND_STRING(
            "携带它去参加华丽\n大赛的话会比平时\n更加强壮。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

// EV Gain Modifiers

    [ITEM_MACHO_BRACE] =
    {
        .name = _("强制锻炼器"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = COMPOUND_STRING(
            "虽然携带后速度会\n降低，但会比平时\n更容易成长。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_POWER_WEIGHT] =
    {
        .name = _("力量负重"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "虽然携带后速度会\n降低，但HP会比\n平时成长得更高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_HP,
        .flingPower = 70,
    },

    [ITEM_POWER_BRACER] =
    {
        .name = _("力量护腕"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "虽然携带后速度会\n降低，但攻击会比\n平时成长得更高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_ATK,
        .flingPower = 70,
    },

    [ITEM_POWER_BELT] =
    {
        .name = _("力量腰带"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "虽然携带后速度会\n降低，但防御会比\n平时成长得更高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_DEF,
        .flingPower = 70,
    },

    [ITEM_POWER_LENS] =
    {
        .name = _("力量镜"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "虽然携带后速度会\n降低，但特攻会比\n平时成长得更高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPATK,
        .flingPower = 70,
    },

    [ITEM_POWER_BAND] =
    {
        .name = _("力量束带"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "虽然携带后速度会\n降低，但特防会比\n平时成长得更高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPDEF,
        .flingPower = 70,
    },

    [ITEM_POWER_ANKLET] =
    {
        .name = _("力量护踝"),
        .price = (I_PRICE >= GEN_9) ? 10000 : 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = POWER_ITEM_BOOST,
        .description = COMPOUND_STRING(
            "虽然携带后速度会\n降低，但速度会比\n平时成长得更高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPEED,
        .flingPower = 70,
    },

// Type-boosting Held Items

    [ITEM_SILK_SCARF] =
    {
        .name = _("丝绸围巾"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_NORMAL_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "手感不错的围巾。\n携带后，一般招式\n威力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHARCOAL] =
    {
        .name = _("木炭"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 9800),
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "焚烧用的燃料。携\n带后，火招式威力\n会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_MYSTIC_WATER] =
    {
        .name = _("神秘水滴"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "水滴形状的宝石。\n携带后，水招式威\n力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_MAGNET] =
    {
        .name = _("磁铁"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "强力的磁铁。携带\n后，电招式威力会\n提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_MIRACLE_SEED] =
    {
        .name = _("奇迹种子"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sRoseIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_NEVER_MELT_ICE] =
    {
        .name = _("不融冰"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "能隔绝热量的冰。\n携带后，冰招式威\n力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BLACK_BELT] =
    {
        .name = _("黑带"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "能振作精神的带子\n。携带后，格斗招\n式威力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_POISON_BARB] =
    {
        .name = _("毒针"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "有毒的小针。携带\n后，毒招式威力会\n提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 70,
    },

    [ITEM_SOFT_SAND] =
    {
        .name = _("柔软沙子"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "手感细腻的沙子。\n携带后，地面招式\n威力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SHARP_BEAK] =
    {
        .name = _("锐利鸟嘴"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "又长又尖的鸟嘴。\n携带后，飞行招式\n威力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 50,
    },

    [ITEM_TWISTED_SPOON] =
    {
        .name = _("弯曲的汤匙"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sOddIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SILVER_POWDER] =
    {
        .name = _("银粉"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "散发着银色光辉的\n粉末。携带后，虫\n招式威力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_HARD_STONE] =
    {
        .name = _("硬石头"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = sRockIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_SPELL_TAG] =
    {
        .name = _("咒术之符"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "古怪可怕的咒符。\n携带后，幽灵招式\n威力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_DRAGON_FANG] =
    {
        .name = _("龙之牙"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "坚硬锐利的牙齿。\n携带后，龙招式威\n力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 70,
    },

    [ITEM_BLACK_GLASSES] =
    {
        .name = _("黑色眼镜"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "看上去很奇怪的眼\n镜。携带后，恶招\n式威力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_METAL_COAT] =
    {
        .name = _("金属膜"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 2000 : 100),
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "特殊的金属膜。携\n带后，钢招式威力\n会提高。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

// Choice Items

    [ITEM_CHOICE_BAND] =
    {
        .name = _("讲究头带"),
        .price = (I_PRICE >= GEN_9) ? 100000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = COMPOUND_STRING(
            "有点讲究的头带。\n携带后攻击提升但\n只能用相同招式。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHOICE_SPECS] =
    {
        .name = _("讲究眼镜"),
        .price = (I_PRICE >= GEN_9) ? 100000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
        .description = COMPOUND_STRING(
            "有点讲究的眼镜。\n携带后特攻提升但\n只能用相同招式。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHOICE_SCARF] =
    {
        .name = _("讲究围巾"),
        .price = (I_PRICE >= GEN_9) ? 100000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
        .description = COMPOUND_STRING(
            "有点讲究的围巾。\n携带后速度提升但\n只能用相同招式。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

// Status Orbs

    [ITEM_FLAME_ORB] =
    {
        .name = _("火焰宝珠"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_FLAME_ORB,
        .description = COMPOUND_STRING(
            "会放出热量的神奇\n宝珠。携带后在战\n斗时会灼伤。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_TOXIC_ORB] =
    {
        .name = _("剧毒宝珠"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_TOXIC_ORB,
        .description = COMPOUND_STRING(
            "会放出毒的神奇宝\n珠。携带后在战斗\n时会中剧毒。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Weather Rocks

    [ITEM_DAMP_ROCK] =
    {
        .name = _("潮湿岩石"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_DAMP_ROCK,
        .description = COMPOUND_STRING(
            "携带宝可梦使出求\n雨后持续时间就会\n更长。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_HEAT_ROCK] =
    {
        .name = _("炽热岩石"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_HEAT_ROCK,
        .description = COMPOUND_STRING(
            "携带宝可梦使出大\n晴天后持续时间就\n会更长。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_SMOOTH_ROCK] =
    {
        .name = _("沙沙岩石"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
        .description = COMPOUND_STRING(
            "携带宝可梦使出沙\n暴后持续时间就会\n更长。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ICY_ROCK] =
    {
        .name = _("冰冷岩石"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_ICY_ROCK,
        .description = COMPOUND_STRING(
            "携带宝可梦使出冰\n雹后持续时间就会\n更长。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
    },

// Terrain Seeds

    [ITEM_ELECTRIC_SEED] =
    {
        .name = _("电气种子"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_ELECTRIC_TERRAIN,
        .description = COMPOUND_STRING(
            "携带后，在电气场\n地上使用，防御就\n会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PSYCHIC_SEED] =
    {
        .name = _("精神种子"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_PSYCHIC_TERRAIN,
        .description = COMPOUND_STRING(
            "携带后，在精神场\n地上使用，特防就\n会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MISTY_SEED] =
    {
        .name = _("薄雾种子"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_MISTY_TERRAIN,
        .description = COMPOUND_STRING(
            "携带后，在薄雾场\n地上使用，特防就\n会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_GRASSY_SEED] =
    {
        .name = _("青草种子"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_GRASSY_TERRAIN,
        .description = COMPOUND_STRING(
            "携带后，在青草场\n地上使用，防御就\n会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

// Type-activated Stat Modifiers

    [ITEM_ABSORB_BULB] =
    {
        .name = _("球根"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_ABSORB_BULB,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "一次性球根。携带\n宝可梦受到水招式\n，特攻就会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_CELL_BATTERY] =
    {
        .name = _("充电电池"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_CELL_BATTERY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "一次性电池。携带\n宝可梦受到电招式\n，攻击就会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LUMINOUS_MOSS] =
    {
        .name = _("光苔"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 1000),
        .holdEffect = HOLD_EFFECT_LUMINOUS_MOSS,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "一次性光苔。携带\n宝可梦受到水招式\n，特防就会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SNOWBALL] =
    {
        .name = _("雪球"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_SNOWBALL,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "一次性雪球。携带\n宝可梦受到冰属性\n，攻击就会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// Misc. Held Items

    [ITEM_BRIGHT_POWDER] =
    {
        .name = _("光粉"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 10),
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "携带后，使对手招\n式变得不易命中的\n闪闪发光的粉末。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WHITE_HERB] =
    {
        .name = _("白色香草"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_RESTORE_STATS,
        .description = COMPOUND_STRING(
            "当携带宝可梦能力\n降低时，仅能回到\n之前的状态1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_EXP_SHARE] =
    {
        .name = _("学习装置"),
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        #if I_EXP_SHARE_ITEM >= GEN_6
            .price = 0,
            .description = COMPOUND_STRING(
            "打开后，能让同行\n的所有宝可梦获得\n经验值的装置。"),
        #else
            .price = 3000,
            .description = COMPOUND_STRING(
            "打开后，能让同行\n的所有宝可梦获得\n经验值的装置。"),
        #endif
        .pocket = I_EXP_SHARE_ITEM >= GEN_6 ? POCKET_KEY_ITEMS : POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_ExpShare,
        .flingPower = 30,
    },

    [ITEM_QUICK_CLAW] =
    {
        .name = _("先制之爪"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "又轻又尖锐的爪子\n。携带后，有时能\n先一步行动。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SOOTHE_BELL] =
    {
        .name = _("安抚之铃"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
        .description = COMPOUND_STRING(
            "音色悦耳的铃铛。\n携带宝可梦会变得\n容易亲密。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MENTAL_HERB] =
    {
        .name = _("心灵香草"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_MENTAL_HERB,
        .description = COMPOUND_STRING(
            "当携带宝可梦无法\n自由使出招式时，\n仅会回复1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_KINGS_ROCK] =
    {
        .name = _("王者之证"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 5000 : 100),
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_AMULET_COIN] =
    {
        .name = _("护符金币"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 10000 : 100),
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .description = sLuckIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_CLEANSE_TAG] =
    {
        .name = _("洁净之符"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 200,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SMOKE_BALL] =
    {
        .name = _("烟雾球"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
        .description = COMPOUND_STRING(
            "携带宝可梦在和野\n生宝可梦的战斗中\n绝对可以逃走。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_FOCUS_BAND] =
    {
        .name = _("气势头带"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "携带后，即便受到\n致命招式有时也能\n以1HP撑过去。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LUCKY_EGG] =
    {
        .name = _("幸运蛋"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 200,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = COMPOUND_STRING(
            "满载着幸福的蛋。\n携带后获得的经验\n值会少量增加。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SCOPE_LENS] =
    {
        .name = _("焦点镜"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = COMPOUND_STRING(
            "能看见弱点的镜片\n。携带后会变得容\n易击中要害。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LEFTOVERS] =
    {
        .name = _("吃剩的东西"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "携带后，宝可梦的\nHP会在战斗期间\n缓缓回复。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SHELL_BELL] =
    {
        .name = _("贝壳之铃"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 8,
        .description = COMPOUND_STRING(
            "当携带后攻击造成\n伤害时，能回复少\n量HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_WIDE_LENS] =
    {
        .name = _("广角镜"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_WIDE_LENS,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "携带后，招式的命\n中率就会少量提高\n的镜片。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MUSCLE_BAND] =
    {
        .name = _("力量头带"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_MUSCLE_BAND,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "携带后，物理招式\n的威力就会少量提\n高的头带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WISE_GLASSES] =
    {
        .name = _("博识眼镜"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_WISE_GLASSES,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "携带后，特殊招式\n的威力就会少量提\n高的眼镜。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_EXPERT_BELT] =
    {
        .name = _("达人带"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_EXPERT_BELT,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "用惯了的黑色带子\n。携带后，效果绝\n佳时的招式威力就\n会少量提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LIGHT_CLAY] =
    {
        .name = _("光之黏土"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_LIGHT_CLAY,
        .description = COMPOUND_STRING(
            "当携带后使出光墙\n或反射壁时，效果\n会持续得更长。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LIFE_ORB] =
    {
        .name = _("生命宝珠"),
        .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_LIFE_ORB,
        .description = COMPOUND_STRING(
            "携带后，虽然每次\n攻击时HP减少，\n但威力会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_POWER_HERB] =
    {
        .name = _("强力香草"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_POWER_HERB,
        .description = COMPOUND_STRING(
            "携带宝可梦可有1\n次机会直接使出需\n要蓄力的招式。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FOCUS_SASH] =
    {
        .name = _("气势披带"),
        .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_FOCUS_SASH,
        .description = COMPOUND_STRING(
            "满HP时即使受致\n命伤，也能以1H\nP撑过去1次。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ZOOM_LENS] =
    {
        .name = _("对焦镜"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_ZOOM_LENS,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "当携带宝可梦比对\n手行动迟缓时，招\n式会容易命中。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_METRONOME] =
    {
        .name = _("节拍器"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_METRONOME,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "携带后，连续使出\n相同招式时，威力\n就会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_IRON_BALL] =
    {
        .name = _("黑色铁球"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_IRON_BALL,
        .description = COMPOUND_STRING(
            "携带后速度降低。\n飞行或飘浮宝可梦\n会被地面招式击中\n。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 130,
    },

    [ITEM_LAGGING_TAIL] =
    {
        .name = _("后攻之尾"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .description = sFullIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_DESTINY_KNOT] =
    {
        .name = _("红线"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_DESTINY_KNOT,
        .description = COMPOUND_STRING(
            "携带后，在自己着\n迷时能让对手也着\n迷的红色细线。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BLACK_SLUDGE] =
    {
        .name = _("黑色污泥"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
        .description = COMPOUND_STRING(
            "携带后毒宝可梦会\n缓回HP。其他属\n性HP则会减少。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_GRIP_CLAW] =
    {
        .name = _("紧缠钩爪"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GRIP_CLAW,
        .description = COMPOUND_STRING(
            "携带后，绑紧紧束\n等招式的回合数会\n增加。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 90,
    },

    [ITEM_STICKY_BARB] =
    {
        .name = _("附着针"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_STICKY_BARB,
        .description = COMPOUND_STRING(
            "携带后，每回合都\n会受伤。有时也会\n附到触碰对手上。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SHED_SHELL] =
    {
        .name = _("美丽空壳"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_SHED_SHELL,
        .description = COMPOUND_STRING(
            "结实坚硬的空壳。\n携带宝可梦必定可\n以换下。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BIG_ROOT] =
    {
        .name = _("大根茎"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_BIG_ROOT,
        .holdEffectParam = 30,
        .description = COMPOUND_STRING(
            "携带后，吸取类招\n式能更多地回复自\n己的HP。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RAZOR_CLAW] =
    {
        .name = _("锐利之爪"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 5000 : 2100),
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = COMPOUND_STRING(
            "尖锐的爪子。携带\n后，招式会变得容\n易击中要害。"),
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_RAZOR_FANG] =
    {
        .name = _("锐利之牙"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 5000 : 2100),
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_EVIOLITE] =
    {
        .name = _("进化奇石"),
        .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_EVIOLITE,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "携带后，还能进化\n的宝可梦的防御和\n特防就会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 40,
    },

    [ITEM_FLOAT_STONE] =
    {
        .name = _("轻石"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_FLOAT_STONE,
        .description = COMPOUND_STRING(
            "非常轻的石头。携\n带后，宝可梦的体\n重会变轻。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_ROCKY_HELMET] =
    {
        .name = _("凸凸头盔"),
        .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_ROCKY_HELMET,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "携带后，在受到打\n击招式攻击时，能\n给予对手伤害。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_AIR_BALLOON] =
    {
        .name = _("气球"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_AIR_BALLOON,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "携带后，宝可梦会\n浮在空中。受到攻\n击就会破裂。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RED_CARD] =
    {
        .name = _("红牌"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_RED_CARD,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "携带后，能让用了\n招式的对手退场的\n卡片。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RING_TARGET] =
    {
        .name = _("标靶"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_RING_TARGET,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "原本因属性而免疫\n的招式现在能够击\n中自己。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BINDING_BAND] =
    {
        .name = _("紧绑束带"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_BINDING_BAND,
        .description = COMPOUND_STRING(
            "携带后，绑紧招式\n的威力会变强的束\n带。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_EJECT_BUTTON] =
    {
        .name = _("逃脱按键"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_EJECT_BUTTON,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "携带宝可梦如果受\n到招式攻击，就能\n换下脱战。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_WEAKNESS_POLICY] =
    {
        .name = _("弱点保险"),
        .pluralName = _("WeaknssPolicies"),
        .price = (I_PRICE >= GEN_9) ? 50000 : 1000,
        .holdEffect = HOLD_EFFECT_WEAKNESS_POLICY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "被针对弱点时，攻\n击和特攻就会大幅\n提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ASSAULT_VEST] =
    {
        .name = _("突击背心"),
        .price = (I_PRICE >= GEN_9) ? 50000 : 1000,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "虽然携带后特防会\n提高，但会无法使\n出变化招式。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_SAFETY_GOGGLES] =
    {
        .name = _("防尘护目镜"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 1000),
        .holdEffect = HOLD_EFFECT_SAFETY_GOGGLES,
        .description = COMPOUND_STRING(
            "能防御天气伤害和\n粉末招式效果的护\n目镜。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ADRENALINE_ORB] =
    {
        .name = _("胆怯球"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_8) ? 4000 : 300),
        .holdEffect = HOLD_EFFECT_ADRENALINE_ORB,
        .description = COMPOUND_STRING(
            "携带后，在受到威\n吓时速度会提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_TERRAIN_EXTENDER] =
    {
        .name = _("大地膜"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
        .description = COMPOUND_STRING(
            "当携带后展开场地\n时，持续时间会比\n平时更长。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_PROTECTIVE_PADS] =
    {
        .name = _("部位护具"),
        .pluralName = _("ProtectvePads"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_PROTECTIVE_PADS,
        .description = COMPOUND_STRING(
            "不会受到触碰攻击\n对手时本应受到的\n效果。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_THROAT_SPRAY] =
    {
        .name = _("爽喉喷雾"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_THROAT_SPRAY,
        .description = COMPOUND_STRING(
            "使用声音相关的招\n式时，特攻会提高\n。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_EJECT_PACK] =
    {
        .name = _("避难背包"),
        .price = (I_PRICE >= GEN_9) ? 30000 : 4000,
        .holdEffect = HOLD_EFFECT_EJECT_PACK,
        .description = COMPOUND_STRING(
            "当携带后能力下降\n时，同行宝可梦就\n会自动替换上场。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 50,
    },

    [ITEM_HEAVY_DUTY_BOOTS] =
    {
        .name = _("厚底靴"),
        .pluralName = _("Heavy-DtyBts"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_HEAVY_DUTY_BOOTS,
        .description = COMPOUND_STRING(
            "不受脚下陷阱等的\n影响。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_BLUNDER_POLICY] =
    {
        .name = _("打空保险"),
        .pluralName = _("BlundrPolicies"),
        .price = (I_PRICE >= GEN_9) ? 30000 : 4000,
        .holdEffect = HOLD_EFFECT_BLUNDER_POLICY,
        .description = COMPOUND_STRING(
            "招式因命中率影响\n而落空时，速度会\n大幅提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
    },

    [ITEM_ROOM_SERVICE] =
    {
        .name = _("客房服务"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_ROOM_SERVICE,
        .description = COMPOUND_STRING(
            "携带后，在戏法空\n间使用时，速度会\n下降。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
    },

    [ITEM_UTILITY_UMBRELLA] =
    {
        .name = _("万能伞"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_UTILITY_UMBRELLA,
        .description = COMPOUND_STRING(
            "携带它的宝可梦将\n不受各种天气的影\n响。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
        .name = _("樱子果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = COMPOUND_STRING(
            "携带后，可以治愈\n麻痹。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_ParalyzeHeal,
        .flingPower = 10,
    },

    [ITEM_CHESTO_BERRY] =
    {
        .name = _("零余果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = COMPOUND_STRING(
            "携带后，可以治愈\n睡眠。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 10,
    },

    [ITEM_PECHA_BERRY] =
    {
        .name = _("桃桃果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = COMPOUND_STRING(
            "携带后，可以治愈\n中毒。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Antidote,
        .flingPower = 10,
    },

    [ITEM_RAWST_BERRY] =
    {
        .name = _("莓莓果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = COMPOUND_STRING(
            "携带后，可以治愈\n灼伤。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_BurnHeal,
        .flingPower = 10,
    },

    [ITEM_ASPEAR_BERRY] =
    {
        .name = _("利木果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = COMPOUND_STRING(
            "携带后，可以治愈\n冰冻。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_IceHeal,
        .flingPower = 10,
    },

    [ITEM_LEPPA_BERRY] =
    {
        .name = _("苹野果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "携带后，可以回复\n10PP。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_LeppaBerry,
        .flingPower = 10,
    },

    [ITEM_ORAN_BERRY] =
    {
        .name = _("橙橙果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "携带后，可以回复\n10HP。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_OranBerry,
        .flingPower = 10,
    },

    [ITEM_PERSIM_BERRY] =
    {
        .name = _("柿仔果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = COMPOUND_STRING(
            "携带后，可以治愈\n混乱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_PersimBerry,
        .flingPower = 10,
    },

    [ITEM_LUM_BERRY] =
    {
        .name = _("木子果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = COMPOUND_STRING(
            "携带后，可以治愈\n所有异常状态。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 10,
    },

    [ITEM_SITRUS_BERRY] =
    {
        .name = _("文柚果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        #if I_SITRUS_BERRY_HEAL >= GEN_4
            .holdEffect = HOLD_EFFECT_RESTORE_PCT_HP,
            .holdEffectParam = 25,
            .description = COMPOUND_STRING(
            "携带后，可以回复\n少量HP。"),
        #else
            .holdEffect = HOLD_EFFECT_RESTORE_HP,
            .holdEffectParam = 30,
            .description = COMPOUND_STRING(
            "携带后，可以回复\n少量HP。"),
        #endif
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SitrusBerry,
        .flingPower = 10,
    },

    [ITEM_FIGY_BERRY] =
    {
        .name = _("勿花果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WIKI_BERRY] =
    {
        .name = _("异奇果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MAGO_BERRY] =
    {
        .name = _("芒芒果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_AGUAV_BERRY] =
    {
        .name = _("乐芭果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_IAPAPA_BERRY] =
    {
        .name = _("芭亚果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RAZZ_BERRY] =
    {
        .name = _("蔓莓果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨强壮。黄色\n的果实有点酸的。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BLUK_BERRY] =
    {
        .name = _("墨莓果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨美丽。蓝色\n的果实有点涩的。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_NANAB_BERRY] =
    {
        .name = _("蕉香果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "捕捉宝可梦时，给\n它就能稍微平复一\n下情绪。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WEPEAR_BERRY] =
    {
        .name = _("西梨果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨聪明。绿色\n的果实有点苦的。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PINAP_BERRY] =
    {
        .name = _("凰梨果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨强壮。黄色\n的果实有点酸的。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_POMEG_BERRY] =
    {
        .name = _("榴石果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "给宝可梦后会变得\n容易亲密，但HP\n基础点数会降低。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_PomegBerry,
        .flingPower = 10,
    },

    [ITEM_KELPSY_BERRY] =
    {
        .name = _("藻根果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "给宝可梦后会变得\n容易亲密，但攻击\n基础点数会降低。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_KelpsyBerry,
        .flingPower = 10,
    },

    [ITEM_QUALOT_BERRY] =
    {
        .name = _("比巴果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "给宝可梦后会变得\n容易亲密，但防御\n基础点数会降低。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_QualotBerry,
        .flingPower = 10,
    },

    [ITEM_HONDEW_BERRY] =
    {
        .name = _("哈密果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "给宝可梦后会变得\n容易亲密，但特攻\n基础点数会降低。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_HondewBerry,
        .flingPower = 10,
    },

    [ITEM_GREPA_BERRY] =
    {
        .name = _("萄葡果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "给宝可梦后会变得\n容易亲密，但特防\n基础点数会降低。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_GrepaBerry,
        .flingPower = 10,
    },

    [ITEM_TAMATO_BERRY] =
    {
        .name = _("茄番果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "给宝可梦后会变得\n容易亲密，但速度\n基础点数会降低。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_TamatoBerry,
        .flingPower = 10,
    },

    [ITEM_CORNN_BERRY] =
    {
        .name = _("玉黍果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨美丽。在其\n他地区很少见。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MAGOST_BERRY] =
    {
        .name = _("岳竹果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨可爱。在其\n他地区很少见。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RABUTA_BERRY] =
    {
        .name = _("茸丹果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨聪明。在其\n他地区很少见。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_NOMEL_BERRY] =
    {
        .name = _("檬柠果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨强壮。在其\n他地区很少见。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SPELON_BERRY] =
    {
        .name = _("刺角果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨可爱。在其\n他地区很少见。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PAMTRE_BERRY] =
    {
        .name = _("椰木果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨美丽。在其\n他地区很少见。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WATMEL_BERRY] =
    {
        .name = _("Watmel Berry"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨聪明。在其\n他地区很少见。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_DURIN_BERRY] =
    {
        .name = _("金枕果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨聪明。在其\n他地区很少见。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BELUE_BERRY] =
    {
        .name = _("靛莓果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "可用于制作宝可方\n块打磨美丽。在其\n他地区很少见。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHILAN_BERRY] =
    {
        .name = _("灯浆果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_NORMAL,
        .description = COMPOUND_STRING(
            "受到一般属性招式\n攻击时，能令其威\n力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_OCCA_BERRY] =
    {
        .name = _("巧可果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIRE,
        .description = COMPOUND_STRING(
            "受效果绝佳的火属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PASSHO_BERRY] =
    {
        .name = _("千香果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_WATER,
        .description = COMPOUND_STRING(
            "受效果绝佳的水属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_WACAN_BERRY] =
    {
        .name = _("烛木果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ELECTRIC,
        .description = COMPOUND_STRING(
            "受效果绝佳的电属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_RINDO_BERRY] =
    {
        .name = _("罗子果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GRASS,
        .description = COMPOUND_STRING(
            "受效果绝佳的草属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_YACHE_BERRY] =
    {
        .name = _("番荔果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ICE,
        .description = COMPOUND_STRING(
            "受效果绝佳的冰属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHOPLE_BERRY] =
    {
        .name = _("莲蒲果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIGHTING,
        .description = COMPOUND_STRING(
            "受效果绝佳的格斗\n属性招式攻击时，\n能令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_KEBIA_BERRY] =
    {
        .name = _("通通果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_POISON,
        .description = COMPOUND_STRING(
            "受效果绝佳的毒属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SHUCA_BERRY] =
    {
        .name = _("腰木果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GROUND,
        .description = COMPOUND_STRING(
            "受效果绝佳的地面\n属性招式攻击时，\n能令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_COBA_BERRY] =
    {
        .name = _("棱瓜果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FLYING,
        .description = COMPOUND_STRING(
            "受效果绝佳的飞行\n属性招式攻击时，\n能令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PAYAPA_BERRY] =
    {
        .name = _("福禄果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_PSYCHIC,
        .description = COMPOUND_STRING(
            "受效果绝佳的超能\n属性招式攻击时，\n能令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_TANGA_BERRY] =
    {
        .name = _("扁樱果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_BUG,
        .description = COMPOUND_STRING(
            "受效果绝佳的虫属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CHARTI_BERRY] =
    {
        .name = _("草蚕果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ROCK,
        .description = COMPOUND_STRING(
            "受效果绝佳的岩石\n属性招式攻击时，\n能令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_KASIB_BERRY] =
    {
        .name = _("佛柑果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GHOST,
        .description = COMPOUND_STRING(
            "受效果绝佳的幽灵\n属性招式攻击时，\n能令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_HABAN_BERRY] =
    {
        .name = _("莓榴果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DRAGON,
        .description = COMPOUND_STRING(
            "受效果绝佳的龙属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_COLBUR_BERRY] =
    {
        .name = _("刺耳果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DARK,
        .description = COMPOUND_STRING(
            "受效果绝佳的恶属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_BABIRI_BERRY] =
    {
        .name = _("霹霹果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_STEEL,
        .description = COMPOUND_STRING(
            "受效果绝佳的钢属\n性招式攻击时，能\n令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ROSELI_BERRY] =
    {
        .name = _("洛玫果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FAIRY,
        .description = COMPOUND_STRING(
            "受效果绝佳的妖精\n属性招式攻击时，\n能令其威力减弱。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LIECHI_BERRY] =
    {
        .name = _("枝荔果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "携带后，危机时，\n自己的攻击就会提\n高。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_GANLON_BERRY] =
    {
        .name = _("龙睛果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "携带后，危机时，\n自己的防御就会提\n高。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SALAC_BERRY] =
    {
        .name = _("沙鳞果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "携带后，危机时，\n自己的速度就会提\n高。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_PETAYA_BERRY] =
    {
        .name = _("龙火果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "携带后，危机时，\n自己的特攻就会提\n高。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_APICOT_BERRY] =
    {
        .name = _("杏仔果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "携带后，危机时，\n自己的特防就会提\n高。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_LANSAT_BERRY] =
    {
        .name = _("兰萨果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "携带后，危机时，\n攻击会变得容易击\n中要害。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_STARF_BERRY] =
    {
        .name = _("星桃果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "携带后，危机时，\n某一项能力就会大\n幅提高。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ENIGMA_BERRY] =
    {
        .name = _("谜芝果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_ENIGMA_BERRY,
        .description = COMPOUND_STRING(
            "受效果绝佳的招式\n攻击时，可以回复\nHP。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MICLE_BERRY] =
    {
        .name = _("奇秘果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_MICLE_BERRY,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "携带后，危机时，\n招式的命中率仅会\n提高1次。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_CUSTAP_BERRY] =
    {
        .name = _("释陀果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CUSTAP_BERRY,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "携带后，危机时，\n行动仅会变快1次\n。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_JABOCA_BERRY] =
    {
        .name = _("嘉珍果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_JABOCA_BERRY,
        .description = COMPOUND_STRING(
            "携带后，在受到物\n理招式攻击时，能\n给予对手伤害。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ROWAP_BERRY] =
    {
        .name = _("雾莲果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_ROWAP_BERRY,
        .description = COMPOUND_STRING(
            "携带后，在受到特\n殊招式攻击时，能\n给予对手伤害。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_KEE_BERRY] =
    {
        .name = _("亚开果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_KEE_BERRY,
        .description = COMPOUND_STRING(
            "携带后，在受到物\n理招式攻击时，防\n御就会提高。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_MARANGA_BERRY] =
    {
        .name = _("香罗果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_MARANGA_BERRY,
        .description = COMPOUND_STRING(
            "携带后，在受到特\n殊招式攻击时，特\n防就会提高。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_ENIGMA_BERRY_E_READER] =
    {
        .name = _("谜芝果"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "受效果绝佳的招式\n攻击时，可以回复\nHP。"),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = EFFECT_ITEM_ENIGMA_BERRY_EREADER,
        .flingPower = 10,
    },

// TMs/HMs. They don't have a set flingPower, as that's handled by GetFlingPowerFromItemId.
//todo 汉化
[ITEM_TM_FOCUS_PUNCH] =
    {
        .name = _("TM01"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Powerful, but makes\n"
            "the user flinch if\n"
            "hit by the foe."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FOCUS_PUNCH,
    },

    [ITEM_TM_DRAGON_CLAW] =
    {
        .name = _("TM02"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Hooks and slashes\n"
            "the foe with long,\n"
            "sharp claws."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DRAGON_CLAW,
    },

    [ITEM_TM_WATER_PULSE] =
    {
        .name = _("TM03"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Generates an\n"
            "ultrasonic wave\n"
            "that may confuse."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_WATER_PULSE,
    },

    [ITEM_TM_CALM_MIND] =
    {
        .name = _("TM04"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Raises Sp. Atk and\n"
            "Sp. Def by focusing\n"
            "the mind."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_CALM_MIND,
    },

    [ITEM_TM_ROAR] =
    {
        .name = _("TM05"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "A savage roar that\n"
            "makes the foe flee \n"
            "to end the battle."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ROAR,
    },

    [ITEM_TM_TOXIC] =
    {
        .name = _("TM06"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Poisons the foe\n"
            "with a toxin that\n"
            "gradually worsens."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_TOXIC,
    },

    [ITEM_TM_HAIL] =
    {
        .name = _("TM07"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Creates a hailstorm\n"
            "that damages all\n"
            "types except Ice."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_HAIL,
    },

    [ITEM_TM_BULK_UP] =
    {
        .name = _("TM08"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Bulks up the body\n"
            "to boost both\n"
            "Attack & Defense."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_BULK_UP,
    },

    [ITEM_TM_BULLET_SEED] =
    {
        .name = _("TM09"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Shoots 2 to 5 seeds\n"
            "in a row to strike\n"
            "the foe."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_BULLET_SEED,
    },

    [ITEM_TM_HIDDEN_POWER] =
    {
        .name = _("TM10"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "The attack power\n"
            "varies among\n"
            "different Pokémon."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_HIDDEN_POWER,
    },

    [ITEM_TM_SUNNY_DAY] =
    {
        .name = _("TM11"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Raises the power of\n"
            "Fire-type moves\n"
            "for 5 turns."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SUNNY_DAY,
    },

    [ITEM_TM_TAUNT] =
    {
        .name = _("TM12"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Enrages the foe so\n"
            "it can only use\n"
            "attack moves."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_TAUNT,
    },

    [ITEM_TM_ICE_BEAM] =
    {
        .name = _("TM13"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Fires an icy cold\n"
            "beam that may\n"
        #if B_USE_FROSTBITE == TRUE
            "inflict frostbite."),
        #else
            "freeze the foe."),
        #endif
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ICE_BEAM,
    },

    [ITEM_TM_BLIZZARD] =
    {
        .name = _("TM14"),
        .price = 5500,
        .description = COMPOUND_STRING(
        #if B_USE_FROSTBITE == TRUE
            "A snow-and-wind\n"
            "attack that may\n"
            "inflict frostbite."),
        #else
            "A brutal snow-and-\n"
            "wind attack that\n"
            "may freeze the foe."),
        #endif
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_BLIZZARD,
    },

    [ITEM_TM_HYPER_BEAM] =
    {
        .name = _("TM15"),
        .price = 7500,
        .description = COMPOUND_STRING(
            "Powerful, but needs\n"
            "recharging the\n"
            "next turn."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_HYPER_BEAM,
    },

    [ITEM_TM_LIGHT_SCREEN] =
    {
        .name = _("TM16"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Creates a wall of\n"
            "light that lowers\n"
            "Sp. Atk damage."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_LIGHT_SCREEN,
    },

    [ITEM_TM_PROTECT] =
    {
        .name = _("TM17"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Negates all damage,\n"
            "but may fail if used\n"
            "in succession."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_PROTECT,
    },

    [ITEM_TM_RAIN_DANCE] =
    {
        .name = _("TM18"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Raises the power of\n"
            "Water-type moves\n"
            "for 5 turns."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_RAIN_DANCE,
    },

    [ITEM_TM_GIGA_DRAIN] =
    {
        .name = _("TM19"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Recovers half the\n"
            "HP of the damage \n"
            "this move inflicts."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_GIGA_DRAIN,
    },

    [ITEM_TM_SAFEGUARD] =
    {
        .name = _("TM20"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Prevents status\n"
            "abnormality with a\n"
            "mystical power."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SAFEGUARD,
    },

    [ITEM_TM_FRUSTRATION] =
    {
        .name = _("TM21"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "The less the user\n"
            "likes you, the more\n"
            "powerful this move."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FRUSTRATION,
    },

    [ITEM_TM_SOLAR_BEAM] =
    {
        .name = _("TM22"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Absorbs sunlight in\n"
            "the 1st turn, then\n"
            "attacks next turn."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SOLAR_BEAM,
    },

    [ITEM_TM_IRON_TAIL] =
    {
        .name = _("TM23"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Slams the foe with\n"
            "a hard tail. It may\n"
            "lower Defense."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_IRON_TAIL,
    },

    [ITEM_TM_THUNDERBOLT] =
    {
        .name = _("TM24"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "A powerful electric\n"
            "attack that may\n"
            "cause paralysis."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_THUNDERBOLT,
    },

    [ITEM_TM_THUNDER] =
    {
        .name = _("TM25"),
        .price = 5500,
        .description = COMPOUND_STRING(
            "Strikes the foe\n"
            "with a thunderbolt.\n"
            "It may paralyze."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_THUNDER,
    },

    [ITEM_TM_EARTHQUAKE] =
    {
        .name = _("TM26"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Causes a quake\n"
            "that has no effect\n"
            "on flying foes."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_EARTHQUAKE,
    },

    [ITEM_TM_RETURN] =
    {
        .name = _("TM27"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "The more the user\n"
            "likes you, the more\n"
            "powerful this move."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_RETURN,
    },

    [ITEM_TM_DIG] =
    {
        .name = _("TM28"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Digs underground\n"
            "the 1st turn, then\n"
            "strikes next turn."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DIG,
    },

    [ITEM_TM_PSYCHIC] =
    {
        .name = _("TM29"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "A powerful psychic\n"
            "attack that may\n"
            "lower Sp. Def."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_PSYCHIC,
    },

    [ITEM_TM_SHADOW_BALL] =
    {
        .name = _("TM30"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Hurls a dark lump\n"
            "at the foe. It may\n"
            "lower Sp. Def."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SHADOW_BALL,
    },

    [ITEM_TM_BRICK_BREAK] =
    {
        .name = _("TM31"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Destroys barriers\n"
            "like Light Screen\n"
            "and causes damage."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_BRICK_BREAK,
    },

    [ITEM_TM_DOUBLE_TEAM] =
    {
        .name = _("TM32"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Creates illusory\n"
            "copies to enhance\n"
            "elusiveness."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DOUBLE_TEAM,
    },

    [ITEM_TM_REFLECT] =
    {
        .name = _("TM33"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Creates a wall of\n"
            "light that weakens\n"
            "physical attacks."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_REFLECT,
    },

    [ITEM_TM_SHOCK_WAVE] =
    {
        .name = _("TM34"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Zaps the foe with a\n"
            "jolt of electricity\n"
            "that never misses."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SHOCK_WAVE,
    },

    [ITEM_TM_FLAMETHROWER] =
    {
        .name = _("TM35"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Looses a stream of\n"
            "fire that may burn\n"
            "the foe."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FLAMETHROWER,
    },

    [ITEM_TM_SLUDGE_BOMB] =
    {
        .name = _("TM36"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Hurls sludge at the\n"
            "foe. It may poison\n"
            "the foe."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SLUDGE_BOMB,
    },

    [ITEM_TM_SANDSTORM] =
    {
        .name = _("TM37"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "Causes a sandstorm\n"
            "that hits the foe\n"
            "over several turns."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SANDSTORM,
    },

    [ITEM_TM_FIRE_BLAST] =
    {
        .name = _("TM38"),
        .price = 5500,
        .description = COMPOUND_STRING(
            "A powerful fire\n"
            "attack that may\n"
            "burn the foe."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FIRE_BLAST,
    },

    [ITEM_TM_ROCK_TOMB] =
    {
        .name = _("TM39"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Stops the foe from\n"
            "moving with rocks.\n"
            "May lower Speed."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ROCK_TOMB,
    },

    [ITEM_TM_AERIAL_ACE] =
    {
        .name = _("TM40"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "An extremely fast\n"
            "attack that can't\n"
            "be avoided."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_AERIAL_ACE,
    },

    [ITEM_TM_TORMENT] =
    {
        .name = _("TM41"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Prevents the foe\n"
            "from using the same\n"
            "move in a row."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_TORMENT,
    },

    [ITEM_TM_FACADE] =
    {
        .name = _("TM42"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Raises Attack when\n"
            "poisoned, burned,\n"
            "or paralyzed."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FACADE,
    },

    [ITEM_TM_SECRET_POWER] =
    {
        .name = _("TM43"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Adds an effect to\n"
            "attack depending\n"
            "on the location."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SECRET_POWER,
    },

    [ITEM_TM_REST] =
    {
        .name = _("TM44"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "The user sleeps for\n"
            "2 turns to restore\n"
            "health and status."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_REST,
    },

    [ITEM_TM_ATTRACT] =
    {
        .name = _("TM45"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Makes it tough to\n"
            "attack a foe of the\n"
            "opposite gender."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ATTRACT,
    },

    [ITEM_TM_THIEF] =
    {
        .name = _("TM46"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "While attacking,\n"
            "it may steal the\n"
            "foe's held item."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_THIEF,
    },

    [ITEM_TM_STEEL_WING] =
    {
        .name = _("TM47"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Spreads hard-\n"
            "edged wings and\n"
            "slams into the foe."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_STEEL_WING,
    },

    [ITEM_TM_SKILL_SWAP] =
    {
        .name = _("TM48"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Switches abilities\n"
            "with the foe on the\n"
            "turn this is used."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SKILL_SWAP,
    },

    [ITEM_TM_SNATCH] =
    {
        .name = _("TM49"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Steals the effects\n"
            "of the move the foe\n"
            "is trying to use."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SNATCH,
    },

    [ITEM_TM_OVERHEAT] =
    {
        .name = _("TM50"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "Enables full-power\n"
            "attack, but sharply\n"
            "lowers Sp. Atk."),
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_OVERHEAT,
    },

    [ITEM_TM51] =
    {
        .name = _("TM51"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM52] =
    {
        .name = _("TM52"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM53] =
    {
        .name = _("TM53"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM54] =
    {
        .name = _("TM54"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM55] =
    {
        .name = _("TM55"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM56] =
    {
        .name = _("TM56"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM57] =
    {
        .name = _("TM57"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM58] =
    {
        .name = _("TM58"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM59] =
    {
        .name = _("TM59"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM60] =
    {
        .name = _("TM60"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM61] =
    {
        .name = _("TM61"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM62] =
    {
        .name = _("TM62"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM63] =
    {
        .name = _("TM63"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM64] =
    {
        .name = _("TM64"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM65] =
    {
        .name = _("TM65"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM66] =
    {
        .name = _("TM66"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM67] =
    {
        .name = _("TM67"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM68] =
    {
        .name = _("TM68"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM69] =
    {
        .name = _("TM69"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM70] =
    {
        .name = _("TM70"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM71] =
    {
        .name = _("TM71"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM72] =
    {
        .name = _("TM72"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM73] =
    {
        .name = _("TM73"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM74] =
    {
        .name = _("TM74"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM75] =
    {
        .name = _("TM75"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM76] =
    {
        .name = _("TM76"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM77] =
    {
        .name = _("TM77"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM78] =
    {
        .name = _("TM78"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM79] =
    {
        .name = _("TM79"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM80] =
    {
        .name = _("TM80"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM81] =
    {
        .name = _("TM81"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM82] =
    {
        .name = _("TM82"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM83] =
    {
        .name = _("TM83"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM84] =
    {
        .name = _("TM84"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM85] =
    {
        .name = _("TM85"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM86] =
    {
        .name = _("TM86"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM87] =
    {
        .name = _("TM87"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM88] =
    {
        .name = _("TM88"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM89] =
    {
        .name = _("TM89"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM90] =
    {
        .name = _("TM90"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM91] =
    {
        .name = _("TM91"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM92] =
    {
        .name = _("TM92"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM93] =
    {
        .name = _("TM93"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM94] =
    {
        .name = _("TM94"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM95] =
    {
        .name = _("TM95"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM96] =
    {
        .name = _("TM96"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM97] =
    {
        .name = _("TM97"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM98] =
    {
        .name = _("TM98"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM99] =
    {
        .name = _("TM99"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

    [ITEM_TM100] =
    {
        .name = _("TM100"),
        .price = 3000,
        .description = sQuestionMarksDesc, // Todo
        .importance = I_REUSABLE_TMS,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_NONE, // Todo
    },

[ITEM_HM_CUT] =
    {
        .name = _("HM01"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Attacks the foe\n"
            "with sharp blades\n"
            "or claws."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_CUT,
    },

    [ITEM_HM_FLY] =
    {
        .name = _("HM02"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Flies up on the\n"
            "first turn, then\n"
            "attacks next turn."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FLY,
    },

    [ITEM_HM_SURF] =
    {
        .name = _("HM03"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Creates a huge\n"
            "wave, then crashes\n"
            "it down on the foe."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_SURF,
    },

    [ITEM_HM_STRENGTH] =
    {
        .name = _("HM04"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Builds enormous\n"
            "power, then slams\n"
            "the foe."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_STRENGTH,
    },

    [ITEM_HM_FLASH] =
    {
        .name = _("HM05"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Looses a powerful\n"
            "blast of light that\n"
            "reduces accuracy."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_FLASH,
    },

    [ITEM_HM_ROCK_SMASH] =
    {
        .name = _("HM06"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A rock-crushingly\n"
            "tough attack that\n"
            "may lower Defense."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_ROCK_SMASH,
    },

    [ITEM_HM_WATERFALL] =
    {
        .name = _("HM07"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Attacks the foe\n"
            "with enough power\n"
            "to climb waterfalls."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_WATERFALL,
    },

    [ITEM_HM_DIVE] =
    {
        .name = _("HM08"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Dives underwater\n"
            "the 1st turn, then\n"
            "attacks next turn."),
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .secondaryId = MOVE_DIVE,
    },
//todo汉化

// Charms

    [ITEM_OVAL_CHARM] =
    {
        .name = _("圆形护符"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "在野餐时会更容易\n找到蛋的神奇浑圆\n护符。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHINY_CHARM] =
    {
        .name = _("闪耀护符"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "据说会更容易遇见\n发光宝可梦的神奇\n闪光护符。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CATCHING_CHARM] =
    {
        .name = _("防晃护符"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "带上它就能更容易\n触发会心捕捉。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXP_CHARM] =
    {
        .name = _("经验护符"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "拥有后，宝可梦获\n得的经验值就会增\n加。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Form-changing Key Items

    [ITEM_ROTOM_CATALOG] =
    {
        .name = _("洛托姆型录"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "通过使用这本指南\n，可以让洛托姆潜\n入或脱离家电。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RotomCatalog,
    },

    [ITEM_GRACIDEA] =
    {
        .name = _("葛拉西蒂亚花"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "为了表达感激之情\n，有时会将其扎成\n花束送出。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    },

    [ITEM_REVEAL_GLASS] =
    {
        .name = _("现形镜"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "能够通过照出真实\n，让宝可梦变回原\n样的神奇镜子。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    },

    [ITEM_DNA_SPLICERS] =
    {
        .name = _("基因之楔"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "据说能让原本为一\n体的酋雷姆和某宝\n可梦合体的楔子。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    },

    [ITEM_ZYGARDE_CUBE] =
    {
        .name = _("Z细胞多面体"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "用于收集宝可梦基\n格尔德的核心和细\n胞的道具。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ZygardeCube,
    },

    [ITEM_PRISON_BOTTLE] =
    {
        .name = _("惩戒之壶"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "据说在很久以前封\n印着某只宝可梦力\n量的壶。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    },

    [ITEM_N_SOLARIZER] =
    {
        .name = _("奈克-索尔机器"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "用来让需求光的奈\n克洛兹玛和索尔迦\n雷欧合体的机器。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    },

    [ITEM_N_LUNARIZER] =
    {
        .name = _("奈克-露奈机器"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "用来让需求光的奈\n克洛兹玛和露奈雅\n拉合体的机器。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    },

    [ITEM_REINS_OF_UNITY] =
    {
        .name = _("牵绊缰绳"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "拿到光下即可生辉\n的布。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    },

// Battle Mechanic Key Items

    [ITEM_MEGA_RING] =
    {
        .name = _("超级环"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "能让携带着超级石\n战斗的宝可梦超级\n进化的圆环。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_Z_POWER_RING] =
    {
        .name = _("Z强力手环"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "通过使用训练家来\n让宝可梦释放出Z\n力量的神奇手环。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DYNAMAX_BAND] =
    {
        .name = _("极巨腕带"),
        .price = 0,
        .description = COMPOUND_STRING(
            "内嵌了许愿星，在\n能量点会发出光芒\n使宝可梦极巨化。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Misc. Key Items

    [ITEM_BICYCLE] =
    {
        .name = _("自行车"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能比跑步鞋跑得还\n快的折叠式自行车\n。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MACH_BIKE] =
    {
        .name = _("音速自行车"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能以2倍以上的速\n度移动的折叠式自\n行车。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = MACH_BIKE,
    },

    [ITEM_ACRO_BIKE] =
    {
        .name = _("越野自行车"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能做出跳跃或抬前\n轮动作的折叠式自\n行车。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = ACRO_BIKE,
    },

    [ITEM_OLD_ROD] =
    {
        .name = _("破旧钓竿"),
        .price = 0,
        .description = COMPOUND_STRING(
            "又破又旧的钓竿。\n在有水的地方可以\n钓到宝可梦。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = OLD_ROD,
    },

    [ITEM_GOOD_ROD] =
    {
        .name = _("好钓竿"),
        .price = 0,
        .description = COMPOUND_STRING(
            "不错的新钓竿。在\n有水的地方可以钓\n到宝可梦。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = GOOD_ROD,
    },

    [ITEM_SUPER_ROD] =
    {
        .name = _("厉害钓竿"),
        .price = 0,
        .description = COMPOUND_STRING(
            "最新的厉害钓竿。\n在有水的地方可以\n钓到宝可梦。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = SUPER_ROD,
    },

    [ITEM_DOWSING_MACHINE] =
    {
        .name = _("探宝机"),
        .price = 0,
        .description = COMPOUND_STRING(
            "会对看不见的道具\n起反应的最尖端机\n器。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
    },

    [ITEM_TOWN_MAP] =
    {
        .name = _("城镇地图"),
        .price = 0,
        .description = COMPOUND_STRING(
            "可以随时轻松查看\n的便利地图。也能\n清楚自己的位置。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_VS_SEEKER] =
    {
        .name = _("对战搜寻器"),
        .price = 0,
        .description = COMPOUND_STRING(
            "会告诉你想对战的\n训练家在哪的机器\n。走路就能充电。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
#if I_VS_SEEKER_CHARGING != 0
        .fieldUseFunc = FieldUseFunc_VsSeeker,
#else
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
#endif
    },

    [ITEM_TM_CASE] =
    {
        .name = _("技能机器盒子"),
        .price = 0,
        .description = COMPOUND_STRING(
            "用来存放招式学习\n器的盒子，放在重\n要物品口袋里。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BERRY_POUCH] =
    {
        .name = _("树果袋"),
        .price = 0,
        .description = COMPOUND_STRING(
            "将树果收集起来的\n袋子，放在包包的\n重要物品口袋里。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKEMON_BOX_LINK] =
    {
        .name = _("宝可梦盒"),
        .price = 0,
        .description = COMPOUND_STRING(
            "可以随时访问宝可\n梦中心电脑里的盒\n子。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_PokemonBoxLink,
    },

    [ITEM_COIN_CASE] =
    {
        .name = _("代币盒"),
        .price = 0,
        .description = COMPOUND_STRING(
            "可以存放代币的盒\n子。最多能放入\n50000枚。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
    },

    [ITEM_POWDER_JAR] =
    {
        .name = _("粉末收集瓶"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能收纳树果碾碎器\n制作出的树果粉末\n的保存用瓶子。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
    },

    [ITEM_WAILMER_PAIL] =
    {
        .name = _("吼吼鲸喷壶"),
        .price = 0,
        .description = COMPOUND_STRING(
            "浇水的道具。能让\n埋在土壤里的树果\n快快长大。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
    },

    [ITEM_POKE_RADAR] =
    {
        .name = _("宝可追踪"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能够将藏在草丛里\n的宝可梦找出来的\n道具。走路充电。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
    },

    [ITEM_POKEBLOCK_CASE] =
    {
        .name = _("宝可方块盒"),
        .price = 0,
        .description = COMPOUND_STRING(
            "可以用来放置用树\n果混合器制造的宝\n可方块的盒子。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PBLOCK_CASE,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
    },

    [ITEM_SOOT_SACK] =
    {
        .name = _("集灰袋"),
        .price = 0,
        .description = COMPOUND_STRING(
            "将堆积起来的火山\n灰收集起来的袋子\n。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKE_FLUTE] =
    {
        .name = _("宝可梦之笛"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能吹出让睡着的宝\n可梦都会醒来的美\n妙音色的笛子。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FAME_CHECKER] =
    {
        .name = _("声音记录器"),
        .price = 0,
        .description = COMPOUND_STRING(
            "可以重复查看打听\n到的有名人物的东\n西。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEACHY_TV] =
    {
        .name = _("教学电视"),
        .price = 0,
        .description = COMPOUND_STRING(
            "可以收看对新手训\n练家有帮助的节目\n的电视。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Story Key Items

    [ITEM_SS_TICKET] =
    {
        .name = _("船票"),
        .price = 0,
        .description = COMPOUND_STRING(
            "乘坐圣特安努号时\n所需的船票。上面\n绘有船的图案。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EON_TICKET] =
    {
        .name = _("无限船票"),
        .price = 0,
        .description = COMPOUND_STRING(
            "前往南方孤岛的船\n票。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 1,
    },

    [ITEM_MYSTIC_TICKET] =
    {
        .name = _("神秘船票"),
        .price = 0,
        .description = COMPOUND_STRING(
            "前往肚脐岩时必要\n的船票。神秘地发\n着光。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AURORA_TICKET] =
    {
        .name = _("极光船票"),
        .price = 0,
        .description = COMPOUND_STRING(
            "前往诞生之岛时必\n要的船票。美丽地\n散发着光芒。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OLD_SEA_MAP] =
    {
        .name = _("古航海图"),
        .price = 0,
        .description = COMPOUND_STRING(
            "记录着前往某座岛\n屿的路线的一张古\n老的航海图。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LETTER] =
    {
        .name = _("给大吾的信"),
        .price = 0,
        .description = COMPOUND_STRING(
            "从得文社长那里得\n到的信。"),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_PARTS] =
    {
        .name = _("德文的物品"),
        .pluralName = _("Devon Parts"),
        .price = 0,
        .description = COMPOUND_STRING(
            "此物品里面放着的\n是得文制造的某种\n零件。"),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GO_GOGGLES] =
    {
        .name = _("GOGO护目镜"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能在沙漠的沙暴中\n保护眼睛的出色护\n目镜。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_SCOPE] =
    {
        .name = _("得文侦测镜"),
        .price = 0,
        .description = COMPOUND_STRING(
            "会对看不见的宝可\n梦起反应的得文特\n制产品。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BASEMENT_KEY] =
    {
        .name = _("地下钥匙"),
        .price = 0,
        .description = COMPOUND_STRING(
            "用来打开满金地道\n大门的钥匙。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCANNER] =
    {
        .name = _("探测器"),
        .price = 0,
        .description = COMPOUND_STRING(
            "在海紫堇中找到的\n道具。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STORAGE_KEY] =
    {
        .name = _("仓库钥匙"),
        .price = 0,
        .description = COMPOUND_STRING(
            "进入海紫堇的仓库\n时所需的钥匙。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_1] =
    {
        .name = _("1号房间钥匙"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_2] =
    {
        .name = _("2号房间钥匙"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_4] =
    {
        .name = _("4号房间钥匙"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_6] =
    {
        .name = _("6号房间钥匙"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METEORITE] =
    {
        .name = _("陨石"),
        .price = 0,
        .description = COMPOUND_STRING(
            "原本是落入流星瀑\n布里的陨石。是在\n烟囱山获得的。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
    },

    [ITEM_MAGMA_EMBLEM] =
    {
        .name = _("熔岩标志"),
        .price = 0,
        .description = COMPOUND_STRING(
            "与熔岩队的标志形\n状相同的徽章模样\n的东西。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CONTEST_PASS] =
    {
        .name = _("华丽大赛证"),
        .price = 0,
        .description = COMPOUND_STRING(
            "拿着它就可以参加\n华丽大赛。上面印\n有纪念奖章。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PARCEL] =
    {
        .name = _("包裹"),
        .price = 0,
        .description = COMPOUND_STRING(
            "常青市的友好商店\n托付的包裹。需要\n交给大木博士。"),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SECRET_KEY] =
    {
        .name = _("秘密钥匙"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能打开红莲岛上那\n座宝可梦道馆的钥\n匙。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIKE_VOUCHER] =
    {
        .name = _("兑换券"),
        .price = 0,
        .description = COMPOUND_STRING(
            "给华蓝市的奇迹自\n行车店就能交换得\n到自行车。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GOLD_TEETH] =
    {
        .name = _("金假牙"),
        .price = 0,
        .description = COMPOUND_STRING(
            "狩猎地带的园长遗\n失的金假牙。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CARD_KEY] =
    {
        .name = _("钥匙卡"),
        .price = 0,
        .description = COMPOUND_STRING(
            "用来打开的西尔佛\n公司总部大厦门锁\n的卡片式钥匙。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIFT_KEY] =
    {
        .name = _("电梯钥匙"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能启动位于火箭队\n基地的电梯。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILPH_SCOPE] =
    {
        .name = _("西尔佛检视镜"),
        .price = 0,
        .description = COMPOUND_STRING(
            "可以看见人眼无法\n看见的东西。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TRI_PASS] =
    {
        .name = _("三岛通行船券"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能够在第1、2、\n3岛之间用渡船移\n动的通行证。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAINBOW_PASS] =
    {
        .name = _("七彩通行船券"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能够在枯叶市和七\n之岛之间用渡船移\n动的通行证。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEA] =
    {
        .name = _("茶"),
        .price = 0,
        .description = COMPOUND_STRING(
            "有一点点苦，却又\n芬芳宜人的香茶。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUBY] =
    {
        .name = _("红宝石"),
        .price = 0,
        .description = COMPOUND_STRING(
            "散发着红色光辉的\n非常漂亮的宝石。\n热情的象征。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SAPPHIRE] =
    {
        .name = _("蓝宝石"),
        .price = 0,
        .description = COMPOUND_STRING(
            "散发着蓝色光辉的\n非常漂亮的宝石。\n真诚的象征。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ABILITY_SHIELD] =
    {
        .name = _("特性护具"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_ABILITY_SHIELD,
        .description = COMPOUND_STRING(
            "可爱而有个性的盾\n。携带后，特性不\n会被对手改变。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

// GEN 9 ITEMS

    [ITEM_CLEAR_AMULET] =
    {
        .name = _("清净坠饰"),
        .price = 30000,
        .holdEffect = HOLD_EFFECT_CLEAR_AMULET,
        .description = COMPOUND_STRING(
            "光芒晶莹剔透的坠\n饰。携带后不会因\n为对手降低能力。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_PUNCHING_GLOVE] =
    {
        .name = _("拳击手套"),
        .price = 15000,
        .holdEffect = HOLD_EFFECT_PUNCHING_GLOVE,
        .description = COMPOUND_STRING(
            "携带后，拳击招式\n威力提高，且不会\n接触到对手。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_COVERT_CLOAK] =
    {
        .name = _("密探斗篷"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_COVERT_CLOAK,
        .description = COMPOUND_STRING(
            "携带后，变得不会\n受到招式的追加效\n果影响。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_LOADED_DICE] =
    {
        .name = _("机变骰子"),
        .price = 20000,
        .holdEffect = HOLD_EFFECT_LOADED_DICE,
        .description = COMPOUND_STRING(
            "携带后，在使用连\n续招式时，能使出\n较多次招式。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_AUSPICIOUS_ARMOR] =
    {
        .name = _("庆祝之铠"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "能让某些宝可梦进\n化的神奇铠甲。蕴\n含着祝贺的感情。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_BOOSTER_ENERGY] =
    {
        .name = _("驱劲能量"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_BOOSTER_ENERGY,
        .description = COMPOUND_STRING(
            "让有某种特性的宝\n可梦携带后能力会\n提升的胶囊。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BIG_BAMBOO_SHOOT] =
    {
        .name = _("大竹笋"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "大大的珍贵竹笋。\n在部分美食家中拥\n有非常高人气。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_GIMMIGHOUL_COIN] =
    {
        .name = _("索财灵的硬币"),
        .price = 400,
        .description = COMPOUND_STRING(
            "宝可梦掉落的东西\n。索财灵珍爱有加\n地收集着它。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LEADERS_CREST] =
    {
        .name = _("头领凭证"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "只有率领着驹刀小\n兵群体的劈斩司令\n能携带着的碎片。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MALICIOUS_ARMOR] =
    {
        .name = _("咒术之铠"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "能让某些宝可梦进\n化的神奇铠甲。蕴\n含着诅咒的感情。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_MIRROR_HERB] =
    {
        .name = _("模仿香草"),
        .price = 30000,
        .holdEffect = HOLD_EFFECT_MIRROR_HERB,
        .description = COMPOUND_STRING(
            "仅有1次可在对手\n提高能力时，模仿\n提高同样的能力。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_SCROLL_OF_DARKNESS] =
    {
        .name = _("恶之挂轴"),
        .pluralName = _("ScrllsOfDrknss"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能让某些宝可梦进\n化的神奇挂轴。上\n面写着恶之奥秘。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
    },

    [ITEM_SCROLL_OF_WATERS] =
    {
        .name = _("水之挂轴"),
        .pluralName = _("ScrollsOfWatrs"),
        .price = 0,
        .description = COMPOUND_STRING(
            "能让某些宝可梦进\n化的神奇挂轴。上\n面写着水之奥秘。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
    },

    [ITEM_TERA_ORB] =
    {
        .name = _("太晶珠"),
        .price = 0,
        .description = COMPOUND_STRING(
            "蕴藏着结晶之力的\n宝珠。蓄能后能够\n让宝可梦太晶化。"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TINY_BAMBOO_SHOOT] =
    {
        .name =_("小竹笋"),
        .price = 750,
        .description = COMPOUND_STRING(
            "小小的珍贵竹笋。\n在部分美食家中拥\n有很高人气。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
    },

    [ITEM_BUG_TERA_SHARD] =
    {
        .name =_("虫太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DARK_TERA_SHARD] =
    {
        .name =_("恶太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_TERA_SHARD] =
    {
        .name =_("龙太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ELECTRIC_TERA_SHARD] =
    {
        .name =_("电太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FAIRY_TERA_SHARD] =
    {
        .name =_("妖精太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FIGHTING_TERA_SHARD] =
    {
        .name =_("格斗太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FIRE_TERA_SHARD] =
    {
        .name =_("火太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FLYING_TERA_SHARD] =
    {
        .name =_("飞行太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GHOST_TERA_SHARD] =
    {
        .name =_("幽灵太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRASS_TERA_SHARD] =
    {
        .name =_("草太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GROUND_TERA_SHARD] =
    {
        .name =_("地面太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ICE_TERA_SHARD] =
    {
        .name =_("冰太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NORMAL_TERA_SHARD] =
    {
        .name =_("一般太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POISON_TERA_SHARD] =
    {
        .name =_("毒太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PSYCHIC_TERA_SHARD] =
    {
        .name =_("超能太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROCK_TERA_SHARD] =
    {
        .name =_("岩石太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STEEL_TERA_SHARD] =
    {
        .name =_("钢太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WATER_TERA_SHARD] =
    {
        .name =_("水太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_ADAMANT_CRYSTAL] =
    {
        .name =_("大金刚宝玉"),
        .price = 0,
        .description = COMPOUND_STRING(
            "对帝牙卢卡使用后\n，能使之力量高涨\n并改变形态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_GRISEOUS_CORE] =
    {
        .name = _("大白金宝玉"),
        .price = 0,
        .description = COMPOUND_STRING(
            "对骑拉帝纳使用后\n，能使之力量高涨\n并改变形态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_LUSTROUS_GLOBE] =
    {
        .name = _("大白宝玉"),
        .price = 0,
        .description = COMPOUND_STRING(
            "对帕路奇亚使用后\n，能使之力量高涨\n并改变形态。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
    },

    [ITEM_BLACK_AUGURITE] =
    {
        .name = _("黑奇石"),
        .price = 8000,
        .description = COMPOUND_STRING(
            "碎后会变得锋利似\n玻璃的黑石。某种\n宝可梦很喜欢它。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_LINKING_CORD] =
    {
        .name = _("联系绳"),
        .price = 8000,
        .description = COMPOUND_STRING(
            "蕴藏着不可思议能\n量的绳子。某种宝\n可梦们很喜欢它。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_PEAT_BLOCK] =
    {
        .name = _("泥炭块"),
        .price = 10000,
        .description = COMPOUND_STRING(
            "质地像是泥土的煤\n炭块。某种宝可梦\n很喜欢它。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_BERSERK_GENE] =
    {
        .name = _("破坏基因"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_BERSERK_GENE,
        .description = COMPOUND_STRING(
            "攻击的威力就会提\n高，但会造成混乱\n。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_FAIRY_FEATHER] =
    {
        .name = _("妖精之羽"),
        .price = 1000,
        .holdEffect = HOLD_EFFECT_FAIRY_POWER,
        .holdEffectParam = TYPE_BOOST_PARAM,
        .description = COMPOUND_STRING(
            "遇光后微微发光的\n羽毛。携带后妖精\n招式威力提高。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
    },

    [ITEM_SYRUPY_APPLE] =
    {
        .name = _("蜜汁苹果"),
        .price = 2200,
        .description = COMPOUND_STRING(
            "这种神奇的苹果可\n以使特定的宝可梦\n进化。富含蜜汁。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
    },

    [ITEM_UNREMARKABLE_TEACUP] =
    {
        .name = _("凡作茶碗"),
        .price = 1600,
        .description = COMPOUND_STRING(
            "这个神奇的茶碗虽\n然破裂，可以使特\n定的宝可梦进化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_MASTERPIECE_TEACUP] =
    {
        .name = _("杰作茶碗"),
        .price = 38000,
        .description = COMPOUND_STRING(
            "这个神奇的茶碗虽\n然破缺，可以使特\n定的宝可梦进化。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
    },

    [ITEM_CORNERSTONE_MASK] =
    {
        .name = _("础石面具"),
        .price = 0,
        .description = COMPOUND_STRING(
            "厄诡椪携带后，就\n会用岩石属性覆盖\n全身进行战斗。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WELLSPRING_MASK] =
    {
        .name = _("水井面具"),
        .price = 0,
        .description = COMPOUND_STRING(
            "厄诡椪携带后，就\n会用水属性覆盖全\n身进行战斗。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEARTHFLAME_MASK] =
    {
        .name = _("火灶面具"),
        .price = 0,
        .description = COMPOUND_STRING(
            "厄诡椪携带后，就\n会用火属性覆盖全\n身进行战斗。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEALTH_MOCHI] =
    {
        .name = _("体力粘糕"),
        .pluralName = _("体力粘糕(多)"),
        .price = 500,
        .description = sHealthFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_HpMochi,
        .flingPower = 30,
    },

    [ITEM_MUSCLE_MOCHI] =
    {
        .name = _("肌力粘糕"),
        .price = 500,
        .description = sMuscleFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_AtkMochi,
        .flingPower = 30,
    },

    [ITEM_RESIST_MOCHI] =
    {
        .name = _("抵抗粘糕"),
        .price = 500,
        .description = sResistFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_DefMochi,
        .flingPower = 30,
    },

    [ITEM_GENIUS_MOCHI] =
    {
        .name = _("智力粘糕"),
        .price = 500,
        .description = sGeniusFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpatkMochi,
        .flingPower = 30,
    },

    [ITEM_CLEVER_MOCHI] =
    {
        .name = _("精神粘糕"),
        .price = 500,
        .description = sCleverFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpdefMochi,
        .flingPower = 30,
    },

    [ITEM_SWIFT_MOCHI] =
    {
        .name = _("瞬发粘糕"),
        .price = 500,
        .description = sSwiftFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpeedMochi,
        .flingPower = 30,
    },

    [ITEM_FRESH_START_MOCHI] =
    {
        .name = _("净空粘糕"),
        .pluralName = _("净空粘糕(多)"),
        .price = 300,
        .description = COMPOUND_STRING(
            "糅合树果的粘糕。\n能让宝可梦的基础\n点数全部消失。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ResetEVs,
        .effect = gItemEffect_ResetMochi,
        .flingPower = 30,
    },

    [ITEM_GLIMMERING_CHARM] =
    {
        .name = _("晶耀护符"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "在太晶团体战中会\n获得更多太晶碎块\n的护符。"),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_METAL_ALLOY] =
    {
        .name = _("复合金属"),
        .price = 6000,
        .description = COMPOUND_STRING(
            "能让某些宝可梦进\n化的神奇金属。由\n多层次叠加而成。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
    },

    [ITEM_STELLAR_TERA_SHARD] =
    {
        .name = _("星晶太晶碎块"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_JUBILIFE_MUFFIN] =
    {
        .name = _("祝庆玛芬"),
        .price = 250,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .flingPower = 30,
    },

    [ITEM_REMEDY] =
    {
        .name = _("中药"),
        .price = 150,
        .description = COMPOUND_STRING(
            "能让宝可梦回复6\n0HP，但很苦，\n友好度会降低。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Remedy,
        .flingPower = 30,
    },

    [ITEM_FINE_REMEDY] =
    {
        .name = _("好中药"),
        .price = 150,
        .description = COMPOUND_STRING(
            "能让宝可梦回复1\n00HP，但很苦\n，友好度会降低。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_FineRemedy,
        .flingPower = 30,
    },

    [ITEM_SUPERB_REMEDY] =
    {
        .name = _("厉害中药"),
        .price = 750,
        .description = COMPOUND_STRING(
            "能让宝可梦回复1\n50HP，但很苦\n，友好度会降低。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SuperbRemedy,
        .flingPower = 30,
    },

    [ITEM_AUX_EVASION] =
    {
        .name = _("闪避强化"),
        .price = 800,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "让宝可梦在战斗中\n变得较不易被对手\n招式命中的道具。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
    },

    [ITEM_AUX_GUARD] =
    {
        .name = _("防守药丸"),
        .price = 400,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "大大提高战斗中宝\n可梦防守力的道具\n。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
    },

    [ITEM_AUX_POWER] =
    {
        .name = _("进攻药丸"),
        .price = 400,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "大大提高战斗中宝\n可梦进攻力的道具\n。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
    },

    [ITEM_AUX_POWERGUARD] =
    {
        .name = _("多重强化"),
        .price = 1200,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
            "大大提高战斗中宝\n可梦进攻力和防守\n力的道具。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
    },

    [ITEM_CHOICE_DUMPLING] =
    {
        .name = _("讲究粽"),
        .price = 1200,
        .description = COMPOUND_STRING(
            "使用后会让宝可梦\n陷入热衷的粽子。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
    },

    [ITEM_SWAP_SNACK] =
    {
        .name = _("颠倒烧"),
        .price = 1200,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
    },

    [ITEM_TWICE_SPICED_RADISH] =
    {
        .name = _("双倍腌菜"),
        .price = 1600,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
    },

    [ITEM_POKESHI_DOLL] =
    {
        .name = _("宝可梦木娃娃"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "宝可梦造型的木制\n玩具。可以在杂货\n店出售。"),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
};
