/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBatteryAgent : PLAgent {
    struct __IOHIDEventSystemClient { } *_accessoryCurrentHIDRef;
    NSArray *_accessoryCurrentMatchingSensors;
    struct __IOHIDEventSystemClient { } *_accessoryVoltageHIDRef;
    NSArray *_accessoryVoltageMatchingSensors;
    bool _allowGasGaugeRead;
    PLXPCResponderOperatorComposition *_batteryInfoResponder;
    double _batteryLevelPercent;
    PLEntryNotificationOperatorComposition *_canSleepEntryNotifications;
    PLSemaphore *_canSleepSemaphore;
    bool _deviceIsPluggedIn;
    struct ggcontext { } *_gasGagueConnection;
    int _gasGaugeConsecutiveEmptyEntriesCount;
    PLNSTimerOperatorComposition *_gasGaugeTimer;
    PLIOKitOperatorComposition *_iokit;
    double _rawBatteryVoltageVolt;
    PLEntryNotificationOperatorComposition *_wakeEntryNotifications;
}

@property(assign,readwrite) struct __IOHIDEventSystemClient { }* accessoryCurrentHIDRef;
@property(assign,retain) NSArray * accessoryCurrentMatchingSensors;
@property(assign,readwrite) struct __IOHIDEventSystemClient { }* accessoryVoltageHIDRef;
@property(assign,retain) NSArray * accessoryVoltageMatchingSensors;
@property(assign,readwrite) bool allowGasGaugeRead;
@property(assign,retain) PLXPCResponderOperatorComposition * batteryInfoResponder;
@property(assign,readwrite) double batteryLevelPercent;
@property(assign,readonly) PLEntryNotificationOperatorComposition * canSleepEntryNotifications;
@property(assign,retain) PLSemaphore * canSleepSemaphore;
@property(assign,readwrite) bool deviceIsPluggedIn;
@property(assign,readwrite) struct ggcontext { }* gasGagueConnection;
@property(assign,readwrite) int gasGaugeConsecutiveEmptyEntriesCount;
@property(assign,retain) PLNSTimerOperatorComposition * gasGaugeTimer;
@property(assign,readonly) PLIOKitOperatorComposition * iokit;
@property(assign,readwrite) double rawBatteryVoltageVolt;
@property(assign,readonly) PLEntryNotificationOperatorComposition * wakeEntryNotifications;

+ (id)defaults;
+ (id)entryEventBackwardDefinitionBattery;
+ (id)entryEventBackwardDefinitionBatteryUI;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionGasGauge;
+ (id)entryEventIntervalDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (struct __IOHIDEventSystemClient { }*)accessoryCurrentHIDRef;
- (id)accessoryCurrentMatchingSensors;
- (double)accessorySensorReadingForType:(short)arg1;
- (struct __IOHIDEventSystemClient { }*)accessoryVoltageHIDRef;
- (id)accessoryVoltageMatchingSensors;
- (bool)allowGasGaugeRead;
- (id)batteryInfoResponder;
- (double)batteryLevelPercent;
- (id)canSleepEntryNotifications;
- (id)canSleepSemaphore;
- (void)dealloc;
- (bool)deviceIsPluggedIn;
- (struct ggcontext { }*)gasGagueConnection;
- (int)gasGaugeConsecutiveEmptyEntriesCount;
- (bool)gasGaugeOpenAndStartLogging;
- (void)gasGaugeRead;
- (bool)gasGaugeStopLoggingAndClose;
- (id)gasGaugeTimer;
- (bool)givePluggedInFreePass;
- (id)init;
- (void)initOperatorDependancies;
- (void)initializeAccessoryIOHIDForType:(short)arg1;
- (id)iokit;
- (void)log;
- (void)logEventBackwardBattery;
- (void)logEventIntervalGasGauge;
- (id)railGasGuage;
- (double)rawBatteryVoltageVolt;
- (void)setAccessoryCurrentHIDRef:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setAccessoryCurrentMatchingSensors:(id)arg1;
- (void)setAccessoryVoltageHIDRef:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setAccessoryVoltageMatchingSensors:(id)arg1;
- (void)setAllowGasGaugeRead:(bool)arg1;
- (void)setBatteryInfoResponder:(id)arg1;
- (void)setBatteryLevelPercent:(double)arg1;
- (void)setCanSleepSemaphore:(id)arg1;
- (void)setDeviceIsPluggedIn:(bool)arg1;
- (void)setGasGagueConnection:(struct ggcontext { }*)arg1;
- (void)setGasGaugeConsecutiveEmptyEntriesCount:(int)arg1;
- (void)setGasGaugeTimer:(id)arg1;
- (void)setRawBatteryVoltageVolt:(double)arg1;
- (id)trimmingConditionsForRolloverAtDate:(id)arg1;
- (id)wakeEntryNotifications;

@end
