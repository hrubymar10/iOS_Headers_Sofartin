/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMorpher : NSObject <NSSecureCoding, SCNAnimatable> {
    SCNOrderedDictionary *_animations;
    long long _calculationMode;
    unsigned int _isPresentationInstance;
    struct __C3DMorph { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; int x2; struct __CFArray {} *x3; struct __C3DGenericSource {} *x4; unsigned int x5; bool x6; } *_morpher;
    NSString *_name;
    id _reserved;
    bool _shouldMorphNormals;
    NSArray *_targets;
    NSMutableArray *_weights;
}

@property (nonatomic) long long calculationMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *targets;

+ (id)SCNJSExportProtocol;
+ (id)morpher;
+ (id)morpherWithMorphRef:(struct __C3DMorph { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; int x2; struct __CFArray {} *x3; struct __C3DGenericSource {} *x4; unsigned int x5; bool x6; }*)arg1;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_customDecodingOfSCNMorpher:(id)arg1;
- (void)_customEncodingOfSCNMorpher:(id)arg1;
- (void)_didDecodeSCNMorpher:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DModelValueStorage {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; bool x7; bool x8; bool x9; struct _C3DAnimationPendingEvent {} *x10; struct __C3DAllocator {} *x11; struct __CFDictionary {} *x12; struct __CFArray {} *x13; double x14; double x15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; int x17; int x18; int x19; int x20; }*)animationManager;
- (long long)calculationMode;
- (id)copy;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initPresentationMorpherWithMorphRef:(struct __C3DMorph { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; int x2; struct __CFArray {} *x3; struct __C3DGenericSource {} *x4; unsigned int x5; bool x6; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMorphRef:(struct __C3DMorph { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; int x2; struct __CFArray {} *x3; struct __C3DGenericSource {} *x4; unsigned int x5; bool x6; }*)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (struct __C3DMorph { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; int x2; struct __CFArray {} *x3; struct __C3DGenericSource {} *x4; unsigned int x5; bool x6; }*)morphRef;
- (id)name;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (id)presentationMorpher;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setCalculationMode:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldMorphNormals:(bool)arg1;
- (void)setTargets:(id)arg1;
- (void)setWeight:(double)arg1 forTargetAtIndex:(unsigned long long)arg2;
- (void)setWeights:(id)arg1;
- (bool)shouldMorphNormals;
- (id)targets;
- (double)weightForTargetAtIndex:(unsigned long long)arg1;

@end
