/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQueryServer : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKQueryServer> {
    <NSXPCProxyCreating> *_clientProxy;
    <HDHealthDaemon> *_daemon;
    <HDQueryServerDelegate> *_delegate;
    bool _didEndActivationTransaction;
    _HKFilter *_filter;
    NSObject<OS_dispatch_queue> *_queryQueue;
    long long _queryState;
    NSUUID *_queryUUID;
    HKSampleType *_sampleType;
    int _shouldDeactivate;
}

@property (nonatomic, readonly) <NSXPCProxyCreating> *clientProxy;
@property (nonatomic, readonly) <HDHealthDaemon> *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDQueryServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _HKFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (nonatomic) long long queryState;
@property (nonatomic, readonly) NSUUID *queryUUID;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activationTransactionString;
- (bool)_isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id*)arg2;
- (void)_pauseServerValidate:(bool)arg1 withCompletion:(id)arg2;
- (id)_predicateString;
- (id)_queryStateString;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)_queue_start;
- (void)_queue_startQueryIfNecessary;
- (void)_queue_stop;
- (void)_queue_transitionToDisabledState:(long long)arg1;
- (void)_queue_transitionToPaused;
- (void)_queue_transitionToStarted;
- (void)_queue_transitionToStopped;
- (bool)_queue_validateConfiguration:(id*)arg1;
- (void)_scheduleStartQuery;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (bool)_shouldStopProcessingQuery;
- (void)activateServerWithCompletion:(id)arg1;
- (id)clientProxy;
- (id)daemon;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)deactivateServer;
- (void)deactivateServerWithCompletion:(id)arg1;
- (id)delegate;
- (id)diagnosticDescription;
- (id)filter;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6;
- (void)onQueue:(id)arg1;
- (void)pauseServer;
- (void)pauseServerValidateWithCompletion:(id)arg1;
- (id)queryQueue;
- (long long)queryState;
- (id)queryUUID;
- (void)resumeServer;
- (id)sampleAuthorizationFilter;
- (id)sampleType;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypeWereRemoved:(id)arg1;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(id)arg1;
- (void)setQueryQueue:(id)arg1;
- (void)setQueryState:(long long)arg1;

@end
