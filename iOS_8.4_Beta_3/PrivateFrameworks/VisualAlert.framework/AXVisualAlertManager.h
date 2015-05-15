/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXVisualAlertManager : NSObject {
    NSDictionary *_activePattern;
    unsigned long long _activePatternCursor;
    unsigned long long _alertTypes;
    NSMutableArray *_bulletins;
    <AXCameraTorchManager> *_cameraTorchManager;
    bool _captureSessionRunning;
    AXNotificationHandler *_deviceLockStateChangedNotificationHandler;
    bool _isDeviceLocked;
    bool _isQuietModeEnabled;
    bool _isTorchEnabledInControlCenter;
    NSArray *_notificationHandlers;
    NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;
    NSDictionary *_patterns;
    bool _shouldRepeatPattern;
    bool _skipAutomaticStopOnUserInteraction;
    AXTimer *_timer;
    bool _torchDeviceOn;
    bool _torchDeviceOpen;
    AXTimer *_torchForceShutdownTimer;
    AXNotificationHandler *_torchInControlCenterWasEnabledNotificationHandler;
    unsigned long long _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
    bool _videoConferenceCallRinging;
}

@property (setter=_setActivePattern:, nonatomic, retain) NSDictionary *_activePattern;
@property (nonatomic, readonly, retain) NSDictionary *_patterns;
@property (getter=_isTorchDeviceOn, setter=_setTorchDeviceOn:, nonatomic) bool _torchDeviceOn;
@property (getter=_isTorchDeviceOpen, setter=_setTorchDeviceOpen:, nonatomic) bool _torchDeviceOpen;
@property (setter=_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:, nonatomic) unsigned long long _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;

+ (void)initialize;
+ (id)sharedVisualAlertManager;

- (id)_activePattern;
- (void)_beginVisualAlertForType:(unsigned long long)arg1 repeat:(bool)arg2;
- (void)_beginVisualAlertForType:(unsigned long long)arg1 repeat:(bool)arg2 skipAutomaticStopOnUserInteraction:(bool)arg3;
- (void)_endVisualAlert;
- (void)_handleBeginVisualAlertForAlarmWithSound:(bool)arg1;
- (void)_handleBeginVisualAlertForIncomingCall;
- (void)_handleBeginVisualAlertForIncomingVideoConferenceCall;
- (void)_handleCaptureSessionDidStartRunning;
- (void)_handleCaptureSessionDidStopRunning;
- (void)_handleDeviceWasLocked;
- (void)_handleDeviceWasUnlocked;
- (void)_handleEndVisualAlertForAlarm;
- (void)_handleEndVisualAlertForIncomingCall;
- (void)_handleEndVisualAlertForIncomingVideoConferenceCall;
- (void)_handleLockButtonPressed;
- (void)_handleQuietModeWasDisabled;
- (void)_handleQuietModeWasEnabled;
- (void)_handleSecondaryVisualAlertManagerDidStart;
- (void)_handleTorchInControlCenterWasDisabled;
- (void)_handleTorchInControlCenterWasEnabled;
- (void)_handleVideoConferenceCallRinging;
- (void)_handleVisualAlertForExternalApplication;
- (void)_handleVisualAlertForIncomingMessage;
- (void)_handleVisualAlertForRegularNotification;
- (void)_handleVolumeChanged;
- (bool)_hasVideoConferenceCameraTorchManager;
- (void)_insertCustomLogicForSystemWideServer;
- (bool)_isTorchDeviceOn;
- (bool)_isTorchDeviceOpen;
- (bool)_isTorchEnabledInControlCenter;
- (id)_normalizedStrobePatternForOriginalPattern:(id)arg1;
- (id)_patterns;
- (void)_processNextVisualAlertComponent;
- (void)_setActivePattern:(id)arg1;
- (void)_setTorchDeviceOn:(bool)arg1;
- (void)_setTorchDeviceOpen:(bool)arg1;
- (void)_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:(unsigned long long)arg1;
- (bool)_shouldHandleVisualAlertsForVideoConferenceCallsInConferenceFramework;
- (void)_startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2;
- (void)_stop;
- (bool)_supportsVisualAlertsForVideoConferenceCalls;
- (unsigned long long)_typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
- (void)addBulletin:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)existingBulletinForBulletin:(id)arg1;
- (id)init;
- (void)removeBulletin:(id)arg1;
- (void)startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2;
- (void)stop;

@end
