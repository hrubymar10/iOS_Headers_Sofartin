/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIHostedTextServiceSessionDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface> {
    bool __automatic_invalidation_invalidated;
    int __automatic_invalidation_retainCount;
    bool _canShowTextServices;
    <_UIViewServiceViewControllerOperatorDelegate> *_delegate;
    NSMutableArray *_deputyRotationDelegates;
    bool _disableAutomaticKeyboardBehavior;
    UIPopoverController *_displayedPopoverController;
    _UIViewServiceDummyPopoverController *_dummyPopoverController;
    unsigned int _hostAccessibilityServerPort;
    struct { 
        unsigned int val[8]; 
    } _hostAuditToken;
    NSString *_hostBundleID;
    int _hostPID;
    double _hostStatusBarHeight;
    long long _hostStatusBarOrientation;
    UIActionSheet *_hostedActionSheet;
    _UIHostedWindow *_hostedWindow;
    _UIAsyncInvocation *_invalidationInvocation;
    bool _isResigningFirstResponderFromHostNotification;
    UIViewController *_localViewController;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _localViewControllerRequestedInsets;
    NSArray *_plugInScenes;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    NSString *_presentationControllerClassName;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    bool _serviceInPopover;
    unsigned long long _supportedOrientations;
    _UIHostedTextServiceSession *_textServiceSession;
    _UIViewControllerOneToOneTransitionContext *_viewControllerTransitioningContext;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <_UIViewServiceViewControllerOperatorDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)XPCInterface;
+ (id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(struct { unsigned int x1[8]; })arg4;

- (int)__automatic_invalidation_logic;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(bool)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(bool)arg5 replyHandler:(id)arg6;
- (void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(bool)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(long long)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(bool)arg9 replyHandler:(id)arg10;
- (void)__dimmingViewWasTapped;
- (void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(id)arg2;
- (void)__hostDidChangeStatusBarHeight:(double)arg1;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(bool)arg2;
- (void)__hostDidSetContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)__hostDidSetPresentationControllerClassName:(id)arg1;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(bool)arg3;
- (void)__hostDisablesAutomaticKeyboardBehavior:(bool)arg1;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__hostViewDidAppear:(bool)arg1;
- (void)__hostViewDidDisappear:(bool)arg1;
- (void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned int)arg1 newHostingHandleReplyHandler:(id)arg2;
- (void)__hostViewWillAppear:(bool)arg1 inInterfaceOrientation:(long long)arg2 traitCollection:(id)arg3 statusBarHeight:(double)arg4 completionHandler:(id)arg5;
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withContextDescription:(id)arg2 statusBarHeight:(double)arg3 whenDone:(id)arg4;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillEnterForeground;
- (void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
- (void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(bool)arg3;
- (void)__hostedActionSheetClickedButtonAtIndex:(long long)arg1;
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(long long)arg1;
- (void)__hostedActionSheetDidPresent;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
- (void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(id)arg3;
- (void)__scrollToTopFromTouchAtViewLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id)arg2;
- (void)__setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2;
- (void)__setHostTraitCollection:(id)arg1;
- (void)__setServiceInPopover:(bool)arg1;
- (void)__textServiceDidDismiss;
- (id)_appearanceSource;
- (bool)_canShowTextServices;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(long long)arg2 animated:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(bool*)arg2;
- (void)_firstResponderDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 displayingTopView:(bool)arg2 andBottomView:(bool)arg3;
- (id)_inputViewsKey;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (bool)_isDeallocating;
- (bool)_isHostedRootViewController;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (bool)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned long long)arg5 passthroughViews:(id)arg6 backgroundStyle:(long long)arg7 animated:(bool)arg8;
- (bool)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(double)arg3;
- (id)_presentationControllerClassName;
- (id)_queue;
- (id)_sessionForStateRestoration:(id)arg1;
- (bool)_shouldForwardLegacyRotationOnly;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (bool)_tryRetain;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (bool)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char *)arg3;
- (id)_viewControllersForRotationCallbacks;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_windowDidRegisterScrollToTopView;
- (void)_windowDidUnregisterScrollToTopView;
- (void)_windowDidUpdateCurrentTintView:(id)arg1;
- (void)addDeputyRotationDelegate:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(bool)arg2;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(bool)arg2;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(id)arg2;
- (id)invalidate;
- (void)loadView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusedItem;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setDelegate:(id)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1;
- (void)viewDidLoad;

@end
