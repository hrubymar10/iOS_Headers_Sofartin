/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer> {
    IKAppPlayerBridge *_bridge;
    bool _holdingSelfReference;
    NSMutableDictionary *_observedMetadataKeys;
    long long _playerState;
    IKJSPlaylist *_playlist;
}

@property (nonatomic, readonly) IKAppPlayerBridge *bridge;
@property (nonatomic, readonly) IKJSMediaItem *currentMediaItem;
@property (nonatomic, readonly) bool ended;
@property (nonatomic, readonly) bool paused;
@property (nonatomic, readonly) bool playing;
@property (nonatomic, retain) IKJSPlaylist *playlist;
@property (nonatomic, readonly) bool seeking;

- (void).cxx_destruct;
- (void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3;
- (id)bridge;
- (id)currentMediaItem;
- (bool)ended;
- (id)init;
- (void)pause;
- (bool)paused;
- (void)play;
- (bool)playing;
- (id)playlist;
- (void)removeEventListener:(id)arg1 :(id)arg2;
- (bool)seeking;
- (void)setCurrentTime:(double)arg1;
- (void)setPlaybackRate:(double)arg1;
- (void)setPlaylist:(id)arg1;
- (long long)state;
- (void)stateDidChange:(id)arg1;
- (void)stop;
- (void)timedMetadataDidChange:(id)arg1 value:(id)arg2;

@end
