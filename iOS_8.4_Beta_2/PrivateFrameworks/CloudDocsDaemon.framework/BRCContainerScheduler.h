/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCLocalContainerDelegate> {
    BRCContainerMetadataSyncPersistedState *_containerMetadataPersistedState;
    struct _BRCOperation { Class x1; id x2; int x3; int x4; id x5; unsigned char x6[16]; } *_containerMetadataSyncOperation;
    unsigned int _containerMetadataSyncState;
    BRCDeadlineToken *_containerMetadataSyncToken;
    NSString *_environmentName;
    NSObject<OS_dispatch_group> *_initialSyncDownGroup;
    struct _BRCOperation { Class x1; id x2; int x3; int x4; id x5; unsigned char x6[16]; } *_periodicSyncOperation;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushQueue;
    NSObject<OS_dispatch_source> *_pushSource;
    BRCAccountSession *_session;
    struct _BRCOperation { Class x1; id x2; int x3; int x4; id x5; unsigned char x6[16]; } *_sharedDatabaseSyncOperation;
    BRCDeadlineToken *_sharedDatabaseSyncToken;
    NSObject<OS_dispatch_group> *_syncGroup;
    BRCDeadlineScheduler *_syncScheduler;
    BRCSyncBudgetThrottle *_syncUpBudget;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSObject<OS_dispatch_group> * initialSyncDownGroup;
@property(assign,readonly) BRCAccountSession * session;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSObject<OS_dispatch_group> * syncGroup;
@property(assign,readonly) BRCDeadlineScheduler * syncScheduler;
@property(assign,readonly) BRCSyncBudgetThrottle * syncUpBudget;

- (void).cxx_destruct;
- (void)_automaticSyncSchedule:(id)arg1;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)_syncScheduleForContainersMetadata;
- (void)_syncScheduleForSharedDatabase;
- (void)_unscheduleContainer:(id)arg1;
- (void)_updatePushTopicsRegistration;
- (void)close;
- (void)closeContainers:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)containerDidBecomeBackground:(id)arg1;
- (void)containerDidBecomeForeground:(id)arg1;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)didInitialSyncDownForContainer:(id)arg1;
- (void)didSyncDownSharedDatabase;
- (void)dumpToContext:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (id)initialSyncDownGroup;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (void)scheduleSyncDownForContainerMetadata;
- (void)scheduleSyncDownForSharedDatabaseImmediately:(bool)arg1;
- (id)session;
- (void)setupWithRoot:(id)arg1;
- (id)syncGroup;
- (void)syncResume;
- (id)syncScheduler;
- (void)syncSuspend;
- (id)syncUpBudget;
- (void)willInitialSyncDownForContainer:(id)arg1;

@end
