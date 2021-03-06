/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewServiceTextEffectsOperator : NSObject <_UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface> {
    bool __automatic_invalidation_invalidated;
    int __automatic_invalidation_retainCount;
    NSArray *_allowedNotifications;
    bool _canRestoreInputViews;
    bool _didResignForDisappear;
    UIWindow *_hostedWindow;
    _UIAsyncInvocation *_invalidationInvocation;
    bool _isRestoringInputViews;
    bool _localVCDisablesAutomaticBehaviors;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    id _remoteViewControllerProxy;
    struct CGPoint { 
        double x; 
        double y; 
    } _windowOffset;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2;

- (int)__automatic_invalidation_logic;
- (void)__createHostedTextEffectsWithReplyHandler:(id)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostViewWillAppear:(bool)arg1;
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostWillEnterForeground;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__setHostAllowedNotifications:(id)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setWindowOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (bool)_isDeallocating;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (id)_queue;
- (void)_restoreInputViews;
- (void)_sendNotification:(id)arg1;
- (bool)_tryRetain;
- (void)_viewServiceHostWillEnterForeground:(id)arg1;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)forceSyncToStatusBarOrientation;
- (id)invalidate;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setHostedWindow:(id)arg1 disableAutomaticBehaviors:(bool)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)windowDidGainFirstResponder:(id)arg1;

@end
