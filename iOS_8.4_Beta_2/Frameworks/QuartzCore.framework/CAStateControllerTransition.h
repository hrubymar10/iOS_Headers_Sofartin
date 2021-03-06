/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateControllerTransition : NSObject {
    NSMutableArray *_animations;
    double _beginTime;
    CAStateController *_controller;
    double _duration;
    CALayer *_layer;
    NSString *_masterKey;
    float _speed;
    CAStateTransition *_transition;
}

@property(assign,readonly) double beginTime;
@property(assign,readonly) double duration;
@property(assign,readonly) CALayer * layer;
@property(assign,readonly) float speed;
@property(assign,readonly) CAStateTransition * transition;

- (void)addAnimation:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (double)beginTime;
- (void)dealloc;
- (double)duration;
- (id)init;
- (void)invalidate;
- (id)layer;
- (void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2;
- (float)speed;
- (id)transition;

@end
