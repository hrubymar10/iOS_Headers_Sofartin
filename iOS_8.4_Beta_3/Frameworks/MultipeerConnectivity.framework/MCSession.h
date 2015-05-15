/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSession : NSObject {
    struct OpaqueAGPSession { } *_agpSession;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_connectionPendingPeerEvents;
    <MCSessionDelegate> *_delegate;
    long long _encryptionPreference;
    unsigned int _gckPID;
    struct OpaqueGCKSession { } *_gckSession;
    MCPeerID *_myPeerID;
    NSMutableDictionary *_peerIDMap;
    NSMutableDictionary *_peerStates;
    <MCSessionPrivateDelegate> *_privateDelegate;
    NSArray *_securityIdentity;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property(assign,readwrite) struct OpaqueAGPSession { }* agpSession;
@property(assign,retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property(assign,readonly) NSArray * connectedPeers;
@property(assign,retain) NSMutableDictionary * connectionPendingPeerEvents;
@property(assign,readwrite) <MCSessionDelegate> * delegate;
@property(assign,readonly) long long encryptionPreference;
@property(assign,readwrite) unsigned int gckPID;
@property(assign,readwrite) struct OpaqueGCKSession { }* gckSession;
@property(assign,readonly) MCPeerID * myPeerID;
@property(assign,retain) NSMutableDictionary * peerIDMap;
@property(assign,retain) NSMutableDictionary * peerStates;
@property(assign,readwrite) <MCSessionPrivateDelegate> * privateDelegate;
@property(assign,readwrite) <MCSessionPrivateDelegate> * privateDelegate;
@property(assign,readonly) NSArray * securityIdentity;
@property(assign,retain) NSObject<OS_dispatch_queue> * syncQueue;

+ (id)stringForMCSessionSendDataMode:(long long)arg1;
+ (id)stringForSessionState:(long long)arg1;

- (struct OpaqueAGPSession { }*)agpSession;
- (id)callbackQueue;
- (void)cancelConnectPeer:(id)arg1;
- (void)cancelIncomingStream:(id)arg1 fromPeer:(id)arg2;
- (void)cancelOutgoingStream:(id)arg1 toPeer:(id)arg2;
- (void)connectPeer:(id)arg1 withNearbyConnectionData:(id)arg2;
- (id)connectedPeers;
- (id)connectionPendingPeerEvents;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)disconnect;
- (long long)encryptionPreference;
- (unsigned int)gckPID;
- (struct OpaqueGCKSession { }*)gckSession;
- (id)initWithPeer:(id)arg1;
- (id)initWithPeer:(id)arg1 securityIdentity:(id)arg2 encryptionPreference:(long long)arg3;
- (bool)isEncryptionPreferenceCompatible:(long long)arg1;
- (id)myPeerID;
- (void)nearbyConnectionDataForPeer:(id)arg1 withCompletionHandler:(id)arg2;
- (void)peerDidDeclineInvitation:(id)arg1;
- (id)peerIDMap;
- (id)peerStates;
- (id)privateDelegate;
- (id)securityIdentity;
- (bool)sendData:(id)arg1 toPeers:(id)arg2 withMode:(long long)arg3 error:(id*)arg4;
- (id)sendResourceAtURL:(id)arg1 withName:(id)arg2 toPeer:(id)arg3 withCompletionHandler:(id)arg4;
- (void)setAgpSession:(struct OpaqueAGPSession { }*)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setConnectionPendingPeerEvents:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGckPID:(unsigned int)arg1;
- (void)setGckSession:(struct OpaqueGCKSession { }*)arg1;
- (void)setPeerIDMap:(id)arg1;
- (void)setPeerStates:(id)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)startConnectionWithIndirectPID:(unsigned int)arg1;
- (id)startStreamWithName:(id)arg1 toPeer:(id)arg2 error:(id*)arg3;
- (id)stringForEncryptionPreference:(long long)arg1;
- (void)syncCancelIncomingStream:(id)arg1 fromPeer:(id)arg2;
- (void)syncCancelOutgoingStream:(id)arg1 toPeer:(id)arg2;
- (void)syncCloseIncomingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 reason:(int)arg5 removeObserver:(bool)arg6;
- (void)syncCloseOutgoingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 removeObserver:(bool)arg5;
- (void)syncCloseStreamsForPeer:(id)arg1;
- (void)syncConnectPeer:(id)arg1 withConnectionData:(id)arg2;
- (void)syncGetConnectionDataForPeerState:(id)arg1 completionHandler:(id)arg2;
- (void)syncHandleNetworkEvent:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1 pid:(unsigned int)arg2 freeEventWhenDone:(bool*)arg3;
- (void)syncHandleXDataDataPacket:(char *)arg1 packetSize:(int)arg2 forPeer:(id)arg3 state:(id)arg4;
- (void)syncPeer:(id)arg1 changeStateTo:(long long)arg2 shouldForceCallback:(bool)arg3;
- (id)syncQueue;
- (void)syncSendData:(id)arg1 toPeers:(id)arg2 withDataMode:(long long)arg3;
- (void)syncSendXDataConnectionBlobPushToPID:(unsigned int)arg1 connectionBlob:(id)arg2;
- (void)syncSendXDataPeerIDPushToPID:(unsigned int)arg1;
- (void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;
- (void)syncSendXDataStreamCloseFromSenderToPID:(unsigned int)arg1 streamID:(unsigned int)arg2 closeReason:(unsigned short)arg3;
- (void)syncSendXDataStreamOpenResponseToPID:(unsigned int)arg1 withRequestID:(unsigned int)arg2 streamID:(unsigned int)arg3;
- (void)syncStartStreamWithName:(id)arg1 toPeer:(id)arg2 mcFD:(int)arg3 isResource:(bool)arg4;

@end