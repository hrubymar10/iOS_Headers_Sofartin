/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray *biasValues;
@property (copy) NSString *calculationMode;
@property (copy) NSArray *continuityValues;
@property (copy) NSArray *keyTimes;
@property struct CGPath { }*path;
@property (copy) NSString *rotationMode;
@property (copy) NSArray *tensionValues;
@property (copy) NSArray *timingFunctions;
@property (copy) NSArray *values;

+ (id)normalizedKeyframeAnimationWithKeyPath:(id)arg1;

- (void)CA_prepareRenderValue;
- (id)TSDCAAnimationContextCache;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)TSD_valueAtTime:(double)arg1 initialValue:(id)arg2;
- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)_copyRenderAnimationForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 layer:(id)arg2;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (id)biasValues;
- (id)calculationMode;
- (id)continuityValues;
- (id)keyTimes;
- (double)p_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2 contextCache:(id)arg3;
- (void)p_getValue:(id*)arg1 animationPercent:(double*)arg2 atTime:(double)arg3 initialValue:(id)arg4 contextCache:(id)arg5;
- (id)p_interpolatedValueFrom:(id)arg1 to:(id)arg2 percent:(double)arg3 contextCache:(id)arg4;
- (id)p_valueAtTime:(double)arg1 initialValue:(id)arg2 contextCache:(id)arg3;
- (struct CGPath { }*)path;
- (id)rotationMode;
- (void)setBiasValues:(id)arg1;
- (void)setCalculationMode:(id)arg1;
- (void)setContinuityValues:(id)arg1;
- (void)setKeyTimes:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setRotationMode:(id)arg1;
- (void)setTensionValues:(id)arg1;
- (void)setTimingFunctions:(id)arg1;
- (void)setValues:(id)arg1;
- (id)tensionValues;
- (id)timingFunctions;
- (id)values;

@end
