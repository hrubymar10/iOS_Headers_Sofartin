/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIAnimatableObject : NSObject {
    NSMutableDictionary *_animatableProperties;
}

- (void).cxx_destruct;
- (id)_animatablePropertyForType:(unsigned long long)arg1;
- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forPropertyType:(unsigned long long)arg2;
- (bool)areAnimationsInProgress;
- (id)endingValueForPropertyType:(unsigned long long)arg1;
- (void)removeAllAnimationsForPropertyType:(unsigned long long)arg1;
- (void)update:(double)arg1;

@end
