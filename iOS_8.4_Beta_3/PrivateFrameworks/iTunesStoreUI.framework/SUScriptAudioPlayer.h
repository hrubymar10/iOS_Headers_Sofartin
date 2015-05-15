/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptAudioPlayer : SUScriptObject {
    NSURL *_certificateUrl;
    NSURL *_keyUrl;
    SUPlayerStatus *_playerStatus;
    NSURL *_url;
}

@property(assign,readonly) NSString * URL;
@property(assign,readonly) NSString * certificateURL;
@property(assign,readonly) double currentTime;
@property(assign,readonly) double duration;
@property(assign,readonly) NSString * keyURL;
@property(assign,readonly) NSString * nowPlayingKeyAlbumTitle;
@property(assign,readonly) NSString * nowPlayingKeyAlbumTrackCount;
@property(assign,readonly) NSString * nowPlayingKeyAlbumTrackNumber;
@property(assign,readonly) NSString * nowPlayingKeyArtist;
@property(assign,readonly) NSString * nowPlayingKeyArtwork;
@property(assign,readonly) NSString * nowPlayingKeyComposer;
@property(assign,readonly) NSString * nowPlayingKeyDiscCount;
@property(assign,readonly) NSString * nowPlayingKeyDiscNumber;
@property(assign,readonly) NSString * nowPlayingKeyGenre;
@property(assign,readonly) NSString * nowPlayingKeyPersistentID;
@property(assign,readonly) NSString * nowPlayingKeyPlaybackDuration;
@property(assign,readonly) NSString * nowPlayingKeyTitle;
@property(assign,readonly) long long playerStateActive;
@property(assign,readonly) long long playerStateBuffering;
@property(assign,readonly) long long playerStateFailed;
@property(assign,readonly) long long playerStateFinished;
@property(assign,readonly) long long playerStatePaused;
@property(assign,readonly) long long playerStateUnplayed;
@property(assign,readonly) long long state;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)URL;
- (void)_audioPlayerStateChangeNotification:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (id)certificateURL;
- (double)currentTime;
- (void)dealloc;
- (double)duration;
- (id)initWithURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3;
- (id)keyURL;
- (id)nowPlayingKeyAlbumTitle;
- (id)nowPlayingKeyAlbumTrackCount;
- (id)nowPlayingKeyAlbumTrackNumber;
- (id)nowPlayingKeyArtist;
- (id)nowPlayingKeyArtwork;
- (id)nowPlayingKeyComposer;
- (id)nowPlayingKeyDiscCount;
- (id)nowPlayingKeyDiscNumber;
- (id)nowPlayingKeyGenre;
- (id)nowPlayingKeyPersistentID;
- (id)nowPlayingKeyPlaybackDuration;
- (id)nowPlayingKeyTitle;
- (void)pause;
- (void)play;
- (long long)playerStateActive;
- (long long)playerStateBuffering;
- (long long)playerStateFailed;
- (long long)playerStateFinished;
- (long long)playerStatePaused;
- (long long)playerStateUnplayed;
- (id)scriptAttributeKeys;
- (void)setValue:(id)arg1 forNowPlayingKey:(id)arg2;
- (long long)state;
- (void)stop;

@end
