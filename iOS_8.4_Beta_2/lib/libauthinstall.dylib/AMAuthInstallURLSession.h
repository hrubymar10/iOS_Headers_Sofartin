/* Generated by RuntimeBrowser
   Image: /usr/lib/libauthinstall.dylib
 */

@interface AMAuthInstallURLSession : NSObject <NSURLSessionDelegate> {
    NSMutableDictionary *_completions;
    NSMutableDictionary *_data;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_responses;
    NSURLSession *_session;
    double _timeout;
}

@property(assign,retain) NSMutableDictionary * completions;
@property(assign,retain) NSMutableDictionary * data;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;
@property(assign,retain) NSMutableDictionary * responses;
@property(assign,retain) NSURLSession * session;
@property(assign,readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_defaultSession;
- (id)_defaultSessionConfigurationWithIdentifier:(id)arg1;
- (id)_urlRequestForHTTPMessage:(struct __CFHTTPMessage { }*)arg1;
- (id)completions;
- (id)data;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1;
- (id)queue;
- (id)responses;
- (void)sendRequest:(struct __CFHTTPMessage { }*)arg1 completion:(id)arg2;
- (id)session;
- (void)setCompletions:(id)arg1;
- (void)setData:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setResponses:(id)arg1;
- (void)setSession:(id)arg1;

@end
