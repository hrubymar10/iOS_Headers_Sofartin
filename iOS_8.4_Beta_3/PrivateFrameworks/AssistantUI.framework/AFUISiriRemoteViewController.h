/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriRemoteViewController : _UIRemoteViewController <SVSSiriViewControllerHosting> {
    <AFUISiriRemoteViewControllerDataSource> *_dataSource;
    <AFUISiriRemoteViewControllerDelegate> *_delegate;
}

@property (nonatomic) <AFUISiriRemoteViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveHelpAction;
- (void)didReceiveReportBugAction;
- (void)getScreenshotWithReplyHandler:(id)arg1;
- (void)handlePasscodeUnlockWithCompletion:(id)arg1;
- (void)notifyOnNextUserInteraction;
- (void)pulseHelpButton;
- (void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(id)arg2;
- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;
- (void)serviceDidReadBulletinWithIdentifier:(id)arg1;
- (void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 replyHandler:(id)arg3;
- (void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(bool)arg3;
- (void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(bool)arg2 replyHandler:(id)arg3;
- (void)serviceRequestsDismissal;
- (void)serviceStartGuidedAccess;
- (void)serviceStartRequestWithOptions:(id)arg1;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (id)sessionDelegate;
- (void)setBugReportingAvailable:(bool)arg1;
- (void)setCarDisplaySnippetVisible:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHelpButtonEmphasized:(bool)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSpeechSynthesis:(id)arg1;
- (void)setStatusBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStatusBarHidden:(bool)arg1;
- (void)setStatusViewDisabled:(bool)arg1;
- (void)setStatusViewHidden:(bool)arg1;
- (void)setStatusViewUserInteractionEnabled:(bool)arg1;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriDidDeactivate;
- (void)siriDidHidePasscodeUnlock;
- (void)siriIdleAndQuietStatusDidChange:(bool)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)siriWillHidePasscodeUnlockForResult:(long long)arg1;
- (void)siriWillShowPasscodeUnlock;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(bool)arg1;
- (id)speechSynthesisDelegate;
- (void)userInteractionDidOccur;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
