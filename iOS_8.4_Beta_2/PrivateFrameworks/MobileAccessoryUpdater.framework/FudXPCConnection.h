/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@interface FudXPCConnection : NSObject <FudConnection> {
    NSString *clientIdentifier;
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    bool didStop;
    id messageHandler;
    int notifyToken;
    NSObject<OS_dispatch_queue> *replyQueue;
    NSObject<OS_dispatch_queue> *sessionQueue;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)createConnection;
- (bool)createSession;
- (void)dealloc;
- (id)initWithClientName:(id)arg1 replyHandlerQueue:(id)arg2 messageHandler:(id)arg3;
- (bool)registerForBSDNotifications;
- (void)sendMessageToFud:(id)arg1;
- (void)sendMessageToFud:(id)arg1 reply:(id)arg2;
- (void)stop;

@end