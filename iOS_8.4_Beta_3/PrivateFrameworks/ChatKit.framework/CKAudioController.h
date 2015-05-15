/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioController : NSObject <CKAudioPlayerDelegate> {
    CKAudioPlayer *_audioPlayer;
    unsigned long long _currentIndex;
    <CKAudioControllerDelegate> *_delegate;
    bool _interrupted;
    NSMutableArray *_mediaObjects;
    bool _paused;
    bool _playing;
    bool _shouldUseSpeaker;
}

@property (setter=_setMediaObjects:, nonatomic, retain) NSMutableArray *_mediaObjects;
@property (nonatomic, retain) CKAudioPlayer *audioPlayer;
@property (nonatomic, readonly, retain) CKMediaObject *currentMediaObject;
@property (nonatomic, readonly) double currentMediaObjectDuration;
@property (nonatomic, readonly) double currentMediaObjectTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAudioControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (nonatomic, readonly, retain) NSArray *mediaObjects;
@property (getter=isPaused, nonatomic) bool paused;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic) bool shouldUseSpeaker;
@property (readonly) Class superclass;

- (id)_mediaObjects;
- (void)_setMediaObjects:(id)arg1;
- (void)addMediaObject:(id)arg1;
- (void)addMediaObjects:(id)arg1;
- (id)audioPlayer;
- (void)audioPlayerCurrentTimeDidChange:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (void)audioSessionInterruption:(id)arg1;
- (id)currentMediaObject;
- (double)currentMediaObjectDuration;
- (double)currentMediaObjectTime;
- (void)dealloc;
- (id)delegate;
- (id)initWithMediaObjects:(id)arg1;
- (bool)interrupted;
- (bool)isPaused;
- (bool)isPlaying;
- (id)mediaObjects;
- (void)pause;
- (void)play;
- (void)playListenEndSound:(id)arg1;
- (void)playListenSound:(id)arg1;
- (void)setAudioPlayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setShouldUseSpeaker:(bool)arg1;
- (bool)shouldUseSpeaker;
- (void)stop;

@end
