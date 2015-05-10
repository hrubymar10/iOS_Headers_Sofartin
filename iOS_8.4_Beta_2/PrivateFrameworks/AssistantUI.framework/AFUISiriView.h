/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriView : UIView <SBUIPasscodeLockViewDelegate, SiriUISiriStatusViewDelegate> {
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    _UIBackdropView *_backdropView;
    bool _backdropViewVisible;
    bool _carDisplaySnippetVisible;
    UIView *_contentView;
    <AFUISiriViewDelegate> *_delegate;
    UIView *_dimmingAndLockContainer;
    UIView *_dimmingView;
    bool _disabled;
    UIView *_foregroundView;
    long long _frozenBackdropSnapshotOrientation;
    UIView *_frozenBackdropSnapshotView;
    SiriUIHelpButton *_helpButton;
    UIView<SBUIPasscodeLockView> *_lockView;
    long long _mode;
    UIButton *_reportBugButton;
    long long _siriSessionState;
    UIView<SiriUISiriStatusViewProtocol> *_siriStatusView;
    UIView *_statusViewContainer;
    bool _statusViewHidden;
    id _triggerUpdater;
    unsigned long long _unlockAttemptCount;
    id _unlockCompletion;
}

@property(assign,readwrite) bool carDisplaySnippetVisible;
@property(assign,retain) UIView * contentView;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <AFUISiriViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool disabled;
@property(assign,readonly) UIView * foregroundView;
@property(assign,readwrite) long long frozenBackdropSnapshotOrientation;
@property(assign,retain) UIView * frozenBackdropSnapshotView;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long mode;
@property(assign,readwrite) long long siriSessionState;
@property(assign,readwrite) bool statusViewHidden;
@property(assign,readonly) Class superclass;

+ (void)_animateView:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromYPosition:(double)arg3 toYPostion:(double)arg4 fade:(long long)arg5 completion:(id)arg6;

- (void).cxx_destruct;
- (void)_animateLockViewIsAnimatingIn:(bool)arg1 completion:(id)arg2;
- (void)_audioRouteButtonTapped:(id)arg1;
- (void)_configureHelpButton;
- (void)_configureReportBugButton;
- (void)_helpButtonTapped:(id)arg1;
- (void)_hideLockViewWithResult:(long long)arg1;
- (void)_hideLockViewWithResult:(long long)arg1 hideCompletion:(id)arg2;
- (void)_layoutReportBugButton;
- (id)_lockViewBackgroundColor;
- (id)_lockViewLegibilityProvider;
- (void)_preferencesDidChange:(id)arg1;
- (bool)_reducesMotionEffects;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (bool)_showsReportBugButton;
- (void)_updateControlsAppearance;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (void)cancelShowingPasscodeUnlock;
- (bool)carDisplaySnippetVisible;
- (id)contentView;
- (void)dealloc;
- (id)delegate;
- (id)dimBackdropSettings;
- (bool)disabled;
- (id)foregroundView;
- (long long)frozenBackdropSnapshotOrientation;
- (id)frozenBackdropSnapshotView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)mode;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)pulseHelpButton;
- (void)setAudioRoutePickerBluetoothOn:(bool)arg1;
- (void)setBackdropShouldRasterize:(bool)arg1;
- (void)setBackdropVisible:(bool)arg1;
- (void)setBugReportingAvailable:(bool)arg1;
- (void)setCarDisplaySnippetVisible:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setFrozenBackdropSnapshotOrientation:(long long)arg1;
- (void)setFrozenBackdropSnapshotView:(id)arg1;
- (void)setHelpButtonEmphasized:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setShowAudioRoutePicker:(bool)arg1;
- (void)setSiriSessionState:(long long)arg1;
- (void)setStatusViewHidden:(bool)arg1;
- (void)setStatusViewUserInteractionEnabled:(bool)arg1;
- (void)showPasscodeUnlockWithCompletion:(id)arg1;
- (void)siriDidActivateFromSource:(long long)arg1;
- (long long)siriSessionState;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (void)siriStatusViewWasTapped:(id)arg1;
- (bool)statusViewHidden;
- (void)updateForPercentageRevealed:(double)arg1;

@end
