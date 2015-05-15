/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSIDSServer : NSObject <IDSServiceDelegate, RMSDAAPControlSessionDelegate, RMSDiscoverySessionDelegate, RMSPairingSessionDelegate, RMSSessionManagerDelegate> {
    IDSService *_idsService;
    NSMutableDictionary *_nowPlayingSessions;
    NSMutableDictionary *_pairingSessions;
    RMSSessionManager *_sessionManager;
    NSMutableDictionary *_touchRemoteSessions;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)server;

- (void).cxx_destruct;
- (void)_cleanupStaleSessions:(id)arg1;
- (void)_handleAddToWishlist:(id)arg1;
- (void)_handleBeginDiscovery:(id)arg1;
- (void)_handleBeginObservingNowPlaying:(id)arg1;
- (void)_handleBeginPairing:(id)arg1;
- (void)_handleConnectToService:(id)arg1;
- (void)_handleEndDiscovery:(id)arg1;
- (void)_handleEndObservingNowPlaying:(id)arg1;
- (void)_handleEndPairing:(id)arg1;
- (void)_handleLogout:(id)arg1;
- (void)_handleNavigationCommand:(id)arg1;
- (void)_handleNowPlayingArtworkRequest:(id)arg1;
- (void)_handlePickAudioRoute:(id)arg1;
- (void)_handlePlaybackCommand:(id)arg1;
- (void)_handleSeekToPlaybackTime:(id)arg1;
- (void)_handleSessionHeartbeat:(id)arg1;
- (void)_handleSetLikeState:(id)arg1;
- (void)_handleSetVolume:(id)arg1;
- (void)_handleTouchEnd:(id)arg1;
- (void)_handleTouchMove:(id)arg1;
- (void)_sendData:(id)arg1 type:(unsigned short)arg2 priority:(long long)arg3 timeout:(int)arg4 queueOneID:(id)arg5 inResponseTo:(id)arg6;
- (void)_sendData:(id)arg1 type:(unsigned short)arg2 timeout:(int)arg3 queueOneID:(id)arg4 inResponseTo:(id)arg5;
- (void)controlSession:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
- (void)controlSession:(id)arg1 didUpdateAudioRoutes:(id)arg2;
- (void)controlSession:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
- (void)controlSession:(id)arg1 didUpdateVolume:(float)arg2;
- (void)controlSessionDidEnd:(id)arg1;
- (void)discoverySessionDidUpdateAvailableServices:(id)arg1;
- (void)discoverySessionNetworkAvailabilityDidChange:(id)arg1;
- (id)init;
- (void)pairingSession:(id)arg1 didPairWithServiceNetworkName:(id)arg2 pairingGUID:(id)arg3;
- (void)pairingSessionDidFail:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sessionManager:(id)arg1 sessionDidTimeout:(int)arg2;

@end
