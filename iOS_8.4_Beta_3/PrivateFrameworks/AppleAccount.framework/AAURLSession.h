/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    NSMutableDictionary *_pendingCompletionsByTask;
    NSMutableDictionary *_receivedDataByTask;
    NSMutableDictionary *_retryCountByRequest;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSURLSession *_urlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedURLSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_URLSession;
- (bool)_isRecoverableError:(id)arg1;
- (bool)_unsafe_retryTaskIfPossible:(id)arg1;
- (void)beginDataTaskWithRequest:(id)arg1 completionHandler:(id)arg2;
- (void)beginDataTaskWithURL:(id)arg1 completionHandler:(id)arg2;
- (id)init;

@end
