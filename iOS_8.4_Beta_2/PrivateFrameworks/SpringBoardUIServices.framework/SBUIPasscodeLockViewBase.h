/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewBase : UIView <SBFLegibilitySettingsProviderDelegate, SBUIBiometricEventObserver, SBUIPasscodeLockView, SBUIPasscodeLockView_Internal> {
    bool _allowsStatusTextUpdatingOnResignFirstResponder;
    bool _appearingForSmartCoverUnlock;
    double _backgroundAlpha;
    <SBFLegibilitySettingsProvider> *_backgroundLegibilitySettingsProvider;
    bool _becameVisible;
    unsigned long long _biometricMatchMode;
    double _currentBacklightLevel;
    UIColor *_customBackgroundColor;
    <SBUIPasscodeLockViewDelegate_Internal> *_delegate;
    bool _deviceHasBeenUnlockedOnceSinceBoot;
    bool _enabledMatching;
    SBUIPasscodeEntryField *_entryField;
    _UILegibilitySettings *_legibilitySettings;
    double _luminanceBoost;
    bool _mesaLockedOut;
    NSString *_passcode;
    bool _playsKeypadSounds;
    bool _screenOn;
    bool _shouldResetForFailedPasscodeAttempt;
    bool _showsEmergencyCallButton;
    bool _showsStatusField;
    unsigned long long _statusState;
    NSString *_statusSubtitleText;
    NSString *_statusText;
    int _style;
}

@property(getter=_entryField,setter=_setEntryField:,assign,retain) SBUIPasscodeEntryField * _entryField;
@property(assign,readwrite) double backgroundAlpha;
@property(assign,retain) <SBFLegibilitySettingsProvider> * backgroundLegibilitySettingsProvider;
@property(assign,readwrite) unsigned long long biometricMatchMode;
@property(assign,retain) UIColor * customBackgroundColor;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SBUIPasscodeLockViewDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(getter=_luminosityBoost,setter=_setLuminosityBoost:,assign,readwrite) double luminosityBoost;
@property(assign,readonly) NSString * passcode;
@property(assign,readwrite) bool playsKeypadSounds;
@property(getter=isScreenOn,assign,readwrite) bool screenOn;
@property(assign,readwrite) bool shouldResetForFailedPasscodeAttempt;
@property(assign,readwrite) bool showsEmergencyCallButton;
@property(assign,readwrite) bool showsStatusField;
@property(getter=_statusState,setter=_setStatusState:,assign,readwrite) unsigned long long statusState;
@property(getter=_statusSubtitleText,assign,copy) NSString * statusSubtitleText;
@property(getter=_statusText,assign,copy) NSString * statusText;
@property(assign,readwrite) int style;
@property(assign,readonly) Class superclass;

- (void)_clearBrightnessChangeTimer;
- (id)_defaultStatusText;
- (id)_entryField;
- (void)_evaluateLuminance;
- (void)_handleBiometricEvent:(unsigned long long)arg1;
- (bool)_isBoundsPortraitOriented;
- (void)_luminanceBoostDidChange;
- (double)_luminanceBoostFromDisplayBrightness;
- (double)_luminanceBoostFromLegibility;
- (double)_luminosityBoost;
- (void)_noteAppearingForSmartCoverUnlock:(bool)arg1;
- (void)_noteBioMatchingEnabledDidChange;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(bool)arg1;
- (void)_noteScreenBrightnessDidChange;
- (void)_notifyDelegatePasscodeEnteredViaMesa;
- (long long)_orientation;
- (void)_resetForFailedMesaAttempt;
- (void)_resetForFailedPasscode:(bool)arg1;
- (void)_resetStatusText;
- (void)_screenBrightnessReallyDidChange;
- (void)_sendDelegateKeypadKeyDown;
- (void)_sendDelegateKeypadKeyUp;
- (void)_setEntryField:(id)arg1;
- (void)_setLegibilitySettings:(id)arg1;
- (void)_setLuminosityBoost:(double)arg1;
- (void)_setStatusState:(unsigned long long)arg1;
- (void)_setStatusSubtitleText:(id)arg1;
- (void)_setStatusText:(id)arg1;
- (unsigned long long)_statusState;
- (unsigned long long)_statusStateForLockoutState:(unsigned long long)arg1;
- (id)_statusSubtitleText;
- (id)_statusText;
- (void)_updateStatusStateForLockout;
- (bool)_wantsBiometricAuthentication;
- (void)autofillForSuccessfulMesaAttemptWithCompletion:(id)arg1;
- (double)backgroundAlpha;
- (id)backgroundLegibilitySettingsProvider;
- (bool)becomeFirstResponder;
- (void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2;
- (unsigned long long)biometricMatchMode;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)customBackgroundColor;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFirstResponder;
- (bool)isScreenOn;
- (id)passcode;
- (bool)playsKeypadSounds;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)reset;
- (void)resetForFailedMesaAttemptWithStatusText:(id)arg1 andSubtitle:(id)arg2;
- (void)resetForFailedPasscode;
- (void)resetForScreenOff;
- (bool)resignFirstResponder;
- (void)setAllowsStatusTextUpdatingOnResignFirstResponder:(bool)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setBackgroundLegibilitySettingsProvider:(id)arg1;
- (void)setBiometricMatchMode:(unsigned long long)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyPressClicksPrewarmed:(bool)arg1;
- (void)setPlaysKeypadSounds:(bool)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)setShouldResetForFailedPasscodeAttempt:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setShowsStatusField:(bool)arg1;
- (void)setStyle:(int)arg1;
- (bool)shouldResetForFailedPasscodeAttempt;
- (bool)showsEmergencyCallButton;
- (bool)showsStatusField;
- (int)style;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;
- (void)updateStatusTextAnimated:(bool)arg1;
- (void)updateStatusTextForBioEvent:(unsigned long long)arg1 animated:(bool)arg2;
- (void)willMoveToWindow:(id)arg1;

@end
