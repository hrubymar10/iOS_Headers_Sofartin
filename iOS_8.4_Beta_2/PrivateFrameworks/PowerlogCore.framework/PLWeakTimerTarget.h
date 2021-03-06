/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLWeakTimerTarget : NSObject {
    SEL _selector;
    id _target;
}

@property(assign,readwrite) SEL selector;
@property(assign,readwrite) id target;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)timerDidFire:(id)arg1;

@end
