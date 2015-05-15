/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    unsigned int _connectionPort;
    NSString *_connectionPortName;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CUTWeakReference *_delegateReference;
    bool _enableCriticalReliability;
    bool _enableStatusNotifications;
    NSArray *_enabledTopics;
    NSString *_environmentName;
    bool _everHadDelegate;
    NSMutableDictionary *_idsToOutgoingMessages;
    NSArray *_ignoredTopics;
    bool _isConnected;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    unsigned long long _largeMessageSize;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    unsigned long long _messageSize;
    unsigned long long _nextOutgoingMessageID;
    NSArray *_opportunisticTopics;
    NSData *_publicToken;
    NSMutableArray *_queuedDelegateBlocks;
    bool _usesAppLaunchStats;
}

@property(assign,readwrite) <APSConnectionDelegate> * delegate;
@property(assign,readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property(assign,readonly) NSObject<OS_dispatch_queue> * ivarQueue;
@property(assign,readwrite) unsigned long long largeMessageSize;
@property(assign,readwrite) unsigned long long messageSize;
@property(assign,retain) NSData * publicToken;
@property(assign,readwrite) bool usesAppLaunchStats;

+ (void)_blockingXPCCallWithArgumentBlock:(id)arg1 resultHandler:(id)arg2;
+ (void)_safelyCancelAndReleaseAfterBarrierConnection:(id)arg1;
+ (void)_safelyCancelAndReleaseConnection:(id)arg1;
+ (void)_setTokenState;
+ (id)connectionsDebuggingState;
+ (struct __SecIdentity { }*)copyIdentity;
+ (void)invalidateDeviceIdentity;
+ (bool)isValidEnvironment:(id)arg1;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)notifySafeToSendFilter;
+ (void)requestCourierConnection;

- (void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)arg1;
- (void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
- (void)_cancelConnection;
- (void)_cancelConnectionOnIvarQueue;
- (void)_connectIfNecessary;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_deliverConnectionStatusChange:(bool)arg1;
- (void)_deliverConnectionStatusFromDealloc:(bool)arg1;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)_deliverMessage:(id)arg1;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 error:(id)arg2;
- (void)_deliverPublicToken:(id)arg1;
- (void)_deliverPublicTokenOnIvarQueue:(id)arg1;
- (void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)_disconnect;
- (void)_disconnectFromDealloc;
- (void)_disconnectOnIvarQueue;
- (void)_handleEvent:(id)arg1 withHandler:(id)arg2;
- (id)_listForIdentifierOnIvarQueue:(unsigned long long)arg1;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(bool)arg4;
- (void)_sendOutgoingMessage:(id)arg1 fake:(bool)arg2;
- (void)_setEnableCriticalReliability:(bool)arg1 sendToDaemon:(bool)arg2;
- (void)_setEnableStatusNotifications:(bool)arg1 sendToDaemon:(bool)arg2;
- (void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(bool)arg4;
- (void)_setUsesAppLaunchStats:(bool)arg1 sendToDaemon:(bool)arg2;
- (void)_shutdownFromDealloc;
- (void)_shutdownOnIvarQueue;
- (void)cancelOutgoingMessage:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)enabledTopics;
- (bool)hasIdentity;
- (id)ignoredTopics;
- (id)initWithEnvironmentName:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
- (id)initWithEnvironmentName:(id)arg1 queue:(id)arg2;
- (void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2;
- (bool)isConnected;
- (id)ivarQueue;
- (unsigned long long)largeMessageSize;
- (unsigned long long)messageSize;
- (void)moveTopic:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (id)opportunisticTopics;
- (id)publicToken;
- (void)removeFromRunLoop;
- (void)requestTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1;
- (void)sendFakeMessage:(id)arg1;
- (void)sendOutgoingMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableCriticalReliability:(bool)arg1;
- (void)setEnableStatusNotifications:(bool)arg1;
- (void)setEnabledTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3;
- (void)setLargeMessageSize:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setUsesAppLaunchStats:(bool)arg1;
- (void)shutdown;
- (bool)usesAppLaunchStats;

@end
