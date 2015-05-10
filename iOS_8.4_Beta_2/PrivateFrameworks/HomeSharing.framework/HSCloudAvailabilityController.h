/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudAvailabilityController : NSObject <HSCloudAvailability, RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    bool _canShowCloudDownloadButtons;
    bool _canShowCloudMusic;
    bool _canShowCloudVideo;
    bool _isAirplaneModeActive;
    bool _isAutoDownloadOnCellularAllowed;
    bool _isCellularDataActive;
    bool _isNetworkReachable;
    bool _isShowingAllMusic;
    bool _isShowingAllVideo;
    bool _isUpdateInProgress;
    bool _isWiFiEnabled;
    unsigned long long _networkReachabilityObservationCount;
    long long _networkType;
    int _preferencesChangedNotifyToken;
    bool _preferencesChangedNotifyTokenIsValid;
    RadiosPreferences *_radiosPreferences;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (void)_handleTelephonyNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (bool)_hasCellularCapability;
- (bool)_hasWiFiCapability;
- (bool)_isAutoDownloadOnCellularAllowed;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_onQueue_beginObservingReachabilityChanges;
- (void)_onQueue_endObservingReachabilityChanges;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(bool)arg1;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(bool)arg1;
- (void)_setNewIsNetworkReachable:(bool)arg1;
- (bool)_uncachedIsAutoDownloadOnCellularAllowed;
- (bool)_uncachedIsShowingAllMusic;
- (bool)_uncachedIsShowingAllVideo;
- (void)_wifiEnabledDidChangeNotification:(id)arg1;
- (void)airplaneModeChanged;
- (void)beginObservingNetworkReachability;
- (bool)canShowCloudDownloadButtons;
- (bool)canShowCloudMusic;
- (bool)canShowCloudVideo;
- (void)dealloc;
- (void)endObservingNetworkReachability;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (id)init;
- (bool)isCellularDataRestricted;
- (bool)isNetworkReachable;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;

@end
