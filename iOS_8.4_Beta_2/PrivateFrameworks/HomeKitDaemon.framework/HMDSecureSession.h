/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSecureSession : NSObject {
    bool _clientMode;
    NSString *_destination;
    HAPRemoteSession *_hapRemoteSession;
    HMDIdentityRegistry *_identityRegistry;
    HMDIDSMessageDispatcher *_msgDispatcher;
    HMMessageDispatcher *_notificationDispatcher;
    HMDNotificationRelay *_notificationRelay;
    NSUUID *_sessionID;
    id _stoppedNotificationHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,readwrite) bool clientMode;
@property(assign,retain) NSString * destination;
@property(assign,retain) HAPRemoteSession * hapRemoteSession;
@property(assign,retain) HMDIdentityRegistry * identityRegistry;
@property(assign,retain) HMDIDSMessageDispatcher * msgDispatcher;
@property(assign,retain) HMMessageDispatcher * notificationDispatcher;
@property(assign,retain) HMDNotificationRelay * notificationRelay;
@property(assign,copy) NSUUID * sessionID;
@property(assign,copy) id sessionStoppedNotificationHandler;
@property(assign,copy) id stoppedNotificationHandler;
@property(assign,retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)_configureAsClient:(bool)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (bool)clientMode;
- (id)destination;
- (void)handleSecureMessage:(id)arg1;
- (id)hapRemoteSession;
- (id)identityRegistry;
- (id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationDispatcher:(id)arg3 identityRegistry:(id)arg4 notificationRelay:(id)arg5 clientMode:(bool)arg6 sessionID:(id)arg7;
- (id)msgDispatcher;
- (id)notificationDispatcher;
- (id)notificationRelay;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (id)sessionID;
- (id)sessionStoppedNotificationHandler;
- (void)setClientMode:(bool)arg1;
- (void)setDestination:(id)arg1;
- (void)setHapRemoteSession:(id)arg1;
- (void)setIdentityRegistry:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setNotificationDispatcher:(id)arg1;
- (void)setNotificationRelay:(id)arg1;
- (void)setSessionStoppedNotificationHandler:(id)arg1;
- (void)setStoppedNotificationHandler:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startClientAndInvokeOnQueue:(id)arg1 completionHandler:(id)arg2;
- (void)startServerAndInvokeOnQueue:(id)arg1 completionHandler:(id)arg2;
- (void)stop;
- (id)stoppedNotificationHandler;
- (id)workQueue;

@end
