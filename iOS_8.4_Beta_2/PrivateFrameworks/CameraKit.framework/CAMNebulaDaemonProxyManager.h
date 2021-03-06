/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol> {
    NSXPCConnection *__connection;
    long long __connectionCount;
    NSObject<OS_dispatch_queue> *__queue;
}

@property(assign,readonly) NSXPCConnection * _connection;
@property(assign,readonly) long long _connectionCount;
@property(assign,readonly) NSObject<OS_dispatch_queue> * _queue;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_closeConnectionToDaemon;
- (id)_connection;
- (long long)_connectionCount;
- (void)_ensureConnectionToDaemon;
- (void)_getProxyForExecutingBlock:(id)arg1;
- (id)_queue;
- (void)closeConnectionToDaemon;
- (void)ensureConnectionToDaemon;
- (void)finishCaptureForNebulaWithUUID:(id)arg1;
- (void)forceStopCaptureWithReasons:(long long)arg1;
- (id)init;
- (void)resumeNebulaWithUUID:(id)arg1;
- (void)startNebulaWithUUID:(id)arg1;
- (void)stopNebulaWithUUID:(id)arg1;
- (void)updateNebulaWithUUID:(id)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(bool)arg1;

@end
