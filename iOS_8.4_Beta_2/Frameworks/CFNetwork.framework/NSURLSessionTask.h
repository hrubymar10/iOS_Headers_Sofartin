/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionTask : NSObject <NSCopying> {
    unsigned long long __allowedProtocolTypes;
    bool __allowsCellular;
    NSDictionary *__backgroundTaskTimingData;
    NSString *__boundInterfaceIdentifier;
    int __cachePolicy;
    struct _CFURLCache { } *__cfCache;
    struct OpaqueCFHTTPCookieStorage { } *__cfCookies;
    struct _CFURLCredentialStorage { } *__cfCreds;
    struct _CFHSTSPolicy { } *__cfHSTS;
    bool __connectionIsCellular;
    NSValue *__connectionPropertyDuet;
    NSArray *__contentDispositionFallbackArray;
    int __cookieAcceptPolicy;
    struct _CFURLRequest { } *__currentCFURLRequest;
    bool __disallowCellular;
    long long __expectedWorkload;
    NSURL *__ledBellyFallbackURL;
    NSString *__ledBellyServiceIdentifier;
    NSDictionary *__legacySocketStreamProperties;
    int __networkServiceType;
    struct __PerformanceTiming { } *__performanceTiming;
    unsigned int __powerAssertion;
    bool __preventsIdleSystemSleep;
    float __priorityHint;
    long long __priorityValue;
    bool __prohibitAuthUI;
    id __protocolForTask;
    NSDictionary *__proxySettings;
    long long __requestPriority;
    bool __shouldHandleCookies;
    bool __shouldPipelineHTTP;
    bool __shouldSkipPipelineProbe;
    bool __shouldSkipPreferredClientCertificateLookup;
    bool __shouldUsePipelineHeuristics;
    NSDictionary *__sslSettings;
    bool __strictContentLength;
    long long __suspensionThreshhold;
    double __timeWindowDelay;
    double __timeWindowDuration;
    double __timeoutInterval;
    NSString *__uniqueIdentifier;
    long long _countOfBytesExpectedToReceive;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    NSError *_error;
    NSURLRequest *_originalRequest;
    NSURLResponse *_response;
    NSURLSession *_session;
    double _startTime;
    long long _state;
    NSString *_taskDescription;
    unsigned long long _taskIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,readwrite) unsigned long long _allowedProtocolTypes;
@property(assign,readwrite) bool _allowsCellular;
@property(assign,copy) NSDictionary * _backgroundTaskTimingData;
@property(assign,retain) NSString * _boundInterfaceIdentifier;
@property(assign,readwrite) int _cachePolicy;
@property(assign,retain) struct _CFURLCache { }* _cfCache;
@property(assign,retain) struct OpaqueCFHTTPCookieStorage { }* _cfCookies;
@property(assign,retain) struct _CFURLCredentialStorage { }* _cfCreds;
@property(assign,retain) struct _CFHSTSPolicy { }* _cfHSTS;
@property(setter=_setConnectionIsCellular:,assign,readwrite) bool _connectionIsCellular;
@property(assign,copy) NSValue * _connectionPropertyDuet;
@property(assign,retain) NSArray * _contentDispositionFallbackArray;
@property(assign,readwrite) int _cookieAcceptPolicy;
@property(assign,retain) struct _CFURLRequest { }* _currentCFURLRequest;
@property(assign,readwrite) bool _disallowCellular;
@property(assign,readwrite) long long _expectedWorkload;
@property(assign,copy) NSURL * _ledBellyFallbackURL;
@property(assign,copy) NSString * _ledBellyServiceIdentifier;
@property(assign,retain) NSDictionary * _legacySocketStreamProperties;
@property(assign,readwrite) int _networkServiceType;
@property(assign,readwrite) struct __PerformanceTiming { }* _performanceTiming;
@property(assign,readwrite) unsigned int _powerAssertion;
@property(assign,readwrite) bool _preventsIdleSystemSleep;
@property(assign,readwrite) long long _priority;
@property(assign,readwrite) float _priorityHint;
@property(assign,readwrite) long long _priorityValue;
@property(assign,readwrite) bool _prohibitAuthUI;
@property(assign,readwrite) id _protocolForTask;
@property(assign,retain) NSDictionary * _proxySettings;
@property(assign,readwrite) long long _requestPriority;
@property(assign,readwrite) bool _shouldHandleCookies;
@property(assign,readwrite) bool _shouldPipelineHTTP;
@property(assign,readwrite) bool _shouldSkipPipelineProbe;
@property(assign,readwrite) bool _shouldSkipPreferredClientCertificateLookup;
@property(assign,readwrite) bool _shouldUsePipelineHeuristics;
@property(assign,retain) NSDictionary * _sslSettings;
@property(assign,readwrite) bool _strictContentLength;
@property(assign,readwrite) long long _suspensionThreshhold;
@property(assign,readwrite) double _timeWindowDelay;
@property(assign,readwrite) double _timeWindowDuration;
@property(assign,readwrite) double _timeoutInterval;
@property(assign,copy) NSString * _uniqueIdentifier;
@property(assign,readwrite) long long countOfBytesExpectedToReceive;
@property(assign,readwrite) long long countOfBytesExpectedToSend;
@property(assign,readwrite) long long countOfBytesReceived;
@property(assign,readwrite) long long countOfBytesSent;
@property(assign,copy) NSURLRequest * currentRequest;
@property(assign,retain) NSURL * currentRequest_URL;
@property(assign,copy) NSError * error;
@property(assign,copy) NSURLRequest * originalRequest;
@property(assign,retain) NSURL * originalRequest_mainDocumentURL;
@property(assign,readwrite) float priority;
@property(assign,copy) NSURLResponse * response;
@property(assign,retain) NSURLSession * session;
@property(assign,readwrite) double startTime;
@property(assign,readwrite) long long state;
@property(assign,copy) NSString * taskDescription;
@property(assign,readwrite) unsigned long long taskIdentifier;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * workQueue;

+ (bool)supportsSecureCoding;
+ (id)taskForWrappedRequest:(id)arg1;

- (unsigned long long)_allowedProtocolTypes;
- (bool)_allowsCellular;
- (id)_backgroundTaskTimingData;
- (id)_boundInterfaceIdentifier;
- (int)_cachePolicy;
- (struct _CFURLCache { }*)_cfCache;
- (struct OpaqueCFHTTPCookieStorage { }*)_cfCookies;
- (struct _CFURLCredentialStorage { }*)_cfCreds;
- (struct _CFHSTSPolicy { }*)_cfHSTS;
- (bool)_connectionIsCellular;
- (id)_connectionPropertyDuet;
- (id)_contentDispositionFallbackArray;
- (int)_cookieAcceptPolicy;
- (struct _CFURLRequest { }*)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (struct __CFHTTPMessage { }*)_copyHTTPMessage;
- (struct _CFURLRequest { }*)_copyOriginalCFURLRequest;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (struct __CFDictionary { }*)_copySocketStreamProperties0;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (struct _CFURLRequest { }*)_currentCFURLRequest;
- (bool)_disallowCellular;
- (long long)_expectedWorkload;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (id)_ledBellyFallbackURL;
- (id)_ledBellyServiceIdentifier;
- (id)_legacySocketStreamProperties;
- (int)_networkServiceType;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_releasePowerAsssertion;
- (struct __PerformanceTiming { }*)_performanceTiming;
- (unsigned int)_powerAssertion;
- (bool)_preventsIdleSystemSleep;
- (long long)_priority;
- (float)_priorityHint;
- (long long)_priorityValue;
- (bool)_prohibitAuthUI;
- (id)_protocolForTask;
- (id)_proxySettings;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (long long)_requestPriority;
- (void)_setConnectionIsCellular:(bool)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession { }*)arg1;
- (void)_setSocketProperties:(struct __CFDictionary { }*)arg1 connectionProperties:(struct __CFDictionary { }*)arg2;
- (bool)_shouldHandleCookies;
- (bool)_shouldPipelineHTTP;
- (bool)_shouldSkipPipelineProbe;
- (bool)_shouldSkipPreferredClientCertificateLookup;
- (bool)_shouldUsePipelineHeuristics;
- (id)_sslSettings;
- (bool)_strictContentLength;
- (long long)_suspensionThreshhold;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (double)_timeoutInterval;
- (id)_timingData;
- (id)_uniqueIdentifier;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary { }*)arg1;
- (void)cancel;
- (void)cleanupAndBreakCycles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (id)currentRequest;
- (id)currentRequest_URL;
- (void)dealloc;
- (id)description;
- (id)error;
- (bool)headerWasAddedDuringCanonicalization:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;
- (id)initWithTask:(id)arg1;
- (id)originalRequest;
- (id)originalRequest_mainDocumentURL;
- (float)priority;
- (id)response;
- (void)resume;
- (id)session;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setResponse:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)set_allowedProtocolTypes:(unsigned long long)arg1;
- (void)set_allowsCellular:(bool)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (void)set_cachePolicy:(int)arg1;
- (void)set_cfCache:(struct _CFURLCache { }*)arg1;
- (void)set_cfCookies:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)set_cfCreds:(struct _CFURLCredentialStorage { }*)arg1;
- (void)set_cfHSTS:(struct _CFHSTSPolicy { }*)arg1;
- (void)set_connectionPropertyDuet:(id)arg1;
- (void)set_contentDispositionFallbackArray:(id)arg1;
- (void)set_cookieAcceptPolicy:(int)arg1;
- (void)set_currentCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (void)set_disallowCellular:(bool)arg1;
- (void)set_expectedWorkload:(long long)arg1;
- (void)set_ledBellyFallbackURL:(id)arg1;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (void)set_networkServiceType:(int)arg1;
- (void)set_performanceTiming:(struct __PerformanceTiming { }*)arg1;
- (void)set_powerAssertion:(unsigned int)arg1;
- (void)set_preventsIdleSystemSleep:(bool)arg1;
- (void)set_priority:(long long)arg1;
- (void)set_priorityHint:(float)arg1;
- (void)set_priorityValue:(long long)arg1;
- (void)set_prohibitAuthUI:(bool)arg1;
- (void)set_protocolForTask:(id)arg1;
- (void)set_proxySettings:(id)arg1;
- (void)set_requestPriority:(long long)arg1;
- (void)set_shouldHandleCookies:(bool)arg1;
- (void)set_shouldPipelineHTTP:(bool)arg1;
- (void)set_shouldSkipPipelineProbe:(bool)arg1;
- (void)set_shouldSkipPreferredClientCertificateLookup:(bool)arg1;
- (void)set_shouldUsePipelineHeuristics:(bool)arg1;
- (void)set_sslSettings:(id)arg1;
- (void)set_strictContentLength:(bool)arg1;
- (void)set_suspensionThreshhold:(long long)arg1;
- (void)set_timeWindowDelay:(double)arg1;
- (void)set_timeWindowDuration:(double)arg1;
- (void)set_timeoutInterval:(double)arg1;
- (void)set_uniqueIdentifier:(id)arg1;
- (bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (double)startTime;
- (long long)state;
- (void)suspend;
- (id)taskDescription;
- (unsigned long long)taskIdentifier;
- (void)updateCurrentRequest:(id)arg1;
- (id)workQueue;

@end
