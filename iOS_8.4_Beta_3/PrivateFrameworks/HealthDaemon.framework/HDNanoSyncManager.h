/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoSyncManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDIDSMessageCenterDelegate, HDPairedWatchBundleIdentifierProvider, HDProcessStateObserver, HDSyncStore> {
    NSMutableArray *_activationCompletions;
    NSObject<OS_dispatch_source> *_activationTimer;
    HDNanoPairingRecord *_activePairingRecord;
    <HDHealthDaemon> *_healthDaemon;
    bool _isMaster;
    bool _isPairingActivated;
    NSDate *_lastPeriodicSyncDate;
    HDIDSMessageCenter *_messageCenter;
    bool _needsActivationOnUnlock;
    NSString *_pairedWatchSourceBundleIdentifier;
    HDNanoPairingPersistentInfo *_pairingInfo;
    NSObject<OS_dispatch_source> *_periodicSyncTimer;
    NSObject<OS_dispatch_queue> *_queue;
    bool _restoreDidAbort;
    long long _restoreSequenceNumber;
    NSUUID *_restoreUUID;
    long long _state;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (nonatomic, retain) NSMutableArray *activationCompletions;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *activationTimer;
@property (nonatomic, retain) HDNanoPairingRecord *activePairingRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HDHealthDaemon> *healthDaemon;
@property (readonly) bool isMaster;
@property bool isPairingActivated;
@property (nonatomic, retain) NSDate *lastPeriodicSyncDate;
@property (nonatomic, retain) HDIDSMessageCenter *messageCenter;
@property (nonatomic) bool needsActivationOnUnlock;
@property (retain) NSString *pairedWatchSourceBundleIdentifier;
@property (nonatomic, retain) HDNanoPairingPersistentInfo *pairingInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *periodicSyncTimer;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool restoreDidAbort;
@property (nonatomic) long long restoreSequenceNumber;
@property (nonatomic, retain) NSUUID *restoreUUID;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, readonly) NSString *syncStoreIdentifier;

+ (id)_companionSyncEntityClasses;
+ (id)_watchSyncEntityClasses;

- (void).cxx_destruct;
- (void)_achievementsWereAdded:(id)arg1;
- (id)_createPairingRecordWithPersistentPairingUUID:(id)arg1 healthPairingUUID:(id)arg2 didReplace:(bool*)arg3;
- (void)_deviceDidPair:(id)arg1;
- (void)_deviceDidUnpair:(id)arg1;
- (void)_didReceiveChangeRequest;
- (void)_didSendChangeRequest;
- (id)_getPairingRecordWithPersistentPairingUUID:(id)arg1;
- (id)_getRegistryPairingUUIDAndStoragePath:(id*)arg1;
- (bool)_queue_abortRestoreWithUUID:(id)arg1;
- (void)_queue_activationTimedOut;
- (void)_queue_addActivationCompletion:(id)arg1;
- (void)_queue_beginRestoreWithDeviceSourceIdentifier:(id)arg1 completion:(id)arg2;
- (void)_queue_cancelActivationTimer;
- (void)_queue_cancelPeriodicSyncTimer;
- (void)_queue_changeRequestDidFailToSendWithError:(id)arg1;
- (void)_queue_drainActivationCompletionsWithDidActivate:(bool)arg1 error:(id)arg2;
- (bool)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id*)arg1;
- (void)_queue_handleActivationRestoreRequest:(id)arg1;
- (void)_queue_handleActivationRestoreResponse:(id)arg1;
- (bool)_queue_isReadyForPairingWithError:(id*)arg1;
- (bool)_queue_isReadyForSyncWithError:(id*)arg1;
- (void)_queue_pairingDidChange;
- (void)_queue_periodicSyncTimerFired;
- (id)_queue_persistentPairingUUIDWithRegistryPairingUUID:(id)arg1 deviceSourceIdentifier:(id*)arg2;
- (void)_queue_receiveChangeRequest:(id)arg1;
- (void)_queue_receiveChangeResponse:(id)arg1;
- (void)_queue_resetPairingWithCompletion:(id)arg1;
- (void)_queue_resetRestoreAttemptWithUUID:(id)arg1;
- (void)_queue_sendActivationRestoreMessageWithRestoreUUID:(id)arg1 restores:(id)arg2 deviceSourceIdentifier:(id)arg3 sequenceNumber:(long long)arg4 statusCode:(int)arg5;
- (void)_queue_sendChange:(id)arg1 withStatus:(id)arg2 completion:(id)arg3;
- (void)_queue_sendRequest:(id)arg1;
- (void)_queue_sendResponse:(id)arg1;
- (void)_queue_setState:(long long)arg1;
- (void)_queue_setUpMessageCenterIfNecessaryWithPairedStoragePath:(id)arg1;
- (void)_queue_startActivationTimerWithTimeout:(double)arg1;
- (void)_queue_startPeriodicSyncTimerIfNecessary;
- (void)_queue_syncImmediatelyWithReason:(id)arg1 pullRequest:(bool)arg2 completion:(id)arg3;
- (void)_queue_transitionToActivatedWithPairingRecord:(id)arg1;
- (void)_queue_transitionToDeactivatedWithError:(id)arg1;
- (void)_queue_transitionToPreparingForActivationWithPersistentPairingUUID:(id)arg1 healthPairingUUID:(id)arg2 deviceSourceIdentifier:(id)arg3 activationSentHandler:(id)arg4;
- (void)_queue_updatePairingWithOptions:(unsigned long long)arg1 activationSentHandler:(id)arg2 completion:(id)arg3;
- (void)_registerForSyncTriggers;
- (void)_resetSyncAnchors;
- (void)_setPairingActivated:(bool)arg1;
- (void)_showFitnessAppIfNeeded;
- (id)_stateString;
- (void)_syncImmediatelyWithReason:(id)arg1;
- (void)_syncImmediatelyWithReason:(id)arg1 pullRequest:(bool)arg2;
- (bool)_syncQueue_applyActivationRestore:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (void)_unregisterForSyncTriggers;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)_workoutSamplesWereAssociated:(id)arg1;
- (void)activatePairingWithActivationSentHandler:(id)arg1 completion:(id)arg2;
- (id)activationCompletions;
- (id)activationTimer;
- (id)activePairingRecord;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)healthDaemon;
- (id)initWithHealthDaemon:(id)arg1 isMaster:(bool)arg2;
- (bool)isMaster;
- (bool)isPairingActivated;
- (id)lastPeriodicSyncDate;
- (id)messageCenter;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
- (void)messageCenterActivationError:(id)arg1;
- (void)messageCenterChangesError:(id)arg1;
- (void)messageCenterDidReceiveActivationRequest:(id)arg1;
- (void)messageCenterDidReceiveActivationResponse:(id)arg1;
- (void)messageCenterDidReceiveChangesRequest:(id)arg1;
- (void)messageCenterDidReceiveChangesResponse:(id)arg1;
- (bool)needsActivationOnUnlock;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)pairedWatchSourceBundleIdentifier;
- (id)pairingInfo;
- (id)periodicSyncTimer;
- (void)processDidEnterBackground:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (long long)provenance;
- (id)queue;
- (void)resetPairingWithCompletion:(id)arg1;
- (bool)restoreDidAbort;
- (long long)restoreSequenceNumber;
- (id)restoreUUID;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)sendChange:(id)arg1 withContext:(id)arg2 completion:(id)arg3;
- (void)setActivationCompletions:(id)arg1;
- (void)setActivationTimer:(id)arg1;
- (void)setActivePairingRecord:(id)arg1;
- (void)setHealthDaemon:(id)arg1;
- (void)setLastPeriodicSyncDate:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setNeedsActivationOnUnlock:(bool)arg1;
- (void)setPairedWatchSourceBundleIdentifier:(id)arg1;
- (void)setPairingInfo:(id)arg1;
- (void)setPeriodicSyncTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRestoreDidAbort:(bool)arg1;
- (void)setRestoreSequenceNumber:(long long)arg1;
- (void)setRestoreUUID:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSyncQueue:(id)arg1;
- (long long)state;
- (void)syncDidFinishWithContext:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (id)syncEntities;
- (void)syncHealthDataWithPullRequest:(bool)arg1 completion:(id)arg2;
- (unsigned long long)syncObjectLimitForEntityClass:(Class)arg1;
- (id)syncQueue;
- (id)syncStoreIdentifier;

@end
