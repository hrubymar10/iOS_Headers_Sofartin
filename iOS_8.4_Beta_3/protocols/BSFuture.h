/* Generated by RuntimeBrowser.
 */

@protocol BSFuture <NSObject>

@required

- (void)addFailureBlock:(id)arg1;
- (void)addSuccessBlock:(id)arg1;
- (bool)cancel;
- (bool)isCancelled;
- (bool)isFinished;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id*)arg2;

@end
