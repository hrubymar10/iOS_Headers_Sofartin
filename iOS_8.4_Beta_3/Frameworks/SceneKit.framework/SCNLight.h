/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLight : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNTechniqueSupport> {
    SCNOrderedDictionary *_animations;
    float _attenuations;
    unsigned int _castsShadow;
    unsigned long long _categoryBitMask;
    id _color;
    SCNMaterialProperty *_gobo;
    unsigned int _goboProjectShadows;
    unsigned int _isPresentationInstance;
    struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_5_1_1; } x5; union C3DVector2 { float x_6_1_1[2]; struct { float x_2_2_1; float x_2_2_2; } x_6_1_2; struct { float x_3_2_1; float x_3_2_2; } x_6_1_3; struct { float x_4_2_1; float x_4_2_2; } x_6_1_4; } x6; float x7; float x8; unsigned int x9; unsigned long long x10; bool x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; double x15; double x16; double x17; struct __C3DEffectSlot {} *x18; struct __C3DFXTechnique {} *x19; } *_light;
    NSString *_name;
    double _orthographicScale;
    id _reserved;
    double _shadowBias;
    id _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    } _shadowMapSize;
    float _shadowRadius;
    unsigned long long _shadowSampleCount;
    SCNTechnique *_technique;
    NSString *_type;
    unsigned int _usesDeferredShadows;
    unsigned int _usesModulatedMode;
    double _zFar;
    double _zNear;
}

@property(assign,readwrite) double attenuationEndDistance;
@property(assign,readwrite) double attenuationFalloffExponent;
@property(assign,readwrite) double attenuationStartDistance;
@property(assign,readwrite) bool castsShadow;
@property(assign,readwrite) unsigned long long categoryBitMask;
@property(assign,retain) id color;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) SCNMaterialProperty * gobo;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * name;
@property(assign,readwrite) double orthographicScale;
@property(assign,readwrite) double shadowBias;
@property(assign,retain) id shadowColor;
@property(assign,readwrite) struct CGSize { double x1; double x2; } shadowMapSize;
@property(assign,readwrite) long long shadowMode;
@property(assign,readwrite) double shadowRadius;
@property(assign,readwrite) unsigned long long shadowSampleCount;
@property(assign,readwrite) double spotInnerAngle;
@property(assign,readwrite) double spotOuterAngle;
@property(assign,readonly) Class superclass;
@property(assign,copy) SCNTechnique * technique;
@property(assign,copy) NSString * type;
@property(assign,readwrite) double zFar;
@property(assign,readwrite) double zNear;

+ (id)SCNJSExportProtocol;
+ (id)light;
+ (id)lightWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_5_1_1; } x5; union C3DVector2 { float x_6_1_1[2]; struct { float x_2_2_1; float x_2_2_2; } x_6_1_2; struct { float x_3_2_1; float x_3_2_2; } x_6_1_3; struct { float x_4_2_1; float x_4_2_2; } x_6_1_4; } x6; float x7; float x8; unsigned int x9; unsigned long long x10; bool x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; double x15; double x16; double x17; struct __C3DEffectSlot {} *x18; struct __C3DFXTechnique {} *x19; }*)arg1;
+ (bool)supportsSecureCoding;

- (void*)__CFObject;
- (void)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_customDecodingOfSCNLight:(id)arg1;
- (void)_customEncodingOfSCNLight:(id)arg1;
- (void)_didDecodeSCNLight:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DModelValueStorage {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; bool x7; bool x8; bool x9; struct _C3DAnimationPendingEvent {} *x10; struct __C3DAllocator {} *x11; struct __CFDictionary {} *x12; struct __CFArray {} *x13; double x14; double x15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; int x17; int x18; int x19; int x20; }*)animationManager;
- (double)attenuationEndDistance;
- (double)attenuationFalloffExponent;
- (double)attenuationStartDistance;
- (id)attributeForKey:(id)arg1;
- (bool)castsShadow;
- (unsigned long long)categoryBitMask;
- (id)color;
- (id)copy;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gobo;
- (id)identifier;
- (id)init;
- (id)initPresentationLightWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_5_1_1; } x5; union C3DVector2 { float x_6_1_1[2]; struct { float x_2_2_1; float x_2_2_2; } x_6_1_2; struct { float x_3_2_1; float x_3_2_2; } x_6_1_3; struct { float x_4_2_1; float x_4_2_2; } x_6_1_4; } x6; float x7; float x8; unsigned int x9; unsigned long long x10; bool x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; double x15; double x16; double x17; struct __C3DEffectSlot {} *x18; struct __C3DFXTechnique {} *x19; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_5_1_1; } x5; union C3DVector2 { float x_6_1_1[2]; struct { float x_2_2_1; float x_2_2_2; } x_6_1_2; struct { float x_3_2_1; float x_3_2_2; } x_6_1_3; struct { float x_4_2_1; float x_4_2_2; } x_6_1_4; } x6; float x7; float x8; unsigned int x9; unsigned long long x10; bool x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; double x15; double x16; double x17; struct __C3DEffectSlot {} *x18; struct __C3DFXTechnique {} *x19; }*)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned char x_1_2_2[4]; unsigned int x_1_2_3; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; long long x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4[6]; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_5_1_1; } x5; union C3DVector2 { float x_6_1_1[2]; struct { float x_2_2_1; float x_2_2_2; } x_6_1_2; struct { float x_3_2_1; float x_3_2_2; } x_6_1_3; struct { float x_4_2_1; float x_4_2_2; } x_6_1_4; } x6; float x7; float x8; unsigned int x9; unsigned long long x10; bool x11; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; double x15; double x16; double x17; struct __C3DEffectSlot {} *x18; struct __C3DFXTechnique {} *x19; }*)lightRef;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)orthographicScale;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (id)presentationLight;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setAttenuationEndDistance:(double)arg1;
- (void)setAttenuationFalloffExponent:(double)arg1;
- (void)setAttenuationStartDistance:(double)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setCastsShadow:(bool)arg1;
- (void)setCategoryBitMask:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOrthographicScale:(double)arg1;
- (void)setShadowBias:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowMapSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowMode:(long long)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShadowSampleCount:(unsigned long long)arg1;
- (void)setSpotFalloffExponent:(double)arg1;
- (void)setSpotInnerAngle:(double)arg1;
- (void)setSpotOuterAngle:(double)arg1;
- (void)setTechnique:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUsesDeferredShadows:(bool)arg1;
- (void)setUsesModulatedMode:(bool)arg1;
- (void)setZFar:(double)arg1;
- (void)setZNear:(double)arg1;
- (double)shadowBias;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowMapSize;
- (long long)shadowMode;
- (double)shadowRadius;
- (unsigned long long)shadowSampleCount;
- (double)spotFalloffExponent;
- (double)spotInnerAngle;
- (double)spotOuterAngle;
- (id)technique;
- (id)type;
- (bool)usesDeferredShadows;
- (bool)usesModulatedMode;
- (double)zFar;
- (double)zNear;

@end
