/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPHTTPClient : NSObject {
    <HAPHTTPClientDebugDelegate> *_debugDelegate;
    NSObject<OS_dispatch_queue> *_debugDelegateQueue;
    <HAPHTTPClientDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_dnsName;
    struct HTTPClientPrivate { } *_httpClient;
    bool _invalidateRequested;
    unsigned long long _port;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(assign,readwrite) <HAPHTTPClientDebugDelegate> * debugDelegate;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * debugDelegateQueue;
@property(assign,readwrite) <HAPHTTPClientDelegate> * delegate;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * delegateQueue;
@property(assign,copy) NSString * dnsName;
@property(assign,readwrite) bool invalidateRequested;
@property(assign,readonly) unsigned long long port;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;

- (void).cxx_destruct;
- (bool)_debugDelegateRespondsToSelector:(SEL)arg1;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (id)_deserializeUAPJSONData:(id)arg1 error:(id*)arg2;
- (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned long long x_3_1_2; char *x_3_1_3; unsigned long long x_3_1_4; char *x_3_1_5; unsigned long long x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned long long x_3_1_9; struct { char *x_10_2_1; unsigned long long x_10_2_2; char *x_10_2_3; unsigned long long x_10_2_4; char *x_10_2_5; unsigned long long x_10_2_6; char *x_10_2_7; unsigned long long x_10_2_8; char *x_10_2_9; unsigned long long x_10_2_10; char *x_10_2_11; unsigned long long x_10_2_12; char *x_10_2_13; unsigned long long x_10_2_14; char *x_10_2_15; char *x_10_2_16; } x_3_1_10; char *x_3_1_11; unsigned long long x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned long long x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; int x5; unsigned char x6; char *x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned char x11[32000]; char *x12; struct iovec { void *x_13_1_1; unsigned long long x_13_1_2; } x13[2]; struct iovec {} *x14; int x15; unsigned long long x16; int x17; int x18; int x19; void *x20; void *x21; void *x22; void *x23; void *x24; void *x25; int (*x26)(); id x27; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x28; }*)arg1 completionHandler:(id)arg2;
- (int)_initializeCoreUtilsHTTPClient;
- (void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned long long)arg4 completionHandler:(id)arg5;
- (id)_serializeUAPJSONObject:(id)arg1 error:(id*)arg2;
- (id)debugDelegate;
- (id)debugDelegateQueue;
- (id)delegate;
- (id)delegateQueue;
- (id)dnsName;
- (bool)enableUAPSessionSecurityWithReadKey:(unsigned char)arg1 writeKey:(unsigned char)arg2 error:(id*)arg3;
- (id)initWithDNSName:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (bool)invalidateRequested;
- (unsigned long long)port;
- (id)queue;
- (void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)sendGETRequestToURL:(id)arg1 completionHandler:(id)arg2;
- (void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)setDebugDelegate:(id)arg1;
- (void)setDebugDelegate:(id)arg1 queue:(id)arg2;
- (void)setDebugDelegateQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDnsName:(id)arg1;
- (void)setInvalidateRequested:(bool)arg1;
- (void)setQueue:(id)arg1;

@end
