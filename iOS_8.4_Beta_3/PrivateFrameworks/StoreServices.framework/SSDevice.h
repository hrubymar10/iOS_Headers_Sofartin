/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDevice : NSObject <SSRequestDelegate> {
    NSString *_appleTVProductVersion;
    double _batteryLevel;
    unsigned int _batteryMonitorNotification;
    struct IONotificationPort { } *_batteryMonitorPort;
    id _cloudMediaLibraryIdentifier;
    long long _deviceType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSKeyValueStore *_keyValueStore;
    NSString *_legacyUserAgent;
    NSString *_localStoreFrontIdentifier;
    bool _localStoreFrontIsTransient;
    id _mediaLibraryIdentifier;
    bool _pluggedIn;
    int _pluggedInToken;
    long long _powerMonitorCount;
    NSString *_productType;
    NSString *_productVersion;
    id _softwareLibraryIdentifier;
    NSString *_synchedStoreFrontIdentifier;
    NSString *_udid;
    SSURLBag *_urlBag;
    NSString *_userAgent;
}

@property(assign,readonly) NSSet * automaticDownloadKinds;
@property(assign,readonly) double batteryLevel;
@property(assign,copy) NSString * cloudMediaLibraryIdentifier;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) long long deviceType;
@property(assign,readonly) unsigned int deviceTypeIdentifier;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * legacyUserAgent;
@property(assign,copy) NSString * mediaLibraryIdentifier;
@property(assign,readonly) NSString * phoneNumber;
@property(getter=isPluggedIn,assign,readonly) bool pluggedIn;
@property(assign,readonly) NSString * productType;
@property(assign,readonly) NSString * productVersion;
@property(assign,readonly) NSString * serialNumber;
@property(assign,copy) NSString * softwareLibraryIdentifier;
@property(assign,readonly) NSString * storeFrontIdentifier;
@property(getter=isStoreFrontIdentifierTransient,assign,readonly) bool storeFrontIdentifierTransient;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSString * synchedStoreFrontIdentifier;
@property(assign,readonly) NSString * uniqueDeviceIdentifier;
@property(assign,readonly) NSString * userAgent;

+ (id)copyCachedAvailableItemKinds;
+ (id)currentDevice;
+ (bool)promptNeedsDisplay:(id)arg1;
+ (bool)setCachedAvailableItemKinds:(id)arg1;
+ (void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2;
+ (void)setPromptWithIdentifier:(id)arg1 needsDisplay:(bool)arg2;

- (id)_appleTVProductVersion;
- (void)_cacheKeyValueStoreValues;
- (id)_copyCarrierBundleEligibilityWithStatus:(id)arg1;
- (id)_copyKeyValueStoreValueForDomain:(id)arg1 key:(id)arg2;
- (id)_copyProductType;
- (int)_deviceClass;
- (long long)_deviceType;
- (long long)_deviceTypeForProductType:(id)arg1;
- (long long)_deviceTypeForUnknownAppleTV:(id)arg1;
- (long long)_deviceTypeForUnknownIPad:(id)arg1;
- (long long)_deviceTypeForUnknownIPhone:(id)arg1;
- (long long)_deviceTypeForUnknownIPod:(id)arg1;
- (id)_diskCapacityString;
- (id)_fairPlayDeviceTypeString;
- (bool)_getDeviceType:(unsigned int*)arg1 error:(id*)arg2;
- (void)_invalidateSoftwareCUID;
- (bool)_is1080pCapable;
- (bool)_is720pCapable;
- (id)_newLegacyUserAgent:(bool*)arg1;
- (id)_newModernUserAgentWithClientName:(id)arg1 version:(id)arg2 isCachable:(bool*)arg3;
- (void)_postStoreFrontDidChangeNotification;
- (id)_productVersion;
- (void)_reloadAfterStoreFrontChange;
- (void)_reloadPluggedInState;
- (bool)_setStoreFrontIdentifier:(id)arg1 isTransient:(bool)arg2;
- (void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(id)arg3;
- (void)_updateBatteryLevelFromService:(unsigned int)arg1;
- (id)_userAgentClientNameForAppleTVBundleID:(id)arg1;
- (id)_userAgentClientNameForBundleID:(id)arg1;
- (id)_userAgentClientNameForInfoPlist:(id)arg1;
- (id)automaticDownloadKinds;
- (double)batteryLevel;
- (id)carrierBundleStatusForService:(long long)arg1;
- (id)cloudMediaLibraryIdentifier;
- (id)copyStoreFrontRequestHeaders;
- (void)dealloc;
- (long long)deviceType;
- (unsigned int)deviceTypeIdentifier;
- (void)enableAllAutomaticDownloadKindsWithCompletionBlock:(id)arg1;
- (void)getAvailableItemKindsWithBlock:(id)arg1;
- (void)getCarrierBundleStatusForService:(long long)arg1 completionHandler:(id)arg2;
- (void)getCellularNetworkingAllowedWithBlock:(id)arg1;
- (bool)getMachineIdentifier:(id*)arg1 otp:(id*)arg2 forAccountIdentifier:(id)arg3;
- (id)init;
- (bool)isPluggedIn;
- (bool)isStoreFrontIdentifierTransient;
- (id)legacyUserAgent;
- (void)loadStoreFrontWithCompletionHandler:(id)arg1;
- (id)mediaLibraryIdentifier;
- (void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (id)phoneNumber;
- (id)productType;
- (id)productVersion;
- (void)reloadStoreFrontIdentifier;
- (void)resetStoreFrontForSignOut;
- (id)serialNumber;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (void)setCellularNetworkingAllowed:(bool)arg1;
- (void)setCloudMediaLibraryIdentifier:(id)arg1;
- (void)setMediaLibraryIdentifier:(id)arg1;
- (void)setSoftwareLibraryIdentifier:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 isTransient:(bool)arg3;
- (void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 isTransient:(bool)arg3;
- (void)setStoreFrontIdentifier:(id)arg1 isTransient:(bool)arg2;
- (void)setStoreFrontWithResponseHeaders:(id)arg1;
- (void)showPromptWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (id)softwareLibraryIdentifier;
- (void)startPowerMonitoring;
- (void)stopPowerMonitoring;
- (id)storeFrontIdentifier;
- (bool)supportsDeviceCapability:(long long)arg1;
- (id)synchedStoreFrontIdentifier;
- (void)synchronizeAutomaticDownloadKinds;
- (void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id)arg2;
- (id)uniqueDeviceIdentifier;
- (id)userAgent;
- (id)userAgentWithBundleIdentifier:(id)arg1 version:(id)arg2;
- (id)userAgentWithClientName:(id)arg1 version:(id)arg2;

@end