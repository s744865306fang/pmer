#include "global.h"
#include "naming_screen.h"
// Easy Chat keyboard
#define  CONST_ALIGINED const ALIGNED(1)

CONST_ALIGINED u8 gText_EasyChatKeyboard_ABCDEFothers[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 26}others");
CONST_ALIGINED u8 gText_EasyChatKeyboard_GHIJKL[] = _("{CLEAR 11}G{CLEAR 6}H{CLEAR 6}I{CLEAR 26}J{CLEAR 6}K{CLEAR 6}L");
CONST_ALIGINED u8 gText_EasyChatKeyboard_MNOPQRS[] = _("{CLEAR 11}M{CLEAR 6}N{CLEAR 6}O{CLEAR 26}P{CLEAR 6}Q{CLEAR 6}R{CLEAR 6}S{CLEAR 26} ");
CONST_ALIGINED u8 gText_EasyChatKeyboard_TUVWXYZ[] = _("{CLEAR 11}T{CLEAR 6}U{CLEAR 6}V{CLEAR 26}W{CLEAR 6}X{CLEAR 6}Y{CLEAR 6}Z{CLEAR 26} ");

// Union Room Chat keyboard
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_ABCDE[] = _("ABCDE");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_FGHIJ[] = _("FGHIJ");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_KLMNO[] = _("KLMNO");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_PQRST[] = _("PQRST");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_UVWXY[] = _("UVWXY");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Z[] = _("Z    ");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_01234Upper[] = _("01234");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_56789Upper[] = _("56789");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_PunctuationUpper[] = _(".,!? ");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_SymbolsUpper[] = _("-/&… ");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_abcde[] = _("abcde");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_fghij[] = _("fghij");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_klmno[] = _("klmno");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_pqrst[] = _("pqrst");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_uvwxy[] = _("uvwxy");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_z[] = _("z    ");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_01234Lower[] = _("01234");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_56789Lower[] = _("56789");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_PunctuationLower[] = _(".,!? ");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_SymbolsLower[] = _("-/&… ");

// Union Room Chat keyboard emojis
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji1[] = _("{EMOJI_MISCHIEVOUS}{EMOJI_HAPPY}{EMOJI_ANGRY}{EMOJI_SURPRISED}{EMOJI_BIGANGER}");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji2[] = _("{EMOJI_BIGSMILE}{EMOJI_EVIL}{EMOJI_NEUTRAL}{EMOJI_TIRED}{EMOJI_SHOCKED}");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji3[] = _("{EMOJI_LEAF}{EMOJI_FIRE}{EMOJI_WATER}{EMOJI_BOLT}{EMOJI_BALL}");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji4[] = _("♂♀{EMOJI_LEFT_PAREN}{EMOJI_RIGHT_PAREN}{EMOJI_TILDE}");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji5[] = _("{EMOJI_LEFT_EYE}{EMOJI_RIGHT_EYE}{EMOJI_SMALLWHEEL}{EMOJI_SPHERE}{EMOJI_IRRITATED}");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji6[] = _("{EMOJI_AT}{EMOJI_BIGWHEEL}{EMOJI_TONGUE}{EMOJI_ACUTE}{EMOJI_GRAVE}");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji7[] = _("{EMOJI_RIGHT_FIST}{EMOJI_LEFT_FIST}{EMOJI_TRIANGLE_OUTLINE}{EMOJI_UNION}{EMOJI_GREATER_THAN}");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji8[] = _("{EMOJI_CIRCLE}{EMOJI_TRIANGLE}{EMOJI_SQUARE}{EMOJI_HEART}{EMOJI_MOON}");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji9[] = _("{EMOJI_NOTE}{EMOJI_PLUS}{EMOJI_MINUS}{EMOJI_EQUALS}{EMOJI_PIPE}");
CONST_ALIGINED u8 gText_UnionRoomChatKeyboard_Emoji10[] = _("{EMOJI_HIGHBAR}{EMOJI_UNDERSCORE};: ");


static CONST_ALIGINED u8 pinyin_a[] = _("啊阿呵吖嗄腌锕");
static CONST_ALIGINED u8 pinyin_ai[] = _("爱矮挨哎碍癌艾唉哀蔼隘埃皑呆嗌嫒瑷暧捱砹嗳锿霭乃剀呃噫奇阂");
static CONST_ALIGINED u8 pinyin_an[] = _("按安暗岸俺案鞍氨胺厂广庵揞犴铵桉谙鹌埯黯干盒钳顸");
static CONST_ALIGINED u8 pinyin_ang[] = _("昂肮盎仰");
static CONST_ALIGINED u8 pinyin_ao[] = _("袄凹傲奥熬懊敖翱澳嚣拗媪廒骜嗷坳遨聱螯獒鏊鳌鏖岙噢棍浇");
static CONST_ALIGINED u8 pinyin_ba[] = _("把八吧爸拔罢跋巴芭扒坝霸叭靶笆疤耙捌粑茇岜鲅钯魃菝灞伯捭杷湃萆");
static CONST_ALIGINED u8 pinyin_bai[] = _("百白摆败柏拜佰伯稗捭呗掰扒排派薜鞴");
static CONST_ALIGINED u8 pinyin_ban[] = _("半办班般拌搬版斑板伴扳扮瓣颁绊癍坂钣舨阪瘢分彬豳辨辩");
static CONST_ALIGINED u8 pinyin_bang[] = _("帮棒绑磅镑邦榜蚌傍梆膀谤浜蒡彭旁纺螃");
static CONST_ALIGINED u8 pinyin_bao[] = _("包抱报饱保暴薄宝爆剥豹刨雹褒堡苞胞鲍炮瀑龅孢煲褓鸨趵葆勹呆簿袍裒");
static CONST_ALIGINED u8 pinyin_bei[] = _("被北倍杯背悲备碑卑贝辈钡焙狈惫臂褙悖蓓鹎鐾呗邶鞴孛陂碚俾埤怫波菩萆葡蜚跋");
static CONST_ALIGINED u8 pinyin_ben[] = _("本奔苯笨夯锛贲畚坌体");
static CONST_ALIGINED u8 pinyin_beng[] = _("蹦绷甭崩迸蚌泵甏嘣俸傍唪堋平抨旁榜");
static CONST_ALIGINED u8 pinyin_bi[] = _("比笔闭鼻碧必避逼毕臂彼鄙壁蓖币弊辟蔽毙庇敝陛毖痹秘泌秕薜荸芘萆匕裨畀俾嬖狴筚箅篦舭荜襞庳铋跸吡愎贲滗濞璧哔髀弼妣婢仳佛卑埤复媲幅庀拂捭服枇檗殍波瞥纰脾虑被费跛鐾陂陴馥");
static CONST_ALIGINED u8 pinyin_bian[] = _("边变便遍编辩扁贬鞭卞辨辫忭砭匾汴碥蝙褊鳊笾苄窆弁髟缏煸封拚稹");
static CONST_ALIGINED u8 pinyin_biao[] = _("表标彪膘杓婊飑飙鳔瘭飚镳裱骠镖剽嫖漂灬苞鏖髟");
static CONST_ALIGINED u8 pinyin_bie[] = _("别憋鳖瘪蹩扒拔捌撇秘蔽");
static CONST_ALIGINED u8 pinyin_bin[] = _("宾濒摈彬斌滨豳膑殡缤髌傧槟鬓镔玢份浜频");
static CONST_ALIGINED u8 pinyin_bing[] = _("并病兵冰丙饼屏秉柄炳摒槟禀邴冫平拼枋燹绠");
static CONST_ALIGINED u8 pinyin_bo[] = _("拨波播泊博伯驳玻剥薄勃菠钵搏脖帛般柏舶渤铂箔膊魄卜礴跛檗亳鹁踣啵蕃簸钹饽擘佛募孛怕拍拔擗暴服泼潘瀑爆番白百簿艴菩蒲薜蘖趵跑鲅");
static CONST_ALIGINED u8 pinyin_bu[] = _("不步补布部捕卜簿哺堡埠怖埔瓿逋晡钸钚醭卟拊溥薄附鞴");
static CONST_ALIGINED u8 pinyin_ca[] = _("擦拆礤嚓蔡");
static CONST_ALIGINED u8 pinyin_cai[] = _("才菜采材财裁猜踩睬蔡彩");
static CONST_ALIGINED u8 pinyin_can[] = _("蚕残掺参惨惭餐灿骖璨孱黪粲");
static CONST_ALIGINED u8 pinyin_cang[] = _("藏仓沧舱苍伧臧");
static CONST_ALIGINED u8 pinyin_cao[] = _("草操曹槽糙嘈艚螬漕屮澡艹造");
static CONST_ALIGINED u8 pinyin_ce[] = _("册侧策测厕恻帻栅赦");
static CONST_ALIGINED u8 pinyin_cen[] = _("参岑涔");
static CONST_ALIGINED u8 pinyin_ceng[] = _("曾层蹭噌僧增缯");
static CONST_ALIGINED u8 pinyin_cha[] = _("查插叉茶差岔搽察茬碴刹诧楂槎镲衩汊馇檫姹杈锸嚓土捷接斜猹苴荼钗");
static CONST_ALIGINED u8 pinyin_chai[] = _("柴拆差豺钗瘥虿侪叉搓查茈龇");
static CONST_ALIGINED u8 pinyin_chan[] = _("缠产掺搀阐颤铲谗蝉单馋觇婵蒇谄冁廛孱蟾羼镡忏潺禅骣躔澶兔厘嬗崭掸沾渐胀苫裣谶");
static CONST_ALIGINED u8 pinyin_chang[] = _("偿长唱常场厂尝肠畅昌敞倡猖裳鲳氅菖惝嫦徜鬯阊怅伥昶苌娼倘尚淌");
static CONST_ALIGINED u8 pinyin_chao[] = _("朝抄超吵潮巢炒嘲剿绰钞怊焯耖晁唠涛绉绍诌");
static CONST_ALIGINED u8 pinyin_che[] = _("车撤扯掣彻尺澈坼砗多宅屮斥池");
static CONST_ALIGINED u8 pinyin_chen[] = _("辰趁称臣尘晨沉陈衬橙忱郴榇抻谌碜谶宸龀嗔伧琛堪填帘枕沈湛疹眈缜肜胂闯");
static CONST_ALIGINED u8 pinyin_cheng[] = _("骋成乘盛撑称城程呈诚秤惩逞澄橙承塍柽埕铖噌铛酲晟裎枨蛏丞瞠伥净呛嵊徵抢敞樘浈盯趟蹦郢醒");
static CONST_ALIGINED u8 pinyin_chi[] = _("吃尺迟池翅痴赤齿耻持斥侈弛驰炽匙踟坻茌墀饬媸豉褫敕哧瘛蚩啻鸱眵螭篪魑叱彳笞嗤傺哆啸喜她抬拆拖提搋柢沱治滞眙离移胝芪茬莉蛇踅饰骊");
static CONST_ALIGINED u8 pinyin_chong[] = _("冲重虫充宠崇涌种艟忡舂铳憧茺僮潼烛盅茧酮");
static CONST_ALIGINED u8 pinyin_chou[] = _("抽愁臭仇丑稠绸酬筹踌畴瞅惆俦帱瘳雠圳妯扭揄溴诌钮鲋");
static CONST_ALIGINED u8 pinyin_chu[] = _("出处初锄除触橱楚础储畜滁矗搐躇厨雏楮杵刍怵绌亍憷蹰黜蜍樗助柠涂淑硫祝絮著褚诎诸");
static CONST_ALIGINED u8 pinyin_chua[] = _("撮");
static CONST_ALIGINED u8 pinyin_chuai[] = _("揣膪啜嘬搋踹");
static CONST_ALIGINED u8 pinyin_chuan[] = _("穿船传串川喘椽氚遄钏舡舛巛惴掾踹镩");
static CONST_ALIGINED u8 pinyin_chuang[] = _("窗床闯创疮幢怆仓囱舂葱");
static CONST_ALIGINED u8 pinyin_chui[] = _("锤吹垂炊捶椎槌棰陲");
static CONST_ALIGINED u8 pinyin_chun[] = _("春唇纯蠢醇淳椿蝽莼鹑朐沌肫辁");
static CONST_ALIGINED u8 pinyin_chuo[] = _("戳绰踔啜龊辍促斫淖焯簇缀荃蔟趵踱躇辶醛镞");
static CONST_ALIGINED u8 pinyin_ci[] = _("次此词瓷慈雌磁辞刺茨伺疵赐差兹呲鹚祠糍厕司嵯措柴滋粢茈荠蚝螅趑");
static CONST_ALIGINED u8 pinyin_cong[] = _("从丛葱匆聪囱琮枞淙璁骢苁偬窗纵");
static CONST_ALIGINED u8 pinyin_cou[] = _("凑楱辏腠奏揍族簇蔟薮趋趣");
static CONST_ALIGINED u8 pinyin_cu[] = _("粗醋簇促卒徂猝蔟蹙酢殂蹴且戚绉趋趣错");
static CONST_ALIGINED u8 pinyin_cuan[] = _("窜蹿篡攒汆爨镩撺昕");
static CONST_ALIGINED u8 pinyin_cui[] = _("翠催脆摧崔淬衰瘁粹璀啐悴萃毳榱体察隹");
static CONST_ALIGINED u8 pinyin_cun[] = _("村寸存蹲忖皴浚");
static CONST_ALIGINED u8 pinyin_cuo[] = _("错撮搓挫措磋嵯厝鹾脞痤蹉瘥锉矬摧昔最躜");
static CONST_ALIGINED u8 pinyin_da[] = _("大答达打搭瘩塔笪耷哒褡疸怛靼妲沓嗒鞑塌胆迭");
static CONST_ALIGINED u8 pinyin_dai[] = _("带代呆戴待袋逮歹贷怠傣大殆呔玳迨岱甙黛骀绐埭棣毒诒逯隶驮");
static CONST_ALIGINED u8 pinyin_dan[] = _("但单蛋担弹掸胆淡丹耽旦氮诞郸惮石疸澹瘅萏殚眈聃箪赕儋啖冉坛忱怛憾檐湛潭澶膻蜒觇詹赡");
static CONST_ALIGINED u8 pinyin_dang[] = _("当党挡档荡谠铛宕菪凼裆砀场烫");
static CONST_ALIGINED u8 pinyin_dao[] = _("到道倒刀岛盗稻捣悼导蹈祷帱纛忉焘氘叨俦刂受啁忑惆洮涛陶鸟");
static CONST_ALIGINED u8 pinyin_de[] = _("的地得德底锝登陟");
static CONST_ALIGINED u8 pinyin_dei[] = _("得");
static CONST_ALIGINED u8 pinyin_deng[] = _("等灯邓登澄瞪凳蹬磴镫噔嶝戥簦橙");
static CONST_ALIGINED u8 pinyin_di[] = _("地第底低敌抵滴帝递嫡弟缔堤的涤提笛迪狄翟蒂觌邸谛诋嘀柢骶羝氐棣睇娣荻碲镝坻籴砥勺啻杓约胝芍莜蹄逐逮隶题");
static CONST_ALIGINED u8 pinyin_dia[] = _("嗲");
static CONST_ALIGINED u8 pinyin_dian[] = _("点电店殿淀掂颠垫碘惦奠典佃靛滇甸踮钿坫阽癫簟玷巅癜埝拈沾涎蜓");
static CONST_ALIGINED u8 pinyin_diao[] = _("掉钓叼吊雕调刁碉凋鸟铞铫鲷貂佻倜刀挑稠粜绸莜蜩赵跳踔轺骠");
static CONST_ALIGINED u8 pinyin_die[] = _("爹跌叠碟蝶迭谍牒堞瓞揲蹀耋鲽垤喋佚涉渫窒至褶踢轶鳎");
static CONST_ALIGINED u8 pinyin_ding[] = _("顶定盯订叮丁钉鼎锭町玎铤腚碇疔仃耵酊啶奠汀灯葶");
static CONST_ALIGINED u8 pinyin_diu[] = _("丢铥");
static CONST_ALIGINED u8 pinyin_dong[] = _("动东懂洞冻冬董栋侗恫峒鸫垌胨胴硐氡岽咚桐甬筒酮");
static CONST_ALIGINED u8 pinyin_dou[] = _("都斗豆逗陡抖痘兜读蚪窦篼蔸投渎窬逾酡钭");
static CONST_ALIGINED u8 pinyin_du[] = _("读度毒渡堵独肚镀赌睹杜督都犊妒顿蠹笃嘟渎椟牍黩髑芏土宅橐竺纛诧锗");
static CONST_ALIGINED u8 pinyin_duan[] = _("段短断端锻缎椴煅簖彖踹");
static CONST_ALIGINED u8 pinyin_dui[] = _("对队堆兑敦镦碓怼憝夺追锐");
static CONST_ALIGINED u8 pinyin_dun[] = _("吨顿蹲墩敦钝盾囤遁不趸沌盹镦礅炖砘俊豚");
static CONST_ALIGINED u8 pinyin_duo[] = _("多朵夺舵剁垛跺惰堕掇哆驮度躲踱沲咄铎裰哚缍兑捶揣杂柁棰沱郸锗陀隋");
static CONST_ALIGINED u8 pinyin_e[] = _("饿哦额鹅蛾扼俄讹阿遏峨娥恶厄鄂锇谔垩锷阏萼苊轭婀莪鳄颚腭愕呃噩鹗屙亚伪侉哑啊啐垭庵曷歹硪胺邑隘鬲");
static CONST_ALIGINED u8 pinyin_ei[] = _("诶");
static CONST_ALIGINED u8 pinyin_en[] = _("恩摁蒽嗯");
static CONST_ALIGINED u8 pinyin_er[] = _("而二耳儿饵尔贰洱珥鲕鸸佴迩铒濡");
static CONST_ALIGINED u8 pinyin_fa[] = _("发法罚伐乏筏阀珐垡砝拔拨泛贬");
static CONST_ALIGINED u8 pinyin_fan[] = _("反饭翻番犯凡帆返泛繁烦贩范樊藩矾钒燔蘩畈蕃蹯梵幡拚蟠袢");
static CONST_ALIGINED u8 pinyin_fang[] = _("放房防纺芳方访仿坊妨肪钫彷邡枋舫鲂匚");
static CONST_ALIGINED u8 pinyin_fei[] = _("废非飞肥费肺匪吠沸菲诽啡篚蜚腓扉妃斐狒芾悱镄霏翡榧淝鲱绯痱怫拂砩祓绋茇裴");
static CONST_ALIGINED u8 pinyin_fen[] = _("分份芬粉坟奋愤纷忿粪酚焚吩氛汾棼瀵鲼玢偾鼢匪喷奔愍扮拚燔盼贲颁");
static CONST_ALIGINED u8 pinyin_feng[] = _("锋风封逢缝蜂丰枫疯冯奉讽凤峰烽砜俸酆葑沣唪捧泛蚌逄鹏");
static CONST_ALIGINED u8 pinyin_fo[] = _("佛");
static CONST_ALIGINED u8 pinyin_fou[] = _("否缶不");
static CONST_ALIGINED u8 pinyin_fu[] = _("副幅扶浮富福负伏付复服附俯斧赴缚拂夫父符孵敷赋辅府腐腹妇抚覆辐肤氟佛俘傅讣弗涪袱市甫釜脯腑阜咐黼砩苻趺跗蚨芾鲋幞茯滏蜉拊菔蝠鳆蝮绂绋赙罘稃匐麸凫桴莩孚馥驸怫祓呋郛芙艴黻不仅包呒哺宓彳怀掊沸溥莆费还锫阝鞴");
static CONST_ALIGINED u8 pinyin_ga[] = _("噶胳夹嘎咖轧钆伽旮尬尕尜呷");
static CONST_ALIGINED u8 pinyin_gai[] = _("丐该改盖概钙芥溉戤垓陔赅咳核汽胲阂骸");
static CONST_ALIGINED u8 pinyin_gan[] = _("赶干感敢竿甘肝柑杆赣秆旰酐矸疳泔苷擀绀橄澉淦尴坩个乾奸捍汗");
static CONST_ALIGINED u8 pinyin_gang[] = _("刚钢纲港缸岗杠冈肛扛筻罡戆亢伉抗肮颃");
static CONST_ALIGINED u8 pinyin_gao[] = _("高搞告稿膏篙羔糕镐皋郜诰杲缟睾槔锆槁藁咎浩蒿");
static CONST_ALIGINED u8 pinyin_ge[] = _("个各歌割哥搁格阁隔革咯胳葛蛤戈鸽疙盖屹合铬硌骼颌袼塥虼圪镉仡舸鬲嗝膈搿纥哿介可噶浩砝菏钾铪闸髂");
static CONST_ALIGINED u8 pinyin_gei[] = _("给");
static CONST_ALIGINED u8 pinyin_gen[] = _("跟根哏茛亘艮痕");
static CONST_ALIGINED u8 pinyin_geng[] = _("更耕颈梗耿庚羹埂赓鲠哽绠亢硬邢");
static CONST_ALIGINED u8 pinyin_gong[] = _("弓工公功共攻宫供恭拱贡躬巩汞龚红肱觥珙蚣咣廾杠虹蛩赣");
static CONST_ALIGINED u8 pinyin_gou[] = _("够沟狗钩勾购构苟垢句岣彀枸鞲觏缑笱诟遘媾篝佝区拘鸲");
static CONST_ALIGINED u8 pinyin_gu[] = _("古股鼓谷故孤箍姑顾固雇估咕骨辜沽蛊贾菇梏鸪汩轱崮菰鹄鹘钴臌酤呱鲴诂牯瞽毂锢牿痼觚蛄罟嘏告哌枯滑瓠皋胍苦角骰");
static CONST_ALIGINED u8 pinyin_gua[] = _("挂刮瓜寡剐褂卦呱胍鸹栝诖惴舌");
static CONST_ALIGINED u8 pinyin_guai[] = _("怪拐乖掴哙");
static CONST_ALIGINED u8 pinyin_guan[] = _("贯关管官观馆惯罐灌冠棺纶盥矜莞掼涫鳏鹳倌串斡果桄沦菅");
static CONST_ALIGINED u8 pinyin_guang[] = _("光广逛桄犷咣胱恍扩横潢");
static CONST_ALIGINED u8 pinyin_gui[] = _("归贵鬼跪轨规硅桂柜龟诡闺瑰圭刽傀癸炔庋宄桧刿鳜鲑皈匦妫晷簋炅伪匮哇娃桅概沩洼祈绘觖蹶隗");
static CONST_ALIGINED u8 pinyin_gun[] = _("滚棍辊鲧衮磙绲丨浑混锟鳏");
static CONST_ALIGINED u8 pinyin_guo[] = _("过国果裹锅郭涡埚椁聒馘猓崞掴帼呙虢蜾蝈划唬囗搓枸活蜮蠃锞");
static CONST_ALIGINED u8 pinyin_ha[] = _("哈蛤虾铪吓呵獬");
static CONST_ALIGINED u8 pinyin_hai[] = _("还海害咳氦孩骇骸亥嗨醢胲咴阂颏");
static CONST_ALIGINED u8 pinyin_han[] = _("喊含汗寒汉旱酣韩焊涵函憨翰罕撼捍憾悍邯邗菡撖瀚阚顸蚶焓颔晗鼾厂嵌感旰泔淦滩澉甘矸轩钤");
static CONST_ALIGINED u8 pinyin_hang[] = _("行巷航夯杭吭颃沆绗珩桁炕狼肮酐");
static CONST_ALIGINED u8 pinyin_hao[] = _("好号浩嚎壕郝毫豪耗貉镐昊颢灏嚆蚝嗥皓蒿濠薅唬妞皋睾");
static CONST_ALIGINED u8 pinyin_he[] = _("和喝合河禾核何呵荷贺赫褐盒鹤菏貉阂涸吓嗬劾盍翮阖颌壑诃纥曷呙呼哈嗑害揭格洽渴硅缴苛藿蚵蝎辂辖阋霍鹄");
static CONST_ALIGINED u8 pinyin_hei[] = _("黑嘿嗨");
static CONST_ALIGINED u8 pinyin_hen[] = _("很狠恨痕哏掀艮");
static CONST_ALIGINED u8 pinyin_heng[] = _("恒横哼衡亨行桁珩蘅訇");
static CONST_ALIGINED u8 pinyin_hong[] = _("红轰哄虹洪宏烘鸿弘讧訇蕻闳薨黉荭泓汪港");
static CONST_ALIGINED u8 pinyin_hou[] = _("后厚吼喉侯候猴鲎篌堠後逅糇骺瘊诟");
static CONST_ALIGINED u8 pinyin_hu[] = _("湖户呼虎壶互胡护糊弧忽狐蝴葫沪乎戏核和瑚唬鹕冱怙鹱笏戽扈鹘浒祜醐琥囫烀轷瓠煳斛鹄猢惚岵滹觳唿槲汩羽胍芦芴苦虍许钴雇");
static CONST_ALIGINED u8 pinyin_hua[] = _("话花化画华划滑哗猾豁铧桦骅砉侉劐哇学找敌浍稞鲑");
static CONST_ALIGINED u8 pinyin_huai[] = _("坏怀淮槐徊划踝喟圳坯");
static CONST_ALIGINED u8 pinyin_huan[] = _("换还唤环患缓欢幻宦涣焕豢桓痪漶獾擐逭鲩郇鬟寰奂锾圜洹萑缳浣垸援灌瑗皖眩脘鹳");
static CONST_ALIGINED u8 pinyin_huang[] = _("簧黄慌晃荒凰皇谎惶蝗磺恍煌幌隍肓潢篁徨鳇遑癀湟蟥璜芒茫");
static CONST_ALIGINED u8 pinyin_hui[] = _("惠回会灰绘挥汇辉毁悔晦徽恢秽慧贿蛔讳徊卉烩诲彗浍珲蕙喙恚哕晖隳麾诙蟪茴洄咴虺荟缋堕桧涣皓眭睢虫违韦");
static CONST_ALIGINED u8 pinyin_hun[] = _("混昏荤浑婚魂阍珲馄溷诨挥捆昆棍绲缗");
static CONST_ALIGINED u8 pinyin_huo[] = _("或活火伙货和获祸豁霍惑嚯镬耠劐藿攉锪蠖钬夥化扮灬瓠越");
static CONST_ALIGINED u8 pinyin_ji[] = _("几及急既即机鸡积记级极计挤己季寄纪系基激吉脊际汲肌嫉姬绩缉饥迹棘蓟技冀辑伎祭剂悸济籍寂期其奇忌齐妓继集给革击圾箕讥畸稽疾墼洎鲚屐齑戟鲫嵇矶稷戢虮诘笈暨笄剞叽蒺跻嵴掎跽霁唧畿荠瘠玑羁丌偈芨佶赍楫髻咭蕺觊麂骥殛岌亟犄乩芰哜倚卟厝居彐揖棋洁猗疵瘵睽瞿秸粢结脔萁蕲藉蜡觇觌讦郅隔骑");
static CONST_ALIGINED u8 pinyin_jia[] = _("家加假价架甲佳夹嘉驾嫁枷荚颊钾稼茄贾铗葭迦戛浃镓痂恝岬跏嘏伽胛笳珈瘕郏袈蛱呷咖夏押拮挈挟揩暇袷铪颉骆骱");
static CONST_ALIGINED u8 pinyin_jian[] = _("建菅见件减尖间键贱肩兼检箭煎简剪歼监坚奸健艰荐剑渐溅涧鉴浅践捡柬笺俭碱硷拣舰槛缄茧饯翦鞯戋谏牮枧腱趼缣搛戬毽鲣笕谫楗囝蹇裥踺睑謇鹣蒹僭锏湔前喊堑孱柙滥犍箴纤茛谮钱险骞");
static CONST_ALIGINED u8 pinyin_jiang[] = _("将讲江奖降浆僵姜酱蒋疆匠强桨虹豇礓缰犟耩绛茳糨洚红");
static CONST_ALIGINED u8 pinyin_jiao[] = _("叫脚交角教较缴觉焦胶娇绞校搅骄狡浇矫郊嚼蕉轿窖椒礁饺铰酵侥剿徼艽僬蛟敫峤跤姣皎茭鹪噍醮佼湫鲛挢乔侨却咬妖学激纠菽");
static CONST_ALIGINED u8 pinyin_jie[] = _("接节街借皆截解界结届姐揭戒介阶劫芥竭洁疥藉价楷秸桔杰捷诫睫家偈桀喈拮骱羯蚧嗟颉鲒婕碣讦孑疖诘亥假卩唧圾契她担拾暨概渴獬砝祖籍纥袷锴髫");
static CONST_ALIGINED u8 pinyin_jin[] = _("进近今仅紧金斤尽劲禁浸锦晋筋津谨巾襟烬靳廑瑾馑槿衿堇荩矜噤缙卺妗赆觐吟肋钅锓");
static CONST_ALIGINED u8 pinyin_jing[] = _("婧京竟静井惊经镜净敬精景警竞境径荆晶鲸粳颈兢茎睛劲痉靖肼獍阱腈弪刭憬胫菁儆旌迳靓泾晟檠氏烃箐蜻醒陉青");
static CONST_ALIGINED u8 pinyin_jiong[] = _("窘炯扃迥冂垧炅");
static CONST_ALIGINED u8 pinyin_jiu[] = _("就九酒旧久揪救纠舅究韭厩臼玖灸咎疚赳鹫蹴僦柩桕鬏鸠阄啾噍愁湫缪蝤");
static CONST_ALIGINED u8 pinyin_ju[] = _("句举巨局具距锯剧居聚拘菊矩沮拒惧鞠狙驹且据柜桔俱车咀疽踞炬倨醵裾屦犋苴窭飓锔椐苣琚掬榘龃趄莒雎遽橘踽榉鞫钜讵枸仇佝告姐娶拱渠瞿租篓菹蒌蘧蛆足邹鄹锄雏骄鬻");
static CONST_ALIGINED u8 pinyin_juan[] = _("卷圈倦鹃捐娟眷绢鄄锩蠲镌狷桊涓隽擐泫甄眩睃蕊蜷身");
static CONST_ALIGINED u8 pinyin_jue[] = _("决绝觉角爵掘诀撅倔抉攫嚼脚桷噱橛嗟觖劂爝矍镢獗珏崛蕨噘谲蹶孓厥乙屈柽狂穴蕞蛙蠼较阕阙鞒鳜");
static CONST_ALIGINED u8 pinyin_jun[] = _("军君均菌俊峻龟竣骏钧浚郡筠麇皲捃匀旬狻訇隽");
static CONST_ALIGINED u8 pinyin_ka[] = _("卡喀咯咖胩咔佧珈");
static CONST_ALIGINED u8 pinyin_kai[] = _("慨开揩凯楷垲剀锎铠锴忾恺蒈劾喝核渴溘雉");
static CONST_ALIGINED u8 pinyin_kan[] = _("看砍堪刊嵌坎槛勘龛戡侃瞰莰阚凵喊莶馅");
static CONST_ALIGINED u8 pinyin_kang[] = _("抗炕扛糠康慷亢钪闶伉坑奋杭沆荒");
static CONST_ALIGINED u8 pinyin_kao[] = _("靠考烤拷栲犒尻铐彀挢搞槁");
static CONST_ALIGINED u8 pinyin_ke[] = _("可克棵科颗刻课客壳渴苛柯磕咳坷呵恪岢蝌缂蚵轲窠钶氪颏瞌锞稞珂髁疴嗑溘骒喀盍碣铪锕龛");
static CONST_ALIGINED u8 pinyin_kei[] = _("刻");
static CONST_ALIGINED u8 pinyin_ken[] = _("恳肯啃垦裉垠狠颀龈");
static CONST_ALIGINED u8 pinyin_keng[] = _("坑吭铿忐硎胫铒");
static CONST_ALIGINED u8 pinyin_kong[] = _("空孔控恐倥崆箜穹腔");
static CONST_ALIGINED u8 pinyin_kou[] = _("口扣抠寇蔻芤眍筘叩佝妪挎");
static CONST_ALIGINED u8 pinyin_ku[] = _("哭库苦枯裤窟酷刳骷喾堀绔古圣挎掘跨");
static CONST_ALIGINED u8 pinyin_kua[] = _("跨垮挎夸胯侉锞髁");
static CONST_ALIGINED u8 pinyin_kuai[] = _("快块筷会侩哙蒯浍郐狯脍傀蒉魁");
static CONST_ALIGINED u8 pinyin_kuan[] = _("宽款髋完棵颗");
static CONST_ALIGINED u8 pinyin_kuang[] = _("矿筐狂框况旷匡眶诳邝纩夼诓圹贶哐兄枉湟磺逛");
static CONST_ALIGINED u8 pinyin_kui[] = _("亏愧奎窥溃葵魁馈盔傀岿匮愦揆睽跬聩篑喹逵暌蒉悝喟馗蝰隗夔缺臾觖踩阕顷");
static CONST_ALIGINED u8 pinyin_kun[] = _("捆困昆坤鲲锟髡琨醌阃悃卵混顽馄鳏龈");
static CONST_ALIGINED u8 pinyin_kuo[] = _("阔扩括廓适蛞栝会刳哙邝");
static CONST_ALIGINED u8 pinyin_la[] = _("拉啦辣蜡腊喇垃蓝落瘌邋砬剌旯摺");
static CONST_ALIGINED u8 pinyin_lai[] = _("赖来莱濑赉崃涞铼籁徕癞睐黧");
static CONST_ALIGINED u8 pinyin_lan[] = _("蓝兰烂拦篮懒栏揽缆滥阑谰婪澜览榄岚褴镧斓罱漤啉廪懔涟炼谏郴");
static CONST_ALIGINED u8 pinyin_lang[] = _("浪狼廊郎朗榔琅稂螂莨啷锒阆蒗羹踉");
static CONST_ALIGINED u8 pinyin_lao[] = _("老捞牢劳烙涝落姥酪络佬潦耢铹醪铑唠栳崂痨僚撩獠蓼");
static CONST_ALIGINED u8 pinyin_le[] = _("了乐勒肋鳓仂叻泐嘞");
static CONST_ALIGINED u8 pinyin_lei[] = _("类累泪雷垒勒擂蕾肋镭儡磊缧诔耒酹羸嫘檑嘞卢咧漯");
static CONST_ALIGINED u8 pinyin_len[] = _("啉");
static CONST_ALIGINED u8 pinyin_leng[] = _("冷棱楞愣塄");
static CONST_ALIGINED u8 pinyin_li[] = _("李里离力立例哩理利梨厘礼历丽吏砾漓莉傈荔俐痢狸粒沥隶栗璃鲤厉励犁黎篱郦鹂笠坜苈鳢缡跞蜊锂悝澧粝蓠枥蠡鬲呖砺嫠篥疠疬猁藜溧鲡戾栎唳醴轹詈骊罹逦俪喱雳黧莅俚蛎娌仂位列叻捩泣珞砬硌翮铄镉霾飒");
static CONST_ALIGINED u8 pinyin_lia[] = _("俩");
static CONST_ALIGINED u8 pinyin_lian[] = _("连联练莲恋脸炼链敛怜廉帘镰涟蠊琏殓蔹鲢奁潋臁裢濂裣楝令娈挛搛瞵羸膦苓莶镧零");
static CONST_ALIGINED u8 pinyin_liang[] = _("两亮辆凉粮梁量良晾谅俩粱墚靓踉椋魉莨惊蹒阆");
static CONST_ALIGINED u8 pinyin_liao[] = _("了料撩聊撂疗廖燎辽僚寥镣潦钌蓼尥寮缭獠鹩嘹佬劳");
static CONST_ALIGINED u8 pinyin_lie[] = _("列裂猎劣烈咧埒捩鬣趔躐冽洌例栗膊邋");
static CONST_ALIGINED u8 pinyin_lin[] = _("麟林临淋邻磷鳞赁吝拎琳霖凛遴嶙蔺粼躏辚廪懔瞵檩膦啉任渗阴");
static CONST_ALIGINED u8 pinyin_ling[] = _("另令领零铃玲灵岭龄凌陵菱伶羚棱翎蛉苓绫瓴酃呤泠棂柃鲮聆囹冷怜拎磷钉");
static CONST_ALIGINED u8 pinyin_liu[] = _("六流留刘柳溜硫瘤榴琉馏碌陆绺锍鎏镏浏骝旒鹨熘遛偻抡泖泵游聊蒌蓼铆");
static CONST_ALIGINED u8 pinyin_lo[] = _("咯");
static CONST_ALIGINED u8 pinyin_long[] = _("龙拢笼聋隆垄弄咙窿陇垅胧珑茏泷栊癃砻宠庞总");
static CONST_ALIGINED u8 pinyin_lou[] = _("漏楼搂陋露娄篓偻蝼镂蒌耧髅喽瘘嵝牢");
static CONST_ALIGINED u8 pinyin_lu[] = _("路露录鹿陆炉卢鲁卤芦颅庐碌掳绿虏赂戮潞禄麓六鲈栌渌蓼逯泸轳氇簏橹辂垆胪噜镥辘漉撸璐鸬鹭舻捋摅滤瘳肤角谷酪");
static CONST_ALIGINED u8 pinyin_luan[] = _("乱卵滦峦孪挛栾銮脔娈鸾");
static CONST_ALIGINED u8 pinyin_lue[] = _("略掠锊率药");
static CONST_ALIGINED u8 pinyin_lun[] = _("论轮抡伦沦仑纶囵");
static CONST_ALIGINED u8 pinyin_luo[] = _("落罗锣裸骡烙箩螺萝洛骆逻络咯荦漯蠃雒倮硌椤捋脶瘰摞泺珞镙猡乐果格橐烁猓碌蜾蠡袼跞路铬");
static CONST_ALIGINED u8 pinyin_lv[] = _("绿率铝驴旅屡滤吕律氯缕侣虑履偻膂榈闾捋褛稆卢娄庐篓累蒌镂鲁鹿");
static CONST_ALIGINED u8 pinyin_lve[] = _("略掠锊率药");
static CONST_ALIGINED u8 pinyin_m[] = _("呒");
static CONST_ALIGINED u8 pinyin_ma[] = _("吗妈马嘛麻骂抹码玛蚂摩唛蟆犸嬷杩么呐蓦貉貊靡麽");
static CONST_ALIGINED u8 pinyin_mai[] = _("买卖迈埋麦脉劢霾荬咪哩派");
static CONST_ALIGINED u8 pinyin_man[] = _("满慢瞒漫蛮蔓曼馒埋谩幔鳗墁螨镘颟鞔缦熳幕蹒");
static CONST_ALIGINED u8 pinyin_mang[] = _("忙芒盲莽茫氓硭邙蟒漭朦瞢龙");
static CONST_ALIGINED u8 pinyin_mao[] = _("蟊蝥毛冒帽猫矛卯貌茂贸铆锚茅耄茆瑁髦懋昴牦瞀峁袤旄泖侔勖描牟耗蛑");
static CONST_ALIGINED u8 pinyin_me[] = _("么麽");
static CONST_ALIGINED u8 pinyin_mei[] = _("魅眉没每煤镁美酶妹枚霉玫梅寐昧媒糜媚谜沫嵋猸袂湄浼鹛莓镅楣味坶墨某");
static CONST_ALIGINED u8 pinyin_men[] = _("门们闷懑扪钔焖汶满玟鞔");
static CONST_ALIGINED u8 pinyin_meng[] = _("檬猛梦蒙锰孟盟萌氓礞蜢勐懵甍蠓虻朦艋艨瞢明瞑蟊蟒黾");
static CONST_ALIGINED u8 pinyin_mi[] = _("米密迷眯蜜谜觅秘弥幂靡糜泌醚蘼縻咪汨麋祢猕弭谧芈脒宓敉嘧糸冖尔幺摩溟獯辟");
static CONST_ALIGINED u8 pinyin_mian[] = _("面棉免绵眠缅勉冕娩腼湎眄沔黾渑冥宀泯瞑缗");
static CONST_ALIGINED u8 pinyin_miao[] = _("秒苗庙妙描瞄藐渺眇缪缈淼喵杪鹋邈吵猫纱蜱");
static CONST_ALIGINED u8 pinyin_mie[] = _("灭蔑咩篾蠛乜咪谂");
static CONST_ALIGINED u8 pinyin_min[] = _("民抿敏闽皿悯珉愍缗闵玟苠泯黾鳘岷汶眠绳");
static CONST_ALIGINED u8 pinyin_ming[] = _("名明命鸣铭螟盟冥瞑暝茗溟酩萌");
static CONST_ALIGINED u8 pinyin_miu[] = _("谬缪");
static CONST_ALIGINED u8 pinyin_mo[] = _("摸磨抹末膜墨没莫默魔模摩摹漠陌蘑脉沫万无嘿冒寞秣瘼殁镆嫫谟蓦貊貘麽茉馍耱么伯佰勿帕抚昧百藐蟆袜貉貌");
static CONST_ALIGINED u8 pinyin_mou[] = _("某谋牟眸蛑鍪侔缪哞件厶婺毋袤");
static CONST_ALIGINED u8 pinyin_mu[] = _("木母亩幕目墓牧牟模穆暮牡拇募慕睦姆姥钼毪坶沐仫苜嘿婺缪");
static CONST_ALIGINED u8 pinyin_n[] = _("嗯哏");
static CONST_ALIGINED u8 pinyin_na[] = _("那拿哪纳钠娜呐南衲捺镎肭内呶箬絮");
static CONST_ALIGINED u8 pinyin_nai[] = _("乃耐奶奈氖哪萘艿柰鼐佴能");
static CONST_ALIGINED u8 pinyin_nan[] = _("难南男赧囡蝻楠喃腩囝摊滩颌");
static CONST_ALIGINED u8 pinyin_nang[] = _("囊馕曩囔攮哝");
static CONST_ALIGINED u8 pinyin_nao[] = _("闹脑恼挠淖孬铙瑙垴呶蛲猱硇浇");
static CONST_ALIGINED u8 pinyin_ne[] = _("呢哪那呐讷疒疔");
static CONST_ALIGINED u8 pinyin_nei[] = _("内哪馁那");
static CONST_ALIGINED u8 pinyin_nen[] = _("嫩恁枘");
static CONST_ALIGINED u8 pinyin_neng[] = _("能而耐");
static CONST_ALIGINED u8 pinyin_ng[] = _("嗯");
static CONST_ALIGINED u8 pinyin_ni[] = _("你泥拟腻逆呢溺倪尼匿妮霓铌昵坭祢猊伲怩鲵睨旎嶷慝滠");
static CONST_ALIGINED u8 pinyin_nian[] = _("年念捻撵拈碾蔫粘廿黏辇鲇鲶埝趁辗");
static CONST_ALIGINED u8 pinyin_niang[] = _("娘酿");
static CONST_ALIGINED u8 pinyin_niao[] = _("鸟尿袅茑脲嬲尥溺");
static CONST_ALIGINED u8 pinyin_nie[] = _("捏镍聂孽涅镊啮陧蘖嗫臬蹑颞乜倪囡埝幸捻摄肀");
static CONST_ALIGINED u8 pinyin_nin[] = _("您恁");
static CONST_ALIGINED u8 pinyin_ning[] = _("拧凝宁柠狞泞佞甯咛聍冰年攘疑");
static CONST_ALIGINED u8 pinyin_niu[] = _("牛扭纽钮拗妞狃忸蚴");
static CONST_ALIGINED u8 pinyin_nong[] = _("浓弄农脓哝侬咔");
static CONST_ALIGINED u8 pinyin_nou[] = _("耨");
static CONST_ALIGINED u8 pinyin_nu[] = _("怒努奴孥胬驽弩仅呶帑褥");
static CONST_ALIGINED u8 pinyin_nuan[] = _("暖濡");
static CONST_ALIGINED u8 pinyin_nue[] = _("虐疟谑");
static CONST_ALIGINED u8 pinyin_nuo[] = _("挪诺懦糯娜喏傩锘搦呐哪掉那难需");
static CONST_ALIGINED u8 pinyin_nv[] = _("女衄钕恧狃絮肭");
static CONST_ALIGINED u8 pinyin_nve[] = _("虐疟谑");
static CONST_ALIGINED u8 pinyin_o[] = _("哦喔噢");
static CONST_ALIGINED u8 pinyin_ou[] = _("偶呕欧藕鸥区沤殴怄瓯讴耦抠握渥纡遇");
static CONST_ALIGINED u8 pinyin_pa[] = _("怕爬趴啪耙扒帕琶派筢杷葩叭吧把芭钯");
static CONST_ALIGINED u8 pinyin_pai[] = _("派排拍牌迫徘湃哌俳蒎啡脾");
static CONST_ALIGINED u8 pinyin_pan[] = _("判盘盼攀畔潘叛磐番般胖襻蟠袢泮拚爿蹒伴半卞姗审弁彦扳拌片皤繁鄱");
static CONST_ALIGINED u8 pinyin_pang[] = _("旁胖耪庞乓膀磅滂彷逄螃仿傍彭房方蒡逢镑");
static CONST_ALIGINED u8 pinyin_pao[] = _("跑抛炮泡刨袍咆狍匏庖疱脬包抱胞苞飑鲍");
static CONST_ALIGINED u8 pinyin_pei[] = _("陪配赔呸胚佩培沛裴旆锫帔醅霈辔倍啡坏妃掊淠艴茇蜚");
static CONST_ALIGINED u8 pinyin_pen[] = _("喷盆湓吩本汾");
static CONST_ALIGINED u8 pinyin_peng[] = _("碰捧棚砰蓬朋彭鹏烹硼膨抨澎篷怦堋蟛嘭亨傍庄旁滂苹迸逢");
static CONST_ALIGINED u8 pinyin_pi[] = _("批皮披匹劈辟坯屁脾僻疲痞霹琵毗啤譬砒否貔丕圮媲癖仳擗郫甓枇睥蜱鼙邳吡陂铍庀罴埤纰陴淠噼蚍裨俾副卑坏培帔庇庳扑拂比濞疋痦篦芘苤萆蕃蚌被鄱钚颇");
static CONST_ALIGINED u8 pinyin_pian[] = _("片篇骗偏便扁翩缏犏骈胼蹁谝平蝙褊辩");
static CONST_ALIGINED u8 pinyin_pianpang[] = _("疒阝肀匚纟艹虍亠廾忄彐冂亻尢宀刂灬丶扌冫攵丨礻夂饣丿屮辶冖彡钅犭囗勹卩廴衤丬凵氵讠");
static CONST_ALIGINED u8 pinyin_piao[] = _("票飘漂瓢朴螵莩嫖瞟殍缥嘌骠剽膘髟");
static CONST_ALIGINED u8 pinyin_pie[] = _("瞥撇氕苤丿肺蔽");
static CONST_ALIGINED u8 pinyin_pin[] = _("品贫聘拼频嫔榀姘牝颦匕娉拚泵");
static CONST_ALIGINED u8 pinyin_ping[] = _("平凭瓶评屏乒萍苹坪冯娉鲆枰俜砰秤");
static CONST_ALIGINED u8 pinyin_po[] = _("破坡颇婆泼迫泊魄朴繁粕笸皤钋陂鄱攴叵珀钷溥膊跛霸");
static CONST_ALIGINED u8 pinyin_pou[] = _("剖掊裒培抱涪褒踣部锫");
static CONST_ALIGINED u8 pinyin_pu[] = _("扑铺谱脯仆蒲葡朴菩曝莆瀑埔圃浦堡普暴镨噗匍溥濮氆蹼璞镤剥卜扶攴攵甫苻");
static CONST_ALIGINED u8 pinyin_qi[] = _("起其七气期齐器妻骑汽棋奇欺漆启戚柒岂砌弃泣祁凄企乞契歧祈栖畦脐崎稽迄缉沏讫旗祺颀骐屺岐蹊萁蕲桤憩芪荠萋芑汔亟鳍俟槭嘁蛴綦亓欹琪麒琦蜞圻杞葺碛淇祗耆绮丌伎偈切刺勤吃吱宿己忮忾恝技抵挈揭支枝济渍甭畸示綮趿逗");
static CONST_ALIGINED u8 pinyin_qia[] = _("恰卡掐洽髂袷葜咭客挈疴鲒");
static CONST_ALIGINED u8 pinyin_qian[] = _("浅千前钱牵签欠铅嵌钎迁钳乾谴谦潜歉纤扦遣黔堑仟岍钤褰箝掮搴倩慊悭愆虔芡荨缱佥芊阡肷茜椠犍骞凄凵寨忏撖柑涔渐湔筋羟腱赶锓鹣龈");
static CONST_ALIGINED u8 pinyin_qiang[] = _("墙强枪抢腔呛羌蔷将蜣跄戗襁戕炝镪锖锵羟樯嫱哐庆控爿箐跫");
static CONST_ALIGINED u8 pinyin_qiao[] = _("桥瞧敲巧翘锹壳鞘撬悄俏窍雀乔侨峭橇樵荞跷硗憔谯鞒愀缲诮劁削峤愁招捎搞敫校毳焦硝茭蕉跤醮铫骄");
static CONST_ALIGINED u8 pinyin_qie[] = _("切且怯窃茄砌郄趄惬锲妾箧慊伽挈唼喋契婕捷沏漆脞蕺鲽");
static CONST_ALIGINED u8 pinyin_qin[] = _("亲琴侵勤擒寝秦芹沁禽钦吣覃矜衾芩溱廑嗪螓噙揿檎锓堇槿浸渗蓁蕲衿颌");
static CONST_ALIGINED u8 pinyin_qing[] = _("请轻清青情晴氢倾庆擎顷亲卿氰圊謦檠箐苘蜻黥罄鲭磬綮倩声精胜");
static CONST_ALIGINED u8 pinyin_qiong[] = _("穷琼跫穹邛蛩茕銎筇鞠");
static CONST_ALIGINED u8 pinyin_qiu[] = _("求球秋丘泅仇邱囚酋龟楸蚯裘糗蝤巯逑俅虬赇鳅犰湫鼽遒区团宿惆愀氽艽邺钆馗鸠");
static CONST_ALIGINED u8 pinyin_qu[] = _("去取区娶渠曲趋趣屈驱蛆躯龋戌蠼蘧祛蕖磲劬诎鸲阒麴癯衢黢璩氍觑蛐朐瞿岖苣句巨组蜡遽鞠鞫驺");
static CONST_ALIGINED u8 pinyin_quan[] = _("拳泉犬全权劝圈券颧痊醛铨筌绻诠辁畎鬈悛蜷荃卷圳拴桊犭獾纯鹳");
static CONST_ALIGINED u8 pinyin_que[] = _("却缺确雀瘸鹊炔榷阙阕悫决屈攉猎舄芍鸟");
static CONST_ALIGINED u8 pinyin_qun[] = _("群裙麇逡遁");
static CONST_ALIGINED u8 pinyin_ran[] = _("染燃然冉髯苒蚺");
static CONST_ALIGINED u8 pinyin_rang[] = _("让嚷瓤攘壤穰禳镶");
static CONST_ALIGINED u8 pinyin_rao[] = _("饶绕扰荛桡娆挠缭");
static CONST_ALIGINED u8 pinyin_re[] = _("热若惹喏偌");
static CONST_ALIGINED u8 pinyin_ren[] = _("人任忍认刃仁韧妊纫壬饪轫仞荏葚衽稔亻儿恁");
static CONST_ALIGINED u8 pinyin_reng[] = _("仍扔戎穰耳艿");
static CONST_ALIGINED u8 pinyin_ri[] = _("日");
static CONST_ALIGINED u8 pinyin_rong[] = _("容绒融溶熔荣戎蓉冗茸榕狨嵘肜蝾缛隔颂");
static CONST_ALIGINED u8 pinyin_rou[] = _("肉揉柔糅蹂鞣");
static CONST_ALIGINED u8 pinyin_ru[] = _("如入汝儒茹乳褥辱蠕孺蓐襦铷嚅缛濡薷颥溽洳女月肉需");
static CONST_ALIGINED u8 pinyin_ruan[] = _("软阮朊濡需");
static CONST_ALIGINED u8 pinyin_rui[] = _("瑞蕊锐睿芮蚋枘蕤兑内绥钠");
static CONST_ALIGINED u8 pinyin_run[] = _("润闰");
static CONST_ALIGINED u8 pinyin_ruo[] = _("若弱箬偌惹溺芮");
static CONST_ALIGINED u8 pinyin_sa[] = _("撒洒萨挲仨卅飒脎檫蔡");
static CONST_ALIGINED u8 pinyin_sai[] = _("塞腮鳃思赛噻");
static CONST_ALIGINED u8 pinyin_san[] = _("三散伞叁馓糁毵霰参");
static CONST_ALIGINED u8 pinyin_sang[] = _("桑丧嗓颡磉搡");
static CONST_ALIGINED u8 pinyin_sao[] = _("扫嫂搔骚梢埽鳋臊缫瘙哨燥缲");
static CONST_ALIGINED u8 pinyin_se[] = _("色涩瑟塞啬铯穑寨槭泣渍蔷铋铩");
static CONST_ALIGINED u8 pinyin_sen[] = _("森掺渗");
static CONST_ALIGINED u8 pinyin_seng[] = _("僧");
static CONST_ALIGINED u8 pinyin_sha[] = _("傻杀沙啥纱砂刹莎厦煞杉嗄唼鲨霎铩痧裟挲歃噎接摄赊");
static CONST_ALIGINED u8 pinyin_shai[] = _("晒筛色酾");
static CONST_ALIGINED u8 pinyin_shan[] = _("山闪衫善扇杉删煽单珊掺赡栅苫掸膳陕汕擅缮嬗蟮芟禅跚鄯潸鳝姗剡骟疝膻讪钐舢埏儋彡搀檀澹邓颤髟");
static CONST_ALIGINED u8 pinyin_shang[] = _("上伤尚商赏晌墒汤裳熵觞绱殇垧场");
static CONST_ALIGINED u8 pinyin_shao[] = _("少烧捎哨勺梢稍邵韶绍芍召鞘苕劭潲艄蛸筲削招搜溲笤绡");
static CONST_ALIGINED u8 pinyin_she[] = _("社射蛇设舌摄舍折涉赊赦慑奢歙厍畲猞麝滠佘拾揲睫碟聂蛞");
static CONST_ALIGINED u8 pinyin_shei[] = _("谁");
static CONST_ALIGINED u8 pinyin_shen[] = _("神身伸深婶甚渗肾审申沈绅呻参砷什娠慎葚糁莘诜谂矧椹渖蜃哂胂信吲抻震");
static CONST_ALIGINED u8 pinyin_sheng[] = _("声省剩生升绳胜盛圣甥牲乘晟渑眚笙嵊丞冼垩姓媵甸");
static CONST_ALIGINED u8 pinyin_shi[] = _("是使十时事室市石师试史式识虱矢拾屎驶始似嘘示士世柿匙拭誓逝势什殖峙嗜噬失适仕侍释饰氏狮食恃蚀视实施湿诗尸豕莳埘铈舐鲥鲺贳轼蓍筮炻谥弑酾螫唑堤寺彖提斯汁液礻筛绎耆肢舍赫郝铊铩饣饬");
static CONST_ALIGINED u8 pinyin_shou[] = _("首手受收守瘦授兽售熟寿艏狩绶扌涛");
static CONST_ALIGINED u8 pinyin_shu[] = _("书树数熟输梳叔属束术述蜀黍鼠淑赎孰蔬疏戍竖墅庶薯漱恕枢暑殊抒曙署舒姝摅秫纾沭毹腧塾菽殳澍倏俞售嗽娶揄朱杼涑疋荼薮豫透野镯除鹬");
static CONST_ALIGINED u8 pinyin_shua[] = _("刷耍唰唆涮选");
static CONST_ALIGINED u8 pinyin_shuai[] = _("甩摔率帅衰蟀绥");
static CONST_ALIGINED u8 pinyin_shuan[] = _("栓拴闩涮汕踹");
static CONST_ALIGINED u8 pinyin_shuang[] = _("双霜爽泷孀淙");
static CONST_ALIGINED u8 pinyin_shui[] = _("水谁睡税说氵");
static CONST_ALIGINED u8 pinyin_shun[] = _("顺吮瞬舜俊巛巡恂");
static CONST_ALIGINED u8 pinyin_shuo[] = _("说数硕烁朔搠妁槊蒴铄嗍嗽溯濯药");
static CONST_ALIGINED u8 pinyin_shw[] = _("折");
static CONST_ALIGINED u8 pinyin_si[] = _("四死丝撕似私嘶思寺司斯食伺厕肆饲嗣巳耜驷兕蛳厮汜锶泗笥咝鸶姒厶缌祀澌俟以台徙析祠糸纟肄菥雉饴");
static CONST_ALIGINED u8 pinyin_song[] = _("送松耸宋颂诵怂讼竦菘淞悚嵩凇崧忪锶");
static CONST_ALIGINED u8 pinyin_sou[] = _("艘搜擞嗽嗾嗖飕叟薮锼馊瞍溲螋敕族涑");
static CONST_ALIGINED u8 pinyin_su[] = _("素速诉塑宿俗苏肃粟酥缩溯僳愫簌觫稣夙嗉谡蔌涑嗖搬");
static CONST_ALIGINED u8 pinyin_suan[] = _("酸算蒜狻撰选");
static CONST_ALIGINED u8 pinyin_sui[] = _("岁遂随碎虽穗尿隋髓绥隧祟眭谇濉邃燧荽睢粹莎蓑遗");
static CONST_ALIGINED u8 pinyin_sun[] = _("孙损笋榫荪飧狲隼树跣餐");
static CONST_ALIGINED u8 pinyin_suo[] = _("所缩锁琐索梭蓑莎唆挲睃嗍唢桫嗦娑羧些岁抄沙牺衰逡霍");
static CONST_ALIGINED u8 pinyin_ta[] = _("他她它踏塔塌拓獭挞蹋溻趿鳎沓榻漯遢铊闼嗒太搭湿达鞑");
static CONST_ALIGINED u8 pinyin_tai[] = _("太抬台态胎苔泰酞汰炱肽跆呔鲐钛薹邰骀大能诒");
static CONST_ALIGINED u8 pinyin_tan[] = _("谈叹探滩弹碳摊潭贪坛痰毯坦炭瘫谭坍檀袒钽郯镡锬覃澹昙忐但掸沈淡湛炎胆舔荨蕈赕");
static CONST_ALIGINED u8 pinyin_tang[] = _("躺趟堂糖汤塘烫倘淌唐搪棠膛螳樘羰醣瑭镗傥饧溏耥帑铴螗弹扩荡铛阊");
static CONST_ALIGINED u8 pinyin_tao[] = _("陶套掏逃桃讨淘涛滔绦萄鼗洮焘啕饕韬叨姚挑筹绸跳");
static CONST_ALIGINED u8 pinyin_te[] = _("特慝铽忑忒匿式贷");
static CONST_ALIGINED u8 pinyin_tei[] = _("忒");
static CONST_ALIGINED u8 pinyin_teng[] = _("疼腾藤誊滕");
static CONST_ALIGINED u8 pinyin_ti[] = _("提替体题踢蹄剃剔梯锑啼涕嚏惕屉醍鹈绨缇倜裼逖荑悌弟折是棣狄睇肆诋谛跃达锡");
static CONST_ALIGINED u8 pinyin_tian[] = _("天田添填甜舔恬腆佃掭钿阗忝殄畋典吞嗔栝沾滇甸町苫蚕蚺锘镇颠");
static CONST_ALIGINED u8 pinyin_tiao[] = _("条跳挑调迢眺龆笤祧蜩髫佻窕鲦苕粜啁姚桃稠超踔铫");
static CONST_ALIGINED u8 pinyin_tie[] = _("铁贴帖萜餮占蝶锇");
static CONST_ALIGINED u8 pinyin_ting[] = _("听停挺厅亭艇庭廷烃汀町莛铤葶婷蜓梃霆奠");
static CONST_ALIGINED u8 pinyin_tong[] = _("同通痛铜桶筒捅统童彤桐瞳恫侗酮潼茼仝砼峒恸佟嗵垌僮恿洞硐艟重");
static CONST_ALIGINED u8 pinyin_tou[] = _("头偷透投钭骰亠愉绣谕谙逗");
static CONST_ALIGINED u8 pinyin_tu[] = _("土图兔涂吐秃突徒凸途屠酴荼钍菟堍余杜跌");
static CONST_ALIGINED u8 pinyin_tuan[] = _("团湍疃抟彖敦税鹑");
static CONST_ALIGINED u8 pinyin_tui[] = _("腿推退褪颓蜕煺忒弟税脱追馈");
static CONST_ALIGINED u8 pinyin_tun[] = _("吞屯褪臀囤氽饨豚暾吨吴沌炖窀纯肫逐");
static CONST_ALIGINED u8 pinyin_tuo[] = _("拖脱托妥驮拓驼椭唾鸵陀魄橐柝跎乇坨佗庹酡柁鼍沱箨砣他它惰池税舄蛇说迤铊隋");
static CONST_ALIGINED u8 pinyin_wa[] = _("挖瓦蛙哇娃洼凹袜佤娲腽污鞋鲑");
static CONST_ALIGINED u8 pinyin_wai[] = _("外歪崴呙夭");
static CONST_ALIGINED u8 pinyin_wan[] = _("完万晚碗玩弯挽湾丸腕宛婉烷顽豌惋娩皖蔓莞脘蜿绾芄琬纨剜畹菀免关园朊箢苋贯");
static CONST_ALIGINED u8 pinyin_wang[] = _("望忘王往网亡枉旺汪妄芒辋魍惘罔匡尢皇");
static CONST_ALIGINED u8 pinyin_wei[] = _("喂为位未围胃微味尾伪威伟卫危违委魏唯维畏惟韦巍蔚谓尉潍纬慰桅萎苇渭遗葳帏艉鲔娓逶闱隈沩玮涠帷崴隗诿洧偎猥猬嵬軎韪炜煨圩薇痿倭哙囗堤岿有机熨猗眭立芟荽萏阢隹");
static CONST_ALIGINED u8 pinyin_wen[] = _("问文闻稳温吻蚊纹瘟紊汶阌刎雯璺免娩愠昧殁眼笏蕴限韫");
static CONST_ALIGINED u8 pinyin_weng[] = _("翁嗡瓮蕹蓊壅蒙");
static CONST_ALIGINED u8 pinyin_wo[] = _("我握窝卧挝沃蜗涡斡倭幄龌肟莴喔渥硪嗌埚夭媪杌瘟");
static CONST_ALIGINED u8 pinyin_wu[] = _("无五屋物舞雾误捂污悟勿钨武戊务呜伍吴午吾侮乌毋恶诬芜巫晤梧坞妩蜈牾寤兀怃阢邬唔忤骛於鋈仵杌鹜婺迕痦芴焐庑鹉鼯浯圬亡仡侉喔垭御旄母渥瞀笏莫蝥龉");
static CONST_ALIGINED u8 pinyin_xi[] = _("西洗细吸戏系喜席稀溪熄锡膝息袭惜习嘻夕悉矽熙希檄牺晰昔媳硒铣烯腊析隙栖汐犀蜥奚浠葸饩屣玺嬉禊兮翕穸禧僖淅蓰舾蹊醯郗欷皙蟋羲茜徙隰唏曦螅歙樨阋粞熹觋菥鼷裼舄义咦咭屎撕既洒湿猎胁蜴褶诶谥郄错鳃");
static CONST_ALIGINED u8 pinyin_xia[] = _("下吓夏峡虾瞎霞狭匣侠辖厦暇唬狎柙呷黠硖罅遐瑕假呀哧嗄嗑岈押歃毳浃瘕给葭");
static CONST_ALIGINED u8 pinyin_xian[] = _("先线县现显掀闲献嫌陷险鲜弦衔馅限咸锨仙腺贤纤宪舷涎羡铣见苋藓岘痫莶籼娴蚬猃祆冼燹跣跹酰暹氙鹇筅霰妗姗寰彡慊捍探洒洗濂省矣碱笕肩胁蔹轩钐锬阚黹");
static CONST_ALIGINED u8 pinyin_xiang[] = _("镶箱想向象项响香乡相像巷享厢降翔祥橡详湘襄飨鲞骧蟓庠芗饷缃葙亨攘洋舡");
static CONST_ALIGINED u8 pinyin_xiao[] = _("潇萧小笑消削销效宵晓肖孝硝淆啸霄哮嚣校魈蛸骁枵哓崤筱逍枭绡箫佼俏叟号呼咻哨唠唬姣挠捎搜梢爻狡绞胶芍茭较骄骚");
static CONST_ALIGINED u8 pinyin_xie[] = _("写些鞋歇斜血谢卸挟屑蟹泻懈泄楔邪协械谐蝎携胁解契叶绁颉缬獬榭廨撷偕瀣渫亵榍邂薤躞燮勰唏喈接摺桔歙汁溃溉眭耶谍豫跬迦隰页骱鲑");
static CONST_ALIGINED u8 pinyin_xin[] = _("新心欣信芯薪锌辛寻衅忻歆囟莘镡馨鑫昕兴忄款");
static CONST_ALIGINED u8 pinyin_xing[] = _("型性行形星醒姓腥刑杏兴幸邢猩惺省硎悻荥陉擤荇研胜饧");
static CONST_ALIGINED u8 pinyin_xiong[] = _("胸雄凶兄熊汹匈芎宪");
static CONST_ALIGINED u8 pinyin_xiu[] = _("修锈绣休羞宿嗅袖秀朽臭溴貅馐髹鸺咻庥岫煦莠");
static CONST_ALIGINED u8 pinyin_xu[] = _("许须需虚嘘蓄续序叙畜絮婿戌徐旭绪吁酗恤墟糈勖栩浒蓿顼圩洫胥醑诩溆煦盱砉于休余呕呼咻嗅姐怵旮朐肷芋规讴邪雩馘");
static CONST_ALIGINED u8 pinyin_xuan[] = _("选悬旋玄宣喧轩绚眩癣券暄楦儇渲漩泫铉璇煊碹镟炫揎萱痃谖亘撰擐暖洵涓绢馔");
static CONST_ALIGINED u8 pinyin_xue[] = _("学雪血靴穴削薛踅噱鳕泶决哮嚯炔谑");
static CONST_ALIGINED u8 pinyin_xun[] = _("寻讯熏训循殉旬巡迅驯汛逊勋荤询浚巽鲟浔埙恂獯醺洵郇峋蕈薰荀窨曛徇孙悛梭洒潭狻绚荨逡遁鑫");
static CONST_ALIGINED u8 pinyin_ya[] = _("呀压牙押芽鸭轧崖哑亚涯丫雅衙鸦讶蚜垭疋砑琊桠睚娅痖岈氩伢迓揠厌吖吾御札歇碣辂邪闸颜鹌");
static CONST_ALIGINED u8 pinyin_yan[] = _("眼烟沿盐言演严咽淹炎掩厌宴岩研延堰验艳殷阉砚雁唁彦焰蜒衍谚燕颜阎铅焉奄芫厣阏菸魇琰滟焱赝筵腌兖剡餍恹罨檐湮偃谳胭晏闫俨郾酽鄢妍鼹崦阽嫣但俺厂埏埯夏巡广庵揞氤洇涎淡淫狠羡莶蔫覃讠趼这锬险靥");
static CONST_ALIGINED u8 pinyin_yang[] = _("样养羊洋仰扬秧氧痒杨漾阳殃央鸯佯疡炀恙徉鞅泱蛘烊怏昂映英详");
static CONST_ALIGINED u8 pinyin_yao[] = _("要摇药咬腰窑舀邀妖谣遥姚瑶耀尧钥侥陶约疟珧夭鳐鹞轺爻吆铫幺崾肴曜徭杳窈么乐啮娆幼洮淫瀹由繇荛骜");
static CONST_ALIGINED u8 pinyin_ye[] = _("也夜业野叶爷页液掖腋冶噎耶咽曳椰邪谒邺晔烨揶铘靥喝墅射拽揞揲斜洇涂聂荼馀");
static CONST_ALIGINED u8 pinyin_yi[] = _("一以已亿衣移依易医乙仪亦椅益倚姨翼译伊蛇遗食艾胰疑沂宜异彝壹蚁谊揖铱矣翌艺抑绎邑蛾屹尾役臆逸肄疫颐裔意毅忆义夷溢诣议怿痍镒癔怡驿旖熠酏翊欹峄圯殪嗌咦懿噫劓诒饴漪佚咿瘗猗眙羿弈苡荑仡佾贻钇缢迤刈悒黟翳弋奕蜴埸挹嶷薏呓轶镱舣丿也佗印台叹听噎圪坨夕失奇姬它射崎巳怠择掎搋施汽治泄洫渫焉焱熙犄疙硪绁绮维羡衤袂诶谥迭释铊隶雉黝");
static CONST_ALIGINED u8 pinyin_yin[] = _("因引印银音饮阴隐荫吟尹寅茵淫殷姻烟堙鄞喑夤胤龈吲圻狺垠霪蚓氤铟窨瘾洇茚众听垦壹币廴沂浔潭芩言");
static CONST_ALIGINED u8 pinyin_ying[] = _("应硬影营迎映蝇赢鹰英颖莹盈婴樱缨荧萤萦楹蓥瘿茔鹦媵莺璎郢嘤撄瑛滢潆嬴罂瀛膺荥颍哽央景甸绳逞");
static CONST_ALIGINED u8 pinyin_yo[] = _("哟育唷");
static CONST_ALIGINED u8 pinyin_yong[] = _("用涌永拥蛹勇雍咏泳佣踊痈庸臃恿壅慵俑墉鳙邕喁甬饔镛容臾蕹遇");
static CONST_ALIGINED u8 pinyin_you[] = _("有又由右油游幼优友铀忧尤犹诱悠邮酉佑釉幽疣攸蚰莠鱿卣黝莸猷蚴宥牖囿柚蝣莜鼬铕蝤繇呦侑叹坳奥尢扰揄泅聱锈");
static CONST_ALIGINED u8 pinyin_yu[] = _("与于欲鱼雨余遇语愈狱玉渔予誉育愚羽虞娱淤舆屿禹宇迂俞逾域芋郁谷吁盂喻峪御愉粥渝尉榆隅浴寓裕预豫驭蔚妪嵛雩馀阈窬鹆妤揄窳觎臾舁龉蓣煜钰谀纡於竽瑜禺聿欤俣伛圄鹬庾昱萸瘐谕鬻圉瘀熨饫毓燠腴狳菀蜮蝓亏吾唷喁噢夕奥宛崛懊或拗昙栩梧污汩澳煨王腧舒苑菸蜍衙阏");
static CONST_ALIGINED u8 pinyin_yuan[] = _("远员元院圆原愿园援猿怨冤源缘袁渊苑垣鸳辕圜鼋橼媛爰眢鸢掾芫沅瑗螈箢塬垸允咽宛捐涓穿阮陨");
static CONST_ALIGINED u8 pinyin_yue[] = _("月越约跃阅乐岳悦曰说粤钥瀹钺刖龠栎樾哕囝块妁烁药蜕蠖跞铄锐");
static CONST_ALIGINED u8 pinyin_yun[] = _("云运晕允匀韵陨孕耘蕴酝郧员氲恽愠郓芸筠韫昀狁殒纭熨均媪尉尹怨温瘟盾苑菀");
static CONST_ALIGINED u8 pinyin_za[] = _("杂砸咋匝扎咱咂拶啐嘁籴");
static CONST_ALIGINED u8 pinyin_zai[] = _("在再灾载栽宰哉甾崽仔才");
static CONST_ALIGINED u8 pinyin_zan[] = _("咱暂攒赞簪趱糌瓒拶昝錾涔湔");
static CONST_ALIGINED u8 pinyin_zang[] = _("脏葬赃藏奘臧驵戕");
static CONST_ALIGINED u8 pinyin_zao[] = _("枣早造遭糟灶燥凿躁藻皂噪澡蚤唣槽窖缫缲草");
static CONST_ALIGINED u8 pinyin_ze[] = _("则责择泽咋侧箦舴帻迮啧仄昃笮赜厕措柞稷谪");
static CONST_ALIGINED u8 pinyin_zei[] = _("贼鲫");
static CONST_ALIGINED u8 pinyin_zen[] = _("怎谮僭");
static CONST_ALIGINED u8 pinyin_zeng[] = _("增赠憎曾综缯罾甑锃");
static CONST_ALIGINED u8 pinyin_zha[] = _("扎炸渣闸眨榨乍轧诈铡札蜡查栅咋喳砟痄吒哳楂猹蚱揸喋柞咤齄册哆怍插渫笮膪苴鲽龃");
static CONST_ALIGINED u8 pinyin_zhai[] = _("摘窄债斋寨择翟宅侧祭砦瘵度柴疵箦膪责骀");
static CONST_ALIGINED u8 pinyin_zhan[] = _("站占战盏沾粘毡展栈詹颤蘸湛绽斩辗崭瞻谵搌旃湔澶袒谦躔醮骣");
static CONST_ALIGINED u8 pinyin_zhang[] = _("张章长帐仗丈掌涨账樟杖彰漳胀瘴障仉嫜幛鄣璋嶂獐蟑承");
static CONST_ALIGINED u8 pinyin_zhao[] = _("找着照招罩爪兆朝昭沼肇嘲召赵棹啁钊笊诏晁桃淖濯著蚤");
static CONST_ALIGINED u8 pinyin_zhe[] = _("着这者折遮蛰哲蔗锗辙浙柘辄赭摺鹧磔褶蜇谪乇嗫嘀堵庶摄斥耷聂褚轶陬鸷");
static CONST_ALIGINED u8 pinyin_zhei[] = _("这");
static CONST_ALIGINED u8 pinyin_zhen[] = _("真阵镇针震枕振斟珍疹诊甄砧臻贞侦缜蓁祯箴轸榛稹赈朕鸩胗浈桢畛圳椹唇坫填慎戡溱滇趁鲞鼎");
static CONST_ALIGINED u8 pinyin_zheng[] = _("郑正整睁争挣征怔证帧症拯丁蒸狰政峥钲铮筝诤徵鲭丞伥承敞止町瞠趟");
static CONST_ALIGINED u8 pinyin_zhi[] = _("只之直知制指纸支芝枝稚吱蜘质肢脂汁炙织职痔植抵殖执值侄址滞止趾治旨窒志挚掷至致置帜识峙氏智秩帙摭黹桎枳轵忮祉蛭膣觯郅栀彘芷祗咫鸷絷踬胝骘轾痣陟踯雉埴贽卮酯豸跖栉伎埃夂多实徵恃拓昵栽氐示祁积耆迟郦铁鸠");
static CONST_ALIGINED u8 pinyin_zhong[] = _("重中种钟肿众终盅忠仲衷踵舯螽锺冢忪夂潼童舂董蚣");
static CONST_ALIGINED u8 pinyin_zhou[] = _("周洲皱粥州轴舟昼骤宙诌肘帚咒繇胄纣荮啁碡绉籀妯酎侏倜啄喙府扭柚注祝舳诹调逐铀驺鬻");
static CONST_ALIGINED u8 pinyin_zhu[] = _("铸猪住主竹株煮筑著贮嘱拄注祝驻属术珠瞩蛛朱柱诸诛逐助烛蛀潴洙伫瘃翥茱苎橥舳杼箸炷侏铢疰渚褚躅麈邾槠竺丶予宁庶斗朝柠楮泞澍茁蚰逗阻除驺");
static CONST_ALIGINED u8 pinyin_zhua[] = _("抓爪挝");
static CONST_ALIGINED u8 pinyin_zhuai[] = _("拽转");
static CONST_ALIGINED u8 pinyin_zhuan[] = _("转专砖赚传撰篆颛馔啭沌抟湍");
static CONST_ALIGINED u8 pinyin_zhuang[] = _("装撞庄壮桩状幢妆僮奘戆丬憧艟赣");
static CONST_ALIGINED u8 pinyin_zhui[] = _("追坠缀锥赘椎骓惴缒隹垂揣槌致萑隧");
static CONST_ALIGINED u8 pinyin_zhun[] = _("准谆屯肫窀淳盹纯胗饨");
static CONST_ALIGINED u8 pinyin_zhuo[] = _("捉桌着啄拙灼浊卓琢缴茁酌擢焯濯诼浞涿倬镯禚斫勺啜掇杓棹淖箸肫著蕞趵踔躅");
static CONST_ALIGINED u8 pinyin_zi[] = _("字自子紫籽资姿吱滓仔兹咨孜渍滋淄笫粢龇秭恣谘趑缁梓鲻锱孳耔觜髭赀茈訾嵫眦姊辎事呲次甾疵载锌齐");
static CONST_ALIGINED u8 pinyin_zong[] = _("总纵宗棕综踪鬃偬粽枞腙");
static CONST_ALIGINED u8 pinyin_zou[] = _("走揍奏邹鲰鄹陬驺诹族楱");
static CONST_ALIGINED u8 pinyin_zu[] = _("组族足阻租祖诅菹镞卒俎啐嘁徂沮淬苴趱蹴驵");
static CONST_ALIGINED u8 pinyin_zuan[] = _("钻纂赚缵躜攥撮攒");
static CONST_ALIGINED u8 pinyin_zui[] = _("最嘴醉罪堆咀觜蕞摧撮羧");
static CONST_ALIGINED u8 pinyin_zun[] = _("尊遵鳟撙樽奠蹲");
static CONST_ALIGINED u8 pinyin_zuo[] = _("做作坐左座昨凿琢撮佐笮嘬酢唑祚胙怍阼柞乍挫砟醋");


static CONST_ALIGINED u8 pinyin_val_a[] = _("a");
static CONST_ALIGINED u8 pinyin_val_ai[] = _("ai");
static CONST_ALIGINED u8 pinyin_val_an[] = _("an");
static CONST_ALIGINED u8 pinyin_val_ang[] = _("ang");
static CONST_ALIGINED u8 pinyin_val_ao[] = _("ao");
static CONST_ALIGINED u8 pinyin_val_ba[] = _("ba");
static CONST_ALIGINED u8 pinyin_val_bai[] = _("bai");
static CONST_ALIGINED u8 pinyin_val_ban[] = _("ban");
static CONST_ALIGINED u8 pinyin_val_bang[] = _("bang");
static CONST_ALIGINED u8 pinyin_val_bao[] = _("bao");
static CONST_ALIGINED u8 pinyin_val_bei[] = _("bei");
static CONST_ALIGINED u8 pinyin_val_ben[] = _("ben");
static CONST_ALIGINED u8 pinyin_val_beng[] = _("beng");
static CONST_ALIGINED u8 pinyin_val_bi[] = _("bi");
static CONST_ALIGINED u8 pinyin_val_bian[] = _("bian");
static CONST_ALIGINED u8 pinyin_val_biao[] = _("biao");
static CONST_ALIGINED u8 pinyin_val_bie[] = _("bie");
static CONST_ALIGINED u8 pinyin_val_bin[] = _("bin");
static CONST_ALIGINED u8 pinyin_val_bing[] = _("bing");
static CONST_ALIGINED u8 pinyin_val_bo[] = _("bo");
static CONST_ALIGINED u8 pinyin_val_bu[] = _("bu");
static CONST_ALIGINED u8 pinyin_val_ca[] = _("ca");
static CONST_ALIGINED u8 pinyin_val_cai[] = _("cai");
static CONST_ALIGINED u8 pinyin_val_can[] = _("can");
static CONST_ALIGINED u8 pinyin_val_cang[] = _("cang");
static CONST_ALIGINED u8 pinyin_val_cao[] = _("cao");
static CONST_ALIGINED u8 pinyin_val_ce[] = _("ce");
static CONST_ALIGINED u8 pinyin_val_cen[] = _("cen");
static CONST_ALIGINED u8 pinyin_val_ceng[] = _("ceng");
static CONST_ALIGINED u8 pinyin_val_cha[] = _("cha");
static CONST_ALIGINED u8 pinyin_val_chai[] = _("chai");
static CONST_ALIGINED u8 pinyin_val_chan[] = _("chan");
static CONST_ALIGINED u8 pinyin_val_chang[] = _("chang");
static CONST_ALIGINED u8 pinyin_val_chao[] = _("chao");
static CONST_ALIGINED u8 pinyin_val_che[] = _("che");
static CONST_ALIGINED u8 pinyin_val_chen[] = _("chen");
static CONST_ALIGINED u8 pinyin_val_cheng[] = _("cheng");
static CONST_ALIGINED u8 pinyin_val_chi[] = _("chi");
static CONST_ALIGINED u8 pinyin_val_chong[] = _("chong");
static CONST_ALIGINED u8 pinyin_val_chou[] = _("chou");
static CONST_ALIGINED u8 pinyin_val_chu[] = _("chu");
static CONST_ALIGINED u8 pinyin_val_chua[] = _("chua");
static CONST_ALIGINED u8 pinyin_val_chuai[] = _("chuai");
static CONST_ALIGINED u8 pinyin_val_chuan[] = _("chuan");
static CONST_ALIGINED u8 pinyin_val_chuang[] = _("chuang");
static CONST_ALIGINED u8 pinyin_val_chui[] = _("chui");
static CONST_ALIGINED u8 pinyin_val_chun[] = _("chun");
static CONST_ALIGINED u8 pinyin_val_chuo[] = _("chuo");
static CONST_ALIGINED u8 pinyin_val_ci[] = _("ci");
static CONST_ALIGINED u8 pinyin_val_cong[] = _("cong");
static CONST_ALIGINED u8 pinyin_val_cou[] = _("cou");
static CONST_ALIGINED u8 pinyin_val_cu[] = _("cu");
static CONST_ALIGINED u8 pinyin_val_cuan[] = _("cuan");
static CONST_ALIGINED u8 pinyin_val_cui[] = _("cui");
static CONST_ALIGINED u8 pinyin_val_cun[] = _("cun");
static CONST_ALIGINED u8 pinyin_val_cuo[] = _("cuo");
static CONST_ALIGINED u8 pinyin_val_da[] = _("da");
static CONST_ALIGINED u8 pinyin_val_dai[] = _("dai");
static CONST_ALIGINED u8 pinyin_val_dan[] = _("dan");
static CONST_ALIGINED u8 pinyin_val_dang[] = _("dang");
static CONST_ALIGINED u8 pinyin_val_dao[] = _("dao");
static CONST_ALIGINED u8 pinyin_val_de[] = _("de");
static CONST_ALIGINED u8 pinyin_val_dei[] = _("dei");
static CONST_ALIGINED u8 pinyin_val_deng[] = _("deng");
static CONST_ALIGINED u8 pinyin_val_di[] = _("di");
static CONST_ALIGINED u8 pinyin_val_dia[] = _("dia");
static CONST_ALIGINED u8 pinyin_val_dian[] = _("dian");
static CONST_ALIGINED u8 pinyin_val_diao[] = _("diao");
static CONST_ALIGINED u8 pinyin_val_die[] = _("die");
static CONST_ALIGINED u8 pinyin_val_ding[] = _("ding");
static CONST_ALIGINED u8 pinyin_val_diu[] = _("diu");
static CONST_ALIGINED u8 pinyin_val_dong[] = _("dong");
static CONST_ALIGINED u8 pinyin_val_dou[] = _("dou");
static CONST_ALIGINED u8 pinyin_val_du[] = _("du");
static CONST_ALIGINED u8 pinyin_val_duan[] = _("duan");
static CONST_ALIGINED u8 pinyin_val_dui[] = _("dui");
static CONST_ALIGINED u8 pinyin_val_dun[] = _("dun");
static CONST_ALIGINED u8 pinyin_val_duo[] = _("duo");
static CONST_ALIGINED u8 pinyin_val_e[] = _("e");
static CONST_ALIGINED u8 pinyin_val_ei[] = _("ei");
static CONST_ALIGINED u8 pinyin_val_en[] = _("en");
static CONST_ALIGINED u8 pinyin_val_er[] = _("er");
static CONST_ALIGINED u8 pinyin_val_fa[] = _("fa");
static CONST_ALIGINED u8 pinyin_val_fan[] = _("fan");
static CONST_ALIGINED u8 pinyin_val_fang[] = _("fang");
static CONST_ALIGINED u8 pinyin_val_fei[] = _("fei");
static CONST_ALIGINED u8 pinyin_val_fen[] = _("fen");
static CONST_ALIGINED u8 pinyin_val_feng[] = _("feng");
static CONST_ALIGINED u8 pinyin_val_fo[] = _("fo");
static CONST_ALIGINED u8 pinyin_val_fou[] = _("fou");
static CONST_ALIGINED u8 pinyin_val_fu[] = _("fu");
static CONST_ALIGINED u8 pinyin_val_ga[] = _("ga");
static CONST_ALIGINED u8 pinyin_val_gai[] = _("gai");
static CONST_ALIGINED u8 pinyin_val_gan[] = _("gan");
static CONST_ALIGINED u8 pinyin_val_gang[] = _("gang");
static CONST_ALIGINED u8 pinyin_val_gao[] = _("gao");
static CONST_ALIGINED u8 pinyin_val_ge[] = _("ge");
static CONST_ALIGINED u8 pinyin_val_gei[] = _("gei");
static CONST_ALIGINED u8 pinyin_val_gen[] = _("gen");
static CONST_ALIGINED u8 pinyin_val_geng[] = _("geng");
static CONST_ALIGINED u8 pinyin_val_gong[] = _("gong");
static CONST_ALIGINED u8 pinyin_val_gou[] = _("gou");
static CONST_ALIGINED u8 pinyin_val_gu[] = _("gu");
static CONST_ALIGINED u8 pinyin_val_gua[] = _("gua");
static CONST_ALIGINED u8 pinyin_val_guai[] = _("guai");
static CONST_ALIGINED u8 pinyin_val_guan[] = _("guan");
static CONST_ALIGINED u8 pinyin_val_guang[] = _("guang");
static CONST_ALIGINED u8 pinyin_val_gui[] = _("gui");
static CONST_ALIGINED u8 pinyin_val_gun[] = _("gun");
static CONST_ALIGINED u8 pinyin_val_guo[] = _("guo");
static CONST_ALIGINED u8 pinyin_val_ha[] = _("ha");
static CONST_ALIGINED u8 pinyin_val_hai[] = _("hai");
static CONST_ALIGINED u8 pinyin_val_han[] = _("han");
static CONST_ALIGINED u8 pinyin_val_hang[] = _("hang");
static CONST_ALIGINED u8 pinyin_val_hao[] = _("hao");
static CONST_ALIGINED u8 pinyin_val_he[] = _("he");
static CONST_ALIGINED u8 pinyin_val_hei[] = _("hei");
static CONST_ALIGINED u8 pinyin_val_hen[] = _("hen");
static CONST_ALIGINED u8 pinyin_val_heng[] = _("heng");
static CONST_ALIGINED u8 pinyin_val_hong[] = _("hong");
static CONST_ALIGINED u8 pinyin_val_hou[] = _("hou");
static CONST_ALIGINED u8 pinyin_val_hu[] = _("hu");
static CONST_ALIGINED u8 pinyin_val_hua[] = _("hua");
static CONST_ALIGINED u8 pinyin_val_huai[] = _("huai");
static CONST_ALIGINED u8 pinyin_val_huan[] = _("huan");
static CONST_ALIGINED u8 pinyin_val_huang[] = _("huang");
static CONST_ALIGINED u8 pinyin_val_hui[] = _("hui");
static CONST_ALIGINED u8 pinyin_val_hun[] = _("hun");
static CONST_ALIGINED u8 pinyin_val_huo[] = _("huo");
static CONST_ALIGINED u8 pinyin_val_ji[] = _("ji");
static CONST_ALIGINED u8 pinyin_val_jia[] = _("jia");
static CONST_ALIGINED u8 pinyin_val_jian[] = _("jian");
static CONST_ALIGINED u8 pinyin_val_jiang[] = _("jiang");
static CONST_ALIGINED u8 pinyin_val_jiao[] = _("jiao");
static CONST_ALIGINED u8 pinyin_val_jie[] = _("jie");
static CONST_ALIGINED u8 pinyin_val_jin[] = _("jin");
static CONST_ALIGINED u8 pinyin_val_jing[] = _("jing");
static CONST_ALIGINED u8 pinyin_val_jiong[] = _("jiong");
static CONST_ALIGINED u8 pinyin_val_jiu[] = _("jiu");
static CONST_ALIGINED u8 pinyin_val_ju[] = _("ju");
static CONST_ALIGINED u8 pinyin_val_juan[] = _("juan");
static CONST_ALIGINED u8 pinyin_val_jue[] = _("jue");
static CONST_ALIGINED u8 pinyin_val_jun[] = _("jun");
static CONST_ALIGINED u8 pinyin_val_ka[] = _("ka");
static CONST_ALIGINED u8 pinyin_val_kai[] = _("kai");
static CONST_ALIGINED u8 pinyin_val_kan[] = _("kan");
static CONST_ALIGINED u8 pinyin_val_kang[] = _("kang");
static CONST_ALIGINED u8 pinyin_val_kao[] = _("kao");
static CONST_ALIGINED u8 pinyin_val_ke[] = _("ke");
static CONST_ALIGINED u8 pinyin_val_kei[] = _("kei");
static CONST_ALIGINED u8 pinyin_val_ken[] = _("ken");
static CONST_ALIGINED u8 pinyin_val_keng[] = _("keng");
static CONST_ALIGINED u8 pinyin_val_kong[] = _("kong");
static CONST_ALIGINED u8 pinyin_val_kou[] = _("kou");
static CONST_ALIGINED u8 pinyin_val_ku[] = _("ku");
static CONST_ALIGINED u8 pinyin_val_kua[] = _("kua");
static CONST_ALIGINED u8 pinyin_val_kuai[] = _("kuai");
static CONST_ALIGINED u8 pinyin_val_kuan[] = _("kuan");
static CONST_ALIGINED u8 pinyin_val_kuang[] = _("kuang");
static CONST_ALIGINED u8 pinyin_val_kui[] = _("kui");
static CONST_ALIGINED u8 pinyin_val_kun[] = _("kun");
static CONST_ALIGINED u8 pinyin_val_kuo[] = _("kuo");
static CONST_ALIGINED u8 pinyin_val_la[] = _("la");
static CONST_ALIGINED u8 pinyin_val_lai[] = _("lai");
static CONST_ALIGINED u8 pinyin_val_lan[] = _("lan");
static CONST_ALIGINED u8 pinyin_val_lang[] = _("lang");
static CONST_ALIGINED u8 pinyin_val_lao[] = _("lao");
static CONST_ALIGINED u8 pinyin_val_le[] = _("le");
static CONST_ALIGINED u8 pinyin_val_lei[] = _("lei");
static CONST_ALIGINED u8 pinyin_val_len[] = _("len");
static CONST_ALIGINED u8 pinyin_val_leng[] = _("leng");
static CONST_ALIGINED u8 pinyin_val_li[] = _("li");
static CONST_ALIGINED u8 pinyin_val_lia[] = _("lia");
static CONST_ALIGINED u8 pinyin_val_lian[] = _("lian");
static CONST_ALIGINED u8 pinyin_val_liang[] = _("liang");
static CONST_ALIGINED u8 pinyin_val_liao[] = _("liao");
static CONST_ALIGINED u8 pinyin_val_lie[] = _("lie");
static CONST_ALIGINED u8 pinyin_val_lin[] = _("lin");
static CONST_ALIGINED u8 pinyin_val_ling[] = _("ling");
static CONST_ALIGINED u8 pinyin_val_liu[] = _("liu");
static CONST_ALIGINED u8 pinyin_val_lo[] = _("lo");
static CONST_ALIGINED u8 pinyin_val_long[] = _("long");
static CONST_ALIGINED u8 pinyin_val_lou[] = _("lou");
static CONST_ALIGINED u8 pinyin_val_lu[] = _("lu");
static CONST_ALIGINED u8 pinyin_val_luan[] = _("luan");
static CONST_ALIGINED u8 pinyin_val_lue[] = _("lue");
static CONST_ALIGINED u8 pinyin_val_lun[] = _("lun");
static CONST_ALIGINED u8 pinyin_val_luo[] = _("luo");
static CONST_ALIGINED u8 pinyin_val_lv[] = _("lv");
static CONST_ALIGINED u8 pinyin_val_lve[] = _("lve");
static CONST_ALIGINED u8 pinyin_val_m[] = _("m");
static CONST_ALIGINED u8 pinyin_val_ma[] = _("ma");
static CONST_ALIGINED u8 pinyin_val_mai[] = _("mai");
static CONST_ALIGINED u8 pinyin_val_man[] = _("man");
static CONST_ALIGINED u8 pinyin_val_mang[] = _("mang");
static CONST_ALIGINED u8 pinyin_val_mao[] = _("mao");
static CONST_ALIGINED u8 pinyin_val_me[] = _("me");
static CONST_ALIGINED u8 pinyin_val_mei[] = _("mei");
static CONST_ALIGINED u8 pinyin_val_men[] = _("men");
static CONST_ALIGINED u8 pinyin_val_meng[] = _("meng");
static CONST_ALIGINED u8 pinyin_val_mi[] = _("mi");
static CONST_ALIGINED u8 pinyin_val_mian[] = _("mian");
static CONST_ALIGINED u8 pinyin_val_miao[] = _("miao");
static CONST_ALIGINED u8 pinyin_val_mie[] = _("mie");
static CONST_ALIGINED u8 pinyin_val_min[] = _("min");
static CONST_ALIGINED u8 pinyin_val_ming[] = _("ming");
static CONST_ALIGINED u8 pinyin_val_miu[] = _("miu");
static CONST_ALIGINED u8 pinyin_val_mo[] = _("mo");
static CONST_ALIGINED u8 pinyin_val_mou[] = _("mou");
static CONST_ALIGINED u8 pinyin_val_mu[] = _("mu");
static CONST_ALIGINED u8 pinyin_val_n[] = _("n");
static CONST_ALIGINED u8 pinyin_val_na[] = _("na");
static CONST_ALIGINED u8 pinyin_val_nai[] = _("nai");
static CONST_ALIGINED u8 pinyin_val_nan[] = _("nan");
static CONST_ALIGINED u8 pinyin_val_nang[] = _("nang");
static CONST_ALIGINED u8 pinyin_val_nao[] = _("nao");
static CONST_ALIGINED u8 pinyin_val_ne[] = _("ne");
static CONST_ALIGINED u8 pinyin_val_nei[] = _("nei");
static CONST_ALIGINED u8 pinyin_val_nen[] = _("nen");
static CONST_ALIGINED u8 pinyin_val_neng[] = _("neng");
static CONST_ALIGINED u8 pinyin_val_ng[] = _("ng");
static CONST_ALIGINED u8 pinyin_val_ni[] = _("ni");
static CONST_ALIGINED u8 pinyin_val_nian[] = _("nian");
static CONST_ALIGINED u8 pinyin_val_niang[] = _("niang");
static CONST_ALIGINED u8 pinyin_val_niao[] = _("niao");
static CONST_ALIGINED u8 pinyin_val_nie[] = _("nie");
static CONST_ALIGINED u8 pinyin_val_nin[] = _("nin");
static CONST_ALIGINED u8 pinyin_val_ning[] = _("ning");
static CONST_ALIGINED u8 pinyin_val_niu[] = _("niu");
static CONST_ALIGINED u8 pinyin_val_nong[] = _("nong");
static CONST_ALIGINED u8 pinyin_val_nou[] = _("nou");
static CONST_ALIGINED u8 pinyin_val_nu[] = _("nu");
static CONST_ALIGINED u8 pinyin_val_nuan[] = _("nuan");
static CONST_ALIGINED u8 pinyin_val_nue[] = _("nue");
static CONST_ALIGINED u8 pinyin_val_nuo[] = _("nuo");
static CONST_ALIGINED u8 pinyin_val_nv[] = _("nv");
static CONST_ALIGINED u8 pinyin_val_nve[] = _("nve");
static CONST_ALIGINED u8 pinyin_val_o[] = _("o");
static CONST_ALIGINED u8 pinyin_val_ou[] = _("ou");
static CONST_ALIGINED u8 pinyin_val_pa[] = _("pa");
static CONST_ALIGINED u8 pinyin_val_pai[] = _("pai");
static CONST_ALIGINED u8 pinyin_val_pan[] = _("pan");
static CONST_ALIGINED u8 pinyin_val_pang[] = _("pang");
static CONST_ALIGINED u8 pinyin_val_pao[] = _("pao");
static CONST_ALIGINED u8 pinyin_val_pei[] = _("pei");
static CONST_ALIGINED u8 pinyin_val_pen[] = _("pen");
static CONST_ALIGINED u8 pinyin_val_peng[] = _("peng");
static CONST_ALIGINED u8 pinyin_val_pi[] = _("pi");
static CONST_ALIGINED u8 pinyin_val_pian[] = _("pian");
static CONST_ALIGINED u8 pinyin_val_pianpang[] = _("pianpang");
static CONST_ALIGINED u8 pinyin_val_piao[] = _("piao");
static CONST_ALIGINED u8 pinyin_val_pie[] = _("pie");
static CONST_ALIGINED u8 pinyin_val_pin[] = _("pin");
static CONST_ALIGINED u8 pinyin_val_ping[] = _("ping");
static CONST_ALIGINED u8 pinyin_val_po[] = _("po");
static CONST_ALIGINED u8 pinyin_val_pou[] = _("pou");
static CONST_ALIGINED u8 pinyin_val_pu[] = _("pu");
static CONST_ALIGINED u8 pinyin_val_qi[] = _("qi");
static CONST_ALIGINED u8 pinyin_val_qia[] = _("qia");
static CONST_ALIGINED u8 pinyin_val_qian[] = _("qian");
static CONST_ALIGINED u8 pinyin_val_qiang[] = _("qiang");
static CONST_ALIGINED u8 pinyin_val_qiao[] = _("qiao");
static CONST_ALIGINED u8 pinyin_val_qie[] = _("qie");
static CONST_ALIGINED u8 pinyin_val_qin[] = _("qin");
static CONST_ALIGINED u8 pinyin_val_qing[] = _("qing");
static CONST_ALIGINED u8 pinyin_val_qiong[] = _("qiong");
static CONST_ALIGINED u8 pinyin_val_qiu[] = _("qiu");
static CONST_ALIGINED u8 pinyin_val_qu[] = _("qu");
static CONST_ALIGINED u8 pinyin_val_quan[] = _("quan");
static CONST_ALIGINED u8 pinyin_val_que[] = _("que");
static CONST_ALIGINED u8 pinyin_val_qun[] = _("qun");
static CONST_ALIGINED u8 pinyin_val_ran[] = _("ran");
static CONST_ALIGINED u8 pinyin_val_rang[] = _("rang");
static CONST_ALIGINED u8 pinyin_val_rao[] = _("rao");
static CONST_ALIGINED u8 pinyin_val_re[] = _("re");
static CONST_ALIGINED u8 pinyin_val_ren[] = _("ren");
static CONST_ALIGINED u8 pinyin_val_reng[] = _("reng");
static CONST_ALIGINED u8 pinyin_val_ri[] = _("ri");
static CONST_ALIGINED u8 pinyin_val_rong[] = _("rong");
static CONST_ALIGINED u8 pinyin_val_rou[] = _("rou");
static CONST_ALIGINED u8 pinyin_val_ru[] = _("ru");
static CONST_ALIGINED u8 pinyin_val_ruan[] = _("ruan");
static CONST_ALIGINED u8 pinyin_val_rui[] = _("rui");
static CONST_ALIGINED u8 pinyin_val_run[] = _("run");
static CONST_ALIGINED u8 pinyin_val_ruo[] = _("ruo");
static CONST_ALIGINED u8 pinyin_val_sa[] = _("sa");
static CONST_ALIGINED u8 pinyin_val_sai[] = _("sai");
static CONST_ALIGINED u8 pinyin_val_san[] = _("san");
static CONST_ALIGINED u8 pinyin_val_sang[] = _("sang");
static CONST_ALIGINED u8 pinyin_val_sao[] = _("sao");
static CONST_ALIGINED u8 pinyin_val_se[] = _("se");
static CONST_ALIGINED u8 pinyin_val_sen[] = _("sen");
static CONST_ALIGINED u8 pinyin_val_seng[] = _("seng");
static CONST_ALIGINED u8 pinyin_val_sha[] = _("sha");
static CONST_ALIGINED u8 pinyin_val_shai[] = _("shai");
static CONST_ALIGINED u8 pinyin_val_shan[] = _("shan");
static CONST_ALIGINED u8 pinyin_val_shang[] = _("shang");
static CONST_ALIGINED u8 pinyin_val_shao[] = _("shao");
static CONST_ALIGINED u8 pinyin_val_she[] = _("she");
static CONST_ALIGINED u8 pinyin_val_shei[] = _("shei");
static CONST_ALIGINED u8 pinyin_val_shen[] = _("shen");
static CONST_ALIGINED u8 pinyin_val_sheng[] = _("sheng");
static CONST_ALIGINED u8 pinyin_val_shi[] = _("shi");
static CONST_ALIGINED u8 pinyin_val_shou[] = _("shou");
static CONST_ALIGINED u8 pinyin_val_shu[] = _("shu");
static CONST_ALIGINED u8 pinyin_val_shua[] = _("shua");
static CONST_ALIGINED u8 pinyin_val_shuai[] = _("shuai");
static CONST_ALIGINED u8 pinyin_val_shuan[] = _("shuan");
static CONST_ALIGINED u8 pinyin_val_shuang[] = _("shuang");
static CONST_ALIGINED u8 pinyin_val_shui[] = _("shui");
static CONST_ALIGINED u8 pinyin_val_shun[] = _("shun");
static CONST_ALIGINED u8 pinyin_val_shuo[] = _("shuo");
static CONST_ALIGINED u8 pinyin_val_shw[] = _("shw");
static CONST_ALIGINED u8 pinyin_val_si[] = _("si");
static CONST_ALIGINED u8 pinyin_val_song[] = _("song");
static CONST_ALIGINED u8 pinyin_val_sou[] = _("sou");
static CONST_ALIGINED u8 pinyin_val_su[] = _("su");
static CONST_ALIGINED u8 pinyin_val_suan[] = _("suan");
static CONST_ALIGINED u8 pinyin_val_sui[] = _("sui");
static CONST_ALIGINED u8 pinyin_val_sun[] = _("sun");
static CONST_ALIGINED u8 pinyin_val_suo[] = _("suo");
static CONST_ALIGINED u8 pinyin_val_ta[] = _("ta");
static CONST_ALIGINED u8 pinyin_val_tai[] = _("tai");
static CONST_ALIGINED u8 pinyin_val_tan[] = _("tan");
static CONST_ALIGINED u8 pinyin_val_tang[] = _("tang");
static CONST_ALIGINED u8 pinyin_val_tao[] = _("tao");
static CONST_ALIGINED u8 pinyin_val_te[] = _("te");
static CONST_ALIGINED u8 pinyin_val_tei[] = _("tei");
static CONST_ALIGINED u8 pinyin_val_teng[] = _("teng");
static CONST_ALIGINED u8 pinyin_val_ti[] = _("ti");
static CONST_ALIGINED u8 pinyin_val_tian[] = _("tian");
static CONST_ALIGINED u8 pinyin_val_tiao[] = _("tiao");
static CONST_ALIGINED u8 pinyin_val_tie[] = _("tie");
static CONST_ALIGINED u8 pinyin_val_ting[] = _("ting");
static CONST_ALIGINED u8 pinyin_val_tong[] = _("tong");
static CONST_ALIGINED u8 pinyin_val_tou[] = _("tou");
static CONST_ALIGINED u8 pinyin_val_tu[] = _("tu");
static CONST_ALIGINED u8 pinyin_val_tuan[] = _("tuan");
static CONST_ALIGINED u8 pinyin_val_tui[] = _("tui");
static CONST_ALIGINED u8 pinyin_val_tun[] = _("tun");
static CONST_ALIGINED u8 pinyin_val_tuo[] = _("tuo");
static CONST_ALIGINED u8 pinyin_val_wa[] = _("wa");
static CONST_ALIGINED u8 pinyin_val_wai[] = _("wai");
static CONST_ALIGINED u8 pinyin_val_wan[] = _("wan");
static CONST_ALIGINED u8 pinyin_val_wang[] = _("wang");
static CONST_ALIGINED u8 pinyin_val_wei[] = _("wei");
static CONST_ALIGINED u8 pinyin_val_wen[] = _("wen");
static CONST_ALIGINED u8 pinyin_val_weng[] = _("weng");
static CONST_ALIGINED u8 pinyin_val_wo[] = _("wo");
static CONST_ALIGINED u8 pinyin_val_wu[] = _("wu");
static CONST_ALIGINED u8 pinyin_val_xi[] = _("xi");
static CONST_ALIGINED u8 pinyin_val_xia[] = _("xia");
static CONST_ALIGINED u8 pinyin_val_xian[] = _("xian");
static CONST_ALIGINED u8 pinyin_val_xiang[] = _("xiang");
static CONST_ALIGINED u8 pinyin_val_xiao[] = _("xiao");
static CONST_ALIGINED u8 pinyin_val_xie[] = _("xie");
static CONST_ALIGINED u8 pinyin_val_xin[] = _("xin");
static CONST_ALIGINED u8 pinyin_val_xing[] = _("xing");
static CONST_ALIGINED u8 pinyin_val_xiong[] = _("xiong");
static CONST_ALIGINED u8 pinyin_val_xiu[] = _("xiu");
static CONST_ALIGINED u8 pinyin_val_xu[] = _("xu");
static CONST_ALIGINED u8 pinyin_val_xuan[] = _("xuan");
static CONST_ALIGINED u8 pinyin_val_xue[] = _("xue");
static CONST_ALIGINED u8 pinyin_val_xun[] = _("xun");
static CONST_ALIGINED u8 pinyin_val_ya[] = _("ya");
static CONST_ALIGINED u8 pinyin_val_yan[] = _("yan");
static CONST_ALIGINED u8 pinyin_val_yang[] = _("yang");
static CONST_ALIGINED u8 pinyin_val_yao[] = _("yao");
static CONST_ALIGINED u8 pinyin_val_ye[] = _("ye");
static CONST_ALIGINED u8 pinyin_val_yi[] = _("yi");
static CONST_ALIGINED u8 pinyin_val_yin[] = _("yin");
static CONST_ALIGINED u8 pinyin_val_ying[] = _("ying");
static CONST_ALIGINED u8 pinyin_val_yo[] = _("yo");
static CONST_ALIGINED u8 pinyin_val_yong[] = _("yong");
static CONST_ALIGINED u8 pinyin_val_you[] = _("you");
static CONST_ALIGINED u8 pinyin_val_yu[] = _("yu");
static CONST_ALIGINED u8 pinyin_val_yuan[] = _("yuan");
static CONST_ALIGINED u8 pinyin_val_yue[] = _("yue");
static CONST_ALIGINED u8 pinyin_val_yun[] = _("yun");
static CONST_ALIGINED u8 pinyin_val_za[] = _("za");
static CONST_ALIGINED u8 pinyin_val_zai[] = _("zai");
static CONST_ALIGINED u8 pinyin_val_zan[] = _("zan");
static CONST_ALIGINED u8 pinyin_val_zang[] = _("zang");
static CONST_ALIGINED u8 pinyin_val_zao[] = _("zao");
static CONST_ALIGINED u8 pinyin_val_ze[] = _("ze");
static CONST_ALIGINED u8 pinyin_val_zei[] = _("zei");
static CONST_ALIGINED u8 pinyin_val_zen[] = _("zen");
static CONST_ALIGINED u8 pinyin_val_zeng[] = _("zeng");
static CONST_ALIGINED u8 pinyin_val_zha[] = _("zha");
static CONST_ALIGINED u8 pinyin_val_zhai[] = _("zhai");
static CONST_ALIGINED u8 pinyin_val_zhan[] = _("zhan");
static CONST_ALIGINED u8 pinyin_val_zhang[] = _("zhang");
static CONST_ALIGINED u8 pinyin_val_zhao[] = _("zhao");
static CONST_ALIGINED u8 pinyin_val_zhe[] = _("zhe");
static CONST_ALIGINED u8 pinyin_val_zhei[] = _("zhei");
static CONST_ALIGINED u8 pinyin_val_zhen[] = _("zhen");
static CONST_ALIGINED u8 pinyin_val_zheng[] = _("zheng");
static CONST_ALIGINED u8 pinyin_val_zhi[] = _("zhi");
static CONST_ALIGINED u8 pinyin_val_zhong[] = _("zhong");
static CONST_ALIGINED u8 pinyin_val_zhou[] = _("zhou");
static CONST_ALIGINED u8 pinyin_val_zhu[] = _("zhu");
static CONST_ALIGINED u8 pinyin_val_zhua[] = _("zhua");
static CONST_ALIGINED u8 pinyin_val_zhuai[] = _("zhuai");
static CONST_ALIGINED u8 pinyin_val_zhuan[] = _("zhuan");
static CONST_ALIGINED u8 pinyin_val_zhuang[] = _("zhuang");
static CONST_ALIGINED u8 pinyin_val_zhui[] = _("zhui");
static CONST_ALIGINED u8 pinyin_val_zhun[] = _("zhun");
static CONST_ALIGINED u8 pinyin_val_zhuo[] = _("zhuo");
static CONST_ALIGINED u8 pinyin_val_zi[] = _("zi");
static CONST_ALIGINED u8 pinyin_val_zong[] = _("zong");
static CONST_ALIGINED u8 pinyin_val_zou[] = _("zou");
static CONST_ALIGINED u8 pinyin_val_zu[] = _("zu");
static CONST_ALIGINED u8 pinyin_val_zuan[] = _("zuan");
static CONST_ALIGINED u8 pinyin_val_zui[] = _("zui");
static CONST_ALIGINED u8 pinyin_val_zun[] = _("zun");
static CONST_ALIGINED u8 pinyin_val_zuo[] = _("zuo");


CONST_ALIGINED struct PingYinSerchNode gPingYinSerchNode[416] =
    {
        {pinyin_val_a, pinyin_a},
        {pinyin_val_ai, pinyin_ai},
        {pinyin_val_an, pinyin_an},
        {pinyin_val_ang, pinyin_ang},
        {pinyin_val_ao, pinyin_ao},
        {pinyin_val_ba, pinyin_ba},
        {pinyin_val_bai, pinyin_bai},
        {pinyin_val_ban, pinyin_ban},
        {pinyin_val_bang, pinyin_bang},
        {pinyin_val_bao, pinyin_bao},
        {pinyin_val_bei, pinyin_bei},
        {pinyin_val_ben, pinyin_ben},
        {pinyin_val_beng, pinyin_beng},
        {pinyin_val_bi, pinyin_bi},
        {pinyin_val_bian, pinyin_bian},
        {pinyin_val_biao, pinyin_biao},
        {pinyin_val_bie, pinyin_bie},
        {pinyin_val_bin, pinyin_bin},
        {pinyin_val_bing, pinyin_bing},
        {pinyin_val_bo, pinyin_bo},
        {pinyin_val_bu, pinyin_bu},
        {pinyin_val_ca, pinyin_ca},
        {pinyin_val_cai, pinyin_cai},
        {pinyin_val_can, pinyin_can},
        {pinyin_val_cang, pinyin_cang},
        {pinyin_val_cao, pinyin_cao},
        {pinyin_val_ce, pinyin_ce},
        {pinyin_val_cen, pinyin_cen},
        {pinyin_val_ceng, pinyin_ceng},
        {pinyin_val_cha, pinyin_cha},
        {pinyin_val_chai, pinyin_chai},
        {pinyin_val_chan, pinyin_chan},
        {pinyin_val_chang, pinyin_chang},
        {pinyin_val_chao, pinyin_chao},
        {pinyin_val_che, pinyin_che},
        {pinyin_val_chen, pinyin_chen},
        {pinyin_val_cheng, pinyin_cheng},
        {pinyin_val_chi, pinyin_chi},
        {pinyin_val_chong, pinyin_chong},
        {pinyin_val_chou, pinyin_chou},
        {pinyin_val_chu, pinyin_chu},
        {pinyin_val_chua, pinyin_chua},
        {pinyin_val_chuai, pinyin_chuai},
        {pinyin_val_chuan, pinyin_chuan},
        {pinyin_val_chuang, pinyin_chuang},
        {pinyin_val_chui, pinyin_chui},
        {pinyin_val_chun, pinyin_chun},
        {pinyin_val_chuo, pinyin_chuo},
        {pinyin_val_ci, pinyin_ci},
        {pinyin_val_cong, pinyin_cong},
        {pinyin_val_cou, pinyin_cou},
        {pinyin_val_cu, pinyin_cu},
        {pinyin_val_cuan, pinyin_cuan},
        {pinyin_val_cui, pinyin_cui},
        {pinyin_val_cun, pinyin_cun},
        {pinyin_val_cuo, pinyin_cuo},
        {pinyin_val_da, pinyin_da},
        {pinyin_val_dai, pinyin_dai},
        {pinyin_val_dan, pinyin_dan},
        {pinyin_val_dang, pinyin_dang},
        {pinyin_val_dao, pinyin_dao},
        {pinyin_val_de, pinyin_de},
        {pinyin_val_dei, pinyin_dei},
        {pinyin_val_deng, pinyin_deng},
        {pinyin_val_di, pinyin_di},
        {pinyin_val_dia, pinyin_dia},
        {pinyin_val_dian, pinyin_dian},
        {pinyin_val_diao, pinyin_diao},
        {pinyin_val_die, pinyin_die},
        {pinyin_val_ding, pinyin_ding},
        {pinyin_val_diu, pinyin_diu},
        {pinyin_val_dong, pinyin_dong},
        {pinyin_val_dou, pinyin_dou},
        {pinyin_val_du, pinyin_du},
        {pinyin_val_duan, pinyin_duan},
        {pinyin_val_dui, pinyin_dui},
        {pinyin_val_dun, pinyin_dun},
        {pinyin_val_duo, pinyin_duo},
        {pinyin_val_e, pinyin_e},
        {pinyin_val_ei, pinyin_ei},
        {pinyin_val_en, pinyin_en},
        {pinyin_val_er, pinyin_er},
        {pinyin_val_fa, pinyin_fa},
        {pinyin_val_fan, pinyin_fan},
        {pinyin_val_fang, pinyin_fang},
        {pinyin_val_fei, pinyin_fei},
        {pinyin_val_fen, pinyin_fen},
        {pinyin_val_feng, pinyin_feng},
        {pinyin_val_fo, pinyin_fo},
        {pinyin_val_fou, pinyin_fou},
        {pinyin_val_fu, pinyin_fu},
        {pinyin_val_ga, pinyin_ga},
        {pinyin_val_gai, pinyin_gai},
        {pinyin_val_gan, pinyin_gan},
        {pinyin_val_gang, pinyin_gang},
        {pinyin_val_gao, pinyin_gao},
        {pinyin_val_ge, pinyin_ge},
        {pinyin_val_gei, pinyin_gei},
        {pinyin_val_gen, pinyin_gen},
        {pinyin_val_geng, pinyin_geng},
        {pinyin_val_gong, pinyin_gong},
        {pinyin_val_gou, pinyin_gou},
        {pinyin_val_gu, pinyin_gu},
        {pinyin_val_gua, pinyin_gua},
        {pinyin_val_guai, pinyin_guai},
        {pinyin_val_guan, pinyin_guan},
        {pinyin_val_guang, pinyin_guang},
        {pinyin_val_gui, pinyin_gui},
        {pinyin_val_gun, pinyin_gun},
        {pinyin_val_guo, pinyin_guo},
        {pinyin_val_ha, pinyin_ha},
        {pinyin_val_hai, pinyin_hai},
        {pinyin_val_han, pinyin_han},
        {pinyin_val_hang, pinyin_hang},
        {pinyin_val_hao, pinyin_hao},
        {pinyin_val_he, pinyin_he},
        {pinyin_val_hei, pinyin_hei},
        {pinyin_val_hen, pinyin_hen},
        {pinyin_val_heng, pinyin_heng},
        {pinyin_val_hong, pinyin_hong},
        {pinyin_val_hou, pinyin_hou},
        {pinyin_val_hu, pinyin_hu},
        {pinyin_val_hua, pinyin_hua},
        {pinyin_val_huai, pinyin_huai},
        {pinyin_val_huan, pinyin_huan},
        {pinyin_val_huang, pinyin_huang},
        {pinyin_val_hui, pinyin_hui},
        {pinyin_val_hun, pinyin_hun},
        {pinyin_val_huo, pinyin_huo},
        {pinyin_val_ji, pinyin_ji},
        {pinyin_val_jia, pinyin_jia},
        {pinyin_val_jian, pinyin_jian},
        {pinyin_val_jiang, pinyin_jiang},
        {pinyin_val_jiao, pinyin_jiao},
        {pinyin_val_jie, pinyin_jie},
        {pinyin_val_jin, pinyin_jin},
        {pinyin_val_jing, pinyin_jing},
        {pinyin_val_jiong, pinyin_jiong},
        {pinyin_val_jiu, pinyin_jiu},
        {pinyin_val_ju, pinyin_ju},
        {pinyin_val_juan, pinyin_juan},
        {pinyin_val_jue, pinyin_jue},
        {pinyin_val_jun, pinyin_jun},
        {pinyin_val_ka, pinyin_ka},
        {pinyin_val_kai, pinyin_kai},
        {pinyin_val_kan, pinyin_kan},
        {pinyin_val_kang, pinyin_kang},
        {pinyin_val_kao, pinyin_kao},
        {pinyin_val_ke, pinyin_ke},
        {pinyin_val_kei, pinyin_kei},
        {pinyin_val_ken, pinyin_ken},
        {pinyin_val_keng, pinyin_keng},
        {pinyin_val_kong, pinyin_kong},
        {pinyin_val_kou, pinyin_kou},
        {pinyin_val_ku, pinyin_ku},
        {pinyin_val_kua, pinyin_kua},
        {pinyin_val_kuai, pinyin_kuai},
        {pinyin_val_kuan, pinyin_kuan},
        {pinyin_val_kuang, pinyin_kuang},
        {pinyin_val_kui, pinyin_kui},
        {pinyin_val_kun, pinyin_kun},
        {pinyin_val_kuo, pinyin_kuo},
        {pinyin_val_la, pinyin_la},
        {pinyin_val_lai, pinyin_lai},
        {pinyin_val_lan, pinyin_lan},
        {pinyin_val_lang, pinyin_lang},
        {pinyin_val_lao, pinyin_lao},
        {pinyin_val_le, pinyin_le},
        {pinyin_val_lei, pinyin_lei},
        {pinyin_val_len, pinyin_len},
        {pinyin_val_leng, pinyin_leng},
        {pinyin_val_li, pinyin_li},
        {pinyin_val_lia, pinyin_lia},
        {pinyin_val_lian, pinyin_lian},
        {pinyin_val_liang, pinyin_liang},
        {pinyin_val_liao, pinyin_liao},
        {pinyin_val_lie, pinyin_lie},
        {pinyin_val_lin, pinyin_lin},
        {pinyin_val_ling, pinyin_ling},
        {pinyin_val_liu, pinyin_liu},
        {pinyin_val_lo, pinyin_lo},
        {pinyin_val_long, pinyin_long},
        {pinyin_val_lou, pinyin_lou},
        {pinyin_val_lu, pinyin_lu},
        {pinyin_val_luan, pinyin_luan},
        {pinyin_val_lue, pinyin_lue},
        {pinyin_val_lun, pinyin_lun},
        {pinyin_val_luo, pinyin_luo},
        {pinyin_val_lv, pinyin_lv},
        {pinyin_val_lve, pinyin_lve},
        {pinyin_val_m, pinyin_m},
        {pinyin_val_ma, pinyin_ma},
        {pinyin_val_mai, pinyin_mai},
        {pinyin_val_man, pinyin_man},
        {pinyin_val_mang, pinyin_mang},
        {pinyin_val_mao, pinyin_mao},
        {pinyin_val_me, pinyin_me},
        {pinyin_val_mei, pinyin_mei},
        {pinyin_val_men, pinyin_men},
        {pinyin_val_meng, pinyin_meng},
        {pinyin_val_mi, pinyin_mi},
        {pinyin_val_mian, pinyin_mian},
        {pinyin_val_miao, pinyin_miao},
        {pinyin_val_mie, pinyin_mie},
        {pinyin_val_min, pinyin_min},
        {pinyin_val_ming, pinyin_ming},
        {pinyin_val_miu, pinyin_miu},
        {pinyin_val_mo, pinyin_mo},
        {pinyin_val_mou, pinyin_mou},
        {pinyin_val_mu, pinyin_mu},
        {pinyin_val_n, pinyin_n},
        {pinyin_val_na, pinyin_na},
        {pinyin_val_nai, pinyin_nai},
        {pinyin_val_nan, pinyin_nan},
        {pinyin_val_nang, pinyin_nang},
        {pinyin_val_nao, pinyin_nao},
        {pinyin_val_ne, pinyin_ne},
        {pinyin_val_nei, pinyin_nei},
        {pinyin_val_nen, pinyin_nen},
        {pinyin_val_neng, pinyin_neng},
        {pinyin_val_ng, pinyin_ng},
        {pinyin_val_ni, pinyin_ni},
        {pinyin_val_nian, pinyin_nian},
        {pinyin_val_niang, pinyin_niang},
        {pinyin_val_niao, pinyin_niao},
        {pinyin_val_nie, pinyin_nie},
        {pinyin_val_nin, pinyin_nin},
        {pinyin_val_ning, pinyin_ning},
        {pinyin_val_niu, pinyin_niu},
        {pinyin_val_nong, pinyin_nong},
        {pinyin_val_nou, pinyin_nou},
        {pinyin_val_nu, pinyin_nu},
        {pinyin_val_nuan, pinyin_nuan},
        {pinyin_val_nue, pinyin_nue},
        {pinyin_val_nuo, pinyin_nuo},
        {pinyin_val_nv, pinyin_nv},
        {pinyin_val_nve, pinyin_nve},
        {pinyin_val_o, pinyin_o},
        {pinyin_val_ou, pinyin_ou},
        {pinyin_val_pa, pinyin_pa},
        {pinyin_val_pai, pinyin_pai},
        {pinyin_val_pan, pinyin_pan},
        {pinyin_val_pang, pinyin_pang},
        {pinyin_val_pao, pinyin_pao},
        {pinyin_val_pei, pinyin_pei},
        {pinyin_val_pen, pinyin_pen},
        {pinyin_val_peng, pinyin_peng},
        {pinyin_val_pi, pinyin_pi},
        {pinyin_val_pian, pinyin_pian},
        {pinyin_val_pianpang, pinyin_pianpang},
        {pinyin_val_piao, pinyin_piao},
        {pinyin_val_pie, pinyin_pie},
        {pinyin_val_pin, pinyin_pin},
        {pinyin_val_ping, pinyin_ping},
        {pinyin_val_po, pinyin_po},
        {pinyin_val_pou, pinyin_pou},
        {pinyin_val_pu, pinyin_pu},
        {pinyin_val_qi, pinyin_qi},
        {pinyin_val_qia, pinyin_qia},
        {pinyin_val_qian, pinyin_qian},
        {pinyin_val_qiang, pinyin_qiang},
        {pinyin_val_qiao, pinyin_qiao},
        {pinyin_val_qie, pinyin_qie},
        {pinyin_val_qin, pinyin_qin},
        {pinyin_val_qing, pinyin_qing},
        {pinyin_val_qiong, pinyin_qiong},
        {pinyin_val_qiu, pinyin_qiu},
        {pinyin_val_qu, pinyin_qu},
        {pinyin_val_quan, pinyin_quan},
        {pinyin_val_que, pinyin_que},
        {pinyin_val_qun, pinyin_qun},
        {pinyin_val_ran, pinyin_ran},
        {pinyin_val_rang, pinyin_rang},
        {pinyin_val_rao, pinyin_rao},
        {pinyin_val_re, pinyin_re},
        {pinyin_val_ren, pinyin_ren},
        {pinyin_val_reng, pinyin_reng},
        {pinyin_val_ri, pinyin_ri},
        {pinyin_val_rong, pinyin_rong},
        {pinyin_val_rou, pinyin_rou},
        {pinyin_val_ru, pinyin_ru},
        {pinyin_val_ruan, pinyin_ruan},
        {pinyin_val_rui, pinyin_rui},
        {pinyin_val_run, pinyin_run},
        {pinyin_val_ruo, pinyin_ruo},
        {pinyin_val_sa, pinyin_sa},
        {pinyin_val_sai, pinyin_sai},
        {pinyin_val_san, pinyin_san},
        {pinyin_val_sang, pinyin_sang},
        {pinyin_val_sao, pinyin_sao},
        {pinyin_val_se, pinyin_se},
        {pinyin_val_sen, pinyin_sen},
        {pinyin_val_seng, pinyin_seng},
        {pinyin_val_sha, pinyin_sha},
        {pinyin_val_shai, pinyin_shai},
        {pinyin_val_shan, pinyin_shan},
        {pinyin_val_shang, pinyin_shang},
        {pinyin_val_shao, pinyin_shao},
        {pinyin_val_she, pinyin_she},
        {pinyin_val_shei, pinyin_shei},
        {pinyin_val_shen, pinyin_shen},
        {pinyin_val_sheng, pinyin_sheng},
        {pinyin_val_shi, pinyin_shi},
        {pinyin_val_shou, pinyin_shou},
        {pinyin_val_shu, pinyin_shu},
        {pinyin_val_shua, pinyin_shua},
        {pinyin_val_shuai, pinyin_shuai},
        {pinyin_val_shuan, pinyin_shuan},
        {pinyin_val_shuang, pinyin_shuang},
        {pinyin_val_shui, pinyin_shui},
        {pinyin_val_shun, pinyin_shun},
        {pinyin_val_shuo, pinyin_shuo},
        {pinyin_val_shw, pinyin_shw},
        {pinyin_val_si, pinyin_si},
        {pinyin_val_song, pinyin_song},
        {pinyin_val_sou, pinyin_sou},
        {pinyin_val_su, pinyin_su},
        {pinyin_val_suan, pinyin_suan},
        {pinyin_val_sui, pinyin_sui},
        {pinyin_val_sun, pinyin_sun},
        {pinyin_val_suo, pinyin_suo},
        {pinyin_val_ta, pinyin_ta},
        {pinyin_val_tai, pinyin_tai},
        {pinyin_val_tan, pinyin_tan},
        {pinyin_val_tang, pinyin_tang},
        {pinyin_val_tao, pinyin_tao},
        {pinyin_val_te, pinyin_te},
        {pinyin_val_tei, pinyin_tei},
        {pinyin_val_teng, pinyin_teng},
        {pinyin_val_ti, pinyin_ti},
        {pinyin_val_tian, pinyin_tian},
        {pinyin_val_tiao, pinyin_tiao},
        {pinyin_val_tie, pinyin_tie},
        {pinyin_val_ting, pinyin_ting},
        {pinyin_val_tong, pinyin_tong},
        {pinyin_val_tou, pinyin_tou},
        {pinyin_val_tu, pinyin_tu},
        {pinyin_val_tuan, pinyin_tuan},
        {pinyin_val_tui, pinyin_tui},
        {pinyin_val_tun, pinyin_tun},
        {pinyin_val_tuo, pinyin_tuo},
        {pinyin_val_wa, pinyin_wa},
        {pinyin_val_wai, pinyin_wai},
        {pinyin_val_wan, pinyin_wan},
        {pinyin_val_wang, pinyin_wang},
        {pinyin_val_wei, pinyin_wei},
        {pinyin_val_wen, pinyin_wen},
        {pinyin_val_weng, pinyin_weng},
        {pinyin_val_wo, pinyin_wo},
        {pinyin_val_wu, pinyin_wu},
        {pinyin_val_xi, pinyin_xi},
        {pinyin_val_xia, pinyin_xia},
        {pinyin_val_xian, pinyin_xian},
        {pinyin_val_xiang, pinyin_xiang},
        {pinyin_val_xiao, pinyin_xiao},
        {pinyin_val_xie, pinyin_xie},
        {pinyin_val_xin, pinyin_xin},
        {pinyin_val_xing, pinyin_xing},
        {pinyin_val_xiong, pinyin_xiong},
        {pinyin_val_xiu, pinyin_xiu},
        {pinyin_val_xu, pinyin_xu},
        {pinyin_val_xuan, pinyin_xuan},
        {pinyin_val_xue, pinyin_xue},
        {pinyin_val_xun, pinyin_xun},
        {pinyin_val_ya, pinyin_ya},
        {pinyin_val_yan, pinyin_yan},
        {pinyin_val_yang, pinyin_yang},
        {pinyin_val_yao, pinyin_yao},
        {pinyin_val_ye, pinyin_ye},
        {pinyin_val_yi, pinyin_yi},
        {pinyin_val_yin, pinyin_yin},
        {pinyin_val_ying, pinyin_ying},
        {pinyin_val_yo, pinyin_yo},
        {pinyin_val_yong, pinyin_yong},
        {pinyin_val_you, pinyin_you},
        {pinyin_val_yu, pinyin_yu},
        {pinyin_val_yuan, pinyin_yuan},
        {pinyin_val_yue, pinyin_yue},
        {pinyin_val_yun, pinyin_yun},
        {pinyin_val_za, pinyin_za},
        {pinyin_val_zai, pinyin_zai},
        {pinyin_val_zan, pinyin_zan},
        {pinyin_val_zang, pinyin_zang},
        {pinyin_val_zao, pinyin_zao},
        {pinyin_val_ze, pinyin_ze},
        {pinyin_val_zei, pinyin_zei},
        {pinyin_val_zen, pinyin_zen},
        {pinyin_val_zeng, pinyin_zeng},
        {pinyin_val_zha, pinyin_zha},
        {pinyin_val_zhai, pinyin_zhai},
        {pinyin_val_zhan, pinyin_zhan},
        {pinyin_val_zhang, pinyin_zhang},
        {pinyin_val_zhao, pinyin_zhao},
        {pinyin_val_zhe, pinyin_zhe},
        {pinyin_val_zhei, pinyin_zhei},
        {pinyin_val_zhen, pinyin_zhen},
        {pinyin_val_zheng, pinyin_zheng},
        {pinyin_val_zhi, pinyin_zhi},
        {pinyin_val_zhong, pinyin_zhong},
        {pinyin_val_zhou, pinyin_zhou},
        {pinyin_val_zhu, pinyin_zhu},
        {pinyin_val_zhua, pinyin_zhua},
        {pinyin_val_zhuai, pinyin_zhuai},
        {pinyin_val_zhuan, pinyin_zhuan},
        {pinyin_val_zhuang, pinyin_zhuang},
        {pinyin_val_zhui, pinyin_zhui},
        {pinyin_val_zhun, pinyin_zhun},
        {pinyin_val_zhuo, pinyin_zhuo},
        {pinyin_val_zi, pinyin_zi},
        {pinyin_val_zong, pinyin_zong},
        {pinyin_val_zou, pinyin_zou},
        {pinyin_val_zu, pinyin_zu},
        {pinyin_val_zuan, pinyin_zuan},
        {pinyin_val_zui, pinyin_zui},
        {pinyin_val_zun, pinyin_zun},
        {pinyin_val_zuo, pinyin_zuo},
    };