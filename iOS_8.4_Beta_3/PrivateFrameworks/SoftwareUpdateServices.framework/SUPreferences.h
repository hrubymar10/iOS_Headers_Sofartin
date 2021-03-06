/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUPreferences : NSObject {
    bool _allowSameBuildUpdates;
    bool _disableAutoDownload;
    bool _disableAvailabilityAlerts;
    bool _disableBuildNumberComparison;
    bool _disableUserWiFiOnlyPeriod;
    int _logLevel;
}

@property (nonatomic, readonly) bool allowSameBuildUpdates;
@property (getter=isAutoDownloadDisabled, nonatomic, readonly) bool disableAutoDownload;
@property (nonatomic, readonly) bool disableAvailabilityAlerts;
@property (nonatomic, readonly) bool disableBuildNumberComparison;
@property (nonatomic, readonly) bool disableUserWiFiOnlyPeriod;
@property (nonatomic, readonly) int logLevel;

+ (id)sharedInstance;

- (void*)_copyPreferenceForKey:(struct __CFString { }*)arg1 ofType:(unsigned long long)arg2;
- (int)_defaultLogLevel;
- (bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (void)_loadPreferences;
- (bool)allowSameBuildUpdates;
- (void)dealloc;
- (bool)disableAvailabilityAlerts;
- (bool)disableBuildNumberComparison;
- (bool)disableUserWiFiOnlyPeriod;
- (id)init;
- (bool)isAutoDownloadDisabled;
- (int)logLevel;
- (void)reload;

@end
