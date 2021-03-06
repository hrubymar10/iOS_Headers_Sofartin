/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSDAAPControlSession : NSObject <RMSDAAPControlSession, RMSDAAPNowPlayingManagerDelegate, RMSDAAPRequestManagerDelegate, RMSDAAPTouchRemoteManagerDelegate> {
    <RMSDAAPControlSessionDelegate> *_delegate;
    RMSDAAPLoginManager *_loginManager;
    RMSNowPlayingInfo *_nowPlayingInfo;
    RMSDAAPNowPlayingManager *_nowPlayingManager;
    RMSDAAPRequestManager *_requestManager;
    RMSService *_service;
    RMSDAAPTouchRemoteManager *_touchRemoteManager;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <RMSDAAPControlSessionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) RMSService * service;
@property(assign,readonly) Class superclass;

+ (id)localControlSession;
+ (id)proxyControlSession;

- (void).cxx_destruct;
- (void)_initializeManagersWithControlInterface:(id)arg1 completionHandler:(id)arg2;
- (id)_stringFromRMSPlaybackCommand:(long long)arg1;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(id)arg3;
- (void)beginObservingNowPlaying;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endObservingNowPlaying;
- (id)init;
- (void)logout;
- (void)nowPlayingManager:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
- (void)nowPlayingManager:(id)arg1 didUpdateAudioRoutes:(id)arg2;
- (void)nowPlayingManager:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
- (void)nowPlayingManager:(id)arg1 didUpdateVolume:(float)arg2;
- (void)pickAudioRoute:(id)arg1 completionHandler:(id)arg2;
- (void)requestManagerFailedWithUnauthorizedError:(id)arg1;
- (void)requestManagerFailedWithUnknownError:(id)arg1;
- (void)seekToPlaybackTime:(int)arg1 completionHandler:(id)arg2;
- (void)sendNavigationCommand:(long long)arg1;
- (void)sendPlaybackCommand:(long long)arg1 completionHandler:(id)arg2;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)setVolume:(float)arg1 completionHandler:(id)arg2;
- (void)touchRemoteManagerDidDisconnect:(id)arg1;

@end
