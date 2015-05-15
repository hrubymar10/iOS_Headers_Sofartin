/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAShapeLayer : CALayer

@property(assign,readwrite) struct CGColor { }* fillColor;
@property(assign,copy) NSString * fillRule;
@property(assign,copy) NSString * lineCap;
@property(assign,copy) NSArray * lineDashPattern;
@property(assign,readwrite) double lineDashPhase;
@property(assign,copy) NSString * lineJoin;
@property(assign,readwrite) double lineWidth;
@property(assign,readwrite) double miterLimit;
@property(assign,readwrite) struct CGPath { }* path;
@property(assign,readwrite) struct CGColor { }* strokeColor;
@property(assign,readwrite) double strokeEnd;
@property(assign,readwrite) double strokeStart;

+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 25; struct Vec2<double> { double x_33_2_1; double x_33_2_2; } x_3_1_33; struct Rect { double x_34_2_1; double x_34_2_2; double x_34_2_3; double x_34_2_4; } x_3_1_34; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::Object> { struct Object {} *x_5_1_1; } x5; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_6_1_1; } x6; struct Layer {} *x7; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_8_1_1; } x8; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_9_1_1; } x9; struct Ref<CA::Render::Handle> { struct Handle {} *x_10_1_1; } x10; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (struct CGColor { }*)fillColor;
- (id)fillRule;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)lineCap;
- (id)lineDashPattern;
- (double)lineDashPhase;
- (id)lineJoin;
- (double)lineWidth;
- (double)miterLimit;
- (struct CGPath { }*)path;
- (void)setCGLineCap:(int)arg1;
- (void)setCGLineJoin:(int)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFillRule:(id)arg1;
- (void)setLineCap:(id)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setLineDashPhase:(double)arg1;
- (void)setLineJoin:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setStrokeEnd:(double)arg1;
- (void)setStrokeStart:(double)arg1;
- (struct CGColor { }*)strokeColor;
- (double)strokeEnd;
- (double)strokeStart;

@end
