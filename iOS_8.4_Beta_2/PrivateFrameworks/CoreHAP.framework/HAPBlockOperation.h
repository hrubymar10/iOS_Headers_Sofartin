/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBlockOperation : NSBlockOperation {
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,retain) NSError * error;
@property(assign,retain) NSObject<OS_dispatch_semaphore> * finishedSemaphore;
@property(assign,readonly) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)_cancelWithError:(id)arg1;
- (id)_error;
- (void)_finish;
- (id)_finishedSemaphore;
- (bool)_isCancelled;
- (bool)_isExecuting;
- (bool)_isFinished;
- (void)_setError:(id)arg1;
- (void)_setFinishedSemaphore:(id)arg1;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)error;
- (void)finish;
- (id)finishedSemaphore;
- (id)init;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setError:(id)arg1;
- (void)setFinishedSemaphore:(id)arg1;
- (void)start;
- (id)workQueue;

@end
