/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface _FIUIAnimatableProperty : NSObject {
    NSMutableArray *_animations;
    id _currentValue;
    id _endValue;
    id _getter;
    id _setter;
    id _startValue;
}

@property (nonatomic, retain) id currentValue;
@property (nonatomic, retain) id endValue;
@property (nonatomic, retain) id startValue;

- (void).cxx_destruct;
- (void)addPropertyAnimation:(id)arg1;
- (id)currentValue;
- (id)endValue;
- (id)initWithGetter:(id)arg1 setter:(id)arg2;
- (bool)isFinishedAnimating;
- (void)removeAllPropertyAnimations;
- (void)setCurrentValue:(id)arg1;
- (void)setEndValue:(id)arg1;
- (void)setStartValue:(id)arg1;
- (id)startValue;
- (void)update:(double)arg1;

@end
