/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSURLSessionLocal : NSURLSession <NSURLSessionSubclass> {
    unsigned long long _identSeed;
    id _invalidateCallback;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    bool _isInvalid;
    NSArray *_localProtocolClassesForDefaultSession;
    NSMutableDictionary *_tasks;
    struct XTubeManager { int (**x1)(); struct __CFAllocator {} *x2; int x3; struct RetainableTypedDict<const CoreSchedulingSet *, TubeManager *> {} *x4; struct _opaque_pthread_mutex_t { long long x_5_1_1; BOOL x_5_1_2[56]; } x5; struct HTTPConnectionCacheLimits { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; int x_6_1_5; int x_6_1_6; int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; } *_tubeManager;
    const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; } *_xCache;
    long long _xCacheOnce;
    const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } *_xCookies;
    long long _xCookiesOnce;
    const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; } *_xCreds;
    long long _xCredsOnce;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (struct XTubeManager { int (**x1)(); struct __CFAllocator {} *x2; int x3; struct RetainableTypedDict<const CoreSchedulingSet *, TubeManager *> {} *x4; struct _opaque_pthread_mutex_t { long long x_5_1_1; BOOL x_5_1_2[56]; } x5; struct HTTPConnectionCacheLimits { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; int x_6_1_5; int x_6_1_6; int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; }*)_actualTubeManager;
- (bool)_cfurlRequest:(struct _CFURLRequest { }*)arg1 isCacheEquivalentTo:(struct _CFURLRequest { }*)arg2;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (id)_createCanonicalRequest:(id)arg1;
- (id)_createCanonicalRequestForTask:(id)arg1;
- (id)_createTaskFromOriginalCFURLRequest:(struct _CFURLRequest { }*)arg1 updatedCFURLRequest:(struct _CFURLRequest { }*)arg2 connProps:(struct __CFDictionary { }*)arg3 sockProps:(struct __CFDictionary { }*)arg4;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage0;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage0;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache0;
- (void)_flushOrResetStorage:(id)arg1 reset:(unsigned char)arg2;
- (void)_getCookieHeadersForTask:(id)arg1 completionHandler:(id)arg2;
- (void)_invalidateAllConnections;
- (struct URLProtocol { int (**x1)(); int (**x2)(); struct CoreSchedulingSet {} *x3; double x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; long long x13; long long x14; long long x15; unsigned char x16; int x17; long long x18; id x19; struct URLProtocolClient {} *x20; struct _CFCachedURLResponse {} *x21; }*)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient { int (**x1)(); }*)arg2;
- (struct URLProtocol { int (**x1)(); int (**x2)(); struct CoreSchedulingSet {} *x3; double x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; long long x13; long long x14; long long x15; unsigned char x16; int x17; long long x18; id x19; struct URLProtocolClient {} *x20; struct _CFCachedURLResponse {} *x21; }*)_newURLProtocolForTask:(id)arg1 client:(struct URLProtocolClient { int (**x1)(); }*)arg2 protocolClass:(Class)arg3;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_completeInvalidation:(bool)arg1;
- (void)_onqueue_connectUploadTask:(id)arg1 strippedRequest:(id)arg2 bodyStream:(id)arg3 bodyParts:(id)arg4;
- (void)_onqueue_flushWithCompletionHandler:(id)arg1;
- (void)_onqueue_getTasksWithCompletionHandler:(id)arg1;
- (void)_onqueue_invalidateSession:(bool)arg1 withQueue:(id)arg2 completion:(id)arg3;
- (void)_onqueue_invokeInvalidateCallback;
- (void)_onqueue_resetStorageWithCompletionHandler:(id)arg1;
- (bool)_prependProtocolClassForDefaultSession:(Class)arg1;
- (Class)_protocolClassForRequest:(id)arg1;
- (Class)_protocolClassForTask:(id)arg1;
- (id)_protocolClasses;
- (void)_purgeIdleConnections;
- (void)_removeProtocolClassForDefaultSession:(Class)arg1;
- (bool)_request:(id)arg1 isCacheEquivalentTo:(id)arg2;
- (id)_streamTaskForHost:(id)arg1 port:(long long)arg2 tls:(bool)arg3 completionHandler:(id)arg4;
- (bool)_withConnectionCache_enqueueRequest:(const struct HTTPRequestMessage { int (**x1)(); int (**x2)(); int (**x3)(); unsigned char x4; struct HTTPVersionMixedValue { int (**x_5_1_1)(); struct __CFString {} *x_5_1_2; } x5; struct HTTPBodyData {} *x6; int x7; long long x8; struct _CFHTTPAuthentication {} *x9; struct _CFHTTPAuthentication {} *x10; struct HTTPParser {} *x11; struct HTTPHeaderDict {} *x12; struct HTTPHeaderDict {} *x13; int (**x14)(); struct __CFAllocator {} *x15; struct HTTPMethodMixedValue { int (**x_16_1_1)(); struct __CFString {} *x_16_1_2; } x16; char *x17; struct __CFURL {} *x18; char *x19; }*)arg1 forProtocol:(struct MetaConnectionCacheClient { int (**x1)(); }*)arg2 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; id x9; struct __CFRunLoop {} *x10; struct __CFString {} *x11; int x12; }*)arg3 options:(struct MetaConnectionOptions { int x1; float x2; unsigned long long x3; unsigned char x4; unsigned char x5; unsigned char x6; })arg4;
- (struct __CFString { }*)_withConnectionCache_getCurrentSSLMethodForKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg1 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; id x9; struct __CFRunLoop {} *x10; struct __CFString {} *x11; int x12; }*)arg2;
- (struct Tube { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); int (**x5)(); struct HTTPConnectionCacheKey {} *x6; struct BaseTubeManager {} *x7; struct CoreSchedulingSet {} *x8; struct BaseAwaitingTube {} *x9; struct SocketStreamObject {} *x10; int x11; bool x12; struct { bool x_13_1_1; unsigned long long x_13_1_2; } x13; int x14; bool x15; bool x16; bool x17; struct __CFArray {} *x18; struct __SecTrust {} *x19; struct NetworkProxy {} *x20; id x21; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x22; id x23; void*x24; struct __CFReadStream {} *x25; struct __CFWriteStream {} *x26; }*)_withConnectionCache_getPendingTubeForProtocol:(struct MetaConnectionCacheClient { int (**x1)(); }*)arg1 withKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg2 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; id x9; struct __CFRunLoop {} *x10; struct __CFString {} *x11; int x12; }*)arg3;
- (void)_withConnectionCache_setCurrentSSLMethod:(struct __CFString { }*)arg1 forKey:(const struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg2 scheduling:(const struct CoreSchedulingSet { int (**x1)(); struct __CFAllocator {} *x2; int x3; int (**x4)(); struct _opaque_pthread_t {} *x5; int x6; struct __CFSet {} *x7; id x8; id x9; struct __CFRunLoop {} *x10; struct __CFString {} *x11; int x12; }*)arg3;
- (id)connToTask:(id)arg1;
- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)copyBaseStorageForRequest:(struct _CFURLRequest { }*)arg1;
- (id)copyTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTaskForRequest:(id)arg1 completion:(id)arg2;
- (void)dealloc;
- (id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(id)arg4;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateUnpurgeableConnectionsForConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct NetworkProxy {} *x11; struct __CFString {} *x12; int x13; int x14; }*)arg1;
- (unsigned long long)nextSeed;
- (void)replaceTask:(id)arg1 withTask:(id)arg2;
- (void)task:(id)arg1 terminatedConnection:(id)arg2;
- (id)taskForClass:(Class)arg1 request:(id)arg2 uploadFile:(id)arg3 bodyData:(id)arg4 completion:(id)arg5;
- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;

@end
