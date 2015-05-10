/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSCloudHistorySyncThrottler : NSObject {
    <WBSCloudHistorySyncThrottlerDataStore> *_dataStore;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
    double _numberOfSecondsToMonitor;
    NSMutableArray *_syncOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
}

@property(assign,retain) <WBSCloudHistorySyncThrottlerDataStore> * dataStore;

+ (id)_distributionBucketsFromConfiguration:(id)arg1;
+ (bool)policyStringRepresentsValidPolicy:(id)arg1;

- (void).cxx_destruct;
- (void)_addSyncOperationAtDate:(id)arg1;
- (double)_currentMinimumTimeIntervalBetweenSyncOperations;
- (id)_dateOfNextPermittedSyncAttemptWithNormalPriority;
- (bool)_loadDistributionConfiguration:(id)arg1;
- (void)_loadRecordOfPastSyncOperations;
- (double)_minimumTimeBetweenSyncOperationsForSyncOperations:(id)arg1;
- (void)_pruneExpiredOrInvalidSyncEntries;
- (void)_saveRecordOfPastSyncOperations;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_test_numberOfSecondsToMonitor;
- (bool)_throttlerIsActive;
- (double)_timeIntervalUntilNextPermittedSyncAttemptWithNormalPriority;
- (double)_timeIntervalUntilSyncOperationShouldBePruned:(id)arg1;
- (id)dataStore;
- (id)dateOfNextPermittedOperationWithPriority:(long long)arg1;
- (id)description;
- (id)init;
- (id)initWithPolicyString:(id)arg1;
- (void)operationWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2;
- (bool)permitsOperationWithPriority:(long long)arg1;
- (void)reloadRecordOfPastOperations;
- (void)setDataStore:(id)arg1;
- (void)setPolicyString:(id)arg1;

@end