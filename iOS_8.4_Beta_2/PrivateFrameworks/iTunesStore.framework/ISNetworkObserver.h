/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver> {
    NSString *_dataStatusIndicator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    bool _isCellularRestricted;
    double _lastNetworkTypeChangeTime;
    long long _networkType;
    long long _networkUsageCount;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_observedDownloadQueues;
    NSString *_operatorName;
    struct __SCNetworkReachability { } *_reachability;
    NSString *_registrationStatus;
    struct __CTServerConnection { } *_telephonyServer;
}

@property(assign,readonly) NSString * connectionTypeHeader;
@property(assign,readonly) NSString * dataStatusIndicator;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) double lastNetworkTypeChangeTime;
@property(assign,readonly) NSString * mobileSubscriberCountryCode;
@property(assign,readonly) NSString * mobileSubscriberNetworkCode;
@property(assign,readonly) NSString * modemRegistrationStatus;
@property(assign,readwrite) long long networkType;
@property(assign,readonly) NSString * operatorName;
@property(assign,readonly) NSString * phoneNumber;
@property(assign,readonly) NSString * providerName;
@property(assign,readonly) bool shouldShowCellularAutomaticDownloadsSwitch;
@property(assign,readonly) Class superclass;
@property(getter=isUsingNetwork,assign,readonly) bool usingNetwork;
@property(getter=isWiFiEnabled,assign,readonly) bool wifiEnabled;

+ (void)set3GEnabled:(bool)arg1;
+ (void)setAirplaneModeEnabled:(bool)arg1;
+ (void)setWiFiEnabled:(bool)arg1;
+ (id)sharedInstance;

- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (long long)_currentNetworkType;
- (id)_dataStatusIndicator;
- (void)_handleTelephonyNotificationWithName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2;
- (long long)_networkTypeForReachabilityFlags:(unsigned int)arg1;
- (long long)_networkTypeFromDataIndicator:(id)arg1;
- (bool)_ntsIsUsingNetwork;
- (void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2;
- (void)_postUsageChangedToValue:(bool)arg1;
- (void)_reloadCellularRestriction;
- (void)_reloadNetworkType;
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)arg1;
- (long long)_setNetworkType:(long long)arg1;
- (void)beginObservingDownloadQueue:(id)arg1;
- (void)beginUsingNetwork;
- (id)connectionTypeHeader;
- (id)copyValueForCarrierBundleKey:(id)arg1;
- (id)dataStatusIndicator;
- (void)dealloc;
- (void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;
- (void)downloadQueueNetworkUsageChanged:(id)arg1;
- (void)endObservingDownloadQueue:(id)arg1;
- (void)endUsingNetwork;
- (id)init;
- (bool)isCellularDataEnabledForBundleIdentifier:(id)arg1;
- (bool)isUsingNetwork;
- (bool)isWiFiEnabled;
- (double)lastNetworkTypeChangeTime;
- (id)mobileSubscriberCountryCode;
- (id)mobileSubscriberNetworkCode;
- (id)modemRegistrationStatus;
- (long long)networkType;
- (id)operatorName;
- (id)phoneNumber;
- (id)providerName;
- (void)reloadNetworkType;
- (void)setNetworkType:(long long)arg1;
- (bool)shouldShowCellularAutomaticDownloadsSwitch;

@end
