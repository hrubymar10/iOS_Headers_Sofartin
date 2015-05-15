/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicPlaybackObserver : NSObject {
    MPMediaPlaylist *_lastIncrementedPlaylist;
    MusicLocalPlaybackEventDataSource *_localPlaybackEventDataSource;
    MPAVController *_player;
}

@property(assign,readonly) MusicLocalPlaybackEventDataSource * localPlaybackEventDataSource;
@property(assign,readonly) MPAVController * player;

+ (id)playbackObserverForPlayer:(id)arg1;

- (void).cxx_destruct;
- (void)_currentItemDidChange:(id)arg1;
- (void)_currentItemWillChange:(id)arg1;
- (id)_initWithPlayer:(id)arg1;
- (void)_registerForPlayerNotifications:(id)arg1;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)localPlaybackEventDataSource;
- (id)player;
- (void)setPlayer:(id)arg1;

@end