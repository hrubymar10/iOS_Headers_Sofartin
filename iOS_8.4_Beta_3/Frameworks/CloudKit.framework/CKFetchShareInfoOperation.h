/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareInfoOperation : CKOperation {
    NSMutableDictionary *_errorsByURL;
    id _fetchShareInfoCompletionBlock;
    id _perShareInfoBlock;
    NSMutableDictionary *_shareInfoByURL;
    NSArray *_shareURLs;
}

@property (nonatomic, retain) NSMutableDictionary *errorsByURL;
@property (nonatomic, copy) id fetchShareInfoCompletionBlock;
@property (nonatomic, copy) id perShareInfoBlock;
@property (nonatomic, retain) NSMutableDictionary *shareInfoByURL;
@property (nonatomic, retain) NSArray *shareURLs;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)errorsByURL;
- (id)fetchShareInfoCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithShareURLs:(id)arg1;
- (id)perShareInfoBlock;
- (void)performCKOperation;
- (void)setErrorsByURL:(id)arg1;
- (void)setFetchShareInfoCompletionBlock:(id)arg1;
- (void)setPerShareInfoBlock:(id)arg1;
- (void)setShareInfoByURL:(id)arg1;
- (void)setShareURLs:(id)arg1;
- (id)shareInfoByURL;
- (id)shareURLs;

@end
