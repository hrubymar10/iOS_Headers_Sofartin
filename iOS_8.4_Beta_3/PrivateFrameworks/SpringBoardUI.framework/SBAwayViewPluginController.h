/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBAwayViewPluginController : NSObject {
    bool _alwaysFullscreen;
    id _disableTransitionBlock;
    unsigned long long _effectivePresentationStyle;
    NSString *_enablingApplicationBundleIdentifier;
    bool _fullscreen;
    long long _orientation;
    UIView *_view;
    bool _viewCanBeDisplayed;
}

@property (getter=isAlwaysFullscreen, nonatomic) bool alwaysFullscreen;
@property (getter=_effectivePresentationStyle, setter=_setEffectivePresentationStyle:, nonatomic) unsigned long long effectivePresentationStyle;
@property (nonatomic, copy) NSString *enablingApplicationBundleIdentifier;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) UIView *view;
@property (nonatomic) bool viewCanBeDisplayed;

+ (void)disableBundleNamed:(id)arg1;
+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;
+ (void)enableBundleNamed:(id)arg1;
+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;

- (id)_disableTransitionBlock;
- (unsigned long long)_effectivePresentationStyle;
- (void)_setDisableTransitionBlock:(id)arg1;
- (void)_setEffectivePresentationStyle:(unsigned long long)arg1;
- (bool)allowsControlCenter;
- (bool)allowsLockScreenCamera;
- (bool)allowsLockScreenHint;
- (bool)allowsLockScreenMediaControls;
- (bool)allowsNotificationCenter;
- (bool)allowsPhotoSlideshow;
- (bool)allowsSiri;
- (bool)allowsTimer;
- (void)alwaysFullscreenValueHasChanged;
- (bool)animateResumingToApplicationWithIdentifier:(id)arg1;
- (id)backgroundView;
- (id)bundleIDForUnlock;
- (bool)canBeAlwaysFullscreen;
- (bool)canScreenDim;
- (id)customHeaderView;
- (id)customSubtitleColor;
- (id)customSubtitleText;
- (void)dealloc;
- (void)deviceLockViewDidHide;
- (void)deviceLockViewWillShow;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)disable;
- (void)disableWithTransitionBlock:(id)arg1;
- (bool)disablesAwayItemsCompletely;
- (id)enableTransitionBlock;
- (id)enablingApplicationBundleIdentifier;
- (bool)handleGesture:(int)arg1 fingerCount:(unsigned long long)arg2;
- (bool)handleHeadsetButtonPressed:(bool)arg1;
- (bool)handleLockButtonPressed;
- (bool)handleMenuButtonDoubleTap;
- (bool)handleMenuButtonHeld;
- (bool)handleMenuButtonTap;
- (bool)handleVolumeDownButtonPressed;
- (bool)handleVolumeUpButtonPressed;
- (bool)hasCustomSubtitle;
- (id)init;
- (bool)isAlwaysFullscreen;
- (bool)isContentViewWhiteUnderSlideToUnlockText;
- (bool)isFullscreen;
- (id)legibilitySettings;
- (bool)legibilitySettingsOverridesVibrancy;
- (void)loadView;
- (void)lockScreenMediaControlsShown:(bool)arg1;
- (unsigned long long)notificationBehavior;
- (long long)orientation;
- (unsigned long long)overlayStyle;
- (long long)pluginPriority;
- (unsigned long long)presentationStyle;
- (void)purgeView;
- (bool)retainsPriorityWhileInactive;
- (void)setActivationContext:(id)arg1;
- (void)setAlwaysFullscreen:(bool)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)setEnablingApplicationBundleIdentifier:(id)arg1;
- (void)setFullscreen:(bool)arg1 animated:(bool)arg2;
- (void)setFullscreen:(bool)arg1 duration:(double)arg2;
- (void)setNeedsLegibilityAppearanceUpdate;
- (void)setOrientation:(long long)arg1;
- (void)setView:(id)arg1;
- (void)setViewCanBeDisplayed:(bool)arg1;
- (bool)shouldAutoHideNotifications;
- (bool)shouldDisableOnRelock;
- (bool)shouldDisableOnUnlock;
- (bool)shouldShowLockStatusBarTime;
- (bool)showAwayItems;
- (bool)showBatteryChargingText;
- (bool)showDate;
- (bool)showDateView;
- (bool)showHeaderView;
- (bool)showStatusBar;
- (bool)showsDuringCall;
- (id)slideToUnlockText;
- (double)transitionDuration;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1;
- (id)view;
- (bool)viewCanBeDisplayed;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (double)viewFadeInDuration;
- (bool)viewWantsFullscreenLayout;
- (bool)viewWantsOverlayLayout;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsAutomaticFullscreenTimer;
- (bool)wantsHardwareEventsWhenScreenDimmed;
- (bool)wantsMenuButtonHeldEvent;
- (bool)wantsMesaAutoUnlock;
- (bool)wantsSwipeGestureRecognizer;
- (bool)wantsToOpenURLsWhilePasscodeLocked;
- (bool)wantsUserWallpaper;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
