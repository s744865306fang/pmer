static const u8 sCharacteristic00[] = _("喜欢吃美味.");
static const u8 sCharacteristic01[] = _("为它的力量感到自豪.");
static const u8 sCharacteristic02[] = _("强健的体魄.");
static const u8 sCharacteristic03[] = _("喜欢跑步.");
static const u8 sCharacteristic04[] = _("高度好奇.");
static const u8 sCharacteristic05[] = _("意志坚定.");
static const u8 sCharacteristic06[] = _("经常发呆.");	//Is "Often dozes off" in Gens 4 and 5
static const u8 sCharacteristic07[] = _("好动.");
static const u8 sCharacteristic08[] = _("抗打.");
static const u8 sCharacteristic09[] = _("对声音敏感.");
static const u8 sCharacteristic10[] = _("调皮.");
static const u8 sCharacteristic11[] = _("有点虚荣.");
static const u8 sCharacteristic12[] = _("经常打瞌睡.");			//Is "Often scatters things" in Gens 4 and 5
static const u8 sCharacteristic13[] = _("有点急性子.");
static const u8 sCharacteristic14[] = _("非常执着.");
static const u8 sCharacteristic15[] = _("有些冲动.");
static const u8 sCharacteristic16[] = _("非常狡猾.");
static const u8 sCharacteristic17[] = _("有点叛逆.");
static const u8 sCharacteristic18[] = _("经常乱丢东西.");
static const u8 sCharacteristic19[] = _("喜欢对战.");
static const u8 sCharacteristic20[] = _("耐力很好.");
static const u8 sCharacteristic21[] = _("有点幽默.");
static const u8 sCharacteristic22[] = _("经常沉思.");
static const u8 sCharacteristic23[] = _("不服输.");
static const u8 sCharacteristic24[] = _("喜欢放松.");
static const u8 sCharacteristic25[] = _("急性子.");
static const u8 sCharacteristic26[] = _("很有毅力.");
static const u8 sCharacteristic27[] = _("容易逃跑.");
static const u8 sCharacteristic28[] = _("非常挑剔.");
static const u8 sCharacteristic29[] = _("有点顽固.");

static const u8 sFlavorSpicy[] = _("喜欢 {COLOR 5}{SHADOW 6}辛辣{COLOR 7}{SHADOW 8} 的食物.");
static const u8 sFlavorDry[] = _("喜欢 {COLOR 5}{SHADOW 6}干燥{COLOR 7}{SHADOW 8} 的食物.");
static const u8 sFlavorSweet[] = _("喜欢 {COLOR 5}{SHADOW 6}有甜味{COLOR 7}{SHADOW 8} 的食物.");
static const u8 sFlavorBitter[] = _("喜欢 {COLOR 5}{SHADOW 6}带苦味{COLOR 7}{SHADOW 8} 的食物.");
static const u8 sFlavorSour[] = _("喜欢 {COLOR 5}{SHADOW 6}带酸味{COLOR 7}{SHADOW 8} 的食物.");
static const u8 sFlavorNeutral[] = _("啥都喜欢吃.");

const u8 *const gCharacteristicPointers[30] = 
{
    sCharacteristic00,
	sCharacteristic01,
    sCharacteristic02,
	sCharacteristic03,
    sCharacteristic04,
	sCharacteristic05,
    sCharacteristic06,
	sCharacteristic07,
    sCharacteristic08,
	sCharacteristic09,
    sCharacteristic10,
	sCharacteristic11,
    sCharacteristic12,
	sCharacteristic13,
    sCharacteristic14,
	sCharacteristic15,
    sCharacteristic16,
	sCharacteristic17,
    sCharacteristic18,
	sCharacteristic19,
    sCharacteristic20,
	sCharacteristic21,
    sCharacteristic22,
	sCharacteristic23,
    sCharacteristic24,
	sCharacteristic25,
    sCharacteristic26,
	sCharacteristic27,
    sCharacteristic28,
	sCharacteristic29,
};

const u8 *const gNatureFlavorPointers[25] =
{
	[NATURE_HARDY]   = sFlavorNeutral,
	[NATURE_LONELY]  = sFlavorSpicy,
	[NATURE_BRAVE]   = sFlavorSpicy,
	[NATURE_ADAMANT] = sFlavorSpicy,
	[NATURE_NAUGHTY] = sFlavorSpicy,
	[NATURE_BOLD]    = sFlavorSour,
	[NATURE_DOCILE]  = sFlavorNeutral,
	[NATURE_RELAXED] = sFlavorSour,
	[NATURE_IMPISH]  = sFlavorSour,
	[NATURE_LAX]     = sFlavorSour,
	[NATURE_TIMID]   = sFlavorSweet,
	[NATURE_HASTY]   = sFlavorSweet,
	[NATURE_SERIOUS] = sFlavorNeutral,
	[NATURE_JOLLY]   = sFlavorSweet,
	[NATURE_NAIVE]   = sFlavorSweet,
	[NATURE_MODEST]  = sFlavorDry,
	[NATURE_MILD]    = sFlavorDry,
	[NATURE_QUIET]   = sFlavorDry,
	[NATURE_BASHFUL] = sFlavorNeutral,
	[NATURE_RASH]    = sFlavorDry,
	[NATURE_CALM]    = sFlavorBitter,
	[NATURE_GENTLE]  = sFlavorBitter,
	[NATURE_SASSY]   = sFlavorBitter,
	[NATURE_CAREFUL] = sFlavorBitter,
	[NATURE_QUIRKY]  = sFlavorNeutral,
};
