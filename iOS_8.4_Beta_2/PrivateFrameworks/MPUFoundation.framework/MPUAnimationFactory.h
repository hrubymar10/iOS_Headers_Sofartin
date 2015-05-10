/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    NSArray *_allowedKeyPaths;
    NSString *_fillMode;
    bool _removedOnCompletion;
    double _timeOffset;
    CAMediaTimingFunction *_timingFunction;
}

@property(assign,copy) NSArray * allowedKeyPaths;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * fillMode;
@property(assign,readonly) unsigned long long hash;
@property(getter=isRemovedOnCompletion,assign,readwrite) bool removedOnCompletion;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) double timeOffset;
@property(assign,retain) CAMediaTimingFunction * timingFunction;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)allowedKeyPaths;
- (id)fillMode;
- (id)init;
- (bool)isRemovedOnCompletion;
- (void)setAllowedKeyPaths:(id)arg1;
- (void)setFillMode:(id)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (double)timeOffset;
- (id)timingFunction;

@end