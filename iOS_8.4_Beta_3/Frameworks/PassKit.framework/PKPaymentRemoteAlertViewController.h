/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate> {
    _UIBackdropView *_backdropView;
    bool _backlightActiveOnLaunch;
    PKPassGroupsViewController *_passGroupsViewController;
    CLInUseAssertion *_passbookForegroundAssertion;
    PKPaymentService *_paymentService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_createGroupsController;
+ (bool)_isSecureForRemoteViewService;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)groupsController;
+ (void)preloadGroupsController;

- (void)_dismiss;
- (void)_dismissIfRestricted;
- (bool)_isBacklightActive;
- (void)_willAppearInRemoteViewController;
- (void)dealloc;
- (void)handleHomeButtonPressed;
- (id)init;
- (void)paymentContainerDidFinishAnimatingNotification:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidAuthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidDeauthorize:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
