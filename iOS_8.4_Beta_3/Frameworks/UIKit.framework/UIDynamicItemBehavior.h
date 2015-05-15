/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicItemBehavior : UIDynamicBehavior {
    bool _allowsRotation;
    double _angularResistance;
    NSMapTable *_cachedAngularVelocities;
    NSMapTable *_cachedLinearVelocities;
    double _density;
    double _elasticity;
    double _friction;
    double _resistance;
    struct { 
        unsigned int elasticityChanged : 1; 
        unsigned int frictionChanged : 1; 
        unsigned int densityChanged : 1; 
        unsigned int resistanceChanged : 1; 
        unsigned int angularResistanceChanged : 1; 
        unsigned int rotationEnabledChanged : 1; 
        unsigned int useDefaultViewPropertiesApplierChanged : 1; 
    } _stateFlags;
    bool _useCircularBoundingBox;
    bool _useDefaultViewPropertiesApplier;
}

@property (nonatomic) bool allowsRotation;
@property (nonatomic) double angularResistance;
@property (nonatomic) double density;
@property (nonatomic) double elasticity;
@property (nonatomic) double friction;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) double resistance;

- (double)_angleForItem:(id)arg1;
- (double)_angularResistanceForItem:(id)arg1;
- (void)_associate;
- (void)_commonInit;
- (void)_configureBody:(id)arg1 forView:(id)arg2;
- (double)_densityForItem:(id)arg1;
- (void)_dissociate;
- (double)_elasticityForItem:(id)arg1;
- (double)_frictionForItem:(id)arg1;
- (double)_massForItem:(id)arg1;
- (struct CGPoint { double x1; double x2; })_positionForItem:(id)arg1;
- (void)_reevaluate:(unsigned long long)arg1;
- (double)_resistanceForItem:(id)arg1;
- (bool)_rotationEnabledForItem:(id)arg1;
- (void)_setAngle:(double)arg1 forItem:(id)arg2;
- (void)_setPosition:(struct CGPoint { double x1; double x2; })arg1 forItem:(id)arg2;
- (void)_setUseCircularBoundingBox:(bool)arg1;
- (bool)_useCircularBoundingBox;
- (void)addAngularVelocity:(double)arg1 forItem:(id)arg2;
- (void)addItem:(id)arg1;
- (void)addLinearVelocity:(struct CGPoint { double x1; double x2; })arg1 forItem:(id)arg2;
- (bool)allowsRotation;
- (double)angularResistance;
- (double)angularVelocityForItem:(id)arg1;
- (void)applyImpulse:(struct CGPoint { double x1; double x2; })arg1 toItem:(id)arg2;
- (void)dealloc;
- (double)density;
- (id)description;
- (double)elasticity;
- (double)friction;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)items;
- (struct CGPoint { double x1; double x2; })linearVelocityForItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (double)resistance;
- (void)setAllowsRotation:(bool)arg1;
- (void)setAngularResistance:(double)arg1;
- (void)setDensity:(double)arg1;
- (void)setElasticity:(double)arg1;
- (void)setFriction:(double)arg1;
- (void)setResistance:(double)arg1;
- (void)setUseDefaultViewPropertiesApplier:(bool)arg1;
- (bool)useDefaultViewPropertiesApplier;

@end
