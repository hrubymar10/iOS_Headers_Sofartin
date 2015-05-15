/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@interface WRMClient : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    <WRMClientDelegate> *_wrmClientDelegate;
}

@property <WRMClientDelegate> *delegate;

- (void)dealloc;
- (id)delegate;
- (void)dumpReport:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)releaseServiceConnection;
- (void)reportMetrics:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; }*)arg1;
- (void)sendProcessInfo;
- (void)sendReport:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setupServiceConnection;
- (void)startWRMClient;
- (void)stopWRMClient;

@end
