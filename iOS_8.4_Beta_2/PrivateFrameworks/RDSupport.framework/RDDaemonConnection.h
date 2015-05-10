/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RDSupport.framework/RDSupport
 */

@interface RDDaemonConnection : NSObject {
    NSString *_lastAppLaunchBundleID;
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedConnection;

- (void).cxx_destruct;
- (bool)_previousApplicationWasAnAlert;
- (void)carouselLaunchingAppWithBundleID:(id)arg1;
- (void)carouselShowingAlertWithID:(id)arg1;
- (void)carouselShowingAppLauncher;
- (void)carouselShowingClock;
- (void)carouselShowingGlanceWithID:(id)arg1;
- (void)carouselShowingNotificationCenter;
- (void)carouselWillLaunchAppWithBundleID:(id)arg1;
- (void)clearConnection;
- (void)emojiAvailableForAppWithBundleID:(id)arg1;
- (void)enteringPersonPicker;
- (void)enteringWatchFaceCustomization;
- (void)enteringWatchFaceSwitcher;
- (void)leavingPersonPicker;
- (void)leavingWachFaceSwitcher;
- (void)leavingWatchFaceCustomization;
- (void)pingRetailDaemon;
- (void)quickboardAvailableForAppWithBundleID:(id)arg1;
- (void)quickboardCompositionViewControllerWillBeDismissedForAppWithBundleID:(id)arg1;
- (void)quickboardCompositionViewControllerWillBePresentedForAppWithBundleID:(id)arg1;
- (void)quickboardEmojiCompositionViewControllerWillBePresentedForAppWithBundleID:(id)arg1;
- (void)quickboardNoLongerAvailableForAppWithBundleID:(id)arg1;
- (void)rebootCompanion:(bool)arg1 gizmo:(bool)arg2;
- (void)screenSaverWasDismissed;
- (id)xpcConnection;

@end
