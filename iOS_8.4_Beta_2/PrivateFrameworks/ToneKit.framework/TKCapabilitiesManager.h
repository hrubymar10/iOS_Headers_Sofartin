/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKCapabilitiesManager : NSObject {
    bool _alertToneStoreAvailable;
    bool _ringtoneStoreAvailable;
}

@property(getter=_isAlertToneStoreAvailable,setter=_setAlertToneStoreAvailable:,assign,readwrite) bool _alertToneStoreAvailable;
@property(getter=_isRingtoneStoreAvailable,setter=_setRingtoneStoreAvailable:,assign,readwrite) bool _ringtoneStoreAvailable;
@property(getter=isAlertToneStoreAvailable,assign,readonly) bool alertToneStoreAvailable;
@property(assign,readonly) bool hasUserGeneratedVibrationsCapability;
@property(assign,readonly) bool hasVibratorCapability;
@property(getter=isRingtoneStoreAvailable,assign,readonly) bool ringtoneStoreAvailable;

+ (id)sharedCapabilitiesManager;

- (void)_checkRingtoneStoreAvailability;
- (bool)_hasTelephonyCapability;
- (bool)_isAlertToneStoreAvailable;
- (bool)_isRingtoneStoreAvailable;
- (void)_setAlertToneStoreAvailable:(bool)arg1;
- (void)_setRingtoneStoreAvailable:(bool)arg1;
- (void)dealloc;
- (bool)hasUserGeneratedVibrationsCapability;
- (bool)hasVibratorCapability;
- (id)init;
- (bool)isAlertToneStoreAvailable;
- (bool)isRingtoneStoreAvailable;

@end