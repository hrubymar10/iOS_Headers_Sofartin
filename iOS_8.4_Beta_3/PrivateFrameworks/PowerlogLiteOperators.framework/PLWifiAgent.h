/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLWifiAgent : PLAgent {
    unsigned long long _autoJoinScanDuration;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLEntryNotificationOperatorComposition *_deviceWake;
    unsigned long long _lastLoggedTimestamp;
    unsigned long long _locationScanDuration;
    PLCFNotificationOperatorComposition *_notificationWiFiChanged;
    unsigned long long _pipelineScanDuration;
    unsigned long long _setupScanDuration;
    unsigned long long _unknownScanDuration;
    NSString *_wifiChipset;
    struct __WiFiDeviceClient { } *_wifiDevice;
    struct __WiFiManagerClient { } *_wifiManager;
    NSString *_wifiManufacturer;
}

@property(assign,readwrite) unsigned long long autoJoinScanDuration;
@property(assign,retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;
@property(assign,retain) PLEntryNotificationOperatorComposition * deviceWake;
@property(assign,readwrite) unsigned long long lastLoggedTimestamp;
@property(assign,readwrite) unsigned long long locationScanDuration;
@property(assign,readonly) PLCFNotificationOperatorComposition * notificationWiFiChanged;
@property(assign,readwrite) unsigned long long pipelineScanDuration;
@property(assign,readwrite) unsigned long long setupScanDuration;
@property(assign,readwrite) unsigned long long unknownScanDuration;
@property(assign,readonly) NSString * wifiChipset;
@property(assign,readwrite) struct __WiFiDeviceClient { }* wifiDevice;
@property(assign,readwrite) struct __WiFiManagerClient { }* wifiManager;
@property(assign,readonly) NSString * wifiManufacturer;

+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitionCumulativeBasic;
+ (id)entryEventBackwardDefinitionDiffBasic;
+ (id)entryEventBackwardDefinitionUserScan;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionAvailability;
+ (id)entryEventForwardDefinitionModuleInfo;
+ (id)entryEventForwardDefinitionRSSI;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionWake;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (unsigned long long)autoJoinScanDuration;
- (id)batteryLevelChanged;
- (id)decodeWifiEventLinkReason:(unsigned int)arg1;
- (id)deviceWake;
- (void)findWifiDevice;
- (unsigned long long)getCurrentChannelWidth:(struct __WiFiNetwork { }*)arg1;
- (bool)hasWiFi;
- (id)init;
- (void)initOperatorDependancies;
- (bool)isWiFiPowered;
- (bool)isWowEnabled;
- (bool)isWowSupported;
- (unsigned long long)lastLoggedTimestamp;
- (unsigned long long)locationScanDuration;
- (void)log;
- (void)logEventBackwardCumulativeProperties;
- (void)logEventBackwardDiffProperties;
- (void)logEventBackwardUserScanDuration;
- (void)logEventBackwardWifiProperties;
- (void)logEventBackwardWifiProperties:(id)arg1 withNetworkProperties:(id)arg2;
- (void)logEventForwardAvailability:(id)arg1;
- (void)logEventForwardModuleInfo;
- (void)logEventForwardRSSI:(id)arg1;
- (void)logEventPointWake;
- (void)logEventPointWakeDataFrame:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3;
- (void)logEventPointWakeLink:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3;
- (void)logEventPointWakePNO:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3;
- (void)logonAPSleep;
- (void)modelWiFiPower:(id)arg1;
- (id)notificationWiFiChanged;
- (unsigned long long)pipelineScanDuration;
- (id)railWiFi;
- (void)setAutoJoinScanDuration:(unsigned long long)arg1;
- (void)setBatteryLevelChanged:(id)arg1;
- (void)setDeviceWake:(id)arg1;
- (void)setLastLoggedTimestamp:(unsigned long long)arg1;
- (void)setLocationScanDuration:(unsigned long long)arg1;
- (void)setPipelineScanDuration:(unsigned long long)arg1;
- (void)setSetupScanDuration:(unsigned long long)arg1;
- (void)setUnknownScanDuration:(unsigned long long)arg1;
- (void)setWifiDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)setWifiManager:(struct __WiFiManagerClient { }*)arg1;
- (unsigned long long)setupScanDuration;
- (unsigned long long)unknownScanDuration;
- (void)updateEventBackwardUserScanDuration:(id)arg1;
- (id)wifiChipset;
- (id)wifiChipsetQuery;
- (struct __WiFiDeviceClient { }*)wifiDevice;
- (struct __WiFiManagerClient { }*)wifiManager;
- (id)wifiManufacturer;
- (id)wifiManufacturerQuery;

@end
