/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIDSMessageDispatcher : HMMessageDispatcher {
    NSMutableDictionary *_activeClientSecureSessions;
    NSMutableDictionary *_activeServerSecureSessions;
    HMDAdminEnforcementMessageFilter *_adminMsgFilter;
    HMDIdentityRegistry *_identityRegistry;
    HMDMessageFilterChain *_msgFilterChain;
    HMMessageDispatcher *_notificationDispatcher;
    HMDNotificationRelay *_notificationRelay;
    HMMessageDispatcher *_recvDispatcher;
    NSMutableDictionary *_remoteGateways;
}

@property (nonatomic, retain) NSMutableDictionary *activeClientSecureSessions;
@property (nonatomic, retain) NSMutableDictionary *activeServerSecureSessions;
@property (nonatomic, retain) HMDAdminEnforcementMessageFilter *adminMsgFilter;
@property (nonatomic, retain) HMDIdentityRegistry *identityRegistry;
@property (nonatomic, retain) HMDMessageFilterChain *msgFilterChain;
@property (nonatomic, retain) HMMessageDispatcher *notificationDispatcher;
@property (nonatomic, retain) HMDNotificationRelay *notificationRelay;
@property (nonatomic, retain) HMMessageDispatcher *recvDispatcher;
@property (nonatomic, retain) NSMutableDictionary *remoteGateways;
@property (nonatomic, readonly) NSArray *residentDevices;
@property (nonatomic, readonly) NSArray *transientDevices;

+ (bool)isWhitelistedLocalMessage:(id)arg1;
+ (id)remappedRemotePrepareWriteCommands;
+ (id)whitelistedCommands;

- (void).cxx_destruct;
- (bool)_checkAuthorizationForMessage:(id)arg1 errorReason:(id*)arg2;
- (void)_handleElectDeviceForIDSSession:(id)arg1;
- (void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(id)arg4;
- (bool)_handleInternalIDSMessage:(id)arg1 fromID:(id)arg2;
- (void)_handleSecureClientMessage:(id)arg1 fromID:(id)arg2;
- (void)_handleSecureServerMessage:(id)arg1 fromID:(id)arg2;
- (void)_sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5;
- (void)_sendSecureMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5;
- (void)_setRemoteAccessPeer:(id)arg1 forHome:(id)arg2 sendNotification:(bool)arg3;
- (id)activeClientSecureSessions;
- (id)activeServerSecureSessions;
- (id)adminMsgFilter;
- (void)configureNotificationDispatcher:(id)arg1;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (id)identityRegistry;
- (id)initWithIDSTransport:(id)arg1 messageFilterChain:(id)arg2 identityRegistry:(id)arg3 notificationRelayDispatcher:(id)arg4;
- (id)msgFilterChain;
- (id)notificationDispatcher;
- (id)notificationRelay;
- (id)recvDispatcher;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id)arg3;
- (id)remoteGateways;
- (id)residentDevices;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(id)arg6;
- (void)setActiveClientSecureSessions:(id)arg1;
- (void)setActiveServerSecureSessions:(id)arg1;
- (void)setAdminMsgFilter:(id)arg1;
- (void)setIdentityRegistry:(id)arg1;
- (void)setMsgFilterChain:(id)arg1;
- (void)setNotificationDispatcher:(id)arg1;
- (void)setNotificationRelay:(id)arg1;
- (void)setRecvDispatcher:(id)arg1;
- (void)setRemoteAccessPeer:(id)arg1 forHome:(id)arg2;
- (void)setRemoteGateways:(id)arg1;
- (id)transientDevices;

@end
