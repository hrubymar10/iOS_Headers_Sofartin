/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CALayer : NSObject <CAMediaTiming, CAPropertyInfo, NSCoding> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
    } _attr;
}

@property(assign,retain) CALayer * _mapKit_mapLayer;
@property(assign,readwrite) bool acceleratesDrawing;
@property(assign,readwrite) bool acceptsLights;
@property(assign,copy) NSDictionary * actions;
@property(assign,readwrite) bool allowsDisplayCompositing;
@property(assign,readwrite) bool allowsEdgeAntialiasing;
@property(assign,readwrite) bool allowsGroupBlending;
@property(assign,readwrite) bool allowsGroupOpacity;
@property(assign,readwrite) bool allowsHitTesting;
@property(assign,readwrite) double ambientReflectance;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } anchorPoint;
@property(assign,readwrite) double anchorPointZ;
@property(assign,readwrite) bool autoreverses;
@property(assign,readwrite) struct CGColor { }* backgroundColor;
@property(assign,readwrite) struct CGSize { double x1; double x2; } backgroundColorPhase;
@property(assign,copy) NSArray * backgroundFilters;
@property(assign,readwrite) double beginTime;
@property(assign,copy) NSArray * behaviors;
@property(assign,readwrite) struct CGColor { }* borderColor;
@property(assign,readwrite) double borderWidth;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property(assign,readwrite) bool canDrawConcurrently;
@property(assign,readwrite) bool clearsContext;
@property(assign,readwrite) double coefficientOfRestitution;
@property(assign,retain) id compositingFilter;
@property(assign,retain) id contents;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsCenter;
@property(assign,copy) NSString * contentsGravity;
@property(assign,readwrite) bool contentsOpaque;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property(assign,readwrite) double contentsScale;
@property(assign,copy) NSString * contentsScaling;
@property(assign,readwrite) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentsTransform;
@property(assign,retain) id cornerContents;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cornerContentsCenter;
@property(assign,readwrite) double cornerRadius;
@property(assign,retain) CALayer * currentLayer;
@property(assign,readwrite) id delegate;
@property(assign,readwrite) double diffuseReflectance;
@property(getter=isDoubleSided,assign,readwrite) bool doubleSided;
@property(assign,readwrite) bool drawsAsynchronously;
@property(assign,readwrite) double duration;
@property(assign,readwrite) unsigned int edgeAntialiasingMask;
@property(assign,copy) NSString * fillMode;
@property(assign,copy) NSArray * filters;
@property(assign,readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(getter=isFrozen,assign,readwrite) bool frozen;
@property(getter=isGeometryFlipped,assign,readwrite) bool geometryFlipped;
@property(getter=isHidden,assign,readwrite) bool hidden;
@property(assign,readwrite) bool hitTestsAsOpaque;
@property(assign,readwrite) bool invertsShadow;
@property(assign,copy) NSArray * lights;
@property(assign,readwrite) bool literalContentsCenter;
@property(assign,copy) NSString * magnificationFilter;
@property(assign,retain) CALayer * mask;
@property(assign,readwrite) unsigned int maskedCorners;
@property(assign,readwrite) bool masksToBounds;
@property(assign,readwrite) double mass;
@property(assign,copy) CAMeshTransform * meshTransform;
@property(assign,readwrite) double metallicity;
@property(assign,copy) NSString * minificationFilter;
@property(assign,readwrite) float minificationFilterBias;
@property(assign,readwrite) double momentOfInertia;
@property(assign,copy) NSString * name;
@property(assign,readwrite) bool needsDisplayOnBoundsChange;
@property(assign,readwrite) bool needsLayoutOnGeometryChange;
@property(assign,readwrite) float opacity;
@property(getter=isOpaque,assign,readwrite) bool opaque;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } position;
@property(assign,readwrite) bool preloadsCache;
@property(assign,readwrite) bool rasterizationPrefersDisplayCompositing;
@property(assign,readwrite) double rasterizationScale;
@property(assign,readwrite) float repeatCount;
@property(assign,readwrite) double repeatDuration;
@property(assign,readwrite) struct CGColor { }* shadowColor;
@property(assign,readwrite) struct CGSize { double x1; double x2; } shadowOffset;
@property(assign,readwrite) float shadowOpacity;
@property(assign,readwrite) struct CGPath { }* shadowPath;
@property(assign,readwrite) bool shadowPathIsBounds;
@property(assign,readwrite) double shadowRadius;
@property(assign,readwrite) double shininess;
@property(assign,readwrite) bool shouldRasterize;
@property(assign,readwrite) struct CGSize { double x1; double x2; } sizeRequisition;
@property(assign,readwrite) bool sortsSublayers;
@property(assign,readwrite) double specularReflectance;
@property(assign,readwrite) float speed;
@property(assign,copy) NSArray * stateTransitions;
@property(assign,copy) NSArray * states;
@property(assign,copy) NSDictionary * style;
@property(assign,readwrite) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } sublayerTransform;
@property(assign,copy) NSArray * sublayers;
@property(assign,readonly) CALayer * superlayer;
@property(assign,readwrite) bool swapsMaskAndLayer;
@property(assign,readwrite) double timeOffset;
@property(assign,readwrite) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform;
@property(assign,readwrite) double velocityStretch;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property(assign,readwrite) double zPosition;

+ (void)CAMLParserEndElement:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (int (*)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)layer;
+ (bool)needsDisplayForKey:(id)arg1;
+ (bool)needsLayoutForKey:(id)arg1;
+ (id)properties;
+ (bool)resolveInstanceMethod:(SEL)arg1;

- (id).cxx_construct;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (bool)_canDisplayConcurrently;
- (void)_cancelAnimationTimer;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 25; struct Vec2<double> { double x_33_2_1; double x_33_2_2; } x_3_1_33; struct Rect { double x_34_2_1; double x_34_2_2; double x_34_2_3; double x_34_2_4; } x_3_1_34; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::Object> { struct Object {} *x_5_1_1; } x5; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_6_1_1; } x6; struct Layer {} *x7; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_8_1_1; } x8; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_9_1_1; } x9; struct Ref<CA::Render::Handle> { struct Handle {} *x_10_1_1; } x10; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)_dealloc;
- (bool)_deferrsDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (void)_display;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_gkParentSublayerTransform;
- (id)_gkRecursiveDescription;
- (id)_initWithReference:(id)arg1;
- (id)_mapKit_mapLayer;
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id)arg3;
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;
- (double)_pkui_elapsedDurationForAnimation:(id)arg1;
- (id)_pkui_nextAdditiveAnimationKeyWithKeyPath:(id)arg1;
- (struct CGSize { double x1; double x2; })_preferredSize;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (unsigned int)_renderImageCopyFlags;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (bool)_scheduleAnimationTimer;
- (void)_scrollPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (bool)acceleratesDrawing;
- (bool)acceptsLights;
- (id)actionForKey:(id)arg1;
- (id)actions;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addCDEChartFlipAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1 toLeft:(bool)arg2 cameraDistance:(double)arg3;
- (void)addCDEChartFlipAnimationToFinalPosition:(struct CGPoint { double x1; double x2; })arg1 fromLeft:(bool)arg2 cameraDistance:(double)arg3;
- (void)addCDEEditorFlipInAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1 fromLeft:(bool)arg2 cameraDistance:(double)arg3;
- (void)addCDEEditorFlipOutAnimationToPosition:(struct CGPoint { double x1; double x2; })arg1 toLeft:(bool)arg2 cameraDistance:(double)arg3;
- (void)addCDEShieldInAnimation;
- (void)addCDEShieldOutAnimation;
- (void)addCallbackAnimationWithName:(id)arg1 duration:(double)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)addDistortAnimationWithVector:(struct CGPoint { double x1; double x2; })arg1;
- (void)addDragRotationAnimationWithDelta:(struct CGPoint { double x1; double x2; })arg1;
- (void)addFlipTransitionAnimationToLayer:(id)arg1;
- (void)addJiggleAnimation;
- (void)addJiggleAnimationWithDuration:(double)arg1 angle:(double)arg2;
- (void)addPerspectiveProjection;
- (void)addPerspectiveProjectionWithDistance:(double)arg1;
- (void)addPerspectiveSublayerProjectionUsingScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (void)addPopInAnimation:(id)arg1;
- (void)addPopOutAnimation:(id)arg1;
- (void)addPulseAnimation;
- (void)addReflectionSubLayerWithHeight:(double)arg1 startOpacity:(double)arg2;
- (void)addResetAnimation;
- (void)addResetAnimationWithDelegate:(id)arg1;
- (void)addRippleAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)addRippleAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1 withScale:(double)arg2;
- (void)addRippleAnimationFromPosition:(struct CGPoint { double x1; double x2; })arg1 withScale:(double)arg2 addPerspectiveProjection:(bool)arg3;
- (void)addRotateInAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)addSproingAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addState:(id)arg1;
- (void)addSublayer:(id)arg1;
- (void)addWaveAnimation;
- (void)addWaveAnimationWithOffset:(struct CGSize { double x1; double x2; })arg1 zPosition:(double)arg2;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize { double x1; double x2; })arg2 zPosition:(double)arg3;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize { double x1; double x2; })arg2 zPosition:(double)arg3 addPerspectiveProjection:(bool)arg4;
- (void)addZoomAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addZoomAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 speed:(double)arg2;
- (void)addZoomAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 startingScale:(double)arg2;
- (void)addZoomDownAnimation;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint { double x1; double x2; })arg1 endingScale:(double)arg2 delay:(double)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (bool)allowsDisplayCompositing;
- (bool)allowsEdgeAntialiasing;
- (bool)allowsGroupBlending;
- (bool)allowsGroupOpacity;
- (bool)allowsHitTesting;
- (bool)allowsWeakReference;
- (double)ambientReflectance;
- (id)ancestorSharedWithLayer:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (double)anchorPointZ;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (bool)autoreverses;
- (struct CGColor { }*)backgroundColor;
- (struct CGSize { double x1; double x2; })backgroundColorPhase;
- (id)backgroundFilters;
- (id)bakedLayer;
- (double)beginTime;
- (id)behaviors;
- (struct CGColor { }*)borderColor;
- (double)borderWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canDrawConcurrently;
- (void)clearHasBeenCommitted;
- (bool)clearsContext;
- (double)coefficientOfRestitution;
- (long long)compareTextEffectsOrdering:(id)arg1;
- (id)compositingFilter;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contents;
- (bool)contentsAreFlipped;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsCenter;
- (id)contentsGravity;
- (bool)contentsOpaque;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (double)contentsScale;
- (id)contentsScaling;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransform;
- (id)context;
- (struct CGPoint { double x1; double x2; })convertDoublePoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertDoublePoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (id)cornerContents;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cornerContentsCenter;
- (double)cornerRadius;
- (id)currentLayer;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)dependentStatesOfState:(id)arg1;
- (double)diffuseReflectance;
- (void)display;
- (void)displayIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (struct CGPoint { double x1; double x2; })doublePosition;
- (bool)doubleSided;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)drawsAsynchronously;
- (bool)drawsMipmapLevels;
- (double)duration;
- (double)durationOfAllAnimations;
- (unsigned int)edgeAntialiasingMask;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fillMode;
- (id)filters;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameIncludingSublayers;
- (bool)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(bool)arg3;
- (bool)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(bool)arg4;
- (bool)getRendererInfo:(struct _CARenderRendererInfo { int x1; unsigned int x2; unsigned int x3; }*)arg1 size:(unsigned long long)arg2;
- (bool)hasBeenCommitted;
- (bool)hasPopInAnimation;
- (bool)hidden;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hitTestsAsOpaque;
- (bool)ignoresHitTesting;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)invalidateContents;
- (bool)invertsShadow;
- (bool)isDescendantOf:(id)arg1;
- (bool)isDoubleSided;
- (bool)isFlipped;
- (bool)isFrozen;
- (bool)isGeometryFlipped;
- (bool)isHidden;
- (bool)isOpaque;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (id)layerByAddingReflectionWithHeight:(double)arg1 startOpacity:(double)arg2;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutBelowIfNeeded;
- (void)layoutIfNeeded;
- (bool)layoutIsActive;
- (void)layoutSublayers;
- (id)lights;
- (bool)literalContentsCenter;
- (id)magnificationFilter;
- (void)makeStretchableLayerWithImage:(struct CGImage { }*)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;
- (void)makeStretchableLayerWithImage:(struct CGImage { }*)arg1 leftCap:(double)arg2 topCap:(double)arg3;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(double)arg2 topCap:(double)arg3;
- (void)makeStretchableLayerWithoutImage:(struct CGImage { }*)arg1 leftCap:(double)arg2 rightCap:(double)arg3 topCap:(double)arg4 bottomCap:(double)arg5;
- (void)makeStretchableLayerWithoutImage:(struct CGImage { }*)arg1 leftCap:(double)arg2 topCap:(double)arg3;
- (id)mask;
- (unsigned int)maskedCorners;
- (bool)masksToBounds;
- (double)mass;
- (id)meshTransform;
- (double)metallicity;
- (id)minificationFilter;
- (float)minificationFilterBias;
- (id)modelLayer;
- (double)momentOfInertia;
- (id)name;
- (bool)needsDisplay;
- (bool)needsDisplayOnBoundsChange;
- (bool)needsLayout;
- (bool)needsLayoutOnGeometryChange;
- (struct CGImage { }*)newRasterizedImageRef;
- (float)opacity;
- (double)opacityByApplyingAnimation:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (bool)opaque;
- (double)p_perspectiveZDistanceUsingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)pause;
- (void)pauseAtTime:(double)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1;
- (id)pkui_addAdditiveAnimation:(id)arg1 withKeyPath:(id)arg2;
- (id)pkui_additiveAnimationKeyPrefixForKeyPath:(id)arg1;
- (double)pkui_elapsedDurationForAnimationWithKey:(id)arg1;
- (double)pkui_remainingDurationForAnimationWithKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (bool)preloadsCache;
- (id)presentationLayer;
- (bool)rasterizationPrefersDisplayCompositing;
- (double)rasterizationScale;
- (void*)regionBeingDrawn;
- (oneway void)release;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)removeAllAnimations;
- (void)removeAllAnimationsOnLayerTree;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeCDEChartFlipAnimationFromPosition;
- (void)removeCDEChartFlipAnimationToFinalPosition;
- (void)removeCDEEditorFlipInAnimation;
- (void)removeCDEEditorFlipOutAnimation;
- (void)removeCDEShieldInAnimation;
- (void)removeCDEShieldOutAnimation;
- (void)removeCallbackAnimationWithName:(id)arg1;
- (void)removeDistortAnimation;
- (void)removeDragRotationAnimation;
- (void)removeFlipTransitionAnimation;
- (void)removeFromSuperlayer;
- (void)removeJiggleAnimation;
- (void)removePopInAnimation;
- (void)removePopOutAnimation;
- (void)removePulseAnimation;
- (void)removeResetAnimation;
- (void)removeRippleAnimation;
- (void)removeRotateInAnimation;
- (void)removeSproingAnimation;
- (void)removeState:(id)arg1;
- (void)removeWaveAnimation;
- (void)removeWaveAnimationAnimated:(bool)arg1;
- (void)removeZoomAnimation;
- (void)removeZoomAnimation;
- (void)removeZoomDownAnimation;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (float)repeatCount;
- (double)repeatDuration;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)resume;
- (void)resumeAtTime:(double)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (void)scrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAcceleratesDrawing:(bool)arg1;
- (void)setAcceptsLights:(bool)arg1;
- (void)setActions:(id)arg1;
- (void)setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setAllowsDisplayCompositing:(bool)arg1;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setAllowsGroupBlending:(bool)arg1;
- (void)setAllowsGroupOpacity:(bool)arg1;
- (void)setAllowsHitTesting:(bool)arg1;
- (void)setAmbientReflectance:(double)arg1;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnchorPointZ:(double)arg1;
- (void)setAutoreverses:(bool)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBackgroundColorPhase:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackgroundFilters:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setBehaviors:(id)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCanDrawConcurrently:(bool)arg1;
- (void)setClearsContext:(bool)arg1;
- (void)setCoefficientOfRestitution:(double)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsChanged;
- (void)setContentsGravity:(id)arg1;
- (void)setContentsOpaque:(bool)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setContentsScaling:(id)arg1;
- (void)setContentsTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setCornerContents:(id)arg1;
- (void)setCornerContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiffuseReflectance:(double)arg1;
- (void)setDoubleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDoublePosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDoubleSided:(bool)arg1;
- (void)setDrawsAsynchronously:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void)setFillMode:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrozen:(bool)arg1;
- (void)setGeometryFlipped:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHitTestsAsOpaque:(bool)arg1;
- (void)setIfDifferentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 orTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)setInvertsShadow:(bool)arg1;
- (void)setLights:(id)arg1;
- (void)setLiteralContentsCenter:(bool)arg1;
- (void)setMagnificationFilter:(id)arg1;
- (void)setMask:(id)arg1;
- (void)setMaskedCorners:(unsigned int)arg1;
- (void)setMasksToBounds:(bool)arg1;
- (void)setMass:(double)arg1;
- (void)setMeshTransform:(id)arg1;
- (void)setMetallicity:(double)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setMomentOfInertia:(double)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayOnBoundsChange:(bool)arg1;
- (void)setNeedsLayout;
- (void)setNeedsLayoutOnGeometryChange:(bool)arg1;
- (void)setOpacity:(float)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPerspectiveDistance:(double)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreloadsCache:(bool)arg1;
- (void)setRasterizationPrefersDisplayCompositing:(bool)arg1;
- (void)setRasterizationScale:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setShadowPathIsBounds:(bool)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShininess:(double)arg1;
- (void)setShouldRasterize:(bool)arg1;
- (void)setSizeRequisition:(struct CGSize { double x1; double x2; })arg1;
- (void)setSortsSublayers:(bool)arg1;
- (void)setSpecularReflectance:(double)arg1;
- (void)setSpeed:(float)arg1;
- (void)setStyle:(id)arg1;
- (void)setSublayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setSublayers:(id)arg1;
- (void)setSwapsMaskAndLayer:(bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVelocityStretch:(double)arg1;
- (void)setZPosition:(double)arg1;
- (struct CGColor { }*)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (float)shadowOpacity;
- (struct CGPath { }*)shadowPath;
- (bool)shadowPathIsBounds;
- (double)shadowRadius;
- (double)shininess;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeRequisition;
- (bool)sortsSublayers;
- (double)specularReflectance;
- (float)speed;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)stateWithName:(id)arg1;
- (id)style;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })sublayerTransform;
- (id)sublayers;
- (id)superlayer;
- (bool)swapsMaskAndLayer;
- (double)timeOffset;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform3DByApplyingAnimation:(id)arg1 atTime:(double)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 animationCache:(id)arg4;
- (void)tsu_transformToQuadrilateralWithTopLeft:(struct CGPoint { double x1; double x2; })arg1 topRight:(struct CGPoint { double x1; double x2; })arg2 bottomLeft:(struct CGPoint { double x1; double x2; })arg3 bottomRight:(struct CGPoint { double x1; double x2; })arg4;
- (bool)uiHasFilterWithName:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (double)velocityStretch;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (void)web_disableAllActions;
- (double)zPosition;
- (id)zoomDownAnimation;

@end