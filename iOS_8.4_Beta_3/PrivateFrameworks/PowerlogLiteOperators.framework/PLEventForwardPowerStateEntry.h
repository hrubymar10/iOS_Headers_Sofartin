/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLEventForwardPowerStateEntry : PLEntry

@property(assign,readonly) short event;
@property(assign,readonly) bool isBasebandWake;
@property(assign,readonly) NSArray * reason;
@property(assign,readonly) short state;

+ (id)entryKey;
+ (void)load;

- (short)event;
- (id)initEntryWithIOMessage:(unsigned int)arg1;
- (id)initEntryWithState:(short)arg1 withEvent:(short)arg2 withReason:(id)arg3 withDate:(id)arg4;
- (bool)isBasebandWake;
- (id)reason;
- (short)state;

@end
