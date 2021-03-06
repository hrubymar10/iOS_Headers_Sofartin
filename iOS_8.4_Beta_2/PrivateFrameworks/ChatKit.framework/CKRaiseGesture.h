/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRaiseGesture : NSObject {
    SEL _action;
    bool _enabled;
    CMGestureManager *_gestureManager;
    long long _gestureState;
    bool _proximityState;
    id _target;
}

@property(assign,readwrite) SEL action;
@property(getter=isEnabled,assign,readwrite) bool enabled;
@property(assign,retain) CMGestureManager * gestureManager;
@property(assign,readwrite) long long gestureState;
@property(assign,readwrite) bool proximityState;
@property(getter=isRecognized,assign,readonly) bool recognized;
@property(assign,readwrite) id target;

+ (bool)isRaiseGestureEnabled;
+ (bool)isRaiseGestureSupported;

- (SEL)action;
- (void)dealloc;
- (id)gestureManager;
- (long long)gestureState;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isEnabled;
- (bool)isRecognized;
- (bool)proximityState;
- (void)proximityStateDidChange:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGestureManager:(id)arg1;
- (void)setGestureState:(long long)arg1;
- (void)setProximityState:(bool)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
