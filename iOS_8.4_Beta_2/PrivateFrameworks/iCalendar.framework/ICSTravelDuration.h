/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTravelDuration : ICSProperty

@property(assign,retain) ICSDuration * duration;
@property(assign,retain) NSString * transparency;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 additionalParameters:(id)arg3;
- (bool)alwaysHasParametersToSerialize;
- (id)duration;
- (void)setDuration:(id)arg1;
- (void)setTransparency:(id)arg1;
- (id)transparency;

@end
