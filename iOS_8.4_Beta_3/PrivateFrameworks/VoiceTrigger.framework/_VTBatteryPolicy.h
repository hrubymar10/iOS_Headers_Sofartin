/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTBatteryPolicy : _VTStatePolicy {
    bool _allowOnBattery;
    bool _allowOnCharger;
    unsigned char _batteryState;
    bool _locked;
    int _notificationToken;
    void *_powerAssertion;
    int _powerSourceNotificationToken;
}

- (void)_makePowerAssertion;
- (void)_registerForBatteryStatusChanges;
- (void)_registerForSettingsChange;
- (void)_unregisterForBatteryStatusChanges;
- (void)_unregisterForSettingsChange;
- (void)dealloc;
- (void)dependencyUpdated:(id)arg1;
- (id)initWithCallback:(id)arg1 queue:(id)arg2;
- (bool)isEnabled;
- (void)reload;

@end
