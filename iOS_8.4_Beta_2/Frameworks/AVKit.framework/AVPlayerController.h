/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerController : UIResponder {
    NSError *_error;
    AVPlayer *_player;
    long long _status;
}

@property(assign,readwrite) bool CALayerDestinationIsTVOut;
@property(assign,readonly) NSError * error;
@property(assign,readonly) AVPlayer * player;
@property(getter=isPlayingOnSecondScreen,assign,readwrite) bool playingOnSecondScreen;
@property(assign,readonly) long long status;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)CALayerDestinationIsTVOut;
- (bool)allowsExternalPlayback;
- (id)audioMediaSelectionOptions;
- (void)autoplay:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (bool)canPause;
- (bool)canPlay;
- (bool)canScanBackward;
- (bool)canScanForward;
- (bool)canSeek;
- (bool)canSeekChapterBackward;
- (bool)canSeekChapterForward;
- (bool)canSeekFrameBackward;
- (bool)canSeekFrameForward;
- (bool)canSeekToBeginning;
- (bool)canSeekToEnd;
- (bool)canTogglePlayback;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (id)contentChapters;
- (struct CGSize { double x1; double x2; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (id)currentAudioMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (void)decreaseVolume:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (id)error;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (long long)externalPlaybackType;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (bool)hasAudioMediaSelectionOptions;
- (bool)hasContent;
- (bool)hasContentChapters;
- (bool)hasEnabledAudio;
- (bool)hasEnabledVideo;
- (bool)hasLegibleMediaSelectionOptions;
- (bool)hasLiveStreamingContent;
- (bool)hasMediaSelectionOptions;
- (bool)hasShareableContent;
- (bool)hasTrimmableContent;
- (void)increaseVolume:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (bool)isExternalPlaybackActive;
- (bool)isLooping;
- (bool)isPlaying;
- (bool)isPlayingOnExternalScreen;
- (bool)isPlayingOnSecondScreen;
- (bool)isSeeking;
- (id)legibleMediaSelectionOptions;
- (id)loadedTimeRanges;
- (double)maxTime;
- (id)metadata;
- (double)minTime;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)player;
- (double)rate;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekFrameBackward:(id)arg1;
- (void)seekFrameForward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (void)seekToChapter:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (id)seekableTimeRanges;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setCALayerDestinationIsTVOut:(bool)arg1;
- (void)setCanPause:(bool)arg1;
- (void)setContentDuration:(double)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setLooping:(bool)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setMinTime:(double)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setRate:(double)arg1;
- (void)setRateWithThrottling:(double)arg1;
- (void)setVolume:(double)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (long long)status;
- (id)timing;
- (void)toggleMuted:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (double)volume;

@end
