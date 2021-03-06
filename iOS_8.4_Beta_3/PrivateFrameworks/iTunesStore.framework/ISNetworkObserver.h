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

@property (readonly) NSString *connectionTypeHeader;
@property (readonly) NSString *dataStatusIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double lastNetworkTypeChangeTime;
@property (readonly) NSString *mobileSubscriberCountryCode;
@property (readonly) NSString *mobileSubscriberNetworkCode;
@property (readonly) NSString *modemRegistrationStatus;
@property long long networkType;
@property (readonly) NSString *operatorName;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *providerName;
@property (readonly) bool shouldShowCellularAutomaticDownloadsSwitch;
@property (readonly) Class superclass;
@property (getter=isUsingNetwork, readonly) bool usingNetwork;
@property (getter=isWiFiEnabled, readonly) bool wifiEnabled;

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
