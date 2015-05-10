/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIPluginController : NSObject <SBPluginBundleController> {
    <SBUIPluginControllerHost> *_host;
    bool _isVisible;
}

@property(assign,readwrite) <SBUIPluginControllerHost> * host;
@property(getter=isVisible,assign,readwrite) bool visible;

- (void)cancelPendingActivationEvent:(int)arg1;
- (bool)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3;
- (void)handleBluetoothDismissal;
- (void)handlePreheatCommand;
- (void)handleViewFullyRevealed;
- (bool)handledButtonDownEventFromSource:(int)arg1;
- (bool)handledButtonTapFromSource:(int)arg1;
- (bool)handledButtonUpEventFromSource:(int)arg1;
- (bool)handledMenuButtonDownEvent;
- (bool)handledMenuButtonTap;
- (bool)handledMenuButtonUpEvent;
- (bool)handledPasscodeUnlockWithCompletion:(id)arg1;
- (bool)handledWiredMicButtonTap;
- (id)host;
- (bool)isVisible;
- (void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (void)registeredWithHost;
- (void)setHost:(id)arg1;
- (void)setVisible:(bool)arg1;
- (bool)supportedAndEnabled;
- (id)viewControllerForActivationContext:(id)arg1;
- (void)viewPartiallyRevealedWithPercentRevealed:(double)arg1;
- (bool)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3;

@end