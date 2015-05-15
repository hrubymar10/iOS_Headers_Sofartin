/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBLDService : PLService {
    double _appBreakdownThresholdPercent;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    NSDictionary *_nonAppBundleIDsWhitelist;
    PLNSTimerOperatorComposition *_runLoggingTimer;
    PLXPCResponderOperatorComposition *_xpcResponderUIBattery;
    PLXPCResponderOperatorComposition *_xpcResponderUIBatteryForModels;
}

@property (readonly) double appBreakdownThresholdPercent;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (readonly) NSDictionary *nonAppBundleIDsWhitelist;
@property (retain) PLNSTimerOperatorComposition *runLoggingTimer;
@property (retain) PLXPCResponderOperatorComposition *xpcResponderUIBattery;
@property (retain) PLXPCResponderOperatorComposition *xpcResponderUIBatteryForModels;

+ (id)defaults;
+ (id)entryEventPointBUILogging;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)TestQuery:(id)arg1;
- (id)UIQueryResponse:(id)arg1;
- (id)UIQueryResponseForModels:(id)arg1;
- (void)addToDaemonTransformation:(id)arg1 withPluginEntry:(id)arg2;
- (void)addToDaemonTransformationForGizmo:(id)arg1;
- (id)aggregateResult:(id)arg1 withBucketLength:(double)arg2 inTimeIntervalRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg3 queryType:(int)arg4 withValidBundle:(id)arg5 withDeletedApps:(id)arg6 withWebApps:(id)arg7 withDaemonTransformation:(id)arg8;
- (id)aggregateStatsResultWithBucketLength:(double)arg1 inTimeIntervalRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2;
- (double)appBreakdownThresholdPercent;
- (int)appTypeForBundleID:(id)arg1 withValidBundles:(id)arg2 withDeletedApps:(id)arg3 withWebApps:(id)arg4;
- (void)bldRetailResponse:(id)arg1 withValidBundle:(id)arg2 withDeletedApps:(id)arg3 withWebApps:(id)arg4 withDaemonTransformation:(id)arg5;
- (id)bldRetailResponseForRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withArgs:(id)arg2 withValidBundle:(id)arg3 withDeletedApps:(id)arg4 withWebApps:(id)arg5 withDaemonTransformation:(id)arg6;
- (id)combineAndTrimAppQualifiersArray:(id)arg1;
- (id)combineEntitiesInArray:(id)arg1 withTransformation:(id)arg2;
- (id)daemonTransformation;
- (id)dailyTaskNotification;
- (id)deletedAppNameForBundleID:(id)arg1;
- (id)deletedAppSet;
- (void)fetchAggregateResultsInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (double)getAppBreakdownThreshold;
- (id)getBatteryDrainInRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg1;
- (id)getEntryForBundleName:(id)arg1 inAppArray:(id)arg2;
- (id)init;
- (void)initNonAppBundleIDsWhitelist;
- (void)initOperatorDependancies;
- (bool)isALSON;
- (bool)isStringAValidBundleName:(id)arg1;
- (bool)isStringAValidName:(id)arg1;
- (void)logEventPointBUI;
- (void)logEventPointBUIForBLDRetail:(bool)arg1;
- (void)logEventPointBUIWithUIData:(id)arg1 forBLDRetailData:(bool)arg2;
- (id)nonAppBundleIDsWhitelist;
- (void)qualifierTesting;
- (bool)qualifierThresholdPass:(id)arg1 withQualifierRules:(id)arg2 forQualifierEntryKey:(id)arg3;
- (id)reaccountExchangeEntries:(id)arg1;
- (id)recommendSetting:(double)arg1 inTimeIntervalRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2;
- (id)reviseAppEnergyBreakdown:(id)arg1 withSumOfEnergyPercent:(int)arg2;
- (id)runLoggingTimer;
- (id)screenLock:(id)arg1;
- (void)setDailyTaskNotification:(id)arg1;
- (bool)setQualifier:(int)arg1 onBundle:(id)arg2;
- (void)setQualifiersForAppArray:(id)arg1 withTotalEnergy:(double)arg2;
- (void)setRunLoggingTimer:(id)arg1;
- (void)setXpcResponderUIBattery:(id)arg1;
- (void)setXpcResponderUIBatteryForModels:(id)arg1;
- (bool)shouldAppBeDisplayed:(int)arg1 forQuery:(int)arg2;
- (void)storeBLDRetailResponse:(struct _PLTimeIntervalRange { double x1; double x2; })arg1 withArgs:(id)arg2 withKey:(id)arg3 withValidBundle:(id)arg4 withDeletedApps:(id)arg5 withWebApps:(id)arg6 withDaemonTransformation:(id)arg7;
- (double)totalEnergyReturned:(id)arg1;
- (void)trimQualifiers:(id)arg1 combineOne:(id)arg2 combineTwo:(id)arg3 combineInto:(id)arg4;
- (void)trimQualifiers:(id)arg1 removeQualifier:(id)arg2 ifQualifierPresent:(id)arg3;
- (id)webAppSet;
- (id)xpcResponderUIBattery;
- (id)xpcResponderUIBatteryForModels;

@end
