/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate> {
    void *_currentNetwork;
    NSHashTable *_delegateMap;
    void *_dynamicStore;
    bool _isHostingHotSpot;
    bool _isPrimaryCellularCached;
    bool _isWakeOnWiFiEnabled;
    bool _isWakeOnWiFiSupported;
    bool _isWifiEnabled;
    NSDictionary *_lastWiFiPowerInfo;
    int _linkToken;
    NSRecursiveLock *_lock;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSObject<OS_dispatch_queue> *_scUpdateQueue;
    bool _shouldAutoAssociateAsForeground;
    NSMutableSet *_wiFiAutoAssociationTokens;
    void *_wifiDevice;
    void *_wifiManager;
    NSRunLoop *_wifiRunLoop;
    NSThread *_wifiThread;
    NSHashTable *_wowClients;
}

@property(assign,readonly) bool autoAssociateWiFi;
@property(assign,readwrite) bool autoAssociateWiFiAsForegroundClient;
@property(assign,readwrite) void* currentNetwork;
@property(assign,retain) NSString * currentSSID;
@property(assign,copy) NSString * debugDescription;
@property(assign,retain) NSHashTable * delegateMap;
@property(assign,copy) NSString * description;
@property(assign,readwrite) void* dynamicStore;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isHostingWiFiHotSpot;
@property(assign,readwrite) bool isPrimaryCellularCached;
@property(assign,readonly) bool isWiFiAssociated;
@property(assign,readonly) bool isWiFiCaptive;
@property(assign,readonly) bool isWiFiEnabled;
@property(assign,readonly) bool isWoWEnabled;
@property(assign,readonly) bool isWoWSupported;
@property(assign,copy) NSDictionary * lastWiFiPowerInfo;
@property(assign,readwrite) int linkToken;
@property(assign,retain) NSRecursiveLock * lock;
@property(assign,readwrite) struct __CFRunLoopSource { }* runLoopSource;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * scUpdateQueue;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSMutableSet * wiFiAutoAssociationTokens;
@property(assign,retain) NSNumber * wiFiScaledRSSI;
@property(assign,retain) NSNumber * wiFiScaledRate;
@property(assign,retain) NSNumber * wiFiSignalStrength;
@property(assign,readwrite) void* wifiDevice;
@property(assign,readwrite) void* wifiManager;
@property(assign,retain) NSRunLoop * wifiRunLoop;
@property(assign,retain) NSThread * wifiThread;
@property(assign,readonly) bool willTryToAutoAssociateWiFiNetwork;
@property(assign,readonly) bool willTryToSearchForWiFiNetwork;
@property(assign,retain) NSHashTable * wowClients;

+ (id)sharedInstance;

- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWoWState;
- (void)_createDynamicStore;
- (void)_createWiFiManager;
- (void)_handleDeviceAttachedCallback;
- (void)_handleDevicePowerCallback;
- (void)_handlePotentialDeviceChange:(struct __WiFiDeviceClient { }*)arg1;
- (bool)_isPrimaryCellular;
- (void)_performBackgroundInit;
- (void)_performCurrentNetworkBlock:(id)arg1;
- (void)_performCurrentNetworkBlock:(id)arg1 withDevice:(struct __WiFiDeviceClient { }*)arg2;
- (void)_performCurrentNetworkBlock:(id)arg1 withDevice:(struct __WiFiDeviceClient { }*)arg2 async:(bool)arg3;
- (void)_performDeviceBlock:(id)arg1;
- (void)_performDeviceBlock:(id)arg1 useCache:(bool)arg2;
- (void)_performPowerReading;
- (void)_setCurrentNetwork:(struct __WiFiNetwork { }*)arg1;
- (id)_ssidFromNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_threadedMain;
- (void)_updateIsWiFiAssociatedAsync:(bool)arg1;
- (void)_updateIsWiFiEnabled;
- (double)_wifiMeasurementErrorForInterval:(double)arg1;
- (void)addDelegate:(id)arg1;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (void)addWoWClient:(id)arg1;
- (bool)autoAssociateWiFi;
- (bool)autoAssociateWiFiAsForegroundClient;
- (void*)currentNetwork;
- (id)currentSSID;
- (void)currentWiFiNetworkPowerUsageWithCompletion:(id)arg1;
- (void)dealloc;
- (id)delegateMap;
- (void*)dynamicStore;
- (bool)hasWiFiAutoAssociationClientToken:(id)arg1;
- (bool)hasWoWClient:(id)arg1;
- (id)init;
- (bool)isHostingWiFiHotSpot;
- (bool)isPrimaryCellularCached;
- (bool)isWiFiAssociated;
- (bool)isWiFiCaptive;
- (bool)isWiFiEnabled;
- (bool)isWoWEnabled;
- (bool)isWoWSupported;
- (id)lastWiFiPowerInfo;
- (int)linkToken;
- (id)lock;
- (void)removeDelegate:(id)arg1;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)removeWoWClient:(id)arg1;
- (struct __CFRunLoopSource { }*)runLoopSource;
- (id)scUpdateQueue;
- (void)setAutoAssociateWiFiAsForegroundClient:(bool)arg1;
- (void)setCurrentNetwork:(void*)arg1;
- (void)setDelegateMap:(id)arg1;
- (void)setDynamicStore:(void*)arg1;
- (void)setIsPrimaryCellularCached:(bool)arg1;
- (void)setLastWiFiPowerInfo:(id)arg1;
- (void)setLinkToken:(int)arg1;
- (void)setLock:(id)arg1;
- (void)setRunLoopSource:(struct __CFRunLoopSource { }*)arg1;
- (void)setScUpdateQueue:(id)arg1;
- (void)setWiFiAutoAssociationTokens:(id)arg1;
- (void)setWifiDevice:(void*)arg1;
- (void)setWifiManager:(void*)arg1;
- (void)setWifiRunLoop:(id)arg1;
- (void)setWifiThread:(id)arg1;
- (void)setWowClients:(id)arg1;
- (void)showNetworkOptions;
- (id)wiFiAutoAssociationTokens;
- (id)wiFiScaledRSSI;
- (id)wiFiScaledRate;
- (id)wiFiSignalStrength;
- (void*)wifiDevice;
- (void*)wifiManager;
- (id)wifiRunLoop;
- (id)wifiThread;
- (bool)willTryToAutoAssociateWiFiNetwork;
- (bool)willTryToSearchForWiFiNetwork;
- (id)wowClients;

@end
