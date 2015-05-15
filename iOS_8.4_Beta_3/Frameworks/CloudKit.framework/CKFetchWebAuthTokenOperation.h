/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation {
    id _fetchWebAuthTokenCompletionBlock;
    NSString *_webAuthToken;
}

@property(assign,copy) id fetchWebAuthTokenCompletionBlock;
@property(assign,copy) NSString * webAuthToken;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (id)fetchWebAuthTokenCompletionBlock;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setFetchWebAuthTokenCompletionBlock:(id)arg1;
- (void)setWebAuthToken:(id)arg1;
- (id)webAuthToken;

@end