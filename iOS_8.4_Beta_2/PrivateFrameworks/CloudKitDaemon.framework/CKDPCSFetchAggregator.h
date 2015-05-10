/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSFetchAggregator : NSObject {
    CKDClientContext *_context;
    NSObject<OS_dispatch_queue> *_opQueue;
    NSOperationQueue *_queue;
    NSMutableArray *_queuedFetches;
    NSMutableArray *_runningFetches;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property(assign,readwrite) CKDClientContext * context;
@property(assign,retain) NSObject<OS_dispatch_queue> * opQueue;
@property(assign,retain) NSOperationQueue * queue;
@property(assign,retain) NSMutableArray * queuedFetches;
@property(assign,retain) NSMutableArray * runningFetches;
@property(assign,retain) NSObject<OS_dispatch_source> * timerSource;

- (void).cxx_destruct;
- (void)_lockedFireReadyQueuedFetches;
- (id)_lockedGetQueuedFetchForOperation:(id)arg1 ofClass:(Class)arg2;
- (void)_lockedRescheduleQueuedFetchesTimer;
- (id)context;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)opQueue;
- (id)queue;
- (id)queuedFetches;
- (void)requestFetchOfRecordWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id)arg3;
- (void)requestFetchOfShareWithID:(id)arg1 forOperation:(id)arg2 withCompletionHandler:(id)arg3;
- (id)runningFetches;
- (void)setContext:(id)arg1;
- (void)setOpQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueuedFetches:(id)arg1;
- (void)setRunningFetches:(id)arg1;
- (void)setTimerSource:(id)arg1;
- (id)timerSource;

@end