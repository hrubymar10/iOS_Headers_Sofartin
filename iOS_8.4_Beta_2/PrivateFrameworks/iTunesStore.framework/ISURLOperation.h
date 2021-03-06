/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLOperation : ISOperation {
    NSURLRequest *_activeURLRequest;
    SSAuthenticationContext *_authenticationContext;
    NSURLConnection *_connection;
    NSMutableData *_dataBuffer;
    ISDataProvider *_dataProvider;
    bool _loadsHTTPFailures;
    long long _networkRetryCount;
    ISURLRequestPerformance *_performanceMetrics;
    NSCountedSet *_redirectURLs;
    SSMutableURLRequestProperties *_requestProperties;
    NSURLResponse *_response;
    bool _shouldSetCookies;
    bool _uploadProgressRequested;
    bool _usesPrivateCookieStore;
}

@property(getter=_loadsHTTPFailures,setter=_setLoadsHTTPFailures:,assign,readwrite) bool _loadsHTTPFailures;
@property(getter=_shouldSetCookies,setter=_setShouldSetCookies:,assign,readwrite) bool _shouldSetCookies;
@property(getter=_usesPrivateCookieStore,setter=_setUsesPrivateCookieStore:,assign,readwrite) bool _usesPrivateCookieStore;
@property(assign,retain) SSAuthenticationContext * authenticationContext;
@property(assign,retain) ISDataProvider * dataProvider;
@property(assign,readwrite) <ISURLOperationDelegate> * delegate;
@property(assign,readonly) ISURLRequestPerformance * performanceMetrics;
@property(assign,copy) SSURLRequestProperties * requestProperties;
@property(assign,retain) NSURLResponse * response;
@property(assign,readwrite) bool tracksPerformanceMetrics;
@property(getter=isUploadProgressRequested,assign,readwrite) bool uploadProgressRequested;

+ (id)copyUserAgent;
+ (bool)isSharedCacheStorageSession:(struct __CFURLStorageSession { }*)arg1;
+ (struct __CFURLStorageSession { }*)newSharedCacheStorageSession;
+ (struct _CFURLCache { }*)sharedCFURLCache;

- (id)_accountIdentifier;
- (id)_activeURL;
- (id)_activeURLRequest;
- (id)_copyAcceptLanguageString;
- (id)_copyAuthenticationContext;
- (id)_copyConnectionPropertiesWithDataConnectionServiceType:(struct __CFString { }*)arg1;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (id)_decodedDataForData:(id)arg1;
- (id)_errorWithDefaultStringsForError:(id)arg1;
- (id)_errorWithDomain:(id)arg1 code:(long long)arg2;
- (void)_handleFinishedLoading;
- (void)_handleReceivedData:(id)arg1;
- (void)_handleReceivedResponse:(id)arg1;
- (id)_handleRedirectRequest:(id)arg1 response:(id)arg2;
- (bool)_loadsHTTPFailures;
- (void)_logRequest:(id)arg1;
- (void)_logResponseBody:(id)arg1;
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (bool)_processResponseData:(id)arg1 error:(id*)arg2;
- (id)_requestProperties;
- (void)_retry;
- (void)_run;
- (bool)_runRequestWithURL:(id)arg1 dataConnectionServiceType:(struct __CFString { }*)arg2;
- (id)_sanitizedDescriptionForObject:(id)arg1;
- (id)_sanitizedStringForString:(id)arg1;
- (id)_sanitizedURLForURL:(id)arg1;
- (void)_sendContentLengthToDelegate:(long long)arg1;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_sendRequestToDelegate:(id)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_setActiveURLRequest:(id)arg1;
- (void)_setLoadsHTTPFailures:(bool)arg1;
- (void)_setShouldSetCookies:(bool)arg1;
- (void)_setUsesPrivateCookieStore:(bool)arg1;
- (bool)_shouldFollowRedirectWithRequest:(id)arg1 error:(id*)arg2;
- (bool)_shouldSetCookies;
- (void)_stopConnection;
- (void)_stopIfCancelled;
- (void)_updateProgress;
- (bool)_usesPrivateCookieStore;
- (bool)_validateContentLength:(long long)arg1 error:(id*)arg2;
- (void)_willSendRequest:(id)arg1;
- (id)authenticationContext;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)dataProvider;
- (void)dealloc;
- (bool)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (void)handleResponse:(id)arg1;
- (id)init;
- (bool)isUploadProgressRequested;
- (id)newRequestWithURL:(id)arg1;
- (id)performanceMetrics;
- (id)request;
- (id)requestProperties;
- (id)response;
- (void)run;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setTracksPerformanceMetrics:(bool)arg1;
- (void)setUploadProgressRequested:(bool)arg1;
- (bool)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (bool)tracksPerformanceMetrics;

@end
