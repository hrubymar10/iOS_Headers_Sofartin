/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSIDSClient : NSObject <IDSServiceDelegate> {
    bool _companionAvailable;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
    IDSService *_idsService;
    NSMutableDictionary *_messageRecords;
}

@property (getter=isCompanionAvailable, nonatomic) bool companionAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)_handleAddToWishlistResponse:(id)arg1;
- (void)_handleAudioRoutesDidUpdate:(id)arg1;
- (void)_handleAvailableServicesDidUpdate:(id)arg1;
- (void)_handleBeginDiscoverySessionResponse:(id)arg1;
- (void)_handleBeginObservingNowPlayingResponse:(id)arg1;
- (void)_handleBeginPairingSessionResponse:(id)arg1;
- (void)_handleConnectToServiceResponse:(id)arg1;
- (void)_handleHeartbeatResponse:(id)arg1;
- (void)_handleNowPlayingArtworkAvailable:(id)arg1;
- (void)_handleNowPlayingArtworkDataResponse:(id)arg1;
- (void)_handleNowPlayingInfoDidUpdate:(id)arg1;
- (void)_handlePairingDidFail:(id)arg1;
- (void)_handlePairingDidSucceed:(id)arg1;
- (void)_handlePickAudioRouteResponse:(id)arg1;
- (void)_handleResponseCodeMessage:(id)arg1;
- (void)_handleSessionDidEnd:(id)arg1;
- (void)_handleSetLikedStateResponse:(id)arg1;
- (void)_handleTimeoutForMessageWithIdentifier:(id)arg1;
- (void)_handleVolumeDidUpdate:(id)arg1;
- (void)_handleWifiAvailabilityDidChange:(id)arg1;
- (void)_invokeArtworkDataResponseBlock:(id)arg1 artworkData:(id)arg2;
- (void)_invokeBeginDiscoveryResponseBlock:(id)arg1 success:(bool)arg2 session:(int)arg3;
- (void)_invokeBeginPairingResponseBlock:(id)arg1 responseCode:(long long)arg2 session:(int)arg3;
- (void)_invokeConnectToServiceResponseBlock:(id)arg1 responseCode:(long long)arg2 controlInterface:(id)arg3 session:(int)arg4;
- (void)_invokeResponseCodeResponseBlock:(id)arg1 responseCode:(long long)arg2;
- (bool)_isCompanionAvailable;
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 timeout:(int)arg3 queueOneID:(id)arg4 priority:(long long)arg5 responseBlock:(id)arg6;
- (void)_updateCompanionAvailability;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 sessionIdentifier:(int)arg3 completionHandler:(id)arg4;
- (void)beginDiscoverySessionWithDiscoveryTypes:(int)arg1 completionHandler:(id)arg2;
- (void)beginObservingNowPlayingWithSessionIdentifier:(int)arg1 completionHandler:(id)arg2;
- (void)beginPairingSessionWithPasscode:(id)arg1 appName:(id)arg2 deviceName:(id)arg3 deviceModel:(id)arg4 completionHandler:(id)arg5;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(id)arg3;
- (void)endDiscoverySession:(int)arg1;
- (void)endObservingNowPlayingWithSessionIdentifier:(int)arg1;
- (void)endPairingSession:(int)arg1;
- (id)init;
- (bool)isCompanionAvailable;
- (void)logoutWithSessionIdentifier:(int)arg1;
- (void)pickAudioRouteWithMacAddress:(unsigned long long)arg1 sessionIdentifier:(int)arg2 completionHandler:(id)arg3;
- (void)requestArtworkDataForNowPlayingInfo:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 compressionQuality:(float)arg4 completionHandler:(id)arg5;
- (void)seekToPlaybackTime:(int)arg1 sessionIdentifier:(int)arg2;
- (void)sendHeartbeatWithSessionIdentifier:(int)arg1 completionHandler:(id)arg2;
- (void)sendNavigationCommand:(long long)arg1 sessionIdentifier:(int)arg2;
- (void)sendPlaybackCommand:(long long)arg1 sessionIdentifier:(int)arg2;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2 sessionIdentifier:(int)arg3;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2 sessionIdentifier:(int)arg3;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setCompanionAvailable:(bool)arg1;
- (void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 sessionIdentifier:(int)arg4 completionHandler:(id)arg5;
- (void)setVolume:(float)arg1 sessionIdentifier:(int)arg2;

@end
