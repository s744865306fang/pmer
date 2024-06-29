#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"

struct BattleWindowText
{
    u8 fillValue;
    u8 fontId;
    u8 x;
    u8 y;
    u8 letterSpacing;
    u8 lineSpacing;
    u8 speed;
    u8 fgColor;
    u8 bgColor;
    u8 shadowColor;
};

static void ChooseMoveUsedParticle(u8 *textPtr);
static void ChooseTypeOfMoveUsedString(u8 *dst);

static EWRAM_DATA u16 sBattlerAbilities[MAX_BATTLERS_COUNT] = {0};
EWRAM_DATA struct BattleMsgData *gBattleMsgDataPtr = NULL;

// todo: make some of those names less vague: attacker/target vs pkmn, etc.

static const u8 sText_Trainer1LoseText[] = _("{B_TRAINER1_LOSE_TEXT}");
static const u8 sText_PkmnGainedEXP[] = _("{B_BUFF1}获得了{B_BUFF2}\n{B_BUFF3}点经验值！\p");
static const u8 sText_EmptyString4[] = _("");
static const u8 sText_ABoosted[] = _("提升");
static const u8 sText_PkmnGrewToLv[] = _("{B_BUFF1}\n升到了{B_BUFF2}级！{WAIT_SE}\p");
static const u8 sText_PkmnLearnedMove[] = _("{B_BUFF1}习得\n技能{B_BUFF2}！{WAIT_SE}\p");
static const u8 sText_TryToLearnMove1[] = _("{B_BUFF1}想要习得\n技能{B_BUFF2}。\p");
static const u8 sText_TryToLearnMove2[] = _("但是，{B_BUFF1}已经不能\n习得更多的技能。\p");
static const u8 sText_TryToLearnMove3[] = _("删除一个技能给\n{B_BUFF2}留下空间？");
static const u8 sText_PkmnForgotMove[] = _("{B_BUFF1}忘记了\n{B_BUFF2}。\p");
static const u8 sText_StopLearningMove[] = _("{PAUSE 32}放弃习得\n技能{B_BUFF2}？");
static const u8 sText_DidNotLearnMove[] = _("{B_BUFF1}没有习得\n技能{B_BUFF2}。\p");
static const u8 sText_UseNextPkmn[] = _("要更换宝可梦吗？");
static const u8 sText_AttackMissed[] = _("{B_ATK_NAME_WITH_PREFIX}的\n攻击没有命中！");
static const u8 sText_PkmnProtectedItself[] = _("{B_DEF_NAME_WITH_PREFIX}\n保护了自己！");
static const u8 sText_AvoidedDamage[] = _("{B_DEF_NAME_WITH_PREFIX}因{B_DEF_ABILITY}\n避免了伤害！");
static const u8 sText_PkmnMakesGroundMiss[] = _("{B_DEF_NAME_WITH_PREFIX}因{B_DEF_ABILITY}\n抵御了地上系技能！");
static const u8 sText_PkmnAvoidedAttack[] = _("{B_DEF_NAME_WITH_PREFIX}抵御了攻击！");
static const u8 sText_ItDoesntAffect[] = _("对{B_DEF_NAME_WITH_PREFIX}\n没有效果……");
static const u8 sText_AttackerFainted[] = _("{B_ATK_NAME_WITH_PREFIX}\n倒下了！\p");
static const u8 sText_TargetFainted[] = _("{B_DEF_NAME_WITH_PREFIX}\n倒下了！\p");
static const u8 sText_PlayerGotMoney[] = _("{B_PLAYER_NAME}收到了\n{B_BUFF1}元作为奖励！\p");
static const u8 sText_PlayerLostToEnemyTrainer[] = _("{B_PLAYER_NAME} is out of\nusable POKéMON!\pPlayer lost against\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}!{PAUSE_UNTIL_PRESS}");
static const u8 sText_PlayerPaidPrizeMoney[] = _("{B_PLAYER_NAME} paid ¥{B_BUFF1} as the prize\nmoney…\p… … … …\p{B_PLAYER_NAME} whited out!{PAUSE_UNTIL_PRESS}");
static const u8 sText_PlayerWhiteout[] = _("{B_PLAYER_NAME}\n已经没有可用的宝可梦了！\p");
#if B_WHITEOUT_MONEY >= GEN_4
static const u8 sText_PlayerWhiteout2[] = _("{B_PLAYER_NAME} panicked and lost ¥{B_BUFF1}…\p… … … …\p{B_PLAYER_NAME} whited out!{PAUSE_UNTIL_PRESS}");
#else
static const u8 sText_PlayerWhiteout2[] = _("{B_PLAYER_NAME}被击败了！{PAUSE_UNTIL_PRESS}");
#endif
static const u8 sText_PreventsEscape[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}用{B_SCR_ACTIVE_ABILITY}\n阻止逃跑！\p");
static const u8 sText_CantEscape2[] = _("不能逃跑！\p");
static const u8 sText_AttackerCantEscape[] = _("{B_ATK_NAME_WITH_PREFIX}不能逃跑！");
static const u8 sText_HitXTimes[] = _("连续命中{B_BUFF1}次！");
static const u8 sText_PkmnFellAsleep[] = _("{B_EFF_NAME_WITH_PREFIX}\n睡着了！");
static const u8 sText_PkmnMadeSleep[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n使{B_EFF_NAME_WITH_PREFIX}睡着了！");
static const u8 sText_PkmnAlreadyAsleep[] = _("{B_DEF_NAME_WITH_PREFIX}\n已经睡着了！");
static const u8 sText_PkmnAlreadyAsleep2[] = _("{B_ATK_NAME_WITH_PREFIX}\n已经睡着了！");
static const u8 sText_PkmnWasntAffected[] = _("{B_DEF_NAME_WITH_PREFIX}\n没有受到影响！");
static const u8 sText_PkmnWasPoisoned[] = _("{B_EFF_NAME_WITH_PREFIX}\n中毒了！");
static const u8 sText_PkmnPoisonedBy[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_BUFF1}\n使{B_EFF_NAME_WITH_PREFIX}中毒了！");
static const u8 sText_PkmnHurtByPoison[] = _("{B_ATK_NAME_WITH_PREFIX}因中毒\n受到了伤害！");
static const u8 sText_PkmnAlreadyPoisoned[] = _("{B_DEF_NAME_WITH_PREFIX}\n中毒了。");
static const u8 sText_PkmnBadlyPoisoned[] = _("{B_EFF_NAME_WITH_PREFIX}\n中了剧毒！");
static const u8 sText_PkmnEnergyDrained[] = _("{B_DEF_NAME_WITH_PREFIX}\n被吸取了能量！");
static const u8 sText_PkmnWasBurned[] = _("{B_EFF_NAME_WITH_PREFIX}烧伤了！");
static const u8 sText_PkmnGotFrostbite[] = _("{B_EFF_NAME_WITH_PREFIX} got frostbite!");
static const u8 sText_PkmnBurnedBy[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n使{B_EFF_NAME_WITH_PREFIX}烧伤了！");
static const u8 sText_PkmnHurtByBurn[] = _("{B_ATK_NAME_WITH_PREFIX}\n因烧伤受到了伤害！");
static const u8 sText_PkmnHurtByFrostbite[] = _("{B_ATK_NAME_WITH_PREFIX} is hurt\nby its frostbite!");
static const u8 sText_PkmnAlreadyHasBurn[] = _("{B_DEF_NAME_WITH_PREFIX}\n已经烧伤了。");
static const u8 sText_PkmnWasFrozen[] = _("{B_EFF_NAME_WITH_PREFIX}\n被冰冻！");
static const u8 sText_PkmnFrozenBy[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n使{B_EFF_NAME_WITH_PREFIX}被冰冻了！");
static const u8 sText_PkmnIsFrozen[] = _("{B_ATK_NAME_WITH_PREFIX}被\n冰冻了！");
static const u8 sText_PkmnWasDefrosted[] = _("{B_DEF_NAME_WITH_PREFIX}\n解除了冰冻！");
static const u8 sText_PkmnWasDefrosted2[] = _("{B_ATK_NAME_WITH_PREFIX}\n解除了冰冻！");
static const u8 sText_PkmnWasDefrostedBy[] = _("{B_ATK_NAME_WITH_PREFIX}因{B_CURRENT_MOVE}\n解除了冰冻！");
static const u8 sText_PkmnFrostbiteHealed[] = _("{B_DEF_NAME_WITH_PREFIX}'s\nfrostbite was healed!");
static const u8 sText_PkmnFrostbiteHealed2[] = _("{B_ATK_NAME_WITH_PREFIX}'s\nfrostbite was healed!");
static const u8 sText_PkmnFrostbiteHealedBy[] = _("{B_ATK_NAME_WITH_PREFIX}'s {B_CURRENT_MOVE}\nhealed its frostbite!");
static const u8 sText_PkmnWasParalyzed[] = _("{B_EFF_NAME_WITH_PREFIX}麻痹了！\n可能无法行动！");
static const u8 sText_PkmnWasParalyzedBy[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n使{B_EFF_NAME_WITH_PREFIX}麻痹了！\l可能无法行动！");
static const u8 sText_PkmnIsParalyzed[] = _("{B_ATK_NAME_WITH_PREFIX}麻痹了！\n无法行动！");
static const u8 sText_PkmnIsAlreadyParalyzed[] = _("{B_DEF_NAME_WITH_PREFIX}\n已经麻痹了！");
static const u8 sText_PkmnHealedParalysis[] = _("{B_DEF_NAME_WITH_PREFIX}的身体\n不再麻痹了！");
static const u8 sText_PkmnDreamEaten[] = _("{B_DEF_NAME_WITH_PREFIX}的梦\n被吃了！");
static const u8 sText_StatsWontIncrease[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_BUFF1}\n已经无法上升了！");
static const u8 sText_StatsWontDecrease[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_BUFF1}\n已经无法下降了！");
static const u8 sText_TeamStoppedWorking[] = _("我方的{B_BUFF1}\n失去了作用！");
static const u8 sText_FoeStoppedWorking[] = _("对手的{B_BUFF1}\n失去了作用！");
static const u8 sText_PkmnIsConfused[] = _("{B_ATK_NAME_WITH_PREFIX}\n混乱了！");
static const u8 sText_PkmnHealedConfusion[] = _("{B_ATK_NAME_WITH_PREFIX}\n解除了混乱！");
static const u8 sText_PkmnWasConfused[] = _("{B_EFF_NAME_WITH_PREFIX}\n开始混乱了！");
static const u8 sText_PkmnAlreadyConfused[] = _("{B_DEF_NAME_WITH_PREFIX}\n已经混乱了！");
static const u8 sText_PkmnFellInLove[] = _("{B_DEF_NAME_WITH_PREFIX}\n被迷倒了！");
static const u8 sText_PkmnInLove[] = _("{B_ATK_NAME_WITH_PREFIX}因\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}迷倒了！");
static const u8 sText_PkmnImmobilizedByLove[] = _("{B_ATK_NAME_WITH_PREFIX}因\n迷倒无法行动！");
static const u8 sText_PkmnBlownAway[] = _("{B_DEF_NAME_WITH_PREFIX}被\n吹飞了！");
static const u8 sText_PkmnChangedType[] = _("{B_ATK_NAME_WITH_PREFIX}变成了\n{B_BUFF1}系！");
static const u8 sText_PkmnFlinched[] = _("{B_ATK_NAME_WITH_PREFIX}动弹不得！");
static const u8 sText_PkmnRegainedHealth[] = _("{B_DEF_NAME_WITH_PREFIX}\n恢复了健康！");
static const u8 sText_PkmnHPFull[] = _("{B_DEF_NAME_WITH_PREFIX}的\nHP满了！");
static const u8 sText_PkmnRaisedSpDef[] = _("{B_ATK_PREFIX2}的{B_CURRENT_MOVE}\n提升了特防！");
static const u8 sText_PkmnRaisedSpDefALittle[] = _("{B_ATK_PREFIX2}的{B_CURRENT_MOVE}\n稍微提升了特防！");
static const u8 sText_PkmnRaisedDef[] = _("{B_ATK_PREFIX2}的{B_CURRENT_MOVE}\n提升了防御！");
static const u8 sText_PkmnRaisedDefALittle[] = _("{B_ATK_PREFIX2}的{B_CURRENT_MOVE}\n稍微提升了防御！");
static const u8 sText_PkmnCoveredByVeil[] = _("{B_ATK_PREFIX2}的一方\n被罩子包裹了！");
static const u8 sText_PkmnUsedSafeguard[] = _("{B_DEF_NAME_WITH_PREFIX}的一方被\n神秘护身保护了！");
static const u8 sText_PkmnSafeguardExpired[] = _("{B_ATK_PREFIX3}的一方\n不再受神秘护身保护了！");
static const u8 sText_PkmnWentToSleep[] = _("{B_ATK_NAME_WITH_PREFIX}\n睡着了！");
static const u8 sText_PkmnSleptHealthy[] = _("{B_ATK_NAME_WITH_PREFIX}睡着了\n并且恢复了体力！");
static const u8 sText_PkmnWhippedWhirlwind[] = _("{B_ATK_NAME_WITH_PREFIX}\n使出了旋风！");
static const u8 sText_PkmnTookSunlight[] = _("{B_ATK_NAME_WITH_PREFIX}\n吸收了阳光！");
static const u8 sText_PkmnLoweredHead[] = _("{B_ATK_NAME_WITH_PREFIX}的头\n往后缩了下！");
static const u8 sText_PkmnIsGlowing[] = _("{B_ATK_NAME_WITH_PREFIX}正在发光！");
static const u8 sText_PkmnFlewHigh[] = _("{B_ATK_NAME_WITH_PREFIX}\n飞向了高空！");
static const u8 sText_PkmnDugHole[] = _("{B_ATK_NAME_WITH_PREFIX}挖向了地下！");
static const u8 sText_PkmnHidUnderwater[] = _("{B_ATK_NAME_WITH_PREFIX}潜入水中！");
static const u8 sText_PkmnSprangUp[] = _("{B_ATK_NAME_WITH_PREFIX}跳了起来！");
static const u8 sText_PkmnSqueezedByBind[] = _("{B_DEF_NAME_WITH_PREFIX}因\n{B_ATK_NAME_WITH_PREFIX}的绑紧被绑住了！");
static const u8 sText_PkmnInSnapTrap[] = _("{B_DEF_NAME_WITH_PREFIX} got trapped\nby a snap trap!");
static const u8 sText_PkmnTrappedInVortex[] = _("{B_DEF_NAME_WITH_PREFIX}被困于\n漩涡中！");
static const u8 sText_PkmnTrappedBySandTomb[] = _("{B_DEF_NAME_WITH_PREFIX}被困于\n流沙地狱中！");
static const u8 sText_PkmnWrappedBy[] = _("{B_DEF_NAME_WITH_PREFIX}被\n{B_ATK_NAME_WITH_PREFIX}捆绑了！");
static const u8 sText_PkmnClamped[] = _("{B_ATK_NAME_WITH_PREFIX}的壳夹着\n{B_DEF_NAME_WITH_PREFIX}！");
static const u8 sText_PkmnHurtBy[] = _("{B_ATK_NAME_WITH_PREFIX}因\n{B_BUFF1}受到伤害！");
static const u8 sText_PkmnFreedFrom[] = _("{B_ATK_NAME_WITH_PREFIX}不受\n{B_BUFF1}的影响了！");
static const u8 sText_PkmnCrashed[] = _("强力的冲击使{B_ATK_NAME_WITH_PREFIX}\n摔倒了!！");
const u8 gText_PkmnShroudedInMist[] = _("{B_ATK_PREFIX2}\n被白雾笼罩了！");
static const u8 sText_PkmnProtectedByMist[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}\n被白雾保护了！");
const u8 gText_PkmnGettingPumped[] = _("{B_ATK_NAME_WITH_PREFIX}\n变得兴奋了！");
static const u8 sText_PkmnHitWithRecoil[] = _("{B_ATK_NAME_WITH_PREFIX}\n受到了反馈伤害！");
static const u8 sText_PkmnProtectedItself2[] = _("{B_ATK_NAME_WITH_PREFIX}\n保护了自己！");
static const u8 sText_PkmnBuffetedBySandstorm[] = _("{B_ATK_NAME_WITH_PREFIX}因\n沙暴受到了伤害！");
static const u8 sText_PkmnPeltedByHail[] = _("{B_ATK_NAME_WITH_PREFIX}因\n冰雹受到了伤害！");
static const u8 sText_PkmnsXWoreOff[] = _("{B_ATK_PREFIX1}的{B_BUFF1}\n消失了！");
static const u8 sText_PkmnSeeded[] = _("{B_DEF_NAME_WITH_PREFIX}被种了种子！");
static const u8 sText_PkmnEvadedAttack[] = _("{B_DEF_NAME_WITH_PREFIX}\n回避了攻击！");
static const u8 sText_PkmnSappedByLeechSeed[] = _("{B_ATK_NAME_WITH_PREFIX}的HP\n因寄生种子减少了！");
static const u8 sText_PkmnFastAsleep[] = _("{B_ATK_NAME_WITH_PREFIX}熟睡了。");
static const u8 sText_PkmnWokeUp[] = _("{B_ATK_NAME_WITH_PREFIX}醒来了！");
static const u8 sText_PkmnUproarKeptAwake[] = _("但是，{B_SCR_ACTIVE_NAME_WITH_PREFIX}的吵闹\n让它保持了清醒！");
static const u8 sText_PkmnWokeUpInUproar[] = _("{B_ATK_NAME_WITH_PREFIX}在\n吵闹中睡着了！");
static const u8 sText_PkmnCausedUproar[] = _("{B_ATK_NAME_WITH_PREFIX}\n引起了吵闹！");
static const u8 sText_PkmnMakingUproar[] = _("{B_ATK_NAME_WITH_PREFIX}\n在制造吵闹！");
static const u8 sText_PkmnCalmedDown[] = _("{B_ATK_NAME_WITH_PREFIX}平静了下来。");
static const u8 sText_PkmnCantSleepInUproar[] = _("但是，{B_DEF_NAME_WITH_PREFIX}无法在\n吵闹中睡眠！");
static const u8 sText_PkmnStockpiled[] = _("{B_ATK_NAME_WITH_PREFIX}储存了\n{B_BUFF1}！");
static const u8 sText_PkmnCantStockpile[] = _("{B_ATK_NAME_WITH_PREFIX}\n不能再储存了！");
static const u8 sText_PkmnCantSleepInUproar2[] = _("但是，{B_DEF_NAME_WITH_PREFIX}在\n吵闹中不会睡着！");
static const u8 sText_UproarKeptPkmnAwake[] = _("但是，吵闹使得\n{B_DEF_NAME_WITH_PREFIX}保持清醒！");
static const u8 sText_PkmnStayedAwakeUsing[] = _("{B_DEF_NAME_WITH_PREFIX}在清醒中\n使用它的{B_DEF_ABILITY}！");
static const u8 sText_PkmnStoringEnergy[] = _("{B_ATK_NAME_WITH_PREFIX}\n积蓄了能量！");
static const u8 sText_PkmnUnleashedEnergy[] = _("{B_ATK_NAME_WITH_PREFIX}\n释放了能量！");
static const u8 sText_PkmnFatigueConfusion[] = _("{B_ATK_NAME_WITH_PREFIX}由于\n疲劳变得混乱！");
static const u8 sText_PlayerPickedUpMoney[] = _("{B_PLAYER_NAME}捡到了\n{B_BUFF1}元！\p");
static const u8 sText_PkmnUnaffected[] = _("{B_DEF_NAME_WITH_PREFIX}\n没受到影响！");
static const u8 sText_PkmnTransformedInto[] = _("{B_ATK_NAME_WITH_PREFIX}变身为\n{B_BUFF1}！");
static const u8 sText_PkmnMadeSubstitute[] = _("{B_ATK_NAME_WITH_PREFIX}\n制造了一个替身！");
static const u8 sText_PkmnHasSubstitute[] = _("{B_ATK_NAME_WITH_PREFIX}已经\n有一个替身了！");
static const u8 sText_SubstituteDamaged[] = _("替身为\n{B_DEF_NAME_WITH_PREFIX}承受了伤害！\p");
static const u8 sText_PkmnSubstituteFaded[] = _("{B_DEF_NAME_WITH_PREFIX}的\n替身消失了！\p");
static const u8 sText_PkmnMustRecharge[] = _("{B_ATK_NAME_WITH_PREFIX}\n必须恢复能量！");
static const u8 sText_PkmnRageBuilding[] = _("{B_DEF_NAME_WITH_PREFIX}\n已经愤怒了！");
static const u8 sText_PkmnMoveWasDisabled[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_BUFF1}\n无法起作用！");
static const u8 sText_PkmnMoveDisabledNoMore[] = _("{B_ATK_NAME_WITH_PREFIX}\n不再起作用！");
static const u8 sText_PkmnGotEncore[] = _("{B_DEF_NAME_WITH_PREFIX}\n中了再来一次！");
static const u8 sText_PkmnEncoreEnded[] = _("{B_ATK_NAME_WITH_PREFIX}对\n再来一次免疫！");
static const u8 sText_PkmnTookAim[] = _("{B_ATK_NAME_WITH_PREFIX}\n瞄准了{B_DEF_NAME_WITH_PREFIX}！");
static const u8 sText_PkmnSketchedMove[] = _("{B_ATK_NAME_WITH_PREFIX}对\n{B_BUFF1}做素描！");
static const u8 sText_PkmnTryingToTakeFoe[] = _("{B_ATK_NAME_WITH_PREFIX}试图\n与对手同归于尽！");
static const u8 sText_PkmnTookFoe[] = _("{B_DEF_NAME_WITH_PREFIX}与\n{B_ATK_NAME_WITH_PREFIX}同归于尽！");
static const u8 sText_PkmnReducedPP[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_BUFF1}减少了\n{B_BUFF2}点！");
static const u8 sText_PkmnStoleItem[] = _("{B_ATK_NAME_WITH_PREFIX}偷窃了\n{B_DEF_NAME_WITH_PREFIX}的{B_LAST_ITEM}！");
static const u8 sText_TargetCantEscapeNow[] = _("{B_DEF_NAME_WITH_PREFIX}暂时\n不能逃跑！");
static const u8 sText_PkmnFellIntoNightmare[] = _("{B_DEF_NAME_WITH_PREFIX}\n堕入了恶梦之中！");
static const u8 sText_PkmnLockedInNightmare[] = _("{B_ATK_NAME_WITH_PREFIX}\n被困于恶梦之中！");
static const u8 sText_PkmnLaidCurse[] = _("{B_ATK_NAME_WITH_PREFIX}减半了自身的HP，\n并给{B_DEF_NAME_WITH_PREFIX}施加了诅咒！");
static const u8 sText_PkmnAfflictedByCurse[] = _("{B_ATK_NAME_WITH_PREFIX}受到了\n诅咒造成的伤害！");
static const u8 sText_SpikesScattered[] = _("铁菱已经遍布\n对手的周围！");
static const u8 sText_PkmnHurtBySpikes[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}受到\n铁菱的伤害！");
static const u8 sText_PkmnIdentified[] = _("{B_ATK_NAME_WITH_PREFIX}鉴别了\n{B_DEF_NAME_WITH_PREFIX}！");
static const u8 sText_PkmnPerishCountFell[] = _("{B_ATK_NAME_WITH_PREFIX}的灭亡回合\n只剩下{B_BUFF1}回合！");
static const u8 sText_PkmnBracedItself[] = _("{B_ATK_NAME_WITH_PREFIX}挺住了！");
static const u8 sText_PkmnEnduredHit[] = _("{B_DEF_NAME_WITH_PREFIX}忍耐了攻击！");
static const u8 sText_MagnitudeStrength[] = _("震级{B_BUFF1}！");
static const u8 sText_PkmnCutHPMaxedAttack[] = _("{B_ATK_NAME_WITH_PREFIX}的HP减少了，\n并且攻击上升至最高！");
static const u8 sText_PkmnCopiedStatChanges[] = _("{B_ATK_NAME_WITH_PREFIX}复制了\n{B_DEF_NAME_WITH_PREFIX}的能力等级！");
static const u8 sText_PkmnGotFree[] = _("{B_ATK_NAME_WITH_PREFIX}解脱了\n{B_DEF_NAME_WITH_PREFIX}的{B_BUFF1}！");
static const u8 sText_PkmnShedLeechSeed[] = _("{B_ATK_NAME_WITH_PREFIX}\n摆脱了寄生种子！");
static const u8 sText_PkmnBlewAwaySpikes[] = _("{B_ATK_NAME_WITH_PREFIX}\n清除了铁菱！");
static const u8 sText_PkmnFledFromBattle[] = _("{B_ATK_NAME_WITH_PREFIX}从对战中\n逃脱了！");
static const u8 sText_PkmnForesawAttack[] = _("{B_ATK_NAME_WITH_PREFIX}\n预知了攻击！");
static const u8 sText_PkmnTookAttack[] = _("{B_DEF_NAME_WITH_PREFIX}挡下了\n{B_BUFF1}的攻击！");
static const u8 sText_PkmnChoseXAsDestiny[] = _("{B_ATK_NAME_WITH_PREFIX}准备和\n{B_CURRENT_MOVE}一同倒下！");
static const u8 sText_PkmnAttack[] = _("{B_BUFF1}的攻击！");
static const u8 sText_PkmnCenterAttention[] = _("{B_ATK_NAME_WITH_PREFIX}将\n焦点集中在自身！");
static const u8 sText_PkmnChargingPower[] = _("{B_ATK_NAME_WITH_PREFIX}\n开始积蓄能量！");
static const u8 sText_NaturePowerTurnedInto[] = _("自然能力变成了\n{B_CURRENT_MOVE}！");
static const u8 sText_PkmnStatusNormal[] = _("{B_ATK_NAME_WITH_PREFIX}的状态\n恢复了正常！");
static const u8 sText_PkmnSubjectedToTorment[] = _("{B_DEF_NAME_WITH_PREFIX}\n受到了无理取闹的影响！");
static const u8 sText_PkmnTighteningFocus[] = _("{B_ATK_NAME_WITH_PREFIX}\n集中了力量！");
static const u8 sText_PkmnFellForTaunt[] = _("{B_DEF_NAME_WITH_PREFIX}\n受到了挑衅！");
static const u8 sText_PkmnReadyToHelp[] = _("{B_ATK_NAME_WITH_PREFIX}\n准备帮助{B_DEF_NAME_WITH_PREFIX}！");
static const u8 sText_PkmnSwitchedItems[] = _("{B_ATK_NAME_WITH_PREFIX}与对手\n交换了携带道具！");
static const u8 sText_PkmnObtainedX[] = _("{B_ATK_NAME_WITH_PREFIX}获得了\n{B_BUFF1}。");
static const u8 sText_PkmnObtainedX2[] = _("{B_DEF_NAME_WITH_PREFIX}获得了\n{B_BUFF2}。");
static const u8 sText_PkmnObtainedXYObtainedZ[] = _("{B_ATK_NAME_WITH_PREFIX}获得了\n{B_BUFF1}。\p{B_DEF_NAME_WITH_PREFIX}获得了\n{B_BUFF2}。");
static const u8 sText_PkmnCopiedFoe[] = _("{B_ATK_NAME_WITH_PREFIX}模仿了\n{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}！");
static const u8 sText_PkmnMadeWish[] = _("{B_ATK_NAME_WITH_PREFIX}许了一个愿！");
static const u8 sText_PkmnWishCameTrue[] = _("{B_BUFF1}的许愿\n实现了！");
static const u8 sText_PkmnPlantedRoots[] = _("{B_ATK_NAME_WITH_PREFIX}扎下了根！");
static const u8 sText_PkmnAbsorbedNutrients[] = _("{B_ATK_NAME_WITH_PREFIX}\n汲取了根茎的养分！");
static const u8 sText_PkmnAnchoredItself[] = _("{B_DEF_NAME_WITH_PREFIX}把自身\n用根茎紧紧固定住了！");
static const u8 sText_PkmnWasMadeDrowsy[] = _("{B_ATK_NAME_WITH_PREFIX}使得\n{B_DEF_NAME_WITH_PREFIX}昏昏欲睡！");
static const u8 sText_PkmnKnockedOff[] = _("{B_ATK_NAME_WITH_PREFIX}打破了\n{B_DEF_NAME_WITH_PREFIX}的{B_LAST_ITEM}！");
static const u8 sText_PkmnSwappedAbilities[] = _("{B_ATK_NAME_WITH_PREFIX}\n与对手互换了特性！");
static const u8 sText_PkmnSealedOpponentMove[] = _("{B_ATK_NAME_WITH_PREFIX}\n封印了对手的技能！");
static const u8 sText_PkmnWantsGrudge[] = _("{B_ATK_NAME_WITH_PREFIX}\n让对手背负怨恨！");
static const u8 sText_PkmnLostPPGrudge[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_BUFF1}\n失去了所有的PP！");
static const u8 sText_PkmnShroudedItself[] = _("{B_ATK_NAME_WITH_PREFIX}将\n自身笼罩在{B_CURRENT_MOVE}中！");
static const u8 sText_PkmnMoveBounced[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_CURRENT_MOVE}\n因为魔术外衣被反弹了！");
static const u8 sText_PkmnWaitsForTarget[] = _("{B_ATK_NAME_WITH_PREFIX}等待目标\n以便复制技能！");
static const u8 sText_PkmnSnatchedMove[] = _("{B_DEF_NAME_WITH_PREFIX}抢夺了\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}的技能！");
static const u8 sText_ElectricityWeakened[] = _("电的力量\n减弱了！");
static const u8 sText_FireWeakened[] = _("炎的力量\n减弱了！");
static const u8 sText_XFoundOneY[] = _("{B_ATK_NAME_WITH_PREFIX}发现了\n一个{B_LAST_ITEM}！");
static const u8 sText_SoothingAroma[] = _("一股沁心的香气\n弥漫了开来！");
static const u8 sText_ItemsCantBeUsedNow[] = _("道具暂不起作用。{PAUSE 64}");
static const u8 sText_ForXCommaYZ[] = _("对于{B_SCR_ACTIVE_NAME_WITH_PREFIX}，\n{B_LAST_ITEM} {B_BUFF1} 。");
static const u8 sText_PkmnUsedXToGetPumped[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}使用\n{B_LAST_ITEM}来变得兴奋！");
static const u8 sText_PkmnLostFocus[] = _("{B_ATK_NAME_WITH_PREFIX}失去了焦点\n不能出招！");
static const u8 sText_PkmnWasDraggedOut[] = _("{B_DEF_NAME_WITH_PREFIX}被\n拖入了战斗！\p");
static const u8 sText_TheWallShattered[] = _("墙壁粉碎了！");
static const u8 sText_ButNoEffect[] = _("但是不起任何作用！");
static const u8 sText_PkmnHasNoMovesLeft[] = _("{B_ATK_NAME_WITH_PREFIX}\n已经没有技能了！\p");
static const u8 sText_PkmnMoveIsDisabled[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_CURRENT_MOVE}\n不起作用！\p");
static const u8 sText_PkmnCantUseMoveTorment[] = _("{B_ATK_NAME_WITH_PREFIX}不能\n使用相同的技能！\p");
static const u8 sText_PkmnCantUseMoveTaunt[] = _("{B_ATK_NAME_WITH_PREFIX}受到假指控后，\n无法使用{B_CURRENT_MOVE}！\p");
static const u8 sText_PkmnCantUseMoveSealed[] = _("{B_ATK_NAME_WITH_PREFIX}不能使用\n被封印的{B_CURRENT_MOVE}！\p");
static const u8 sText_PkmnCantUseMoveThroatChop[] = _("{B_ATK_NAME_WITH_PREFIX} 无法使用\n{B_CURRENT_MOVE}失声!\p");
static const u8 sText_PkmnMadeItRain[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n使天空下起雨！");
static const u8 sText_PkmnRaisedSpeed[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n提升了速度！");
static const u8 sText_PkmnProtectedBy[] = _("{B_DEF_NAME_WITH_PREFIX}受到了\n{B_DEF_ABILITY}的保护！");
static const u8 sText_PkmnPreventsUsage[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n防止了{B_ATK_NAME_WITH_PREFIX}\l使用{B_CURRENT_MOVE}！");
static const u8 sText_PkmnRestoredHPUsing[] = _("{B_DEF_NAME_WITH_PREFIX}因{B_DEF_ABILITY}\n恢复了HP！");
static const u8 sText_PkmnsXMadeYUseless[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n使{B_CURRENT_MOVE}不起作用！");
static const u8 sText_PkmnChangedTypeWith[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n使它变成{B_BUFF1}！");
static const u8 sText_PkmnPreventsParalysisWith[] = _("{B_EFF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n抵御了麻痹！");
static const u8 sText_PkmnPreventsRomanceWith[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n抵御了迷人！");
static const u8 sText_PkmnPreventsPoisoningWith[] = _("{B_EFF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n抵御了中毒！");
static const u8 sText_PkmnPreventsConfusionWith[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n抵御了混乱！");
static const u8 sText_PkmnRaisedFirePowerWith[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n提升了炎系技能的威力！");
static const u8 sText_PkmnAnchorsItselfWith[] = _("{B_DEF_NAME_WITH_PREFIX}因\n{B_DEF_ABILITY}固定住了自身！");
static const u8 sText_PkmnCutsAttackWith[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n降低了{B_DEF_NAME_WITH_PREFIX}的攻击！");
static const u8 sText_PkmnPreventsStatLossWith[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n防止了能力等级下降！");
static const u8 sText_PkmnHurtsWith[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_BUFF1}\n对{B_ATK_NAME_WITH_PREFIX}造成了伤害！");
static const u8 sText_PkmnTraced[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}追踪了\n{B_BUFF1}的{B_BUFF2}！");
static const u8 sText_PkmnsXPreventsBurns[] = _("{B_EFF_NAME_WITH_PREFIX}的{B_EFF_ABILITY}\n防止了烧伤！");
static const u8 sText_PkmnsXBlocksY[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n阻止了{B_CURRENT_MOVE}！");
static const u8 sText_PkmnsXBlocksY2[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n阻止了{B_CURRENT_MOVE}！");
static const u8 sText_PkmnsXRestoredHPALittle2[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_ATK_ABILITY}\n使HP稍微恢复了！");
static const u8 sText_PkmnsXWhippedUpSandstorm[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n在场上扬起了沙暴！");
static const u8 sText_PkmnsXIntensifiedSun[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n使阳光更加强烈！");
static const u8 sText_PkmnsXPreventsYLoss[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n防止了{B_BUFF1}下降！");
static const u8 sText_PkmnsXInfatuatedY[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n迷倒了{B_ATK_NAME_WITH_PREFIX}！");
static const u8 sText_PkmnsXMadeYIneffective[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n使{B_CURRENT_MOVE}无效化了！");
static const u8 sText_PkmnsXCuredYProblem[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n治愈了{B_BUFF1}！");
static const u8 sText_ItSuckedLiquidOoze[] = _("吸收了黏液！");
static const u8 sText_PkmnTransformed[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}变身了！");
static const u8 sText_PkmnsXTookAttack[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n承受了攻击！");
const u8 gText_PkmnsXPreventsSwitching[] = _("{B_BUFF1}的{B_LAST_ABILITY}\n防止了替换！\p");
static const u8 sText_PreventedFromWorking[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n防止了{B_SCR_ACTIVE_NAME_WITH_PREFIX}的\l{B_BUFF1}起作用！");
static const u8 sText_PkmnsXMadeItIneffective[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n使它无效化了！");
static const u8 sText_PkmnsXPreventsFlinching[] = _("{B_EFF_NAME_WITH_PREFIX}的{B_EFF_ABILITY}\n防止了害怕！");
static const u8 sText_PkmnsXPreventsYsZ[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_ATK_ABILITY}\n防止了{B_DEF_NAME_WITH_PREFIX}的\l{B_DEF_ABILITY}起作用！");
static const u8 sText_PkmnsAbilityPreventsAbility[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n防止了{B_DEF_NAME_WITH_PREFIX}的\l{B_DEF_ABILITY}起作用！");
static const u8 sText_PkmnsXCuredItsYProblem[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n治愈了它的{B_BUFF1}！");
static const u8 sText_PkmnsXHadNoEffectOnY[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n对{B_EFF_NAME_WITH_PREFIX}不起作用！");
const u8 gText_StatSharply[] = _("急剧");
const u8 gText_StatRose[] = _("提升！");
static const u8 sText_StatHarshly[] = _("大幅");
static const u8 sText_StatFell[] = _("下降！");
static const u8 sText_AttackersStatRose[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_BUFF1}\n{B_BUFF2}");
const u8 gText_DefendersStatRose[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_BUFF1}\n{B_BUFF2}");
static const u8 sText_UsingItemTheStatOfPkmnRose[] = _("使用了{B_LAST_ITEM}，{B_BUFF1}\n的{B_SCR_ACTIVE_NAME_WITH_PREFIX}{B_BUFF2}");
static const u8 sText_AttackersStatFell[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_BUFF1}\n{B_BUFF2}");
static const u8 sText_DefendersStatFell[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_BUFF1}\n{B_BUFF2}");
static const u8 sText_StatsWontIncrease2[] = _("{B_ATK_NAME_WITH_PREFIX}的能力\n不能再提升了！");
static const u8 sText_StatsWontDecrease2[] = _("{B_DEF_NAME_WITH_PREFIX}的能力\n不能再降低了！");
static const u8 sText_CriticalHit[] = _("命中要害！");
static const u8 sText_OneHitKO[] = _("一击必杀！");
static const u8 sText_123Poof[] = _("{PAUSE 32}1，{PAUSE 15}2，然后{PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}叮咚！\p");
static const u8 sText_AndEllipsis[] = _("那…\p");
static const u8 sText_HMMovesCantBeForgotten[] = _("暂时无法忘记秘传技能。\p");
static const u8 sText_NotVeryEffective[] = _("收效甚微…");
static const u8 sText_SuperEffective[] = _("效果拔群！");
static const u8 sText_GotAwaySafely[] = _("{PLAY_SE SE_FLEE}成功逃走了！\p");
static const u8 sText_PkmnFledUsingIts[] = _("{PLAY_SE SE_FLEE}{B_ATK_NAME_WITH_PREFIX}\n使用了{B_LAST_ITEM}后逃走了！\p");
static const u8 sText_PkmnFledUsing[] = _("{PLAY_SE SE_FLEE}{B_ATK_NAME_WITH_PREFIX}\n使用了{B_ATK_ABILITY}后逃走了！\p");
static const u8 sText_WildPkmnFled[] = _("{PLAY_SE SE_FLEE}野生{B_BUFF1}逃走了！");
static const u8 sText_PlayerDefeatedLinkTrainer[] = _("你打败了\n{B_LINK_OPPONENT1_NAME}！");
static const u8 sText_TwoLinkTrainersDefeated[] = _("你打败了{B_LINK_OPPONENT1_NAME}\n和{B_LINK_OPPONENT2_NAME}！");
static const u8 sText_PlayerLostAgainstLinkTrainer[] = _("你输给了\n{B_LINK_OPPONENT1_NAME}！");
static const u8 sText_PlayerLostToTwo[] = _("你输给了{B_LINK_OPPONENT1_NAME}\n和{B_LINK_OPPONENT2_NAME}！");
static const u8 sText_PlayerBattledToDrawLinkTrainer[] = _("你与\n{B_LINK_OPPONENT1_NAME}打成了平手！");
static const u8 sText_PlayerBattledToDrawVsTwo[] = _("你与{B_LINK_OPPONENT1_NAME}\n和{B_LINK_OPPONENT2_NAME}打成了平手！");
static const u8 sText_WildFled[] = _("{PLAY_SE SE_FLEE}{B_LINK_OPPONENT1_NAME}逃了！");
static const u8 sText_TwoWildFled[] = _("{PLAY_SE SE_FLEE}{B_LINK_OPPONENT1_NAME}和\n{B_LINK_OPPONENT2_NAME}逃走了！");
static const u8 sText_NoRunningFromTrainers[] = _("不可以！训练家要堂堂正正地\n面对战斗！\p");
static const u8 sText_CantEscape[] = _("不能逃跑！\p");
static const u8 sText_DontLeaveBirch[] = _("小田卷博士：不要像那样不管我！\p");
static const u8 sText_ButNothingHappened[] = _("但是什么都没发生！");
static const u8 sText_ButItFailed[] = _("但是它失败了！");
static const u8 sText_ItHurtConfusion[] = _("因混乱对自己\n造成了伤害！");
static const u8 sText_MirrorMoveFailed[] = _("鹦鹉学舌失败了！");
static const u8 sText_StartedToRain[] = _("下起了雨！");
static const u8 sText_DownpourStarted[] = _("下起了大雨！"); // corresponds to DownpourText in pokegold and pokecrystal and is used by Rain Dance in GSC
static const u8 sText_RainContinues[] = _("雨一直在下。");
static const u8 sText_DownpourContinues[] = _("大雨一直在下。"); // unused
static const u8 sText_RainStopped[] = _("雨不再下了。");
static const u8 sText_SandstormBrewed[] = _("扬起了沙暴！");
static const u8 sText_SandstormRages[] = _("飞沙走石。");
static const u8 sText_SandstormSubsided[] = _("沙暴停止了。");
static const u8 sText_SunlightGotBright[] = _("阳光变猛烈了！");
static const u8 sText_SunlightStrong[] = _("阳光很猛烈。");
static const u8 sText_SunlightFaded[] = _("阳光不再猛烈。");
static const u8 sText_StartedHail[] = _("下起了冰雹！");
static const u8 sText_HailContinues[] = _("冰雹还在持续。");
static const u8 sText_HailStopped[] = _("冰雹停止了。");
static const u8 sText_StartedSnow[] = _("下起了雪!");
static const u8 sText_SnowContinues[] = _("还在持续下雪。");
static const u8 sText_SnowStopped[] = _("停止下雪了。");
static const u8 sText_FailedToSpitUp[] = _("无法使出喷出！");
static const u8 sText_FailedToSwallow[] = _("无法使出吞下！");
static const u8 sText_WindBecameHeatWave[] = _("风变成\n热风了！");
static const u8 sText_StatChangesGone[] = _("能力等级\n都还原成初始状态了！");
static const u8 sText_CoinsScattered[] = _("钱币散落一地！");
static const u8 sText_TooWeakForSubstitute[] = _("HP太低了，\n以致无法制造替身！");
static const u8 sText_SharedPain[] = _("平分了双方的HP！");
static const u8 sText_BellChimed[] = _("铃铛响了起来！");
static const u8 sText_FaintInThree[] = _("受到影响的宝可梦\n将在3回合内倒下！");
static const u8 sText_NoPPLeft[] = _("该技能没有PP，\n无法使用！\p");
static const u8 sText_ButNoPPLeft[] = _("但是该技能没有PP！");
static const u8 sText_PkmnIgnoresAsleep[] = _("{B_ATK_NAME_WITH_PREFIX}在睡眠时\n无法听从命令！");
static const u8 sText_PkmnIgnoredOrders[] = _("{B_ATK_NAME_WITH_PREFIX}无法\n听从命令！");
static const u8 sText_PkmnBeganToNap[] = _("{B_ATK_NAME_WITH_PREFIX}开始打盹了！");
static const u8 sText_PkmnLoafing[] = _("{B_ATK_NAME_WITH_PREFIX}在\n周围闲逛！");
static const u8 sText_PkmnWontObey[] = _("{B_ATK_NAME_WITH_PREFIX}不\n听从命令！");
static const u8 sText_PkmnTurnedAway[] = _("{B_ATK_NAME_WITH_PREFIX}转身离开！");
static const u8 sText_PkmnPretendNotNotice[] = _("{B_ATK_NAME_WITH_PREFIX}假装\n没有注意到！");
static const u8 sText_EnemyAboutToSwitchPkmn[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\n就要换上{B_BUFF2}了。\p{B_PLAYER_NAME}要替换\n宝可梦吗？");
static const u8 sText_PkmnLearnedMove2[] = _("{B_ATK_NAME_WITH_PREFIX}习得了\n{B_BUFF1}！");
static const u8 sText_PlayerDefeatedLinkTrainerTrainer1[] = _("你打败了\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}！\p");
static const u8 sText_CreptCloser[] = _("{B_PLAYER_NAME}悄悄靠近了\n{B_OPPONENT_MON1_NAME}！");
static const u8 sText_CantGetCloser[] = _("{B_PLAYER_NAME}不能再靠近了！");
static const u8 sText_PkmnWatchingCarefully[] = _("{B_OPPONENT_MON1_NAME}小心地\n注视着！");
static const u8 sText_PkmnCuriousAboutX[] = _("{B_OPPONENT_MON1_NAME}对\n{B_BUFF1}感到好奇！");
static const u8 sText_PkmnEnthralledByX[] = _("{B_OPPONENT_MON1_NAME}被\n{B_BUFF1}迷倒了！");
static const u8 sText_PkmnIgnoredX[] = _("{B_OPPONENT_MON1_NAME}完全忽视了\n{B_BUFF1}！");
static const u8 sText_ThrewPokeblockAtPkmn[] = _("{B_PLAYER_NAME}朝{B_OPPONENT_MON1_NAME}投掷了\n{POKEBLOCK}！");
static const u8 sText_OutOfSafariBalls[] = _("{PLAY_SE SE_DING_DONG}提示：\n你用完了原野球！游戏结束！\p");
static const u8 sText_OpponentMon1Appeared[] = _("{B_OPPONENT_MON1_NAME}出现了！\p");
static const u8 sText_WildPkmnAppeared[] = _("野生的{B_OPPONENT_MON1_NAME}跳了出来！\p");
static const u8 sText_LegendaryPkmnAppeared[] = _("野生的{B_OPPONENT_MON1_NAME}跳了出来！\p");
static const u8 sText_WildPkmnAppearedPause[] = _("野生的{B_OPPONENT_MON1_NAME}跳了出来！{PAUSE 127}");
static const u8 sText_TwoWildPkmnAppeared[] = _("野生的{B_OPPONENT_MON1_NAME}和\n{B_OPPONENT_MON2_NAME}跳了出来！\p");
static const u8 sText_Trainer1WantsToBattle[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\n想要来场对战！\p");
static const u8 sText_LinkTrainerWantsToBattle[] = _("{B_LINK_OPPONENT1_NAME}\n想要对战！");
static const u8 sText_TwoLinkTrainersWantToBattle[] = _("{B_LINK_OPPONENT1_NAME}和{B_LINK_OPPONENT2_NAME}\n想要对战！");
static const u8 sText_Trainer1SentOutPkmn[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\n派出了{B_OPPONENT_MON1_NAME}！");
static const u8 sText_Trainer1SentOutTwoPkmn[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\n派出了{B_OPPONENT_MON1_NAME}和{B_OPPONENT_MON2_NAME}！");
static const u8 sText_Trainer1SentOutPkmn2[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\n派出了{B_BUFF1}！");
static const u8 sText_LinkTrainerSentOutPkmn[] = _("{B_LINK_OPPONENT1_NAME}派出了\n{B_OPPONENT_MON1_NAME}！");
static const u8 sText_LinkTrainerSentOutTwoPkmn[] = _("{B_LINK_OPPONENT1_NAME}派出了\n{B_OPPONENT_MON1_NAME}和{B_OPPONENT_MON2_NAME}！");
static const u8 sText_TwoLinkTrainersSentOutPkmn[] = _("{B_LINK_OPPONENT1_NAME}派出了{B_LINK_OPPONENT_MON1_NAME}！\n{B_LINK_OPPONENT2_NAME}派出了{B_LINK_OPPONENT_MON2_NAME}！");
static const u8 sText_LinkTrainerSentOutPkmn2[] = _("{B_LINK_OPPONENT1_NAME}派出了\n{B_BUFF1}！");
static const u8 sText_LinkTrainerMultiSentOutPkmn[] = _("{B_LINK_SCR_TRAINER_NAME}派出了\n{B_BUFF1}！");
static const u8 sText_GoPkmn[] = _("就决定是你了！{B_PLAYER_MON1_NAME}！");
static const u8 sText_GoTwoPkmn[] = _("就决定是你们了！\n{B_PLAYER_MON1_NAME}、{B_PLAYER_MON2_NAME}！");
static const u8 sText_GoPkmn2[] = _("就决定是你了！{B_BUFF1}！");
static const u8 sText_DoItPkmn[] = _("拜托了！{B_BUFF1}！");
static const u8 sText_GoForItPkmn[] = _("好好加油吧，{B_BUFF1}！");
static const u8 sText_YourFoesWeakGetEmPkmn[] = _("对手很虚弱！\n机会来了，{B_BUFF1}！");
static const u8 sText_LinkPartnerSentOutPkmnGoPkmn[] = _("{B_LINK_PARTNER_NAME}派出了{B_LINK_PLAYER_MON2_NAME}！\n去吧！{B_LINK_PLAYER_MON1_NAME}！");
static const u8 sText_PkmnThatsEnough[] = _("{B_BUFF1}，辛苦你了！\n回来吧！");
static const u8 sText_PkmnComeBack[] = _("{B_BUFF1}，回来吧！");
static const u8 sText_PkmnOkComeBack[] = _("{B_BUFF1}\n干得好！回来吧！");
static const u8 sText_PkmnGoodComeBack[] = _("{B_BUFF1}\n做得漂亮！回来吧！");
static const u8 sText_Trainer1WithdrewPkmn[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\n收回了{B_BUFF1}！");
static const u8 sText_LinkTrainer1WithdrewPkmn[] = _("{B_LINK_OPPONENT1_NAME}收回了\n{B_BUFF1}！");
static const u8 sText_LinkTrainer2WithdrewPkmn[] = _("{B_LINK_SCR_TRAINER_NAME}收回了\n{B_BUFF1}！");
static const u8 sText_WildPkmnPrefix[] = _("野生的");
static const u8 sText_FoePkmnPrefix[] = _("对方的");
static const u8 sText_EmptyString8[] = _("");
static const u8 sText_FoePkmnPrefix2[] = _("对方");
static const u8 sText_AllyPkmnPrefix[] = _("我方");
static const u8 sText_FoePkmnPrefix3[] = _("对方");
static const u8 sText_AllyPkmnPrefix2[] = _("我方");
static const u8 sText_FoePkmnPrefix4[] = _("对方");
static const u8 sText_AllyPkmnPrefix3[] = _("我方");
static const u8 sText_AttackerUsedX[] = _("{B_ATK_NAME_WITH_PREFIX}使用\n{B_BUFF3}！");
static const u8 sText_ExclamationMark[] = _("！");
static const u8 sText_ExclamationMark2[] = _("！");
static const u8 sText_ExclamationMark3[] = _("！");
static const u8 sText_ExclamationMark4[] = _("！");
static const u8 sText_ExclamationMark5[] = _("！");
static const u8 sText_HP[] = _("HP");
static const u8 sText_Attack[] = _("攻击");
static const u8 sText_Defense[] = _("防御");
static const u8 sText_Speed[] = _("速度");
static const u8 sText_SpAttack[] = _("特攻");
static const u8 sText_SpDefense[] = _("特防");
static const u8 sText_Accuracy[] = _("命中率");
static const u8 sText_Evasiveness[] = _("回避率");

const u8 *const gStatNamesTable[NUM_BATTLE_STATS] =
{
    sText_HP, sText_Attack, sText_Defense,
    sText_Speed, sText_SpAttack, sText_SpDefense,
    sText_Accuracy, sText_Evasiveness
};

static const u8 sText_PokeblockWasTooSpicy[] = _("太辣！");
static const u8 sText_PokeblockWasTooDry[] = _("太涩！");
static const u8 sText_PokeblockWasTooSweet[] = _("太甜！");
static const u8 sText_PokeblockWasTooBitter[] = _("太苦！");
static const u8 sText_PokeblockWasTooSour[] = _("太酸！");

const u8 *const gPokeblockWasTooXStringTable[FLAVOR_COUNT] =
{
    [FLAVOR_SPICY]  = sText_PokeblockWasTooSpicy,
    [FLAVOR_DRY]    = sText_PokeblockWasTooDry,
    [FLAVOR_SWEET]  = sText_PokeblockWasTooSweet,
    [FLAVOR_BITTER] = sText_PokeblockWasTooBitter,
    [FLAVOR_SOUR]   = sText_PokeblockWasTooSour
};

static const u8 sText_PlayerUsedItem[] = _("{B_PLAYER_NAME}使用\n{B_LAST_ITEM}！");
static const u8 sText_WallyUsedItem[] = _("满充使用了\n{B_LAST_ITEM}！");
static const u8 sText_Trainer1UsedItem[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}\n使用了{B_LAST_ITEM}！");
static const u8 sText_TrainerBlockedBall[] = _("训练家挡下了精灵球！");
static const u8 sText_DontBeAThief[] = _("不要做贼！");
static const u8 sText_ItDodgedBall[] = _("它躲开了精灵球！\n这只宝可梦不能被收服！");
static const u8 sText_YouMissedPkmn[] = _("你错过了这只宝可梦！");
static const u8 sText_PkmnBrokeFree[] = _("哦，不！\n宝可梦逃走了！");
static const u8 sText_ItAppearedCaught[] = _("啊！\n似乎要被抓住了！");
static const u8 sText_AarghAlmostHadIt[] = _("哎呀！\n再加把劲！");
static const u8 sText_ShootSoClose[] = _("可恶！\n就差一点点了！");
static const u8 sText_GotchaPkmnCaughtPlayer[] = _("搞定！\n{B_DEF_NAME}被收服了！{WAIT_SE}{PLAY_BGM MUS_CAUGHT}\p");
static const u8 sText_GotchaPkmnCaughtWally[] = _("搞定！\n{B_DEF_NAME}被收服了！{WAIT_SE}{PLAY_BGM MUS_CAUGHT}{PAUSE 127}");
static const u8 sText_GiveNicknameCaptured[] = _("要给{B_DEF_NAME}取一个昵称么？");
static const u8 sText_PkmnSentToPC[] = _("{B_DEF_NAME}被送到了\n{B_PC_CREATOR_NAME}电脑。");
static const u8 sText_Someones[] = _("某人的");
static const u8 sText_Lanettes[] = _("真弓的");
static const u8 sText_PkmnDataAddedToDex[] = _("{B_DEF_NAME}的数据\n登记到了宝可梦图鉴。\p");
static const u8 sText_ItIsRaining[] = _("现在在下雨。");
static const u8 sText_SandstormIsRaging[] = _("沙暴很猛烈。");
static const u8 sText_BoxIsFull[] = _("盒子已经满了！\n不能再收服更多了！\p");
static const u8 sText_EnigmaBerry[] = _("谜之果");
static const u8 sText_BerrySuffix[] = _("树果");
static const u8 sText_PkmnsItemCuredParalysis[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n治愈了麻痹！");
static const u8 sText_PkmnsItemCuredPoison[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n治愈了中毒！");
static const u8 sText_PkmnsItemHealedBurn[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n治愈了灼烧！");
static const u8 sText_PkmnsItemHealedFrostbite[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ITEM}\nhealed its frostbite!");
static const u8 sText_PkmnsItemDefrostedIt[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n解除了冰冻！");
static const u8 sText_PkmnsItemWokeIt[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n让它从睡眠中苏醒了！");
static const u8 sText_PkmnsItemSnappedOut[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n使它解除了混乱！");
static const u8 sText_PkmnsItemCuredProblem[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n治愈了它的{B_BUFF1}状态！");
static const u8 sText_PkmnsItemNormalizedStatus[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n治愈了异常状态！");
static const u8 sText_PkmnsItemRestoredHealth[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n恢复了HP！");
static const u8 sText_PkmnsItemRestoredPP[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n恢复了{B_BUFF1}的PP！");
static const u8 sText_PkmnsItemRestoredStatus[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n治愈了异常状态！");
static const u8 sText_PkmnsItemRestoredHPALittle[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n稍微恢复了HP！");
static const u8 sText_ItemAllowsOnlyYMove[] = _("{B_LAST_ITEM}只允许\n使用{B_CURRENT_MOVE}！\p");
static const u8 sText_PkmnHungOnWithX[] = _("{B_DEF_NAME_WITH_PREFIX}靠它的\n{B_LAST_ITEM}顶住了！");
const u8 gText_EmptyString3[] = _("");
static const u8 sText_YouThrowABallNowRight[] = _("现在要扔出精灵球了是吧？\n我…我会全力以赴！");

// early declaration of strings
static const u8 sText_PkmnIncapableOfPower[];
static const u8 sText_GlintAppearsInEye[];
static const u8 sText_PkmnGettingIntoPosition[];
static const u8 sText_PkmnBeganGrowlingDeeply[];
static const u8 sText_PkmnEagerForMore[];
static const u8 sText_DefeatedOpponentByReferee[];
static const u8 sText_LostToOpponentByReferee[];
static const u8 sText_TiedOpponentByReferee[];
static const u8 sText_QuestionForfeitMatch[];
static const u8 sText_ForfeitedMatch[];
static const u8 sText_Trainer1WinText[];
static const u8 sText_Trainer2WinText[];
static const u8 sText_TwoInGameTrainersDefeated[];
static const u8 sText_Trainer2LoseText[];

// New battle strings.
static const u8 sText_EnduredViaSturdy[] = _("{B_DEF_NAME_WITH_PREFIX} 挺住了\n攻击 {B_DEF_ABILITY}!");
static const u8 sText_PowerHerbActivation[] = _("{B_ATK_NAME_WITH_PREFIX} 完全充能了\n因为它的 {B_LAST_ITEM}!");
static const u8 sText_HurtByItem[] = _("{B_ATK_NAME_WITH_PREFIX}受伤了\n因为它的{B_LAST_ITEM}！");
static const u8 sText_BadlyPoisonedByItem[] = _("{B_EFF_NAME_WITH_PREFIX}中剧毒了\n因为{B_LAST_ITEM}！");
static const u8 sText_BurnedByItem[] = _("{B_EFF_NAME_WITH_PREFIX}烧伤了\n因为{B_LAST_ITEM}！");
static const u8 sText_TargetAbilityActivates[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}发动了！");
static const u8 sText_GravityIntensified[] = _("重力加强了！");
static const u8 sText_TargetIdentified[] = _("{B_DEF_NAME_WITH_PREFIX}被\n识破了！");
static const u8 sText_TargetWokeUp[] = _("{B_DEF_NAME_WITH_PREFIX}醒了！");
static const u8 sText_PkmnStoleAndAteItem[] = _("{B_ATK_NAME_WITH_PREFIX}偷到并\n吃掉了{B_DEF_NAME_WITH_PREFIX}的{B_LAST_ITEM}！");
static const u8 sText_TailWindBlew[] = _("{B_ATK_TEAM2}的身后\n吹起了顺风！");
static const u8 sText_PkmnWentBack[] = _("{B_ATK_NAME_WITH_PREFIX}回\n到{B_ATK_TRAINER_CLASS}{B_ATK_TRAINER_NAME}");
static const u8 sText_PkmnCantUseItemsAnymore[] = _("{B_DEF_NAME_WITH_PREFIX}不能使用\n道具了！");
static const u8 sText_PkmnFlung[] = _("{B_ATK_NAME_WITH_PREFIX}扔掉了\n{B_LAST_ITEM}！");
static const u8 sText_PkmnPreventedFromHealing[] = _("{B_DEF_NAME_WITH_PREFIX}被阻止\n回复！");
static const u8 sText_PkmnSwitchedAtkAndDef[] = _("{B_ATK_NAME_WITH_PREFIX}交换了它的\n攻击和防御！");
static const u8 sText_PkmnsAbilitySuppressed[] = _("{B_DEF_NAME_WITH_PREFIX}的特性\n被压制了！");
static const u8 sText_ShieldedFromCriticalHits[] = _("{B_CURRENT_MOVE}保护{B_ATK_TEAM2}\n的队伍不被击中要害！");
static const u8 sText_SwitchedAtkAndSpAtk[] = _("{B_ATK_NAME_WITH_PREFIX}与目标交换了\n攻击和\p和特攻！");
static const u8 sText_SwitchedDefAndSpDef[] = _("{B_ATK_NAME_WITH_PREFIX}与目标交换了\n防御和\p和特防！");
static const u8 sText_PkmnAcquiredAbility[] = _("{B_DEF_NAME_WITH_PREFIX}获得了\n{B_DEF_ABILITY}！");
static const u8 sText_PoisonSpikesScattered[] = _("毒菱散落在\n对方队伍的脚下！");
static const u8 sText_PkmnSwitchedStatChanges[] = _("{B_ATK_NAME_WITH_PREFIX}与目标交换了\n能力等级！");
static const u8 sText_PkmnSurroundedWithVeilOfWater[] = _("{B_ATK_NAME_WITH_PREFIX}身边围绕着\n一层水幕！");
static const u8 sText_PkmnLevitatedOnElectromagnetism[] = _("{B_ATK_NAME_WITH_PREFIX}通过电磁力\n漂浮了起来！");
static const u8 sText_PkmnTwistedDimensions[] = _("{B_ATK_NAME_WITH_PREFIX}扭曲了\n时空！");
static const u8 sText_PointedStonesFloat[] = _("尖锐的岩石漂浮在了\n {B_DEF_TEAM2} 的队伍周围!");
static const u8 sText_CloakedInMysticalMoonlight[] = _("被神秘的月光\n笼罩!");
static const u8 sText_TrappedBySwirlingMagma[] = _("{B_DEF_NAME_WITH_PREFIX} 被\n旋转的岩浆困住了!");
static const u8 sText_VanishedInstantly[] = _("{B_ATK_NAME_WITH_PREFIX} 突然\n消失了!");
static const u8 sText_ProtectedTeam[] = _("{B_CURRENT_MOVE} 保护了\n{B_ATK_TEAM2} 的队伍!");
static const u8 sText_SharedItsGuard[] = _("{B_ATK_NAME_WITH_PREFIX} 与目标\n平分了防御!");
static const u8 sText_SharedItsPower[] = _("{B_ATK_NAME_WITH_PREFIX} 与目标\n平分了攻击!");
static const u8 sText_SwapsDefAndSpDefOfAllPkmn[] = _("制造出了\n防御与特防能力值互换的奇妙空间!");
static const u8 sText_BecameNimble[] = _("{B_ATK_NAME_WITH_PREFIX} 变得灵活了!");
static const u8 sText_HurledIntoTheAir[] = _("{B_DEF_NAME_WITH_PREFIX} 被投向了\n空中!");
static const u8 sText_HeldItemsLoseEffects[] = _("制造出了\n道具无效的魔法空间!");
static const u8 sText_FellStraightDown[] = _("{B_DEF_NAME_WITH_PREFIX} 被\n击落!");
static const u8 sText_TargetChangedType[] =_("{B_DEF_NAME_WITH_PREFIX}转变为\n{B_BUFF1}属性!");
static const u8 sText_PkmnAcquiredSimple[] = _("{B_DEF_NAME_WITH_PREFIX} 获得了\n单纯!");
static const u8 sText_KindOffer[] = _("{B_DEF_NAME_WITH_PREFIX}\n接受了好意!");
static const u8 sText_ResetsTargetsStatLevels[] = _("{B_DEF_NAME_WITH_PREFIX}的能力\n被清除了!");
static const u8 sText_AllySwitchPosition[] = _("{B_ATK_NAME_WITH_PREFIX} 和\n{B_SCR_ACTIVE_NAME_WITH_PREFIX} 交换了位置!");
static const u8 sText_RestoreTargetsHealth[] = _("{B_DEF_NAME_WITH_PREFIX}的HP回复了!");
static const u8 sText_TookPkmnIntoTheSky[] = _("{B_ATK_NAME_WITH_PREFIX} 把\n{B_DEF_NAME_WITH_PREFIX} 抓向天空!");
static const u8 sText_FreedFromSkyDrop[] = _("{B_DEF_NAME_WITH_PREFIX} 从自由落体状态\n逃脱了!");
static const u8 sText_PostponeTargetMove[] = _("{B_DEF_NAME_WITH_PREFIX}的行动\n延后了!");
static const u8 sText_ReflectTargetsType[] = _("{B_ATK_NAME_WITH_PREFIX}的属性\n变成了 {B_DEF_NAME_WITH_PREFIX}'s!");
static const u8 sText_TransferHeldItem[] = _("{B_DEF_NAME_WITH_PREFIX} 收到了 {B_LAST_ITEM}\n来自 {B_ATK_NAME_WITH_PREFIX}");
static const u8 sText_EmbargoEnds[] = _("{B_ATK_NAME_WITH_PREFIX}可以\n再次使用道具了！");
static const u8 sText_Electromagnetism[] = _("电磁浮游");
static const u8 sText_BufferEnds[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_BUFF1}\n解除了！");
static const u8 sText_ThroatChopEnds[] = _("{B_ATK_NAME_WITH_PREFIX}能再次使用\n声音类招式了！");
static const u8 sText_TelekinesisEnds[] = _("{B_ATK_NAME_WITH_PREFIX}从意念移物\n状态中逃脱了！");
static const u8 sText_TailwindEnds[] = _("{B_ATK_TEAM1}队伍的顺风\n停止了！");
static const u8 sText_LuckyChantEnds[] = _("{B_ATK_TEAM1}队伍的幸运咒语\n结束了！");
static const u8 sText_TrickRoomEnds[] = _("扭曲的空间\n复原了！");
static const u8 sText_WonderRoomEnds[] = _("奇妙空间结束了,防御\n与特防能力值恢复了正常！");
static const u8 sText_MagicRoomEnds[] = _("魔法空间结束了,道具\n效果恢复了正常！");
static const u8 sText_MudSportEnds[] = _("玩泥巴的效果消失了.");
static const u8 sText_WaterSportEnds[] = _("玩水的效果消失了.");
static const u8 sText_GravityEnds[] = _("重力恢复了正常！");
static const u8 sText_AquaRingHeal[] = _("水流环回复了\n{B_ATK_NAME_WITH_PREFIX}'的HP！");
static const u8 sText_TargetAbilityRaisedStat[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n提高了它的{B_BUFF1}！");
static const u8 sText_TargetAbilityLoweredStat[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n降低了它的{B_BUFF1}！");
static const u8 sText_AttackerAbilityRaisedStat[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_ATK_ABILITY}\n提高了它的{B_BUFF1}！");
static const u8 sText_ScriptingAbilityRaisedStat[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n提高了它的{B_BUFF1}！");
static const u8 sText_AuroraVeilEnds[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}\n消失了！");
static const u8 sText_ElectricTerrainEnds[] = _("脚下的电光\n不见了.");
static const u8 sText_MistyTerrainEnds[] = _("脚下的雾气\n不见了.");
static const u8 sText_PsychicTerrainEnds[] = _("脚下奇妙的感觉\n不见了.");
static const u8 sText_GrassyTerrainEnds[] = _("脚下的青草\n不见了.");
static const u8 sText_TargetsStatWasMaxedOut[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}最大化了\n它的{B_BUFF1}！");
static const u8 sText_PoisonHealHpUp[] = _("毒素回复了{B_ATK_NAME_WITH_PREFIX}\n的少量体力！");
static const u8 sText_BadDreamsDmg[] = _("{B_DEF_NAME_WITH_PREFIX}正在被\n折磨\n{B_ATK_ABILITY}！");
static const u8 sText_MoldBreakerEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}打破了常规！");
static const u8 sText_TeravoltEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}正在释放\n溅射气场！");
static const u8 sText_TurboblazeEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}正在释放\n炽热气场！");
static const u8 sText_SlowStartEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}错失先机！");
static const u8 sText_SlowStartEnd[] = _("{B_ATK_NAME_WITH_PREFIX}最终聚集了\n它所有的力量！");
static const u8 sText_SolarPowerHpDrop[] = _("The{B_ATK_NAME_WITH_PREFIX}的{B_ATK_ABILITY}\n受到了伤害！");
static const u8 sText_AftermathDmg[] = _("{B_ATK_NAME_WITH_PREFIX}受伤了！");
static const u8 sText_AnticipationActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}发抖了！");
static const u8 sText_ForewarnActivates[] = _("{B_SCR_ACTIVE_ABILITY}的预知梦预知到了{B_SCR_ACTIVE_NAME_WITH_PREFIX}\n的{B_DEF_NAME_WITH_PREFIX}'s{B_BUFF1}！");
static const u8 sText_IceBodyHpGain[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_ATK_ABILITY}\n回复了少量体力！");
static const u8 sText_SnowWarningHail[] = _("开始下冰雹了！");
static const u8 sText_SnowWarningSnow[] = _("It started to snow!");
static const u8 sText_FriskActivates[] = _("{B_ATK_NAME_WITH_PREFIX}察觉到了{B_DEF_NAME_WITH_PREFIX}\n的{B_LAST_ITEM}！");
static const u8 sText_UnnerveEnters[] = _("对手的队伍太紧张以致于\n无法吃下树果！");
static const u8 sText_HarvestBerry[] = _("{B_ATK_NAME_WITH_PREFIX}收获了\n它的{B_LAST_ITEM}！");
static const u8 sText_LastAbilityRaisedBuff1[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_LAST_ABILITY}\n提高了它的{B_BUFF1}！");
static const u8 sText_MagicBounceActivates[] = _("{B_DEF_NAME_WITH_PREFIX}弹回了\n{B_ATK_NAME_WITH_PREFIX}！");
static const u8 sText_ProteanTypeChange[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_ATK_ABILITY}变身\n成了{B_BUFF1}属性！");
static const u8 sText_SymbiosisItemPass[] = _("{B_ATK_NAME_WITH_PREFIX}通过{B_ATK_ABILITY}把它的{B_LAST_ITEM}\n传递给{B_SCR_ACTIVE_NAME_WITH_PREFIX}！");
static const u8 sText_StealthRockDmg[] = _("锋利的岩石扎进了对手的\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}！");
static const u8 sText_ToxicSpikesAbsorbed[] = _("毒菱从对方的队伍\n周围消失了！");
static const u8 sText_ToxicSpikesPoisoned[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}中毒了！");
static const u8 sText_StickyWebSwitchIn[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}陷入了\n粘网！");
static const u8 sText_HealingWishCameTrue[] = _("治愈之愿降临\n在了{B_ATK_NAME_WITH_PREFIX}！");
static const u8 sText_HealingWishHealed[] = _("{B_ATK_NAME_WITH_PREFIX}恢复了健康！");
static const u8 sText_LunarDanceCameTrue[] = _("{B_ATK_NAME_WITH_PREFIX}被神秘的月光\n笼罩！");
static const u8 sText_CursedBodyDisabled[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_BUFF1}被{B_DEF_NAME_WITH_PREFIX}的{B_DEF_ABILITY}定住了！");
static const u8 sText_AttackerAquiredAbility[] = _("{B_ATK_NAME_WITH_PREFIX}获得了{B_LAST_ABILITY}！");
static const u8 sText_TargetStatWontGoHigher[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_BUFF1}\n不能变得更高了！");
static const u8 sText_PkmnMoveBouncedViaAbility[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_CURRENT_MOVE}被\n{B_DEF_NAME_WITH_PREFIX}的\l{B_DEF_ABILITY}弹回了！");
static const u8 sText_ImposterTransform[] = _("{B_ATK_NAME_WITH_PREFIX}变身成了\n{B_DEF_NAME_WITH_PREFIX}并发动了{B_LAST_ABILITY}！");
static const u8 sText_NotDoneYet[] = _("这个招式的效果还没做完！\p");
static const u8 sText_PkmnBlewAwayToxicSpikes[] = _("{B_ATK_NAME_WITH_PREFIX}清除了\n毒菱！");
static const u8 sText_PkmnBlewAwayStickyWeb[] = _("{B_ATK_NAME_WITH_PREFIX}清除了\n黏黏网！");
static const u8 sText_PkmnBlewAwayStealthRock[] = _("{B_ATK_NAME_WITH_PREFIX}清除了\n隐形岩！");
static const u8 sText_SpikesDisappearedFromTeam[] = _("The spikes disappeared from\nthe ground around {B_ATK_TEAM2} team!");
static const u8 sText_ToxicSpikesDisappearedFromTeam[] = _("The poison spikes disappeared from\nthe ground around {B_ATK_TEAM2} team!");
static const u8 sText_StealthRockDisappearedFromTeam[] = _("The pointed stones disappeared\nfrom around {B_ATK_TEAM2} team!");
static const u8 sText_StickyWebDisappearedFromTeam[] = _("The sticky web has disappeared from\nthe ground around {B_ATK_TEAM2} team!");
static const u8 sText_StickyWebUsed[] = _("一张黏黏网展开在了{B_DEF_TEAM2}队伍的周围！");
static const u8 sText_QuashSuccess[] = _("对方{B_ATK_NAME_WITH_PREFIX}的行动延后了！");
static const u8 sText_IonDelugeOn[] = _("离子风暴正在\n肆虐！");
static const u8 sText_TopsyTurvySwitchedStats[] = _("{B_DEF_NAME_WITH_PREFIX}的能力被\n清除了！");
static const u8 sText_TerrainBecomesMisty[] = _("脚下雾气缭绕！");
static const u8 sText_TerrainBecomesGrassy[] = _("脚下绿草如茵！");
static const u8 sText_TerrainBecomesElectric[] = _("脚下电光飞闪！");
static const u8 sText_TerrainBecomesPsychic[] = _("脚下传来了奇妙的感觉！");
static const u8 sText_TargetElectrified[] = _("The {B_DEF_NAME_WITH_PREFIX}的招式\n带电了!");
static const u8 sText_AssaultVestDoesntAllow[] = _("{B_LAST_ITEM} 的效果让这个\n招式无法被使用!\p");
static const u8 sText_GravityPreventsUsage[] = _("{B_ATK_NAME_WITH_PREFIX} 不能使用 {B_CURRENT_MOVE}\n由于重力的影响!\p");
static const u8 sText_HealBlockPreventsUsage[] = _("{B_ATK_NAME_WITH_PREFIX} 无法\n使用治愈招式!\p");
static const u8 sText_MegaEvoReacting[] = _("{B_ATK_NAME_WITH_PREFIX}的 {B_LAST_ITEM} 对 \n{B_ATK_TRAINER_NAME}'s 超级环有反应了!");
static const u8 sText_FerventWishReached[] = _("{B_ATK_TRAINER_NAME}'热切的心意\n传达到了{B_ATK_NAME_WITH_PREFIX}!");
static const u8 sText_MegaEvoEvolved[] = _("{B_ATK_NAME_WITH_PREFIX} 超级进化为\n超级{B_BUFF1}!");
static const u8 sText_drastically[] = _("巨幅提升 ");
static const u8 sText_severely[] = _("巨幅下降 ");
static const u8 sText_Infestation[] = _("{B_DEF_NAME_WITH_PREFIX} 遭受着\n {B_ATK_NAME_WITH_PREFIX}的死缠烂打!");
static const u8 sText_NoEffectOnTarget[] = _("对{B_DEF_NAME_WITH_PREFIX}\n没有效果！");
static const u8 sText_BurstingFlames[] = _("烈焰溅射到了\n {B_SCR_ACTIVE_NAME_WITH_PREFIX}！");
static const u8 sText_BestowItemGiving[] = _("{B_DEF_NAME_WITH_PREFIX} 从{B_ATK_NAME_WITH_PREFIX}\n收到了 {B_LAST_ITEM}!");
static const u8 sText_ThirdTypeAdded[] = _("{B_BUFF1} 被附加到了\n{B_DEF_NAME_WITH_PREFIX}上");
static const u8 sText_FellForFeint[] = _("{B_DEF_NAME_WITH_PREFIX} 摔倒\n了!");
static const u8 sText_PokemonCannotUseMove[] = _("{B_ATK_NAME_WITH_PREFIX} 无法\n使用 {B_CURRENT_MOVE}!");
static const u8 sText_CoveredInPowder[] = _("{B_DEF_NAME_WITH_PREFIX}被粉尘覆盖！");
static const u8 sText_PowderExplodes[] = _("宝可梦身上的粉尘被火焰碰到后爆炸了！");
static const u8 sText_BelchCantUse[] = _("无法使用打嗝！");
static const u8 sText_SpectralThiefSteal[] = _("{B_ATK_NAME_WITH_PREFIX} 偷取了目标\n提升的能力!");
static const u8 sText_GravityGrounding[] = _("{B_DEF_NAME_WITH_PREFIX} 因为重力\n不能停留空中!");
static const u8 sText_MistyTerrainPreventsStatus[] = _("{B_DEF_NAME_WITH_PREFIX} 的脚下\n雾气缭绕!");
static const u8 sText_GrassyTerrainHeals[] = _("{B_ATK_NAME_WITH_PREFIX}因为青草场地\n恢复了少量HP!");
static const u8 sText_ElectricTerrainPreventsSleep[] = _("{B_DEF_NAME_WITH_PREFIX}的脚下\n电光飞闪!");
static const u8 sText_PsychicTerrainPreventsPriority[] = _("{B_DEF_NAME_WITH_PREFIX}的脚下\n传来了奇妙的感觉!");
static const u8 sText_SafetyGogglesProtected[] = _("多亏了它的{B_LAST_ITEM}\n{B_DEF_NAME_WITH_PREFIX}没有起效果!");
static const u8 sText_FlowerVeilProtected[] = _("{B_DEF_NAME_WITH_PREFIX}用花幕\n包裹了自己!");
static const u8 sText_SweetVeilProtected[] = _("{B_DEF_NAME_WITH_PREFIX}用甜幕\n包裹了自己!");
static const u8 sText_AromaVeilProtected[] = _("{B_DEF_NAME_WITH_PREFIX}被芳香幕\n保护了!");
static const u8 sText_CelebrateMessage[] = _("祝贺, {B_PLAYER_NAME}!");
static const u8 sText_UsedInstructedMove[] = _("由于号令的{B_BUFF1}\n{B_ATK_NAME_WITH_PREFIX}使出了招式!");
static const u8 sText_LaserFocusMessage[] = _("{B_ATK_NAME_WITH_PREFIX}\n高度集中!");
static const u8 sText_GemActivates[] = _("{B_LAST_ITEM} 增强了\n{B_ATK_NAME_WITH_PREFIX}的力量!");
static const u8 sText_BerryDmgReducing[] = _("{B_LAST_ITEM}为{B_DEF_NAME_WITH_PREFIX}\n减少了伤害!");
static const u8 sText_TargetAteItem[] = _("{B_DEF_NAME_WITH_PREFIX}吃掉了它的{B_LAST_ITEM}!");
static const u8 sText_AirBalloonFloat[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}用它的{B_LAST_ITEM}\n飘在了空中!");
static const u8 sText_AirBalloonPop[] = _("{B_DEF_NAME_WITH_PREFIX}的{B_LAST_ITEM}破了!");
static const u8 sText_IncinerateBurn[] = _("{B_EFF_NAME_WITH_PREFIX}的{B_LAST_ITEM}\n被烧掉了!");
static const u8 sText_BugBite[] = _("{B_ATK_NAME_WITH_PREFIX} 偷走并吃掉了\n{B_EFF_NAME_WITH_PREFIX}的{B_LAST_ITEM}!");
static const u8 sText_IllusionWoreOff[] = _("{B_DEF_NAME_WITH_PREFIX}的幻象被识破了!");
static const u8 sText_AttackerCuredTargetStatus[] = _("{B_ATK_NAME_WITH_PREFIX} 治愈了\n{B_DEF_NAME_WITH_PREFIX}的问题!");
static const u8 sText_AttackerLostFireType[] = _("{B_ATK_NAME_WITH_PREFIX} 燃尽了自己！");
static const u8 sText_HealerCure[] = _("{B_ATK_NAME_WITH_PREFIX}的{B_LAST_ABILITY}\n治愈了{B_SCR_ACTIVE_NAME_WITH_PREFIX}的问题!");
static const u8 sText_ReceiverAbilityTakeOver[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的 {B_SCR_ACTIVE_ABILITY}\n被继承了!");
static const u8 sText_PkmnAbsorbingPower[] = _("{B_ATK_NAME_WITH_PREFIX}正在吸收力量!");
static const u8 sText_NoOneWillBeAbleToRun[] = _("在下一回合中\n没有宝可梦能够逃跑！");
static const u8 sText_DestinyKnotActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} 爱上了\n因为 {B_LAST_ITEM}!");
static const u8 sText_CloakedInAFreezingLight[] = _("{B_ATK_NAME_WITH_PREFIX} 被冷光\n包围了!");
static const u8 sText_ClearAmuletWontLowerStats[] = _("{B_DEF_NAME_WITH_PREFIX}的 {B_LAST_ITEM}\n没有被降低!");
static const u8 sText_AuraFlaredToLife[] = _("{B_DEF_NAME_WITH_PREFIX}灵光焕发!");
static const u8 sText_AirLockActivates[] = _("天气带来的效果\n消失了。");
static const u8 sText_PressureActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}正在施加\n压迫感！");
static const u8 sText_DarkAuraActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}正在释放\n暗黑气场！");
static const u8 sText_FairyAuraActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}正在释放\n妖精气场！");
static const u8 sText_AuraBreakActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}反转了所有\n其它宝可梦的气场！");
static const u8 sText_ComatoseActivates[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}正在打瞌睡！");
static const u8 sText_ScreenCleanerActivates[] = _("所有的墙都被\n清除了！");
static const u8 sText_FetchedPokeBall[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}回收了\n一个{B_LAST_ITEM}！");
static const u8 sText_BattlerAbilityRaisedStat[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}的{B_SCR_ACTIVE_ABILITY}\n提高了它的{B_BUFF1}！");
static const u8 sText_ASandstormKickedUp[] = _("刮起了沙暴！");
static const u8 sText_PkmnsWillPerishIn3Turns[] = _("所有宝可梦都会在\n三回合后倒下！");
static const u8 sText_AbilityRaisedStatDrastically[] = _("{B_DEF_ABILITY}巨幅提升了{B_DEF_NAME_WITH_PREFIX}的\n{B_BUFF1}！");
static const u8 sText_AsOneEnters[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}同时具备两种特性！");
static const u8 sText_CuriousMedicineEnters[] = _("{B_EFF_NAME_WITH_PREFIX}的\n能力变化还原了！");
static const u8 sText_CanActFaster[] = _("多亏了{B_LAST_ITEM}，\n{B_ATK_NAME_WITH_PREFIX}能更快地行动！");
static const u8 sText_MicleBerryActivates[] = _("通过使用{B_LAST_ITEM}\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}提高了它的命中率！");
static const u8 sText_PkmnShookOffTheTaunt[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}从挑衅状态中\n解除了！");
static const u8 sText_PkmnGotOverItsInfatuation[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}不再迷恋\n对方了！");
static const u8 sText_ZPowerSurrounds[] = _("{B_ATK_NAME_WITH_PREFIX} surrounds\nitself with its Z-Power!");
static const u8 sText_ZPowerUnleashed[] = _("{B_ATK_NAME_WITH_PREFIX} unleashes\nits full-force Z-Move!");
static const u8 sText_ZMoveResetsStats[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} returned its\ndecreased stats to normal using\lits Z-Power!");
static const u8 sText_ZMoveAllStatsUp[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} boosted all\nof its stats using its Z-Power!");
static const u8 sText_ZMoveBoostCrit[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} boosted its\ncritical-hit ratio using its Z-Power!");
static const u8 sText_ZMoveRestoreHp[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} restored its\nHP using its Z-Power!");
static const u8 sText_ZMoveStatUp[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} boosted\nits stats using its Z-Power!");
static const u8 sText_ZMoveHpSwitchInTrap[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s HP was restored by the Z-Power!");
static const u8 sText_TerrainReturnedToNormal[] = _("场地恢复如初了!");
static const u8 sText_ItemCannotBeRemoved[] = _("{B_ATK_NAME_WITH_PREFIX}的道具不能移除!");
static const u8 sText_StickyBarbTransfer[] = _("{B_ATK_NAME_WITH_PREFIX}携带了\n{B_LAST_ITEM}\n!");
static const u8 sText_PkmnBurnHealed[] = _("{B_DEF_NAME_WITH_PREFIX}的\n烧伤治愈了。");
static const u8 sText_RedCardActivate[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}举起了{B_LAST_ITEM}\n反对{B_ATK_NAME_WITH_PREFIX}!");
static const u8 sText_EjectButtonActivate[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}与{B_LAST_ITEM}\n一起关闭!");
static const u8 sText_AttackerGotOverInfatuation[] =_("{B_ATK_NAME_WITH_PREFIX}克服了迷人!");
static const u8 sText_TormentedNoMore[] = _("{B_ATK_NAME_WITH_PREFIX}不再\n受到折磨!");
static const u8 sText_HealBlockedNoMore[] = _("{B_ATK_NAME_WITH_PREFIX}解除了\n它的回复封锁!");
static const u8 sText_AttackerBecameFullyCharged[] = _("{B_ATK_NAME_WITH_PREFIX}因为训练家\n已经充满了!\p");
static const u8 sText_AttackerBecameAshSpecies[] = _("{B_ATK_NAME_WITH_PREFIX}变成了\n小智版{B_BUFF1}!\p");
static const u8 sText_ExtremelyHarshSunlight[] = _("阳光变得\n非常刺眼!");
static const u8 sText_ExtremeSunlightFaded[] = _("强烈的阳光消退了。{PAUSE 64}");
static const u8 sText_MoveEvaporatedInTheHarshSunlight[] = _("水属性攻击\n在强烈的阳光下蒸发了!");
static const u8 sText_ExtremelyHarshSunlightWasNotLessened[] = _("强烈的阳光\n丝毫没有变弱!");
static const u8 sText_HeavyRain[] = _("倾盆大雨开始下了!");
static const u8 sText_HeavyRainLifted[] = _("大雨消退了!{PAUSE 64}");
static const u8 sText_MoveFizzledOutInTheHeavyRain[] = _("火属性攻击\n在大雨中没有效果!");
static const u8 sText_NoReliefFromHeavyRain[] = _("这场大雨并没有\n丝毫减缓!");
static const u8 sText_MysteriousAirCurrent[] = _("一股神秘的大风保护\n着飞行属性宝可梦!");
static const u8 sText_StrongWindsDissipated[] = _("神秘的大风\n停下了!{PAUSE 64}");
static const u8 sText_MysteriousAirCurrentBlowsOn[] = _("神秘的大风正在\n不顾一切的吹!");
static const u8 sText_AttackWeakenedByStrongWinds[] = _("神秘的大风正在\n消弱了攻击招式!");
static const u8 sText_StuffCheeksCantSelect[] = _("您的背包没有树果\n无法使用大快朵颐!\p");
static const u8 sText_PkmnRevertedToPrimal[] = _("{B_ATK_NAME_WITH_PREFIX}回归原始形态了!");
static const u8 sText_ButPokemonCantUseTheMove[] = _("但是{B_ATK_NAME_WITH_PREFIX}\n无法使用技能!");
static const u8 sText_ButHoopaCantUseIt[] = _("但是胡帕\n现在无法使用它!");
static const u8 sText_BrokeThroughProtection[] = _("它破解了\n{B_DEF_NAME_WITH_PREFIX}的守住!");
static const u8 sText_AbilityAllowsOnlyMove[] = _("{B_ATK_ABILITY}只允许\n用于{B_CURRENT_MOVE}!\p");
static const u8 sText_SwappedAbilities[] = _("{B_DEF_NAME_WITH_PREFIX}与选中的\n目标交换特性!");
static const u8 sText_PastelVeilProtected[] = _("{B_DEF_NAME_WITH_PREFIX}受到\n粉彩护幕的保护!");
static const u8 sText_PastelVeilEnters[] = _("{B_DEF_NAME_WITH_PREFIX}的\n中毒已经治愈了!");
static const u8 sText_BattlerTypeChangedTo[] = _("{B_BUFF1}的属性\n更改为{B_BUFF2}!");
static const u8 sText_BothCanNoLongerEscape[] = _("没有宝可梦能逃跑!");
static const u8 sText_CantEscapeDueToUsedMove[] = _("{B_ATK_NAME_WITH_PREFIX}不能逃跑\n因为他使用了{B_CURRENT_MOVE}!");
static const u8 sText_PkmnBecameWeakerToFire[] = _("{B_DEF_NAME_WITH_PREFIX}的\n火属性技能减弱了!");
static const u8 sText_PkmnAboutToBeAttackedByItsItem[] = _("{B_DEF_NAME_WITH_PREFIX}将受到\n{B_BUFF1}的伤害!");
static const u8 sText_CantEscapeBecauseOfCurrentMove[] = _("{B_DEF_NAME_WITH_PREFIX}不能逃跑e\n因为{B_CURRENT_MOVE}!");
static const u8 sText_NeutralizingGasEnters[] = _("化学变化气体填满了场地!");
static const u8 sText_NeutralizingGasOver[] = _("化学变化气体\n逐渐消失了!");
static const u8 sText_PkmnTookTargetHigh[] = _("{B_ATK_NAME_WITH_PREFIX} took {B_DEF_NAME_WITH_PREFIX}\ninto the air!");
static const u8 sText_TargetTooHeavy[] = _("But the target\nwas too heavy!");
static const u8 sText_MeteorBeamCharging[] = _("{B_ATK_NAME_WITH_PREFIX} is overflowing\nwith space energy!");
static const u8 sText_HeatingUpBeak[] = _("{B_ATK_NAME_WITH_PREFIX} started\nheating up its beak!");
static const u8 sText_CourtChange[] = _("{B_ATK_NAME_WITH_PREFIX} swapped the battle\neffects affecting each side!");
static const u8 sText_AttackerExpelledThePoison[] = _("{B_ATK_NAME_WITH_PREFIX} managed to\nexpel the poison!");
static const u8 sText_AttackerShookItselfAwake[] = _("{B_ATK_NAME_WITH_PREFIX} shook itself awake!");
static const u8 sText_AttackerBrokeThroughParalysis[] = _("{B_ATK_NAME_WITH_PREFIX} gathered all its energy\nto overcome its paralysis!");
static const u8 sText_AttackerHealedItsBurn[] = _("{B_ATK_NAME_WITH_PREFIX} healed its burn with\nits sheer determination!");
static const u8 sText_AttackerHealedItsFrostbite[] = _("{B_ATK_NAME_WITH_PREFIX} healed its frostbite with\nits sheer determination!");
static const u8 sText_AttackerMeltedTheIce[] = _("{B_ATK_NAME_WITH_PREFIX} melted the ice with\nits fiery determination!");
static const u8 sText_TargetToughedItOut[] = _("{B_DEF_NAME_WITH_PREFIX} toughed it out\nto show you its best side!");
static const u8 sText_AttackerLostElectricType[] = _("{B_ATK_NAME_WITH_PREFIX} used up all\nof its electricity!");
static const u8 sText_AttackerSwitchedStatWithTarget[] = _("{B_ATK_NAME_WITH_PREFIX} switched {B_BUFF1}\nwith its target!");
static const u8 sText_BeingHitChargedPkmnWithPower[] = _("Being hit by {B_CURRENT_MOVE}\ncharged {B_DEF_NAME_WITH_PREFIX} with power!");
static const u8 sText_SunlightActivatedAbility[] = _("The harsh sunlight activated\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ABILITY}!");
static const u8 sText_StatWasHeightened[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_BUFF1} was heightened!");
static const u8 sText_ElectricTerrainActivatedAbility[] = _("The Electric Terrain activated\n{B_SCR_ACTIVE_NAME_WITH_PREFIX}'s {B_LAST_ABILITY}!");
static const u8 sText_AbilityWeakenedSurroundingMonsStat[] = _("{B_ATK_NAME_WITH_PREFIX}'s {B_ATK_ABILITY}\nweakened the {B_BUFF1} of\lall surrounding Pokémon!\p");
static const u8 sText_AttackerGainedStrengthFromTheFallen[] = _("{B_ATK_NAME_WITH_PREFIX} gained strength\nfrom the fallen!");
static const u8 sText_PrepareShellTrap[] = _("{B_ATK_NAME_WITH_PREFIX} set a shell trap!");
static const u8 sText_ShellTrapDidntWork[] = _("{B_ATK_NAME_WITH_PREFIX}'s shell trap didn't work!");
static const u8 sText_SharpSteelFloats[] = _("Sharp-pointed steel floats\naround {B_DEF_TEAM2} team!");
static const u8 sText_SharpSteelDmg[] = _("Sharp steel bit into {B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_PkmnBlewAwaySharpSteel[] = _("{B_ATK_NAME_WITH_PREFIX} blew away\nsharp steel!");
static const u8 sText_SharpSteelDisappearedFromTeam[] = _("The sharp steel disappeared from\nthe ground around {B_ATK_TEAM2} team!");
static const u8 sText_TeamTrappedWithVines[] = _("{B_DEF_TEAM1} team got trapped\nwith vines!");
static const u8 sText_PkmnHurtByVines[] = _("{B_ATK_NAME_WITH_PREFIX} is hurt by\nG-Max Vine Lash's ferocious beating!");
static const u8 sText_TeamCaughtInVortex[] = _("{B_DEF_TEAM1} team got caught\nin a vortex of water!");
static const u8 sText_PkmnHurtByVortex[] = _("{B_ATK_NAME_WITH_PREFIX} is hurt by\nG-Max Cannonade's vortex!");
static const u8 sText_TeamSurroundedByFire[] = _("{B_DEF_TEAM1} team was surrounded\nby flames!");
static const u8 sText_PkmnBurningUp[] = _("{B_ATK_NAME_WITH_PREFIX} is burning up\nwithin G-Max Wildfire's flames!");
static const u8 sText_TeamSurroundedByRocks[] = _("{B_DEF_TEAM1} team was surrounded\nby rocks!");
static const u8 sText_PkmnHurtByRocksThrown[] = _("{B_ATK_NAME_WITH_PREFIX} is hurt by\nrocks thrown out by G-Max Volcalith!");
static const u8 sText_CouldntFullyProtect[] = _("{B_DEF_NAME_WITH_PREFIX} couldn't fully protect\nitself and got hurt!");
static const u8 sText_StockpiledEffectWoreOff[] = _("{B_ATK_NAME_WITH_PREFIX}'s stockpiled\neffect wore off!");
static const u8 sText_MoveBlockedByDynamax[] = _("The move was blocked by\nthe power of Dynamax!");
static const u8 sText_PkmnRevivedReadyToFight[] = _("{B_BUFF1} was revived and\nis ready to fight again!");
static const u8 sText_ItemRestoredSpeciesHealth[] = _("{B_BUFF1} had its\nHP restored!");
static const u8 sText_ItemCuredSpeciesStatus[] = _("{B_BUFF1} had\nits status healed!");
static const u8 sText_ItemRestoredSpeciesPP[] = _("{B_BUFF1} had its\nPP restored!");
static const u8 sText_AtkTrappedDef[] = _("{B_ATK_NAME_WITH_PREFIX} trapped\nthe {B_DEF_NAME_WITH_PREFIX}!");
static const u8 sText_MirrorHerbCopied[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} used its {B_LAST_ITEM}\nto mirror its opponent's stat changes!");
static const u8 sText_PkmnItemMelted[] = _("{B_ATK_NAME_WITH_PREFIX} corroded\n{B_DEF_NAME_WITH_PREFIX}'s {B_LAST_ITEM}!");
static const u8 sText_UltraBurstReacting[] = _("Bright light is about to\nburst out of {B_ATK_NAME_WITH_PREFIX}!");
static const u8 sText_UltraBurstCompleted[] = _("{B_ATK_NAME_WITH_PREFIX} regained its\ntrue power through Ultra Burst!");
static const u8 sText_TeamGainedEXP[] = _("The rest of your team gained EXP.\nPoints thanks to the {B_LAST_ITEM}!\p");
static const u8 sText_CurrentMoveCantSelect[] = _("{B_BUFF1} cannot be used!\p");
static const u8 sText_TargetIsBeingSaltCured[] = _("{B_DEF_NAME_WITH_PREFIX} is being salt cured!");
static const u8 sText_TargetIsHurtBySaltCure[] = _("{B_DEF_NAME_WITH_PREFIX} is hurt by {B_BUFF1}!");
static const u8 sText_OpportunistCopied[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX} copied its\nopponent's stat changes!");
static const u8 sText_TargetCoveredInStickyCandySyrup[] = _("{B_DEF_NAME_WITH_PREFIX} got covered\nin sticky syrup!");
static const u8 sText_PkmnTellChillingReceptionJoke[] = _("{B_ATK_NAME_WITH_PREFIX} is preparing to tell a\nchillingly bad joke!");
static const u8 sText_ZeroToHeroTransformation[] = _("{B_ATK_NAME_WITH_PREFIX} underwent a heroic\ntransformation!");
static const u8 sText_TheTwoMovesBecomeOne[] = _("The two moves become one!\nIt's a combined move!{PAUSE 16}");
static const u8 sText_ARainbowAppearedOnSide[] = _("A rainbow appeared in the sky\non {B_ATK_TEAM2} team's side!");
static const u8 sText_TheRainbowDisappeared[] = _("The rainbow on {B_ATK_TEAM2}\nside disappeared!");
static const u8 sText_WaitingForPartnersMove[] = _("{B_ATK_NAME_WITH_PREFIX} is waiting\nfor {B_ATK_PARTNER_NAME}'s move…{PAUSE 16}");
static const u8 sText_SeaOfFireEnvelopedSide[] = _("A sea of fire enveloped\n{B_DEF_TEAM2} team!");
static const u8 sText_HurtByTheSeaOfFire[] = _("{B_ATK_TEAM1} {B_ATK_NAME_WITH_PREFIX} was hurt\nby the sea of fire!");
static const u8 sText_TheSeaOfFireDisappeared[] = _("The sea of fire around {B_ATK_TEAM2}\nteam disappeared!");
static const u8 sText_SwampEnvelopedSide[] = _("A swamp enveloped\n{B_DEF_TEAM2} team!");
static const u8 sText_TheSwampDisappeared[] = _("The swamp around {B_ATK_TEAM2}\nteam disappeared!");

const u8 *const gBattleStringsTable[BATTLESTRINGS_COUNT] =
{
    [STRINGID_THESWAMPDISAPPEARED - BATTLESTRINGS_TABLE_START] = sText_TheSwampDisappeared,
    [STRINGID_SWAMPENVELOPEDSIDE - BATTLESTRINGS_TABLE_START] = sText_SwampEnvelopedSide,
    [STRINGID_THESEAOFFIREDISAPPEARED - BATTLESTRINGS_TABLE_START] = sText_TheSeaOfFireDisappeared,
    [STRINGID_HURTBYTHESEAOFFIRE - BATTLESTRINGS_TABLE_START] = sText_HurtByTheSeaOfFire,
    [STRINGID_SEAOFFIREENVELOPEDSIDE - BATTLESTRINGS_TABLE_START] = sText_SeaOfFireEnvelopedSide,
    [STRINGID_WAITINGFORPARTNERSMOVE - BATTLESTRINGS_TABLE_START] = sText_WaitingForPartnersMove,
    [STRINGID_THERAINBOWDISAPPEARED - BATTLESTRINGS_TABLE_START] = sText_TheRainbowDisappeared,
    [STRINGID_ARAINBOWAPPEAREDONSIDE - BATTLESTRINGS_TABLE_START] = sText_ARainbowAppearedOnSide,
    [STRINGID_THETWOMOVESBECOMEONE - BATTLESTRINGS_TABLE_START] = sText_TheTwoMovesBecomeOne,
    [STRINGID_ZEROTOHEROTRANSFORMATION - BATTLESTRINGS_TABLE_START] = sText_ZeroToHeroTransformation,
    [STRINGID_PKMNTELLCHILLINGRECEPTIONJOKE - BATTLESTRINGS_TABLE_START] = sText_PkmnTellChillingReceptionJoke,
    [STRINGID_MOVEBLOCKEDBYDYNAMAX - BATTLESTRINGS_TABLE_START] = sText_MoveBlockedByDynamax,
    [STRINGID_OPPORTUNISTCOPIED - BATTLESTRINGS_TABLE_START] = sText_OpportunistCopied,
    [STRINGID_TARGETISHURTBYSALTCURE - BATTLESTRINGS_TABLE_START] = sText_TargetIsHurtBySaltCure,
    [STRINGID_TARGETISBEINGSALTCURED - BATTLESTRINGS_TABLE_START] = sText_TargetIsBeingSaltCured,
    [STRINGID_CURRENTMOVECANTSELECT - BATTLESTRINGS_TABLE_START] = sText_CurrentMoveCantSelect,
    [STRINGID_PKMNITEMMELTED - BATTLESTRINGS_TABLE_START] = sText_PkmnItemMelted,
    [STRINGID_MIRRORHERBCOPIED - BATTLESTRINGS_TABLE_START] = sText_MirrorHerbCopied,
    [STRINGID_THUNDERCAGETRAPPED - BATTLESTRINGS_TABLE_START] = sText_AtkTrappedDef,
    [STRINGID_ITEMRESTOREDSPECIESHEALTH - BATTLESTRINGS_TABLE_START] = sText_ItemRestoredSpeciesHealth,
    [STRINGID_ITEMCUREDSPECIESSTATUS - BATTLESTRINGS_TABLE_START] = sText_ItemCuredSpeciesStatus,
    [STRINGID_ITEMRESTOREDSPECIESPP - BATTLESTRINGS_TABLE_START] = sText_ItemRestoredSpeciesPP,
    [STRINGID_PKMNREVIVEDREADYTOFIGHT - BATTLESTRINGS_TABLE_START] = sText_PkmnRevivedReadyToFight,
    [STRINGID_STOCKPILEDEFFECTWOREOFF - BATTLESTRINGS_TABLE_START] = sText_StockpiledEffectWoreOff,
    [STRINGID_COULDNTFULLYPROTECT - BATTLESTRINGS_TABLE_START] = sText_CouldntFullyProtect,
    [STRINGID_PKMNHURTBYROCKSTHROWN - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtByRocksThrown,
    [STRINGID_TEAMSURROUNDEDBYROCKS - BATTLESTRINGS_TABLE_START] = sText_TeamSurroundedByRocks,
    [STRINGID_PKMNBURNINGUP - BATTLESTRINGS_TABLE_START] = sText_PkmnBurningUp,
    [STRINGID_TEAMSURROUNDEDBYFIRE - BATTLESTRINGS_TABLE_START] = sText_TeamSurroundedByFire,
    [STRINGID_PKMNHURTBYVORTEX - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtByVortex,
    [STRINGID_TEAMCAUGHTINVORTEX - BATTLESTRINGS_TABLE_START] = sText_TeamCaughtInVortex,
    [STRINGID_PKMNHURTBYVINES - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtByVines,
    [STRINGID_TEAMTRAPPEDWITHVINES - BATTLESTRINGS_TABLE_START] = sText_TeamTrappedWithVines,
    [STRINGID_PKMNBLEWAWAYSHARPSTEEL - BATTLESTRINGS_TABLE_START] = sText_PkmnBlewAwaySharpSteel,
    [STRINGID_SHARPSTEELDMG - BATTLESTRINGS_TABLE_START] = sText_SharpSteelDmg,
    [STRINGID_SHARPSTEELFLOATS - BATTLESTRINGS_TABLE_START] = sText_SharpSteelFloats,
    [STRINGID_ATTACKERGAINEDSTRENGTHFROMTHEFALLEN - BATTLESTRINGS_TABLE_START] = sText_AttackerGainedStrengthFromTheFallen,
    [STRINGID_ABILITYWEAKENEDFSURROUNDINGMONSSTAT - BATTLESTRINGS_TABLE_START] = sText_AbilityWeakenedSurroundingMonsStat,
    [STRINGID_ELECTRICTERRAINACTIVATEDABILITY - BATTLESTRINGS_TABLE_START] = sText_ElectricTerrainActivatedAbility,
    [STRINGID_STATWASHEIGHTENED - BATTLESTRINGS_TABLE_START] = sText_StatWasHeightened,
    [STRINGID_SUNLIGHTACTIVATEDABILITY - BATTLESTRINGS_TABLE_START] = sText_SunlightActivatedAbility,
    [STRINGID_BEINGHITCHARGEDPKMNWITHPOWER - BATTLESTRINGS_TABLE_START] = sText_BeingHitChargedPkmnWithPower,
    [STRINGID_ATTACKERSWITCHEDSTATWITHTARGET - BATTLESTRINGS_TABLE_START] = sText_AttackerSwitchedStatWithTarget,
    [STRINGID_TARGETTOUGHEDITOUT - BATTLESTRINGS_TABLE_START] = sText_TargetToughedItOut,
    [STRINGID_ATTACKERMELTEDTHEICE - BATTLESTRINGS_TABLE_START] = sText_AttackerMeltedTheIce,
    [STRINGID_ATTACKERHEALEDITSBURN - BATTLESTRINGS_TABLE_START] = sText_AttackerHealedItsBurn,
    [STRINGID_ATTACKERBROKETHROUGHPARALYSIS - BATTLESTRINGS_TABLE_START] = sText_AttackerBrokeThroughParalysis,
    [STRINGID_ATTACKERSHOOKITSELFAWAKE - BATTLESTRINGS_TABLE_START] = sText_AttackerShookItselfAwake,
    [STRINGID_ATTACKEREXPELLEDTHEPOISON - BATTLESTRINGS_TABLE_START] = sText_AttackerExpelledThePoison,
    [STRINGID_ZPOWERSURROUNDS - BATTLESTRINGS_TABLE_START] = sText_ZPowerSurrounds,
    [STRINGID_ZMOVEUNLEASHED - BATTLESTRINGS_TABLE_START] = sText_ZPowerUnleashed,
    [STRINGID_ZMOVERESETSSTATS - BATTLESTRINGS_TABLE_START] = sText_ZMoveResetsStats,
    [STRINGID_ZMOVEALLSTATSUP - BATTLESTRINGS_TABLE_START] = sText_ZMoveAllStatsUp,
    [STRINGID_ZMOVEZBOOSTCRIT - BATTLESTRINGS_TABLE_START] = sText_ZMoveBoostCrit,
    [STRINGID_ZMOVERESTOREHP - BATTLESTRINGS_TABLE_START] = sText_ZMoveRestoreHp,
    [STRINGID_ZMOVESTATUP - BATTLESTRINGS_TABLE_START] = sText_ZMoveStatUp,
    [STRINGID_ZMOVEHPTRAP - BATTLESTRINGS_TABLE_START] = sText_ZMoveHpSwitchInTrap,
    [STRINGID_PLAYERLOSTTOENEMYTRAINER - BATTLESTRINGS_TABLE_START] = sText_PlayerLostToEnemyTrainer,
    [STRINGID_PLAYERPAIDPRIZEMONEY - BATTLESTRINGS_TABLE_START] = sText_PlayerPaidPrizeMoney,
    [STRINGID_SHELLTRAPDIDNTWORK - BATTLESTRINGS_TABLE_START] = sText_ShellTrapDidntWork,
    [STRINGID_PREPARESHELLTRAP - BATTLESTRINGS_TABLE_START] = sText_PrepareShellTrap,
    [STRINGID_COURTCHANGE - BATTLESTRINGS_TABLE_START] = sText_CourtChange,
    [STRINGID_HEATUPBEAK - BATTLESTRINGS_TABLE_START] = sText_HeatingUpBeak,
    [STRINGID_METEORBEAMCHARGING - BATTLESTRINGS_TABLE_START] = sText_MeteorBeamCharging,
    [STRINGID_PKMNINSNAPTRAP - BATTLESTRINGS_TABLE_START] = sText_PkmnInSnapTrap,
    [STRINGID_NEUTRALIZINGGASOVER - BATTLESTRINGS_TABLE_START] = sText_NeutralizingGasOver,
    [STRINGID_NEUTRALIZINGGASENTERS - BATTLESTRINGS_TABLE_START] = sText_NeutralizingGasEnters,
    [STRINGID_BATTLERTYPECHANGEDTO - BATTLESTRINGS_TABLE_START] = sText_BattlerTypeChangedTo,
    [STRINGID_PASTELVEILENTERS - BATTLESTRINGS_TABLE_START] = sText_PastelVeilEnters,
    [STRINGID_PASTELVEILPROTECTED - BATTLESTRINGS_TABLE_START] = sText_PastelVeilProtected,
    [STRINGID_SWAPPEDABILITIES - BATTLESTRINGS_TABLE_START] = sText_SwappedAbilities,
    [STRINGID_ABILITYALLOWSONLYMOVE - BATTLESTRINGS_TABLE_START] = sText_AbilityAllowsOnlyMove,
    [STRINGID_BROKETHROUGHPROTECTION - BATTLESTRINGS_TABLE_START] = sText_BrokeThroughProtection,
    [STRINGID_BUTPOKEMONCANTUSETHEMOVE - BATTLESTRINGS_TABLE_START] = sText_ButPokemonCantUseTheMove,
    [STRINGID_BUTHOOPACANTUSEIT - BATTLESTRINGS_TABLE_START] = sText_ButHoopaCantUseIt,
    [STRINGID_PKMNREVERTEDTOPRIMAL - BATTLESTRINGS_TABLE_START] = sText_PkmnRevertedToPrimal,
    [STRINGID_STUFFCHEEKSCANTSELECT - BATTLESTRINGS_TABLE_START] = sText_StuffCheeksCantSelect,
    [STRINGID_ATTACKWEAKENEDBSTRONGWINDS - BATTLESTRINGS_TABLE_START] = sText_AttackWeakenedByStrongWinds,
    [STRINGID_MYSTERIOUSAIRCURRENTBLOWSON - BATTLESTRINGS_TABLE_START] = sText_MysteriousAirCurrentBlowsOn,
    [STRINGID_STRONGWINDSDISSIPATED - BATTLESTRINGS_TABLE_START] = sText_StrongWindsDissipated,
    [STRINGID_MYSTERIOUSAIRCURRENT - BATTLESTRINGS_TABLE_START] = sText_MysteriousAirCurrent,
    [STRINGID_NORELIEFROMHEAVYRAIN - BATTLESTRINGS_TABLE_START] = sText_NoReliefFromHeavyRain,
    [STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN - BATTLESTRINGS_TABLE_START] = sText_MoveFizzledOutInTheHeavyRain,
    [STRINGID_HEAVYRAINLIFTED - BATTLESTRINGS_TABLE_START] = sText_HeavyRainLifted,
    [STRINGID_HEAVYRAIN - BATTLESTRINGS_TABLE_START] = sText_HeavyRain,
    [STRINGID_EXTREMELYHARSHSUNLIGHTWASNOTLESSENED - BATTLESTRINGS_TABLE_START] = sText_ExtremelyHarshSunlightWasNotLessened,
    [STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT - BATTLESTRINGS_TABLE_START] = sText_MoveEvaporatedInTheHarshSunlight,
    [STRINGID_EXTREMESUNLIGHTFADED - BATTLESTRINGS_TABLE_START] = sText_ExtremeSunlightFaded,
    [STRINGID_EXTREMELYHARSHSUNLIGHT - BATTLESTRINGS_TABLE_START] = sText_ExtremelyHarshSunlight,
    [STRINGID_ATTACKERBECAMEASHSPECIES - BATTLESTRINGS_TABLE_START] = sText_AttackerBecameAshSpecies,
    [STRINGID_ATTACKERBECAMEFULLYCHARGED - BATTLESTRINGS_TABLE_START] = sText_AttackerBecameFullyCharged,
    [STRINGID_HEALBLOCKEDNOMORE - BATTLESTRINGS_TABLE_START] = sText_HealBlockedNoMore,
    [STRINGID_TORMENTEDNOMORE - BATTLESTRINGS_TABLE_START] = sText_TormentedNoMore,
    [STRINGID_ATKGOTOVERINFATUATION - BATTLESTRINGS_TABLE_START] = sText_AttackerGotOverInfatuation,
    [STRINGID_EJECTBUTTONACTIVATE - BATTLESTRINGS_TABLE_START] = sText_EjectButtonActivate,
    [STRINGID_REDCARDACTIVATE - BATTLESTRINGS_TABLE_START] = sText_RedCardActivate,
    [STRINGID_PKMNBURNHEALED - BATTLESTRINGS_TABLE_START] = sText_PkmnBurnHealed,
    [STRINGID_STICKYBARBTRANSFER - BATTLESTRINGS_TABLE_START] = sText_StickyBarbTransfer,
    [STRINGID_ITEMCANNOTBEREMOVED - BATTLESTRINGS_TABLE_START] = sText_ItemCannotBeRemoved,
    [STRINGID_PKMNGOTOVERITSINFATUATION - BATTLESTRINGS_TABLE_START] = sText_PkmnGotOverItsInfatuation,
    [STRINGID_PKMNSHOOKOFFTHETAUNT - BATTLESTRINGS_TABLE_START] = sText_PkmnShookOffTheTaunt,
    [STRINGID_MICLEBERRYACTIVATES - BATTLESTRINGS_TABLE_START] = sText_MicleBerryActivates,
    [STRINGID_CANACTFASTERTHANKSTO - BATTLESTRINGS_TABLE_START] = sText_CanActFaster,
    [STRINGID_CURIOUSMEDICINEENTERS - BATTLESTRINGS_TABLE_START] = sText_CuriousMedicineEnters,
    [STRINGID_ASONEENTERS - BATTLESTRINGS_TABLE_START] = sText_AsOneEnters,
    [STRINGID_ABILITYRAISEDSTATDRASTICALLY - BATTLESTRINGS_TABLE_START] = sText_AbilityRaisedStatDrastically,
    [STRINGID_PKMNSWILLPERISHIN3TURNS - BATTLESTRINGS_TABLE_START] = sText_PkmnsWillPerishIn3Turns,
    [STRINGID_ASANDSTORMKICKEDUP - BATTLESTRINGS_TABLE_START] = sText_ASandstormKickedUp,
    [STRINGID_BATTLERABILITYRAISEDSTAT - BATTLESTRINGS_TABLE_START] = sText_BattlerAbilityRaisedStat,
    [STRINGID_FETCHEDPOKEBALL - BATTLESTRINGS_TABLE_START] = sText_FetchedPokeBall,
    [STRINGID_CLEARAMULETWONTLOWERSTATS - BATTLESTRINGS_TABLE_START] = sText_ClearAmuletWontLowerStats,
    [STRINGID_CLOAKEDINAFREEZINGLIGHT - BATTLESTRINGS_TABLE_START] = sText_CloakedInAFreezingLight,
    [STRINGID_DESTINYKNOTACTIVATES - BATTLESTRINGS_TABLE_START] = sText_DestinyKnotActivates,
    [STRINGID_NOONEWILLBEABLETORUNAWAY - BATTLESTRINGS_TABLE_START] = sText_NoOneWillBeAbleToRun,
    [STRINGID_PKNMABSORBINGPOWER - BATTLESTRINGS_TABLE_START] = sText_PkmnAbsorbingPower,
    [STRINGID_RECEIVERABILITYTAKEOVER - BATTLESTRINGS_TABLE_START] = sText_ReceiverAbilityTakeOver,
    [STRINGID_SCRIPTINGABILITYSTATRAISE - BATTLESTRINGS_TABLE_START] = sText_ScriptingAbilityRaisedStat,
    [STRINGID_HEALERCURE - BATTLESTRINGS_TABLE_START] = sText_HealerCure,
    [STRINGID_ATTACKERLOSTFIRETYPE - BATTLESTRINGS_TABLE_START] = sText_AttackerLostFireType,
    [STRINGID_ATTACKERCUREDTARGETSTATUS - BATTLESTRINGS_TABLE_START] = sText_AttackerCuredTargetStatus,
    [STRINGID_ILLUSIONWOREOFF - BATTLESTRINGS_TABLE_START] = sText_IllusionWoreOff,
    [STRINGID_BUGBITE - BATTLESTRINGS_TABLE_START] = sText_BugBite,
    [STRINGID_INCINERATEBURN - BATTLESTRINGS_TABLE_START] = sText_IncinerateBurn,
    [STRINGID_AIRBALLOONPOP - BATTLESTRINGS_TABLE_START] = sText_AirBalloonPop,
    [STRINGID_AIRBALLOONFLOAT - BATTLESTRINGS_TABLE_START] = sText_AirBalloonFloat,
    [STRINGID_TARGETATEITEM - BATTLESTRINGS_TABLE_START] = sText_TargetAteItem,
    [STRINGID_BERRYDMGREDUCES - BATTLESTRINGS_TABLE_START] = sText_BerryDmgReducing,
    [STRINGID_GEMACTIVATES - BATTLESTRINGS_TABLE_START] = sText_GemActivates,
    [STRINGID_LASERFOCUS - BATTLESTRINGS_TABLE_START] = sText_LaserFocusMessage,
    [STRINGID_THROATCHOPENDS - BATTLESTRINGS_TABLE_START] = sText_ThroatChopEnds,
    [STRINGID_PKMNCANTUSEMOVETHROATCHOP - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseMoveThroatChop,
    [STRINGID_USEDINSTRUCTEDMOVE - BATTLESTRINGS_TABLE_START] = sText_UsedInstructedMove,
    [STRINGID_CELEBRATEMESSAGE - BATTLESTRINGS_TABLE_START] = sText_CelebrateMessage,
    [STRINGID_AROMAVEILPROTECTED - BATTLESTRINGS_TABLE_START] = sText_AromaVeilProtected,
    [STRINGID_SWEETVEILPROTECTED - BATTLESTRINGS_TABLE_START] = sText_SweetVeilProtected,
    [STRINGID_FLOWERVEILPROTECTED - BATTLESTRINGS_TABLE_START] = sText_FlowerVeilProtected,
    [STRINGID_SAFETYGOGGLESPROTECTED - BATTLESTRINGS_TABLE_START] = sText_SafetyGogglesProtected,
    [STRINGID_SPECTRALTHIEFSTEAL - BATTLESTRINGS_TABLE_START] = sText_SpectralThiefSteal,
    [STRINGID_BELCHCANTSELECT - BATTLESTRINGS_TABLE_START] = sText_BelchCantUse,
    [STRINGID_TRAINER1LOSETEXT - BATTLESTRINGS_TABLE_START] = sText_Trainer1LoseText,
    [STRINGID_PKMNGAINEDEXP - BATTLESTRINGS_TABLE_START] = sText_PkmnGainedEXP,
    [STRINGID_PKMNGREWTOLV - BATTLESTRINGS_TABLE_START] = sText_PkmnGrewToLv,
    [STRINGID_PKMNLEARNEDMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnLearnedMove,
    [STRINGID_TRYTOLEARNMOVE1 - BATTLESTRINGS_TABLE_START] = sText_TryToLearnMove1,
    [STRINGID_TRYTOLEARNMOVE2 - BATTLESTRINGS_TABLE_START] = sText_TryToLearnMove2,
    [STRINGID_TRYTOLEARNMOVE3 - BATTLESTRINGS_TABLE_START] = sText_TryToLearnMove3,
    [STRINGID_PKMNFORGOTMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnForgotMove,
    [STRINGID_STOPLEARNINGMOVE - BATTLESTRINGS_TABLE_START] = sText_StopLearningMove,
    [STRINGID_DIDNOTLEARNMOVE - BATTLESTRINGS_TABLE_START] = sText_DidNotLearnMove,
    [STRINGID_PKMNLEARNEDMOVE2 - BATTLESTRINGS_TABLE_START] = sText_PkmnLearnedMove2,
    [STRINGID_ATTACKMISSED - BATTLESTRINGS_TABLE_START] = sText_AttackMissed,
    [STRINGID_PKMNPROTECTEDITSELF - BATTLESTRINGS_TABLE_START] = sText_PkmnProtectedItself,
    [STRINGID_STATSWONTINCREASE2 - BATTLESTRINGS_TABLE_START] = sText_StatsWontIncrease2,
    [STRINGID_AVOIDEDDAMAGE - BATTLESTRINGS_TABLE_START] = sText_AvoidedDamage,
    [STRINGID_ITDOESNTAFFECT - BATTLESTRINGS_TABLE_START] = sText_ItDoesntAffect,
    [STRINGID_ATTACKERFAINTED - BATTLESTRINGS_TABLE_START] = sText_AttackerFainted,
    [STRINGID_TARGETFAINTED - BATTLESTRINGS_TABLE_START] = sText_TargetFainted,
    [STRINGID_PLAYERGOTMONEY - BATTLESTRINGS_TABLE_START] = sText_PlayerGotMoney,
    [STRINGID_PLAYERWHITEOUT - BATTLESTRINGS_TABLE_START] = sText_PlayerWhiteout,
    [STRINGID_PLAYERWHITEOUT2 - BATTLESTRINGS_TABLE_START] = sText_PlayerWhiteout2,
    [STRINGID_PREVENTSESCAPE - BATTLESTRINGS_TABLE_START] = sText_PreventsEscape,
    [STRINGID_HITXTIMES - BATTLESTRINGS_TABLE_START] = sText_HitXTimes,
    [STRINGID_PKMNFELLASLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnFellAsleep,
    [STRINGID_PKMNMADESLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnMadeSleep,
    [STRINGID_PKMNALREADYASLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyAsleep,
    [STRINGID_PKMNALREADYASLEEP2 - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyAsleep2,
    [STRINGID_PKMNWASNTAFFECTED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasntAffected,
    [STRINGID_PKMNWASPOISONED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasPoisoned,
    [STRINGID_PKMNPOISONEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnPoisonedBy,
    [STRINGID_PKMNHURTBYPOISON - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtByPoison,
    [STRINGID_PKMNALREADYPOISONED - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyPoisoned,
    [STRINGID_PKMNBADLYPOISONED - BATTLESTRINGS_TABLE_START] = sText_PkmnBadlyPoisoned,
    [STRINGID_PKMNENERGYDRAINED - BATTLESTRINGS_TABLE_START] = sText_PkmnEnergyDrained,
    [STRINGID_PKMNWASBURNED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasBurned,
    [STRINGID_PKMNBURNEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnBurnedBy,
    [STRINGID_PKMNHURTBYBURN - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtByBurn,
    [STRINGID_PKMNWASFROZEN - BATTLESTRINGS_TABLE_START] = sText_PkmnWasFrozen,
    [STRINGID_PKMNFROZENBY - BATTLESTRINGS_TABLE_START] = sText_PkmnFrozenBy,
    [STRINGID_PKMNISFROZEN - BATTLESTRINGS_TABLE_START] = sText_PkmnIsFrozen,
    [STRINGID_PKMNWASDEFROSTED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasDefrosted,
    [STRINGID_PKMNWASDEFROSTED2 - BATTLESTRINGS_TABLE_START] = sText_PkmnWasDefrosted2,
    [STRINGID_PKMNWASDEFROSTEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnWasDefrostedBy,
    [STRINGID_PKMNWASPARALYZED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasParalyzed,
    [STRINGID_PKMNWASPARALYZEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnWasParalyzedBy,
    [STRINGID_PKMNISPARALYZED - BATTLESTRINGS_TABLE_START] = sText_PkmnIsParalyzed,
    [STRINGID_PKMNISALREADYPARALYZED - BATTLESTRINGS_TABLE_START] = sText_PkmnIsAlreadyParalyzed,
    [STRINGID_PKMNHEALEDPARALYSIS - BATTLESTRINGS_TABLE_START] = sText_PkmnHealedParalysis,
    [STRINGID_PKMNDREAMEATEN - BATTLESTRINGS_TABLE_START] = sText_PkmnDreamEaten,
    [STRINGID_STATSWONTINCREASE - BATTLESTRINGS_TABLE_START] = sText_StatsWontIncrease,
    [STRINGID_STATSWONTDECREASE - BATTLESTRINGS_TABLE_START] = sText_StatsWontDecrease,
    [STRINGID_TEAMSTOPPEDWORKING - BATTLESTRINGS_TABLE_START] = sText_TeamStoppedWorking,
    [STRINGID_FOESTOPPEDWORKING - BATTLESTRINGS_TABLE_START] = sText_FoeStoppedWorking,
    [STRINGID_PKMNISCONFUSED - BATTLESTRINGS_TABLE_START] = sText_PkmnIsConfused,
    [STRINGID_PKMNHEALEDCONFUSION - BATTLESTRINGS_TABLE_START] = sText_PkmnHealedConfusion,
    [STRINGID_PKMNWASCONFUSED - BATTLESTRINGS_TABLE_START] = sText_PkmnWasConfused,
    [STRINGID_PKMNALREADYCONFUSED - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyConfused,
    [STRINGID_PKMNFELLINLOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnFellInLove,
    [STRINGID_PKMNINLOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnInLove,
    [STRINGID_PKMNIMMOBILIZEDBYLOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnImmobilizedByLove,
    [STRINGID_PKMNBLOWNAWAY - BATTLESTRINGS_TABLE_START] = sText_PkmnBlownAway,
    [STRINGID_PKMNCHANGEDTYPE - BATTLESTRINGS_TABLE_START] = sText_PkmnChangedType,
    [STRINGID_PKMNFLINCHED - BATTLESTRINGS_TABLE_START] = sText_PkmnFlinched,
    [STRINGID_PKMNREGAINEDHEALTH - BATTLESTRINGS_TABLE_START] = sText_PkmnRegainedHealth,
    [STRINGID_PKMNHPFULL - BATTLESTRINGS_TABLE_START] = sText_PkmnHPFull,
    [STRINGID_PKMNRAISEDSPDEF - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedSpDef,
    [STRINGID_PKMNRAISEDDEF - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedDef,
    [STRINGID_PKMNCOVEREDBYVEIL - BATTLESTRINGS_TABLE_START] = sText_PkmnCoveredByVeil,
    [STRINGID_PKMNUSEDSAFEGUARD - BATTLESTRINGS_TABLE_START] = sText_PkmnUsedSafeguard,
    [STRINGID_PKMNSAFEGUARDEXPIRED - BATTLESTRINGS_TABLE_START] = sText_PkmnSafeguardExpired,
    [STRINGID_PKMNWENTTOSLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnWentToSleep,
    [STRINGID_PKMNSLEPTHEALTHY - BATTLESTRINGS_TABLE_START] = sText_PkmnSleptHealthy,
    [STRINGID_PKMNWHIPPEDWHIRLWIND - BATTLESTRINGS_TABLE_START] = sText_PkmnWhippedWhirlwind,
    [STRINGID_PKMNTOOKSUNLIGHT - BATTLESTRINGS_TABLE_START] = sText_PkmnTookSunlight,
    [STRINGID_PKMNLOWEREDHEAD - BATTLESTRINGS_TABLE_START] = sText_PkmnLoweredHead,
    [STRINGID_PKMNISGLOWING - BATTLESTRINGS_TABLE_START] = sText_PkmnIsGlowing,
    [STRINGID_PKMNFLEWHIGH - BATTLESTRINGS_TABLE_START] = sText_PkmnFlewHigh,
    [STRINGID_PKMNDUGHOLE - BATTLESTRINGS_TABLE_START] = sText_PkmnDugHole,
    [STRINGID_PKMNSQUEEZEDBYBIND - BATTLESTRINGS_TABLE_START] = sText_PkmnSqueezedByBind,
    [STRINGID_PKMNTRAPPEDINVORTEX - BATTLESTRINGS_TABLE_START] = sText_PkmnTrappedInVortex,
    [STRINGID_PKMNWRAPPEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnWrappedBy,
    [STRINGID_PKMNCLAMPED - BATTLESTRINGS_TABLE_START] = sText_PkmnClamped,
    [STRINGID_PKMNHURTBY - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtBy,
    [STRINGID_PKMNFREEDFROM - BATTLESTRINGS_TABLE_START] = sText_PkmnFreedFrom,
    [STRINGID_PKMNCRASHED - BATTLESTRINGS_TABLE_START] = sText_PkmnCrashed,
    [STRINGID_PKMNSHROUDEDINMIST - BATTLESTRINGS_TABLE_START] = gText_PkmnShroudedInMist,
    [STRINGID_PKMNPROTECTEDBYMIST - BATTLESTRINGS_TABLE_START] = sText_PkmnProtectedByMist,
    [STRINGID_PKMNGETTINGPUMPED - BATTLESTRINGS_TABLE_START] = gText_PkmnGettingPumped,
    [STRINGID_PKMNHITWITHRECOIL - BATTLESTRINGS_TABLE_START] = sText_PkmnHitWithRecoil,
    [STRINGID_PKMNPROTECTEDITSELF2 - BATTLESTRINGS_TABLE_START] = sText_PkmnProtectedItself2,
    [STRINGID_PKMNBUFFETEDBYSANDSTORM - BATTLESTRINGS_TABLE_START] = sText_PkmnBuffetedBySandstorm,
    [STRINGID_PKMNPELTEDBYHAIL - BATTLESTRINGS_TABLE_START] = sText_PkmnPeltedByHail,
    [STRINGID_PKMNSEEDED - BATTLESTRINGS_TABLE_START] = sText_PkmnSeeded,
    [STRINGID_PKMNEVADEDATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnEvadedAttack,
    [STRINGID_PKMNSAPPEDBYLEECHSEED - BATTLESTRINGS_TABLE_START] = sText_PkmnSappedByLeechSeed,
    [STRINGID_PKMNFASTASLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnFastAsleep,
    [STRINGID_PKMNWOKEUP - BATTLESTRINGS_TABLE_START] = sText_PkmnWokeUp,
    [STRINGID_PKMNUPROARKEPTAWAKE - BATTLESTRINGS_TABLE_START] = sText_PkmnUproarKeptAwake,
    [STRINGID_PKMNWOKEUPINUPROAR - BATTLESTRINGS_TABLE_START] = sText_PkmnWokeUpInUproar,
    [STRINGID_PKMNCAUSEDUPROAR - BATTLESTRINGS_TABLE_START] = sText_PkmnCausedUproar,
    [STRINGID_PKMNMAKINGUPROAR - BATTLESTRINGS_TABLE_START] = sText_PkmnMakingUproar,
    [STRINGID_PKMNCALMEDDOWN - BATTLESTRINGS_TABLE_START] = sText_PkmnCalmedDown,
    [STRINGID_PKMNCANTSLEEPINUPROAR - BATTLESTRINGS_TABLE_START] = sText_PkmnCantSleepInUproar,
    [STRINGID_PKMNSTOCKPILED - BATTLESTRINGS_TABLE_START] = sText_PkmnStockpiled,
    [STRINGID_PKMNCANTSTOCKPILE - BATTLESTRINGS_TABLE_START] = sText_PkmnCantStockpile,
    [STRINGID_PKMNCANTSLEEPINUPROAR2 - BATTLESTRINGS_TABLE_START] = sText_PkmnCantSleepInUproar2,
    [STRINGID_UPROARKEPTPKMNAWAKE - BATTLESTRINGS_TABLE_START] = sText_UproarKeptPkmnAwake,
    [STRINGID_PKMNSTAYEDAWAKEUSING - BATTLESTRINGS_TABLE_START] = sText_PkmnStayedAwakeUsing,
    [STRINGID_PKMNSTORINGENERGY - BATTLESTRINGS_TABLE_START] = sText_PkmnStoringEnergy,
    [STRINGID_PKMNUNLEASHEDENERGY - BATTLESTRINGS_TABLE_START] = sText_PkmnUnleashedEnergy,
    [STRINGID_PKMNFATIGUECONFUSION - BATTLESTRINGS_TABLE_START] = sText_PkmnFatigueConfusion,
    [STRINGID_PLAYERPICKEDUPMONEY - BATTLESTRINGS_TABLE_START] = sText_PlayerPickedUpMoney,
    [STRINGID_PKMNUNAFFECTED - BATTLESTRINGS_TABLE_START] = sText_PkmnUnaffected,
    [STRINGID_PKMNTRANSFORMEDINTO - BATTLESTRINGS_TABLE_START] = sText_PkmnTransformedInto,
    [STRINGID_PKMNMADESUBSTITUTE - BATTLESTRINGS_TABLE_START] = sText_PkmnMadeSubstitute,
    [STRINGID_PKMNHASSUBSTITUTE - BATTLESTRINGS_TABLE_START] = sText_PkmnHasSubstitute,
    [STRINGID_SUBSTITUTEDAMAGED - BATTLESTRINGS_TABLE_START] = sText_SubstituteDamaged,
    [STRINGID_PKMNSUBSTITUTEFADED - BATTLESTRINGS_TABLE_START] = sText_PkmnSubstituteFaded,
    [STRINGID_PKMNMUSTRECHARGE - BATTLESTRINGS_TABLE_START] = sText_PkmnMustRecharge,
    [STRINGID_PKMNRAGEBUILDING - BATTLESTRINGS_TABLE_START] = sText_PkmnRageBuilding,
    [STRINGID_PKMNMOVEWASDISABLED - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveWasDisabled,
    [STRINGID_PKMNMOVEISDISABLED - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveIsDisabled,
    [STRINGID_PKMNMOVEDISABLEDNOMORE - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveDisabledNoMore,
    [STRINGID_PKMNGOTENCORE - BATTLESTRINGS_TABLE_START] = sText_PkmnGotEncore,
    [STRINGID_PKMNENCOREENDED - BATTLESTRINGS_TABLE_START] = sText_PkmnEncoreEnded,
    [STRINGID_PKMNTOOKAIM - BATTLESTRINGS_TABLE_START] = sText_PkmnTookAim,
    [STRINGID_PKMNSKETCHEDMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnSketchedMove,
    [STRINGID_PKMNTRYINGTOTAKEFOE - BATTLESTRINGS_TABLE_START] = sText_PkmnTryingToTakeFoe,
    [STRINGID_PKMNTOOKFOE - BATTLESTRINGS_TABLE_START] = sText_PkmnTookFoe,
    [STRINGID_PKMNREDUCEDPP - BATTLESTRINGS_TABLE_START] = sText_PkmnReducedPP,
    [STRINGID_PKMNSTOLEITEM - BATTLESTRINGS_TABLE_START] = sText_PkmnStoleItem,
    [STRINGID_TARGETCANTESCAPENOW - BATTLESTRINGS_TABLE_START] = sText_TargetCantEscapeNow,
    [STRINGID_PKMNFELLINTONIGHTMARE - BATTLESTRINGS_TABLE_START] = sText_PkmnFellIntoNightmare,
    [STRINGID_PKMNLOCKEDINNIGHTMARE - BATTLESTRINGS_TABLE_START] = sText_PkmnLockedInNightmare,
    [STRINGID_PKMNLAIDCURSE - BATTLESTRINGS_TABLE_START] = sText_PkmnLaidCurse,
    [STRINGID_PKMNAFFLICTEDBYCURSE - BATTLESTRINGS_TABLE_START] = sText_PkmnAfflictedByCurse,
    [STRINGID_SPIKESSCATTERED - BATTLESTRINGS_TABLE_START] = sText_SpikesScattered,
    [STRINGID_PKMNHURTBYSPIKES - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtBySpikes,
    [STRINGID_PKMNIDENTIFIED - BATTLESTRINGS_TABLE_START] = sText_PkmnIdentified,
    [STRINGID_PKMNPERISHCOUNTFELL - BATTLESTRINGS_TABLE_START] = sText_PkmnPerishCountFell,
    [STRINGID_PKMNBRACEDITSELF - BATTLESTRINGS_TABLE_START] = sText_PkmnBracedItself,
    [STRINGID_PKMNENDUREDHIT - BATTLESTRINGS_TABLE_START] = sText_PkmnEnduredHit,
    [STRINGID_MAGNITUDESTRENGTH - BATTLESTRINGS_TABLE_START] = sText_MagnitudeStrength,
    [STRINGID_PKMNCUTHPMAXEDATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnCutHPMaxedAttack,
    [STRINGID_PKMNCOPIEDSTATCHANGES - BATTLESTRINGS_TABLE_START] = sText_PkmnCopiedStatChanges,
    [STRINGID_PKMNGOTFREE - BATTLESTRINGS_TABLE_START] = sText_PkmnGotFree,
    [STRINGID_PKMNSHEDLEECHSEED - BATTLESTRINGS_TABLE_START] = sText_PkmnShedLeechSeed,
    [STRINGID_PKMNBLEWAWAYSPIKES - BATTLESTRINGS_TABLE_START] = sText_PkmnBlewAwaySpikes,
    [STRINGID_PKMNFLEDFROMBATTLE - BATTLESTRINGS_TABLE_START] = sText_PkmnFledFromBattle,
    [STRINGID_PKMNFORESAWATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnForesawAttack,
    [STRINGID_PKMNTOOKATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnTookAttack,
    [STRINGID_PKMNATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnAttack,
    [STRINGID_PKMNCENTERATTENTION - BATTLESTRINGS_TABLE_START] = sText_PkmnCenterAttention,
    [STRINGID_PKMNCHARGINGPOWER - BATTLESTRINGS_TABLE_START] = sText_PkmnChargingPower,
    [STRINGID_NATUREPOWERTURNEDINTO - BATTLESTRINGS_TABLE_START] = sText_NaturePowerTurnedInto,
    [STRINGID_PKMNSTATUSNORMAL - BATTLESTRINGS_TABLE_START] = sText_PkmnStatusNormal,
    [STRINGID_PKMNHASNOMOVESLEFT - BATTLESTRINGS_TABLE_START] = sText_PkmnHasNoMovesLeft,
    [STRINGID_PKMNSUBJECTEDTOTORMENT - BATTLESTRINGS_TABLE_START] = sText_PkmnSubjectedToTorment,
    [STRINGID_PKMNCANTUSEMOVETORMENT - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseMoveTorment,
    [STRINGID_PKMNTIGHTENINGFOCUS - BATTLESTRINGS_TABLE_START] = sText_PkmnTighteningFocus,
    [STRINGID_PKMNFELLFORTAUNT - BATTLESTRINGS_TABLE_START] = sText_PkmnFellForTaunt,
    [STRINGID_PKMNCANTUSEMOVETAUNT - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseMoveTaunt,
    [STRINGID_PKMNREADYTOHELP - BATTLESTRINGS_TABLE_START] = sText_PkmnReadyToHelp,
    [STRINGID_PKMNSWITCHEDITEMS - BATTLESTRINGS_TABLE_START] = sText_PkmnSwitchedItems,
    [STRINGID_PKMNCOPIEDFOE - BATTLESTRINGS_TABLE_START] = sText_PkmnCopiedFoe,
    [STRINGID_PKMNMADEWISH - BATTLESTRINGS_TABLE_START] = sText_PkmnMadeWish,
    [STRINGID_PKMNWISHCAMETRUE - BATTLESTRINGS_TABLE_START] = sText_PkmnWishCameTrue,
    [STRINGID_PKMNPLANTEDROOTS - BATTLESTRINGS_TABLE_START] = sText_PkmnPlantedRoots,
    [STRINGID_PKMNABSORBEDNUTRIENTS - BATTLESTRINGS_TABLE_START] = sText_PkmnAbsorbedNutrients,
    [STRINGID_PKMNANCHOREDITSELF - BATTLESTRINGS_TABLE_START] = sText_PkmnAnchoredItself,
    [STRINGID_PKMNWASMADEDROWSY - BATTLESTRINGS_TABLE_START] = sText_PkmnWasMadeDrowsy,
    [STRINGID_PKMNKNOCKEDOFF - BATTLESTRINGS_TABLE_START] = sText_PkmnKnockedOff,
    [STRINGID_PKMNSWAPPEDABILITIES - BATTLESTRINGS_TABLE_START] = sText_PkmnSwappedAbilities,
    [STRINGID_PKMNSEALEDOPPONENTMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnSealedOpponentMove,
    [STRINGID_PKMNCANTUSEMOVESEALED - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseMoveSealed,
    [STRINGID_PKMNWANTSGRUDGE - BATTLESTRINGS_TABLE_START] = sText_PkmnWantsGrudge,
    [STRINGID_PKMNLOSTPPGRUDGE - BATTLESTRINGS_TABLE_START] = sText_PkmnLostPPGrudge,
    [STRINGID_PKMNSHROUDEDITSELF - BATTLESTRINGS_TABLE_START] = sText_PkmnShroudedItself,
    [STRINGID_PKMNMOVEBOUNCED - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveBounced,
    [STRINGID_PKMNWAITSFORTARGET - BATTLESTRINGS_TABLE_START] = sText_PkmnWaitsForTarget,
    [STRINGID_PKMNSNATCHEDMOVE - BATTLESTRINGS_TABLE_START] = sText_PkmnSnatchedMove,
    [STRINGID_PKMNMADEITRAIN - BATTLESTRINGS_TABLE_START] = sText_PkmnMadeItRain,
    [STRINGID_PKMNRAISEDSPEED - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedSpeed,
    [STRINGID_PKMNPROTECTEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnProtectedBy,
    [STRINGID_PKMNPREVENTSUSAGE - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsUsage,
    [STRINGID_PKMNRESTOREDHPUSING - BATTLESTRINGS_TABLE_START] = sText_PkmnRestoredHPUsing,
    [STRINGID_PKMNCHANGEDTYPEWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnChangedTypeWith,
    [STRINGID_PKMNPREVENTSPARALYSISWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsParalysisWith,
    [STRINGID_PKMNPREVENTSROMANCEWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsRomanceWith,
    [STRINGID_PKMNPREVENTSPOISONINGWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsPoisoningWith,
    [STRINGID_PKMNPREVENTSCONFUSIONWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsConfusionWith,
    [STRINGID_PKMNRAISEDFIREPOWERWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedFirePowerWith,
    [STRINGID_PKMNANCHORSITSELFWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnAnchorsItselfWith,
    [STRINGID_PKMNCUTSATTACKWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnCutsAttackWith,
    [STRINGID_PKMNPREVENTSSTATLOSSWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventsStatLossWith,
    [STRINGID_PKMNHURTSWITH - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtsWith,
    [STRINGID_PKMNTRACED - BATTLESTRINGS_TABLE_START] = sText_PkmnTraced,
    [STRINGID_STATSHARPLY - BATTLESTRINGS_TABLE_START] = gText_StatSharply,
    [STRINGID_STATROSE - BATTLESTRINGS_TABLE_START] = gText_StatRose,
    [STRINGID_STATHARSHLY - BATTLESTRINGS_TABLE_START] = sText_StatHarshly,
    [STRINGID_STATFELL - BATTLESTRINGS_TABLE_START] = sText_StatFell,
    [STRINGID_ATTACKERSSTATROSE - BATTLESTRINGS_TABLE_START] = sText_AttackersStatRose,
    [STRINGID_DEFENDERSSTATROSE - BATTLESTRINGS_TABLE_START] = gText_DefendersStatRose,
    [STRINGID_ATTACKERSSTATFELL - BATTLESTRINGS_TABLE_START] = sText_AttackersStatFell,
    [STRINGID_DEFENDERSSTATFELL - BATTLESTRINGS_TABLE_START] = sText_DefendersStatFell,
    [STRINGID_CRITICALHIT - BATTLESTRINGS_TABLE_START] = sText_CriticalHit,
    [STRINGID_ONEHITKO - BATTLESTRINGS_TABLE_START] = sText_OneHitKO,
    [STRINGID_123POOF - BATTLESTRINGS_TABLE_START] = sText_123Poof,
    [STRINGID_ANDELLIPSIS - BATTLESTRINGS_TABLE_START] = sText_AndEllipsis,
    [STRINGID_NOTVERYEFFECTIVE - BATTLESTRINGS_TABLE_START] = sText_NotVeryEffective,
    [STRINGID_SUPEREFFECTIVE - BATTLESTRINGS_TABLE_START] = sText_SuperEffective,
    [STRINGID_GOTAWAYSAFELY - BATTLESTRINGS_TABLE_START] = sText_GotAwaySafely,
    [STRINGID_WILDPKMNFLED - BATTLESTRINGS_TABLE_START] = sText_WildPkmnFled,
    [STRINGID_NORUNNINGFROMTRAINERS - BATTLESTRINGS_TABLE_START] = sText_NoRunningFromTrainers,
    [STRINGID_CANTESCAPE - BATTLESTRINGS_TABLE_START] = sText_CantEscape,
    [STRINGID_DONTLEAVEBIRCH - BATTLESTRINGS_TABLE_START] = sText_DontLeaveBirch,
    [STRINGID_BUTNOTHINGHAPPENED - BATTLESTRINGS_TABLE_START] = sText_ButNothingHappened,
    [STRINGID_BUTITFAILED - BATTLESTRINGS_TABLE_START] = sText_ButItFailed,
    [STRINGID_ITHURTCONFUSION - BATTLESTRINGS_TABLE_START] = sText_ItHurtConfusion,
    [STRINGID_MIRRORMOVEFAILED - BATTLESTRINGS_TABLE_START] = sText_MirrorMoveFailed,
    [STRINGID_STARTEDTORAIN - BATTLESTRINGS_TABLE_START] = sText_StartedToRain,
    [STRINGID_DOWNPOURSTARTED - BATTLESTRINGS_TABLE_START] = sText_DownpourStarted,
    [STRINGID_RAINCONTINUES - BATTLESTRINGS_TABLE_START] = sText_RainContinues,
    [STRINGID_DOWNPOURCONTINUES - BATTLESTRINGS_TABLE_START] = sText_DownpourContinues,
    [STRINGID_RAINSTOPPED - BATTLESTRINGS_TABLE_START] = sText_RainStopped,
    [STRINGID_SANDSTORMBREWED - BATTLESTRINGS_TABLE_START] = sText_SandstormBrewed,
    [STRINGID_SANDSTORMRAGES - BATTLESTRINGS_TABLE_START] = sText_SandstormRages,
    [STRINGID_SANDSTORMSUBSIDED - BATTLESTRINGS_TABLE_START] = sText_SandstormSubsided,
    [STRINGID_SUNLIGHTGOTBRIGHT - BATTLESTRINGS_TABLE_START] = sText_SunlightGotBright,
    [STRINGID_SUNLIGHTSTRONG - BATTLESTRINGS_TABLE_START] = sText_SunlightStrong,
    [STRINGID_SUNLIGHTFADED - BATTLESTRINGS_TABLE_START] = sText_SunlightFaded,
    [STRINGID_STARTEDHAIL - BATTLESTRINGS_TABLE_START] = sText_StartedHail,
    [STRINGID_HAILCONTINUES - BATTLESTRINGS_TABLE_START] = sText_HailContinues,
    [STRINGID_HAILSTOPPED - BATTLESTRINGS_TABLE_START] = sText_HailStopped,
    [STRINGID_STARTEDSNOW - BATTLESTRINGS_TABLE_START] = sText_StartedSnow,
    [STRINGID_SNOWCONTINUES -BATTLESTRINGS_TABLE_START] = sText_SnowContinues,
    [STRINGID_SNOWSTOPPED - BATTLESTRINGS_TABLE_START] = sText_SnowStopped,
    [STRINGID_FAILEDTOSPITUP - BATTLESTRINGS_TABLE_START] = sText_FailedToSpitUp,
    [STRINGID_FAILEDTOSWALLOW - BATTLESTRINGS_TABLE_START] = sText_FailedToSwallow,
    [STRINGID_WINDBECAMEHEATWAVE - BATTLESTRINGS_TABLE_START] = sText_WindBecameHeatWave,
    [STRINGID_STATCHANGESGONE - BATTLESTRINGS_TABLE_START] = sText_StatChangesGone,
    [STRINGID_COINSSCATTERED - BATTLESTRINGS_TABLE_START] = sText_CoinsScattered,
    [STRINGID_TOOWEAKFORSUBSTITUTE - BATTLESTRINGS_TABLE_START] = sText_TooWeakForSubstitute,
    [STRINGID_SHAREDPAIN - BATTLESTRINGS_TABLE_START] = sText_SharedPain,
    [STRINGID_BELLCHIMED - BATTLESTRINGS_TABLE_START] = sText_BellChimed,
    [STRINGID_FAINTINTHREE - BATTLESTRINGS_TABLE_START] = sText_FaintInThree,
    [STRINGID_NOPPLEFT - BATTLESTRINGS_TABLE_START] = sText_NoPPLeft,
    [STRINGID_BUTNOPPLEFT - BATTLESTRINGS_TABLE_START] = sText_ButNoPPLeft,
    [STRINGID_PLAYERUSEDITEM - BATTLESTRINGS_TABLE_START] = sText_PlayerUsedItem,
    [STRINGID_WALLYUSEDITEM - BATTLESTRINGS_TABLE_START] = sText_WallyUsedItem,
    [STRINGID_TRAINERBLOCKEDBALL - BATTLESTRINGS_TABLE_START] = sText_TrainerBlockedBall,
    [STRINGID_DONTBEATHIEF - BATTLESTRINGS_TABLE_START] = sText_DontBeAThief,
    [STRINGID_ITDODGEDBALL - BATTLESTRINGS_TABLE_START] = sText_ItDodgedBall,
    [STRINGID_YOUMISSEDPKMN - BATTLESTRINGS_TABLE_START] = sText_YouMissedPkmn,
    [STRINGID_PKMNBROKEFREE - BATTLESTRINGS_TABLE_START] = sText_PkmnBrokeFree,
    [STRINGID_ITAPPEAREDCAUGHT - BATTLESTRINGS_TABLE_START] = sText_ItAppearedCaught,
    [STRINGID_AARGHALMOSTHADIT - BATTLESTRINGS_TABLE_START] = sText_AarghAlmostHadIt,
    [STRINGID_SHOOTSOCLOSE - BATTLESTRINGS_TABLE_START] = sText_ShootSoClose,
    [STRINGID_GOTCHAPKMNCAUGHTPLAYER - BATTLESTRINGS_TABLE_START] = sText_GotchaPkmnCaughtPlayer,
    [STRINGID_GOTCHAPKMNCAUGHTWALLY - BATTLESTRINGS_TABLE_START] = sText_GotchaPkmnCaughtWally,
    [STRINGID_GIVENICKNAMECAPTURED - BATTLESTRINGS_TABLE_START] = sText_GiveNicknameCaptured,
    [STRINGID_PKMNSENTTOPC - BATTLESTRINGS_TABLE_START] = sText_PkmnSentToPC,
    [STRINGID_PKMNDATAADDEDTODEX - BATTLESTRINGS_TABLE_START] = sText_PkmnDataAddedToDex,
    [STRINGID_ITISRAINING - BATTLESTRINGS_TABLE_START] = sText_ItIsRaining,
    [STRINGID_SANDSTORMISRAGING - BATTLESTRINGS_TABLE_START] = sText_SandstormIsRaging,
    [STRINGID_CANTESCAPE2 - BATTLESTRINGS_TABLE_START] = sText_CantEscape2,
    [STRINGID_PKMNIGNORESASLEEP - BATTLESTRINGS_TABLE_START] = sText_PkmnIgnoresAsleep,
    [STRINGID_PKMNIGNOREDORDERS - BATTLESTRINGS_TABLE_START] = sText_PkmnIgnoredOrders,
    [STRINGID_PKMNBEGANTONAP - BATTLESTRINGS_TABLE_START] = sText_PkmnBeganToNap,
    [STRINGID_PKMNLOAFING - BATTLESTRINGS_TABLE_START] = sText_PkmnLoafing,
    [STRINGID_PKMNWONTOBEY - BATTLESTRINGS_TABLE_START] = sText_PkmnWontObey,
    [STRINGID_PKMNTURNEDAWAY - BATTLESTRINGS_TABLE_START] = sText_PkmnTurnedAway,
    [STRINGID_PKMNPRETENDNOTNOTICE - BATTLESTRINGS_TABLE_START] = sText_PkmnPretendNotNotice,
    [STRINGID_ENEMYABOUTTOSWITCHPKMN - BATTLESTRINGS_TABLE_START] = sText_EnemyAboutToSwitchPkmn,
    [STRINGID_CREPTCLOSER - BATTLESTRINGS_TABLE_START] = sText_CreptCloser,
    [STRINGID_CANTGETCLOSER - BATTLESTRINGS_TABLE_START] = sText_CantGetCloser,
    [STRINGID_PKMNWATCHINGCAREFULLY - BATTLESTRINGS_TABLE_START] = sText_PkmnWatchingCarefully,
    [STRINGID_PKMNCURIOUSABOUTX - BATTLESTRINGS_TABLE_START] = sText_PkmnCuriousAboutX,
    [STRINGID_PKMNENTHRALLEDBYX - BATTLESTRINGS_TABLE_START] = sText_PkmnEnthralledByX,
    [STRINGID_PKMNIGNOREDX - BATTLESTRINGS_TABLE_START] = sText_PkmnIgnoredX,
    [STRINGID_THREWPOKEBLOCKATPKMN - BATTLESTRINGS_TABLE_START] = sText_ThrewPokeblockAtPkmn,
    [STRINGID_OUTOFSAFARIBALLS - BATTLESTRINGS_TABLE_START] = sText_OutOfSafariBalls,
    [STRINGID_PKMNSITEMCUREDPARALYSIS - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemCuredParalysis,
    [STRINGID_PKMNSITEMCUREDPOISON - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemCuredPoison,
    [STRINGID_PKMNSITEMHEALEDBURN - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemHealedBurn,
    [STRINGID_PKMNSITEMDEFROSTEDIT - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemDefrostedIt,
    [STRINGID_PKMNSITEMWOKEIT - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemWokeIt,
    [STRINGID_PKMNSITEMSNAPPEDOUT - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemSnappedOut,
    [STRINGID_PKMNSITEMCUREDPROBLEM - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemCuredProblem,
    [STRINGID_PKMNSITEMRESTOREDHEALTH - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemRestoredHealth,
    [STRINGID_PKMNSITEMRESTOREDPP - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemRestoredPP,
    [STRINGID_PKMNSITEMRESTOREDSTATUS - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemRestoredStatus,
    [STRINGID_PKMNSITEMRESTOREDHPALITTLE - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemRestoredHPALittle,
    [STRINGID_ITEMALLOWSONLYYMOVE - BATTLESTRINGS_TABLE_START] = sText_ItemAllowsOnlyYMove,
    [STRINGID_PKMNHUNGONWITHX - BATTLESTRINGS_TABLE_START] = sText_PkmnHungOnWithX,
    [STRINGID_EMPTYSTRING3 - BATTLESTRINGS_TABLE_START] = gText_EmptyString3,
    [STRINGID_PKMNSXPREVENTSBURNS - BATTLESTRINGS_TABLE_START] = sText_PkmnsXPreventsBurns,
    [STRINGID_PKMNSXBLOCKSY - BATTLESTRINGS_TABLE_START] = sText_PkmnsXBlocksY,
    [STRINGID_PKMNSXRESTOREDHPALITTLE2 - BATTLESTRINGS_TABLE_START] = sText_PkmnsXRestoredHPALittle2,
    [STRINGID_PKMNSXWHIPPEDUPSANDSTORM - BATTLESTRINGS_TABLE_START] = sText_PkmnsXWhippedUpSandstorm,
    [STRINGID_PKMNSXPREVENTSYLOSS - BATTLESTRINGS_TABLE_START] = sText_PkmnsXPreventsYLoss,
    [STRINGID_PKMNSXINFATUATEDY - BATTLESTRINGS_TABLE_START] = sText_PkmnsXInfatuatedY,
    [STRINGID_PKMNSXMADEYINEFFECTIVE - BATTLESTRINGS_TABLE_START] = sText_PkmnsXMadeYIneffective,
    [STRINGID_PKMNSXCUREDYPROBLEM - BATTLESTRINGS_TABLE_START] = sText_PkmnsXCuredYProblem,
    [STRINGID_ITSUCKEDLIQUIDOOZE - BATTLESTRINGS_TABLE_START] = sText_ItSuckedLiquidOoze,
    [STRINGID_PKMNTRANSFORMED - BATTLESTRINGS_TABLE_START] = sText_PkmnTransformed,
    [STRINGID_ELECTRICITYWEAKENED - BATTLESTRINGS_TABLE_START] = sText_ElectricityWeakened,
    [STRINGID_FIREWEAKENED - BATTLESTRINGS_TABLE_START] = sText_FireWeakened,
    [STRINGID_PKMNHIDUNDERWATER - BATTLESTRINGS_TABLE_START] = sText_PkmnHidUnderwater,
    [STRINGID_PKMNSPRANGUP - BATTLESTRINGS_TABLE_START] = sText_PkmnSprangUp,
    [STRINGID_HMMOVESCANTBEFORGOTTEN - BATTLESTRINGS_TABLE_START] = sText_HMMovesCantBeForgotten,
    [STRINGID_XFOUNDONEY - BATTLESTRINGS_TABLE_START] = sText_XFoundOneY,
    [STRINGID_PLAYERDEFEATEDTRAINER1 - BATTLESTRINGS_TABLE_START] = sText_PlayerDefeatedLinkTrainerTrainer1,
    [STRINGID_SOOTHINGAROMA - BATTLESTRINGS_TABLE_START] = sText_SoothingAroma,
    [STRINGID_ITEMSCANTBEUSEDNOW - BATTLESTRINGS_TABLE_START] = sText_ItemsCantBeUsedNow,
    [STRINGID_FORXCOMMAYZ - BATTLESTRINGS_TABLE_START] = sText_ForXCommaYZ,
    [STRINGID_USINGITEMSTATOFPKMNROSE - BATTLESTRINGS_TABLE_START] = sText_UsingItemTheStatOfPkmnRose,
    [STRINGID_PKMNUSEDXTOGETPUMPED - BATTLESTRINGS_TABLE_START] = sText_PkmnUsedXToGetPumped,
    [STRINGID_PKMNSXMADEYUSELESS - BATTLESTRINGS_TABLE_START] = sText_PkmnsXMadeYUseless,
    [STRINGID_PKMNTRAPPEDBYSANDTOMB - BATTLESTRINGS_TABLE_START] = sText_PkmnTrappedBySandTomb,
    [STRINGID_EMPTYSTRING4 - BATTLESTRINGS_TABLE_START] = sText_EmptyString4,
    [STRINGID_ABOOSTED - BATTLESTRINGS_TABLE_START] = sText_ABoosted,
    [STRINGID_PKMNSXINTENSIFIEDSUN - BATTLESTRINGS_TABLE_START] = sText_PkmnsXIntensifiedSun,
    [STRINGID_PKMNMAKESGROUNDMISS - BATTLESTRINGS_TABLE_START] = sText_PkmnMakesGroundMiss,
    [STRINGID_YOUTHROWABALLNOWRIGHT - BATTLESTRINGS_TABLE_START] = sText_YouThrowABallNowRight,
    [STRINGID_PKMNSXTOOKATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnsXTookAttack,
    [STRINGID_PKMNCHOSEXASDESTINY - BATTLESTRINGS_TABLE_START] = sText_PkmnChoseXAsDestiny,
    [STRINGID_PKMNLOSTFOCUS - BATTLESTRINGS_TABLE_START] = sText_PkmnLostFocus,
    [STRINGID_USENEXTPKMN - BATTLESTRINGS_TABLE_START] = sText_UseNextPkmn,
    [STRINGID_PKMNFLEDUSINGITS - BATTLESTRINGS_TABLE_START] = sText_PkmnFledUsingIts,
    [STRINGID_PKMNFLEDUSING - BATTLESTRINGS_TABLE_START] = sText_PkmnFledUsing,
    [STRINGID_PKMNWASDRAGGEDOUT - BATTLESTRINGS_TABLE_START] = sText_PkmnWasDraggedOut,
    [STRINGID_PREVENTEDFROMWORKING - BATTLESTRINGS_TABLE_START] = sText_PreventedFromWorking,
    [STRINGID_PKMNSITEMNORMALIZEDSTATUS - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemNormalizedStatus,
    [STRINGID_TRAINER1USEDITEM - BATTLESTRINGS_TABLE_START] = sText_Trainer1UsedItem,
    [STRINGID_BOXISFULL - BATTLESTRINGS_TABLE_START] = sText_BoxIsFull,
    [STRINGID_PKMNAVOIDEDATTACK - BATTLESTRINGS_TABLE_START] = sText_PkmnAvoidedAttack,
    [STRINGID_PKMNSXMADEITINEFFECTIVE - BATTLESTRINGS_TABLE_START] = sText_PkmnsXMadeItIneffective,
    [STRINGID_PKMNSXPREVENTSFLINCHING - BATTLESTRINGS_TABLE_START] = sText_PkmnsXPreventsFlinching,
    [STRINGID_PKMNALREADYHASBURN - BATTLESTRINGS_TABLE_START] = sText_PkmnAlreadyHasBurn,
    [STRINGID_STATSWONTDECREASE2 - BATTLESTRINGS_TABLE_START] = sText_StatsWontDecrease2,
    [STRINGID_PKMNSXBLOCKSY2 - BATTLESTRINGS_TABLE_START] = sText_PkmnsXBlocksY2,
    [STRINGID_PKMNSXWOREOFF - BATTLESTRINGS_TABLE_START] = sText_PkmnsXWoreOff,
    [STRINGID_PKMNRAISEDDEFALITTLE - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedDefALittle,
    [STRINGID_PKMNRAISEDSPDEFALITTLE - BATTLESTRINGS_TABLE_START] = sText_PkmnRaisedSpDefALittle,
    [STRINGID_THEWALLSHATTERED - BATTLESTRINGS_TABLE_START] = sText_TheWallShattered,
    [STRINGID_PKMNSXPREVENTSYSZ - BATTLESTRINGS_TABLE_START] = sText_PkmnsXPreventsYsZ,
    [STRINGID_PKMNSXCUREDITSYPROBLEM - BATTLESTRINGS_TABLE_START] = sText_PkmnsXCuredItsYProblem,
    [STRINGID_ATTACKERCANTESCAPE - BATTLESTRINGS_TABLE_START] = sText_AttackerCantEscape,
    [STRINGID_PKMNOBTAINEDX - BATTLESTRINGS_TABLE_START] = sText_PkmnObtainedX,
    [STRINGID_PKMNOBTAINEDX2 - BATTLESTRINGS_TABLE_START] = sText_PkmnObtainedX2,
    [STRINGID_PKMNOBTAINEDXYOBTAINEDZ - BATTLESTRINGS_TABLE_START] = sText_PkmnObtainedXYObtainedZ,
    [STRINGID_BUTNOEFFECT - BATTLESTRINGS_TABLE_START] = sText_ButNoEffect,
    [STRINGID_PKMNSXHADNOEFFECTONY - BATTLESTRINGS_TABLE_START] = sText_PkmnsXHadNoEffectOnY,
    [STRINGID_TWOENEMIESDEFEATED - BATTLESTRINGS_TABLE_START] = sText_TwoInGameTrainersDefeated,
    [STRINGID_TRAINER2LOSETEXT - BATTLESTRINGS_TABLE_START] = sText_Trainer2LoseText,
    [STRINGID_PKMNINCAPABLEOFPOWER - BATTLESTRINGS_TABLE_START] = sText_PkmnIncapableOfPower,
    [STRINGID_GLINTAPPEARSINEYE - BATTLESTRINGS_TABLE_START] = sText_GlintAppearsInEye,
    [STRINGID_PKMNGETTINGINTOPOSITION - BATTLESTRINGS_TABLE_START] = sText_PkmnGettingIntoPosition,
    [STRINGID_PKMNBEGANGROWLINGDEEPLY - BATTLESTRINGS_TABLE_START] = sText_PkmnBeganGrowlingDeeply,
    [STRINGID_PKMNEAGERFORMORE - BATTLESTRINGS_TABLE_START] = sText_PkmnEagerForMore,
    [STRINGID_DEFEATEDOPPONENTBYREFEREE - BATTLESTRINGS_TABLE_START] = sText_DefeatedOpponentByReferee,
    [STRINGID_LOSTTOOPPONENTBYREFEREE - BATTLESTRINGS_TABLE_START] = sText_LostToOpponentByReferee,
    [STRINGID_TIEDOPPONENTBYREFEREE - BATTLESTRINGS_TABLE_START] = sText_TiedOpponentByReferee,
    [STRINGID_QUESTIONFORFEITMATCH - BATTLESTRINGS_TABLE_START] = sText_QuestionForfeitMatch,
    [STRINGID_FORFEITEDMATCH - BATTLESTRINGS_TABLE_START] = sText_ForfeitedMatch,
    [STRINGID_PKMNTRANSFERREDSOMEONESPC - BATTLESTRINGS_TABLE_START] = gText_PkmnTransferredSomeonesPC,
    [STRINGID_PKMNTRANSFERREDLANETTESPC - BATTLESTRINGS_TABLE_START] = gText_PkmnTransferredLanettesPC,
    [STRINGID_PKMNBOXSOMEONESPCFULL - BATTLESTRINGS_TABLE_START] = gText_PkmnTransferredSomeonesPCBoxFull,
    [STRINGID_PKMNBOXLANETTESPCFULL - BATTLESTRINGS_TABLE_START] = gText_PkmnTransferredLanettesPCBoxFull,
    [STRINGID_TRAINER1WINTEXT - BATTLESTRINGS_TABLE_START] = sText_Trainer1WinText,
    [STRINGID_TRAINER2WINTEXT - BATTLESTRINGS_TABLE_START] = sText_Trainer2WinText,
    [STRINGID_ENDUREDSTURDY - BATTLESTRINGS_TABLE_START] = sText_EnduredViaSturdy,
    [STRINGID_POWERHERB - BATTLESTRINGS_TABLE_START] = sText_PowerHerbActivation,
    [STRINGID_HURTBYITEM - BATTLESTRINGS_TABLE_START] = sText_HurtByItem,
    [STRINGID_PSNBYITEM - BATTLESTRINGS_TABLE_START] = sText_BadlyPoisonedByItem,
    [STRINGID_BRNBYITEM - BATTLESTRINGS_TABLE_START] = sText_BurnedByItem,
    [STRINGID_DEFABILITYIN - BATTLESTRINGS_TABLE_START] = sText_TargetAbilityActivates,
    [STRINGID_GRAVITYINTENSIFIED - BATTLESTRINGS_TABLE_START] = sText_GravityIntensified,
    [STRINGID_TARGETIDENTIFIED - BATTLESTRINGS_TABLE_START] = sText_TargetIdentified,
    [STRINGID_TARGETWOKEUP - BATTLESTRINGS_TABLE_START] = sText_TargetWokeUp,
    [STRINGID_PKMNSTOLEANDATEITEM - BATTLESTRINGS_TABLE_START] = sText_PkmnStoleAndAteItem,
    [STRINGID_TAILWINDBLEW - BATTLESTRINGS_TABLE_START] = sText_TailWindBlew,
    [STRINGID_PKMNWENTBACK - BATTLESTRINGS_TABLE_START] = sText_PkmnWentBack,
    [STRINGID_PKMNCANTUSEITEMSANYMORE - BATTLESTRINGS_TABLE_START] = sText_PkmnCantUseItemsAnymore,
    [STRINGID_PKMNFLUNG - BATTLESTRINGS_TABLE_START] = sText_PkmnFlung,
    [STRINGID_PKMNPREVENTEDFROMHEALING - BATTLESTRINGS_TABLE_START] = sText_PkmnPreventedFromHealing,
    [STRINGID_PKMNSWITCHEDATKANDDEF - BATTLESTRINGS_TABLE_START] = sText_PkmnSwitchedAtkAndDef,
    [STRINGID_PKMNSABILITYSUPPRESSED - BATTLESTRINGS_TABLE_START] = sText_PkmnsAbilitySuppressed,
    [STRINGID_SHIELDEDFROMCRITICALHITS - BATTLESTRINGS_TABLE_START] = sText_ShieldedFromCriticalHits,
    [STRINGID_SWITCHEDATKANDSPATK - BATTLESTRINGS_TABLE_START] = sText_SwitchedAtkAndSpAtk,
    [STRINGID_SWITCHEDDEFANDSPDEF - BATTLESTRINGS_TABLE_START] = sText_SwitchedDefAndSpDef,
    [STRINGID_PKMNACQUIREDABILITY - BATTLESTRINGS_TABLE_START] = sText_PkmnAcquiredAbility,
    [STRINGID_POISONSPIKESSCATTERED - BATTLESTRINGS_TABLE_START] = sText_PoisonSpikesScattered,
    [STRINGID_PKMNSWITCHEDSTATCHANGES - BATTLESTRINGS_TABLE_START] = sText_PkmnSwitchedStatChanges,
    [STRINGID_PKMNSURROUNDEDWITHVEILOFWATER - BATTLESTRINGS_TABLE_START] = sText_PkmnSurroundedWithVeilOfWater,
    [STRINGID_PKMNLEVITATEDONELECTROMAGNETISM - BATTLESTRINGS_TABLE_START] = sText_PkmnLevitatedOnElectromagnetism,
    [STRINGID_PKMNTWISTEDDIMENSIONS - BATTLESTRINGS_TABLE_START] = sText_PkmnTwistedDimensions,
    [STRINGID_POINTEDSTONESFLOAT - BATTLESTRINGS_TABLE_START] = sText_PointedStonesFloat,
    [STRINGID_CLOAKEDINMYSTICALMOONLIGHT - BATTLESTRINGS_TABLE_START] = sText_CloakedInMysticalMoonlight,
    [STRINGID_TRAPPEDBYSWIRLINGMAGMA - BATTLESTRINGS_TABLE_START] = sText_TrappedBySwirlingMagma,
    [STRINGID_VANISHEDINSTANTLY - BATTLESTRINGS_TABLE_START] = sText_VanishedInstantly,
    [STRINGID_PROTECTEDTEAM - BATTLESTRINGS_TABLE_START] = sText_ProtectedTeam,
    [STRINGID_SHAREDITSGUARD - BATTLESTRINGS_TABLE_START] = sText_SharedItsGuard,
    [STRINGID_SHAREDITSPOWER - BATTLESTRINGS_TABLE_START] = sText_SharedItsPower,
    [STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON - BATTLESTRINGS_TABLE_START] = sText_SwapsDefAndSpDefOfAllPkmn,
    [STRINGID_BECAMENIMBLE - BATTLESTRINGS_TABLE_START] = sText_BecameNimble,
    [STRINGID_HURLEDINTOTHEAIR - BATTLESTRINGS_TABLE_START] = sText_HurledIntoTheAir,
    [STRINGID_HELDITEMSLOSEEFFECTS - BATTLESTRINGS_TABLE_START] = sText_HeldItemsLoseEffects,
    [STRINGID_FELLSTRAIGHTDOWN - BATTLESTRINGS_TABLE_START] = sText_FellStraightDown,
    [STRINGID_TARGETCHANGEDTYPE  - BATTLESTRINGS_TABLE_START] = sText_TargetChangedType,
    [STRINGID_PKMNACQUIREDSIMPLE - BATTLESTRINGS_TABLE_START] = sText_PkmnAcquiredSimple,
    [STRINGID_EMPTYSTRING5 - BATTLESTRINGS_TABLE_START] = sText_EmptyString4,
    [STRINGID_KINDOFFER - BATTLESTRINGS_TABLE_START] = sText_KindOffer,
    [STRINGID_RESETSTARGETSSTATLEVELS - BATTLESTRINGS_TABLE_START] = sText_ResetsTargetsStatLevels,
    [STRINGID_EMPTYSTRING6 - BATTLESTRINGS_TABLE_START] = sText_EmptyString4,
    [STRINGID_ALLYSWITCHPOSITION - BATTLESTRINGS_TABLE_START] = sText_AllySwitchPosition,
    [STRINGID_RESTORETARGETSHEALTH - BATTLESTRINGS_TABLE_START] = sText_RestoreTargetsHealth,
    [STRINGID_TOOKPJMNINTOTHESKY - BATTLESTRINGS_TABLE_START] = sText_TookPkmnIntoTheSky,
    [STRINGID_FREEDFROMSKYDROP - BATTLESTRINGS_TABLE_START] = sText_FreedFromSkyDrop,
    [STRINGID_POSTPONETARGETMOVE - BATTLESTRINGS_TABLE_START] = sText_PostponeTargetMove,
    [STRINGID_REFLECTTARGETSTYPE - BATTLESTRINGS_TABLE_START] = sText_ReflectTargetsType,
    [STRINGID_TRANSFERHELDITEM - BATTLESTRINGS_TABLE_START] = sText_TransferHeldItem,
    [STRINGID_EMBARGOENDS - BATTLESTRINGS_TABLE_START] = sText_EmbargoEnds,
    [STRINGID_ELECTROMAGNETISM - BATTLESTRINGS_TABLE_START] = sText_Electromagnetism,
    [STRINGID_BUFFERENDS - BATTLESTRINGS_TABLE_START] = sText_BufferEnds,
    [STRINGID_TELEKINESISENDS - BATTLESTRINGS_TABLE_START] = sText_TelekinesisEnds,
    [STRINGID_TAILWINDENDS - BATTLESTRINGS_TABLE_START] = sText_TailwindEnds,
    [STRINGID_LUCKYCHANTENDS - BATTLESTRINGS_TABLE_START] = sText_LuckyChantEnds,
    [STRINGID_TRICKROOMENDS - BATTLESTRINGS_TABLE_START] = sText_TrickRoomEnds,
    [STRINGID_WONDERROOMENDS - BATTLESTRINGS_TABLE_START] = sText_WonderRoomEnds,
    [STRINGID_MAGICROOMENDS - BATTLESTRINGS_TABLE_START] = sText_MagicRoomEnds,
    [STRINGID_MUDSPORTENDS - BATTLESTRINGS_TABLE_START] = sText_MudSportEnds,
    [STRINGID_WATERSPORTENDS - BATTLESTRINGS_TABLE_START] = sText_WaterSportEnds,
    [STRINGID_GRAVITYENDS - BATTLESTRINGS_TABLE_START] = sText_GravityEnds,
    [STRINGID_AQUARINGHEAL - BATTLESTRINGS_TABLE_START] = sText_AquaRingHeal,
    [STRINGID_AURORAVEILENDS - BATTLESTRINGS_TABLE_START] = sText_AuroraVeilEnds,
    [STRINGID_ELECTRICTERRAINENDS - BATTLESTRINGS_TABLE_START] = sText_ElectricTerrainEnds,
    [STRINGID_MISTYTERRAINENDS - BATTLESTRINGS_TABLE_START] = sText_MistyTerrainEnds,
    [STRINGID_PSYCHICTERRAINENDS - BATTLESTRINGS_TABLE_START] = sText_PsychicTerrainEnds,
    [STRINGID_GRASSYTERRAINENDS - BATTLESTRINGS_TABLE_START] = sText_GrassyTerrainEnds,
    [STRINGID_TARGETABILITYSTATRAISE - BATTLESTRINGS_TABLE_START] = sText_TargetAbilityRaisedStat,
    [STRINGID_TARGETSSTATWASMAXEDOUT - BATTLESTRINGS_TABLE_START] = sText_TargetsStatWasMaxedOut,
    [STRINGID_ATTACKERABILITYSTATRAISE - BATTLESTRINGS_TABLE_START] = sText_AttackerAbilityRaisedStat,
    [STRINGID_POISONHEALHPUP - BATTLESTRINGS_TABLE_START] = sText_PoisonHealHpUp,
    [STRINGID_BADDREAMSDMG - BATTLESTRINGS_TABLE_START] = sText_BadDreamsDmg,
    [STRINGID_MOLDBREAKERENTERS - BATTLESTRINGS_TABLE_START] = sText_MoldBreakerEnters,
    [STRINGID_TERAVOLTENTERS - BATTLESTRINGS_TABLE_START] = sText_TeravoltEnters,
    [STRINGID_TURBOBLAZEENTERS - BATTLESTRINGS_TABLE_START] = sText_TurboblazeEnters,
    [STRINGID_SLOWSTARTENTERS - BATTLESTRINGS_TABLE_START] = sText_SlowStartEnters,
    [STRINGID_SLOWSTARTEND - BATTLESTRINGS_TABLE_START] = sText_SlowStartEnd,
    [STRINGID_SOLARPOWERHPDROP - BATTLESTRINGS_TABLE_START] = sText_SolarPowerHpDrop,
    [STRINGID_AFTERMATHDMG - BATTLESTRINGS_TABLE_START] = sText_AftermathDmg,
    [STRINGID_ANTICIPATIONACTIVATES - BATTLESTRINGS_TABLE_START] = sText_AnticipationActivates,
    [STRINGID_FOREWARNACTIVATES - BATTLESTRINGS_TABLE_START] = sText_ForewarnActivates,
    [STRINGID_ICEBODYHPGAIN - BATTLESTRINGS_TABLE_START] = sText_IceBodyHpGain,
    [STRINGID_SNOWWARNINGHAIL - BATTLESTRINGS_TABLE_START] = sText_SnowWarningHail,
    [STRINGID_SNOWWARNINGSNOW - BATTLESTRINGS_TABLE_START] = sText_SnowWarningSnow,
    [STRINGID_FRISKACTIVATES - BATTLESTRINGS_TABLE_START] = sText_FriskActivates,
    [STRINGID_UNNERVEENTERS - BATTLESTRINGS_TABLE_START] = sText_UnnerveEnters,
    [STRINGID_HARVESTBERRY - BATTLESTRINGS_TABLE_START] = sText_HarvestBerry,
    [STRINGID_LASTABILITYRAISEDSTAT - BATTLESTRINGS_TABLE_START] = sText_LastAbilityRaisedBuff1,
    [STRINGID_MAGICBOUNCEACTIVATES - BATTLESTRINGS_TABLE_START] = sText_MagicBounceActivates,
    [STRINGID_PROTEANTYPECHANGE - BATTLESTRINGS_TABLE_START] = sText_ProteanTypeChange,
    [STRINGID_SYMBIOSISITEMPASS - BATTLESTRINGS_TABLE_START] = sText_SymbiosisItemPass,
    [STRINGID_STEALTHROCKDMG - BATTLESTRINGS_TABLE_START] = sText_StealthRockDmg,
    [STRINGID_TOXICSPIKESABSORBED - BATTLESTRINGS_TABLE_START] = sText_ToxicSpikesAbsorbed,
    [STRINGID_TOXICSPIKESPOISONED - BATTLESTRINGS_TABLE_START] = sText_ToxicSpikesPoisoned,
    [STRINGID_STICKYWEBSWITCHIN - BATTLESTRINGS_TABLE_START] = sText_StickyWebSwitchIn,
    [STRINGID_HEALINGWISHCAMETRUE - BATTLESTRINGS_TABLE_START] = sText_HealingWishCameTrue,
    [STRINGID_HEALINGWISHHEALED - BATTLESTRINGS_TABLE_START] = sText_HealingWishHealed,
    [STRINGID_LUNARDANCECAMETRUE - BATTLESTRINGS_TABLE_START] = sText_LunarDanceCameTrue,
    [STRINGID_CUSEDBODYDISABLED - BATTLESTRINGS_TABLE_START] = sText_CursedBodyDisabled,
    [STRINGID_ATTACKERACQUIREDABILITY - BATTLESTRINGS_TABLE_START] = sText_AttackerAquiredAbility,
    [STRINGID_TARGETABILITYSTATLOWER - BATTLESTRINGS_TABLE_START] = sText_TargetAbilityLoweredStat,
    [STRINGID_TARGETSTATWONTGOHIGHER - BATTLESTRINGS_TABLE_START] = sText_TargetStatWontGoHigher,
    [STRINGID_PKMNMOVEBOUNCEDABILITY - BATTLESTRINGS_TABLE_START] = sText_PkmnMoveBouncedViaAbility,
    [STRINGID_IMPOSTERTRANSFORM - BATTLESTRINGS_TABLE_START] = sText_ImposterTransform,
    [STRINGID_ASSAULTVESTDOESNTALLOW - BATTLESTRINGS_TABLE_START] = sText_AssaultVestDoesntAllow,
    [STRINGID_GRAVITYPREVENTSUSAGE - BATTLESTRINGS_TABLE_START] = sText_GravityPreventsUsage,
    [STRINGID_HEALBLOCKPREVENTSUSAGE - BATTLESTRINGS_TABLE_START] = sText_HealBlockPreventsUsage,
    [STRINGID_NOTDONEYET - BATTLESTRINGS_TABLE_START] = sText_NotDoneYet,
    [STRINGID_STICKYWEBUSED - BATTLESTRINGS_TABLE_START] = sText_StickyWebUsed,
    [STRINGID_QUASHSUCCESS - BATTLESTRINGS_TABLE_START] = sText_QuashSuccess,
    [STRINGID_PKMNBLEWAWAYTOXICSPIKES - BATTLESTRINGS_TABLE_START] = sText_PkmnBlewAwayToxicSpikes,
    [STRINGID_PKMNBLEWAWAYSTICKYWEB - BATTLESTRINGS_TABLE_START] = sText_PkmnBlewAwayStickyWeb,
    [STRINGID_PKMNBLEWAWAYSTEALTHROCK - BATTLESTRINGS_TABLE_START] = sText_PkmnBlewAwayStealthRock,
    [STRINGID_SPIKESDISAPPEAREDFROMTEAM - BATTLESTRINGS_TABLE_START] = sText_SpikesDisappearedFromTeam,
    [STRINGID_TOXICSPIKESDISAPPEAREDFROMTEAM - BATTLESTRINGS_TABLE_START] = sText_ToxicSpikesDisappearedFromTeam,
    [STRINGID_STEALTHROCKDISAPPEAREDFROMTEAM - BATTLESTRINGS_TABLE_START] = sText_StealthRockDisappearedFromTeam,
    [STRINGID_STICKYWEBDISAPPEAREDFROMTEAM - BATTLESTRINGS_TABLE_START] = sText_StickyWebDisappearedFromTeam,
    [STRINGID_SHARPSTEELDISAPPEAREDFROMTEAM - BATTLESTRINGS_TABLE_START] = sText_SharpSteelDisappearedFromTeam,
    [STRINGID_IONDELUGEON - BATTLESTRINGS_TABLE_START] = sText_IonDelugeOn,
    [STRINGID_TOPSYTURVYSWITCHEDSTATS - BATTLESTRINGS_TABLE_START] = sText_TopsyTurvySwitchedStats,
    [STRINGID_TERRAINBECOMESMISTY - BATTLESTRINGS_TABLE_START] = sText_TerrainBecomesMisty,
    [STRINGID_TERRAINBECOMESGRASSY - BATTLESTRINGS_TABLE_START] = sText_TerrainBecomesGrassy,
    [STRINGID_TERRAINBECOMESELECTRIC - BATTLESTRINGS_TABLE_START] = sText_TerrainBecomesElectric,
    [STRINGID_TERRAINBECOMESPSYCHIC - BATTLESTRINGS_TABLE_START] = sText_TerrainBecomesPsychic,
    [STRINGID_TARGETELECTRIFIED - BATTLESTRINGS_TABLE_START] = sText_TargetElectrified,
    [STRINGID_MEGAEVOREACTING - BATTLESTRINGS_TABLE_START] = sText_MegaEvoReacting,
    [STRINGID_FERVENTWISHREACHED - BATTLESTRINGS_TABLE_START] = sText_FerventWishReached,
    [STRINGID_MEGAEVOEVOLVED - BATTLESTRINGS_TABLE_START] = sText_MegaEvoEvolved,
    [STRINGID_DRASTICALLY - BATTLESTRINGS_TABLE_START] = sText_drastically,
    [STRINGID_SEVERELY - BATTLESTRINGS_TABLE_START] = sText_severely,
    [STRINGID_INFESTATION - BATTLESTRINGS_TABLE_START] = sText_Infestation,
    [STRINGID_NOEFFECTONTARGET - BATTLESTRINGS_TABLE_START] = sText_NoEffectOnTarget,
    [STRINGID_BURSTINGFLAMESHIT - BATTLESTRINGS_TABLE_START] = sText_BurstingFlames,
    [STRINGID_BESTOWITEMGIVING - BATTLESTRINGS_TABLE_START] = sText_BestowItemGiving,
    [STRINGID_THIRDTYPEADDED - BATTLESTRINGS_TABLE_START] = sText_ThirdTypeAdded,
    [STRINGID_FELLFORFEINT - BATTLESTRINGS_TABLE_START] = sText_FellForFeint,
    [STRINGID_POKEMONCANNOTUSEMOVE - BATTLESTRINGS_TABLE_START] = sText_PokemonCannotUseMove,
    [STRINGID_COVEREDINPOWDER - BATTLESTRINGS_TABLE_START] = sText_CoveredInPowder,
    [STRINGID_POWDEREXPLODES - BATTLESTRINGS_TABLE_START] = sText_PowderExplodes,
    [STRINGID_GRAVITYGROUNDING - BATTLESTRINGS_TABLE_START] = sText_GravityGrounding,
    [STRINGID_MISTYTERRAINPREVENTS - BATTLESTRINGS_TABLE_START] = sText_MistyTerrainPreventsStatus,
    [STRINGID_GRASSYTERRAINHEALS - BATTLESTRINGS_TABLE_START] = sText_GrassyTerrainHeals,
    [STRINGID_ELECTRICTERRAINPREVENTS - BATTLESTRINGS_TABLE_START] = sText_ElectricTerrainPreventsSleep,
    [STRINGID_PSYCHICTERRAINPREVENTS - BATTLESTRINGS_TABLE_START] = sText_PsychicTerrainPreventsPriority,
    [STRINGID_AURAFLAREDTOLIFE - BATTLESTRINGS_TABLE_START] = sText_AuraFlaredToLife,
    [STRINGID_AIRLOCKACTIVATES - BATTLESTRINGS_TABLE_START] = sText_AirLockActivates,
    [STRINGID_PRESSUREENTERS - BATTLESTRINGS_TABLE_START] = sText_PressureActivates,
    [STRINGID_DARKAURAENTERS - BATTLESTRINGS_TABLE_START] = sText_DarkAuraActivates,
    [STRINGID_FAIRYAURAENTERS - BATTLESTRINGS_TABLE_START] = sText_FairyAuraActivates,
    [STRINGID_AURABREAKENTERS - BATTLESTRINGS_TABLE_START] = sText_AuraBreakActivates,
    [STRINGID_COMATOSEENTERS - BATTLESTRINGS_TABLE_START] = sText_ComatoseActivates,
    [STRINGID_SCREENCLEANERENTERS - BATTLESTRINGS_TABLE_START] = sText_ScreenCleanerActivates,
    [STRINGID_BOTHCANNOLONGERESCAPE - BATTLESTRINGS_TABLE_START] = sText_BothCanNoLongerEscape,
    [STRINGID_CANTESCAPEDUETOUSEDMOVE - BATTLESTRINGS_TABLE_START] = sText_CantEscapeDueToUsedMove,
    [STRINGID_PKMNBECAMEWEAKERTOFIRE - BATTLESTRINGS_TABLE_START] = sText_PkmnBecameWeakerToFire,
    [STRINGID_ABOUTTOUSEPOLTERGEIST - BATTLESTRINGS_TABLE_START] = sText_PkmnAboutToBeAttackedByItsItem,
    [STRINGID_CANTESCAPEBECAUSEOFCURRENTMOVE - BATTLESTRINGS_TABLE_START] = sText_CantEscapeBecauseOfCurrentMove,
    [STRINGID_PKMNTOOKTARGETHIGH - BATTLESTRINGS_TABLE_START] = sText_PkmnTookTargetHigh,
    [STRINGID_TARGETTOOHEAVY - BATTLESTRINGS_TABLE_START] = sText_TargetTooHeavy,
[STRINGID_ATTACKERLOSTELECTRICTYPE - BATTLESTRINGS_TABLE_START] = sText_AttackerLostElectricType,
    [STRINGID_PKMNSABILITYPREVENTSABILITY - BATTLESTRINGS_TABLE_START] = sText_PkmnsAbilityPreventsAbility,
    [STRINGID_PKMNHURTBYFROSTBITE - BATTLESTRINGS_TABLE_START] = sText_PkmnHurtByFrostbite,
    [STRINGID_PKMNGOTFROSTBITE - BATTLESTRINGS_TABLE_START] = sText_PkmnGotFrostbite,
    [STRINGID_PKMNSITEMHEALEDFROSTBITE - BATTLESTRINGS_TABLE_START] = sText_PkmnsItemHealedFrostbite,
    [STRINGID_ATTACKERHEALEDITSFROSTBITE - BATTLESTRINGS_TABLE_START] = sText_AttackerHealedItsFrostbite,
    [STRINGID_PKMNFROSTBITEHEALED - BATTLESTRINGS_TABLE_START] = sText_PkmnFrostbiteHealed,
    [STRINGID_PKMNFROSTBITEHEALED2 - BATTLESTRINGS_TABLE_START] = sText_PkmnFrostbiteHealed2,
    [STRINGID_PKMNFROSTBITEHEALEDBY - BATTLESTRINGS_TABLE_START] = sText_PkmnFrostbiteHealedBy,
    [STRINGID_ULTRABURSTREACTING - BATTLESTRINGS_TABLE_START] = sText_UltraBurstReacting,
    [STRINGID_ULTRABURSTCOMPLETED - BATTLESTRINGS_TABLE_START] = sText_UltraBurstCompleted,
    [STRINGID_TEAMGAINEDEXP - BATTLESTRINGS_TABLE_START] = sText_TeamGainedEXP,
    [STRINGID_TARGETCOVEREDINSTICKYCANDYSYRUP - BATTLESTRINGS_TABLE_START] = sText_TargetCoveredInStickyCandySyrup,
};

const u16 gTrainerUsedItemStringIds[] =
{
    STRINGID_PLAYERUSEDITEM, STRINGID_TRAINER1USEDITEM
};

const u16 gZEffectStringIds[] =
{
    [B_MSG_Z_RESET_STATS] = STRINGID_ZMOVERESETSSTATS,
    [B_MSG_Z_ALL_STATS_UP]= STRINGID_ZMOVEALLSTATSUP,
    [B_MSG_Z_BOOST_CRITS] = STRINGID_ZMOVEZBOOSTCRIT,
    [B_MSG_Z_FOLLOW_ME]   = STRINGID_PKMNCENTERATTENTION,
    [B_MSG_Z_RECOVER_HP]  = STRINGID_ZMOVERESTOREHP,
    [B_MSG_Z_STAT_UP]     = STRINGID_ZMOVESTATUP,
    [B_MSG_Z_HP_TRAP]     = STRINGID_ZMOVEHPTRAP,
};

const u16 gMentalHerbCureStringIds[] = 
{
    [B_MSG_MENTALHERBCURE_INFATUATION] = STRINGID_ATKGOTOVERINFATUATION,
    [B_MSG_MENTALHERBCURE_TAUNT]       = STRINGID_BUFFERENDS,
    [B_MSG_MENTALHERBCURE_ENCORE]      = STRINGID_PKMNENCOREENDED,
    [B_MSG_MENTALHERBCURE_TORMENT]     = STRINGID_TORMENTEDNOMORE,
    [B_MSG_MENTALHERBCURE_HEALBLOCK]   = STRINGID_HEALBLOCKEDNOMORE,
    [B_MSG_MENTALHERBCURE_DISABLE]     = STRINGID_PKMNMOVEDISABLEDNOMORE,
};

const u16 gTerrainStringIds[B_MSG_TERRAIN_COUNT] =
{
    [B_MSG_TERRAIN_SET_MISTY] = STRINGID_TERRAINBECOMESMISTY,
    [B_MSG_TERRAIN_SET_ELECTRIC] = STRINGID_TERRAINBECOMESELECTRIC,
    [B_MSG_TERRAIN_SET_PSYCHIC] = STRINGID_TERRAINBECOMESPSYCHIC,
    [B_MSG_TERRAIN_SET_GRASSY] = STRINGID_TERRAINBECOMESGRASSY,
    [B_MSG_TERRAIN_END_MISTY] = STRINGID_MISTYTERRAINENDS,
    [B_MSG_TERRAIN_END_ELECTRIC] = STRINGID_ELECTRICTERRAINENDS,
    [B_MSG_TERRAIN_END_PSYCHIC] = STRINGID_PSYCHICTERRAINENDS,
    [B_MSG_TERRAIN_END_GRASSY] = STRINGID_GRASSYTERRAINENDS,
};

const u16 gTerrainPreventsStringIds[] =
{
    [B_MSG_TERRAINPREVENTS_MISTY]    = STRINGID_MISTYTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_ELECTRIC] = STRINGID_ELECTRICTERRAINPREVENTS,
    [B_MSG_TERRAINPREVENTS_PSYCHIC]  = STRINGID_PSYCHICTERRAINPREVENTS
};

const u16 gMagicCoatBounceStringIds[] =
{
    STRINGID_PKMNMOVEBOUNCED, STRINGID_PKMNMOVEBOUNCEDABILITY
};

const u16 gHealingWishStringIds[] =
{
    STRINGID_HEALINGWISHCAMETRUE, STRINGID_LUNARDANCECAMETRUE
};

const u16 gDmgHazardsStringIds[] =
{
    [B_MSG_PKMNHURTBYSPIKES]   = STRINGID_PKMNHURTBYSPIKES,
    [B_MSG_STEALTHROCKDMG]     = STRINGID_STEALTHROCKDMG,
    [B_MSG_SHARPSTEELDMG]      = STRINGID_SHARPSTEELDMG,
    [B_MSG_POINTEDSTONESFLOAT] = STRINGID_POINTEDSTONESFLOAT,
    [B_MSG_SPIKESSCATTERED]    = STRINGID_SPIKESSCATTERED,
    [B_MSG_SHARPSTEELFLOATS]   = STRINGID_SHARPSTEELFLOATS,
};

const u16 gSwitchInAbilityStringIds[] =
{
    [B_MSG_SWITCHIN_MOLDBREAKER] = STRINGID_MOLDBREAKERENTERS,
    [B_MSG_SWITCHIN_TERAVOLT] = STRINGID_TERAVOLTENTERS,
    [B_MSG_SWITCHIN_TURBOBLAZE] = STRINGID_TURBOBLAZEENTERS,
    [B_MSG_SWITCHIN_SLOWSTART] = STRINGID_SLOWSTARTENTERS,
    [B_MSG_SWITCHIN_UNNERVE] = STRINGID_UNNERVEENTERS,
    [B_MSG_SWITCHIN_ANTICIPATION] = STRINGID_ANTICIPATIONACTIVATES,
    [B_MSG_SWITCHIN_FOREWARN] = STRINGID_FOREWARNACTIVATES,
    [B_MSG_SWITCHIN_PRESSURE] = STRINGID_PRESSUREENTERS,
    [B_MSG_SWITCHIN_DARKAURA] = STRINGID_DARKAURAENTERS,
    [B_MSG_SWITCHIN_FAIRYAURA] = STRINGID_FAIRYAURAENTERS,
    [B_MSG_SWITCHIN_AURABREAK] = STRINGID_AURABREAKENTERS,
    [B_MSG_SWITCHIN_COMATOSE] = STRINGID_COMATOSEENTERS,
    [B_MSG_SWITCHIN_SCREENCLEANER] = STRINGID_SCREENCLEANERENTERS,
    [B_MSG_SWITCHIN_ASONE] = STRINGID_ASONEENTERS,
    [B_MSG_SWITCHIN_CURIOUS_MEDICINE] = STRINGID_CURIOUSMEDICINEENTERS,
    [B_MSG_SWITCHIN_PASTEL_VEIL] = STRINGID_PASTELVEILENTERS,
    [B_MSG_SWITCHIN_NEUTRALIZING_GAS] = STRINGID_NEUTRALIZINGGASENTERS,
};

const u16 gMissStringIds[] =
{
    [B_MSG_MISSED]      = STRINGID_ATTACKMISSED,
    [B_MSG_PROTECTED]   = STRINGID_PKMNPROTECTEDITSELF,
    [B_MSG_AVOIDED_ATK] = STRINGID_PKMNAVOIDEDATTACK,
    [B_MSG_AVOIDED_DMG] = STRINGID_AVOIDEDDAMAGE,
    [B_MSG_GROUND_MISS] = STRINGID_PKMNMAKESGROUNDMISS
};

const u16 gNoEscapeStringIds[] =
{
    [B_MSG_CANT_ESCAPE]          = STRINGID_CANTESCAPE,
    [B_MSG_DONT_LEAVE_BIRCH]     = STRINGID_DONTLEAVEBIRCH,
    [B_MSG_PREVENTS_ESCAPE]      = STRINGID_PREVENTSESCAPE,
    [B_MSG_CANT_ESCAPE_2]        = STRINGID_CANTESCAPE2,
    [B_MSG_ATTACKER_CANT_ESCAPE] = STRINGID_ATTACKERCANTESCAPE
};

const u16 gMoveWeatherChangeStringIds[] =
{
    [B_MSG_STARTED_RAIN]      = STRINGID_STARTEDTORAIN,
    [B_MSG_STARTED_DOWNPOUR]  = STRINGID_DOWNPOURSTARTED, // Unused
    [B_MSG_WEATHER_FAILED]    = STRINGID_BUTITFAILED,
    [B_MSG_STARTED_SANDSTORM] = STRINGID_SANDSTORMBREWED,
    [B_MSG_STARTED_SUNLIGHT]  = STRINGID_SUNLIGHTGOTBRIGHT,
    [B_MSG_STARTED_HAIL]      = STRINGID_STARTEDHAIL,
    [B_MSG_STARTED_SNOW]      = STRINGID_STARTEDSNOW,
};

const u16 gSandStormHailSnowContinuesStringIds[] =
{
    [B_MSG_SANDSTORM] = STRINGID_SANDSTORMRAGES,
    [B_MSG_HAIL]      = STRINGID_HAILCONTINUES,
    [B_MSG_SNOW]      = STRINGID_SNOWCONTINUES,
};

const u16 gSandStormHailDmgStringIds[] =
{
    [B_MSG_SANDSTORM] = STRINGID_PKMNBUFFETEDBYSANDSTORM,
    [B_MSG_HAIL]      = STRINGID_PKMNPELTEDBYHAIL
};

const u16 gSandStormHailSnowEndStringIds[] =
{
    [B_MSG_SANDSTORM] = STRINGID_SANDSTORMSUBSIDED,
    [B_MSG_HAIL]      = STRINGID_HAILSTOPPED,
    [B_MSG_SNOW]      = STRINGID_SNOWSTOPPED,
};

const u16 gRainContinuesStringIds[] =
{
    [B_MSG_RAIN_CONTINUES]     = STRINGID_RAINCONTINUES,
    [B_MSG_DOWNPOUR_CONTINUES] = STRINGID_DOWNPOURCONTINUES,
    [B_MSG_RAIN_STOPPED]       = STRINGID_RAINSTOPPED
};

const u16 gProtectLikeUsedStringIds[] =
{
    [B_MSG_PROTECTED_ITSELF] = STRINGID_PKMNPROTECTEDITSELF2,
    [B_MSG_BRACED_ITSELF]    = STRINGID_PKMNBRACEDITSELF,
    [B_MSG_PROTECT_FAILED]   = STRINGID_BUTITFAILED,
    [B_MSG_PROTECTED_TEAM]   = STRINGID_PROTECTEDTEAM,
};

const u16 gReflectLightScreenSafeguardStringIds[] =
{
    [B_MSG_SIDE_STATUS_FAILED]     = STRINGID_BUTITFAILED,
    [B_MSG_SET_REFLECT_SINGLE]     = STRINGID_PKMNRAISEDDEF,
    [B_MSG_SET_REFLECT_DOUBLE]     = STRINGID_PKMNRAISEDDEFALITTLE,
    [B_MSG_SET_LIGHTSCREEN_SINGLE] = STRINGID_PKMNRAISEDSPDEF,
    [B_MSG_SET_LIGHTSCREEN_DOUBLE] = STRINGID_PKMNRAISEDSPDEFALITTLE,
    [B_MSG_SET_SAFEGUARD]          = STRINGID_PKMNCOVEREDBYVEIL,
};

const u16 gLeechSeedStringIds[] =
{
    [B_MSG_LEECH_SEED_SET]   = STRINGID_PKMNSEEDED,
    [B_MSG_LEECH_SEED_MISS]  = STRINGID_PKMNEVADEDATTACK,
    [B_MSG_LEECH_SEED_FAIL]  = STRINGID_ITDOESNTAFFECT,
    [B_MSG_LEECH_SEED_DRAIN] = STRINGID_PKMNSAPPEDBYLEECHSEED,
    [B_MSG_LEECH_SEED_OOZE]  = STRINGID_ITSUCKEDLIQUIDOOZE,
};

const u16 gRestUsedStringIds[] =
{
    [B_MSG_REST]          = STRINGID_PKMNWENTTOSLEEP,
    [B_MSG_REST_STATUSED] = STRINGID_PKMNSLEPTHEALTHY
};

const u16 gUproarOverTurnStringIds[] =
{
    [B_MSG_UPROAR_CONTINUES] = STRINGID_PKMNMAKINGUPROAR,
    [B_MSG_UPROAR_ENDS]      = STRINGID_PKMNCALMEDDOWN
};

const u16 gStockpileUsedStringIds[] =
{
    [B_MSG_STOCKPILED]     = STRINGID_PKMNSTOCKPILED,
    [B_MSG_CANT_STOCKPILE] = STRINGID_PKMNCANTSTOCKPILE,
};

const u16 gWokeUpStringIds[] =
{
    [B_MSG_WOKE_UP]        = STRINGID_PKMNWOKEUP,
    [B_MSG_WOKE_UP_UPROAR] = STRINGID_PKMNWOKEUPINUPROAR
};

const u16 gSwallowFailStringIds[] =
{
    [B_MSG_SWALLOW_FAILED]  = STRINGID_FAILEDTOSWALLOW,
    [B_MSG_SWALLOW_FULL_HP] = STRINGID_PKMNHPFULL
};

const u16 gUproarAwakeStringIds[] =
{
    [B_MSG_CANT_SLEEP_UPROAR]  = STRINGID_PKMNCANTSLEEPINUPROAR2,
    [B_MSG_UPROAR_KEPT_AWAKE]  = STRINGID_UPROARKEPTPKMNAWAKE,
};

const u16 gStatUpStringIds[] =
{
    [B_MSG_ATTACKER_STAT_ROSE] = STRINGID_ATTACKERSSTATROSE,
    [B_MSG_DEFENDER_STAT_ROSE] = STRINGID_DEFENDERSSTATROSE,
    [B_MSG_STAT_WONT_INCREASE] = STRINGID_STATSWONTINCREASE,
    [B_MSG_STAT_ROSE_EMPTY]    = STRINGID_EMPTYSTRING3,
    [B_MSG_STAT_ROSE_ITEM]     = STRINGID_USINGITEMSTATOFPKMNROSE,
    [B_MSG_USED_DIRE_HIT]      = STRINGID_PKMNUSEDXTOGETPUMPED,
};

const u16 gStatDownStringIds[] =
{
    [B_MSG_ATTACKER_STAT_FELL] = STRINGID_ATTACKERSSTATFELL,
    [B_MSG_DEFENDER_STAT_FELL] = STRINGID_DEFENDERSSTATFELL,
    [B_MSG_STAT_WONT_DECREASE] = STRINGID_STATSWONTDECREASE,
    [B_MSG_STAT_FELL_EMPTY]    = STRINGID_EMPTYSTRING3,
};

// Index read from sTWOTURN_STRINGID
const u16 gFirstTurnOfTwoStringIds[] =
{
    [B_MSG_TURN1_RAZOR_WIND]    = STRINGID_PKMNWHIPPEDWHIRLWIND,
    [B_MSG_TURN1_SOLAR_BEAM]    = STRINGID_PKMNTOOKSUNLIGHT,
    [B_MSG_TURN1_SKULL_BASH]    = STRINGID_PKMNLOWEREDHEAD,
    [B_MSG_TURN1_SKY_ATTACK]    = STRINGID_PKMNISGLOWING,
    [B_MSG_TURN1_FLY]           = STRINGID_PKMNFLEWHIGH,
    [B_MSG_TURN1_DIG]           = STRINGID_PKMNDUGHOLE,
    [B_MSG_TURN1_DIVE]          = STRINGID_PKMNHIDUNDERWATER,
    [B_MSG_TURN1_BOUNCE]        = STRINGID_PKMNSPRANGUP,
    [B_MSG_TURN1_PHANTOM_FORCE] = STRINGID_VANISHEDINSTANTLY,
    [B_MSG_TURN1_GEOMANCY]      = STRINGID_PKNMABSORBINGPOWER,
    [B_MSG_TURN1_FREEZE_SHOCK]  = STRINGID_CLOAKEDINAFREEZINGLIGHT,
    [B_MSG_TURN1_SKY_DROP]      = STRINGID_PKMNTOOKTARGETHIGH,
    [B_MSG_TURN1_METEOR_BEAM]   = STRINGID_METEORBEAMCHARGING,
};

// Index copied from move's index in sTrappingMoves
const u16 gWrappedStringIds[NUM_TRAPPING_MOVES] =
{
    [B_MSG_WRAPPED_BIND]        = STRINGID_PKMNSQUEEZEDBYBIND,     // MOVE_BIND
    [B_MSG_WRAPPED_WRAP]        = STRINGID_PKMNWRAPPEDBY,          // MOVE_WRAP
    [B_MSG_WRAPPED_FIRE_SPIN]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_FIRE_SPIN
    [B_MSG_WRAPPED_CLAMP]       = STRINGID_PKMNCLAMPED,            // MOVE_CLAMP
    [B_MSG_WRAPPED_WHIRLPOOL]   = STRINGID_PKMNTRAPPEDINVORTEX,    // MOVE_WHIRLPOOL
    [B_MSG_WRAPPED_SAND_TOMB]   = STRINGID_PKMNTRAPPEDBYSANDTOMB,  // MOVE_SAND_TOMB
    [B_MSG_WRAPPED_MAGMA_STORM] = STRINGID_TRAPPEDBYSWIRLINGMAGMA, // MOVE_MAGMA_STORM
    [B_MSG_WRAPPED_INFESTATION] = STRINGID_INFESTATION,            // MOVE_INFESTATION
    [B_MSG_WRAPPED_SNAP_TRAP]   = STRINGID_PKMNINSNAPTRAP,         // MOVE_SNAP_TRAP
    [B_MSG_WRAPPED_THUNDER_CAGE]= STRINGID_THUNDERCAGETRAPPED,     // MOVE_THUNDER_CAGE
};

const u16 gMistUsedStringIds[] =
{
    [B_MSG_SET_MIST]    = STRINGID_PKMNSHROUDEDINMIST,
    [B_MSG_MIST_FAILED] = STRINGID_BUTITFAILED
};

const u16 gFocusEnergyUsedStringIds[] =
{
    [B_MSG_GETTING_PUMPED]      = STRINGID_PKMNGETTINGPUMPED,
    [B_MSG_FOCUS_ENERGY_FAILED] = STRINGID_BUTITFAILED
};

const u16 gTransformUsedStringIds[] =
{
    [B_MSG_TRANSFORMED]      = STRINGID_PKMNTRANSFORMEDINTO,
    [B_MSG_TRANSFORM_FAILED] = STRINGID_BUTITFAILED
};

const u16 gSubstituteUsedStringIds[] =
{
    [B_MSG_SET_SUBSTITUTE]    = STRINGID_PKMNMADESUBSTITUTE,
    [B_MSG_SUBSTITUTE_FAILED] = STRINGID_TOOWEAKFORSUBSTITUTE
};

const u16 gGotPoisonedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPOISONED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNPOISONEDBY
};

const u16 gGotParalyzedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASPARALYZED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNWASPARALYZEDBY
};

const u16 gFellAsleepStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLASLEEP,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNMADESLEEP,
};

const u16 gGotBurnedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASBURNED,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNBURNEDBY
};

const u16 gGotFrostbiteStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNGOTFROSTBITE
};

const u16 gFrostbiteHealedStringIds[] =
{
    [B_MSG_FROSTBITE_HEALED]         = STRINGID_PKMNFROSTBITEHEALED2,
    [B_MSG_FROSTBITE_HEALED_BY_MOVE] = STRINGID_PKMNFROSTBITEHEALEDBY
};

const u16 gGotFrozenStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNWASFROZEN,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNFROZENBY
};

const u16 gGotDefrostedStringIds[] =
{
    [B_MSG_DEFROSTED]         = STRINGID_PKMNWASDEFROSTED2,
    [B_MSG_DEFROSTED_BY_MOVE] = STRINGID_PKMNWASDEFROSTEDBY
};

const u16 gKOFailedStringIds[] =
{
    [B_MSG_KO_MISS]       = STRINGID_ATTACKMISSED,
    [B_MSG_KO_UNAFFECTED] = STRINGID_PKMNUNAFFECTED
};

const u16 gAttractUsedStringIds[] =
{
    [B_MSG_STATUSED]            = STRINGID_PKMNFELLINLOVE,
    [B_MSG_STATUSED_BY_ABILITY] = STRINGID_PKMNSXINFATUATEDY
};

const u16 gAbsorbDrainStringIds[] =
{
    [B_MSG_ABSORB]      = STRINGID_PKMNENERGYDRAINED,
    [B_MSG_ABSORB_OOZE] = STRINGID_ITSUCKEDLIQUIDOOZE
};

const u16 gSportsUsedStringIds[] =
{
    [B_MSG_WEAKEN_ELECTRIC] = STRINGID_ELECTRICITYWEAKENED,
    [B_MSG_WEAKEN_FIRE]     = STRINGID_FIREWEAKENED
};

const u16 gPartyStatusHealStringIds[] =
{
    [B_MSG_BELL]                     = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_ATTACKER] = STRINGID_BELLCHIMED,
    [B_MSG_BELL_SOUNDPROOF_PARTNER]  = STRINGID_BELLCHIMED,
    [B_MSG_BELL_BOTH_SOUNDPROOF]     = STRINGID_BELLCHIMED,
    [B_MSG_SOOTHING_AROMA]           = STRINGID_SOOTHINGAROMA
};

const u16 gFutureMoveUsedStringIds[] =
{
    [B_MSG_FUTURE_SIGHT] = STRINGID_PKMNFORESAWATTACK,
    [B_MSG_DOOM_DESIRE]  = STRINGID_PKMNCHOSEXASDESTINY
};

const u16 gBallEscapeStringIds[] =
{
    [BALL_NO_SHAKES]     = STRINGID_PKMNBROKEFREE,
    [BALL_1_SHAKE]       = STRINGID_ITAPPEAREDCAUGHT,
    [BALL_2_SHAKES]      = STRINGID_AARGHALMOSTHADIT,
    [BALL_3_SHAKES_FAIL] = STRINGID_SHOOTSOCLOSE
};

// Overworld weathers that don't have an associated battle weather default to "It is raining."
const u16 gWeatherStartsStringIds[] =
{
    [WEATHER_NONE]               = STRINGID_ITISRAINING,
    [WEATHER_SUNNY_CLOUDS]       = STRINGID_ITISRAINING,
    [WEATHER_SUNNY]              = STRINGID_ITISRAINING,
    [WEATHER_RAIN]               = STRINGID_ITISRAINING,
    [WEATHER_SNOW]               = (B_OVERWORLD_SNOW >= GEN_9 ? STRINGID_STARTEDSNOW : STRINGID_STARTEDHAIL),
    [WEATHER_RAIN_THUNDERSTORM]  = STRINGID_ITISRAINING,
    [WEATHER_FOG_HORIZONTAL]     = STRINGID_ITISRAINING,
    [WEATHER_VOLCANIC_ASH]       = STRINGID_ITISRAINING,
    [WEATHER_SANDSTORM]          = STRINGID_SANDSTORMISRAGING,
    [WEATHER_FOG_DIAGONAL]       = STRINGID_ITISRAINING,
    [WEATHER_UNDERWATER]         = STRINGID_ITISRAINING,
    [WEATHER_SHADE]              = STRINGID_ITISRAINING,
    [WEATHER_DROUGHT]            = STRINGID_SUNLIGHTSTRONG,
    [WEATHER_DOWNPOUR]           = STRINGID_ITISRAINING,
    [WEATHER_UNDERWATER_BUBBLES] = STRINGID_ITISRAINING,
    [WEATHER_ABNORMAL]           = STRINGID_ITISRAINING
};

const u16 gPrimalWeatherBlocksStringIds[] =
{
    [B_MSG_PRIMAL_WEATHER_FIZZLED_BY_RAIN]      = STRINGID_MOVEFIZZLEDOUTINTHEHEAVYRAIN,
    [B_MSG_PRIMAL_WEATHER_EVAPORATED_IN_SUN]    = STRINGID_MOVEEVAPORATEDINTHEHARSHSUNLIGHT,
};

const u16 gInobedientStringIds[] =
{
    [B_MSG_LOAFING]            = STRINGID_PKMNLOAFING,
    [B_MSG_WONT_OBEY]          = STRINGID_PKMNWONTOBEY,
    [B_MSG_TURNED_AWAY]        = STRINGID_PKMNTURNEDAWAY,
    [B_MSG_PRETEND_NOT_NOTICE] = STRINGID_PKMNPRETENDNOTNOTICE,
    [B_MSG_INCAPABLE_OF_POWER] = STRINGID_PKMNINCAPABLEOFPOWER
};

const u16 gSafariGetNearStringIds[] =
{
    [B_MSG_CREPT_CLOSER]    = STRINGID_CREPTCLOSER,
    [B_MSG_CANT_GET_CLOSER] = STRINGID_CANTGETCLOSER
};

const u16 gSafariPokeblockResultStringIds[] =
{
    [B_MSG_MON_CURIOUS]    = STRINGID_PKMNCURIOUSABOUTX,
    [B_MSG_MON_ENTHRALLED] = STRINGID_PKMNENTHRALLEDBYX,
    [B_MSG_MON_IGNORED]    = STRINGID_PKMNIGNOREDX
};

const u16 gBerryEffectStringIds[] =
{
    [B_MSG_CURED_PROBLEM]     = STRINGID_PKMNSITEMCUREDPROBLEM,
    [B_MSG_NORMALIZED_STATUS] = STRINGID_PKMNSITEMNORMALIZEDSTATUS
};

const u16 gBRNPreventionStringIds[] =
{
    [B_MSG_ABILITY_PREVENTS_MOVE_STATUS]    = STRINGID_PKMNSXPREVENTSBURNS,
    [B_MSG_ABILITY_PREVENTS_ABILITY_STATUS] = STRINGID_PKMNSXPREVENTSYSZ,
    [B_MSG_STATUS_HAD_NO_EFFECT]            = STRINGID_PKMNSXHADNOEFFECTONY
};

const u16 gPRLZPreventionStringIds[] =
{
    [B_MSG_ABILITY_PREVENTS_MOVE_STATUS]    = STRINGID_PKMNPREVENTSPARALYSISWITH,
    [B_MSG_ABILITY_PREVENTS_ABILITY_STATUS] = STRINGID_PKMNSXPREVENTSYSZ,
    [B_MSG_STATUS_HAD_NO_EFFECT]            = STRINGID_PKMNSXHADNOEFFECTONY
};

const u16 gPSNPreventionStringIds[] =
{
    [B_MSG_ABILITY_PREVENTS_MOVE_STATUS]    = STRINGID_PKMNPREVENTSPOISONINGWITH,
    [B_MSG_ABILITY_PREVENTS_ABILITY_STATUS] = STRINGID_PKMNSXPREVENTSYSZ,
    [B_MSG_STATUS_HAD_NO_EFFECT]            = STRINGID_PKMNSXHADNOEFFECTONY
};

const u16 gItemSwapStringIds[] =
{
    [B_MSG_ITEM_SWAP_TAKEN] = STRINGID_PKMNOBTAINEDX,
    [B_MSG_ITEM_SWAP_GIVEN] = STRINGID_PKMNOBTAINEDX2,
    [B_MSG_ITEM_SWAP_BOTH]  = STRINGID_PKMNOBTAINEDXYOBTAINEDZ
};

const u16 gFlashFireStringIds[] =
{
    [B_MSG_FLASH_FIRE_BOOST]    = STRINGID_PKMNRAISEDFIREPOWERWITH,
    [B_MSG_FLASH_FIRE_NO_BOOST] = STRINGID_PKMNSXMADEYINEFFECTIVE
};

const u16 gCaughtMonStringIds[] =
{
    [B_MSG_SENT_SOMEONES_PC]  = STRINGID_PKMNTRANSFERREDSOMEONESPC,
    [B_MSG_SENT_LANETTES_PC]  = STRINGID_PKMNTRANSFERREDLANETTESPC,
    [B_MSG_SOMEONES_BOX_FULL] = STRINGID_PKMNBOXSOMEONESPCFULL,
    [B_MSG_LANETTES_BOX_FULL] = STRINGID_PKMNBOXLANETTESPCFULL,
};

const u16 gRoomsStringIds[] =
{
    STRINGID_PKMNTWISTEDDIMENSIONS, STRINGID_TRICKROOMENDS,
    STRINGID_SWAPSDEFANDSPDEFOFALLPOKEMON, STRINGID_WONDERROOMENDS,
    STRINGID_HELDITEMSLOSEEFFECTS, STRINGID_MAGICROOMENDS,
    STRINGID_EMPTYSTRING3
};

const u16 gStatusConditionsStringIds[] =
{
    STRINGID_PKMNWASPOISONED, STRINGID_PKMNBADLYPOISONED, STRINGID_PKMNWASBURNED, STRINGID_PKMNWASPARALYZED, STRINGID_PKMNFELLASLEEP, STRINGID_PKMNGOTFROSTBITE
};

const u16 gStatus2StringIds[] =
{
    STRINGID_PKMNWASCONFUSED, STRINGID_PKMNFELLINLOVE, STRINGID_TARGETCANTESCAPENOW, STRINGID_PKMNSUBJECTEDTOTORMENT
};

const u16 gDamageNonTypesStartStringIds[] =
{
    [B_MSG_TRAPPED_WITH_VINES]  = STRINGID_TEAMTRAPPEDWITHVINES,
    [B_MSG_CAUGHT_IN_VORTEX]    = STRINGID_TEAMCAUGHTINVORTEX,
    [B_MSG_SURROUNDED_BY_FIRE]  = STRINGID_TEAMSURROUNDEDBYFIRE,
    [B_MSG_SURROUNDED_BY_ROCKS] = STRINGID_TEAMSURROUNDEDBYROCKS,
};

const u16 gDamageNonTypesDmgStringIds[] =
{
    [B_MSG_HURT_BY_VINES]        = STRINGID_PKMNHURTBYVINES,
    [B_MSG_HURT_BY_VORTEX]       = STRINGID_PKMNHURTBYVORTEX,
    [B_MSG_BURNING_UP]           = STRINGID_PKMNBURNINGUP,
    [B_MSG_HURT_BY_ROCKS_THROWN] = STRINGID_PKMNHURTBYROCKSTHROWN,
};

const u8 gText_PkmnIsEvolving[] = _("咦？\n{STR_VAR_1}开始进化了！");
const u8 gText_CongratsPkmnEvolved[] = _("恭喜！你的{STR_VAR_1}\n进化成{STR_VAR_2}！{WAIT_SE}A\p");
const u8 gText_PkmnStoppedEvolving[] = _("嗯？{STR_VAR_1}\n停止进化了！\p");
const u8 gText_EllipsisQuestionMark[] = _("……？\p");
const u8 gText_WhatWillPkmnDo[] = _("想要\n{B_BUFF1}做什么？");
const u8 gText_WhatWillPkmnDo2[] = _("想要\n{B_PLAYER_NAME}做什么？");
const u8 gText_WhatWillWallyDo[] = _("满充要做\n什么？");
const u8 gText_LinkStandby[] = _("{PAUSE 16}准备连线中…");
const u8 gText_BattleMenu[] = _("战斗{CLEAR_TO 56}背包\n宝可梦{CLEAR_TO 56}逃跑");
const u8 gText_SafariZoneMenu[] = _("精灵球{CLEAR_TO 56}{POKEBLOCK}\n靠近{CLEAR_TO 56}逃跑");
const u8 gText_MoveInterfacePP[] = _("PP ");
const u8 gText_MoveInterfaceType[] = _("属性/");
const u8 gText_MoveInterfacePpType[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}PP\n属性/");
const u8 gText_MoveInterfaceDynamicColors[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_WhichMoveToForget4[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}要忘记\n哪个技能？");
const u8 gText_BattleYesNoChoice[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}是\n否");
const u8 gText_BattleSwitchWhich[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}与哪个\n换位？");
const u8 gText_BattleSwitchWhich2[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_BattleSwitchWhich3[] = _("{UP_ARROW}");
const u8 gText_BattleSwitchWhich4[] = _("{ESCAPE 4}");
const u8 gText_BattleSwitchWhich5[] = _("-");

// Unused
static const u8 *const sStatNamesTable2[] =
{
    gText_HP3, gText_SpAtk, gText_Attack,
    gText_SpDef, gText_Defense, gText_Speed
};

const u8 gText_SafariBalls[] = _("{HIGHLIGHT DARK_GRAY}狩猎球");
const u8 gText_SafariBallLeft[] = _("{HIGHLIGHT DARK_GRAY}左边: $" "{HIGHLIGHT DARK_GRAY}");
const u8 gText_Sleep[] = _("睡眠");
const u8 gText_Poison[] = _("中毒");
const u8 gText_Burn[] = _("灼烧");
const u8 gText_Paralysis[] = _("麻痹");
const u8 gText_Ice[] = _("冰冻");
const u8 gText_Confusion[] = _("混乱");
const u8 gText_Love[] = _("着迷");
const u8 gText_SpaceAndSpace[] = _("和");
const u8 gText_CommaSpace[] = _("，");
const u8 gText_Space2[] = _(" ");
const u8 gText_LineBreak[] = _("\l");
const u8 gText_NewLine[] = _("\n");
const u8 gText_Are[] = _("是");
const u8 gText_Are2[] = _("是");
const u8 gText_BadEgg[] = _("坏蛋");
const u8 gText_BattleWallyName[] = _("满充");
const u8 gText_Win[] = _("{HIGHLIGHT TRANSPARENT}胜");
const u8 gText_Loss[] = _("{HIGHLIGHT TRANSPARENT}败");
const u8 gText_Draw[] = _("{HIGHLIGHT TRANSPARENT}和");
static const u8 sText_SpaceIs[] = _("是");
static const u8 sText_ApostropheS[] = _("的");

// For displaying names of invalid moves.
// This is large enough that the text for TYPE_ELECTRIC will exceed TEXT_BUFF_ARRAY_COUNT.
static const u8 sATypeMove_Table[NUMBER_OF_MON_TYPES][17] =
{
    [TYPE_NORMAL]   = _("一般属性招式"),
    [TYPE_FIGHTING] = _("格斗属性招式"),
    [TYPE_FLYING]   = _("飞行属性招式"),
    [TYPE_POISON]   = _("毒属性招式"),
    [TYPE_GROUND]   = _("地面属性招式"),
    [TYPE_ROCK]     = _("岩石属性招式"),
    [TYPE_BUG]      = _("虫属性招式"),
    [TYPE_GHOST]    = _("鬼属性招式"),
    [TYPE_STEEL]    = _("钢属性招式"),
    [TYPE_MYSTERY]  = _("未知属性招式"),
    [TYPE_FIRE]     = _("火属性招式"),
    [TYPE_WATER]    = _("水属性招式"),
    [TYPE_GRASS]    = _("草属性招式"),
    [TYPE_ELECTRIC] = _("电属性招式"),
    [TYPE_PSYCHIC]  = _("超能力属性招式"),
    [TYPE_ICE]      = _("冰属性招式"),
    [TYPE_DRAGON]   = _("龙属性招式"),
    [TYPE_DARK]     = _("恶属性招式"),
    [TYPE_FAIRY]    = _("妖精属性招式"),
};

const u8 gText_BattleTourney[] = _("战斗巡回赛");
static const u8 sText_Round1[] = _("第1回合");
static const u8 sText_Round2[] = _("第2回合");
static const u8 sText_Semifinal[] = _("半决赛");
static const u8 sText_Final[] = _("决赛");

const u8 *const gRoundsStringTable[DOME_ROUNDS_COUNT] =
{
    [DOME_ROUND1]    = sText_Round1,
    [DOME_ROUND2]    = sText_Round2,
    [DOME_SEMIFINAL] = sText_Semifinal,
    [DOME_FINAL]     = sText_Final
};

const u8 gText_TheGreatNewHope[] = _("伟大的新希望!\p");
const u8 gText_WillChampionshipDreamComeTrue[] = _("冠军梦会实现吗？！\p");
const u8 gText_AFormerChampion[] = _("曾经的冠军！\p");
const u8 gText_ThePreviousChampion[] = _("上届冠军！\p");
const u8 gText_TheUnbeatenChampion[] = _("不败的冠军！\p");
const u8 gText_PlayerMon1Name[] = _("{B_PLAYER_MON1_NAME}");
const u8 gText_Vs[] = _("对决");
const u8 gText_OpponentMon1Name[] = _("{B_OPPONENT_MON1_NAME}");
const u8 gText_Mind[] = _("头脑");
const u8 gText_Skill[] = _("技巧");
const u8 gText_Body[] = _("身体");
const u8 gText_Judgment[] = _("{B_BUFF1}{CLEAR 13}判定{CLEAR 13}{B_BUFF2}");
static const u8 sText_TwoTrainersSentPkmn[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}派出了\n{B_OPPONENT_MON1_NAME}！\p{B_TRAINER2_CLASS} {B_TRAINER2_NAME}派出了\n{B_OPPONENT_MON2_NAME}！");
static const u8 sText_Trainer2SentOutPkmn[] = _("{B_TRAINER2_CLASS} {B_TRAINER2_NAME}派出了\n{B_BUFF1}！");
static const u8 sText_TwoTrainersWantToBattle[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}和\n{B_TRAINER2_CLASS} {B_TRAINER2_NAME}\l想要对战！\p");
static const u8 sText_InGamePartnerSentOutZGoN[] = _("{B_PARTNER_CLASS} {B_PARTNER_NAME}派出了\n{B_PLAYER_MON2_NAME}！\l去吧，{B_PLAYER_MON1_NAME}！");
static const u8 sText_TwoInGameTrainersDefeated[] = _("{B_TRAINER1_CLASS} {B_TRAINER1_NAME}和\n{B_TRAINER2_CLASS}{B_TRAINER2_NAME}\l被打败了！\p");
static const u8 sText_Trainer2LoseText[] = _("{B_TRAINER2_LOSE_TEXT}");
static const u8 sText_PkmnIncapableOfPower[] = _("{B_ATK_NAME_WITH_PREFIX}似乎无法\n使出力量！");
static const u8 sText_GlintAppearsInEye[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}眼中闪烁\n着亮光！");
static const u8 sText_PkmnGettingIntoPosition[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}准备\n就位！");
static const u8 sText_PkmnBeganGrowlingDeeply[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}发出了咆哮！");
static const u8 sText_PkmnEagerForMore[] = _("{B_SCR_ACTIVE_NAME_WITH_PREFIX}想要更多！");

const u16 gBattlePalaceFlavorTextTable[] =
{
    [B_MSG_GLINT_IN_EYE]   = STRINGID_GLINTAPPEARSINEYE,
    [B_MSG_GETTING_IN_POS] = STRINGID_PKMNGETTINGINTOPOSITION,
    [B_MSG_GROWL_DEEPLY]   = STRINGID_PKMNBEGANGROWLINGDEEPLY,
    [B_MSG_EAGER_FOR_MORE] = STRINGID_PKMNEAGERFORMORE,
};

static const u8 sText_RefIfNothingIsDecided[] = _("裁判：如果3回合无法决出胜负，\n将由我们来裁定结果！");
static const u8 sText_RefThatsIt[] = _("裁判：到此为止！现在将由我们\n裁定谁是胜利者！");
static const u8 sText_RefJudgeMind[] = _("裁判：判定类别 1，头脑！\n宝可梦展示出最大勇气！\p");
static const u8 sText_RefJudgeSkill[] = _("裁判：判定类别 2，技巧！\n宝可梦最优化使用技能！\p");
static const u8 sText_RefJudgeBody[] = _("裁判：判定类别 3，身体！\n宝可梦拥有最强生命力！\p");
static const u8 sText_RefPlayerWon[] = _("裁判：裁定结果：{B_BUFF1}与{B_BUFF2}！\n胜利者是{B_PLAYER_NAME}的{B_PLAYER_MON1_NAME}！\p");
static const u8 sText_RefOpponentWon[] = _("裁判：裁定结果：{B_BUFF1}与{B_BUFF2}！\n胜利者是{B_TRAINER1_NAME}的{B_DEF_NAME}！\p");
static const u8 sText_RefDraw[] = _("裁判：裁定结果：3比3！\n你们打成了平手！\p");
static const u8 sText_DefeatedOpponentByReferee[] = _("裁判裁定{B_PLAYER_MON1_NAME}击败了\n对手{B_OPPONENT_MON1_NAME}！");
static const u8 sText_LostToOpponentByReferee[] = _("裁判裁定{B_PLAYER_MON1_NAME}输给了\n对手{B_OPPONENT_MON1_NAME}！");
static const u8 sText_TiedOpponentByReferee[] = _("裁判裁定{B_PLAYER_MON1_NAME}与\n{B_OPPONENT_MON1_NAME}打成了平手！");
static const u8 sText_RefCommenceBattle[] = _("裁判：{B_PLAYER_MON1_NAME}对抗{B_OPPONENT_MON1_NAME}！\n战斗开始！");

const u8 *const gRefereeStringsTable[] =
{
    [B_MSG_REF_NOTHING_IS_DECIDED] = sText_RefIfNothingIsDecided,
    [B_MSG_REF_THATS_IT]           = sText_RefThatsIt,
    [B_MSG_REF_JUDGE_MIND]         = sText_RefJudgeMind,
    [B_MSG_REF_JUDGE_SKILL]        = sText_RefJudgeSkill,
    [B_MSG_REF_JUDGE_BODY]         = sText_RefJudgeBody,
    [B_MSG_REF_PLAYER_WON]         = sText_RefPlayerWon,
    [B_MSG_REF_OPPONENT_WON]       = sText_RefOpponentWon,
    [B_MSG_REF_DRAW]               = sText_RefDraw,
    [B_MSG_REF_COMMENCE_BATTLE]    = sText_RefCommenceBattle,
};

static const u8 sText_QuestionForfeitMatch[] = _("想放弃参赛资格，\n并退出比赛吗？");
static const u8 sText_ForfeitedMatch[] = _("{B_PLAYER_NAME}放弃了参赛资格！");
static const u8 sText_Trainer1WinText[] = _("{B_TRAINER1_WIN_TEXT}");
static const u8 sText_Trainer2WinText[] = _("{B_TRAINER2_WIN_TEXT}");
static const u8 sText_Trainer1Fled[] = _("{PLAY_SE SE_FLEE}{B_TRAINER1_CLASS}{B_TRAINER1_NAME}逃跑了！");
static const u8 sText_PlayerLostAgainstTrainer1[] = _("你输给了\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}！");
static const u8 sText_PlayerBattledToDrawTrainer1[] = _("你跟\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}打成了平手！");
const u8 gText_RecordBattleToPass[] = _("你想将这场对战记录\n在你的开拓区通行证上吗？");
const u8 gText_BattleRecordedOnPass[] = _("{B_PLAYER_NAME}的对战结果\n已经记录在开拓区通行证上了。");
static const u8 sText_LinkTrainerWantsToBattlePause[] = _("{B_LINK_OPPONENT1_NAME}\n想要对战！{PAUSE 49}");
static const u8 sText_TwoLinkTrainersWantToBattlePause[] = _("{B_LINK_OPPONENT1_NAME}和{B_LINK_OPPONENT2_NAME}\n想要对战！{PAUSE 49}");
static const u8 sText_Your1[] = _("我方");
static const u8 sText_Opposing1[] = _("对方");
static const u8 sText_Your2[] = _("我方");
static const u8 sText_Opposing2[] = _("对方");

// This is four lists of moves which use a different attack string in Japanese
// to the default. See the documentation for ChooseTypeOfMoveUsedString for more detail.
static const u16 sGrammarMoveUsedTable[] =
{
    MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_GROWTH,
    MOVE_HARDEN, MOVE_MINIMIZE, MOVE_SMOKESCREEN,
    MOVE_WITHDRAW, MOVE_DEFENSE_CURL, MOVE_EGG_BOMB,
    MOVE_SMOG, MOVE_BONE_CLUB, MOVE_FLASH, MOVE_SPLASH,
    MOVE_ACID_ARMOR, MOVE_BONEMERANG, MOVE_REST, MOVE_SHARPEN,
    MOVE_SUBSTITUTE, MOVE_MIND_READER, MOVE_SNORE,
    MOVE_PROTECT, MOVE_SPIKES, MOVE_ENDURE, MOVE_ROLLOUT,
    MOVE_SWAGGER, MOVE_SLEEP_TALK, MOVE_HIDDEN_POWER,
    MOVE_PSYCH_UP, MOVE_EXTREME_SPEED, MOVE_FOLLOW_ME,
    MOVE_TRICK, MOVE_ASSIST, MOVE_INGRAIN, MOVE_KNOCK_OFF,
    MOVE_CAMOUFLAGE, MOVE_ASTONISH, MOVE_ODOR_SLEUTH,
    MOVE_GRASS_WHISTLE, MOVE_SHEER_COLD, MOVE_MUDDY_WATER,
    MOVE_IRON_DEFENSE, MOVE_BOUNCE, 0,

    MOVE_TELEPORT, MOVE_RECOVER, MOVE_BIDE, MOVE_AMNESIA,
    MOVE_FLAIL, MOVE_TAUNT, MOVE_BULK_UP, 0,

    MOVE_MEDITATE, MOVE_AGILITY, MOVE_MIMIC, MOVE_DOUBLE_TEAM,
    MOVE_BARRAGE, MOVE_TRANSFORM, MOVE_STRUGGLE, MOVE_SCARY_FACE,
    MOVE_CHARGE, MOVE_WISH, MOVE_BRICK_BREAK, MOVE_YAWN,
    MOVE_FEATHER_DANCE, MOVE_TEETER_DANCE, MOVE_MUD_SPORT,
    MOVE_FAKE_TEARS, MOVE_WATER_SPORT, MOVE_CALM_MIND, 0,

    MOVE_POUND, MOVE_SCRATCH, MOVE_VISE_GRIP,
    MOVE_WING_ATTACK, MOVE_FLY, MOVE_BIND, MOVE_SLAM,
    MOVE_HORN_ATTACK, MOVE_WRAP, MOVE_THRASH, MOVE_TAIL_WHIP,
    MOVE_LEER, MOVE_BITE, MOVE_GROWL, MOVE_ROAR,
    MOVE_SING, MOVE_PECK, MOVE_ABSORB, MOVE_STRING_SHOT,
    MOVE_EARTHQUAKE, MOVE_FISSURE, MOVE_DIG, MOVE_TOXIC,
    MOVE_SCREECH, MOVE_METRONOME, MOVE_LICK, MOVE_CLAMP,
    MOVE_CONSTRICT, MOVE_POISON_GAS, MOVE_BUBBLE,
    MOVE_SLASH, MOVE_SPIDER_WEB, MOVE_NIGHTMARE, MOVE_CURSE,
    MOVE_FORESIGHT, MOVE_CHARM, MOVE_ATTRACT, MOVE_ROCK_SMASH,
    MOVE_UPROAR, MOVE_SPIT_UP, MOVE_SWALLOW, MOVE_TORMENT,
    MOVE_FLATTER, MOVE_ROLE_PLAY, MOVE_ENDEAVOR, MOVE_TICKLE,
    MOVE_COVET, 0
};

static const u8 sText_EmptyStatus[] = _("$$$$$$$");

static const struct BattleWindowText sTextOnWindowsInfo_Normal[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 2,
    },
    [B_WIN_VS_PLAYER] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_OPPONENT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_MULTI_PLAYER_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_VS_OUTCOME_DRAW] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 6,
    },
    [B_WIN_VS_OUTCOME_LEFT] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 6,
    },
    [B_WIN_VS_OUTCOME_RIGHT] = {
        .fillValue = PIXEL_FILL(0x0),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 6,
    },
};

static const struct BattleWindowText sTextOnWindowsInfo_Arena[] =
{
    [B_WIN_MSG] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_PROMPT] = {
        .fillValue = PIXEL_FILL(0xF),
        .fontId = FONT_NORMAL,
        .x = 1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .bgColor = 15,
        .shadowColor = 6,
    },
    [B_WIN_ACTION_MENU] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_1] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_2] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_3] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_MOVE_NAME_4] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_DUMMY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_PP_REMAINING] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 2,
        .y = 1,
        .speed = 0,
        .fgColor = 12,
        .bgColor = 14,
        .shadowColor = 11,
    },
    [B_WIN_MOVE_TYPE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_SWITCH_PROMPT] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NARROW,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_YESNO] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BOX] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [B_WIN_LEVEL_UP_BANNER] = {
        .fillValue = PIXEL_FILL(0),
        .fontId = FONT_NORMAL,
        .x = 32,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .shadowColor = 2,
    },
    [ARENA_WIN_PLAYER_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 1,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_VS] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_OPPONENT_NAME] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_MIND] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_SKILL] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_BODY] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_JUDGMENT_TITLE] = {
        .fillValue = PIXEL_FILL(0xE),
        .fontId = FONT_NORMAL,
        .x = -1,
        .y = 1,
        .speed = 0,
        .fgColor = 13,
        .bgColor = 14,
        .shadowColor = 15,
    },
    [ARENA_WIN_JUDGMENT_TEXT] = {
        .fillValue = PIXEL_FILL(0x1),
        .fontId = FONT_NORMAL,
        .x = 0,
        .y = 1,
        .speed = 1,
        .fgColor = 2,
        .bgColor = 1,
        .shadowColor = 3,
    },
};

static const struct BattleWindowText *const sBattleTextOnWindowsInfo[] =
{
    [B_WIN_TYPE_NORMAL] = sTextOnWindowsInfo_Normal,
    [B_WIN_TYPE_ARENA]  = sTextOnWindowsInfo_Arena
};

static const u8 sRecordedBattleTextSpeeds[] = {8, 4, 1, 0};

void BufferStringBattle(u16 stringID, u32 battler)
{
    s32 i;
    const u8 *stringPtr = NULL;

    gBattleMsgDataPtr = (struct BattleMsgData *)(&gBattleResources->bufferA[battler][4]);
    gLastUsedItem = gBattleMsgDataPtr->lastItem;
    gLastUsedAbility = gBattleMsgDataPtr->lastAbility;
    gBattleScripting.battler = gBattleMsgDataPtr->scrActive;
    gBattleStruct->scriptPartyIdx = gBattleMsgDataPtr->bakScriptPartyIdx;
    gBattleStruct->hpScale = gBattleMsgDataPtr->hpScale;
    gPotentialItemEffectBattler = gBattleMsgDataPtr->itemEffectBattler;
    gBattleStruct->stringMoveType = gBattleMsgDataPtr->moveType;

    for (i = 0; i < MAX_BATTLERS_COUNT; i++)
    {
        sBattlerAbilities[i] = gBattleMsgDataPtr->abilities[i];
    }
    for (i = 0; i < TEXT_BUFF_ARRAY_COUNT; i++)
    {
        gBattleTextBuff1[i] = gBattleMsgDataPtr->textBuffs[0][i];
        gBattleTextBuff2[i] = gBattleMsgDataPtr->textBuffs[1][i];
        gBattleTextBuff3[i] = gBattleMsgDataPtr->textBuffs[2][i];
    }

    switch (stringID)
    {
    case STRINGID_INTROMSG: // first battle msg
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
        {
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                {
                    stringPtr = sText_TwoTrainersWantToBattle;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                        stringPtr = sText_TwoLinkTrainersWantToBattlePause;
                    else
                        stringPtr = sText_TwoLinkTrainersWantToBattle;
                }
                else
                {
                    if (gTrainerBattleOpponent_A == TRAINER_UNION_ROOM)
                        stringPtr = sText_Trainer1WantsToBattle;
                    else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
                        stringPtr = sText_LinkTrainerWantsToBattlePause;
                    else
                        stringPtr = sText_LinkTrainerWantsToBattle;
                }
            }
            else
            {
                if (BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sText_Trainer1WantsToBattle;
                else if (gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER))
                    stringPtr = sText_TwoTrainersWantToBattle;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_TwoTrainersWantToBattle;
                else
                    stringPtr = sText_Trainer1WantsToBattle;
            }
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_LEGENDARY)
                stringPtr = sText_LegendaryPkmnAppeared;
            else if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE && IsValidForBattle(&gEnemyParty[gBattlerPartyIndexes[GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT)]]))
                stringPtr = sText_TwoWildPkmnAppeared;
            else if (gBattleTypeFlags & BATTLE_TYPE_WALLY_TUTORIAL)
                stringPtr = sText_WildPkmnAppearedPause;
            else
                stringPtr = sText_WildPkmnAppeared;
        }
        break;
    case STRINGID_INTROSENDOUT: // poke first send-out
        if (GetBattlerSide(battler) == B_SIDE_PLAYER)
        {
            if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE && IsValidForBattle(&gPlayerParty[gBattlerPartyIndexes[BATTLE_PARTNER(battler)]]))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                    stringPtr = sText_InGamePartnerSentOutZGoN;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_GoTwoPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    stringPtr = sText_LinkPartnerSentOutPkmnGoPkmn;
                else
                    stringPtr = sText_GoTwoPkmn;
            }
            else
            {
                stringPtr = sText_GoPkmn;
            }
        }
        else
        {
            if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE && IsValidForBattle(&gEnemyParty[gBattlerPartyIndexes[BATTLE_PARTNER(battler)]]))
            {
                if (BATTLE_TWO_VS_ONE_OPPONENT)
                    stringPtr = sText_Trainer1SentOutTwoPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                    stringPtr = sText_TwoTrainersSentPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                    stringPtr = sText_TwoTrainersSentPkmn;
                else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    stringPtr = sText_TwoLinkTrainersSentOutPkmn;
                else if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                    stringPtr = sText_LinkTrainerSentOutTwoPkmn;
                else
                    stringPtr = sText_Trainer1SentOutTwoPkmn;
            }
            else
            {
                if (!(gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK)))
                    stringPtr = sText_Trainer1SentOutPkmn;
                else if (gTrainerBattleOpponent_A == TRAINER_UNION_ROOM)
                    stringPtr = sText_Trainer1SentOutPkmn;
                else
                    stringPtr = sText_LinkTrainerSentOutPkmn;
            }
        }
        break;
    case STRINGID_RETURNMON: // sending poke to ball msg
        if (GetBattlerSide(battler) == B_SIDE_PLAYER)
        {
            if (*(&gBattleStruct->hpScale) == 0)
                stringPtr = sText_PkmnThatsEnough;
            else if (*(&gBattleStruct->hpScale) == 1 || gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
                stringPtr = sText_PkmnComeBack;
            else if (*(&gBattleStruct->hpScale) == 2)
                stringPtr = sText_PkmnOkComeBack;
            else
                stringPtr = sText_PkmnGoodComeBack;
        }
        else
        {
            if (gTrainerBattleOpponent_A == TRAINER_LINK_OPPONENT || gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
            {
                if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                    stringPtr = sText_LinkTrainer2WithdrewPkmn;
                else
                    stringPtr = sText_LinkTrainer1WithdrewPkmn;
            }
            else
            {
                stringPtr = sText_Trainer1WithdrewPkmn;
            }
        }
        break;
    case STRINGID_SWITCHINMON: // switch-in msg
        if (GetBattlerSide(gBattleScripting.battler) == B_SIDE_PLAYER)
        {
            if (*(&gBattleStruct->hpScale) == 0 || gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
                stringPtr = sText_GoPkmn2;
            else if (*(&gBattleStruct->hpScale) == 1)
                stringPtr = sText_DoItPkmn;
            else if (*(&gBattleStruct->hpScale) == 2)
                stringPtr = sText_GoForItPkmn;
            else
                stringPtr = sText_YourFoesWeakGetEmPkmn;
        }
        else
        {
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                {
                    if (gBattleScripting.battler == 1)
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    else
                        stringPtr = sText_Trainer2SentOutPkmn;
                }
                else
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                        stringPtr = sText_LinkTrainerMultiSentOutPkmn;
                    else if (gTrainerBattleOpponent_A == TRAINER_UNION_ROOM)
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    else
                        stringPtr = sText_LinkTrainerSentOutPkmn2;
                }
            }
            else
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
                {
                    if (gBattleScripting.battler == 1)
                        stringPtr = sText_Trainer1SentOutPkmn2;
                    else
                        stringPtr = sText_Trainer2SentOutPkmn;
                }
                else
                {
                    stringPtr = sText_Trainer1SentOutPkmn2;
                }
            }
        }
        break;
    case STRINGID_USEDMOVE: // pokemon used a move msg
        if (gBattleStruct->zmove.active && gBattleStruct->zmove.activeSplit != SPLIT_STATUS)
            StringCopy(gBattleTextBuff3, GetZMoveName(gBattleMsgDataPtr->currentMove));
        else if (IsMaxMove(gBattleMsgDataPtr->currentMove))
            StringCopy(gBattleTextBuff3, GetMaxMoveName(gBattleMsgDataPtr->currentMove));
        else if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT)
            StringCopy(gBattleTextBuff3, sATypeMove_Table[*(&gBattleStruct->stringMoveType)]);
        else
            StringCopy(gBattleTextBuff3, gMoveNames[gBattleMsgDataPtr->currentMove]);

        stringPtr = sText_AttackerUsedX;
        break;
    case STRINGID_BATTLEEND: // battle end
        if (gBattleTextBuff1[0] & B_OUTCOME_LINK_BATTLE_RAN)
        {
            gBattleTextBuff1[0] &= ~(B_OUTCOME_LINK_BATTLE_RAN);
            if (GetBattlerSide(battler) == B_SIDE_OPPONENT && gBattleTextBuff1[0] != B_OUTCOME_DREW)
                gBattleTextBuff1[0] ^= (B_OUTCOME_LOST | B_OUTCOME_WON);

            if (gBattleTextBuff1[0] == B_OUTCOME_LOST || gBattleTextBuff1[0] == B_OUTCOME_DREW)
                stringPtr = sText_GotAwaySafely;
            else if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
                stringPtr = sText_TwoWildFled;
            else
                stringPtr = sText_WildFled;
        }
        else
        {
            if (GetBattlerSide(battler) == B_SIDE_OPPONENT && gBattleTextBuff1[0] != B_OUTCOME_DREW)
                gBattleTextBuff1[0] ^= (B_OUTCOME_LOST | B_OUTCOME_WON);

            if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    if (gBattleTypeFlags & BATTLE_TYPE_TOWER_LINK_MULTI)
                        stringPtr = sText_TwoInGameTrainersDefeated;
                    else
                        stringPtr = sText_TwoLinkTrainersDefeated;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostToTwo;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawVsTwo;
                    break;
                }
            }
            else if (gTrainerBattleOpponent_A == TRAINER_UNION_ROOM)
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    stringPtr = sText_PlayerDefeatedLinkTrainerTrainer1;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostAgainstTrainer1;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawTrainer1;
                    break;
                }
            }
            else
            {
                switch (gBattleTextBuff1[0])
                {
                case B_OUTCOME_WON:
                    stringPtr = sText_PlayerDefeatedLinkTrainer;
                    break;
                case B_OUTCOME_LOST:
                    stringPtr = sText_PlayerLostAgainstLinkTrainer;
                    break;
                case B_OUTCOME_DREW:
                    stringPtr = sText_PlayerBattledToDrawLinkTrainer;
                    break;
                }
            }
        }
        break;
    case STRINGID_TRAINERSLIDE:
        stringPtr = gBattleStruct->trainerSlideMsg;
        break;
    default: // load a string from the table
        if (stringID >= BATTLESTRINGS_COUNT)
        {
            gDisplayedStringBattle[0] = EOS;
            return;
        }
        else
        {
            stringPtr = gBattleStringsTable[stringID - BATTLESTRINGS_TABLE_START];
        }
        break;
    }

    BattleStringExpandPlaceholdersToDisplayedString(stringPtr);
}

u32 BattleStringExpandPlaceholdersToDisplayedString(const u8 *src)
{
    return BattleStringExpandPlaceholders(src, gDisplayedStringBattle);
}

static const u8 *TryGetStatusString(u8 *src)
{
    u32 i;
    u8 status[8];
    u32 chars1, chars2;
    u8 *statusPtr;

    memcpy(status, sText_EmptyStatus, min(ARRAY_COUNT(status), ARRAY_COUNT(sText_EmptyStatus)));

    statusPtr = status;
    for (i = 0; i < ARRAY_COUNT(status); i++)
    {
        if (*src == EOS) break; // one line required to match -g
        *statusPtr = *src;
        src++;
        statusPtr++;
    }

    chars1 = *(u32 *)(&status[0]);
    chars2 = *(u32 *)(&status[4]);

    for (i = 0; i < ARRAY_COUNT(gStatusConditionStringsTable); i++)
    {
        if (chars1 == *(u32 *)(&gStatusConditionStringsTable[i][0][0])
            && chars2 == *(u32 *)(&gStatusConditionStringsTable[i][0][4]))
            return gStatusConditionStringsTable[i][1];
    }
    return NULL;
}

static void GetBattlerNick(u32 battler, u8 *dst)
{
    struct Pokemon *mon, *illusionMon;

    if (GetBattlerSide(battler) == B_SIDE_PLAYER)
        mon = &gPlayerParty[gBattlerPartyIndexes[battler]];
    else
        mon = &gEnemyParty[gBattlerPartyIndexes[battler]];

    illusionMon = GetIllusionMonPtr(battler);
    if (illusionMon != NULL)
        mon = illusionMon;
    GetMonData(mon, MON_DATA_NICKNAME, dst);
    StringGet_Nickname(dst);
}

#define HANDLE_NICKNAME_STRING_CASE(battler)                          \
    if (GetBattlerSide(battler) != B_SIDE_PLAYER)                     \
    {                                                                   \
        if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)                     \
            toCpy = sText_FoePkmnPrefix;                                \
        else                                                            \
            toCpy = sText_WildPkmnPrefix;                               \
        while (*toCpy != EOS)                                           \
        {                                                               \
            dst[dstID] = *toCpy;                                        \
            dstID++;                                                    \
            toCpy++;                                                    \
        }                                                               \
    }                                                                   \
    GetBattlerNick(battler, text);                                    \
    toCpy = text;

static const u8 *BattleStringGetOpponentNameByTrainerId(u16 trainerId, u8 *text, u8 multiplayerId, u8 battler)
{
    const u8 *toCpy = NULL;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
    {
        u32 i;
        for (i = 0; i < ARRAY_COUNT(gBattleResources->secretBase->trainerName); i++)
            text[i] = gBattleResources->secretBase->trainerName[i];
        text[i] = EOS;
        ConvertInternationalString(text, gBattleResources->secretBase->language);
        toCpy = text;
    }
    else if (trainerId == TRAINER_UNION_ROOM)
    {
        toCpy = gLinkPlayers[multiplayerId ^ BIT_SIDE].name;
    }
    else if (trainerId == TRAINER_LINK_OPPONENT)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_MULTI)
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battler)].name;
        else
            toCpy = gLinkPlayers[GetBattlerMultiplayerId(battler) & BIT_SIDE].name;
    }
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
    {
        CopyFrontierBrainTrainerName(text);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
    {
        GetFrontierTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
    {
        GetTrainerHillTrainerName(text, trainerId);
        toCpy = text;
    }
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
    {
        GetEreaderTrainerName(text);
        toCpy = text;
    }
    else
    {
        toCpy = gTrainers[trainerId].trainerName;
    }

    return toCpy;
}

static const u8 *BattleStringGetOpponentName(u8 *text, u8 multiplayerId, u8 battler)
{
    const u8 *toCpy = NULL;

    switch (GetBattlerPosition(battler))
    {
    case B_POSITION_OPPONENT_LEFT:
        toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_A, text, multiplayerId, battler);
        break;
    case B_POSITION_OPPONENT_RIGHT:
        if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_MULTI) && !BATTLE_TWO_VS_ONE_OPPONENT)
            toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_B, text, multiplayerId, battler);
        else
            toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_A, text, multiplayerId, battler);
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetPlayerName(u8 *text, u8 battler)
{
    const u8 *toCpy = NULL;

    switch (GetBattlerPosition(battler))
    {
    case B_POSITION_PLAYER_LEFT:
        if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            toCpy = gLinkPlayers[0].name;
        else
            toCpy = gSaveBlock2Ptr->playerName;
        break;
    case B_POSITION_PLAYER_RIGHT:
        if (((gBattleTypeFlags & BATTLE_TYPE_RECORDED) && !(gBattleTypeFlags & (BATTLE_TYPE_MULTI | BATTLE_TYPE_INGAME_PARTNER)))
            || gTestRunnerEnabled)
        {
            toCpy = gLinkPlayers[0].name;
        }
        else if ((gBattleTypeFlags & BATTLE_TYPE_LINK) && gBattleTypeFlags & (BATTLE_TYPE_RECORDED | BATTLE_TYPE_MULTI))
        {
            toCpy = gLinkPlayers[2].name;
        }
        else if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
        {
            GetFrontierTrainerName(text, gPartnerTrainerId);
            toCpy = text;
        }
        else
        {
            toCpy = gSaveBlock2Ptr->playerName;
        }
        break;
    }

    return toCpy;
}

static const u8 *BattleStringGetTrainerName(u8 *text, u8 multiplayerId, u8 battler)
{
    if (GetBattlerSide(battler) == B_SIDE_PLAYER)
        return BattleStringGetPlayerName(text, battler);
    else
        return BattleStringGetOpponentName(text, multiplayerId, battler);
}

static const u8 *BattleStringGetOpponentClassByTrainerId(u16 trainerId)
{
    const u8 *toCpy;

    if (gBattleTypeFlags & BATTLE_TYPE_SECRET_BASE)
        toCpy = gTrainerClassNames[GetSecretBaseTrainerClass()];
    else if (trainerId == TRAINER_UNION_ROOM)
        toCpy = gTrainerClassNames[GetUnionRoomTrainerClass()];
    else if (trainerId == TRAINER_FRONTIER_BRAIN)
        toCpy = gTrainerClassNames[GetFrontierBrainTrainerClass()];
    else if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        toCpy = gTrainerClassNames[GetFrontierOpponentClass(trainerId)];
    else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
        toCpy = gTrainerClassNames[GetTrainerHillOpponentClass(trainerId)];
    else if (gBattleTypeFlags & BATTLE_TYPE_EREADER_TRAINER)
        toCpy = gTrainerClassNames[GetEreaderTrainerClassId()];
    else
        toCpy = gTrainerClassNames[gTrainers[trainerId].trainerClass];

    return toCpy;
}

// Ensure the defined length for an item name can contain the full defined length of a berry name.
// This ensures that custom Enigma Berry names will fit in the text buffer at the top of BattleStringExpandPlaceholders.
STATIC_ASSERT(BERRY_NAME_LENGTH + ARRAY_COUNT(sText_BerrySuffix) <= ITEM_NAME_LENGTH, BerryNameTooLong);

u32 BattleStringExpandPlaceholders(const u8 *src, u8 *dst)
{
    u32 dstID = 0; // if they used dstID, why not use srcID as well?
    const u8 *toCpy = NULL;
    // This buffer may hold either the name of a trainer, pokemon, or item.
    u8 text[max(max(max(32, TRAINER_NAME_LENGTH + 1), POKEMON_NAME_LENGTH + 1), ITEM_NAME_LENGTH)];
    u8 multiplayerId;

    if (gBattleTypeFlags & BATTLE_TYPE_RECORDED_LINK)
        multiplayerId = gRecordedBattleMultiplayerId;
    else
        multiplayerId = GetMultiplayerId();

    while (*src != EOS)
    {
        toCpy = NULL;
        if (*src == PLACEHOLDER_BEGIN)
        {
            src++;
            switch (*src)
            {
            case B_TXT_BUFF1:
                if (gBattleTextBuff1[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff1, gStringVar1);
                    toCpy = gStringVar1;
                }
                else
                {
                    toCpy = TryGetStatusString(gBattleTextBuff1);
                    if (toCpy == NULL)
                        toCpy = gBattleTextBuff1;
                }
                break;
            case B_TXT_BUFF2:
                if (gBattleTextBuff2[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff2, gStringVar2);
                    toCpy = gStringVar2;
                }
                else
                    toCpy = gBattleTextBuff2;
                break;
            case B_TXT_BUFF3:
                if (gBattleTextBuff3[0] == B_BUFF_PLACEHOLDER_BEGIN)
                {
                    ExpandBattleTextBuffPlaceholders(gBattleTextBuff3, gStringVar3);
                    toCpy = gStringVar3;
                }
                else
                    toCpy = gBattleTextBuff3;
                break;
            case B_TXT_COPY_VAR_1:
                toCpy = gStringVar1;
                break;
            case B_TXT_COPY_VAR_2:
                toCpy = gStringVar2;
                break;
            case B_TXT_COPY_VAR_3:
                toCpy = gStringVar3;
                break;
            case B_TXT_PLAYER_MON1_NAME: // first player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON1_NAME: // first enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), text);
                toCpy = text;
                break;
            case B_TXT_PLAYER_MON2_NAME: // second player poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_OPPONENT_MON2_NAME: // second enemy poke name
                GetBattlerNick(GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT), text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON1_NAME: // link first player poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id, text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON1_NAME: // link first opponent poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 1, text);
                toCpy = text;
                break;
            case B_TXT_LINK_PLAYER_MON2_NAME: // link second player poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 2, text);
                toCpy = text;
                break;
            case B_TXT_LINK_OPPONENT_MON2_NAME: // link second opponent poke name
                GetBattlerNick(gLinkPlayers[multiplayerId].id ^ 3, text);
                toCpy = text;
                break;
            case B_TXT_ATK_NAME_WITH_PREFIX_MON1: // Unused, to change into sth else.
                break;
            case B_TXT_ATK_PARTNER_NAME: // attacker partner name
                GetBattlerNick(BATTLE_PARTNER(gBattlerAttacker), text);
                toCpy = text;
                break;
            case B_TXT_ATK_NAME_WITH_PREFIX: // attacker name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerAttacker)
                break;
            case B_TXT_DEF_NAME_WITH_PREFIX: // target name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattlerTarget)
                break;
            case B_TXT_DEF_NAME: // target name
                GetBattlerNick(gBattlerTarget, text);
                toCpy = text;
                break;
            case B_TXT_EFF_NAME_WITH_PREFIX: // effect battler name with prefix
                HANDLE_NICKNAME_STRING_CASE(gEffectBattler)
                break;
            case B_TXT_SCR_ACTIVE_NAME_WITH_PREFIX: // scripting active battler name with prefix
                HANDLE_NICKNAME_STRING_CASE(gBattleScripting.battler)
                break;
            case B_TXT_CURRENT_MOVE: // current move name
                if (gBattleStruct->zmove.active)
                    toCpy = GetZMoveName(gBattleMsgDataPtr->currentMove);
                else if (gBattleMsgDataPtr->currentMove >= MOVES_COUNT)
                    toCpy = sATypeMove_Table[gBattleStruct->stringMoveType];
                else
                    toCpy = gMoveNames[gBattleMsgDataPtr->currentMove];
                break;
            case B_TXT_LAST_MOVE: // originally used move name
                if (gBattleStruct->zmove.active)
                    toCpy = GetZMoveName(gBattleMsgDataPtr->originallyUsedMove);
                else if (gBattleMsgDataPtr->originallyUsedMove >= MOVES_COUNT)
                    toCpy = sATypeMove_Table[gBattleStruct->stringMoveType];
                else
                    toCpy = gMoveNames[gBattleMsgDataPtr->originallyUsedMove];
                break;
            case B_TXT_LAST_ITEM: // last used item
                if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
                {
                    if (gLastUsedItem == ITEM_ENIGMA_BERRY_E_READER)
                    {
                        if (!(gBattleTypeFlags & BATTLE_TYPE_MULTI))
                        {
                            if ((gBattleScripting.multiplayerId != 0 && (gPotentialItemEffectBattler & BIT_SIDE))
                                || (gBattleScripting.multiplayerId == 0 && !(gPotentialItemEffectBattler & BIT_SIDE)))
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, sText_BerrySuffix);
                                toCpy = text;
                            }
                            else
                            {
                                toCpy = sText_EnigmaBerry;
                            }
                        }
                        else
                        {
                            if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                            {
                                StringCopy(text, gEnigmaBerries[gPotentialItemEffectBattler].name);
                                StringAppend(text, sText_BerrySuffix);
                                toCpy = text;
                            }
                            else
                                toCpy = sText_EnigmaBerry;
                        }
                    }
                    else
                    {
                        CopyItemName(gLastUsedItem, text);
                        toCpy = text;
                    }
                }
                else
                {
                    CopyItemName(gLastUsedItem, text);
                    toCpy = text;
                }
                break;
            case B_TXT_LAST_ABILITY: // last used ability
                toCpy = gAbilityNames[gLastUsedAbility];
                break;
            case B_TXT_ATK_ABILITY: // attacker ability
                toCpy = gAbilityNames[sBattlerAbilities[gBattlerAttacker]];
                break;
            case B_TXT_DEF_ABILITY: // target ability
                toCpy = gAbilityNames[sBattlerAbilities[gBattlerTarget]];
                break;
            case B_TXT_SCR_ACTIVE_ABILITY: // scripting active ability
                toCpy = gAbilityNames[sBattlerAbilities[gBattleScripting.battler]];
                break;
            case B_TXT_EFF_ABILITY: // effect battler ability
                toCpy = gAbilityNames[sBattlerAbilities[gEffectBattler]];
                break;
            case B_TXT_TRAINER1_CLASS: // trainer class name
                toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_A);
                break;
            case B_TXT_TRAINER1_NAME: // trainer1 name
                toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_A, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT));
                break;
            case B_TXT_LINK_PLAYER_NAME: // link player name
                toCpy = gLinkPlayers[multiplayerId].name;
                break;
            case B_TXT_LINK_PARTNER_NAME: // link partner name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_PARTNER(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT1_NAME: // link opponent 1 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_OPPOSITE(gLinkPlayers[multiplayerId].id))].name;
                break;
            case B_TXT_LINK_OPPONENT2_NAME: // link opponent 2 name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(BATTLE_PARTNER(BATTLE_OPPOSITE(gLinkPlayers[multiplayerId].id)))].name;
                break;
            case B_TXT_LINK_SCR_TRAINER_NAME: // link scripting active name
                toCpy = gLinkPlayers[GetBattlerMultiplayerId(gBattleScripting.battler)].name;
                break;
            case B_TXT_PLAYER_NAME: // player name
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_LEFT));
                break;
            case B_TXT_TRAINER1_LOSE_TEXT: // trainerA lose text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, gTrainerBattleOpponent_A);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, gTrainerBattleOpponent_A);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerALoseText();
                }
                break;
            case B_TXT_TRAINER1_WIN_TEXT: // trainerA win text
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, gTrainerBattleOpponent_A);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, gTrainerBattleOpponent_A);
                    toCpy = gStringVar4;
                }
                break;
            case B_TXT_26: // ?
                if (GetBattlerSide(gBattleScripting.battler) != B_SIDE_PLAYER)
                {
                    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                        toCpy = sText_FoePkmnPrefix;
                    else
                        toCpy = sText_WildPkmnPrefix;
                    while (*toCpy != EOS)
                    {
                        dst[dstID] = *toCpy;
                        dstID++;
                        toCpy++;
                    }
                    GetMonData(&gEnemyParty[gBattleStruct->scriptPartyIdx], MON_DATA_NICKNAME, text);
                }
                else
                {
                    GetMonData(&gPlayerParty[gBattleStruct->scriptPartyIdx], MON_DATA_NICKNAME, text);
                }
                StringGet_Nickname(text);
                toCpy = text;
                break;
            case B_TXT_PC_CREATOR_NAME: // lanette pc
                if (FlagGet(FLAG_SYS_PC_LANETTE))
                    toCpy = sText_Lanettes;
                else
                    toCpy = sText_Someones;
                break;
            case B_TXT_ATK_PREFIX2:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix2;
                else
                    toCpy = sText_FoePkmnPrefix3;
                break;
            case B_TXT_DEF_PREFIX2:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix2;
                else
                    toCpy = sText_FoePkmnPrefix3;
                break;
            case B_TXT_ATK_PREFIX1:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix;
                else
                    toCpy = sText_FoePkmnPrefix2;
                break;
            case B_TXT_DEF_PREFIX1:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix;
                else
                    toCpy = sText_FoePkmnPrefix2;
                break;
            case B_TXT_ATK_PREFIX3:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix3;
                else
                    toCpy = sText_FoePkmnPrefix4;
                break;
            case B_TXT_DEF_PREFIX3:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_AllyPkmnPrefix3;
                else
                    toCpy = sText_FoePkmnPrefix4;
                break;
            case B_TXT_TRAINER2_CLASS:
                toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_B);
                break;
            case B_TXT_TRAINER2_NAME:
                toCpy = BattleStringGetOpponentNameByTrainerId(gTrainerBattleOpponent_B, text, multiplayerId, GetBattlerAtPosition(B_POSITION_OPPONENT_RIGHT));
                break;
            case B_TXT_TRAINER2_LOSE_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_WON_TEXT, gTrainerBattleOpponent_B);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_WON, gTrainerBattleOpponent_B);
                    toCpy = gStringVar4;
                }
                else
                {
                    toCpy = GetTrainerBLoseText();
                }
                break;
            case B_TXT_TRAINER2_WIN_TEXT:
                if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
                {
                    CopyFrontierTrainerText(FRONTIER_PLAYER_LOST_TEXT, gTrainerBattleOpponent_B);
                    toCpy = gStringVar4;
                }
                else if (gBattleTypeFlags & BATTLE_TYPE_TRAINER_HILL)
                {
                    CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_PLAYER_LOST, gTrainerBattleOpponent_B);
                    toCpy = gStringVar4;
                }
                break;
            case B_TXT_PARTNER_CLASS:
                toCpy = gTrainerClassNames[GetFrontierOpponentClass(gPartnerTrainerId)];
                break;
            case B_TXT_PARTNER_NAME:
                toCpy = BattleStringGetPlayerName(text, GetBattlerAtPosition(B_POSITION_PLAYER_RIGHT));
                break;
            case B_TXT_ATK_TRAINER_NAME:
                toCpy = BattleStringGetTrainerName(text, multiplayerId, gBattlerAttacker);
                break;
            case B_TXT_ATK_TRAINER_CLASS:
                switch (GetBattlerPosition(gBattlerAttacker))
                {
                case B_POSITION_PLAYER_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
                        toCpy = gTrainerClassNames[GetFrontierOpponentClass(gPartnerTrainerId)];
                    break;
                case B_POSITION_OPPONENT_LEFT:
                    toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_A);
                    break;
                case B_POSITION_OPPONENT_RIGHT:
                    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS && !BATTLE_TWO_VS_ONE_OPPONENT)
                        toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_B);
                    else
                        toCpy = BattleStringGetOpponentClassByTrainerId(gTrainerBattleOpponent_A);
                    break;
                }
                break;
            case B_TXT_ATK_TEAM1:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_ATK_TEAM2:
                if (GetBattlerSide(gBattlerAttacker) == B_SIDE_PLAYER)
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            case B_TXT_DEF_TEAM1:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_Your1;
                else
                    toCpy = sText_Opposing1;
                break;
            case B_TXT_DEF_TEAM2:
                if (GetBattlerSide(gBattlerTarget) == B_SIDE_PLAYER)
                    toCpy = sText_Your2;
                else
                    toCpy = sText_Opposing2;
                break;
            }

            if (toCpy != NULL)
            {
                while (*toCpy != EOS)
                {
                    dst[dstID] = *toCpy;
                    dstID++;
                    toCpy++;
                }
            }

            if (*src == B_TXT_TRAINER1_LOSE_TEXT || *src == B_TXT_TRAINER2_LOSE_TEXT
                || *src == B_TXT_TRAINER1_WIN_TEXT || *src == B_TXT_TRAINER2_WIN_TEXT)
            {
                dst[dstID] = EXT_CTRL_CODE_BEGIN;
                dstID++;
                dst[dstID] = EXT_CTRL_CODE_PAUSE_UNTIL_PRESS;
                dstID++;
            }
        }
        else
        {
            dst[dstID] = *src;
            dstID++;
        }
        src++;
    }

    dst[dstID] = *src;
    dstID++;

    return dstID;
}

static void IllusionNickHack(u32 battler, u32 partyId, u8 *dst)
{
    s32 id, i;
    // we know it's gEnemyParty
    struct Pokemon *mon = &gEnemyParty[partyId], *partnerMon;

    if (GetMonAbility(mon) == ABILITY_ILLUSION)
    {
        if (IsBattlerAlive(BATTLE_PARTNER(battler)))
            partnerMon = &gEnemyParty[gBattlerPartyIndexes[BATTLE_PARTNER(battler)]];
        else
            partnerMon = mon;

        // Find last alive non-egg pokemon.
        for (i = PARTY_SIZE - 1; i >= 0; i--)
        {
            id = i;
            if (GetMonData(&gEnemyParty[id], MON_DATA_SANITY_HAS_SPECIES)
                && GetMonData(&gEnemyParty[id], MON_DATA_HP)
                && &gEnemyParty[id] != mon
                && &gEnemyParty[id] != partnerMon)
            {
                GetMonData(&gEnemyParty[id], MON_DATA_NICKNAME, dst);
                return;
            }
        }
    }

    GetMonData(mon, MON_DATA_NICKNAME, dst);
}

void ExpandBattleTextBuffPlaceholders(const u8 *src, u8 *dst)
{
    u32 srcID = 1;
    u32 value = 0;
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    u16 hword;

    *dst = EOS;
    while (src[srcID] != B_BUFF_EOS)
    {
        switch (src[srcID])
        {
        case B_BUFF_STRING: // battle string
            hword = T1_READ_16(&src[srcID + 1]);
            StringAppend(dst, gBattleStringsTable[hword - BATTLESTRINGS_TABLE_START]);
            srcID += 3;
            break;
        case B_BUFF_NUMBER: // int to string
            switch (src[srcID + 1])
            {
            case 1:
                value = src[srcID + 3];
                break;
            case 2:
                value = T1_READ_16(&src[srcID + 3]);
                break;
            case 4:
                value = T1_READ_32(&src[srcID + 3]);
                break;
            }
            ConvertIntToDecimalStringN(dst, value, STR_CONV_MODE_LEFT_ALIGN, src[srcID + 2]);
            srcID += src[srcID + 1] + 3;
            break;
        case B_BUFF_MOVE: // move name
            StringAppend(dst, gMoveNames[T1_READ_16(&src[srcID + 1])]);
            srcID += 3;
            break;
        case B_BUFF_TYPE: // type name
            StringAppend(dst, gTypeNames[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_MON_NICK_WITH_PREFIX: // poke nick with prefix
            if (GetBattlerSide(src[srcID + 1]) == B_SIDE_PLAYER)
            {
                GetMonData(&gPlayerParty[src[srcID + 2]], MON_DATA_NICKNAME, nickname);
            }
            else
            {
                if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
                    StringAppend(dst, sText_FoePkmnPrefix);
                else
                    StringAppend(dst, sText_WildPkmnPrefix);

                GetMonData(&gEnemyParty[src[srcID + 2]], MON_DATA_NICKNAME, nickname);
            }
            StringGet_Nickname(nickname);
            StringAppend(dst, nickname);
            srcID += 3;
            break;
        case B_BUFF_STAT: // stats
            StringAppend(dst, gStatNamesTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_SPECIES: // species name
            StringCopy(dst, GetSpeciesName(T1_READ_16(&src[srcID + 1])));
            srcID += 3;
            break;
        case B_BUFF_MON_NICK: // poke nick without prefix
            if (src[srcID + 2] == gBattlerPartyIndexes[src[srcID + 1]])
            {
                GetBattlerNick(src[srcID + 1], dst);
            }
            else if (gBattleScripting.illusionNickHack) // for STRINGID_ENEMYABOUTTOSWITCHPKMN
            {
                gBattleScripting.illusionNickHack = 0;
                IllusionNickHack(src[srcID + 1], src[srcID + 2], dst);
                StringGet_Nickname(dst);
            }
            else
            {
                if (GetBattlerSide(src[srcID + 1]) == B_SIDE_PLAYER)
                    GetMonData(&gPlayerParty[src[srcID + 2]], MON_DATA_NICKNAME, dst);
                else
                    GetMonData(&gEnemyParty[src[srcID + 2]], MON_DATA_NICKNAME, dst);
                StringGet_Nickname(dst);
            }
            srcID += 3;
            break;
        case B_BUFF_NEGATIVE_FLAVOR: // flavor table
            StringAppend(dst, gPokeblockWasTooXStringTable[src[srcID + 1]]);
            srcID += 2;
            break;
        case B_BUFF_ABILITY: // ability names
            StringAppend(dst, gAbilityNames[T1_READ_16(&src[srcID + 1])]);
            srcID += 3;
            break;
        case B_BUFF_ITEM: // item name
            hword = T1_READ_16(&src[srcID + 1]);
            if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            {
                if (hword == ITEM_ENIGMA_BERRY_E_READER)
                {
                    if (gLinkPlayers[gBattleScripting.multiplayerId].id == gPotentialItemEffectBattler)
                    {
                        StringCopy(dst, gEnigmaBerries[gPotentialItemEffectBattler].name);
                        StringAppend(dst, sText_BerrySuffix);
                    }
                    else
                    {
                        StringAppend(dst, sText_EnigmaBerry);
                    }
                }
                else
                {
                    CopyItemName(hword, dst);
                }
            }
            else
            {
                CopyItemName(hword, dst);
            }
            srcID += 3;
            break;
        }
    }
}

// Loads one of two text strings into the provided buffer. This is functionally
// unused, since the value loaded into the buffer is not read; it loaded one of
// two particles (either "?" or "?") which works in tandem with ChooseTypeOfMoveUsedString
// below to effect changes in the meaning of the line.
static void UNUSED ChooseMoveUsedParticle(u8 *textBuff)
{
    s32 counter = 0;
    u32 i = 0;

    while (counter != MAX_MON_MOVES)
    {
        if (sGrammarMoveUsedTable[i] == 0)
            counter++;
        if (sGrammarMoveUsedTable[i++] == gBattleMsgDataPtr->currentMove)
            break;
    }

    if (counter >= 0)
    {
        if (counter <= 2)
            StringCopy(textBuff, sText_SpaceIs); // is
        else if (counter <= MAX_MON_MOVES)
            StringCopy(textBuff, sText_ApostropheS); // 's
    }
}

// Appends "!" to the text buffer `dst`. In the original Japanese this looked
// into the table of moves at sGrammarMoveUsedTable and varied the line accordingly.
//
// sText_ExclamationMark was a plain "!", used for any attack not on the list.
// It resulted in the translation "<NAME>'s <ATTACK>!".
//
// sText_ExclamationMark2 was "? ????!". This resulted in the translation
// "<NAME> used <ATTACK>!", which was used for all attacks in English.
//
// sText_ExclamationMark3 was "??!". This was used for those moves whose
// names were verbs, such as Recover, and resulted in translations like "<NAME>
// recovered itself!".
//
// sText_ExclamationMark4 was "? ??!" This resulted in a translation of
// "<NAME> did an <ATTACK>!".
//
// sText_ExclamationMark5 was " ????!" This resulted in a translation of
// "<NAME>'s <ATTACK> attack!".
static void UNUSED ChooseTypeOfMoveUsedString(u8 *dst)
{
    s32 counter = 0;
    s32 i = 0;

    while (*dst != EOS)
        dst++;

    while (counter != MAX_MON_MOVES)
    {
        if (sGrammarMoveUsedTable[i] == MOVE_NONE)
            counter++;
        if (sGrammarMoveUsedTable[i++] == gBattleMsgDataPtr->currentMove)
            break;
    }

    switch (counter)
    {
    case 0:
        StringCopy(dst, sText_ExclamationMark);
        break;
    case 1:
        StringCopy(dst, sText_ExclamationMark2);
        break;
    case 2:
        StringCopy(dst, sText_ExclamationMark3);
        break;
    case 3:
        StringCopy(dst, sText_ExclamationMark4);
        break;
    case 4:
        StringCopy(dst, sText_ExclamationMark5);
        break;
    }
}

void BattlePutTextOnWindow(const u8 *text, u8 windowId)
{
    const struct BattleWindowText *textInfo = sBattleTextOnWindowsInfo[gBattleScripting.windowsType];
    bool32 copyToVram;
    struct TextPrinterTemplate printerTemplate;
    u8 speed;

    if (windowId & B_WIN_COPYTOVRAM)
    {
        windowId &= ~B_WIN_COPYTOVRAM;
        copyToVram = FALSE;
    }
    else
    {
        FillWindowPixelBuffer(windowId, textInfo[windowId].fillValue);
        copyToVram = TRUE;
    }

    printerTemplate.currentChar = text;
    printerTemplate.windowId = windowId;
    printerTemplate.fontId = textInfo[windowId].fontId;
    printerTemplate.x = textInfo[windowId].x;
    printerTemplate.y = textInfo[windowId].y;
    printerTemplate.currentX = printerTemplate.x;
    printerTemplate.currentY = printerTemplate.y;
    printerTemplate.letterSpacing = textInfo[windowId].letterSpacing;
    printerTemplate.lineSpacing = textInfo[windowId].lineSpacing;
    printerTemplate.unk = 0;
    printerTemplate.fgColor = textInfo[windowId].fgColor;
    printerTemplate.bgColor = textInfo[windowId].bgColor;
    printerTemplate.shadowColor = textInfo[windowId].shadowColor;

    if (printerTemplate.x == 0xFF)
    {
        u32 width = GetBattleWindowTemplatePixelWidth(gBattleScripting.windowsType, windowId);
        s32 alignX = GetStringCenterAlignXOffsetWithLetterSpacing(printerTemplate.fontId, printerTemplate.currentChar, width, printerTemplate.letterSpacing);
        printerTemplate.x = printerTemplate.currentX = alignX;
    }

    if (windowId == ARENA_WIN_JUDGMENT_TEXT)
        gTextFlags.useAlternateDownArrow = FALSE;
    else
        gTextFlags.useAlternateDownArrow = TRUE;

    if ((gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED)) || gTestRunnerEnabled)
        gTextFlags.autoScroll = TRUE;
    else
        gTextFlags.autoScroll = FALSE;

    if (windowId == B_WIN_MSG || windowId == ARENA_WIN_JUDGMENT_TEXT)
    {
        if (gBattleTypeFlags & (BATTLE_TYPE_LINK | BATTLE_TYPE_RECORDED_LINK))
            speed = 1;
        else if (gBattleTypeFlags & BATTLE_TYPE_RECORDED)
            speed = sRecordedBattleTextSpeeds[GetTextSpeedInRecordedBattle()];
        else
            speed = GetPlayerTextSpeedDelay();

        gTextFlags.canABSpeedUpPrint = 1;
    }
    else
    {
        speed = textInfo[windowId].speed;
        gTextFlags.canABSpeedUpPrint = 0;
    }

    AddTextPrinter(&printerTemplate, speed, NULL);

    if (copyToVram)
    {
        PutWindowTilemap(windowId);
        CopyWindowToVram(windowId, COPYWIN_FULL);
    }
}

void SetPpNumbersPaletteInMoveSelection(u32 battler)
{
    struct ChooseMoveStruct *chooseMoveStruct = (struct ChooseMoveStruct *)(&gBattleResources->bufferA[battler][4]);
    const u16 *palPtr = gPPTextPalette;
    u8 var;

    if (!gBattleStruct->zmove.viewing)
        var = GetCurrentPpToMaxPpState(chooseMoveStruct->currentPp[gMoveSelectionCursor[battler]],
                         chooseMoveStruct->maxPp[gMoveSelectionCursor[battler]]);
    else
        var = GetCurrentPpToMaxPpState(chooseMoveStruct->currentPp[gMoveSelectionCursor[battler]], gBattleMoves[gMoveSelectionCursor[battler]].pp);

    gPlttBufferUnfaded[BG_PLTT_ID(5) + 12] = palPtr[(var * 2) + 0];
    gPlttBufferUnfaded[BG_PLTT_ID(5) + 11] = palPtr[(var * 2) + 1];

    CpuCopy16(&gPlttBufferUnfaded[BG_PLTT_ID(5) + 12], &gPlttBufferFaded[BG_PLTT_ID(5) + 12], PLTT_SIZEOF(1));
    CpuCopy16(&gPlttBufferUnfaded[BG_PLTT_ID(5) + 11], &gPlttBufferFaded[BG_PLTT_ID(5) + 11], PLTT_SIZEOF(1));
}

u8 GetCurrentPpToMaxPpState(u8 currentPp, u8 maxPp)
{
    if (maxPp == currentPp)
    {
        return 3;
    }
    else if (maxPp <= 2)
    {
        if (currentPp > 1)
            return 3;
        else
            return 2 - currentPp;
    }
    else if (maxPp <= 7)
    {
        if (currentPp > 2)
            return 3;
        else
            return 2 - currentPp;
    }
    else
    {
        if (currentPp == 0)
            return 2;
        if (currentPp <= maxPp / 4)
            return 1;
        if (currentPp > maxPp / 2)
            return 3;
    }

    return 0;
}

struct TrainerSlide
{
    u16 trainerId;
    bool8 isFrontierTrainer;
    const u8 *msgLastSwitchIn;
    const u8 *msgLastLowHp;
    const u8 *msgFirstDown;
    const u8 *msgLastHalfHp;
    const u8 *msgFirstCriticalHit;
    const u8 *msgFirstSuperEffectiveHit;
    const u8 *msgFirstSTABMove;
    const u8 *msgPlayerMonUnaffected;
    const u8 *msgMegaEvolution;
    const u8 *msgZMove;
    const u8 *msgBeforeFirstTurn;
    const u8 *msgDynamax;
};

static const struct TrainerSlide sTrainerSlides[] =
{
    /* Put any trainer slide-in messages inside this array.
    Example:
    {
        .trainerId = TRAINER_WALLY_VR_2,
        .isFrontierTrainer = FALSE,
        .msgLastSwitchIn = sText_AarghAlmostHadIt,
        .msgLastLowHp = sText_BoxIsFull,
        .msgFirstDown = sText_123Poof,
        .msgLastHalfHp = sText_ShootSoClose,
        .msgFirstCriticalHit = sText_CriticalHit,
        .msgFirstSuperEffectiveHit = sText_SuperEffective,
        .msgFirstSTABMove = sText_ABoosted,
        .msgPlayerMonUnaffected = sText_ButNoEffect,
        .msgMegaEvolution = sText_PowderExplodes,
        .msgZMove = sText_Electromagnetism,
        .msgBeforeFirstTurn = sText_GravityIntensified,
        .msgDynamax = sText_TargetWokeUp,
    },
    */
};

static u32 GetEnemyMonCount(u32 firstId, u32 lastId, bool32 onlyAlive)
{
    u32 i, count = 0;

    for (i = firstId; i < lastId; i++)
    {
        u32 species = GetMonData(&gEnemyParty[i], MON_DATA_SPECIES_OR_EGG, NULL);
        if (species != SPECIES_NONE
            && species != SPECIES_EGG
            && (!onlyAlive || GetMonData(&gEnemyParty[i], MON_DATA_HP, NULL)))
            count++;
    }

    return count;
}

enum
{
    LESS_THAN,
    EQUAL,
    GREATER_THAN,
    LESS_THAN_OR_EQUAL,
    GREATER_THAN_OR_EQUAL,
    NOT_EQUAL,
};

u32 BattlerHPPercentage(u32 battler, u32 operation, u32 threshold)
{
    switch (operation)
    {
    case LESS_THAN:
        return gBattleMons[battler].hp < (gBattleMons[battler].maxHP / threshold);
    case EQUAL:
        return gBattleMons[battler].hp == (gBattleMons[battler].maxHP / threshold);
    case GREATER_THAN:
        return gBattleMons[battler].hp > (gBattleMons[battler].maxHP / threshold);
    case LESS_THAN_OR_EQUAL:
        return gBattleMons[battler].hp <= (gBattleMons[battler].maxHP / threshold);
    case GREATER_THAN_OR_EQUAL:
        return gBattleMons[battler].hp >= (gBattleMons[battler].maxHP / threshold);
    case NOT_EQUAL:
    default:
        return gBattleMons[battler].hp != (gBattleMons[battler].maxHP / threshold);
    }
}

u32 ShouldDoTrainerSlide(u32 battler, u32 which)
{
    u32 i, firstId, lastId, trainerId, retValue = 1;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER) || GetBattlerSide(battler) != B_SIDE_OPPONENT)
        return 0;

    // Two opponents support.
    if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
    {
        if (gBattlerPartyIndexes[battler] >= 3)
        {
            firstId = 3, lastId = PARTY_SIZE;
            trainerId = gTrainerBattleOpponent_B;
            retValue = 2;
        }
        else
        {
            firstId = 0, lastId = 3;
            trainerId = gTrainerBattleOpponent_A;
        }
    }
    else
    {
        firstId = 0, lastId = PARTY_SIZE;
        trainerId = gTrainerBattleOpponent_A;
    }

    for (i = 0; i < ARRAY_COUNT(sTrainerSlides); i++)
    {
        if (trainerId == sTrainerSlides[i].trainerId
            && (((gBattleTypeFlags & BATTLE_TYPE_FRONTIER) && sTrainerSlides[i].isFrontierTrainer)
                || (!(gBattleTypeFlags & BATTLE_TYPE_FRONTIER) && !sTrainerSlides[i].isFrontierTrainer)))
        {
            gBattleScripting.battler = battler;
            switch (which)
            {
            case TRAINER_SLIDE_LAST_SWITCHIN:
                if (sTrainerSlides[i].msgLastSwitchIn != NULL && !CanBattlerSwitch(battler))
                {
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgLastSwitchIn;
                    return retValue;
                }
                break;
            case TRAINER_SLIDE_LAST_LOW_HP:
                if (sTrainerSlides[i].msgLastLowHp != NULL
                    && GetEnemyMonCount(firstId, lastId, TRUE) == 1
                    && BattlerHPPercentage(battler, GREATER_THAN_OR_EQUAL, 4)
                    && !gBattleStruct->trainerSlideLowHpMsgDone)
                {
                    gBattleStruct->trainerSlideLowHpMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgLastLowHp;
                    return retValue;
                }
                break;
            case TRAINER_SLIDE_FIRST_DOWN:
                if (sTrainerSlides[i].msgFirstDown != NULL && GetEnemyMonCount(firstId, lastId, TRUE) == GetEnemyMonCount(firstId, lastId, FALSE) - 1)
                {
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgFirstDown;
                    return retValue;
                }
                break;
            case TRAINER_SLIDE_LAST_HALF_HP:
                if (sTrainerSlides[i].msgLastHalfHp != NULL
                 && GetEnemyMonCount(firstId, lastId, TRUE) == GetEnemyMonCount(firstId, lastId, FALSE) - 1
                 && BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 2) && BattlerHPPercentage(battler, GREATER_THAN, 4)
                 && !gBattleStruct->trainerSlideHalfHpMsgDone)
                {
                    gBattleStruct->trainerSlideHalfHpMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgLastHalfHp;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_FIRST_CRITICAL_HIT:
                if (sTrainerSlides[i].msgFirstCriticalHit != NULL && gBattleStruct->trainerSlideFirstCriticalHitMsgState == 1)
                {
                    gBattleStruct->trainerSlideFirstCriticalHitMsgState = 2;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgFirstCriticalHit;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_FIRST_SUPER_EFFECTIVE_HIT:
                if (sTrainerSlides[i].msgFirstSuperEffectiveHit != NULL
                    && gBattleStruct->trainerSlideFirstSuperEffectiveHitMsgState == 1
                    && gBattleMons[battler].hp)
                {
                    gBattleStruct->trainerSlideFirstSuperEffectiveHitMsgState = 2;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgFirstSuperEffectiveHit;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_FIRST_STAB_MOVE:
                if (sTrainerSlides[i].msgFirstSTABMove != NULL
                 && gBattleStruct->trainerSlideFirstSTABMoveMsgState == 1
                 && GetEnemyMonCount(firstId, lastId, TRUE) == GetEnemyMonCount(firstId, lastId, FALSE))
                {
                    gBattleStruct->trainerSlideFirstSTABMoveMsgState = 2;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgFirstSTABMove;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_PLAYER_MON_UNAFFECTED:
                if (sTrainerSlides[i].msgPlayerMonUnaffected != NULL
                 && gBattleStruct->trainerSlidePlayerMonUnaffectedMsgState == 1
                 && GetEnemyMonCount(firstId, lastId, TRUE) == GetEnemyMonCount(firstId, lastId, FALSE))
                {
                    gBattleStruct->trainerSlidePlayerMonUnaffectedMsgState = 2;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgPlayerMonUnaffected;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_MEGA_EVOLUTION:
                if (sTrainerSlides[i].msgMegaEvolution != NULL && !gBattleStruct->trainerSlideMegaEvolutionMsgDone)
                {
                    gBattleStruct->trainerSlideMegaEvolutionMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgMegaEvolution;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_Z_MOVE:
                if (sTrainerSlides[i].msgZMove != NULL && !gBattleStruct->trainerSlideZMoveMsgDone)
                {
                    gBattleStruct->trainerSlideZMoveMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgZMove;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_BEFORE_FIRST_TURN:
                if (sTrainerSlides[i].msgBeforeFirstTurn != NULL && !gBattleStruct->trainerSlideBeforeFirstTurnMsgDone)
                {
                    gBattleStruct->trainerSlideBeforeFirstTurnMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgBeforeFirstTurn;
                    return TRUE;
                }
                break;
            case TRAINER_SLIDE_DYNAMAX:
                if (sTrainerSlides[i].msgDynamax != NULL && !gBattleStruct->trainerSlideDynamaxMsgDone)
                {
                    gBattleStruct->trainerSlideDynamaxMsgDone = TRUE;
                    gBattleStruct->trainerSlideMsg = sTrainerSlides[i].msgDynamax;
                    return TRUE;
                }
                break;
            }
            break;
        }
    }

    return 0;
}
