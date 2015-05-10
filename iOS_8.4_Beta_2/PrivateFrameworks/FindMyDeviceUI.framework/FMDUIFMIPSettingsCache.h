/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/FindMyDeviceUI
 */

@interface FMDUIFMIPSettingsCache : NSObject {
    unsigned long long _fmipState;
    bool _fmipStateAvailable;
    bool _lowBatteryLocateEnabled;
    bool _lowBatteryLocateStateAvailable;
}

@property(assign,readonly) bool fmipEnabled;
@property(assign,readwrite) unsigned long long fmipState;
@property(assign,readwrite) bool fmipStateAvailable;
@property(assign,readonly) bool fmipStateChangeInProgress;
@property(assign,readwrite) bool lowBatteryLocateEnabled;
@property(assign,readwrite) bool lowBatteryLocateStateAvailable;

+ (id)sharedInstance;

- (void)_loadFMIPState;
- (void)_loadLowBatteryState;
- (bool)fmipEnabled;
- (unsigned long long)fmipState;
- (bool)fmipStateAvailable;
- (bool)fmipStateChangeInProgress;
- (id)init;
- (bool)lowBatteryLocateEnabled;
- (bool)lowBatteryLocateStateAvailable;
- (void)setFmipState:(unsigned long long)arg1;
- (void)setFmipStateAvailable:(bool)arg1;
- (void)setLowBatteryLocateEnabled:(bool)arg1;
- (void)setLowBatteryLocateStateAvailable:(bool)arg1;

@end
