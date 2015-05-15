/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSession : NSObject {
    id _session;
}

@property (getter=isAvailable) bool available;
@property (getter=isBusy) bool busy;
@property (readonly) GKConnection *connection;
@property <GKSessionDelegate> *delegate;
@property double disconnectTimeout;
@property (readonly) NSString *displayName;
@property (readonly) NSString *peerID;
@property <GKSessionPrivateDelegate> *privateDelegate;
@property (readonly) NSString *sessionID;
@property (readonly) int sessionMode;
@property bool wifiEnabled;

+ (void)initialize;

- (bool)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2;
- (void)cancelConnectToPeer:(id)arg1;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)denyConnectionFromPeer:(id)arg1;
- (id)description;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (double)disconnectTimeout;
- (id)displayName;
- (id)displayNameForPeer:(id)arg1;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 sessionMode:(int)arg3;
- (bool)isAvailable;
- (bool)isBusy;
- (bool)isPeerBusy:(id)arg1;
- (id)peerID;
- (id)peersWithConnectionState:(int)arg1;
- (id)privateDelegate;
- (id)privateImpl;
- (bool)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (bool)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3;
- (id)sessionID;
- (int)sessionMode;
- (void)setAvailable:(bool)arg1;
- (void)setBusy:(bool)arg1;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDisconnectTimeout:(double)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setWifiEnabled:(bool)arg1;
- (bool)wifiEnabled;

@end
