/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIModel : NSObject <FIUIAchievementsModelDelegate> {
    FIUIAchievementsModel *_achievementsModel;
    NSObject<OS_dispatch_queue> *_activityCacheQueryClientQueue;
    NSMutableDictionary *_currentActivityQueryClients;
    HKHealthStore *_healthStore;
    NSHashTable *_observers;
    long long _queue_activityCacheQueryRetries;
    HKActivityCache *_queue_currentActivityCacheForClients;
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;
    NSPredicate *_sourcesPredicate;
    NSObject<OS_dispatch_queue> *_sourcesQueue;
    FIUIWeeklyGoalModel *_weeklyGoalModel;
}

@property(assign,readonly) FIUIAchievementsModel * achievementsModel;
@property(assign,readonly) double arcPercentPerHour;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSPredicate * sourcesPredicate;
@property(assign,readonly) Class superclass;
@property(assign,readonly) FIUIWeeklyGoalModel * weeklyGoalModel;

+ (id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(bool)arg5 handler:(id)arg6;
+ (void)_fakeActiveAndGoalHoursDataWithCompletion:(id)arg1;
+ (id)_fakeCollectionForUnit:(id)arg1;
+ (id)_statisticsCollectionQueryFromDate:(id)arg1 toDate:(id)arg2 intervalSize:(id)arg3 dataType:(id)arg4 predicate:(id)arg5 sendUpdates:(bool)arg6 handler:(id)arg7;
+ (id)_unitForDataType:(id)arg1;
+ (id)activeAndIdleAndGoalHoursSampleQueryForDate:(id)arg1 predicate:(id)arg2 needsHourlyChartInfo:(bool)arg3 withCompletion:(id)arg4;
+ (id)activeAndIdleAndGoalHoursSampleQueryFromDate:(id)arg1 toDate:(id)arg2 predicate:(id)arg3 needsHourlyChartInfo:(bool)arg4 withCompletion:(id)arg5;
+ (id)activeAndIdleHoursObserverQueryForDate:(id)arg1 predicate:(id)arg2 withCompletion:(id)arg3;
+ (id)activeAndIdleHoursObserverQueryFromDate:(id)arg1 toDate:(id)arg2 predicate:(id)arg3 withCompletion:(id)arg4;
+ (id)activeHourQuantityType;
+ (id)activeHourUnit;
+ (id)briskActivityQuantityType;
+ (id)briskActivityUnit;
+ (id)calorieQuantityType;
+ (id)calorieUnit;
+ (id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(bool)arg4 handler:(id)arg5;
+ (id)dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(bool)arg5 handler:(id)arg6;
+ (id)distanceQuantityType;
+ (id)distanceUnit;
+ (id)statisticsCollectionQueryForDate:(id)arg1 intervalSize:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(bool)arg5 handler:(id)arg6;
+ (id)statisticsCollectionQueryFromDate:(id)arg1 toDate:(id)arg2 intervalSize:(id)arg3 dataType:(id)arg4 predicate:(id)arg5 sendUpdates:(bool)arg6 handler:(id)arg7;
+ (id)stepQuantityType;
+ (id)stepUnit;

- (void).cxx_destruct;
- (id)_createCurrentActivityCacheQuery;
- (void)_printStatisticsCollection:(id)arg1;
- (void)_printUpdatedStatistics:(id)arg1;
- (void)_queue_restartCurrentActivityCacheQueryAfterError;
- (void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2;
- (void)_sendMessageToObservers:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)_setKnownSources:(id)arg1;
- (void)achievementsDidChangeInModel:(id)arg1;
- (id)achievementsModel;
- (void)addObserver:(id)arg1;
- (double)arcPercentPerHour;
- (void)executeQuery:(id)arg1;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)sourcesPredicate;
- (id)startCurrentActivityCacheQueryWithHandler:(id)arg1;
- (void)stopCurrentActivityCacheQueryForClientToken:(id)arg1;
- (void)stopQuery:(id)arg1;
- (id)weeklyGoalModel;

@end