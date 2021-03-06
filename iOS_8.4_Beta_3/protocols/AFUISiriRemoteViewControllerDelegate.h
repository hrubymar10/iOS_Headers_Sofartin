/* Generated by RuntimeBrowser.
 */

@protocol AFUISiriRemoteViewControllerDelegate <NSObject>

@required

- (void)dismissSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didEncounterUnexpectedServiceError:(NSError *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 didReadBulletinWithIdentifier:(NSString *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 handlePasscodeUnlockWithCompletion:(id)arg2;
- (bool)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 launchApplicationWithBundleIdentifier:(NSString *)arg2 withURL:(NSURL *)arg3;
- (bool)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 openURL:(NSURL *)arg2 appBundleID:(NSString *)arg3 allowSiriDismissal:(bool)arg4;
- (bool)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 openURL:(NSURL *)arg2 delaySessionEndForTTS:(bool)arg3;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setBugReportingAvailable:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setCarDisplaySnippetVisible:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setHelpButtonEmphasized:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusBarHidden:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewDisabled:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewHidden:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 setStatusViewUserInteractionEnabled:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 siriIdleAndQuietStatusDidChange:(bool)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 startRequestWithOptions:(AFUIRequestOptions *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 viewServiceDidTerminateWithError:(NSError *)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(AFUISiriRemoteViewController *)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewControllerPulseHelpButton:(AFUISiriRemoteViewController *)arg1;
- (void)startGuidedAccessForRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)viewWillAppearFinishedForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;
- (void)viewWillDisappearFinishedForSiriRemoteViewController:(AFUISiriRemoteViewController *)arg1;

@end
