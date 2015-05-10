/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AARequester : NSOperation {
    bool _canceled;
    NSMutableData *_data;
    id _handler;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSHTTPURLResponse *_httpResponse;
    bool _isCanceled;
    bool _isExecuting;
    bool _isFinished;
    AARequest *_request;
    AAResponse *_response;
    Class _responseClass;
    NSURLConnection *_urlConnection;
}

@property(getter=isCanceled,assign,readwrite) bool canceled;
@property(getter=isFinished,assign,readwrite) bool finished;
@property(assign,retain) NSObject<OS_dispatch_queue> * handlerQueue;
@property(getter=isExecuting,assign,readwrite) bool isExecuting;

- (void).cxx_destruct;
- (void)_callHandler;
- (void)cancel;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)handlerQueue;
- (id)initWithRequest:(id)arg1 handler:(id)arg2;
- (bool)isCanceled;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setCanceled:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setIsExecuting:(bool)arg1;
- (void)start;

@end
