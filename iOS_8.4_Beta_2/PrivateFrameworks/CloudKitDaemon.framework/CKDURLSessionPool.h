/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDURLSessionPool : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegatePrivate> {
    int _backgroundSessionConnectionPoolLimit;
    NSMutableDictionary *_delegateByTaskDescription;
    NSMutableDictionary *_ephemeralSessionByTaskDescription;
    int _networkdNotifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_sessionByIdentifier;
    NSMutableDictionary *_sessionConfigurationReferenceByIdentifier;
    NSMutableDictionary *_sessionConfigurationReferenceByName;
}

@property(assign,readonly) int backgroundSessionConnectionPoolLimit;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)backgroundSessionConnectionPoolName;
+ (id)sharedURLSessionPool;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(bool)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id)arg5;
- (id)_URLSessionWithConfiguration:(id)arg1 forDelegate:(id)arg2;
- (void)_performAsyncOnDelegateOfSession:(id)arg1 task:(id)arg2 fromSelector:(SEL)arg3 block:(id)arg4;
- (void)_updateBackgroundSessionConnectionPoolLimit;
- (int)backgroundSessionConnectionPoolLimit;
- (void)checkinSessionConfiguration:(id)arg1;
- (id)checkoutSessionConfigurationWithName:(id)arg1;
- (id)dataTaskWithTaskDescription:(id)arg1 configuration:(id)arg2 request:(id)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)invalidateDataTask:(id)arg1;
- (void)setSessionConfiguration:(id)arg1 forName:(id)arg2;

@end
