/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface LegacyTileLayer : CALayer {
    unsigned int _paintCount;
    struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; } *_tileGrid;
}

@property (nonatomic) unsigned int paintCount;
@property (nonatomic) struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; /* Warning: unhandled struct encoding: '{HashMap<WebCore::IntPoint' */ struct x6; void*x7; short x8; void*x9; void*x10; void*x11; const void*x12; void*x13; void*x14; BOOL x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; int x29; void*x30; in void*x31; void*x32; void*x33; void*x34; void*x35; const void*x36; void*x37; void*x38; void*x39; void*x40; unsigned int x41; void*x42; unsigned int x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; struct x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void x79; void*x80; out void*x81; int x82; void*x83; double x84; void*x85; void*x86; void*x87; char *x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; const void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; }*tileGrid; /* unknown property attribute:  WTF::RefPtr<WebCore::LegacyTileGridTile> >}iiii}}{IntRect={IntPoint=ii}{IntSize=ii}}} */

+ (id)layerBeingPainted;

- (id)actionForKey:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)layoutSublayers;
- (unsigned int)paintCount;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPaintCount:(unsigned int)arg1;
- (void)setTileGrid:(struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; }*)arg1;
- (struct LegacyTileGrid { struct LegacyTileCache {} *x1; struct RetainPtr<CALayer> { void *x_2_1_1; } x2; struct IntPoint { int x_3_1_1; int x_3_1_2; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; float x5; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > >, WTF::IntPointHash, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile>, WTF::IntPointHash, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_7_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_7_1_2; } x7; }*)tileGrid;

@end
