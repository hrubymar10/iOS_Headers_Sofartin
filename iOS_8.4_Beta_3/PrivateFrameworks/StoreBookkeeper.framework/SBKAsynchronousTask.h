/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKAsynchronousTask : NSObject {
    int _cancelType;
    NSMutableArray *_completions;
    NSString *_debugDescription;
    NSError *_error;
    id _expirationHandler;
    id _finishedHandler;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id _result;
    SBKTaskAssertion *_taskAssertion;
    bool _taskInvalidationDisabled;
    double _timeout;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property int cancelType;
@property (retain) NSMutableArray *completions;
@property (retain) NSError *error;
@property (copy) id expirationHandler;
@property (copy) id finishedHandler;
@property (retain) id result;
@property (retain) SBKTaskAssertion *taskAssertion;

- (void).cxx_destruct;
- (void)_invalidateAssertion:(bool)arg1;
- (void)_invalidateTimer;
- (void)_onQueueFireExpirationHandlerIfNecesary;
- (void)addTaskCompletionBlock:(id)arg1;
- (void)beginTaskOperation;
- (int)cancelType;
- (id)completions;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)endTaskOperation;
- (id)error;
- (id)expirationHandler;
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;
- (id)finishedHandler;
- (id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3;
- (void)invalidate;
- (void)invokeTaskCompletionBlocksWithBlock:(id)arg1;
- (id)result;
- (void)setCancelType:(int)arg1;
- (void)setCompletions:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExpirationHandler:(id)arg1;
- (void)setFinishedHandler:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setTaskAssertion:(id)arg1;
- (id)taskAssertion;

@end
