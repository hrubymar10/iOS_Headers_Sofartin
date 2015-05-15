/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserQuotaOperation : CKDatabaseOperation {
    id _fetchUserQuotaCompletionBlock;
    unsigned long long _quotaAvailable;
}

@property (nonatomic, copy) id fetchUserQuotaCompletionBlock;
@property (nonatomic) unsigned long long quotaAvailable;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (id)fetchUserQuotaCompletionBlock;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (unsigned long long)quotaAvailable;
- (void)setFetchUserQuotaCompletionBlock:(id)arg1;
- (void)setQuotaAvailable:(unsigned long long)arg1;

@end
