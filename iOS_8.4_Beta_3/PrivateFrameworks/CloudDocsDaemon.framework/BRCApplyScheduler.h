/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule> {
    bool _applyCountReachedMax;
    BRCCountedSet *_coordinatedWriters;
    NSMutableSet *_watchingFaults;
    NSObject<OS_dispatch_group> *_writerGroup;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isCancelled;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSObject<OS_dispatch_group> * writerGroup;

- (void).cxx_destruct;
- (void)_close;
- (void)_describe:(id)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (void)_handleWatchingFaults;
- (void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 kind:(unsigned int)arg3;
- (void)_schedule;
- (bool)_scheduleOne:(id)arg1;
- (unsigned long long)_writeCoordinationCount;
- (void)createThrottleID:(long long)arg1 zone:(id)arg2 itemID:(id)arg3 state:(int)arg4 kind:(unsigned int)arg5;
- (void)deleteExpiredThrottles;
- (void)didCreateMissingParentID:(id)arg1 zone:(id)arg2;
- (void)didReparentOrKillItemID:(id)arg1 parentItemID:(id)arg2 zone:(id)arg3;
- (void)didSyncDownZone:(id)arg1 requestID:(unsigned long long)arg2 upToRank:(long long)arg3 caughtUpWithServer:(bool)arg4;
- (void)endWriteCoordinationInZone:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (void)monitorFaultingForContainer:(id)arg1;
- (void)repopulateThrottlesForZone:(id)arg1;
- (void)rescheduleSuspendedThrottlesForZone:(id)arg1 state:(int)arg2;
- (bool)startWriteCoordinationInZone:(id)arg1;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 kind:(unsigned int)arg4;
- (id)writerGroup;

@end