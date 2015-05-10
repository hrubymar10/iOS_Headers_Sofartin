/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMutableAnimationSettings : BSAnimationSettings

@property(assign,readwrite) double delay;
@property(assign,readwrite) double duration;
@property(assign,readwrite) double frameInterval;
@property(assign,retain) CAMediaTimingFunction * timingFunction;

+ (id)settingsWithDuration:(double)arg1;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setTimingFunction:(id)arg1;

@end
