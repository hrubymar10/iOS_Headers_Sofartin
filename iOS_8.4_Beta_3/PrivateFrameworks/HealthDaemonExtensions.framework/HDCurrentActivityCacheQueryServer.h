/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemonExtensions.framework/HealthDaemonExtensions
 */

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {
    HDActivityCacheManager *_activityCacheManager;
    double _createdTime;
    double _firstResultsTime;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2 updatedFields:(unsigned long long)arg3 error:(id)arg4;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 activityCacheManager:(id)arg7;

@end