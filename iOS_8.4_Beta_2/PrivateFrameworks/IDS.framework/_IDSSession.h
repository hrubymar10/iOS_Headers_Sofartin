/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSSession : NSObject <IDSBaseSocketPairConnectionDelegate, IDSDaemonListenerProtocol> {
    NSString *_accountID;
    id _boostContext;
    CUTWeakReference *_delegate;
    id _delegateContext;
    NSSet *_destinations;
    long long _inviteTimeout;
    bool _isAudioEnabled;
    bool _isLegacy;
    bool _isMuted;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _sessionEndedReason;
    int _socket;
    unsigned int _state;
    long long _transportType;
    NSString *_uniqueID;
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;
}

@property(assign,retain) id boostContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long inviteTimeout;
@property(assign,readonly) unsigned int sessionEndedReason;
@property(assign,readonly) int socket;
@property(assign,readonly) unsigned int state;
@property(assign,readonly) Class superclass;

- (void)_broadcastNewSessionToDaemon;
- (void)_callDelegateWithBlock:(id)arg1;
- (void)_cleanupSocketPairConnections;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (void)_setupSocketPairToDaemon;
- (void)_setupUnreliableSocketPairConnection;
- (void)acceptInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (id)boostContext;
- (void)cancelInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)daemonDisconnected;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (void)endSession;
- (void)endSessionWithData:(id)arg1;
- (bool)getAudioEnabled;
- (bool)getMuted;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5;
- (long long)inviteTimeout;
- (bool)sendData:(id)arg1 error:(id*)arg2;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(bool)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)session:(id)arg1 audioEnabled:(bool)arg2;
- (void)session:(id)arg1 muted:(bool)arg2;
- (void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (unsigned int)sessionEndedReason;
- (void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)setAudioEnabled:(bool)arg1;
- (void)setBoostContext:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setInviteTimeout:(long long)arg1;
- (void)setMuted:(bool)arg1;
- (int)socket;
- (unsigned int)state;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end
