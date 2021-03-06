/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKBaseDimension : _HKDimension <_HKFactor> {
    NSString *_name;
    HKUnit *_reducedUnit;
    HKBaseUnit *_reducibleBaseUnit;
    double _reductionCoefficient;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * name;
@property(assign,retain) HKUnit * reducedUnit;
@property(assign,retain) HKBaseUnit * reducibleBaseUnit;
@property(assign,readwrite) double reductionCoefficient;
@property(assign,readonly) Class superclass;

+ (id)_uniquedDefinedDimensionWithName:(id)arg1;
+ (id)_uniquedDimensionWithName:(id)arg1 configuration:(id)arg2;
+ (id)conductance;
+ (id)energy;
+ (id)length;
+ (id)mass;
+ (id)nullDimension;
+ (id)pressure;
+ (id)temperature;
+ (id)time;
+ (id)volume;

- (void).cxx_destruct;
- (id)_baseDimensions;
- (id)_initWithName:(id)arg1;
- (bool)canBeReduced;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)reducedUnit;
- (id)reducibleBaseUnit;
- (double)reductionCoefficient;
- (void)setReducedUnit:(id)arg1;
- (void)setReducibleBaseUnit:(id)arg1;
- (void)setReductionCoefficient:(double)arg1;
- (id)unitString;

@end
