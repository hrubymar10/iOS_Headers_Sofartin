/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface GGLLayer : CAEAGLLayer {
    struct CGSize { 
        double width; 
        double height; 
    } _backingSize;
    unsigned int _depthBuffer;
    unsigned int _frameBuffer;
    bool _readPixels;
    unsigned int _renderBuffer;
    <GGLLayerDisruptor> *_renderDisruptor;
    NSObject<GGLRenderQueueSource> *_renderSource;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    } _renderTarget;
    struct shared_ptr<ggl::GLRenderer> { 
        struct GLRenderer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _renderer;
}

@property(assign,readonly) struct CGSize { double x1; double x2; } backingSize;
@property(assign,readwrite) <GGLLayerDisruptor> * renderDisruptor;
@property(assign,readwrite) NSObject<GGLRenderQueueSource> * renderSource;
@property(assign,readonly) struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; bool x5; float x6; bool x7; id x8; struct RenderState {} *x9; /* Warning: unhandled struct encoding: '{unique_ptr<ggl::OESContext' */ struct x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; int x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; unsigned char x34; void*x35; unsigned short x36; void*x37; short x38; void*x39; void*x40; void*x41; void*x42; unsigned long x43; int x44; unsigned int x45/* : ? */; const void*x46; const void*x47; void*x48; void*x49; const int x50; void x51; void*x52; void*x53; void*x54; void*x55; const void*x56; void*x57; void*x58; void*x59; out const void*x60; short x61; void*x62; int x63; void*x64; out const void*x65; unsigned int x66; void*x67; void*x68; out const void*x69; void*x70; float x71; const void*x72; void*x73; void*x74; void*x75; out const void*x76; void*x77; int x78; void*x79; out const void*x80; unsigned int x81; void*x82; void*x83; out const void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; int x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; double x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; unsigned short x115; void*x116; short x117; void*x118; void*x119; void*x120; void*x121; unsigned long x122; int x123; unsigned int x124/* : ? */; const void*x125; const void*x126; void*x127; void*x128; const int x129; void x130; void*x131; void*x132; void*x133; void*x134; const void*x135; void*x136; void*x137; void*x138; out const void*x139; short x140; void*x141; oneway void*x142; BOOL x143; void*x144; out const void*x145; int x146; void*x147; void*x148; float x149; const void*x150; void*x151; void*x152; void*x153; out const void*x154; void*x155; oneway void*x156; BOOL x157; void*x158; out const void*x159; int x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; int x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; unsigned short x196; void*x197; short x198; void*x199; void*x200; void*x201; void*x202; unsigned long x203; int x204; unsigned int x205/* : ? */; const void*x206; const void*x207; void*x208; void*x209; const int x210; void x211; void*x212; void*x213; void*x214; void*x215; const void*x216; void*x217; void*x218; void*x219; out const void*x220; short x221; void*x222; int x223; const void*x224; out const void*x225; short x226; short x227; int x228; short x229; void*x230; void*x231; in void*x232; void*x233; float x234; const void*x235; void*x236; void*x237; void*x238; out const void*x239; void*x240; int x241; const void*x242; out const void*x243; short x244; short x245; int x246; short x247; void*x248; void*x249; in void*x250; void*x251; void*x252; void*x253; void*x254; int x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; const BOOL x270; void*x271; in void*x272; void x273; int x274; void*x275; void*x276; void*x277; int x278; out in unsigned int x279; void*x280; void*x281; void*x282; void*x283; out const void*x284; const void*x285; short x286; void*x287; in void*x288; int x289; in void*x290; inout void*x291; void x292; int x293; void*x294; void*x295; void*x296; int x297; out in unsigned int x298; void*x299; void*x300; void*x301; SEL x302; float x303; out const oneway int x304; void*x305; void*x306; unsigned char x307; out in void*x308; const out long x309; long x310; void*x311; const SEL x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; int x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; unsigned short x346; void*x347; short x348; void*x349; void*x350; void*x351; void*x352; unsigned long x353; int x354; unsigned int x355/* : ? */; const void*x356; const void*x357; void*x358; void*x359; const int x360; void x361; void*x362; void*x363; void*x364; void*x365; const void*x366; void*x367; void*x368; void*x369; out const void*x370; short x371; void*x372; unsigned short x373; void*x374; out const void*x375; void*x376; int x377; void*x378; void*x379; unsigned int x380; void*x381; float x382; const void*x383; void*x384; void*x385; void*x386; out const void*x387; void*x388; unsigned short x389; void*x390; out const void*x391; void*x392; int x393; void*x394; void*x395; unsigned int x396; void*x397; void*x398; void*x399; void*x400; void*x401; void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; int x413; void*x414; void*x415; void*x416; void*x417; void*x418; void*x419; void*x420; void*x421; void*x422; void*x423; void*x424; void*x425; void*x426; void*x427; void*x428; void*x429; int x430; in double x431; out void*x432; unsigned char x433; out in void*x434; const out long x435; long x436; void*x437; const bool x438; void*x439; short x440; void*x441; double x442; void*x443; const void*x444; short x445; void*x446; in void*x447; oneway int x448; void*x449; void*x450; unsigned char x451; out in void*x452; const out long x453; long x454; void*x455; const SEL x456; void*x457; int x458; void*x459; void*x460; void*x461; const void*x462; in short x463; int x464; void*x465; int x466; out in SEL x467; BOOL x468; out void*x469; void*x470; long x471; void*x472; void*x473; int x474; out in SEL x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; int x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; unsigned short x503; void*x504; short x505; void*x506; void*x507; void*x508; void*x509; unsigned long x510; int x511; unsigned int x512/* : ? */; const void*x513; const void*x514; void*x515; void*x516; const int x517; void x518; void*x519; void*x520; void*x521; void*x522; const void*x523; void*x524; void*x525; void*x526; out const void*x527; short x528; void*x529; bycopy float x530; float x531; int x532; BOOL x533; void*x534; unsigned int x535; void*x536; void*x537; out const void*x538; void*x539; float x540; const void*x541; void*x542; void*x543; void*x544; out const void*x545; void*x546; bycopy float x547; float x548; int x549; BOOL x550; void*x551; unsigned int x552; void*x553; void*x554; out const void*x555; void*x556; void*x557; void*x558; void*x559; void*x560; void*x561; void*x562; void*x563; void*x564; void*x565; void*x566; void*x567; void*x568; void*x569; void*x570; void*x571; void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; unsigned short x583; void*x584; short x585; void*x586; void*x587; void*x588; void*x589; unsigned long x590; int x591; unsigned int x592/* : ? */; const void*x593; const void*x594; void*x595; void*x596; const int x597; void x598; void*x599; void*x600; void*x601; void*x602; const void*x603; void*x604; void*x605; void*x606; out const void*x607; short x608; void*x609; unsigned short x610; void*x611; out const void*x612; void*x613; int x614; void*x615; void*x616; unsigned int x617; void*x618; float x619; const void*x620; void*x621; void*x622; void*x623; out const void*x624; void*x625; unsigned short x626; void*x627; out const void*x628; void*x629; int x630; void*x631; void*x632; unsigned int x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; void*x646; void*x647; void*x648; void*x649; void*x650; void*x651; void*x652; void*x653; void*x654; void*x655; void*x656; void*x657; void*x658; void*x659; void*x660; void*x661; void*x662; void*x663; void*x664; void*x665; unsigned short x666; void*x667; short x668; void*x669; void*x670; void*x671; void*x672; unsigned long x673; int x674; unsigned int x675/* : ? */; const void*x676; const void*x677; void*x678; void*x679; const int x680; void x681; void*x682; void*x683; void*x684; void*x685; const void*x686; void*x687; void*x688; void*x689; out const void*x690; short x691; void*x692; unsigned short x693; void*x694; out const void*x695; short x696; void*x697; out const void*x698; out void*x699; void*x700; void*x701; float x702; const void*x703; void*x704; void*x705; void*x706; out const void*x707; void*x708; unsigned short x709; void*x710; out const void*x711; short x712; void*x713; out const void*x714; out void*x715; void*x716; void*x717; void*x718; void*x719; void*x720; void*x721; void*x722; void*x723; void*x724; void*x725; void*x726; int x727; void*x728; void*x729; void*x730; void*x731; void*x732; void*x733; void*x734; void*x735; void*x736; void*x737; void*x738; void*x739; void*x740; void*x741; unsigned short x742; void*x743; short x744; void*x745; void*x746; void*x747; void*x748; unsigned long x749; int x750; unsigned int x751/* : ? */; const void*x752; const void*x753; void*x754; void*x755; const int x756; void x757; void*x758; void*x759; void*x760; void*x761; const void*x762; void*x763; void*x764; void*x765; out const void*x766; short x767; void*x768; unsigned short x769; void*x770; out const void*x771; void*x772; int x773; void*x774; void*x775; unsigned int x776; void*x777; float x778; const void*x779; void*x780; void*x781; void*x782; out const void*x783; void*x784; unsigned short x785; void*x786; out const void*x787; void*x788; int x789; void*x790; void*x791; unsigned int x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; void*x799; void*x800; void*x801; void*x802; void*x803; void*x804; void*x805; void*x806; void*x807; void*x808; void*x809; void*x810; void*x811; void*x812; void*x813; void*x814; void*x815; void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; unsigned short x825; void*x826; short x827; void*x828; void*x829; void*x830; void*x831; unsigned long x832; int x833; unsigned int x834/* : ? */; const void*x835; const void*x836; void*x837; void*x838; const int x839; void x840; void*x841; void*x842; void*x843; void*x844; const void*x845; void*x846; void*x847; void*x848; out const void*x849; short x850; void*x851; unsigned short x852; void*x853; out const void*x854; short x855; void*x856; out const void*x857; out void*x858; void*x859; void*x860; float x861; const void*x862; void*x863; void*x864; void*x865; out const void*x866; void*x867; unsigned short x868; void*x869; out const void*x870; short x871; void*x872; out const void*x873; out void*x874; void*x875; void*x876; void*x877; void*x878; void*x879; void*x880; void*x881; void*x882; void*x883; void*x884; void*x885; int x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; unsigned short x902; void*x903; short x904; void*x905; void*x906; void*x907; void*x908; unsigned long x909; int x910; unsigned int x911/* : ? */; const void*x912; const void*x913; void*x914; void*x915; const int x916; void x917; void*x918; void*x919; void*x920; void*x921; const void*x922; void*x923; void*x924; void*x925; out const void*x926; short x927; void*x928; void*x929; void*x930; out void*x931; out unsigned long x932; int x933; unsigned int x934/* : ? */; const void*x935; const void*x936; void*x937; float x938; const void*x939; void*x940; void*x941; void*x942; out const void*x943; void*x944; void*x945; void*x946; out void*x947; out unsigned long x948; int x949; unsigned int x950/* : ? */; const void*x951; const void*x952; void*x953; void*x954; void*x955; void*x956; void*x957; void*x958; void*x959; void*x960; void*x961; void*x962; void*x963; void*x964; void*x965; void*x966; void*x967; void*x968; void*x969; void*x970; void*x971; void*x972; void*x973; void*x974; void*x975; void*x976; void*x977; void*x978; id x979; void*x980; unsigned short x981; void*x982; short x983; void*x984; void*x985; void*x986; void*x987; unsigned long x988; int x989; unsigned int x990/* : ? */; const void*x991; const void*x992; void*x993; void*x994; const void*x995; void*x996; void*x997; void*x998; out const void*x999; short x1000; void*x1001; double x1002; double x1003; const void*x1004; short x1005; short x1006; bool x1007; out out void*x1008; void*x1009; unsigned int x1010; void*x1011; float x1012; const void*x1013; void*x1014; void*x1015; void*x1016; out const void*x1017; void*x1018; double x1019; double x1020; const void*x1021; short x1022; short x1023; bool x1024; out out void*x1025; void*x1026; unsigned int x1027; void*x1028; void*x1029; void*x1030; void*x1031; void*x1032; void*x1033; void*x1034; void*x1035; void*x1036; void*x1037; void*x1038; void*x1039; void*x1040; void*x1041; void*x1042; void*x1043; void*x1044; int x1045; void*x1046; void*x1047; void*x1048; void*x1049; void*x1050; id x1051; void*x1052; void*x1053; void*x1054; void*x1055; void*x1056; void*x1057; void*x1058; void*x1059; void*x1060; unsigned short x1061; void*x1062; short x1063; void*x1064; void*x1065; void*x1066; void*x1067; unsigned long x1068; int x1069; unsigned int x1070/* : ? */; const void*x1071; const void*x1072; void*x1073; void*x1074; const int x1075; void x1076; void*x1077; void*x1078; void*x1079; void*x1080; const void*x1081; void*x1082; void*x1083; void*x1084; out const void*x1085; short x1086; void*x1087; void*x1088; unsigned int x1089; void*x1090; out void*x1091; in double x1092; void*x1093; void*x1094; int x1095; out in void*x1096; float x1097; const void*x1098; void*x1099; void*x1100; void*x1101; out const void*x1102; void*x1103; void*x1104; unsigned int x1105; void*x1106; out void*x1107; in double x1108; void*x1109; void*x1110; int x1111; out in void*x1112; void*x1113; void*x1114; void*x1115; void*x1116; void*x1117; void*x1118; void*x1119; void*x1120; void*x1121; void*x1122; void*x1123; void*x1124; void*x1125; void*x1126; void*x1127; void*x1128; void*x1129; void*x1130; void*x1131; void*x1132; void*x1133; void*x1134; void*x1135; void*x1136; void*x1137; unsigned char x1138; void*x1139; unsigned short x1140; void*x1141; short x1142; void*x1143; void*x1144; void*x1145; void*x1146; unsigned long x1147; int x1148; unsigned int x1149/* : ? */; const void*x1150; const void*x1151; void*x1152; void*x1153; const int x1154; void x1155; void*x1156; void*x1157; void*x1158; void*x1159; const void*x1160; void*x1161; void*x1162; void*x1163; out const void*x1164; short x1165; void*x1166; int x1167; void*x1168; out const void*x1169; unsigned int x1170; void*x1171; void*x1172; out const void*x1173; void*x1174; float x1175; const void*x1176; void*x1177; void*x1178; void*x1179; out const void*x1180; void*x1181; int x1182; void*x1183; out const void*x1184; unsigned int x1185; void*x1186; void*x1187; out const void*x1188; void*x1189; void*x1190; void*x1191; void*x1192; void*x1193; void*x1194; void*x1195; void*x1196; void*x1197; void*x1198; void*x1199; void*x1200; void*x1201; void*x1202; int x1203; void*x1204; void*x1205; void*x1206; void*x1207; void*x1208; void*x1209; void*x1210; void*x1211; long long x1212; void*x1213; void*x1214; void*x1215; void*x1216; void*x1217; void*x1218; unsigned short x1219; void*x1220; short x1221; void*x1222; void*x1223; void*x1224; void*x1225; unsigned long x1226; int x1227; unsigned int x1228/* : ? */; const void*x1229; const void*x1230; void*x1231; void*x1232; const int x1233; void x1234; void*x1235; void*x1236; void*x1237; void*x1238; const void*x1239; void*x1240; void*x1241; void*x1242; out const void*x1243; short x1244; void*x1245; void*x1246; void*x1247; out void*x1248; out unsigned long x1249; int x1250; unsigned int x1251/* : ? */; const void*x1252; const void*x1253; void*x1254; float x1255; const void*x1256; void*x1257; void*x1258; void*x1259; out const void*x1260; void*x1261; void*x1262; void*x1263; out void*x1264; out unsigned long x1265; int x1266; unsigned int x1267/* : ? */; const void*x1268; const void*x1269; void*x1270; void*x1271; void*x1272; void*x1273; void*x1274; void*x1275; void*x1276; void*x1277; void*x1278; void*x1279; void*x1280; void*x1281; int x1282; void*x1283; void*x1284; void*x1285; void*x1286; void*x1287; id x1288; void*x1289; void*x1290; void*x1291; void*x1292; void*x1293; void*x1294; void*x1295; unsigned int x1296; void*x1297; unsigned short x1298; void*x1299; short x1300; void*x1301; void*x1302; void*x1303; void*x1304; unsigned long x1305; int x1306; unsigned int x1307/* : ? */; const void*x1308; const void*x1309; void*x1310; void*x1311; const int x1312; void x1313; void*x1314; void*x1315; void*x1316; void*x1317; const void*x1318; void*x1319; void*x1320; void*x1321; out const void*x1322; short x1323; void*x1324; unsigned char x1325; long x1326; out void*x1327; double x1328; void*x1329; int x1330; void*x1331; long doublex1332; void*x1333; void*x1334; void*x1335; out in void*x1336; float x1337; const void*x1338; void*x1339; void*x1340; void*x1341; out const void*x1342; void*x1343; unsigned char x1344; long x1345; out void*x1346; double x1347; void*x1348; int x1349; void*x1350; long doublex1351; void*x1352; void*x1353; void*x1354; out in void*x1355; void*x1356; void*x1357; void*x1358; void*x1359; void*x1360; void*x1361; void*x1362; int x1363; void*x1364; void*x1365; void*x1366; void*x1367; void*x1368; void*x1369; void*x1370; void*x1371; void*x1372; void*x1373; void*x1374; void*x1375; void*x1376; void*x1377; unsigned short x1378; void*x1379; short x1380; void*x1381; void*x1382; void*x1383; void*x1384; unsigned long x1385; int x1386; unsigned int x1387/* : ? */; const void*x1388; const void*x1389; void*x1390; void*x1391; const int x1392; void x1393; void*x1394; void*x1395; void*x1396; void*x1397; const void*x1398; void*x1399; void*x1400; void*x1401; out const void*x1402; short x1403; void*x1404; unsigned short x1405; void*x1406; out const void*x1407; void*x1408; int x1409; void*x1410; void*x1411; unsigned int x1412; void*x1413; float x1414; const void*x1415; void*x1416; void*x1417; void*x1418; out const void*x1419; void*x1420; unsigned short x1421; void*x1422; out const void*x1423; void*x1424; int x1425; void*x1426; void*x1427; unsigned int x1428; void*x1429; void*x1430; void*x1431; void*x1432; void*x1433; void*x1434; void*x1435; void*x1436; void*x1437; void*x1438; void*x1439; void*x1440; void*x1441; void*x1442; void*x1443; void*x1444; int x1445; void*x1446; void*x1447; void*x1448; void*x1449; void*x1450; void*x1451; void*x1452; void*x1453; void*x1454; void*x1455; void*x1456; void*x1457; void*x1458; unsigned char x1459; void*x1460; unsigned short x1461; void*x1462; short x1463; void*x1464; void*x1465; void*x1466; void*x1467; unsigned long x1468; int x1469; unsigned int x1470/* : ? */; const void*x1471; const void*x1472; void*x1473; void*x1474; const int x1475; void x1476; void*x1477; void*x1478; void*x1479; void*x1480; const void*x1481; void*x1482; void*x1483; void*x1484; out const void*x1485; short x1486; void*x1487; void*x1488; void*x1489; void*x1490; long x1491; void*x1492; void*x1493; void*x1494; int x1495; void*x1496; void*x1497; unsigned int x1498; void*x1499; float x1500; const void*x1501; void*x1502; void*x1503; void*x1504; out const void*x1505; void*x1506; void*x1507; void*x1508; void*x1509; long x1510; void*x1511; void*x1512; void*x1513; int x1514; void*x1515; void*x1516; unsigned int x1517; void*x1518; void*x1519; void*x1520; void*x1521; void*x1522; void*x1523; void*x1524; void*x1525; void*x1526; void*x1527; void*x1528; void*x1529; void*x1530; void*x1531; void*x1532; void*x1533; void*x1534; void*x1535; void*x1536; void*x1537; void*x1538; void*x1539; void*x1540; void*x1541; void*x1542; void*x1543; void*x1544; void*x1545; void*x1546; unsigned short x1547; void*x1548; short x1549; void*x1550; void*x1551; void*x1552; void*x1553; unsigned long x1554; int x1555; unsigned int x1556/* : ? */; const void*x1557; const void*x1558; void*x1559; void*x1560; const int x1561; void x1562; void*x1563; void*x1564; void*x1565; void*x1566; const void*x1567; void*x1568; void*x1569; void*x1570; out const void*x1571; short x1572; void*x1573; unsigned short x1574; void*x1575; out const void*x1576; void*x1577; int x1578; void*x1579; void*x1580; unsigned int x1581; void*x1582; float x1583; const void*x1584; void*x1585; void*x1586; void*x1587; out const void*x1588; void*x1589; unsigned short x1590; void*x1591; out const void*x1592; void*x1593; int x1594; void*x1595; void*x1596; unsigned int x1597; void*x1598; void*x1599; void*x1600; void*x1601; void*x1602; void*x1603; void*x1604; void*x1605; void*x1606; void*x1607; void*x1608; void*x1609; void*x1610; void*x1611; void*x1612; void*x1613; int x1614; void*x1615; void*x1616; void*x1617; void*x1618; void*x1619; void*x1620; void*x1621; void*x1622; void*x1623; void*x1624; void*x1625; void*x1626; void*x1627; unsigned char x1628; void*x1629; unsigned short x1630; void*x1631; short x1632; void*x1633; void*x1634; void*x1635; void*x1636; unsigned long x1637; int x1638; unsigned int x1639/* : ? */; const void*x1640; const void*x1641; void*x1642; void*x1643; const int x1644; void x1645; void*x1646; void*x1647; void*x1648; void*x1649; const void*x1650; void*x1651; void*x1652; void*x1653; out const void*x1654; short x1655; void*x1656; void*x1657; const void*x1658; float x1659; void*x1660; const void*x1661; in BOOL x1662; void*x1663; short x1664; void*x1665; float x1666; const void*x1667; void*x1668; void*x1669; void*x1670; out const void*x1671; void*x1672; void*x1673; const void*x1674; float x1675; void*x1676; const void*x1677; in BOOL x1678; void*x1679; short x1680; void*x1681; void*x1682; void*x1683; void*x1684; void*x1685; void*x1686; void*x1687; void*x1688; void*x1689; void*x1690; void*x1691; void*x1692; void*x1693; void*x1694; int x1695; void*x1696; void*x1697; void*x1698; void*x1699; void*x1700; void*x1701; void*x1702; void*x1703; void*x1704; void*x1705; void*x1706; void*x1707; void*x1708; unsigned int x1709; void*x1710; unsigned short x1711; void*x1712; short x1713; void*x1714; void*x1715; void*x1716; void*x1717; unsigned long x1718; int x1719; unsigned int x1720/* : ? */; const void*x1721; const void*x1722; void*x1723; void*x1724; const int x1725; void x1726; void*x1727; void*x1728; void*x1729; void*x1730; const void*x1731; void*x1732; void*x1733; void*x1734; out const void*x1735; short x1736; void*x1737; BOOL x1738; BOOL x1739; out void*x1740; in void*x1741; short x1742; long doublex1743; void*x1744; void*x1745; void*x1746; out in void*x1747; float x1748; const void*x1749; void*x1750; void*x1751; void*x1752; out const void*x1753; void*x1754; BOOL x1755; BOOL x1756; out void*x1757; in void*x1758; short x1759; long doublex1760; void*x1761; void*x1762; void*x1763; out in void*x1764; void*x1765; void*x1766; void*x1767; void*x1768; void*x1769; void*x1770; void*x1771; int x1772; void*x1773; void*x1774; void*x1775; void*x1776; void*x1777; void*x1778; void*x1779; void*x1780; long long x1781; void*x1782; void*x1783; void*x1784; void*x1785; void*x1786; void*x1787; unsigned short x1788; void*x1789; short x1790; void*x1791; void*x1792; void*x1793; void*x1794; unsigned long x1795; int x1796; unsigned int x1797/* : ? */; const void*x1798; const void*x1799; void*x1800; void*x1801; const int x1802; void x1803; void*x1804; void*x1805; void*x1806; void*x1807; const void*x1808; void*x1809; void*x1810; void*x1811; out const void*x1812; short x1813; void*x1814; int x1815; void*x1816; void*x1817; in void*x1818; short x1819; unsigned short x1820; void*x1821; out const void*x1822; void*x1823; unsigned int x1824; void*x1825; float x1826; const void*x1827; void*x1828; void*x1829; void*x1830; out const void*x1831; void*x1832; int x1833; void*x1834; void*x1835; in void*x1836; short x1837; unsigned short x1838; void*x1839; out const void*x1840; void*x1841; unsigned int x1842; void*x1843; void*x1844; void*x1845; void*x1846; void*x1847; void*x1848; void*x1849; void*x1850; void*x1851; void*x1852; void*x1853; void*x1854; void*x1855; void*x1856; void*x1857; void*x1858; void*x1859; void*x1860; void*x1861; void*x1862; void*x1863; void*x1864; void*x1865; void*x1866; unsigned char x1867; void*x1868; unsigned short x1869; void*x1870; short x1871; void*x1872; void*x1873; void*x1874; void*x1875; unsigned long x1876; int x1877; unsigned int x1878/* : ? */; const void*x1879; const void*x1880; void*x1881; void*x1882; const int x1883; void x1884; void*x1885; void*x1886; void*x1887; void*x1888; const void*x1889; void*x1890; void*x1891; void*x1892; out const void*x1893; short x1894; void*x1895; int x1896; void*x1897; out const void*x1898; unsigned int x1899; void*x1900; void*x1901; out const void*x1902; void*x1903; float x1904; const void*x1905; void*x1906; void*x1907; void*x1908; out const void*x1909; void*x1910; int x1911; void*x1912; out const void*x1913; unsigned int x1914; void*x1915; void*x1916; out const void*x1917; void*x1918; void*x1919; void*x1920; void*x1921; void*x1922; void*x1923; void*x1924; void*x1925; void*x1926; void*x1927; void*x1928; void*x1929; void*x1930; void*x1931; int x1932; void*x1933; void*x1934; void*x1935; void*x1936; void*x1937; void*x1938; void*x1939; void*x1940; void*x1941; void*x1942; void*x1943; void*x1944; void*x1945; void*x1946; void*x1947; unsigned short x1948; void*x1949; short x1950; void*x1951; void*x1952; void*x1953; void*x1954; unsigned long x1955; int x1956; unsigned int x1957/* : ? */; const void*x1958; const void*x1959; void*x1960; void*x1961; const int x1962; void x1963; void*x1964; void*x1965; void*x1966; void*x1967; const void*x1968; void*x1969; void*x1970; void*x1971; out const void*x1972; short x1973; void*x1974; void*x1975; void*x1976; out void*x1977; out unsigned long x1978; int x1979; unsigned int x1980/* : ? */; const void*x1981; const void*x1982; void*x1983; float x1984; const void*x1985; void*x1986; void*x1987; void*x1988; out const void*x1989; void*x1990; void*x1991; void*x1992; out void*x1993; out unsigned long x1994; int x1995; unsigned int x1996/* : ? */; const void*x1997; const void*x1998; void*x1999; void*x2000; void*x2001; void*x2002; void*x2003; void*x2004; void*x2005; void*x2006; void*x2007; void*x2008; void*x2009; void*x2010; int x2011; void*x2012; void*x2013; void*x2014; void*x2015; void*x2016; void*x2017; void*x2018; void*x2019; void*x2020; void*x2021; void*x2022; void*x2023; void*x2024; void*x2025; void*x2026; double x2027; void*x2028; out void*x2029; void*x2030; void*x2031; unsigned int x2032/* : ? */; void*x2033; long x2034; void*x2035; void*x2036; void*x2037; void*x2038; void*x2039; void*x2040; void*x2041; void*x2042; void*x2043; void*x2044; void*x2045; void*x2046; void*x2047; void*x2048; void*x2049; void*x2050; void*x2051; void*x2052; void*x2053; void*x2054; void*x2055; void*x2056; void*x2057; double x2058; void*x2059; out void*x2060; void*x2061; void*x2062; unsigned int x2063/* : ? */; void*x2064; long x2065; void*x2066; void*x2067; void*x2068; void*x2069; void*x2070; void*x2071; void*x2072; void*x2073; void*x2074; void*x2075; void*x2076; void*x2077; void*x2078; void*x2079; void*x2080; void*x2081; void*x2082; void*x2083; void*x2084; void*x2085; void*x2086; void*x2087; void*x2088; }* renderer; /* unknown property attribute:  std::__1::default_delete<ggl::CommandBuffer> >=^{CommandBuffer}}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_createRenderTarget;
- (void)_deleteBuffers;
- (struct CGSize { double x1; double x2; })backingSize;
- (void)dealloc;
- (void)didEnterBackground;
- (void)drawWithTimestamp:(double)arg1;
- (id)initWithRenderer:(struct shared_ptr<ggl::GLRenderer> { struct GLRenderer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)layoutSublayers;
- (id)renderDisruptor;
- (id)renderSource;
- (struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; bool x5; float x6; bool x7; id x8; struct RenderState {} *x9; struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext> > { struct __compressed_pair<ggl::OESContext *, std::__1::default_delete<ggl::OESContext> > { struct OESContext {} *x_1_2_1; } x_10_1_1; } x10; struct RenderTarget {} *x11; struct TransactionBuffer { struct deque<std::__1::shared_ptr<ggl::RenderTransaction>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { struct __split_buffer<std::__1::shared_ptr<ggl::RenderTransaction> *, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_1; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_2; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_3; struct __compressed_pair<std::__1::shared_ptr<ggl::RenderTransaction> **, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned long long x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { unsigned long long x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct unique_ptr<ggl::PerformanceHUD, std::__1::default_delete<ggl::PerformanceHUD> > { struct __compressed_pair<ggl::PerformanceHUD *, std::__1::default_delete<ggl::PerformanceHUD> > { struct PerformanceHUD {} *x_1_2_1; } x_13_1_1; } x13; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_14_1_3; } x14; struct deque<std::__1::pair<unsigned long, void *>, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { struct __split_buffer<std::__1::pair<unsigned long, void *> *, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_1_2_1; struct pair<unsigned long, void *> {} **x_1_2_2; struct pair<unsigned long, void *> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<unsigned long, void *> **, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_4_3_1; } x_1_2_4; } x_15_1_1; unsigned long long x_15_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { unsigned long long x_3_2_1; } x_15_1_3; } x15; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_16_1_1; } x16; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_17_1_1; struct BufferLoadItem {} *x_17_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_17_1_3; } x17; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_18_1_1; struct Texture2DLoadItem {} *x_18_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_18_1_3; } x18; unsigned int x19; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_20_1_1; } x20; }*)renderer;
- (void)setContentsScale:(double)arg1;
- (void)setReadPixels;
- (void)setRenderDisruptor:(id)arg1;
- (void)setRenderSource:(id)arg1;

@end
