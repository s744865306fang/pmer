
#if B_BINDING_TURNS >= GEN_5
#define BINDING_TURNS "4 or 5"
#else
#define BINDING_TURNS "2 to 5"
#endif

static const u8 sNullDescription[] = _(
    "");

static const u8 sPoundDescription[] = _(
"使用长长的尾巴或手等\n"
"拍打对手进行攻击。");

static const u8 sKarateChopDescription[] = _(
"用手刀攻击对方，\n"
"要害命中率高。");

static const u8 sDoubleSlapDescription[] = _(
"用回旋掌击对方，\n"
"能攻击2~5次。");

static const u8 sCometPunchDescription[] = _(
"连续殴打对方，\n"
"能攻击2~5次。");

static const u8 sMegaPunchDescription[] = _(
"用聚集了高能量的\n"
"拳头打击对方。");

static const u8 sPayDayDescription[] = _(
"用金币扔对方，战斗结束后\n"
"能得到额外的金钱。");

static const u8 sFirePunchDescription[] = _(
"聚集了火焰的拳击，\n"
"可能使对方烧伤。");

static const u8 sIcePunchDescription[] = _(
"聚集了冷气的拳击，\n"
#if B_USE_FROSTBITE == TRUE
    "leave the foe with frostbite.");
#else
"可能使对方冰冻。");
#endif

static const u8 sThunderPunchDescription[] = _(
"聚集了电光的拳击，\n"
"可能使对方麻痹。");

static const u8 sScratchDescription[] = _(
"用尖锐的爪子抓对方。");

static const u8 sViseGripDescription[] = _(
"用巨大的夹子夹对方。");

static const u8 sGuillotineDescription[] = _(
"用巨大的夹子夹对方，\n"
"使其无法战斗。");

static const u8 sRazorWindDescription[] = _(
"这一回合制造一个风之刀阵，\n"
"下一回合攻击。");

static const u8 sSwordsDanceDescription[] = _(
"跳战斗之舞，\n"
"大幅提升攻击力。");

static const u8 sCutDescription[] = _(
"用尖锐的刀爪或\n"
"爪子砍击对方。");

static const u8 sGustDescription[] = _(
"用翅膀制造强风来攻击对方。");

static const u8 sWingAttackDescription[] = _(
"张开巨大的翅膀冲击对方。");

static const u8 sWhirlwindDescription[] = _(
"用强风吹走对方，\n"
"从而结束战斗。");

static const u8 sFlyDescription[] = _(
"这一回合飞上天，\n"
"下一回合攻击。");

static const u8 sBindDescription[] = _(
"2~5回合内，用长长的身体\n"
"或者藤蔓捆住对方。");

static const u8 sSlamDescription[] = _(
"用长长的尾巴或藤蔓打击对方。");

static const u8 sVineWhipDescription[] = _(
"用像鞭子一样细长的藤蔓\n"
"打击对方。");

static const u8 sStompDescription[] = _(
"用巨大的脚掌踩对方，\n"
"可能使其害怕。");

static const u8 sDoubleKickDescription[] = _(
"用双脚连续交替地攻击对方。");

static const u8 sMegaKickDescription[] = _(
"用充满力量的一脚踢飞对方。");

static const u8 sJumpKickDescription[] = _(
"用跳跃的架势飞踢对方，\n"
"如未命中，自己会受伤害。");

static const u8 sRollingKickDescription[] = _(
"快速回旋身体后顺势踢出去。");

static const u8 sSandAttackDescription[] = _(
"向对方脸上泼沙子降低其命中\n"
"率。");

static const u8 sHeadbuttDescription[] = _(
"用头撞击对方，\n"
"可能使其害怕。");

static const u8 sHornAttackDescription[] = _(
"用尖角刺对方。");

static const u8 sFuryAttackDescription[] = _(
"用尖角连续攻击2~5次。");

static const u8 sHornDrillDescription[] = _(
"让角像钻头一样转动，\n"
"使对方无法战斗。");

static const u8 sTackleDescription[] = _(
"用整个身体撞击对方。");

static const u8 sBodySlamDescription[] = _(
"把对方压在身下，\n"
"可能使其麻痹。");

static const u8 sWrapDescription[] = _(
"2~5回合内，用长长的身体\n"
"或藤蔓捆住对方。");

static const u8 sTakeDownDescription[] = _(
"猛烈撞击对方，\n"
"自己也受到伤害。");

static const u8 sThrashDescription[] = _(
"2至3回合持续狂暴，\n"
"之后会混乱。");

static const u8 sDoubleEdgeDescription[] = _(
"拼命地猛烈撞击对方，\n"
"自己也会受到反弹伤害。");

static const u8 sTailWhipDescription[] = _(
"向对方摇尾巴使其大意，\n"
"从而降低其防御。");

static const u8 sPoisonStingDescription[] = _(
"用有毒的针或角刺对方，\n"
"可能使其中毒。");

static const u8 sTwineedleDescription[] = _(
"用双手上的针连续2次刺对方。");

static const u8 sPinMissileDescription[] = _(
"连续2~5次向对方放射\n"
"尖利的针刺。");

static const u8 sLeerDescription[] = _(
"瞪对方使其害怕，\n"
"从而降低其防御。");

static const u8 sBiteDescription[] = _(
"用尖利的牙齿咬对方，\n"
"可能使其害怕。");

static const u8 sGrowlDescription[] = _(
"可爱地向对方叫唤使其大意，\n"
"从而降低其攻击。");

static const u8 sRoarDescription[] = _(
"大声吼叫让对方逃跑，\n"
"从而结束战斗。");

static const u8 sSingDescription[] = _(
"用悠扬的歌声让对方睡眠。");

static const u8 sSupersonicDescription[] = _(
"发出怪音波让对方混乱。");

static const u8 sSonicBoomDescription[] = _(
"用冲击波攻击对方，\n"
"损伤对方20点HP。");

static const u8 sDisableDescription[] = _(
"用超能力封锁对方的行动\n"
"一回合。");

static const u8 sAcidDescription[] = _(
"用强酸溶化对方的皮肤，\n"
#if B_UPDATED_MOVE_DATA >= GEN_4
    "May lower Sp. Def.");
#else
"可能降低其防御。");
#endif

static const u8 sEmberDescription[] = _(
"用小型火焰攻击，\n"
"可能使对方烧伤。");

static const u8 sFlamethrowerDescription[] = _(
"用大型火焰攻击，\n"
"可能使对方烧伤。");

static const u8 sMistDescription[] = _(
"用白雾覆盖全身，\n"
"防止自己的能力被对方降低。");

static const u8 sWaterGunDescription[] = _(
"喷射水流攻击。");

static const u8 sHydroPumpDescription[] = _(
"喷射强力的水柱攻击对方。");

static const u8 sSurfDescription[] = _(
"制造一堵水墙，\n"
"以惊人的气势冲向对方。");

static const u8 sIceBeamDescription[] = _(
"发射冷气攻击，\n"
#if B_USE_FROSTBITE == TRUE
    "beam. May cause frostbite.");
#else
"可能使对方冰冻。");
#endif

static const u8 sBlizzardDescription[] = _(
"用狂风暴雪攻击，\n"
#if B_USE_FROSTBITE == TRUE
    "storm. May cause frostbite.");
#else
"可能使对方冰冻。");
#endif

static const u8 sPsybeamDescription[] = _(
"发射神秘的闪光让对方混乱。");

static const u8 sBubbleBeamDescription[] = _(
"把泡沫以惊人气势喷射出去，\n"
"可能降低对方速度。");

static const u8 sAuroraBeamDescription[] = _(
"发出七彩的光芒，\n"
"可能降低对方攻击。");

static const u8 sHyperBeamDescription[] = _(
"给予对方很大的伤害，\n"
"但下一回合会无法动弹。");

static const u8 sPeckDescription[] = _(
"用喙啄对方。");

static const u8 sDrillPeckDescription[] = _(
"以喙为轴心旋转身体\n"
"向对方突进。");

static const u8 sSubmissionDescription[] = _(
"使用这个技能时自己也会\n"
"因撞击地面受到伤害。");

static const u8 sLowKickDescription[] = _(
"体重越重的宝可梦受到的\n"
"伤害越大。");

static const u8 sCounterDescription[] = _(
"把对方给予自己的\n"
"攻击伤害加倍奉还。");

static const u8 sSeismicTossDescription[] = _(
"用地球引力把对方扔出去，\n"
"伤害HP等于自己等级。");

static const u8 sStrengthDescription[] = _(
"全身聚集惊人的力量，\n"
"一齐发射出去。");

static const u8 sAbsorbDescription[] = _(
"给予对方伤害的一半会\n"
"转化为自己的HP。");

static const u8 sMegaDrainDescription[] = _(
"给予对方伤害的一半会\n"
"转化为自己的HP。");

static const u8 sLeechSeedDescription[] = _(
"在对方身上种种子，\n"
"每一回合都能吸收其HP。");

static const u8 sGrowthDescription[] = _(
"使身体急速成长，\n"
"提升特攻。");

static const u8 sRazorLeafDescription[] = _(
"用叶子飞斩对方，\n"
"容易命中要害。");

static const u8 sSolarBeamDescription[] = _(
"这一回合聚集光线，\n"
"下一回合攻击。");

static const u8 sPoisonPowderDescription[] = _(
"撒下毒粉，让对方中毒。");

static const u8 sStunSporeDescription[] = _(
"撒下具有麻痹作用的粉末，\n"
"让对方麻痹。");

static const u8 sSleepPowderDescription[] = _(
"撒下具有催眠作用的粉末，\n"
"让对方睡眠。");

static const u8 sPetalDanceDescription[] = _(
"2至3回合持续狂暴，\n"
"之后会混乱。");

static const u8 sStringShotDescription[] = _(
"用丝把对方卷起来降低其速度。");

static const u8 sDragonRageDescription[] = _(
"用冲击波打击对方，\n"
"固定伤害40点HP。");

static const u8 sFireSpinDescription[] = _(
"2~5回合内用火焰包围对方。");

static const u8 sThunderShockDescription[] = _(
"电击对方，可能使其麻痹。");

static const u8 sThunderboltDescription[] = _(
"强烈电击对方，可能使其麻痹");

static const u8 sThunderWaveDescription[] = _(
"用微弱的电力使对方麻痹。");

static const u8 sThunderDescription[] = _(
"召唤雷电轰向对方，\n"
"可能使其麻痹。");

static const u8 sRockThrowDescription[] = _(
"用小石头扔对方。");

static const u8 sEarthquakeDescription[] = _(
"震动地面，对飞行系外的\n"
"所有场上宝可梦造成伤害。");

static const u8 sFissureDescription[] = _(
"让大地裂开一条缝并吞没对方，\n"
"使其无法战斗。");

static const u8 sDigDescription[] = _(
"这一回合钻入地下，\n"
"下一回合攻击。");

static const u8 sToxicDescription[] = _(
"强烈的毒素，给予对方的伤害\n"
"会一点点增加。");

static const u8 sConfusionDescription[] = _(
"用超能力攻击，\n"
"可能使对方混乱。");

static const u8 sPsychicDescription[] = _(
"用强烈的念力攻击对方，\n"
"可能降低其特防。");

static const u8 sHypnosisDescription[] = _(
"给对方心理暗示，\n"
"使其陷入深深的睡眠中。");

static const u8 sMeditateDescription[] = _(
"瑜伽姿势，能唤醒体内\n"
"沉睡的力量，提升攻击。");

static const u8 sAgilityDescription[] = _(
"放松使身体变轻，\n"
"大幅提升速度。");

static const u8 sQuickAttackDescription[] = _(
"用电光火石般的速度\n"
"先发制人地攻击。");

static const u8 sRageDescription[] = _(
"每次被攻击后能增加怒气，\n"
"使攻击节节上升。");

static const u8 sTeleportDescription[] = _(
"用超能力使自己从战斗中逃脱。");

static const u8 sNightShadeDescription[] = _(
"给予对方恐怖的幻觉攻击，\n"
"伤害等于自己等级。");

static const u8 sMimicDescription[] = _(
"能把对方的技能暂时占为己有。");

static const u8 sScreechDescription[] = _(
"发出噪音，让对方的防御\n"
"大幅降低。");

static const u8 sDoubleTeamDescription[] = _(
"用分身迷惑对方，提高回避率。");

static const u8 sRecoverDescription[] = _(
"恢复一半的HP。");

static const u8 sHardenDescription[] = _(
"利用全身力量使自己变硬，\n"
"增加防御。");

static const u8 sMinimizeDescription[] = _(
"缩小身体，提高回避率。");

static const u8 sSmokescreenDescription[] = _(
"用烟雾降低对方命中率。");

static const u8 sConfuseRayDescription[] = _(
"用怪异的光线迷惑对方，\n"
"使其混乱。");

static const u8 sWithdrawDescription[] = _(
"钻进坚硬的贝壳里增加防御。");

static const u8 sDefenseCurlDescription[] = _(
"蜷缩身子隐藏弱点增加防御。");

static const u8 sBarrierDescription[] = _(
"在面前制造一堵墙，\n"
"大幅提升防御。");

static const u8 sLightScreenDescription[] = _(
"制造一堵闪光的墙壁，\n"
"减弱特攻的伤害。");

static const u8 sHazeDescription[] = _(
"被黑色的雾气包围，\n"
"恢复被降低的能力。");

static const u8 sReflectDescription[] = _(
"制造一堵墙，\n"
"减弱物理攻击伤害。");

static const u8 sFocusEnergyDescription[] = _(
"攻击时集中精神，\n"
"提高要害命中率。");

static const u8 sBideDescription[] = _(
"受2回合的攻击后加倍奉还\n"
"所受到的伤害。");

static const u8 sMetronomeDescription[] = _(
"挥动手指刺激大脑，\n"
"就能随机使出各种技能。");

static const u8 sMirrorMoveDescription[] = _(
"用对方的绝招攻击对方。");

static const u8 sSelfDestructDescription[] = _(
"给予对方巨大的伤害，\n"
"但之后会无法战斗。");

static const u8 sEggBombDescription[] = _(
"肆意向对方乱扔鸡蛋。");

static const u8 sLickDescription[] = _(
"用长长的舌头来回舔对方，\n"
"可能使其麻痹。");

static const u8 sSmogDescription[] = _(
"用废气瓦斯攻击，\n"
"可能使对方中毒。");

static const u8 sSludgeDescription[] = _(
"用烂泥扔对方，可能使其中毒。");

static const u8 sBoneClubDescription[] = _(
"用手里拿着的骨头攻击对方。");

static const u8 sFireBlastDescription[] = _(
"让火焰以大字形突进，\n"
"并焚毁一切，可能使对方烧伤。");

static const u8 sWaterfallDescription[] = _(
"用像逆瀑布而上的气势\n"
"攻击对方。");

static const u8 sClampDescription[] = _(
"2~5回合内用贝壳夹住对方。");

static const u8 sSwiftDescription[] = _(
"向对方发射无数无法躲避的\n"
"星星射线。");

static const u8 sSkullBashDescription[] = _(
"这一回合先把脑袋缩进去，\n"
"下一回合攻击。");

static const u8 sSpikeCannonDescription[] = _(
"用尖锐的针连续攻击\n"
"2~5回合。");

static const u8 sConstrictDescription[] = _(
"捆住对方并攻击，其\n"
"可能降低速度。");

static const u8 sAmnesiaDescription[] = _(
"暂时忘记一些事物从而\n"
"大幅提升特防。");

static const u8 sKinesisDescription[] = _(
"让对方的眼睛对准勺子，\n"
"能降低其命中率。");

static const u8 sSoftBoiledDescription[] = _(
"恢复一半HP。");

static const u8 sHighJumpKickDescription[] = _(
"跳起来用膝盖踢对方，\n"
"如未打中自己会受到伤害。");

static const u8 sGlareDescription[] = _(
"威吓对手，\n"
"使其害怕而导致麻痹。");

static const u8 sDreamEaterDescription[] = _(
"给予被催眠的对方伤害，\n"
"一半伤害值转化为自身HP。");

static const u8 sPoisonGasDescription[] = _(
"向对方喷射毒气，使其中毒。");

static const u8 sBarrageDescription[] = _(
"向对方扔圆球，\n"
"连续攻击2~5回合。");

static const u8 sLeechLifeDescription[] = _(
"给予对方的伤害一半会\n"
"转化为自身HP。");

static const u8 sLovelyKissDescription[] = _(
"用恐怖的表情亲吻对方，\n"
"使其睡眠。");

static const u8 sSkyAttackDescription[] = _(
"这一回合找出对方弱点，\n"
"下一回合攻击。");

static const u8 sTransformDescription[] = _(
"变得和对方完全一样。");

static const u8 sBubbleDescription[] = _(
"吹泡泡攻击，\n"
"可能降低对方速度。");

static const u8 sDizzyPunchDescription[] = _(
"用有节奏的拳击攻击对方，\n"
"可能使其混乱。");

static const u8 sSporeDescription[] = _(
"撒播有催眠效果的孢子，使对\n"
"方睡眠。");

static const u8 sFlashDescription[] = _(
"用强光使对方目眩，\n"
"降低其命中率。");

static const u8 sPsywaveDescription[] = _(
"用神奇的念力波攻击对方，\n"
"每次的威力都不同。");

static const u8 sSplashDescription[] = _(
"只是一味地跳跃…\n"
"没有什么效果。");

static const u8 sAcidArmorDescription[] = _(
"使身体成液态，\n"
"大幅提升防御。");

static const u8 sCrabhammerDescription[] = _(
"用钳子敲打对方，\n"
"要害命中率高。");

static const u8 sExplosionDescription[] = _(
"给对方巨大的伤害，\n"
"但之后会无法战斗。");

static const u8 sFurySwipesDescription[] = _(
"用尖锐的镰爪或爪子，\n"
"连续2~5回合抓对方。");

static const u8 sBonemerangDescription[] = _(
"扔出能回旋的骨头，\n"
"连续攻击对方2次。");

static const u8 sRestDescription[] = _(
"睡眠2回合，\n"
"恢复所有HP和异常。");

static const u8 sRockSlideDescription[] = _(
"用大石头扔对方，\n"
"可能使其害怕。");

static const u8 sHyperFangDescription[] = _(
"用尖利的门牙攻击对方，\n"
"可能使其害怕。");

static const u8 sSharpenDescription[] = _(
"使自己变得锐利起来，\n"
"提升攻击。");

static const u8 sConversionDescription[] = _(
"用学会的绝招的属性来\n"
"更换自己的属性。");

static const u8 sTriAttackDescription[] = _(
"用3种光线聚合起来攻击对方。");

static const u8 sSuperFangDescription[] = _(
"用尖利的门牙攻击，\n"
"使对方的当前HP减少一半。");

static const u8 sSlashDescription[] = _(
"用尖利的爪子攻击对方，\n"
"要害命中率高。");

static const u8 sSubstituteDescription[] = _(
"用最大HP的4分之1\n"
"制造一个分身。");

static const u8 sStruggleDescription[] = _(
"没有技能点数时使用的技能，\n"
"自己会受到一些伤害。");

static const u8 sSketchDescription[] = _(
"能学会对方的技能。");

static const u8 sTripleKickDescription[] = _(
"连续攻击对方3次，\n"
"每命中一次伤害都会增加。");

static const u8 sThiefDescription[] = _(
"攻击时趁机窃取\n"
"对方携带的道具。");

static const u8 sSpiderWebDescription[] = _(
"用黏糊糊的丝捆住对方，\n"
"使其无法逃脱。");

static const u8 sMindReaderDescription[] = _(
"用心感觉对方的动向，\n"
"下一回合攻击绝对命中。");

static const u8 sNightmareDescription[] = _(
"对方睡眠时，每一回合减少\n"
"其4分之1的HP。");

static const u8 sFlameWheelDescription[] = _(
"用火焰包裹全身后撞击对方，\n"
"可能使其烧伤。");

static const u8 sSnoreDescription[] = _(
"睡眠时发出巨大的呼噜声\n"
"攻击对方。");

static const u8 sCurseDescription[] = _(
"幽灵系宝可梦使用该技能\n"
"的效果和其他属性不同。");

static const u8 sFlailDescription[] = _(
"自身HP越少，\n"
"给予对方的伤害越大。");

static const u8 sConversion2Description[] = _(
"将自身属性变换为\n"
"最后击中自己的技能的属性。");

static const u8 sAeroblastDescription[] = _(
"发射真空波攻击，\n"
"容易命中要害。");

static const u8 sCottonSporeDescription[] = _(
"用孢子扰乱对方，\n"
"大幅降低其速度。");

static const u8 sReversalDescription[] = _(
"自身HP越少给予\n"
"对方的伤害越大。");

static const u8 sSpiteDescription[] = _(
"怨恨对方的绝招，\n"
"降低其技能点数。");

static const u8 sPowderSnowDescription[] = _(
"用狂风暴雪攻击，\n"
"可能使对方冰冻。");

static const u8 sProtectDescription[] = _(
"能躲避下一回合的攻击，\n"
"但连续使用会失败。");

static const u8 sMachPunchDescription[] = _(
"快速出拳先发制人地攻击。");

static const u8 sScaryFaceDescription[] = _(
"用恐怖的表情使对方害怕，\n"
"大幅降低其速度。");

static const u8 sFeintAttackDescription[] = _(
"使对方大意后慢慢接近，\n"
"使出其无法躲避的一击。");

static const u8 sSweetKissDescription[] = _(
"用可爱的表情强吻对方，\n"
"使其混乱。");

static const u8 sBellyDrumDescription[] = _(
"降低自身HP，\n"
"把攻击提升到最大。");

static const u8 sSludgeBombDescription[] = _(
"用烂泥扔对方，可能使其中毒。");

static const u8 sMudSlapDescription[] = _(
"把泥土踢到对方脸上，\n"
"降低其命中率。");

static const u8 sOctazookaDescription[] = _(
"用烟雾弹扔对方，\n"
"降低其命中率。");

static const u8 sSpikesDescription[] = _(
"在对方场上洒下铁菱，\n"
"在交换时扎上上场对手。");

static const u8 sZapCannonDescription[] = _(
"命中率低但伤害很大，\n"
"打中了绝对使对方麻痹。");

static const u8 sForesightDescription[] = _(
"提高自身命中率。");

static const u8 sDestinyBondDescription[] = _(
"使用这个技能，自己被打倒后\n"
"对方也无法战斗。");

static const u8 sPerishSongDescription[] = _(
"听歌3回合后对方会陷入濒死。");

static const u8 sIcyWindDescription[] = _(
"用超强的冷气攻击，\n"
"可能降低对方速度。");

static const u8 sDetectDescription[] = _(
"能躲避攻击，\n"
"但连续使用会失败。");

static const u8 sBoneRushDescription[] = _(
"用手中的骨头棒\n"
"连续攻击对方2~5回合。");

static const u8 sLockOnDescription[] = _(
"这一回合瞄准对方，\n"
"下一回合绝对命中。");

static const u8 sOutrageDescription[] = _(
"2至3回合持续狂暴，\n"
"之后会混乱。");

static const u8 sSandstormDescription[] = _(
"召唤沙风暴，\n"
"每一回合都给予对方伤害。");

static const u8 sGigaDrainDescription[] = _(
"造成对方伤害的一半\n"
"会转化为自身HP。");

static const u8 sEndureDescription[] = _(
"这一回合受再重的伤害，\n"
"HP也会剩下1点。");

static const u8 sCharmDescription[] = _(
"向对方撒娇使其大意，\n"
"从而大幅降低其攻击。");

static const u8 sRolloutDescription[] = _(
"5回合内攻击对方，\n"
"每击中一次威力就会提升。");

static const u8 sFalseSwipeDescription[] = _(
"一击使对方至少剩1点HP。");

static const u8 sSwaggerDescription[] = _(
"使对方生气从而混乱，\n"
"但会大幅提升对方攻击。");

static const u8 sMilkDrinkDescription[] = _(
"恢复一半的HP。");

static const u8 sSparkDescription[] = _(
"包裹着电光冲击对方，\n"
"可能使其麻痹。");

static const u8 sFuryCutterDescription[] = _(
"每击中一次威力就会增强。");

static const u8 sSteelWingDescription[] = _(
"用坚硬巨大的翅膀撞击对方。");

static const u8 sMeanLookDescription[] = _(
"一直盯着对方，使其无法逃跑。");

static const u8 sAttractDescription[] = _(
"对异性使用这个技能，\n"
"会使对方难以出招。");

static const u8 sSleepTalkDescription[] = _(
"睡眠时使用的技能，\n"
"随机使用一个自己的技能。");

static const u8 sHealBellDescription[] = _(
"听到美妙的铃声，\n"
"解除所有异常。");

static const u8 sReturnDescription[] = _(
"为了报答训练师，\n"
"会全力攻击对方。");

static const u8 sPresentDescription[] = _(
"送对方一个炸弹，\n"
"偶尔会恢复对方HP。");

static const u8 sFrustrationDescription[] = _(
"自己受的伤害全部爆发出来，\n"
"给对方致命一击。");

static const u8 sSafeguardDescription[] = _(
"用神奇的力量保护自己\n"
"不陷入异常状态。");

static const u8 sPainSplitDescription[] = _(
"和对方平分HP。");

static const u8 sSacredFireDescription[] = _(
"用神秘的火焰攻击，\n"
"可能使对方烧伤。");

static const u8 sMagnitudeDescription[] = _(
"震动地面攻击，\n"
"伤害会随机改变。");

static const u8 sDynamicPunchDescription[] = _(
"威力大却命中率低，\n"
"但命中后必使对方混乱。");

static const u8 sMegahornDescription[] = _(
"用角以惊人的气势攻击对方。");

static const u8 sDragonBreathDescription[] = _(
"从口中吐出强烈的气息\n"
"攻击对方。");

static const u8 sBatonPassDescription[] = _(
"交换宝可梦时能保留\n"
"其原来的追加效果。");

static const u8 sEncoreDescription[] = _(
"使对方在之后的2至6回合内，\n"
"使出这一回合用的绝招。");

static const u8 sPursuitDescription[] = _(
"在对方换宝可梦时使用，\n"
"会给对方造成巨大伤害。");

static const u8 sRapidSpinDescription[] = _(
"让身体快速回旋来攻击对方。");

static const u8 sSweetScentDescription[] = _(
"用香气分散对方注意力，\n"
"降低其回避率。");

static const u8 sIronTailDescription[] = _(
"用坚硬的尾巴攻击，\n"
"可能降低对方防御。");

static const u8 sMetalClawDescription[] = _(
"用坚硬的爪子攻击，\n"
"可能提升攻击。");

static const u8 sVitalThrowDescription[] = _(
"虽然后发制人，\n"
"但绝对命中对方。");

static const u8 sMorningSunDescription[] = _(
"恢复HP，\n"
"恢复量随天气情况变化。");

static const u8 sSynthesisDescription[] = _(
"恢复HP，\n"
"恢复量随天气情况变化。");

static const u8 sMoonlightDescription[] = _(
"恢复HP，\n"
"恢复量随天气情况变化。");

static const u8 sHiddenPowerDescription[] = _(
"给予的伤害随对方宝可梦的\n"
"种类而变化。");

static const u8 sCrossChopDescription[] = _(
"用双手刀攻击，要害命中率高。");

static const u8 sTwisterDescription[] = _(
"制造狂风攻击。");

static const u8 sRainDanceDescription[] = _(
"5回合内\n"
"水系的技能威力上升。");

static const u8 sSunnyDayDescription[] = _(
"5回合内\n"
"炎系的技能威力上升。");

static const u8 sCrunchDescription[] = _(
"用尖利的牙齿咬对方，\n"
#if B_UPDATED_MOVE_DATA >= GEN_4
"可能降低其特防。");
#else
    "May lower Sp. Def.");
#endif

static const u8 sMirrorCoatDescription[] = _(
"加倍奉还对方给予的\n"
"特殊攻击伤害。");

static const u8 sPsychUpDescription[] = _(
    "Copies the foe's effect(s)\n"
    "and gives to the user.");

static const u8 sExtremeSpeedDescription[] = _(
"快速移动，强力攻击对方。");

static const u8 sAncientPowerDescription[] = _(
"唤醒原始力量攻击，\n"
"可能提升所有能力。");

static const u8 sShadowBallDescription[] = _(
"用黑色球状物扔对方，\n"
"可能降低其特防。");

static const u8 sFutureSightDescription[] = _(
"提升精神力，2回合后攻击。");

static const u8 sRockSmashDescription[] = _(
"用粉碎岩石的气势攻击，\n"
"可能降低对方防御。");

static const u8 sWhirlpoolDescription[] = _(
"2~5回合内用旋涡封锁对方。");

static const u8 sBeatUpDescription[] = _(
"召唤队中健康的\n"
"同伴加入攻击。");

static const u8 sFakeOutDescription[] = _(
"先发制人使对方害怕，\n"
"只限第一回合使用。");

static const u8 sUproarDescription[] = _(
#if B_UPROAR_TURNS >= GEN_5
"2~5回合内发出噪音，\n"
#else
    "Causes an uproar for 3\n"
#endif
"双方都无法睡着。");

static const u8 sStockpileDescription[] = _(
"最大能蓄力3次。");

static const u8 sSpitUpDescription[] = _(
    "Releases stockpiled power\n"
    "(the more the better).");

static const u8 sSwallowDescription[] = _(
"吞入积蓄的力量，能回复HP。");

static const u8 sHeatWaveDescription[] = _(
"用灼热的气息吹向对方，\n"
"可能使其烧伤。");

static const u8 sHailDescription[] = _(
"撒下冰雹，每一回合都\n"
"给予对方伤害。");

static const u8 sTormentDescription[] = _(
"挑衅对方，\n"
"使其不出相同的绝招。");

static const u8 sFlatterDescription[] = _(
"拍马屁使对方混乱，\n"
"但会提升其特攻。");

static const u8 sWillOWispDescription[] = _(
"用鬼火烧伤对方。");

static const u8 sMementoDescription[] = _(
"以自己无法战斗为代价，\n"
"降低对方能力。");

static const u8 sFacadeDescription[] = _(
"中毒、麻痹、烧伤时\n"
"技能威力会上升。");

static const u8 sFocusPunchDescription[] = _(
"威力很强的易会心技能，\n"
"但蓄力时被攻击会害怕。");

static const u8 sSmellingSaltsDescription[] = _(
"给予麻痹的对方巨大伤害，\n"
"同时解除其麻痹。");

static const u8 sFollowMeDescription[] = _(
"使对方注意自己，\n"
"接受全部的攻击。");

static const u8 sNaturePowerDescription[] = _(
"借助自然的力量攻击，\n"
"地点不同，出的绝招也不同。");

static const u8 sChargeDescription[] = _(
"蓄电，使下次发出的\n"
"电系技能变强。");

static const u8 sTauntDescription[] = _(
"让对方生气，\n"
"使其只能发出物理攻击。");

static const u8 sHelpingHandDescription[] = _(
"提升战友的技能威力。");

static const u8 sTrickDescription[] = _(
"交换双方携带的道具。");

static const u8 sRolePlayDescription[] = _(
"模仿对手，\n"
"并复制它的特性。");

static const u8 sWishDescription[] = _(
"诚心祈祷恢复HP但需要时间。");

static const u8 sAssistDescription[] = _(
"用战友的宝可梦的技能攻击，\n"
"随机出绝招。");

static const u8 sIngrainDescription[] = _(
"生长根系一点点恢复HP，\n"
"无法交换。");

static const u8 sSuperpowerDescription[] = _(
"能发挥无穷的力量，\n"
"但疲惫后能力会降低。");

static const u8 sMagicCoatDescription[] = _(
"把特殊技能造成的效果\n"
"完全放到对方身上。");

static const u8 sRecycleDescription[] = _(
"用过的消耗道具能再度使用。");

static const u8 sRevengeDescription[] = _(
"被对方攻击时威力会上升。");

static const u8 sBrickBreakDescription[] = _(
"打破反射盾和光之壁\n"
"等屏障来给予对方伤害。");

static const u8 sYawnDescription[] = _(
"打哈欠使对方困倦，\n"
"下一回合不下场便会睡着。");

static const u8 sKnockOffDescription[] = _(
"打落对方的道具，\n"
"使其无法使用。");

static const u8 sEndeavorDescription[] = _(
"自身HP比对方越少伤害越大。");

static const u8 sEruptionDescription[] = _(
"自身HP越多伤害越大。");

static const u8 sSkillSwapDescription[] = _(
"能交换双方特性。");

static const u8 sImprisonDescription[] = _(
"自己学会的技能对方无法使用。");

static const u8 sRefreshDescription[] = _(
"恢复中毒、麻痹、烧伤状态。");

static const u8 sGrudgeDescription[] = _(
"被对方某技能击中而倒下时\n"
"那个技能的PP值变为0。");

static const u8 sSnatchDescription[] = _(
"把对方要用的技能\n"
"抢过来自己用。");

static const u8 sSecretPowerDescription[] = _(
"能唤醒神秘力量，\n"
"场地不同追加效果不同。");

static const u8 sDiveDescription[] = _(
"这一回合钻入水中\n"
"下一回合攻击。");

static const u8 sArmThrustDescription[] = _(
"2~5回合连续重击对方。");

static const u8 sCamouflageDescription[] = _(
"宝可梦的属性随场地变化。");

static const u8 sTailGlowDescription[] = _(
"闪闪发光，\n"
"能大幅提升特攻。");

static const u8 sLusterPurgeDescription[] = _(
"发射耀眼的光线攻击，\n"
"可能降低对方的特防。");

static const u8 sMistBallDescription[] = _(
"用羽毛之风掀起攻击，\n"
"可能降低对方的特攻。");

static const u8 sFeatherDanceDescription[] = _(
"挥洒羽毛完全缠住对方，\n"
"大幅降低攻击。");

static const u8 sTeeterDanceDescription[] = _(
"使自己以外所有在场\n"
"宝可梦陷入混乱。");

static const u8 sBlazeKickDescription[] = _(
"使出容易命中要害的踢技，\n"
"偶尔会烧伤对手。");

static const u8 sMudSportDescription[] = _(
"向场地上扔泥，\n"
"降低电系攻击伤害。");

static const u8 sIceBallDescription[] = _(
"5回合内攻击对方，\n"
"每击中一次伤害增加一次。");

static const u8 sNeedleArmDescription[] = _(
"满是尖刺的双手揍对方，\n"
"可能使其害怕。");

static const u8 sSlackOffDescription[] = _(
"恢复一半的HP。");

static const u8 sHyperVoiceDescription[] = _(
"用强烈的声音震动空气\n"
"来伤害对方。");

static const u8 sPoisonFangDescription[] = _(
"用尖利的牙齿攻击，\n"
"偶尔会使对方身中剧毒。");

static const u8 sCrushClawDescription[] = _(
"用尖利的爪子斩对方，\n"
"可能降低其防御。");

static const u8 sBlastBurnDescription[] = _(
"给予对方巨大的伤害，\n"
"但下一回合会无法动弹。");

static const u8 sHydroCannonDescription[] = _(
"给予对方巨大的伤害，\n"
"但下一回合会无法动弹。");

static const u8 sMeteorMashDescription[] = _(
"发出彗星一般的拳击，\n"
"可能提升攻击。");

static const u8 sAstonishDescription[] = _(
"惊吓对方，可能使其害怕。");

static const u8 sWeatherBallDescription[] = _(
"属性和威力随天气而变化。");

static const u8 sAromatherapyDescription[] = _(
"发出沁人心脾的香气，\n"
"解除所有异常状态。");

static const u8 sFakeTearsDescription[] = _(
"假装哭泣使对方为难，\n"
"大幅降低其特防。");

static const u8 sAirCutterDescription[] = _(
"用强风攻击对方，\n"
"要害命中率高。");

static const u8 sOverheatDescription[] = _(
"发出充满力量的一击，\n"
"但之后特攻会大幅降低。");

static const u8 sOdorSleuthDescription[] = _(
"提高自身命中率。");

static const u8 sRockTombDescription[] = _(
"用岩石封锁对方行动，\n"
"降低其速度。");

static const u8 sSilverWindDescription[] = _(
"用卷着鳞粉的风攻击，\n"
"可能提升自己全部能力。");

static const u8 sMetalSoundDescription[] = _(
"发出讨厌的声音，\n"
"大幅降低对方的特防。");

static const u8 sGrassWhistleDescription[] = _(
"用草之笛吹出悦耳音色，\n"
"使对方深深沉睡。");

static const u8 sTickleDescription[] = _(
"使对方不禁偷笑，\n"
"降低其攻击和防御。");

static const u8 sCosmicPowerDescription[] = _(
"使用神秘的力量\n"
"提升防御和特防。");

static const u8 sWaterSpoutDescription[] = _(
"自身HP越多伤害越大。");

static const u8 sSignalBeamDescription[] = _(
"发射神秘的闪光使对方混乱。");

static const u8 sShadowPunchDescription[] = _(
"把黑暗力量混合到拳头上\n"
"攻击绝对命中对方。");

static const u8 sExtrasensoryDescription[] = _(
"用神秘的力量攻击，\n"
"可能使对方害怕。");

static const u8 sSkyUppercutDescription[] = _(
"给对方一记\n"
"直挂天际的上勾拳。");

static const u8 sSandTombDescription[] = _(
"2~5回合内\n"
"用旋涡封锁对方。");

static const u8 sSheerColdDescription[] = _(
"用绝对零度攻击，\n"
"命中则一击必杀。");

static const u8 sMuddyWaterDescription[] = _(
"用泥水攻击，\n"
"偶尔降低对方命中率。");

static const u8 sBulletSeedDescription[] = _(
"2~5回合\n"
"连续发射种子攻击。");

static const u8 sAerialAceDescription[] = _(
"用速度玩弄对方，\n"
"使其无法躲避发出的攻击。");

static const u8 sIcicleSpearDescription[] = _(
"2~5回合\n"
"连续发射冰柱攻击。");

static const u8 sIronDefenseDescription[] = _(
"使身体表面坚硬，\n"
"大幅提升防御。");

static const u8 sBlockDescription[] = _(
"堵住对方的退路，\n"
"使其无法逃脱。");

static const u8 sHowlDescription[] = _(
"用吼叫提升攻击力。");

static const u8 sDragonClawDescription[] = _(
"用尖锐的爪子攻击敌人。");

static const u8 sFrenzyPlantDescription[] = _(
"给予对方巨大的伤害，\n"
"但下一回合会无法动弹。");

static const u8 sBulkUpDescription[] = _(
"锻炼身体提升攻击和防御。");

static const u8 sBounceDescription[] = _(
"这回合跳起来，下回合落\n"
"下时攻击，偶尔使对方麻痹。");

static const u8 sMudShotDescription[] = _(
"向对方扔泥土，\n"
"能降低其速度。");

static const u8 sPoisonTailDescription[] = _(
"偶尔会使对方中毒，也能提高\n"
"要害命中率。");

static const u8 sCovetDescription[] = _(
"向对方撒娇的同时把对方\n"
"的道具占为己有。");

static const u8 sVoltTackleDescription[] = _(
"拼命撞击对方，\n"
"自己也会受一些伤害。");

static const u8 sMagicalLeafDescription[] = _(
"用绝对无法躲开的\n"
"神奇叶子攻击。");

static const u8 sWaterSportDescription[] = _(
"向场上洒水，\n"
"降低炎系宝可梦的威力。");

static const u8 sCalmMindDescription[] = _(
"集中所有精神力，\n"
"提升特攻和特防。");

static const u8 sLeafBladeDescription[] = _(
"用锋利的叶子斩对方，\n"
"容易命中要害。");

static const u8 sDragonDanceDescription[] = _(
"跳神秘的舞蹈，\n"
"提升攻击与速度。");

static const u8 sRockBlastDescription[] = _(
"连续2~5回合\n"
"向对方扔石头。");

static const u8 sShockWaveDescription[] = _(
"快速发出电击，\n"
"绝对命中。");

static const u8 sWaterPulseDescription[] = _(
"用超声波攻击，\n"
"使对方混乱。");

static const u8 sDoomDesireDescription[] = _(
"撒下耀眼的光芒，\n"
"2回合后攻击。");

static const u8 sPsychoBoostDescription[] = _(
"发出充满力量的一击，\n"
"但之后特攻会大幅降低。");

static const u8 sRoostDescription[] = _(
"降到地面休息，\n"
"回复一半的HP。");

static const u8 sGravityDescription[] = _(
"在5回合内重力失效。\n"
"空中的招式无法使用。");

static const u8 sMiracleEyeDescription[] = _(
"使恶属性和闪避高的对手\n"
"变得容易命中。");

static const u8 sWakeUpSlapDescription[] = _(
"对睡眠的对手较大的伤害\n"
"并将其打醒。");

static const u8 sHammerArmDescription[] = _(
"挥舞强力的拳头攻击对手，\n"
"降低自身速度。");

static const u8 sGyroBallDescription[] = _(
"让身体高速旋转并撞击对手。\n"
"速度比对手越慢，威力越大。");

static const u8 sHealingWishDescription[] = _(
"濒死后，治愈后备上场的宝\n"
"可梦异常状态以及回复HP。");

static const u8 sBrineDescription[] = _(
"当对手的HP负伤到一半左右\n"
"时，招式威力会变成2倍。");

static const u8 sNaturalGiftDescription[] = _(
"根据携带的树果，\n"
"招式属性和威力会改变。");

static const u8 sFeintDescription[] = _(
"使正在使用守住或看穿等招\n"
"式的对手。解除其守护效果。");

static const u8 sPluckDescription[] = _(
"用喙进行攻击。能食用对手\n"
"携带的树果并获得效果。");

static const u8 sTailwindDescription[] = _(
"刮起猛烈的旋风，在4回合内\n"
"提高我方全员的速度。");

static const u8 sAcupressureDescription[] = _(
"通过点穴让身体舒筋活络。\n"
"大幅提高某1项能力。");

static const u8 sMetalBurstDescription[] = _(
"使出招式前，将最后受到的\n"
"招式的伤害大力返还给对手。");

static const u8 sUTurnDescription[] = _(
"在攻击之后急速返回，\n"
"和后备宝可梦进行替换。");

static const u8 sCloseCombatDescription[] = _(
"放弃守护，向对手突击。\n"
"自己的防御和特防会降低。");

static const u8 sPaybackDescription[] = _(
"蓄力攻击。如在对手之后攻\n"
"击，招式的威力会变成2倍。");

static const u8 sAssuranceDescription[] = _(
"如果此回合内对手已经受到\n"
"伤害，招式威力会变成2倍。");

static const u8 sEmbargoDescription[] = _(
"让对手在5回合内不能对其\n"
"使用道具和携带道具。");

static const u8 sFlingDescription[] = _(
"快速投掷携带的道具攻击。\n"
"道具不同，威力效果会改变。");

static const u8 sPsychoShiftDescription[] = _(
"用超能力施以暗示，将自己\n"
"受到的异常状态转移给对手。");

static const u8 sTrumpCardDescription[] = _(
"王牌招式的剩余PP越少，\n"
"招式的威力越大。");

static const u8 sHealBlockDescription[] = _(
"在5回合内无法通过招式、\n"
"特性或携带的道具来回复HP。");

static const u8 sWringOutDescription[] = _(
"用力勒紧对手进行攻击。\n"
"对手的HP越多，威力越大。");

static const u8 sPowerTrickDescription[] = _(
"利用超能力交换自己的\n"
"攻击和防御的力量。");

static const u8 sGastroAcidDescription[] = _(
"将胃液吐向对手。沾上后\n"
"会消除对手的特性效果。");

static const u8 sLuckyChantDescription[] = _(
"向天许愿，从而在5回合内\n"
"不会被对手的攻击打中要害。");

static const u8 sMeFirstDescription[] = _(
"抢先使出对手的招式并提高\n"
"威力。如不先使出则会失败。");

static const u8 sCopycatDescription[] = _(
"模仿对手刚才的招式，\n"
"如果对手还没出招则会失败。");

static const u8 sPowerSwapDescription[] = _(
"利用超能力互换自己和对手\n"
"的攻击以及特攻的能力变化。");

static const u8 sGuardSwapDescription[] = _(
"利用超能力互换自己和对手\n"
"的防御以及特防的能力变化。");

static const u8 sPunishmentDescription[] = _(
"根据能力变化，对手提高的\n"
"力量越大，招式的威力越大。");

static const u8 sLastResortDescription[] = _(
"已学会的招式全部使用过后，\n"
"才能开始使出珍藏的招式。");

static const u8 sWorrySeedDescription[] = _(
"心神不宁的种子。使对手不能\n"
"入眠，并将特性变成不眠。");

static const u8 sSuckerPunchDescription[] = _(
"比对手先攻击。对手的招式\n"
"如果不是攻击招式则会失败。");

static const u8 sToxicSpikesDescription[] = _(
"在对手的脚下撒毒菱。使对手\n"
"替换出场的宝可梦中毒。");

static const u8 sHeartSwapDescription[] = _(
"利用超能力互换自己\n"
"和对手之间的能力变化。");

static const u8 sAquaRingDescription[] = _(
"在自己身体的周围覆盖用水\n"
"制造的幕。每回合回复HP。");

static const u8 sMagnetRiseDescription[] = _(
"利用电气产生磁力浮在空中。\n"
"在5回合内可以飘浮。");

static const u8 sFlareBlitzDescription[] = _(
"火焰身躯撞向对手。自己\n"
"会受伤。对手可能被灼伤。");

static const u8 sForcePalmDescription[] = _(
"向对手发出冲击波进行攻击。\n"
"有时会让对手陷入麻痹状态。");

static const u8 sAuraSphereDescription[] = _(
"产生波导之力向对手发出。\n"
"攻击必定会命中。");

static const u8 sRockPolishDescription[] = _(
"打磨身体，减少空气阻力。\n"
"可以大幅提高自己的速度。");

static const u8 sPoisonJabDescription[] = _(
"用带毒的触手或手臂刺对手。\n"
"有时会让对手陷入中毒状态。");

static const u8 sDarkPulseDescription[] = _(
"从体内发出充满恶意的恐怖\n"
"气场。有时会使对手畏缩。");

static const u8 sNightSlashDescription[] = _(
"抓住瞬间的空隙切斩对手。\n"
"容易击中要害。");

static const u8 sAquaTailDescription[] = _(
"如惊涛骇浪般挥动大尾巴\n"
"攻击对手。");

static const u8 sSeedBombDescription[] = _(
"将外壳坚硬的大种子，\n"
"从上方砸下攻击对手。");

static const u8 sAirSlashDescription[] = _(
"用连天空也能劈开的空气之\n"
"刃进行攻击。对手可嫩畏缩。");

static const u8 sXScissorDescription[] = _(
"将镰刀或爪子像剪刀般地\n"
"交叉，顺势劈开对手。");

static const u8 sBugBuzzDescription[] = _(
"利用振动发出音波进行攻击。\n"
"有时会降低对手的特防。");

static const u8 sDragonPulseDescription[] = _(
"从大大的口中掀起冲击波\n"
"攻击对手。");

static const u8 sDragonRushDescription[] = _(
"释放出骇人的杀气威慑，\n"
"撞击对手。对手可能畏缩。");

static const u8 sPowerGemDescription[] = _(
"发射如宝石般闪耀的光芒\n"
"攻击对手。");

static const u8 sVacuumWaveDescription[] = _(
"挥动拳头，掀起真空波。\n"
"必定能够先制攻击。");

static const u8 sFocusBlastDescription[] = _(
"提高气势，释放出全部力量。\n"
"有时会降低对手的特防。");

static const u8 sEnergyBallDescription[] = _(
"发射从自然收集的生命力量。\n"
"有时会降低对手的特防。");

static const u8 sBraveBirdDescription[] = _(
"收拢翅膀，通过低空飞行\n"
"突击对手。自己也会受伤害。");

static const u8 sEarthPowerDescription[] = _(
"向对手脚下释放出大地之力。\n"
"有时会降低对手的特防。");

static const u8 sSwitcherooDescription[] = _(
"用一闪而过的速度交换\n"
"自己和对手的持有物。");

static const u8 sNastyPlotDescription[] = _(
"谋划诡计，激活头脑。\n"
"大幅提高自己的特攻。");

static const u8 sBulletPunchDescription[] = _(
"使出如子弹般快速而坚硬的\n"
"拳头。必定能够先制攻击。");

static const u8 sIceShardDescription[] = _(
"瞬间制作冰块，快速地扔向\n"
"对手。必定能够先制攻击。");

static const u8 sShadowClawDescription[] = _(
"以影子做成的锐爪，\n"
"劈开对手。容易击中要害。");

static const u8 sThunderFangDescription[] = _(
"用蓄满电流的牙齿咬住对手。\n"
"对手可能畏缩或陷入麻痹。");

static const u8 sIceFangDescription[] = _(
"用藏有冷气的牙齿咬住对手。\n"
"对手可能畏缩或陷入冰冻。");

static const u8 sFireFangDescription[] = _(
"用覆盖火焰的牙齿咬住对手。\n"
"对手可能畏缩或陷入灼伤。");

static const u8 sShadowSneakDescription[] = _(
"伸长影子，从对手背后攻击。\n"
"必定能够先制攻击。");

static const u8 sMudBombDescription[] = _(
"发射坚硬的泥弹攻击对手。\n"
"有时会降低对手的命中率。");

static const u8 sPsychoCutDescription[] = _(
"用实体化的心之利刃\n"
"劈开对手。容易击中要害。");

static const u8 sZenHeadbuttDescription[] = _(
"将思念的力量集中在前额进\n"
"行攻击。有时会使对手畏缩。");

static const u8 sMirrorShotDescription[] = _(
"抛光身体，释放闪光之力。\n"
"可能降低对手命中率。");

static const u8 sFlashCannonDescription[] = _(
"将身体的光芒聚集在一点释\n"
"放出去。可能降低对手特防。");

static const u8 sRockClimbDescription[] = _(
"用尽全力扑向对手进行攻击。\n"
"有时会使对手混乱。");

static const u8 sDefogDescription[] = _(
"吹开对手的反射壁或光墙等。\n"
"也会降低对手的闪避率。");

static const u8 sTrickRoomDescription[] = _(
"制造出离奇的空间。5回合内\n"
"速度慢的宝可梦先行动。");

static const u8 sDracoMeteorDescription[] = _(
"从天空中向对手落下陨石。\n"
"自己的特攻会大幅降低。");

static const u8 sDischargeDescription[] = _(
"用耀眼的电击攻击周围所有\n"
"宝可梦。可能还会陷入麻痹。");

static const u8 sPowerWhipDescription[] = _(
"激烈地挥舞青藤或触手\n"
"摔打对手进行攻击。");

static const u8 sCrossPoisonDescription[] = _(
"用毒刃劈开对手。对手可能\n"
"陷入中毒，也容易击中要害。");

static const u8 sGunkShotDescription[] = _(
"用肮脏的垃圾撞向对手。\n"
"对手可能陷入中毒状态。");

static const u8 sIronHeadDescription[] = _(
"用钢铁般坚硬的头部攻击。\n"
"有时会使对手畏缩。");

static const u8 sMagnetBombDescription[] = _(
"发射吸住对手的钢铁炸弹。\n"
"攻击必定会命中。");

static const u8 sStoneEdgeDescription[] = _(
"用尖尖的岩石刺入对手攻击。\n"
"容易击中要害。");

static const u8 sCaptivateDescription[] = _(
"诱惑异性，\n"
"从而大幅降低对手的特攻。");

static const u8 sStealthRockDescription[] = _(
"无数岩石悬浮在对手的周围，\n"
"对替换出场的对手给予伤害。");

static const u8 sGrassKnotDescription[] = _(
"用草缠住并绊倒对手。\n"
"对手越重，威力越大。");

static const u8 sChatterDescription[] = _(
"用喋喋不休的音波攻击对手。\n"
"使对手混乱。");

static const u8 sJudgmentDescription[] = _(
"向对手放出无数的光弹。根据\n"
"自己携带的石板改变属性。");

static const u8 sChargeBeamDescription[] = _(
"蓄满电流发射电击光束。\n"
"有时会提高自己的特攻。");

static const u8 sWoodHammerDescription[] = _(
"用坚硬的躯体撞击对手。.\n"
"自己也会受到不小的伤害。");

static const u8 sAquaJetDescription[] = _(
"以迅雷不及掩耳之势扑向\n"
"对手。必定能够先制攻击。");

static const u8 sAttackOrderDescription[] = _(
"召唤手下朝对手发起攻击。\n"
"容易击中要害。");

static const u8 sDefendOrderDescription[] = _(
"召唤手下附在自己的身体上。\n"
"可以提高自己的防御和特防。");

static const u8 sHealOrderDescription[] = _(
"召唤手下疗伤。\n"
"回复自己最大HP的一半。");

static const u8 sHeadSmashDescription[] = _(
"使出浑身力气进行头锤攻击。\n"
"自己也会受到非常大的伤害。");

static const u8 sDoubleHitDescription[] = _(
"使用尾巴等拍打对手攻击。\n"
"连续2次给予伤害。");

static const u8 sRoarOfTimeDescription[] = _(
"用扭曲时间的力量攻击对手。\n"
"下一回合自己将无法动弹。");

static const u8 sSpacialRendDescription[] = _(
"将对手周围的空间撕裂并\n"
"给予伤害。容易击中要害。");

static const u8 sMagmaStormDescription[] = _(
"将对手困在燃烧的火焰中，\n"
"在2~5回合内进行攻击。");

static const u8 sDarkVoidDescription[] = _(
"将对手强制拖入黑暗的世界，\n"
"从而让对手陷入睡眠状态。");

static const u8 sSeedFlareDescription[] = _(
"从身体里产生冲击波。\n"
"有时会大幅降低对手的特防。");

static const u8 sOminousWindDescription[] = _(
"用毛骨悚然的暴风攻击对手。\n"
"有时会提高自己的全部能力。");

static const u8 sShadowForceDescription[] = _(
"第1回合消失，下回合攻击。\n"
"即使对手正受保护也能击中。");

static const u8 sHoneClawsDescription[] = _(
"将爪子磨得更加锋利。\n"
"提高自己的攻击和命中率。");

static const u8 sWideGuardDescription[] = _(
"在1回合内防住击打我方全员\n"
"的攻击。");

static const u8 sGuardSplitDescription[] = _(
"将自己和对手的防御和特防\n"
"相加，再进行平分。");

static const u8 sPowerSplitDescription[] = _(
"将自己和对手的攻击和特攻\n"
"相加，再进行平分。");

static const u8 sWonderRoomDescription[] = _(
"制造出离奇的空间。5回合内\n"
"互换所有宝可梦的防御特防。");

static const u8 sPsyshockDescription[] = _(
"将神奇的念波实体化攻击。\n"
"给予物理伤害。");

static const u8 sTailSlapDescription[] = _(
"用坚硬的尾巴拍打对手攻击。\n"
"连续攻击2~5次。");

static const u8 sVenoshockDescription[] = _(
"将特殊的毒液泼向对手。\n"
"对中毒的对手威力会变2倍。");

static const u8 sAutotomizeDescription[] = _(
"大幅提高自己的速度，\n"
"同时体重也会变轻。");

static const u8 sRagePowderDescription[] = _(
"用特殊的粉末吸引对手注意。\n"
"使对手的攻击全部指向自己。");

static const u8 sTelekinesisDescription[] = _(
"利用超能力使对手浮起来。\n"
"3回合内更容易打中对手。");

static const u8 sMagicRoomDescription[] = _(
"制造出离奇的空间。5回合内\n"
"所有携带道具的效果都消失。");

static const u8 sSmackDownDescription[] = _(
"扔石头或炮弹攻击飞行对手。\n"
"对手会被击落，掉到地面。");

static const u8 sStormThrowDescription[] = _(
"向对手使出强烈的一击。\n"
"攻击必定会击中要害。");

static const u8 sFlameBurstDescription[] = _(
"爆裂的火焰如果击中对手。\n"
"火焰还会飞溅到旁边的对手。");

static const u8 sSludgeWaveDescription[] = _(
"用污泥波攻击自己周围所有\n"
"宝可梦。可能还会陷入中毒。");

static const u8 sQuiverDanceDescription[] = _(
"轻巧地跳起神秘美丽的舞蹈。\n"
"提高自己的特攻、特防、速度。");

static const u8 sHeavySlamDescription[] = _(
"用沉重的身体撞向对手攻击。\n"
"自己比对手越重，威力越大。");

static const u8 sSynchronoiseDescription[] = _(
"用电波对周围所有和自己\n"
"属性相同的宝可梦给予伤害。");

static const u8 sElectroBallDescription[] = _(
"用电气团撞向对手。自己\n"
"比对手速度越快，威力越大。");

static const u8 sSoakDescription[] = _(
"将大量的水泼向对手，\n"
"从而使其变成水属性。");

static const u8 sFlameChargeDescription[] = _(
"让火焰覆盖全身，攻击对手。\n"
"积蓄力量并提高自己的速度。");

static const u8 sCoilDescription[] = _(
"盘蜷着集中精神。提高自己\n"
"的攻击、防御和命中率。");

static const u8 sLowSweepDescription[] = _(
"以敏捷的动作瞄准对手的脚\n"
"进行攻击。降低对手的速度。");

static const u8 sAcidSprayDescription[] = _(
"喷出能溶化对手的液体攻击。\n"
"大幅降低对手的特防。");

static const u8 sFoulPlayDescription[] = _(
"利用对手的力量进行攻击。\n"
"对手攻击越高，伤害越大。");

static const u8 sSimpleBeamDescription[] = _(
"向对手发送谜之念波。\n"
"对手特性会变为单纯。");

static const u8 sEntrainmentDescription[] = _(
"用神奇的节奏跳舞。\n"
"使对手特性变成和自己一样。");

static const u8 sAfterYouDescription[] = _(
"支援我方或对手的行动，\n"
"使其紧接着此招式之后行动。");

static const u8 sRoundDescription[] = _(
"用歌声攻击对手。\n"
"同伴可接着轮唱，威力更高。");

static const u8 sEchoedVoiceDescription[] = _(
"用回声攻击对手。每回合都有\n"
"宝可梦接着使用，威力更高。");

static const u8 sChipAwayDescription[] = _(
"看准机会稳步攻击。\n"
"无视对手的能力变化。");

static const u8 sClearSmogDescription[] = _(
"向对手投掷特殊的泥块攻击。\n"
"使其能力变回原点。");

static const u8 sStoredPowerDescription[] = _(
"用蓄积起来的力量攻击对手。\n"
"提升得能力越多，威力越大。");

static const u8 sQuickGuardDescription[] = _(
"守护自己和同伴，\n"
"以防对手的先制攻击。");

static const u8 sAllySwitchDescription[] = _(
"用神奇的力量瞬间移动，\n"
"互换自己和同伴所在的位置。");

static const u8 sScaldDescription[] = _(
"喷射煮得翻滚的开水攻击。\n"
"有时会让对手陷入灼伤状态。");

static const u8 sShellSmashDescription[] = _(
"破壳降低自己的防御和特防，\n"
"大幅提高攻击、特攻和速度。");

static const u8 sHealPulseDescription[] = _(
"放出治愈波动，\n"
"回复对手最大HP的一半。");

static const u8 sHexDescription[] = _(
"对处于异常状态的对手\n"
"给予较大的伤害。");

static const u8 sSkyDropDescription[] = _(
"第1回合将对手带到空中\n"
"不能动弹，下回合将其摔下。");

static const u8 sShiftGearDescription[] = _(
"转动齿轮，提高自己的攻击，\n"
"还会大幅提高速度。");

static const u8 sCircleThrowDescription[] = _(
"扔飞对手，后备宝可梦上场。\n"
"如在野外，战斗将直接结束。");

static const u8 sIncinerateDescription[] = _(
"用火焰攻击对手。\n"
"对手携带的树果等会烧掉。");

static const u8 sQuashDescription[] = _(
"压制对手，\n"
"从而将其行动顺序放到最后。");

static const u8 sAcrobaticsDescription[] = _(
"轻巧地攻击对手。自己没有\n"
"携带道具时，给予较大伤害。");

static const u8 sReflectTypeDescription[] = _(
"反射对手的属性，\n"
"让自己也变成一样的属性。");

static const u8 sRetaliateDescription[] = _(
"为倒下的同伴报仇。如果\n"
"上回合同伴倒下，威力提高。");

static const u8 sFinalGambitDescription[] = _(
"自己陷入濒死，给予对手\n"
"和自己目前HP等量的伤害。");

static const u8 sBestowDescription[] = _(
"当对手未携带道具时，\n"
"将自己携带的道具交给对手。");

static const u8 sInfernoDescription[] = _(
"用烈焰包裹住对手进行攻击。\n"
"让对手陷入灼伤状态。");

static const u8 sWaterPledgeDescription[] = _(
"水柱攻击。如果和火组合，\n"
"威力更高，天空中出现彩虹。");

static const u8 sFirePledgeDescription[] = _(
"火柱攻击。如果和草组合，\n"
"威力更高，周围会变成火海。");

static const u8 sGrassPledgeDescription[] = _(
"草柱攻击。如果和水组合，\n"
"威力更高，周围会变成湿地。");

static const u8 sStruggleBugDescription[] = _(
"抵抗并攻击对手。\n"
"降低对手的特攻。");

static const u8 sBulldozeDescription[] = _(
"踩踏地面并攻击周围所有的\n"
"宝可梦。降低对方的速度。");

static const u8 sWorkUpDescription[] = _(
"激励自己，\n"
"从而提高攻击和特攻。");

static const u8 sElectrowebDescription[] = _(
"用电网捉住对手进行攻击。\n"
"降低对手的速度。");

static const u8 sWildChargeDescription[] = _(
"让电流覆盖全身撞向对手。\n"
"自己也会受到少许伤害。");

static const u8 sDrillRunDescription[] = _(
"一边旋转身体一边撞击对手。\n"
"容易击中要害。");

static const u8 sDualChopDescription[] = _(
"用身体坚硬的部分拍打对手。\n"
"连续2次给予伤害。");

static const u8 sHeartStampDescription[] = _(
"乘机给出强烈的一击。\n"
"有时会使对手畏缩。");

static const u8 sRazorShellDescription[] = _(
"用锋利的贝壳切斩对手攻击。\n"
"有时会降低对手的防御。");

static const u8 sLeafTornadoDescription[] = _(
"用锋利的叶片包裹住对手。\n"
"有时会降低对手的命中率。");

static const u8 sSteamrollerDescription[] = _(
"旋转揉成团的身体压扁对手。\n"
"有时会使对手畏缩。");

static const u8 sCottonGuardDescription[] = _(
"用绒毛包裹住自己的身体。\n"
"巨幅提高自己的防御。");

static const u8 sNightDazeDescription[] = _(
"放出黑暗的冲击波攻击对手。\n"
"有时会降低对手的命中率。");

static const u8 sHurricaneDescription[] = _(
"用强烈的风席卷对手攻击。\n"
"有时会使对手混乱。");

static const u8 sHeadChargeDescription[] = _(
"用厉害的爆炸头猛撞向对手。\n"
"自己也会受到少许伤害。");

static const u8 sGearGrindDescription[] = _(
"向对手投掷钢铁齿轮攻击。\n"
"连续2次给予伤害。");

static const u8 sTechnoBlastDescription[] = _(
"向对手放出光弹。\n"
"根据携带的卡带改变属性。");

static const u8 sRelicSongDescription[] = _(
"用古老之歌，打动对手内心。\n"
"有时会让对手陷入睡眠状态。");

static const u8 sSecretSwordDescription[] = _(
"用长角切斩对手进行攻击。\n"
"神奇的力量将给予物理伤害。");

static const u8 sGlaciateDescription[] = _(
"将冰冻的冷气吹向对手。\n"
"会降低对手的速度。");

static const u8 sBoltStrikeDescription[] = _(
"电流覆盖全身后猛撞向对手。\n"
"对手可能陷入麻痹。");

static const u8 sBlueFlareDescription[] = _(
"用激烈的青焰包裹住对手。\n"
"有时会让对手陷入灼伤状态。");

static const u8 sFieryDanceDescription[] = _(
"火焰覆盖全身后振翅攻击。\n"
"有时会提高自己的特攻。");

static const u8 sFreezeShockDescription[] = _(
"在第2回合用覆盖电流的冰块\n"
"攻击。对手可能陷入麻痹。");

static const u8 sIceBurnDescription[] = _(
"在第2回合用强烈的冷气包裹\n"
"住对手。对手可能陷入灼伤。");

static const u8 sSnarlDescription[] = _(
"没完没了地大声斥责，\n"
"从而降低对手的特攻。");

static const u8 sIcicleCrashDescription[] = _(
"用大冰柱激烈地撞向对手。\n"
"有时会使对手畏缩。");

static const u8 sVCreateDescription[] = _(
"用灼热的火焰舍身撞击对手。\n"
"防御、特防和速度会降低。");

static const u8 sFusionFlareDescription[] = _(
"释放出巨大的火焰。受到\n"
"巨大闪电影响时，威力提高。");

static const u8 sFusionBoltDescription[] = _(
"释放出巨大的闪电。受到\n"
"巨大火焰影响时，威力提高。");

static const u8 sFlyingPressDescription[] = _(
"从空中俯冲向对手。此招式\n"
"同时带有格斗和飞行属性。");

static const u8 sMatBlockDescription[] = _(
"自己和同伴免受招式伤害。\n"
"变化招式无法防住。");

static const u8 sBelchDescription[] = _(
"朝着对手打嗝，并给予伤害。\n"
"如果不吃树果则无法使出。");

static const u8 sRototillerDescription[] = _(
"翻耕土地，提高草属性\n"
"宝可梦的攻击和特攻。");

static const u8 sStickyWebDescription[] = _(
"在对手周围围上黏黏的网，\n"
"降低替换出场的对手的速度。");

static const u8 sFellStingerDescription[] = _(
"如果使用此招式打倒对手，\n"
"攻击会巨幅提高。");

static const u8 sTrickOrTreatDescription[] = _(
"邀请对手参加万圣夜。\n"
"使对手被追加幽灵属性。");

static const u8 sNobleRoarDescription[] = _(
"发出战吼威吓对手，\n"
"从而降低对手的攻击和特攻。");

static const u8 sIonDelugeDescription[] = _(
"将带电粒子扩散开来，\n"
"使一般属性招式变成电属性。");

static const u8 sParabolicChargeDescription[] = _(
"给周围全体宝可梦造成伤害。\n"
"可以回复给予伤害的一半HP。");

static const u8 sForestsCurseDescription[] = _(
"向对手施加森林诅咒。\n"
"被诅咒的对手会追加草属性。");

static const u8 sPetalBlizzardDescription[] = _(
"猛烈地刮起飞雪般的落花，\n"
"攻击周围所有的宝可梦。");

static const u8 sFreezeDryDescription[] = _(
"冷冻对手并可能使对手冰冻。\n"
"对水属性宝可梦效果绝佳。");

static const u8 sDisarmingVoiceDescription[] = _(
"给予对手精神上的伤害。\n"
"攻击必定会命中。");

static const u8 sPartingShotDescription[] = _(
"威吓对手降低攻击和特攻后，\n"
"和后备宝可梦进行替换。");

static const u8 sTopsyTurvyDescription[] = _(
"颠倒对手身上的能力变化，\n"
"变成和原来相反的状态。");

static const u8 sDrainingKissDescription[] = _(
"用一个吻吸取对手的HP。\n"
"回复伤害的一半以上的HP。");

static const u8 sCraftyShieldDescription[] = _(
"防住攻击我方的变化招式。\n"
"但无法防住伤害招式的攻击。");

static const u8 sFlowerShieldDescription[] = _(
"使用神奇的力量提高在场的\n"
"所有草属性宝可梦的防御。");

static const u8 sGrassyTerrainDescription[] = _(
"5回合青草场地。在地面上每\n"
"回合都能回复。草威力提高。");

static const u8 sMistyTerrainDescription[] = _(
"5回合内地面上的宝可梦不会\n"
"陷入异常。龙招式伤害减半。");

static const u8 sElectrifyDescription[] = _(
"如果在对手使出招式前输电，\n"
"该回合对手的招式变电属性。");

static const u8 sPlayRoughDescription[] = _(
"与对手嬉闹并攻击。\n"
"有时会降低对手的攻击。");

static const u8 sFairyWindDescription[] = _(
"刮起妖精之风，\n"
"吹向对手进行攻击。");

static const u8 sMoonblastDescription[] = _(
"借用月亮的力量攻击对手。\n"
"有时会降低对手的特攻。");

static const u8 sBoomburstDescription[] = _(
"震耳的爆炸声产生破坏力，\n"
"攻击自己周围所有的宝可梦。");

static const u8 sFairyLockDescription[] = _(
"通过封锁，下一回合\n"
"所有的宝可梦都无法逃走。");

static const u8 sKingsShieldDescription[] = _(
"防住攻击，并变为防御姿态。\n"
"降低接触到的对手的攻击。");

static const u8 sPlayNiceDescription[] = _(
"使对手失去战斗的气力，\n"
"从而降低对手的攻击。");

static const u8 sConfideDescription[] = _(
"和对手进行密语，使其失去集\n"
"中力，从而降低对手的特攻。");

static const u8 sDiamondStormDescription[] = _(
"掀起钻石风暴给予伤害。\n"
"有时会大幅提高自己的防御。");

static const u8 sSteamEruptionDescription[] = _(
"将滚烫的蒸汽喷向对手。\n"
"有时会让对手灼伤。");

static const u8 sHyperspaceHoleDescription[] = _(
"突然出现在对手的侧面攻击。\n"
"还能无视守住和看穿等招式。");

static const u8 sWaterShurikenDescription[] = _(
"用手里剑连续攻击2~5次。\n"
"必定能够先制攻击。");

static const u8 sMysticalFireDescription[] = _(
"从口中喷出灼热的火焰攻击。\n"
"降低对手的特攻。");

static const u8 sSpikyShieldDescription[] = _(
"防住对手攻击的同时，\n"
"接触到自己的对手会受伤。");

static const u8 sAromaticMistDescription[] = _(
"通过神奇的芳香，\n"
"提高我方宝可梦的特防。");

static const u8 sEerieImpulseDescription[] = _(
"从身体放射出怪异电波，\n"
"大幅降低对手特攻。");

static const u8 sVenomDrenchDescription[] = _(
"将毒液泼向对手。已中毒的对\n"
"手，攻击、特攻和速度降低。");

static const u8 sPowderDescription[] = _(
"被撒到粉尘的对手用火招式，\n"
"则会爆炸并给予伤害。");

static const u8 sGeomancyDescription[] = _(
"第1回合吸收能量，下回合\n"
"大幅提高特攻、特防和速度。");

static const u8 sMagneticFluxDescription[] = _(
"提高特性为正电和负电\n"
"的宝可梦的防御和特防。");

static const u8 sHappyHourDescription[] = _(
"如果使用欢乐时光，\n"
"战斗后得到的钱会翻倍。");

static const u8 sElectricTerrainDescription[] = _(
"5回合电气场地。在地面上宝\n"
"可梦无法入眠。电威力提高。");

static const u8 sDazzlingGleamDescription[] = _(
"向对手发射强光，\n"
"并给予伤害。");

static const u8 sCelebrateDescription[] = _(
"宝可梦为十分开心的你庆祝。");

static const u8 sHoldHandsDescription[] = _(
"我方宝可梦之间牵手。\n"
"能带来非常幸福的心情。");

static const u8 sBabyDollEyesDescription[] = _(
"用圆瞳凝视对手降低其攻击。\n"
"必定能够先制攻击。");

static const u8 sNuzzleDescription[] = _(
"将带电的脸颊蹭蹭对手。\n"
"让对手陷入麻痹状态。");

static const u8 sInfestationDescription[] = _(
"在2~5回合内死缠烂打攻击。\n"
"在此期间对手将无法逃走。");

static const u8 sPowerUpPunchDescription[] = _(
"反复击打对手后拳头变硬。\n"
"打中对手攻击就会提高。");

static const u8 sThousandArrowsDescription[] = _(
"可以击中浮在空中的宝可梦。\n"
"对手被击落后，会掉到地面。");

static const u8 sThousandWavesDescription[] = _(
"从地面掀起波浪进行攻击。\n"
"被掀入波浪后，将无法逃走。");

static const u8 sLandsWrathDescription[] = _(
"聚集大地的力量，\n"
"将此力量集中攻击对手。");

static const u8 sLightOfRuinDescription[] = _(
"用永恒之花的力量发射光线。\n"
"自己也会受到不小的伤害。");

static const u8 sOriginPulseDescription[] = _(
"用无数青白色且闪耀的光线\n"
"攻击对手。");

static const u8 sPrecipiceBladesDescription[] = _(
"将大地的力量变化为利刃\n"
"攻击对手。");

static const u8 sLavaPlumeDescription[] = _(
"用熊熊烈火攻击周围所有的\n"
"宝可梦。可能会陷入灼伤。");

static const u8 sLeafStormDescription[] = _(
"用尖尖的叶片卷起风暴。\n"
"但自己的特攻会大幅降低。");

static const u8 sShoreUpDescription[] = _(
"回复自己最大HP的一半。\n"
"在沙暴中回复得更多。");

static const u8 sFirstImpressionDescription[] = _(
"威力很高，但只有在刚出场时\n"
"使出才能成功。");

static const u8 sBanefulBunkerDescription[] = _(
"防住对手攻击的同时，\n"
"让接触到自己的对手中毒。");

static const u8 sSpiritShackleDescription[] = _(
"攻击的同时，缝住对手影子，\n"
"使其无法逃走。");

static const u8 sDarkestLariatDescription[] = _(
"不受到对手能力变化影响，\n"
"给予对手伤害。");

static const u8 sSparklingAriaDescription[] = _(
"受到这招式攻击的对手\n"
"身上的灼伤状态将会痊愈。");

static const u8 sIceHammerDescription[] = _(
"挥舞强力而沉重的拳头。\n"
"但自己的速度会降低。");

static const u8 sFloralHealingDescription[] = _(
"回复对手最大HP的一半。\n"
"在青草场地时，效果会提高。");

static const u8 sHighHorsepowerDescription[] = _(
"使出全身力量，猛攻对手。");

static const u8 sStrengthSapDescription[] = _(
"回复和对手攻击力相同数值\n"
"的HP，降低对手的攻击。");

static const u8 sSolarBladeDescription[] = _(
"在第1回合储存日光的能量，\n"
"下回合使出高威力攻击。");

static const u8 sLeafageDescription[] = _(
"将叶片打向对手，进行攻击。");

static const u8 sSpotlightDescription[] = _(
"给宝可梦打上聚光灯，\n"
"该回合只能瞄准该宝可梦。");

static const u8 sToxicThreadDescription[] = _(
"将有毒的丝吐向对手。\n"
"使其中毒，并降低对手速度。");

static const u8 sLaserFocusDescription[] = _(
"集中精神，\n"
"下次攻击必定会击中要害。");

static const u8 sGearUpDescription[] = _(
"启动齿轮，提高特性为正电\n"
"和负电宝可梦的攻击和特攻。");

static const u8 sThroatChopDescription[] = _(
"对手受到地狱般的痛苦，2回\n"
"合内，无法使出声音类招式。");

static const u8 sPollenPuffDescription[] = _(
"对敌人使用是会爆炸的团子。\n"
"对我方使用则会给予回复。");

static const u8 sAnchorShotDescription[] = _(
"将锚缠住对手进行攻击。\n"
"使对手无法逃走。");

static const u8 sPsychicTerrainDescription[] = _(
"5回合内在地面上不会被先制\n"
"招式攻击。超能力威力提高。");

static const u8 sLungeDescription[] = _(
"全力猛扑对手进行攻击。\n"
"从而降低对手的攻击。");

static const u8 sFireLashDescription[] = _(
"用燃烧的鞭子抽打对手。\n"
"受到攻击的对手防御会降低。");

static const u8 sPowerTripDescription[] = _(
"耀武扬威地攻击对手，自己\n"
"的能力提高越多，威力越大。");

static const u8 sBurnUpDescription[] = _(
"全身燃烧起火焰攻击对手。\n"
"但自己的火属性将会消失。");

static const u8 sSpeedSwapDescription[] = _(
"将对手和自己的速度\n"
"进行互换。");

static const u8 sSmartStrikeDescription[] = _(
"用尖尖的角刺入对手攻击。\n"
"攻击必定会命中。");

static const u8 sPurifyDescription[] = _(
"治愈对手的异常状态。\n"
"治愈后可以回复自己的HP。");

static const u8 sRevelationDanceDescription[] = _(
"全力跳舞进行攻击。此招式\n"
"属性变得和自己属性相同。");

static const u8 sCoreEnforcerDescription[] = _(
"使出后能够消除已经在该回\n"
"合使出招式的对手的特性。");

static const u8 sTropKickDescription[] = _(
"向对手使出南国的火热脚踢。\n"
"从而降低对手的攻击。");

static const u8 sInstructDescription[] = _(
"向对手下达指示，\n"
"让其再次使出刚才的招式。");

static const u8 sBeakBlastDescription[] = _(
"先加热鸟嘴后再进行攻击。\n"
"触碰加热时的鸟嘴会被灼伤。");

static const u8 sClangingScalesDescription[] = _(
"摩擦鳞片发出响亮声音攻击。\n"
"攻击后自己的防御会降低。");

static const u8 sDragonHammerDescription[] = _(
"将身体当作锤子，\n"
"向对手发动袭击，给予伤害。");

static const u8 sBrutalSwingDescription[] = _(
"用自己的身体狂舞挥打，\n"
"给予对手伤害。");

static const u8 sAuroraVeilDescription[] = _(
"在5回合内，减弱物理和特殊\n"
"的伤害。仅冰雹时才能使出。");

static const u8 sShellTrapDescription[] = _(
"设下陷阱，若该回合中受到\n"
"物理攻击，会爆炸炸伤对手。");

static const u8 sFleurCannonDescription[] = _(
"放出强力光束后，\n"
"自己的特攻会大幅降低。");

static const u8 sPsychicFangsDescription[] = _(
"利用精神力量咬住对手攻击。\n"
"还可以破坏光墙和反射壁等。");

static const u8 sStompingTantrumDescription[] = _(
"化悔恨为力量进行攻击。\n"
"如上回合没打中，威力翻倍。");

static const u8 sShadowBoneDescription[] = _(
"用附有灵魂的骨头殴打对手。\n"
"有时会降低对手的防御。");

static const u8 sAccelerockDescription[] = _(
"透过敏捷的动作撞击对手，\n"
"一定能先发制人进行攻击。");

static const u8 sLiquidationDescription[] = _(
"用水之力量撞向对手攻击。\n"
"有时会降低对手的防御。");

static const u8 sPrismaticLaserDescription[] = _(
"用棱镜的力量发射强烈光线。\n"
"下一回合自己将无法动弹。");

static const u8 sSpectralThiefDescription[] = _(
"潜入对手的影子进行攻击。\n"
"会夺取对手的能力提升。");

static const u8 sSunsteelStrikeDescription[] = _(
"以流星般的气势猛撞对手，\n"
"无视对手的特性并进行攻击。");

static const u8 sMoongeistBeamDescription[] = _(
"放出奇异的光线攻击对手，\n"
"无视对手的特性进行攻击。");

static const u8 sTearfulLookDescription[] = _(
"泪眼汪汪，让对手丧失斗志。\n"
"从而降低对手的攻击和特攻。");

static const u8 sZingZapDescription[] = _(
"撞向对手，并发出强电。\n"
"有时会使对手畏缩。");

static const u8 sNaturesMadnessDescription[] = _(
"向对手发泄自然之怒，\n"
"使对手的HP减半。");

static const u8 sMultiAttackDescription[] = _(
"盖高能量撞向对手进行攻击。\n"
"根据存储碟不同，属性不同。");

static const u8 sMindBlownDescription[] = _(
"让自己的头爆炸，来攻击\n"
"周围的一切。自己会受伤。");

static const u8 sPlasmaFistsDescription[] = _(
"用覆盖着电流的拳头攻击。\n"
"使一般属性招式变成电属性。");

static const u8 sPhotonGeyserDescription[] = _(
"比较自己的攻击和特攻，\n"
"用数值较高的一项给予伤害。");

static const u8 sZippyZapDescription[] = _(
"迅猛无比的电击。先制攻击，\n"
"能击中对方的要害。");

static const u8 sSplishySplashDescription[] = _(
"巨浪中注入电能后冲撞对手。\n"
"有时会让对手陷入麻痹状态。");

static const u8 sFloatyFallDescription[] = _(
"飘浮起来后猛地俯冲下去。\n"
"有时会使对手畏缩。");

static const u8 sPikaPapowDescription[] = _(
"越喜欢训练家威力就越强。\n"
"攻击必定会命中。");

static const u8 sBouncyBubbleDescription[] = _(
    "An attack that absorbs\n"
#if B_UPDATED_MOVE_DATA >= GEN_8
    "all the damage inflicted.");
#else
    "half the damage inflicted.");
#endif

static const u8 sBuzzyBuzzDescription[] = _(
"放出电击攻击对手。\n"
"让对手陷入麻痹状态。");

static const u8 sSizzlySlideDescription[] = _(
"用燃烧的身体猛烈地冲撞。\n"
"让对手陷入灼伤状态。");

static const u8 sGlitzyGlowDescription[] = _(
"利用念力强攻。制造一道能\n"
"减弱对手特殊攻击的墙壁。");

static const u8 sBaddyBadDescription[] = _(
"恶行恶相地攻击。制造一道\n"
"能减弱对手物理攻击的墙壁。");

static const u8 sSappySeedDescription[] = _(
"巨大的藤蔓播撒种子攻击。\n"
"种子每回合都会吸取对手HP。");

static const u8 sFreezyFrostDescription[] = _(
"利用冰冷的黑雾结晶攻击。\n"
"使全体宝可梦能力变回原点。");

static const u8 sSparklySwirlDescription[] = _(
"芬芳刺鼻的龙卷风吞噬对方。并治愈我方宝可梦异常状态。");

static const u8 sVeeveeVolleyDescription[] = _(
"越喜欢训练家冲撞威力越强。\n"
"攻击必定会命中。");

static const u8 sDoubleIronBashDescription[] = _(
"高速旋转连续2次打击对手。\n"
"有时会使对手畏缩。");

// GEN 8
static const u8 sDynamaxCannonDescription[] = _(
"从核心放出光束进行攻击。");
    
static const u8 sSnipeShotDescription[] = _(
"无视对手招式或特性的吸引\n"
"效果。可向选定的对手攻击。");
    
static const u8 sJawLockDescription[] = _(
"使双方无法替换宝可梦。\n"
"其中一方退场才解除效果。");
    
static const u8 sStuffCheeksDescription[] = _(
"吃掉携带的树果，\n"
"大幅提高防御。");
    
static const u8 sNoRetreatDescription[] = _(
"提高自己的所有能力，\n"
"但无法替换或逃走。");
    
static const u8 sTarShotDescription[] = _(
"降低对手的速度，\n"
"并且使对手的弱点变为火。");
    
static const u8 sMagicPowderDescription[] = _(
"向对手喷洒魔法粉，\n"
"使对手变为超能力属性。");
    
static const u8 sDragonDartsDescription[] = _(
"进行2次攻击。如2只宝可梦，\n"
"则对它们各进行1次攻击。");
    
static const u8 sTeatimeDescription[] = _(
"场上的所有宝可梦都会\n"
"吃掉自己携带的树果。");
    
static const u8 sOctolockDescription[] = _(
"让对手无法逃走。被固定后，\n"
"每回合都会降低防御和特防。");
    
static const u8 sBoltBeakDescription[] = _(
"用带电的喙啄刺对手。\n"
"如先出手，招式威力变2倍。");
    
static const u8 sFishiousRendDescription[] = _(
"用坚硬的腮咬住对手。\n"
"如先出手，招式威力变2倍。");
    
static const u8 sCourtChangeDescription[] = _(
"用神奇的力量交换双方的\n"
"场地效果。");
    
static const u8 sClangorousSoulDescription[] = _(
"削减少许自己的HP，\n"
"使所有能力都提高。");
    
static const u8 sBodyPressDescription[] = _(
"用身体撞向对手进行攻击。\n"
"防御越高，伤害就越高。");
    
static const u8 sDecorateDescription[] = _(
"通过装饰，\n"
"大幅提高对方的攻击和特攻。");
    
static const u8 sDrumBeatingDescription[] = _(
"用鼓点来控制鼓的根部攻击，\n"
"从而降低对手的速度。");
    
static const u8 sSnapTrapDescription[] = _(
"使用捕兽夹，在4~5回合内，\n"
"夹住对手进行攻击。");
    
static const u8 sPyroBallDescription[] = _(
"形成火球攻击对手。\n"
"有时会使对手陷入灼伤状态。");
    
static const u8 sBehemothBladeDescription[] = _(
"变身为巨大的剑，挥斩对手。");
    
static const u8 sBehemothBashDescription[] = _(
"变身为巨大的盾，撞击对手。");
    
    
static const u8 sAuraWheelDescription[] = _(
"用颊囊里的能量攻击，自身\n"
"速度提高，属性随样子改变。");
    
static const u8 sBreakingSwipeDescription[] = _(
"用坚韧的尾巴猛扫对手攻击，\n"
"从而降低对手的攻击。");
    
static const u8 sBranchPokeDescription[] = _(
"使用尖锐的树枝刺向对手\n"
"进行攻击。");
    
static const u8 sOverdriveDescription[] = _(
"奏响吉他和贝斯，\n"
"释放出剧烈震动攻击对手。");
    
static const u8 sAppleAcidDescription[] = _(
"使用酸性液体进行攻击。\n"
"降低对手的特防。");
    
static const u8 sGravAppleDescription[] = _(
"从高处落下苹果造成伤害。\n"
"可降低对手的防御。");
    
static const u8 sSpiritBreakDescription[] = _(
"让对手一蹶不振的气势攻击。\n"
"会降低对手的特攻。");
    
static const u8 sStrangeSteamDescription[] = _(
"喷出烟雾攻击对手。\n"
"有时会使对手混乱。");
    
static const u8 sLifeDewDescription[] = _(
"喷洒出神奇的水，\n"
"回复自己和场上同伴的HP。");
    
static const u8 sObstructDescription[] = _(
"完全抵挡攻击。连续使用易\n"
"失败。触碰后防御大幅降低。");
    
static const u8 sFalseSurrenderDescription[] = _(
"用凌乱的头发进行突刺。\n"
"攻击必定会命中。");
    
static const u8 sMeteorAssaultDescription[] = _(
"大力挥舞粗壮的茎进行攻击。\n"
"下一回合自己将无法动弹。");
    
static const u8 sEternabeamDescription[] = _(
"发动的最强攻击。\n"
"下一回合自己将无法动弹。");
    
static const u8 sSteelBeamDescription[] = _(
"钢铁化为光束激烈地发射。\n"
"自己也会受到伤害。");

static const u8 sExpandingForceDescription[] = _(
"用精神力量对所有对手攻击。\n"
"在精神场地上威力提高。");

static const u8 sSteelRollerDescription[] = _(
"在破坏场地的同时攻击对手。\n"
"如没任何场地存在，会失败。");

static const u8 sScaleShotDescription[] = _(
"发射鳞片2~5次连续攻击。\n"
"速度会提高但防御会降低。");

static const u8 sMeteorBeamDescription[] = _(
"第1回合聚集宇宙之力提高\n"
"特攻，第2回合攻击对手。");

static const u8 sShellSideArmDescription[] = _(
"用物理或特殊能造成较高伤\n"
"害的方式攻击。可能会中毒。");

static const u8 sMistyExplosionDescription[] = _(
"濒死后对周围宝可梦攻击。\n"
"在薄雾场地上威力提高。");

static const u8 sGrassyGlideDescription[] = _(
"在地面上滑行般地攻击对手。\n"
"在青草场地上必定先制攻击。");

static const u8 sRisingVoltageDescription[] = _(
"电击攻击。当对手处于电气\n"
"场地上时，招式威力变2倍。");

static const u8 sTerrainPulseDescription[] = _(
"借助场地的力量进行攻击。\n"
"场地不同，属性和威力不同。");

static const u8 sSkitterSmackDescription[] = _(
"从对手背后爬近后进行攻击。\n"
"会降低对手的特攻。");

static const u8 sBurningJealousyDescription[] = _(
"用嫉妒的能量攻击对手。\n"
"如该回合能力提高会被灼伤。");

static const u8 sLashOutDescription[] = _(
"恼怒地攻击对手。该回合\n"
"如能力被降低，威力变2倍。");

static const u8 sPoltergeistDescription[] = _(
"操纵对手的持有物进行攻击。\n"
"当对手没携带道具时会失败。");

static const u8 sCorrosiveGasDescription[] = _(
"用强酸气体包裹周围宝可梦，\n"
"并融化其所携带的道具。");

static const u8 sCoachingDescription[] = _(
"通过进行正确合理的指导，\n"
"提高我方全员的攻击和防御。");

static const u8 sFlipTurnDescription[] = _(
"在攻击之后急速返回，\n"
"和后备宝可梦进行替换。");

static const u8 sTripleAxelDescription[] = _(
"连续3次踢对手进行攻击。\n"
"每次踢中，威力都会提高。");

static const u8 sDualWingbeatDescription[] = _(
"将翅膀撞向对手进行攻击。\n"
"连续2次给予伤害。");

static const u8 sScorchingSandsDescription[] = _(
"将滚烫的沙子砸向对手。\n"
"有时会让对手陷入灼伤状态。");

static const u8 sJungleHealingDescription[] = _(
"与丛林融为一体，回复\n"
"自己和同伴的HP和状态。");

static const u8 sWickedBlowDescription[] = _(
"恶之流派的猛烈一击。\n"
"必定会击中要害。");

static const u8 sSurgingStrikesDescription[] = _(
"水之流派的流水般3次连击。\n"
"必定会击中要害。");

static const u8 sThunderCageDescription[] = _(
"将对手困在电流的囚笼中，\n"
"在2~5回合内进行攻击。");

static const u8 sDragonEnergyDescription[] = _(
"把生命力转换为力量攻击。\n"
"HP越少招式的威力越小。");

static const u8 sFreezingGlareDescription[] = _(
"从双眼发射精神力量攻击。\n"
#if B_USE_FROSTBITE == TRUE
    "the eyes. May frostbite.");
#else
"有时会让对手陷入冰冻状态。");
#endif

static const u8 sFieryWrathDescription[] = _(
"愤怒化为火焰般的气场攻击。\n"
"有时会使对手畏缩。");

static const u8 sThunderousKickDescription[] = _(
"戏耍对手的同时使出脚踢。\n"
"可降低对手的防御。");

static const u8 sGlacialLanceDescription[] = _(
"向对手投掷掀起暴风雪的\n"
"冰矛进行攻击。");

static const u8 sAstralBarrageDescription[] = _(
"用大量的小灵体向对手\n"
"发起攻击。");

static const u8 sEerieSpellDescription[] = _(
"用强大的精神力量攻击。\n"
"对手最后用的招式减少3PP。");

static const u8 sDireClawDescription[] = _(
    "High critical hit chance. May\n"
    "paralyze, poison or drowse.");

static const u8 sPsyshieldBashDescription[] = _(
    "Hits a foe with psychic\n"
    "energy. May raise Defense.");

static const u8 sPowerShiftDescription[] = _(
    "The user swaps its Attack\n"
    "and Defense stats.");

static const u8 sStoneAxeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sSpringtideStormDescription[] = _(
    "Wraps a foe in fierce winds.\n"
    "Varies with the user's form.");

static const u8 sMysticalPowerDescription[] = _(
    "A mysterious power strikes,\n"
    "raising the user's Sp. Atk.");

static const u8 sRagingFuryDescription[] = _(
    "A rampage of 2 to 3 turns\n"
    "that confuses the user.");

static const u8 sWaveCrashDescription[] = _(
    "A slam shrouded in water.\n"
    "It also hurts the user.");

static const u8 sChloroblastDescription[] = _(
    "A user-hurting blast of\n"
    "amassed chlorophyll.");

static const u8 sMountainGaleDescription[] = _(
    "Giant chunks of ice damage\n"
    "the foe. It may flinch.");

static const u8 sVictoryDanceDescription[] = _(
    "Dances to raise Attack,\n"
    "Defense and Speed.");

static const u8 sHeadlongRushDescription[] = _(
    "Hits with a full-body tackle.\n"
    "Lowers the users's defenses.");

static const u8 sBarbBarrageDescription[] = _(
    "Can poison on impact. Powers\n"
    "up against poisoned foes.");

static const u8 sEsperWingDescription[] = _(
    "High critical hit ratio.\n"
    "Ups the user's Speed.");

static const u8 sBitterMaliceDescription[] = _(
    "A spine-chilling resentment.\n"
    "May lower the foe's Attack.");

static const u8 sShelterDescription[] = _(
    "The user hardens their skin,\n"
    "sharply raising its Defense.");

static const u8 sTripleArrowsDescription[] = _(
    "High critical hit ratio.\n"
    "May lower Defense or flinch.");

static const u8 sInfernalParadeDescription[] = _(
    "Hurts a foe harder if it has\n"
    "an ailment. May leave a burn.");

static const u8 sCeaselessEdgeDescription[] = _(
    "High critical hit ratio. Sets\n"
    "Splinters that hurt the foe.");

static const u8 sBleakwindStormDescription[] = _(
    "Hits with brutal, cold winds.\n"
    "May lower the foe's Speed.");

static const u8 sWildboltStormDescription[] = _(
    "Hits with a brutal tempest.\n"
    "May inflict paralysis.");

static const u8 sSandsearStormDescription[] = _(
    "Hits with brutally hot sand.\n"
    "May inflict a burn.");

static const u8 sLunarBlessingDescription[] = _(
    "The user heals and cures\n"
    "itself and its ally.");

static const u8 sTakeHeartDescription[] = _(
    "The user lifts its spirits to\n"
    "heal and strengthen itself.");

static const u8 sTeraBlastDescription[] = _(
    "If the user's Terastallized,\n"
    "it hits with its Tera-type.");

static const u8 sSilkTrapDescription[] =_(
    "Protects itself, lowering\n"
    "Speed on contact.");

static const u8 sAxeKickDescription[] = _(
    "May miss and hurt the kicker.\n"
    "May cause confusion.");

static const u8 sLastRespectsDescription[] = _(
    "This move deals more damage\n"
    "for each defeated ally.");

static const u8 sLuminaCrashDescription[] = _(
    "A mind-affecting light\n"
    "harshly lowers Sp. Def.");

static const u8 sOrderUpDescription[] = _(
    "Boosts a user's stats\n"
    "depending on Tatsugiri.");

static const u8 sJetPunchDescription[] = _(
    "A punch is thrown at blinding\n"
    "speed to strike first.");

static const u8 sSpicyExtractDescription[] = _(
    "Sharply ups target's Attack,\n"
    "harshly lowers its Defense.");

static const u8 sSpinOutDescription[] = _(
    "Furiously strains its legs.\n"
    "Harshly lowers user's Speed.");

static const u8 sPopulationBombDescription[] = _(
    "The user's fellows hit one\n"
    "to ten times in a row.");

static const u8 sIceSpinnerDescription[] = _(
    "Ice-covered feet hit a foe\n"
    "and destroy the terrain.");

static const u8 sGlaiveRushDescription[] = _(
    "Foe attacks next turn can't\n"
    "miss and do double damage.");

static const u8 sRevivalBlessingDescription[] = _(
    "Revives a fainted party {PKMN}\n"
    "and restores half of its HP.");

static const u8 sSaltCureDescription[] = _(
    "Hurts foe every turn. Double\n"
    "damage to Steel and Water.");

static const u8 sTripleDiveDescription[] = _(
    "Hits target with splashes\n"
    "of water 3 times in a row.");

static const u8 sMortalSpinDescription[] = _(
    "Erases trap moves and Leech\n"
    "Seed. Poisons adjecent foes.");

static const u8 sDoodleDescription[] = _(
    "Changes user's and ally's\n"
    "Ability into the target's.");

static const u8 sFilletAwayDescription[] = _(
    "Sharply boosts offenses and\n"
    "Speed by using its own HP.");

static const u8 sKowtowCleaveDescription[] = _(
    "User slashes the foe after\n"
    "kowtowing. It never misses.");

static const u8 sFlowerTrickDescription[] = _(
    "Rigged bouquet. Always gets\n"
    "a critical hit, never missing.");

static const u8 sTorchSongDescription[] = _(
    "Flames scorch the target.\n"
    "Boosts the user's Sp. Atk.");

static const u8 sAquaStepDescription[] = _(
    "Hits with light, fluid dance\n"
    "steps. Ups the user's Speed.");

static const u8 sRagingBullDescription[] = _(
    "Tackle that breaks barriers.\n"
    "User's form determines type.");

static const u8 sMakeItRainDescription[] = _(
    "Lowers the user's Sp. Atk.\n"
    "Money is recovered after.");

static const u8 sRuinationDescription[] = _(
    "Summons a ruinous disaster\n"
    "and cuts half the foe's HP.");

static const u8 sCollisionCourseDescription[] = _(
    "Prehistoric explosion that's\n"
    "stronger if supereffective.");

static const u8 sElectroDriftDescription[] = _(
    "Futuristic electricity. It's\n"
    "stronger if supereffective.");

static const u8 sShedTailDescription[] = _(
    "Creates a Substitute for\n"
    "itself before switching out.");

static const u8 sChillyReceptionDescription[] =_(
    "Bad joke summons snowstorm.\n"
    "The user also switches out.");

static const u8 sTidyUpDescription[] = _(
    "User tidies up hazards and\n"
    "raises its Attack and Speed.");

static const u8 sSnowscapeDescription[] = _(
    "Summons a snowstorm that\n"
    "lasts for five turns.");

static const u8 sPounceDescription[] = _(
    "The user pounces on the foe,\n"
    "lowering its Speed.");

static const u8 sTrailblazeDescription[] = _(
    "The user attacks suddenly,\n"
    "raising its Speed.");

static const u8 sChillingWaterDescription[] = _(
    "A shower with ice-cold water\n"
    "lowers the target's Attack.");

static const u8 sHyperDrillDescription[] = _(
    "A spinning pointed part\n"
    "bypasses a foe's Protect.");

static const u8 sTwinBeamDescription[] = _(
    "Mystical eye-beams that hit\n"
    "the target twice in a row.");

static const u8 sRageFistDescription[] = _(
    "The more the user has been\n"
    "hit, the stronger the move.");

static const u8 sArmorCannonDescription[] = _(
    "A strong attack but lowers\n"
    "the defensive stats.");

static const u8 sBitterBladeDescription[] = _(
    "An attack that absorbs\n"
    "half the damage inflicted.");

static const u8 sDoubleShockDescription[] = _(
    "Discharges all electricity,\n"
    "losing the Electric type.");

static const u8 sGigatonHammerDescription[] = _(
    "Swings a huge hammer. Can't\n"
    "be used twice in a row.");

static const u8 sComeuppanceDescription[] = _(
    "Retaliates strongly against\n"
    "who last hurt the user.");

static const u8 sAquaCutterDescription[] = _(
    "Pressurized water cut with a\n"
    "high critical-hit ratio.");

static const u8 sBlazingTorqueDescription[] = _(
    "---");

static const u8 sWickedTorqueDescription[] = _(
    "---");

static const u8 sNoxiousTorqueDescription[] = _(
    "---");

static const u8 sCombatTorqueDescription[] = _(
    "---");

static const u8 sMagicalTorqueDescription[] = _(
    "---");

static const u8 sPsybladeDescription[] = _(
    "This move's power increases\n"
    "when on Electric Terrain.");

static const u8 sHydroSteamDescription[] = _(
    "This move's power increases\n"
    "under harsh sunlight.");

static const u8 sBloodMoonDescription[] = _(
    "Unleashes the blood moon.\n"
    "Can't be used twice in a row.");

static const u8 sMatchaGotchaDescription[] = _(
    "Absorbs half the damage\n"
    "inflicted. May cause a burn.");

static const u8 sSyrupBombDescription[] = _(
    "Lowers the foe's speed\n"
    "each turn for 3 turns.");

static const u8 sIvyCudgelDescription[] = _(
    "Type changes with held mask.\n"
    "High critical-hit ratio.");

static const u8 sElectroShotDescription[] = _(
    "Absorbs electricity in one turn,\n"
    "then attacks next turn.");

static const u8 sTeraStarstormDescription[] = _(
    "Damages all opponents if user is\n"
    "Stellar form Terapagos.");

static const u8 sFickleBeamDescription[] = _(
    "Shoots a beam of light. Sometimes\n"
    "twice as strong.");

static const u8 sBurningBulwarkDescription[] = _(
    "Evades attack, and burns\n"
    "the foe if struck.");

static const u8 sTachyonCutterDescription[] = _(
    "Launches particle blades at\n"
    "the target. Strikes twice.");

static const u8 sDragonCheerDescription[] = _(
    "Increases allies' critical hit\n"
    "ration, especially if Dragons.");

static const u8 sAlluringVoiceDescription[] = _(
    "Confuses the target if their\n"
    "stats were boosted this turn.");

static const u8 sTemperFlareDescription[] = _(
    "A desperation attack. Power\n"
    "doubles if last move failed.");

static const u8 sSupercellSlamDescription[] = _(
    "An electrified slam. If it\n"
    "misses, the user is hurt.");

static const u8 sPsychicNoiseDescription[] = _(
    "Unpleasant sound waves that\n"
    "damage and prevent healing.");

static const u8 sUpperHandDescription[] = _(
    "Makes the target flinch if\n"
    "readying a priority move.");

static const u8 sMalignantChainDescription[] = _(
    "A corrosive chain attack\n"
    "that may badly poison.");

const u8 gNotDoneYetDescription[] = _(
    "This move can't be used. Its\n"
    "effect is in development.");

#undef BINDING_TURNS

// MOVE_NONE is ignored in this table. Make sure to always subtract 1 before getting the right pointer.
const u8 *const gMoveDescriptionPointers[MOVES_COUNT - 1] =
{
    [MOVE_POUND - 1] = sPoundDescription,
    [MOVE_KARATE_CHOP - 1] = sKarateChopDescription,
    [MOVE_DOUBLE_SLAP - 1] = sDoubleSlapDescription,
    [MOVE_COMET_PUNCH - 1] = sCometPunchDescription,
    [MOVE_MEGA_PUNCH - 1] = sMegaPunchDescription,
    [MOVE_PAY_DAY - 1] = sPayDayDescription,
    [MOVE_FIRE_PUNCH - 1] = sFirePunchDescription,
    [MOVE_ICE_PUNCH - 1] = sIcePunchDescription,
    [MOVE_THUNDER_PUNCH - 1] = sThunderPunchDescription,
    [MOVE_SCRATCH - 1] = sScratchDescription,
    [MOVE_VISE_GRIP - 1] = sViseGripDescription,
    [MOVE_GUILLOTINE - 1] = sGuillotineDescription,
    [MOVE_RAZOR_WIND - 1] = sRazorWindDescription,
    [MOVE_SWORDS_DANCE - 1] = sSwordsDanceDescription,
    [MOVE_CUT - 1] = sCutDescription,
    [MOVE_GUST - 1] = sGustDescription,
    [MOVE_WING_ATTACK - 1] = sWingAttackDescription,
    [MOVE_WHIRLWIND - 1] = sWhirlwindDescription,
    [MOVE_FLY - 1] = sFlyDescription,
    [MOVE_BIND - 1] = sBindDescription,
    [MOVE_SLAM - 1] = sSlamDescription,
    [MOVE_VINE_WHIP - 1] = sVineWhipDescription,
    [MOVE_STOMP - 1] = sStompDescription,
    [MOVE_DOUBLE_KICK - 1] = sDoubleKickDescription,
    [MOVE_MEGA_KICK - 1] = sMegaKickDescription,
    [MOVE_JUMP_KICK - 1] = sJumpKickDescription,
    [MOVE_ROLLING_KICK - 1] = sRollingKickDescription,
    [MOVE_SAND_ATTACK - 1] = sSandAttackDescription,
    [MOVE_HEADBUTT - 1] = sHeadbuttDescription,
    [MOVE_HORN_ATTACK - 1] = sHornAttackDescription,
    [MOVE_FURY_ATTACK - 1] = sFuryAttackDescription,
    [MOVE_HORN_DRILL - 1] = sHornDrillDescription,
    [MOVE_TACKLE - 1] = sTackleDescription,
    [MOVE_BODY_SLAM - 1] = sBodySlamDescription,
    [MOVE_WRAP - 1] = sWrapDescription,
    [MOVE_TAKE_DOWN - 1] = sTakeDownDescription,
    [MOVE_THRASH - 1] = sThrashDescription,
    [MOVE_DOUBLE_EDGE - 1] = sDoubleEdgeDescription,
    [MOVE_TAIL_WHIP - 1] = sTailWhipDescription,
    [MOVE_POISON_STING - 1] = sPoisonStingDescription,
    [MOVE_TWINEEDLE - 1] = sTwineedleDescription,
    [MOVE_PIN_MISSILE - 1] = sPinMissileDescription,
    [MOVE_LEER - 1] = sLeerDescription,
    [MOVE_BITE - 1] = sBiteDescription,
    [MOVE_GROWL - 1] = sGrowlDescription,
    [MOVE_ROAR - 1] = sRoarDescription,
    [MOVE_SING - 1] = sSingDescription,
    [MOVE_SUPERSONIC - 1] = sSupersonicDescription,
    [MOVE_SONIC_BOOM - 1] = sSonicBoomDescription,
    [MOVE_DISABLE - 1] = sDisableDescription,
    [MOVE_ACID - 1] = sAcidDescription,
    [MOVE_EMBER - 1] = sEmberDescription,
    [MOVE_FLAMETHROWER - 1] = sFlamethrowerDescription,
    [MOVE_MIST - 1] = sMistDescription,
    [MOVE_WATER_GUN - 1] = sWaterGunDescription,
    [MOVE_HYDRO_PUMP - 1] = sHydroPumpDescription,
    [MOVE_SURF - 1] = sSurfDescription,
    [MOVE_ICE_BEAM - 1] = sIceBeamDescription,
    [MOVE_BLIZZARD - 1] = sBlizzardDescription,
    [MOVE_PSYBEAM - 1] = sPsybeamDescription,
    [MOVE_BUBBLE_BEAM - 1] = sBubbleBeamDescription,
    [MOVE_AURORA_BEAM - 1] = sAuroraBeamDescription,
    [MOVE_HYPER_BEAM - 1] = sHyperBeamDescription,
    [MOVE_PECK - 1] = sPeckDescription,
    [MOVE_DRILL_PECK - 1] = sDrillPeckDescription,
    [MOVE_SUBMISSION - 1] = sSubmissionDescription,
    [MOVE_LOW_KICK - 1] = sLowKickDescription,
    [MOVE_COUNTER - 1] = sCounterDescription,
    [MOVE_SEISMIC_TOSS - 1] = sSeismicTossDescription,
    [MOVE_STRENGTH - 1] = sStrengthDescription,
    [MOVE_ABSORB - 1] = sAbsorbDescription,
    [MOVE_MEGA_DRAIN - 1] = sMegaDrainDescription,
    [MOVE_LEECH_SEED - 1] = sLeechSeedDescription,
    [MOVE_GROWTH - 1] = sGrowthDescription,
    [MOVE_RAZOR_LEAF - 1] = sRazorLeafDescription,
    [MOVE_SOLAR_BEAM - 1] = sSolarBeamDescription,
    [MOVE_POISON_POWDER - 1] = sPoisonPowderDescription,
    [MOVE_STUN_SPORE - 1] = sStunSporeDescription,
    [MOVE_SLEEP_POWDER - 1] = sSleepPowderDescription,
    [MOVE_PETAL_DANCE - 1] = sPetalDanceDescription,
    [MOVE_STRING_SHOT - 1] = sStringShotDescription,
    [MOVE_DRAGON_RAGE - 1] = sDragonRageDescription,
    [MOVE_FIRE_SPIN - 1] = sFireSpinDescription,
    [MOVE_THUNDER_SHOCK - 1] = sThunderShockDescription,
    [MOVE_THUNDERBOLT - 1] = sThunderboltDescription,
    [MOVE_THUNDER_WAVE - 1] = sThunderWaveDescription,
    [MOVE_THUNDER - 1] = sThunderDescription,
    [MOVE_ROCK_THROW - 1] = sRockThrowDescription,
    [MOVE_EARTHQUAKE - 1] = sEarthquakeDescription,
    [MOVE_FISSURE - 1] = sFissureDescription,
    [MOVE_DIG - 1] = sDigDescription,
    [MOVE_TOXIC - 1] = sToxicDescription,
    [MOVE_CONFUSION - 1] = sConfusionDescription,
    [MOVE_PSYCHIC - 1] = sPsychicDescription,
    [MOVE_HYPNOSIS - 1] = sHypnosisDescription,
    [MOVE_MEDITATE - 1] = sMeditateDescription,
    [MOVE_AGILITY - 1] = sAgilityDescription,
    [MOVE_QUICK_ATTACK - 1] = sQuickAttackDescription,
    [MOVE_RAGE - 1] = sRageDescription,
    [MOVE_TELEPORT - 1] = sTeleportDescription,
    [MOVE_NIGHT_SHADE - 1] = sNightShadeDescription,
    [MOVE_MIMIC - 1] = sMimicDescription,
    [MOVE_SCREECH - 1] = sScreechDescription,
    [MOVE_DOUBLE_TEAM - 1] = sDoubleTeamDescription,
    [MOVE_RECOVER - 1] = sRecoverDescription,
    [MOVE_HARDEN - 1] = sHardenDescription,
    [MOVE_MINIMIZE - 1] = sMinimizeDescription,
    [MOVE_SMOKESCREEN - 1] = sSmokescreenDescription,
    [MOVE_CONFUSE_RAY - 1] = sConfuseRayDescription,
    [MOVE_WITHDRAW - 1] = sWithdrawDescription,
    [MOVE_DEFENSE_CURL - 1] = sDefenseCurlDescription,
    [MOVE_BARRIER - 1] = sBarrierDescription,
    [MOVE_LIGHT_SCREEN - 1] = sLightScreenDescription,
    [MOVE_HAZE - 1] = sHazeDescription,
    [MOVE_REFLECT - 1] = sReflectDescription,
    [MOVE_FOCUS_ENERGY - 1] = sFocusEnergyDescription,
    [MOVE_BIDE - 1] = sBideDescription,
    [MOVE_METRONOME - 1] = sMetronomeDescription,
    [MOVE_MIRROR_MOVE - 1] = sMirrorMoveDescription,
    [MOVE_SELF_DESTRUCT - 1] = sSelfDestructDescription,
    [MOVE_EGG_BOMB - 1] = sEggBombDescription,
    [MOVE_LICK - 1] = sLickDescription,
    [MOVE_SMOG - 1] = sSmogDescription,
    [MOVE_SLUDGE - 1] = sSludgeDescription,
    [MOVE_BONE_CLUB - 1] = sBoneClubDescription,
    [MOVE_FIRE_BLAST - 1] = sFireBlastDescription,
    [MOVE_WATERFALL - 1] = sWaterfallDescription,
    [MOVE_CLAMP - 1] = sClampDescription,
    [MOVE_SWIFT - 1] = sSwiftDescription,
    [MOVE_SKULL_BASH - 1] = sSkullBashDescription,
    [MOVE_SPIKE_CANNON - 1] = sSpikeCannonDescription,
    [MOVE_CONSTRICT - 1] = sConstrictDescription,
    [MOVE_AMNESIA - 1] = sAmnesiaDescription,
    [MOVE_KINESIS - 1] = sKinesisDescription,
    [MOVE_SOFT_BOILED - 1] = sSoftBoiledDescription,
    [MOVE_HIGH_JUMP_KICK - 1] = sHighJumpKickDescription,
    [MOVE_GLARE - 1] = sGlareDescription,
    [MOVE_DREAM_EATER - 1] = sDreamEaterDescription,
    [MOVE_POISON_GAS - 1] = sPoisonGasDescription,
    [MOVE_BARRAGE - 1] = sBarrageDescription,
    [MOVE_LEECH_LIFE - 1] = sLeechLifeDescription,
    [MOVE_LOVELY_KISS - 1] = sLovelyKissDescription,
    [MOVE_SKY_ATTACK - 1] = sSkyAttackDescription,
    [MOVE_TRANSFORM - 1] = sTransformDescription,
    [MOVE_BUBBLE - 1] = sBubbleDescription,
    [MOVE_DIZZY_PUNCH - 1] = sDizzyPunchDescription,
    [MOVE_SPORE - 1] = sSporeDescription,
    [MOVE_FLASH - 1] = sFlashDescription,
    [MOVE_PSYWAVE - 1] = sPsywaveDescription,
    [MOVE_SPLASH - 1] = sSplashDescription,
    [MOVE_ACID_ARMOR - 1] = sAcidArmorDescription,
    [MOVE_CRABHAMMER - 1] = sCrabhammerDescription,
    [MOVE_EXPLOSION - 1] = sExplosionDescription,
    [MOVE_FURY_SWIPES - 1] = sFurySwipesDescription,
    [MOVE_BONEMERANG - 1] = sBonemerangDescription,
    [MOVE_REST - 1] = sRestDescription,
    [MOVE_ROCK_SLIDE - 1] = sRockSlideDescription,
    [MOVE_HYPER_FANG - 1] = sHyperFangDescription,
    [MOVE_SHARPEN - 1] = sSharpenDescription,
    [MOVE_CONVERSION - 1] = sConversionDescription,
    [MOVE_TRI_ATTACK - 1] = sTriAttackDescription,
    [MOVE_SUPER_FANG - 1] = sSuperFangDescription,
    [MOVE_SLASH - 1] = sSlashDescription,
    [MOVE_SUBSTITUTE - 1] = sSubstituteDescription,
    [MOVE_STRUGGLE - 1] = sStruggleDescription,
    [MOVE_SKETCH - 1] = sSketchDescription,
    [MOVE_TRIPLE_KICK - 1] = sTripleKickDescription,
    [MOVE_THIEF - 1] = sThiefDescription,
    [MOVE_SPIDER_WEB - 1] = sSpiderWebDescription,
    [MOVE_MIND_READER - 1] = sMindReaderDescription,
    [MOVE_NIGHTMARE - 1] = sNightmareDescription,
    [MOVE_FLAME_WHEEL - 1] = sFlameWheelDescription,
    [MOVE_SNORE - 1] = sSnoreDescription,
    [MOVE_CURSE - 1] = sCurseDescription,
    [MOVE_FLAIL - 1] = sFlailDescription,
    [MOVE_CONVERSION_2 - 1] = sConversion2Description,
    [MOVE_AEROBLAST - 1] = sAeroblastDescription,
    [MOVE_COTTON_SPORE - 1] = sCottonSporeDescription,
    [MOVE_REVERSAL - 1] = sReversalDescription,
    [MOVE_SPITE - 1] = sSpiteDescription,
    [MOVE_POWDER_SNOW - 1] = sPowderSnowDescription,
    [MOVE_PROTECT - 1] = sProtectDescription,
    [MOVE_MACH_PUNCH - 1] = sMachPunchDescription,
    [MOVE_SCARY_FACE - 1] = sScaryFaceDescription,
    [MOVE_FEINT_ATTACK - 1] = sFeintAttackDescription,
    [MOVE_SWEET_KISS - 1] = sSweetKissDescription,
    [MOVE_BELLY_DRUM - 1] = sBellyDrumDescription,
    [MOVE_SLUDGE_BOMB - 1] = sSludgeBombDescription,
    [MOVE_MUD_SLAP - 1] = sMudSlapDescription,
    [MOVE_OCTAZOOKA - 1] = sOctazookaDescription,
    [MOVE_SPIKES - 1] = sSpikesDescription,
    [MOVE_ZAP_CANNON - 1] = sZapCannonDescription,
    [MOVE_FORESIGHT - 1] = sForesightDescription,
    [MOVE_DESTINY_BOND - 1] = sDestinyBondDescription,
    [MOVE_PERISH_SONG - 1] = sPerishSongDescription,
    [MOVE_ICY_WIND - 1] = sIcyWindDescription,
    [MOVE_DETECT - 1] = sDetectDescription,
    [MOVE_BONE_RUSH - 1] = sBoneRushDescription,
    [MOVE_LOCK_ON - 1] = sLockOnDescription,
    [MOVE_OUTRAGE - 1] = sOutrageDescription,
    [MOVE_SANDSTORM - 1] = sSandstormDescription,
    [MOVE_GIGA_DRAIN - 1] = sGigaDrainDescription,
    [MOVE_ENDURE - 1] = sEndureDescription,
    [MOVE_CHARM - 1] = sCharmDescription,
    [MOVE_ROLLOUT - 1] = sRolloutDescription,
    [MOVE_FALSE_SWIPE - 1] = sFalseSwipeDescription,
    [MOVE_SWAGGER - 1] = sSwaggerDescription,
    [MOVE_MILK_DRINK - 1] = sMilkDrinkDescription,
    [MOVE_SPARK - 1] = sSparkDescription,
    [MOVE_FURY_CUTTER - 1] = sFuryCutterDescription,
    [MOVE_STEEL_WING - 1] = sSteelWingDescription,
    [MOVE_MEAN_LOOK - 1] = sMeanLookDescription,
    [MOVE_ATTRACT - 1] = sAttractDescription,
    [MOVE_SLEEP_TALK - 1] = sSleepTalkDescription,
    [MOVE_HEAL_BELL - 1] = sHealBellDescription,
    [MOVE_RETURN - 1] = sReturnDescription,
    [MOVE_PRESENT - 1] = sPresentDescription,
    [MOVE_FRUSTRATION - 1] = sFrustrationDescription,
    [MOVE_SAFEGUARD - 1] = sSafeguardDescription,
    [MOVE_PAIN_SPLIT - 1] = sPainSplitDescription,
    [MOVE_SACRED_FIRE - 1] = sSacredFireDescription,
    [MOVE_MAGNITUDE - 1] = sMagnitudeDescription,
    [MOVE_DYNAMIC_PUNCH - 1] = sDynamicPunchDescription,
    [MOVE_MEGAHORN - 1] = sMegahornDescription,
    [MOVE_DRAGON_BREATH - 1] = sDragonBreathDescription,
    [MOVE_BATON_PASS - 1] = sBatonPassDescription,
    [MOVE_ENCORE - 1] = sEncoreDescription,
    [MOVE_PURSUIT - 1] = sPursuitDescription,
    [MOVE_RAPID_SPIN - 1] = sRapidSpinDescription,
    [MOVE_SWEET_SCENT - 1] = sSweetScentDescription,
    [MOVE_IRON_TAIL - 1] = sIronTailDescription,
    [MOVE_METAL_CLAW - 1] = sMetalClawDescription,
    [MOVE_VITAL_THROW - 1] = sVitalThrowDescription,
    [MOVE_MORNING_SUN - 1] = sMorningSunDescription,
    [MOVE_SYNTHESIS - 1] = sSynthesisDescription,
    [MOVE_MOONLIGHT - 1] = sMoonlightDescription,
    [MOVE_HIDDEN_POWER - 1] = sHiddenPowerDescription,
    [MOVE_CROSS_CHOP - 1] = sCrossChopDescription,
    [MOVE_TWISTER - 1] = sTwisterDescription,
    [MOVE_RAIN_DANCE - 1] = sRainDanceDescription,
    [MOVE_SUNNY_DAY - 1] = sSunnyDayDescription,
    [MOVE_CRUNCH - 1] = sCrunchDescription,
    [MOVE_MIRROR_COAT - 1] = sMirrorCoatDescription,
    [MOVE_PSYCH_UP - 1] = sPsychUpDescription,
    [MOVE_EXTREME_SPEED - 1] = sExtremeSpeedDescription,
    [MOVE_ANCIENT_POWER - 1] = sAncientPowerDescription,
    [MOVE_SHADOW_BALL - 1] = sShadowBallDescription,
    [MOVE_FUTURE_SIGHT - 1] = sFutureSightDescription,
    [MOVE_ROCK_SMASH - 1] = sRockSmashDescription,
    [MOVE_WHIRLPOOL - 1] = sWhirlpoolDescription,
    [MOVE_BEAT_UP - 1] = sBeatUpDescription,
    [MOVE_FAKE_OUT - 1] = sFakeOutDescription,
    [MOVE_UPROAR - 1] = sUproarDescription,
    [MOVE_STOCKPILE - 1] = sStockpileDescription,
    [MOVE_SPIT_UP - 1] = sSpitUpDescription,
    [MOVE_SWALLOW - 1] = sSwallowDescription,
    [MOVE_HEAT_WAVE - 1] = sHeatWaveDescription,
    [MOVE_HAIL - 1] = sHailDescription,
    [MOVE_TORMENT - 1] = sTormentDescription,
    [MOVE_FLATTER - 1] = sFlatterDescription,
    [MOVE_WILL_O_WISP - 1] = sWillOWispDescription,
    [MOVE_MEMENTO - 1] = sMementoDescription,
    [MOVE_FACADE - 1] = sFacadeDescription,
    [MOVE_FOCUS_PUNCH - 1] = sFocusPunchDescription,
    [MOVE_SMELLING_SALTS - 1] = sSmellingSaltsDescription,
    [MOVE_FOLLOW_ME - 1] = sFollowMeDescription,
    [MOVE_NATURE_POWER - 1] = sNaturePowerDescription,
    [MOVE_CHARGE - 1] = sChargeDescription,
    [MOVE_TAUNT - 1] = sTauntDescription,
    [MOVE_HELPING_HAND - 1] = sHelpingHandDescription,
    [MOVE_TRICK - 1] = sTrickDescription,
    [MOVE_ROLE_PLAY - 1] = sRolePlayDescription,
    [MOVE_WISH - 1] = sWishDescription,
    [MOVE_ASSIST - 1] = sAssistDescription,
    [MOVE_INGRAIN - 1] = sIngrainDescription,
    [MOVE_SUPERPOWER - 1] = sSuperpowerDescription,
    [MOVE_MAGIC_COAT - 1] = sMagicCoatDescription,
    [MOVE_RECYCLE - 1] = sRecycleDescription,
    [MOVE_REVENGE - 1] = sRevengeDescription,
    [MOVE_BRICK_BREAK - 1] = sBrickBreakDescription,
    [MOVE_YAWN - 1] = sYawnDescription,
    [MOVE_KNOCK_OFF - 1] = sKnockOffDescription,
    [MOVE_ENDEAVOR - 1] = sEndeavorDescription,
    [MOVE_ERUPTION - 1] = sEruptionDescription,
    [MOVE_SKILL_SWAP - 1] = sSkillSwapDescription,
    [MOVE_IMPRISON - 1] = sImprisonDescription,
    [MOVE_REFRESH - 1] = sRefreshDescription,
    [MOVE_GRUDGE - 1] = sGrudgeDescription,
    [MOVE_SNATCH - 1] = sSnatchDescription,
    [MOVE_SECRET_POWER - 1] = sSecretPowerDescription,
    [MOVE_DIVE - 1] = sDiveDescription,
    [MOVE_ARM_THRUST - 1] = sArmThrustDescription,
    [MOVE_CAMOUFLAGE - 1] = sCamouflageDescription,
    [MOVE_TAIL_GLOW - 1] = sTailGlowDescription,
    [MOVE_LUSTER_PURGE - 1] = sLusterPurgeDescription,
    [MOVE_MIST_BALL - 1] = sMistBallDescription,
    [MOVE_FEATHER_DANCE - 1] = sFeatherDanceDescription,
    [MOVE_TEETER_DANCE - 1] = sTeeterDanceDescription,
    [MOVE_BLAZE_KICK - 1] = sBlazeKickDescription,
    [MOVE_MUD_SPORT - 1] = sMudSportDescription,
    [MOVE_ICE_BALL - 1] = sIceBallDescription,
    [MOVE_NEEDLE_ARM - 1] = sNeedleArmDescription,
    [MOVE_SLACK_OFF - 1] = sSlackOffDescription,
    [MOVE_HYPER_VOICE - 1] = sHyperVoiceDescription,
    [MOVE_POISON_FANG - 1] = sPoisonFangDescription,
    [MOVE_CRUSH_CLAW - 1] = sCrushClawDescription,
    [MOVE_BLAST_BURN - 1] = sBlastBurnDescription,
    [MOVE_HYDRO_CANNON - 1] = sHydroCannonDescription,
    [MOVE_METEOR_MASH - 1] = sMeteorMashDescription,
    [MOVE_ASTONISH - 1] = sAstonishDescription,
    [MOVE_WEATHER_BALL - 1] = sWeatherBallDescription,
    [MOVE_AROMATHERAPY - 1] = sAromatherapyDescription,
    [MOVE_FAKE_TEARS - 1] = sFakeTearsDescription,
    [MOVE_AIR_CUTTER - 1] = sAirCutterDescription,
    [MOVE_OVERHEAT - 1] = sOverheatDescription,
    [MOVE_ODOR_SLEUTH - 1] = sOdorSleuthDescription,
    [MOVE_ROCK_TOMB - 1] = sRockTombDescription,
    [MOVE_SILVER_WIND - 1] = sSilverWindDescription,
    [MOVE_METAL_SOUND - 1] = sMetalSoundDescription,
    [MOVE_GRASS_WHISTLE - 1] = sGrassWhistleDescription,
    [MOVE_TICKLE - 1] = sTickleDescription,
    [MOVE_COSMIC_POWER - 1] = sCosmicPowerDescription,
    [MOVE_WATER_SPOUT - 1] = sWaterSpoutDescription,
    [MOVE_SIGNAL_BEAM - 1] = sSignalBeamDescription,
    [MOVE_SHADOW_PUNCH - 1] = sShadowPunchDescription,
    [MOVE_EXTRASENSORY - 1] = sExtrasensoryDescription,
    [MOVE_SKY_UPPERCUT - 1] = sSkyUppercutDescription,
    [MOVE_SAND_TOMB - 1] = sSandTombDescription,
    [MOVE_SHEER_COLD - 1] = sSheerColdDescription,
    [MOVE_MUDDY_WATER - 1] = sMuddyWaterDescription,
    [MOVE_BULLET_SEED - 1] = sBulletSeedDescription,
    [MOVE_AERIAL_ACE - 1] = sAerialAceDescription,
    [MOVE_ICICLE_SPEAR - 1] = sIcicleSpearDescription,
    [MOVE_IRON_DEFENSE - 1] = sIronDefenseDescription,
    [MOVE_BLOCK - 1] = sBlockDescription,
    [MOVE_HOWL - 1] = sHowlDescription,
    [MOVE_DRAGON_CLAW - 1] = sDragonClawDescription,
    [MOVE_FRENZY_PLANT - 1] = sFrenzyPlantDescription,
    [MOVE_BULK_UP - 1] = sBulkUpDescription,
    [MOVE_BOUNCE - 1] = sBounceDescription,
    [MOVE_MUD_SHOT - 1] = sMudShotDescription,
    [MOVE_POISON_TAIL - 1] = sPoisonTailDescription,
    [MOVE_COVET - 1] = sCovetDescription,
    [MOVE_VOLT_TACKLE - 1] = sVoltTackleDescription,
    [MOVE_MAGICAL_LEAF - 1] = sMagicalLeafDescription,
    [MOVE_WATER_SPORT - 1] = sWaterSportDescription,
    [MOVE_CALM_MIND - 1] = sCalmMindDescription,
    [MOVE_LEAF_BLADE - 1] = sLeafBladeDescription,
    [MOVE_DRAGON_DANCE - 1] = sDragonDanceDescription,
    [MOVE_ROCK_BLAST - 1] = sRockBlastDescription,
    [MOVE_SHOCK_WAVE - 1] = sShockWaveDescription,
    [MOVE_WATER_PULSE - 1] = sWaterPulseDescription,
    [MOVE_DOOM_DESIRE - 1] = sDoomDesireDescription,
    [MOVE_PSYCHO_BOOST - 1] = sPsychoBoostDescription,
    [MOVE_ROOST - 1] = sRoostDescription,
    [MOVE_GRAVITY - 1] = sGravityDescription,
    [MOVE_MIRACLE_EYE - 1] = sMiracleEyeDescription,
    [MOVE_WAKE_UP_SLAP - 1] = sWakeUpSlapDescription,
    [MOVE_HAMMER_ARM - 1] = sHammerArmDescription,
    [MOVE_GYRO_BALL - 1] = sGyroBallDescription,
    [MOVE_HEALING_WISH - 1] = sHealingWishDescription,
    [MOVE_BRINE - 1] = sBrineDescription,
    [MOVE_NATURAL_GIFT - 1] = sNaturalGiftDescription,
    [MOVE_FEINT - 1] = sFeintDescription,
    [MOVE_PLUCK - 1] = sPluckDescription,
    [MOVE_TAILWIND - 1] = sTailwindDescription,
    [MOVE_ACUPRESSURE - 1] = sAcupressureDescription,
    [MOVE_METAL_BURST - 1] = sMetalBurstDescription,
    [MOVE_U_TURN - 1] = sUTurnDescription,
    [MOVE_CLOSE_COMBAT - 1] = sCloseCombatDescription,
    [MOVE_PAYBACK - 1] = sPaybackDescription,
    [MOVE_ASSURANCE - 1] = sAssuranceDescription,
    [MOVE_EMBARGO - 1] = sEmbargoDescription,
    [MOVE_FLING - 1] = sFlingDescription,
    [MOVE_PSYCHO_SHIFT - 1] = sPsychoShiftDescription,
    [MOVE_TRUMP_CARD - 1] = sTrumpCardDescription,
    [MOVE_HEAL_BLOCK - 1] = sHealBlockDescription,
    [MOVE_WRING_OUT - 1] = sWringOutDescription,
    [MOVE_POWER_TRICK - 1] = sPowerTrickDescription,
    [MOVE_GASTRO_ACID - 1] = sGastroAcidDescription,
    [MOVE_LUCKY_CHANT - 1] = sLuckyChantDescription,
    [MOVE_ME_FIRST - 1] = sMeFirstDescription,
    [MOVE_COPYCAT - 1] = sCopycatDescription,
    [MOVE_POWER_SWAP - 1] = sPowerSwapDescription,
    [MOVE_GUARD_SWAP - 1] = sGuardSwapDescription,
    [MOVE_PUNISHMENT - 1] = sPunishmentDescription,
    [MOVE_LAST_RESORT - 1] = sLastResortDescription,
    [MOVE_WORRY_SEED - 1] = sWorrySeedDescription,
    [MOVE_SUCKER_PUNCH - 1] = sSuckerPunchDescription,
    [MOVE_TOXIC_SPIKES - 1] = sToxicSpikesDescription,
    [MOVE_HEART_SWAP - 1] = sHeartSwapDescription,
    [MOVE_AQUA_RING - 1] = sAquaRingDescription,
    [MOVE_MAGNET_RISE - 1] = sMagnetRiseDescription,
    [MOVE_FLARE_BLITZ - 1] = sFlareBlitzDescription,
    [MOVE_FORCE_PALM - 1] = sForcePalmDescription,
    [MOVE_AURA_SPHERE - 1] = sAuraSphereDescription,
    [MOVE_ROCK_POLISH - 1] = sRockPolishDescription,
    [MOVE_POISON_JAB - 1] = sPoisonJabDescription,
    [MOVE_DARK_PULSE - 1] = sDarkPulseDescription,
    [MOVE_NIGHT_SLASH - 1] = sNightSlashDescription,
    [MOVE_AQUA_TAIL - 1] = sAquaTailDescription,
    [MOVE_SEED_BOMB - 1] = sSeedBombDescription,
    [MOVE_AIR_SLASH - 1] = sAirSlashDescription,
    [MOVE_X_SCISSOR - 1] = sXScissorDescription,
    [MOVE_BUG_BUZZ - 1] = sBugBuzzDescription,
    [MOVE_DRAGON_PULSE - 1] = sDragonPulseDescription,
    [MOVE_DRAGON_RUSH - 1] = sDragonRushDescription,
    [MOVE_POWER_GEM - 1] = sPowerGemDescription,
    [MOVE_DRAIN_PUNCH - 1] = sMegaDrainDescription,
    [MOVE_VACUUM_WAVE - 1] = sVacuumWaveDescription,
    [MOVE_FOCUS_BLAST - 1] = sFocusBlastDescription,
    [MOVE_ENERGY_BALL - 1] = sEnergyBallDescription,
    [MOVE_BRAVE_BIRD - 1] = sBraveBirdDescription,
    [MOVE_EARTH_POWER - 1] = sEarthPowerDescription,
    [MOVE_SWITCHEROO - 1] = sSwitcherooDescription,
    [MOVE_GIGA_IMPACT - 1] = sHyperBeamDescription,
    [MOVE_NASTY_PLOT - 1] = sNastyPlotDescription,
    [MOVE_BULLET_PUNCH - 1] = sBulletPunchDescription,
    [MOVE_AVALANCHE - 1] = sRevengeDescription,
    [MOVE_ICE_SHARD - 1] = sIceShardDescription,
    [MOVE_SHADOW_CLAW - 1] = sShadowClawDescription,
    [MOVE_THUNDER_FANG - 1] = sThunderFangDescription,
    [MOVE_ICE_FANG - 1] = sIceFangDescription,
    [MOVE_FIRE_FANG - 1] = sFireFangDescription,
    [MOVE_SHADOW_SNEAK - 1] = sShadowSneakDescription,
    [MOVE_MUD_BOMB - 1] = sMudBombDescription,
    [MOVE_PSYCHO_CUT - 1] = sPsychoCutDescription,
    [MOVE_ZEN_HEADBUTT - 1] = sZenHeadbuttDescription,
    [MOVE_MIRROR_SHOT - 1] = sMirrorShotDescription,
    [MOVE_FLASH_CANNON - 1] = sFlashCannonDescription,
    [MOVE_ROCK_CLIMB - 1] = sRockClimbDescription,
    [MOVE_DEFOG - 1] = sDefogDescription,
    [MOVE_TRICK_ROOM - 1] = sTrickRoomDescription,
    [MOVE_DRACO_METEOR - 1] = sDracoMeteorDescription,
    [MOVE_DISCHARGE - 1] = sDischargeDescription,
    [MOVE_LAVA_PLUME - 1] = sLavaPlumeDescription,
    [MOVE_LEAF_STORM - 1] = sLeafStormDescription,
    [MOVE_POWER_WHIP - 1] = sPowerWhipDescription,
    [MOVE_ROCK_WRECKER - 1] = sHyperBeamDescription,
    [MOVE_CROSS_POISON - 1] = sCrossPoisonDescription,
    [MOVE_GUNK_SHOT - 1] = sGunkShotDescription,
    [MOVE_IRON_HEAD - 1] = sIronHeadDescription,
    [MOVE_MAGNET_BOMB - 1] = sMagnetBombDescription,
    [MOVE_STONE_EDGE - 1] = sStoneEdgeDescription,
    [MOVE_CAPTIVATE - 1] = sCaptivateDescription,
    [MOVE_STEALTH_ROCK - 1] = sStealthRockDescription,
    [MOVE_GRASS_KNOT - 1] = sGrassKnotDescription,
    [MOVE_CHATTER - 1] = sChatterDescription,
    [MOVE_JUDGMENT - 1] = sJudgmentDescription,
    [MOVE_BUG_BITE - 1] = sPluckDescription,
    [MOVE_CHARGE_BEAM - 1] = sChargeBeamDescription,
    [MOVE_WOOD_HAMMER - 1] = sWoodHammerDescription,
    [MOVE_AQUA_JET - 1] = sAquaJetDescription,
    [MOVE_ATTACK_ORDER - 1] = sAttackOrderDescription,
    [MOVE_DEFEND_ORDER - 1] = sDefendOrderDescription,
    [MOVE_HEAL_ORDER - 1] = sHealOrderDescription,
    [MOVE_HEAD_SMASH - 1] = sHeadSmashDescription,
    [MOVE_DOUBLE_HIT - 1] = sDoubleHitDescription,
    [MOVE_ROAR_OF_TIME - 1] = sRoarOfTimeDescription,
    [MOVE_SPACIAL_REND - 1] = sSpacialRendDescription,
    [MOVE_LUNAR_DANCE - 1] = sHealingWishDescription,
    [MOVE_CRUSH_GRIP - 1] = sWringOutDescription,
    [MOVE_MAGMA_STORM - 1] = sMagmaStormDescription,
    [MOVE_DARK_VOID - 1] = sDarkVoidDescription,
    [MOVE_SEED_FLARE - 1] = sSeedFlareDescription,
    [MOVE_OMINOUS_WIND - 1] = sOminousWindDescription,
    [MOVE_SHADOW_FORCE - 1] = sShadowForceDescription,
    [MOVE_HONE_CLAWS - 1] = sHoneClawsDescription,
    [MOVE_WIDE_GUARD - 1] = sWideGuardDescription,
    [MOVE_GUARD_SPLIT - 1] = sGuardSplitDescription,
    [MOVE_POWER_SPLIT - 1] = sPowerSplitDescription,
    [MOVE_WONDER_ROOM - 1] = sWonderRoomDescription,
    [MOVE_PSYSHOCK - 1] = sPsyshockDescription,
    [MOVE_VENOSHOCK - 1] = sVenoshockDescription,
    [MOVE_AUTOTOMIZE - 1] = sAutotomizeDescription,
    [MOVE_RAGE_POWDER - 1] = sRagePowderDescription,
    [MOVE_TELEKINESIS - 1] = sTelekinesisDescription,
    [MOVE_MAGIC_ROOM - 1] = sMagicRoomDescription,
    [MOVE_SMACK_DOWN - 1] = sSmackDownDescription,
    [MOVE_STORM_THROW - 1] = sStormThrowDescription,
    [MOVE_FLAME_BURST - 1] = sFlameBurstDescription,
    [MOVE_SLUDGE_WAVE - 1] = sSludgeWaveDescription,
    [MOVE_QUIVER_DANCE - 1] = sQuiverDanceDescription,
    [MOVE_HEAVY_SLAM - 1] = sHeavySlamDescription,
    [MOVE_SYNCHRONOISE - 1] = sSynchronoiseDescription,
    [MOVE_ELECTRO_BALL - 1] = sElectroBallDescription,
    [MOVE_SOAK - 1] = sSoakDescription,
    [MOVE_FLAME_CHARGE - 1] = sFlameChargeDescription,
    [MOVE_COIL - 1] = sCoilDescription,
    [MOVE_LOW_SWEEP - 1] = sLowSweepDescription,
    [MOVE_ACID_SPRAY - 1] = sAcidSprayDescription,
    [MOVE_FOUL_PLAY - 1] = sFoulPlayDescription,
    [MOVE_SIMPLE_BEAM - 1] = sSimpleBeamDescription,
    [MOVE_ENTRAINMENT - 1] = sEntrainmentDescription,
    [MOVE_AFTER_YOU - 1] = sAfterYouDescription,
    [MOVE_ROUND - 1] = sRoundDescription,
    [MOVE_ECHOED_VOICE - 1] = sEchoedVoiceDescription,
    [MOVE_CHIP_AWAY - 1] = sChipAwayDescription,
    [MOVE_CLEAR_SMOG - 1] = sClearSmogDescription,
    [MOVE_STORED_POWER - 1] = sStoredPowerDescription,
    [MOVE_QUICK_GUARD - 1] = sQuickGuardDescription,
    [MOVE_ALLY_SWITCH - 1] = sAllySwitchDescription,
    [MOVE_SCALD - 1] = sScaldDescription,
    [MOVE_SHELL_SMASH - 1] = sShellSmashDescription,
    [MOVE_HEAL_PULSE - 1] = sHealPulseDescription,
    [MOVE_HEX - 1] = sHexDescription,
    [MOVE_SKY_DROP - 1] = sSkyDropDescription,
    [MOVE_SHIFT_GEAR - 1] = sShiftGearDescription,
    [MOVE_CIRCLE_THROW - 1] = sCircleThrowDescription,
    [MOVE_INCINERATE - 1] = sIncinerateDescription,
    [MOVE_QUASH - 1] = sQuashDescription,
    [MOVE_ACROBATICS - 1] = sAcrobaticsDescription,
    [MOVE_REFLECT_TYPE - 1] = sReflectTypeDescription,
    [MOVE_RETALIATE - 1] = sRetaliateDescription,
    [MOVE_FINAL_GAMBIT - 1] = sFinalGambitDescription,
    [MOVE_BESTOW - 1] = sBestowDescription,
    [MOVE_INFERNO - 1] = sInfernoDescription,
    [MOVE_WATER_PLEDGE - 1] = sWaterPledgeDescription,
    [MOVE_FIRE_PLEDGE - 1] = sFirePledgeDescription,
    [MOVE_GRASS_PLEDGE - 1] = sGrassPledgeDescription,
    [MOVE_VOLT_SWITCH - 1] = sUTurnDescription,
    [MOVE_STRUGGLE_BUG - 1] = sStruggleBugDescription,
    [MOVE_BULLDOZE - 1] = sBulldozeDescription,
    [MOVE_FROST_BREATH - 1] = sStormThrowDescription,
    [MOVE_DRAGON_TAIL - 1] = sCircleThrowDescription,
    [MOVE_WORK_UP - 1] = sWorkUpDescription,
    [MOVE_ELECTROWEB - 1] = sElectrowebDescription,
    [MOVE_WILD_CHARGE - 1] = sWildChargeDescription,
    [MOVE_DRILL_RUN - 1] = sDrillRunDescription,
    [MOVE_DUAL_CHOP - 1] = sDualChopDescription,
    [MOVE_HEART_STAMP - 1] = sHeartStampDescription,
    [MOVE_HORN_LEECH - 1] = sMegaDrainDescription,
    [MOVE_SACRED_SWORD - 1] = sChipAwayDescription,
    [MOVE_RAZOR_SHELL - 1] = sRazorShellDescription,
    [MOVE_HEAT_CRASH - 1] = sHeavySlamDescription,
    [MOVE_LEAF_TORNADO - 1] = sLeafTornadoDescription,
    [MOVE_STEAMROLLER - 1] = sSteamrollerDescription,
    [MOVE_COTTON_GUARD - 1] = sCottonGuardDescription,
    [MOVE_NIGHT_DAZE - 1] = sNightDazeDescription,
    [MOVE_PSYSTRIKE - 1] = sPsyshockDescription,
    [MOVE_TAIL_SLAP - 1] = sTailSlapDescription,
    [MOVE_HURRICANE - 1] = sHurricaneDescription,
    [MOVE_HEAD_CHARGE - 1] = sHeadChargeDescription,
    [MOVE_GEAR_GRIND - 1] = sGearGrindDescription,
    [MOVE_SEARING_SHOT - 1] = sLavaPlumeDescription,
    [MOVE_TECHNO_BLAST - 1] = sTechnoBlastDescription,
    [MOVE_RELIC_SONG - 1] = sRelicSongDescription,
    [MOVE_SECRET_SWORD - 1] = sSecretSwordDescription,
    [MOVE_GLACIATE - 1] = sGlaciateDescription,
    [MOVE_BOLT_STRIKE - 1] = sBoltStrikeDescription,
    [MOVE_BLUE_FLARE - 1] = sBlueFlareDescription,
    [MOVE_FIERY_DANCE - 1] = sFieryDanceDescription,
    [MOVE_FREEZE_SHOCK - 1] = sFreezeShockDescription,
    [MOVE_ICE_BURN - 1] = sIceBurnDescription,
    [MOVE_SNARL - 1] = sSnarlDescription,
    [MOVE_ICICLE_CRASH - 1] = sIcicleCrashDescription,
    [MOVE_V_CREATE - 1] = sVCreateDescription,
    [MOVE_FUSION_FLARE - 1] = sFusionFlareDescription,
    [MOVE_FUSION_BOLT - 1] = sFusionBoltDescription,
    [MOVE_FLYING_PRESS - 1] = sFlyingPressDescription,
    [MOVE_MAT_BLOCK - 1] = sMatBlockDescription,
    [MOVE_BELCH - 1] = sBelchDescription,
    [MOVE_ROTOTILLER - 1] = sRototillerDescription,
    [MOVE_STICKY_WEB - 1] = sStickyWebDescription,
    [MOVE_FELL_STINGER - 1] = sFellStingerDescription,
    [MOVE_PHANTOM_FORCE - 1] = sShadowForceDescription,
    [MOVE_TRICK_OR_TREAT - 1] = sTrickOrTreatDescription,
    [MOVE_NOBLE_ROAR - 1] = sNobleRoarDescription,
    [MOVE_ION_DELUGE - 1] = sIonDelugeDescription,
    [MOVE_PARABOLIC_CHARGE - 1] = sParabolicChargeDescription,
    [MOVE_FORESTS_CURSE - 1] = sForestsCurseDescription,
    [MOVE_PETAL_BLIZZARD - 1] = sPetalBlizzardDescription,
    [MOVE_FREEZE_DRY - 1] = sFreezeDryDescription,
    [MOVE_DISARMING_VOICE - 1] = sDisarmingVoiceDescription,
    [MOVE_PARTING_SHOT - 1] = sPartingShotDescription,
    [MOVE_TOPSY_TURVY - 1] = sTopsyTurvyDescription,
    [MOVE_DRAINING_KISS - 1] = sDrainingKissDescription,
    [MOVE_CRAFTY_SHIELD - 1] = sCraftyShieldDescription,
    [MOVE_FLOWER_SHIELD - 1] = sFlowerShieldDescription,
    [MOVE_GRASSY_TERRAIN - 1] = sGrassyTerrainDescription,
    [MOVE_MISTY_TERRAIN - 1] = sMistyTerrainDescription,
    [MOVE_ELECTRIFY - 1] = sElectrifyDescription,
    [MOVE_PLAY_ROUGH - 1] = sPlayRoughDescription,
    [MOVE_FAIRY_WIND - 1] = sFairyWindDescription,
    [MOVE_MOONBLAST - 1] = sMoonblastDescription,
    [MOVE_BOOMBURST - 1] = sBoomburstDescription,
    [MOVE_FAIRY_LOCK - 1] = sFairyLockDescription,
    [MOVE_KINGS_SHIELD - 1] = sKingsShieldDescription,
    [MOVE_PLAY_NICE - 1] = sPlayNiceDescription,
    [MOVE_CONFIDE - 1] = sConfideDescription,
    [MOVE_DIAMOND_STORM - 1] = sDiamondStormDescription,
    [MOVE_STEAM_ERUPTION - 1] = sSteamEruptionDescription,
    [MOVE_HYPERSPACE_HOLE - 1] = sHyperspaceHoleDescription,
    [MOVE_WATER_SHURIKEN - 1] = sWaterShurikenDescription,
    [MOVE_MYSTICAL_FIRE - 1] = sMysticalFireDescription,
    [MOVE_SPIKY_SHIELD - 1] = sSpikyShieldDescription,
    [MOVE_AROMATIC_MIST - 1] = sAromaticMistDescription,
    [MOVE_EERIE_IMPULSE - 1] = sEerieImpulseDescription,
    [MOVE_VENOM_DRENCH - 1] = sVenomDrenchDescription,
    [MOVE_POWDER - 1] = sPowderDescription,
    [MOVE_GEOMANCY - 1] = sGeomancyDescription,
    [MOVE_MAGNETIC_FLUX - 1] = sMagneticFluxDescription,
    [MOVE_HAPPY_HOUR - 1] = sHappyHourDescription,
    [MOVE_ELECTRIC_TERRAIN - 1] = sElectricTerrainDescription,
    [MOVE_DAZZLING_GLEAM - 1] = sDazzlingGleamDescription,
    [MOVE_CELEBRATE - 1] = sCelebrateDescription,
    [MOVE_HOLD_HANDS - 1] = sHoldHandsDescription,
    [MOVE_BABY_DOLL_EYES - 1] = sBabyDollEyesDescription,
    [MOVE_NUZZLE - 1] = sNuzzleDescription,
    [MOVE_HOLD_BACK - 1] = sFalseSwipeDescription,
    [MOVE_INFESTATION - 1] = sInfestationDescription,
    [MOVE_POWER_UP_PUNCH - 1] = sPowerUpPunchDescription,
    [MOVE_OBLIVION_WING - 1] = sDrainingKissDescription,
    [MOVE_THOUSAND_ARROWS - 1] = sThousandArrowsDescription,
    [MOVE_THOUSAND_WAVES - 1] = sThousandWavesDescription,
    [MOVE_LANDS_WRATH - 1] = sLandsWrathDescription,
    [MOVE_LIGHT_OF_RUIN - 1] = sLightOfRuinDescription,
    [MOVE_ORIGIN_PULSE - 1] = sOriginPulseDescription,
    [MOVE_PRECIPICE_BLADES - 1] = sPrecipiceBladesDescription,
    [MOVE_DRAGON_ASCENT - 1] = sCloseCombatDescription,
    [MOVE_HYPERSPACE_FURY - 1] = sHyperspaceHoleDescription,
    [MOVE_SHORE_UP - 1] = sShoreUpDescription,
    [MOVE_FIRST_IMPRESSION - 1] = sFirstImpressionDescription,
    [MOVE_BANEFUL_BUNKER - 1] = sBanefulBunkerDescription,
    [MOVE_SPIRIT_SHACKLE - 1] = sSpiritShackleDescription,
    [MOVE_DARKEST_LARIAT - 1] = sDarkestLariatDescription,
    [MOVE_SPARKLING_ARIA - 1] = sSparklingAriaDescription,
    [MOVE_ICE_HAMMER - 1] = sIceHammerDescription,
    [MOVE_FLORAL_HEALING - 1] = sFloralHealingDescription,
    [MOVE_HIGH_HORSEPOWER - 1] = sHighHorsepowerDescription,
    [MOVE_STRENGTH_SAP - 1] = sStrengthSapDescription,
    [MOVE_SOLAR_BLADE - 1] = sSolarBladeDescription,
    [MOVE_LEAFAGE - 1] = sLeafageDescription,
    [MOVE_SPOTLIGHT - 1] = sSpotlightDescription,
    [MOVE_TOXIC_THREAD - 1] = sToxicThreadDescription,
    [MOVE_LASER_FOCUS - 1] = sLaserFocusDescription,
    [MOVE_GEAR_UP - 1] = sGearUpDescription,
    [MOVE_THROAT_CHOP - 1] = sThroatChopDescription,
    [MOVE_POLLEN_PUFF - 1] = sPollenPuffDescription,
    [MOVE_ANCHOR_SHOT - 1] = sAnchorShotDescription,
    [MOVE_PSYCHIC_TERRAIN - 1] = sPsychicTerrainDescription,
    [MOVE_LUNGE - 1] = sLungeDescription,
    [MOVE_FIRE_LASH - 1] = sFireLashDescription,
    [MOVE_POWER_TRIP - 1] = sPowerTripDescription,
    [MOVE_BURN_UP - 1] = sBurnUpDescription,
    [MOVE_SPEED_SWAP - 1] = sSpeedSwapDescription,
    [MOVE_SMART_STRIKE - 1] = sSmartStrikeDescription,
    [MOVE_PURIFY - 1] = sPurifyDescription,
    [MOVE_REVELATION_DANCE - 1] = sRevelationDanceDescription,
    [MOVE_CORE_ENFORCER - 1] = sCoreEnforcerDescription,
    [MOVE_TROP_KICK - 1] = sTropKickDescription,
    [MOVE_INSTRUCT - 1] = sInstructDescription,
    [MOVE_BEAK_BLAST - 1] = sBeakBlastDescription,
    [MOVE_CLANGING_SCALES - 1] = sClangingScalesDescription,
    [MOVE_DRAGON_HAMMER - 1] = sDragonHammerDescription,
    [MOVE_BRUTAL_SWING - 1] = sBrutalSwingDescription,
    [MOVE_AURORA_VEIL - 1] = sAuroraVeilDescription,
    [MOVE_SHELL_TRAP - 1] = sShellTrapDescription,
    [MOVE_FLEUR_CANNON - 1] = sFleurCannonDescription,
    [MOVE_PSYCHIC_FANGS - 1] = sPsychicFangsDescription,
    [MOVE_STOMPING_TANTRUM - 1] = sStompingTantrumDescription,
    [MOVE_SHADOW_BONE - 1] = sShadowBoneDescription,
    [MOVE_ACCELEROCK - 1] = sAccelerockDescription,
    [MOVE_LIQUIDATION - 1] = sLiquidationDescription,
    [MOVE_PRISMATIC_LASER - 1] = sPrismaticLaserDescription,
    [MOVE_SPECTRAL_THIEF - 1] = sSpectralThiefDescription,
    [MOVE_SUNSTEEL_STRIKE - 1] = sSunsteelStrikeDescription,
    [MOVE_MOONGEIST_BEAM - 1] = sMoongeistBeamDescription,
    [MOVE_TEARFUL_LOOK - 1] = sTearfulLookDescription,
    [MOVE_ZING_ZAP - 1] = sZingZapDescription,
    [MOVE_NATURES_MADNESS - 1] = sNaturesMadnessDescription,
    [MOVE_MULTI_ATTACK - 1] = sMultiAttackDescription,
    [MOVE_MIND_BLOWN - 1] = sMindBlownDescription,
    [MOVE_PLASMA_FISTS - 1] = sPlasmaFistsDescription,
    [MOVE_PHOTON_GEYSER - 1] = sPhotonGeyserDescription,
    [MOVE_ZIPPY_ZAP - 1] = sZippyZapDescription,
    [MOVE_SPLISHY_SPLASH - 1] = sSplishySplashDescription,
    [MOVE_FLOATY_FALL - 1] = sFloatyFallDescription,
    [MOVE_PIKA_PAPOW - 1] = sPikaPapowDescription,
    [MOVE_BOUNCY_BUBBLE - 1] = sBouncyBubbleDescription,
    [MOVE_BUZZY_BUZZ - 1] = sBuzzyBuzzDescription,
    [MOVE_SIZZLY_SLIDE - 1] = sSizzlySlideDescription,
    [MOVE_GLITZY_GLOW - 1] = sGlitzyGlowDescription,
    [MOVE_BADDY_BAD - 1] = sBaddyBadDescription,
    [MOVE_SAPPY_SEED - 1] = sSappySeedDescription,
    [MOVE_FREEZY_FROST - 1] = sFreezyFrostDescription,
    [MOVE_SPARKLY_SWIRL - 1] = sSparklySwirlDescription,
    [MOVE_VEEVEE_VOLLEY - 1] = sVeeveeVolleyDescription,
    [MOVE_DOUBLE_IRON_BASH - 1] = sDoubleIronBashDescription,

    //GEN 8
    [MOVE_DYNAMAX_CANNON - 1] = sDynamaxCannonDescription,
    [MOVE_SNIPE_SHOT - 1] = sSnipeShotDescription,
    [MOVE_JAW_LOCK - 1] = sJawLockDescription,
    [MOVE_STUFF_CHEEKS - 1] = sStuffCheeksDescription,
    [MOVE_NO_RETREAT - 1] = sNoRetreatDescription,
    [MOVE_TAR_SHOT - 1] = sTarShotDescription,
    [MOVE_MAGIC_POWDER - 1] = sMagicPowderDescription,
    [MOVE_DRAGON_DARTS - 1] = sDragonDartsDescription,
    [MOVE_TEATIME - 1] = sTeatimeDescription,
    [MOVE_OCTOLOCK - 1] = sOctolockDescription,
    [MOVE_BOLT_BEAK - 1] = sBoltBeakDescription,
    [MOVE_FISHIOUS_REND - 1] = sFishiousRendDescription,
    [MOVE_COURT_CHANGE - 1] = sCourtChangeDescription,
    [MOVE_CLANGOROUS_SOUL - 1] = sClangorousSoulDescription,
    [MOVE_BODY_PRESS - 1] = sBodyPressDescription,
    [MOVE_DECORATE - 1] = sDecorateDescription,
    [MOVE_DRUM_BEATING - 1] = sDrumBeatingDescription,
    [MOVE_SNAP_TRAP - 1] = sSnapTrapDescription,
    [MOVE_PYRO_BALL - 1] = sPyroBallDescription,
    [MOVE_BEHEMOTH_BLADE - 1] = sBehemothBladeDescription,
    [MOVE_BEHEMOTH_BASH - 1] = sBehemothBashDescription,
    [MOVE_AURA_WHEEL - 1] = sAuraWheelDescription,
    [MOVE_BREAKING_SWIPE - 1] = sBreakingSwipeDescription,
    [MOVE_BRANCH_POKE - 1] = sBranchPokeDescription,
    [MOVE_OVERDRIVE - 1] = sOverdriveDescription,
    [MOVE_APPLE_ACID - 1] = sAppleAcidDescription,
    [MOVE_GRAV_APPLE - 1] = sGravAppleDescription,
    [MOVE_SPIRIT_BREAK - 1] = sSpiritBreakDescription,
    [MOVE_STRANGE_STEAM - 1] = sStrangeSteamDescription,
    [MOVE_LIFE_DEW - 1] = sLifeDewDescription,
    [MOVE_OBSTRUCT - 1] = sObstructDescription,
    [MOVE_FALSE_SURRENDER - 1] = sFalseSurrenderDescription,
    [MOVE_METEOR_ASSAULT - 1] = sMeteorAssaultDescription,
    [MOVE_ETERNABEAM - 1] = sEternabeamDescription,
    [MOVE_STEEL_BEAM - 1] = sSteelBeamDescription,
    [MOVE_EXPANDING_FORCE - 1] = sExpandingForceDescription,
    [MOVE_STEEL_ROLLER - 1] = sSteelRollerDescription,
    [MOVE_SCALE_SHOT - 1] = sScaleShotDescription,
    [MOVE_METEOR_BEAM - 1] = sMeteorBeamDescription,
    [MOVE_SHELL_SIDE_ARM - 1] = sShellSideArmDescription,
    [MOVE_MISTY_EXPLOSION - 1] = sMistyExplosionDescription,
    [MOVE_GRASSY_GLIDE - 1] = sGrassyGlideDescription,
    [MOVE_RISING_VOLTAGE - 1] = sRisingVoltageDescription,
    [MOVE_TERRAIN_PULSE - 1] = sTerrainPulseDescription,
    [MOVE_SKITTER_SMACK - 1] = sSkitterSmackDescription,
    [MOVE_BURNING_JEALOUSY - 1] = sBurningJealousyDescription,
    [MOVE_LASH_OUT - 1] = sLashOutDescription,
    [MOVE_POLTERGEIST - 1] = sPoltergeistDescription,
    [MOVE_CORROSIVE_GAS - 1] = sCorrosiveGasDescription,
    [MOVE_COACHING - 1] = sCoachingDescription,
    [MOVE_FLIP_TURN - 1] = sFlipTurnDescription,
    [MOVE_TRIPLE_AXEL - 1] = sTripleAxelDescription,
    [MOVE_DUAL_WINGBEAT - 1] = sDualWingbeatDescription,
    [MOVE_SCORCHING_SANDS - 1] = sScorchingSandsDescription,
    [MOVE_JUNGLE_HEALING - 1] = sJungleHealingDescription,
    [MOVE_WICKED_BLOW - 1] = sWickedBlowDescription,
    [MOVE_SURGING_STRIKES - 1] = sSurgingStrikesDescription,
    [MOVE_THUNDER_CAGE - 1] = sThunderCageDescription,
    [MOVE_DRAGON_ENERGY - 1] = sDragonEnergyDescription,
    [MOVE_FREEZING_GLARE - 1] = sFreezingGlareDescription,
    [MOVE_FIERY_WRATH - 1] = sFieryWrathDescription,
    [MOVE_THUNDEROUS_KICK - 1] = sThunderousKickDescription,
    [MOVE_GLACIAL_LANCE - 1] = sGlacialLanceDescription,
    [MOVE_ASTRAL_BARRAGE - 1] = sAstralBarrageDescription,
    [MOVE_EERIE_SPELL - 1] = sEerieSpellDescription,
    [MOVE_DIRE_CLAW - 1] = sDireClawDescription,
    [MOVE_PSYSHIELD_BASH - 1] = sPsyshieldBashDescription,
    [MOVE_POWER_SHIFT - 1] = sPowerShiftDescription,
    [MOVE_STONE_AXE - 1] = sStoneAxeDescription,
    [MOVE_SPRINGTIDE_STORM - 1] = sSpringtideStormDescription,
    [MOVE_MYSTICAL_POWER - 1] = sMysticalPowerDescription,
    [MOVE_RAGING_FURY - 1] = sRagingFuryDescription,
    [MOVE_WAVE_CRASH - 1] = sWaveCrashDescription,
    [MOVE_CHLOROBLAST - 1] = sChloroblastDescription,
    [MOVE_MOUNTAIN_GALE - 1] = sMountainGaleDescription,
    [MOVE_VICTORY_DANCE - 1] = sVictoryDanceDescription,
    [MOVE_HEADLONG_RUSH - 1] = sHeadlongRushDescription,
    [MOVE_BARB_BARRAGE - 1] = sBarbBarrageDescription,
    [MOVE_ESPER_WING - 1] = sEsperWingDescription,
    [MOVE_BITTER_MALICE - 1] = sBitterMaliceDescription,
    [MOVE_SHELTER - 1] = sShelterDescription,
    [MOVE_TRIPLE_ARROWS - 1] = sTripleArrowsDescription,
    [MOVE_INFERNAL_PARADE - 1] = sInfernalParadeDescription,
    [MOVE_CEASELESS_EDGE - 1] = sCeaselessEdgeDescription,
    [MOVE_BLEAKWIND_STORM - 1] = sBleakwindStormDescription,
    [MOVE_WILDBOLT_STORM - 1] = sWildboltStormDescription,
    [MOVE_SANDSEAR_STORM - 1] = sSandsearStormDescription,
    [MOVE_LUNAR_BLESSING - 1] = sLunarBlessingDescription,
    [MOVE_TAKE_HEART - 1] = sTakeHeartDescription,
    [MOVE_TERA_BLAST - 1] = sTeraBlastDescription,
    [MOVE_SILK_TRAP - 1] = sSilkTrapDescription,
    [MOVE_AXE_KICK - 1] = sAxeKickDescription,
    [MOVE_LAST_RESPECTS - 1] = sLastRespectsDescription,
    [MOVE_LUMINA_CRASH - 1] = sLuminaCrashDescription,
    [MOVE_ORDER_UP - 1] = sOrderUpDescription,
    [MOVE_JET_PUNCH - 1] = sJetPunchDescription,
    [MOVE_SPICY_EXTRACT - 1] = sSpicyExtractDescription,
    [MOVE_SPIN_OUT - 1] = sSpinOutDescription,
    [MOVE_POPULATION_BOMB - 1] = sPopulationBombDescription,
    [MOVE_ICE_SPINNER - 1] = sIceSpinnerDescription,
    [MOVE_GLAIVE_RUSH - 1] = sGlaiveRushDescription,
    [MOVE_REVIVAL_BLESSING - 1] = sRevivalBlessingDescription,
    [MOVE_SALT_CURE - 1] = sSaltCureDescription,
    [MOVE_TRIPLE_DIVE - 1] = sTripleDiveDescription,
    [MOVE_MORTAL_SPIN - 1] = sMortalSpinDescription,
    [MOVE_DOODLE - 1] = sDoodleDescription,
    [MOVE_FILLET_AWAY - 1] = sFilletAwayDescription,
    [MOVE_KOWTOW_CLEAVE - 1] = sKowtowCleaveDescription,
    [MOVE_FLOWER_TRICK - 1] = sFlowerTrickDescription,
    [MOVE_TORCH_SONG - 1] = sTorchSongDescription,
    [MOVE_AQUA_STEP - 1] = sAquaStepDescription,
    [MOVE_RAGING_BULL - 1] = sRagingBullDescription,
    [MOVE_MAKE_IT_RAIN - 1] = sMakeItRainDescription,
    [MOVE_RUINATION - 1] = sRuinationDescription,
    [MOVE_COLLISION_COURSE - 1] = sCollisionCourseDescription,
    [MOVE_ELECTRO_DRIFT - 1] = sElectroDriftDescription,
    [MOVE_SHED_TAIL - 1] = sShedTailDescription,
    [MOVE_CHILLY_RECEPTION - 1] = sChillyReceptionDescription,
    [MOVE_TIDY_UP - 1] = sTidyUpDescription,
    [MOVE_SNOWSCAPE - 1] = sSnowscapeDescription,
    [MOVE_POUNCE - 1] = sPounceDescription,
    [MOVE_TRAILBLAZE - 1] = sTrailblazeDescription,
    [MOVE_CHILLING_WATER - 1] = sChillingWaterDescription,
    [MOVE_HYPER_DRILL - 1] = sHyperDrillDescription,
    [MOVE_TWIN_BEAM - 1] = sTwinBeamDescription,
    [MOVE_RAGE_FIST - 1] = sRageFistDescription,
    [MOVE_ARMOR_CANNON - 1] = sArmorCannonDescription,
    [MOVE_BITTER_BLADE - 1] = sBitterBladeDescription,
    [MOVE_DOUBLE_SHOCK - 1] = sDoubleShockDescription,
    [MOVE_GIGATON_HAMMER - 1] = sGigatonHammerDescription,
    [MOVE_COMEUPPANCE - 1] = sComeuppanceDescription,
    [MOVE_AQUA_CUTTER - 1] = sAquaCutterDescription,
    [MOVE_BLAZING_TORQUE - 1] = sBlazingTorqueDescription,
    [MOVE_WICKED_TORQUE - 1] = sWickedTorqueDescription,
    [MOVE_NOXIOUS_TORQUE - 1] = sNoxiousTorqueDescription,
    [MOVE_COMBAT_TORQUE - 1] = sCombatTorqueDescription,
    [MOVE_MAGICAL_TORQUE - 1] = sMagicalTorqueDescription,
    [MOVE_PSYBLADE - 1] = sPsybladeDescription,
    [MOVE_HYDRO_STEAM - 1] = sHydroSteamDescription,
    [MOVE_BLOOD_MOON - 1] = sBloodMoonDescription,
    [MOVE_MATCHA_GOTCHA - 1] = sMatchaGotchaDescription,
    [MOVE_SYRUP_BOMB - 1] = sSyrupBombDescription,
    [MOVE_IVY_CUDGEL - 1] = sIvyCudgelDescription,
    [MOVE_ELECTRO_SHOT - 1] = sElectroShotDescription,
    [MOVE_TERA_STARSTORM - 1] = sTeraStarstormDescription,
    [MOVE_FICKLE_BEAM - 1] = sFickleBeamDescription,
    [MOVE_BURNING_BULWARK - 1] = sBurningBulwarkDescription,
    [MOVE_THUNDERCLAP - 1] = sSuckerPunchDescription,
    [MOVE_MIGHTY_CLEAVE - 1] = sFeintDescription,
    [MOVE_TACHYON_CUTTER - 1] = sTachyonCutterDescription,
    [MOVE_HARD_PRESS - 1] = sWringOutDescription,
    [MOVE_DRAGON_CHEER - 1] = sDragonCheerDescription,
    [MOVE_ALLURING_VOICE - 1] = sAlluringVoiceDescription,
    [MOVE_TEMPER_FLARE - 1] = sTemperFlareDescription,
    [MOVE_SUPERCELL_SLAM - 1] = sSupercellSlamDescription,
    [MOVE_PSYCHIC_NOISE - 1] = sPsychicNoiseDescription,
    [MOVE_UPPER_HAND - 1] = sUpperHandDescription,
    [MOVE_MALIGNANT_CHAIN - 1] = sMalignantChainDescription,
};
