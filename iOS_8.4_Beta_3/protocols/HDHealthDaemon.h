/* Generated by RuntimeBrowser.
 */

@protocol HDHealthDaemon <NSObject>

@required

- (HDBackgroundTaskScheduler *)backgroundTaskScheduler;
- (void)beginTransaction:(NSString *)arg1;
- (bool)containsActiveWorkouts;
- (HDContentProtectionManager *)contentProtectionManager;
- (void)endTransaction:(NSString *)arg1;
- (<HDHealthDataCollectionManager> *)healthDataCollectionManager;
- (<HDHealthDataManager> *)healthDataManager;
- (<HDHealthDatabase> *)healthDatabase;
- (<HDDaemonDeviceManager> *)healthDeviceManager;
- (<HDHealthMetadataManager> *)healthMetadataManager;
- (<HDHealthSourceManager> *)healthSourceManager;
- (NSString *)homeDirectoryPath;
- (void)invalidateActivityAlertSuppressionForBundleIdentifier:(NSString *)arg1;
- (void)pauseActiveWorkoutsWithCompletion:(id)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(NSString *)arg1 transactionName:(NSString *)arg2 powerAssertionInterval:(double)arg3 block:(id)arg4;
- (bool)persistAndNotifyDataObject:(HKObject *)arg1 error:(id*)arg2;
- (HDProcessStateManager *)processStateManager;
- (void)registerForDaemonReady:(id <HDHealthDaemonReadyObserver>)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)setDataCollectionOptions:(NSDictionary *)arg1 forKey:(NSString *)arg2 type:(HKSampleType *)arg3 clientUUID:(NSUUID *)arg4;
- (void)setPairedWatchBundleIdentifierProvider:(id <HDPairedWatchBundleIdentifierProvider>)arg1;
- (void)suppressActivityAlertsForBundleIdentifier:(NSString *)arg1 reason:(long long)arg2;
- (<HDSyncEngine> *)syncEngine;
- (void)terminate;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (HDUserCharacteristicsManager *)userCharacteristicsManager;

@end