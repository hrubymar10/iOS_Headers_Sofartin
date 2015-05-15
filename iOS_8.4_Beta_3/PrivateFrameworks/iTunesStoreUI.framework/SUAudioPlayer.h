/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUAudioPlayer : NSObject <AVAssetResourceLoaderDelegate> {
    AVURLAsset *_asset;
    NSURL *_certificateUrl;
    bool _didPostForPreviewHistory;
    NSURL *_keyUrl;
    NSMutableDictionary *_nowPlayingInfo;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    SUPlayerStatus *_status;
    long long _storeItemIdentifier;
    id _timeObserver;
    NSURL *_url;
}

@property(assign,readonly) NSURL * URL;
@property(assign,retain) NSURL * certificateURL;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSURL * keyURL;
@property(assign,readonly) SUPlayerStatus * playerStatus;
@property(assign,readwrite) long long storeItemIdentifier;
@property(assign,readonly) Class superclass;

- (id)URL;
- (void)_applyNowPlayingInfo;
- (void)_destroyPlayer;
- (void)_destroyPlayerItem;
- (void)_failWithError:(id)arg1;
- (void)_handleAssetValuesDidLoad;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (void)_itemPlayedToEndNotification:(id)arg1;
- (id)_newFadeInAudioMixForAsset:(id)arg1;
- (void)_postStatusChangeNotification;
- (void)_setPlayerState:(long long)arg1;
- (void)_updateForPeriodicTickWithTime:(double)arg1;
- (id)certificateURL;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)keyURL;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)playerStatus;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)seekToTime:(double)arg1;
- (void)setCertificateURL:(id)arg1;
- (void)setKeyURL:(id)arg1;
- (void)setStoreItemIdentifier:(long long)arg1;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (void)stop;
- (long long)storeItemIdentifier;
- (id)valueForNowPlayingKey:(id)arg1;

@end
