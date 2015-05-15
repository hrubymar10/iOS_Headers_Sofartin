/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSSchedulerBase : NSObject <BRCLifeCycle> {
    bool _hasActiveWork;
    bool _hasWork;
    NSObject<OS_dispatch_group> *_hasWorkGroup;
    bool _isCancelled;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_schedulerQueue;
    BRCDeadlineToken *_schedulerToken;
    BRCAccountSession *_session;
    PQLNameInjection *_tableName;
}

@property (readonly) bool closed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasActiveWork;
@property (nonatomic) bool hasWork;
@property (retain) NSObject<OS_dispatch_group> *hasWorkGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCancelled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canRetryThrottleID:(long long)arg1 zone:(id)arg2;
- (void)_close;
- (void)_computeStamps:(struct throttle_stamps { unsigned int x1; int x2; long long x3; long long x4; long long x5; }*)arg1 throttleID:(long long)arg2 zone:(id)arg3 throttle:(id)arg4 hasBeenTried:(bool)arg5;
- (void)_deleteThrottleID:(long long)arg1 zone:(id)arg2;
- (void)_describe:(id)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (id)_initWithSession:(id)arg1 name:(id)arg2 tableName:(id)arg3;
- (void)_schedule;
- (void)_scheduleDone:(long long)arg1 nextWork:(long long)arg2;
- (void)_signalForNextWork:(long long)arg1;
- (long long)_updateStamps:(struct throttle_stamps { unsigned int x1; int x2; long long x3; long long x4; long long x5; }*)arg1 throttle:(id)arg2 now:(long long)arg3;
- (void)cancel;
- (void)close;
- (bool)closed;
- (void)deleteExpiredThrottles;
- (void)deleteThrottlesForZone:(id)arg1;
- (id)descriptionForThrottleID:(long long)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4;
- (id)descriptionForZone:(id)arg1 now:(long long)arg2 context:(id)arg3;
- (bool)hasActiveWork;
- (bool)hasWork;
- (id)hasWorkGroup;
- (bool)isCancelled;
- (void)resume;
- (void)setHasActiveWork:(bool)arg1;
- (void)setHasWork:(bool)arg1;
- (void)setHasWorkGroup:(id)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)suspend;
- (void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;

@end
