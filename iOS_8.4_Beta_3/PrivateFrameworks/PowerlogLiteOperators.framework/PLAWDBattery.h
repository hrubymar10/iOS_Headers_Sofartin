/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDBattery : PLAWDAuxMetrics {
    PLEntryNotificationOperatorComposition *_batteryEventCallback;
    long long _batterySubmitCnt;
    long long _dispOnOffCnt;
    PLEntryNotificationOperatorComposition *_displayEventCallback;
    double _prevCapacity;
    bool _prevDeviceCharging;
    double _prevDispTimeStamp;
    bool _prevDisplayON;
    double _prevVoltage;
}

@property(assign,retain) PLEntryNotificationOperatorComposition * batteryEventCallback;
@property(assign,readwrite) long long batterySubmitCnt;
@property(assign,readwrite) long long dispOnOffCnt;
@property(assign,retain) PLEntryNotificationOperatorComposition * displayEventCallback;
@property(assign,readwrite) double prevCapacity;
@property(assign,readwrite) bool prevDeviceCharging;
@property(assign,readwrite) double prevDispTimeStamp;
@property(assign,readwrite) bool prevDisplayON;
@property(assign,readwrite) double prevVoltage;

+ (id)entryAggregateDefinitionAwdBattery;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void).cxx_destruct;
- (void)addEntryToBatteryTable:(id)arg1 withValue:(double)arg2;
- (id)batteryEventCallback;
- (long long)batterySubmitCnt;
- (long long)dispOnOffCnt;
- (id)displayEventCallback;
- (void)finalizeBatteryTable;
- (void)handleBatteryCallback:(id)arg1;
- (void)handleDisplayCallback:(id)arg1;
- (void)initBatteryStats;
- (bool)isDeviceCharging:(id)arg1;
- (double)prevCapacity;
- (bool)prevDeviceCharging;
- (double)prevDispTimeStamp;
- (bool)prevDisplayON;
- (double)prevVoltage;
- (void)processEnergyConsumedAndAddEntry:(double)arg1 withVoltage:(double)arg2;
- (void)reInitBatteryStats;
- (void)resetBatteryTable;
- (void)setBatteryEventCallback:(id)arg1;
- (void)setBatterySubmitCnt:(long long)arg1;
- (void)setDispOnOffCnt:(long long)arg1;
- (void)setDisplayEventCallback:(id)arg1;
- (void)setPrevCapacity:(double)arg1;
- (void)setPrevDeviceCharging:(bool)arg1;
- (void)setPrevDispTimeStamp:(double)arg1;
- (void)setPrevDisplayON:(bool)arg1;
- (void)setPrevVoltage:(double)arg1;
- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;

@end
