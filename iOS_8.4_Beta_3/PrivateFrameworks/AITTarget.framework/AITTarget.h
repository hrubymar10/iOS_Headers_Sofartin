/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

@interface AITTarget : NSObject <AITXPCConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    int _notifyToken;
    NSMutableDictionary *_observerRecords;
    NSMutableArray *_queuedProbes;
    NSObject<OS_dispatch_queue> *_rpcDispatchQueue;
    NSString *_rpcSelectorPrefix;
    id _rpcTarget;
    double _startTime;
    NSObject<OS_dispatch_source> *_watchdogSource;
    AITXPCConnection *_xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<OS_dispatch_queue> *rpcDispatchQueue;
@property (nonatomic, copy) NSString *rpcSelectorPrefix;
@property (nonatomic, retain) id rpcTarget;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedTarget;

- (bool)_appIsWhitelisted;
- (void)_fireProbe:(id)arg1 withArgumentDictionary:(id)arg2;
- (void)_flushQueuedProbes;
- (void)_probeBarrier:(id)arg1;
- (bool)_probeIsEnabled:(id)arg1;
- (id)_rpcTarget;
- (void)_sendAckForToken:(id)arg1 success:(bool)arg2 returnValue:(id)arg3 details:(id)arg4;
- (void)_setupWatchdog;
- (void)_setupXPCConnectionIfNeeded;
- (void)addObserver:(id)arg1 forMessage:(id)arg2 dispatchQueue:(id)arg3 block:(id)arg4;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (oneway void)release;
- (void)removeObserver:(id)arg1 forMessage:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (id)rpcDispatchQueue;
- (id)rpcSelectorPrefix;
- (id)rpcTarget;
- (void)setRpcDispatchQueue:(id)arg1;
- (void)setRpcSelectorPrefix:(id)arg1;
- (void)setRpcTarget:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnectionUnhandledMessage:(id)arg1;

@end
