/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSSharedParsecSession : NSObject <NSURLSessionDataDelegate, PRSImageSource> {
    NSString *_baseURL;
    <PRSSessionController> *_client;
    bool _clientConfiguredEndPoint;
    bool _forBag;
    NSString *_httpsBaseURL;
    NSOperationQueue *_sessionQueue;
    NSMapTable *_taskHandlers;
    NSURLSession *_urlSession;
    NSString *_userAgent;
}

@property(assign,readonly) NSString * baseURL;
@property(assign,readwrite) <PRSSessionController> * client;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * httpsBaseURL;
@property(assign,readonly) NSOperationQueue * sessionQueue;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSMapTable * taskHandlers;
@property(assign,readonly) NSURLSession * urlSession;
@property(assign,readonly) NSString * userAgent;

+ (id)initializeForClient:(id)arg1;
+ (id)sharedParsecSession;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)_sessionConfiguration;
- (void)activate;
- (id)baseURL;
- (id)client;
- (id)dataTaskForRequest:(id)arg1 withHandler:(id)arg2;
- (void)deactivate;
- (void)getImageWithIdentifier:(id)arg1 block:(id)arg2;
- (id)httpsBaseURL;
- (id)initWithClient:(id)arg1 forBag:(bool)arg2;
- (void)releaseSession;
- (void)removeTask:(id)arg1;
- (id)sessionQueue;
- (void)setClient:(id)arg1;
- (id)taskHandlers;
- (id)urlSession;
- (id)urlSessionForImage:(id)arg1;
- (id)userAgent;

@end
