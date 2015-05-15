/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFFuture : NSObject <MFFuture> {
    NSMutableArray *_completionBlocks;
    NSError *_error;
    id _result;
    NSConditionLock *_stateLock;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)future;

- (void)_addCompletionBlock:(id)arg1;
- (void)_flushCompletionBlocks;
- (bool)_nts_isFinished;
- (void)addFailureBlock:(id)arg1;
- (void)addSuccessBlock:(id)arg1;
- (bool)cancel;
- (void)dealloc;
- (void)didCancel;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;

@end
