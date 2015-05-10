/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommandCenter : NSObject <MPRemoteCommandDelegate> {
    NSMutableArray *_activeCommands;
    MPRemoteCommand *_advanceRepeatModeCommand;
    MPRemoteCommand *_advanceShuffleModeCommand;
    MPFeedbackCommand *_bookmarkCommand;
    MPPurchaseCommand *_buyAlbumCommand;
    MPPurchaseCommand *_buyTrackCommand;
    bool _canBeNowPlayingApplication;
    MPPurchaseCommand *_cancelDownloadCommand;
    MPRemoteCommand *_changePlaybackPositionCommand;
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;
    MPRemoteCommand *_createRadioStationCommand;
    MPFeedbackCommand *_dislikeCommand;
    MPRemoteCommand *_insertIntoPlaybackQueueCommand;
    MPFeedbackCommand *_likeCommand;
    void *_mediaRemoteCommandHandler;
    MPRemoteCommand *_nextTrackCommand;
    MPRemoteCommand *_pauseCommand;
    MPRemoteCommand *_playCommand;
    MPPurchaseCommand *_preOrderAlbumCommand;
    MPRemoteCommand *_previousTrackCommand;
    MPRatingCommand *_ratingCommand;
    bool _scheduledSupportedCommandsChangedNotification;
    MPRemoteCommand *_seekBackwardCommand;
    MPRemoteCommand *_seekForwardCommand;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MPRemoteCommand *_setPlaybackQueueCommand;
    MPSkipIntervalCommand *_skipBackwardCommand;
    MPSkipIntervalCommand *_skipForwardCommand;
    MPRemoteCommand *_specialSeekBackwardCommand;
    MPRemoteCommand *_specialSeekForwardCommand;
    MPRemoteCommand *_stopCommand;
    MPRemoteCommand *_togglePlayPauseCommand;
}

@property(assign,readonly) MPFeedbackCommand * bookmarkCommand;
@property(assign,readonly) MPChangePlaybackRateCommand * changePlaybackRateCommand;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) MPFeedbackCommand * dislikeCommand;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) MPFeedbackCommand * likeCommand;
@property(assign,readonly) MPRemoteCommand * nextTrackCommand;
@property(assign,readonly) MPRemoteCommand * pauseCommand;
@property(assign,readonly) MPRemoteCommand * playCommand;
@property(assign,readonly) MPRemoteCommand * previousTrackCommand;
@property(assign,readonly) MPRatingCommand * ratingCommand;
@property(assign,readonly) MPRemoteCommand * seekBackwardCommand;
@property(assign,readonly) MPRemoteCommand * seekForwardCommand;
@property(assign,readonly) MPSkipIntervalCommand * skipBackwardCommand;
@property(assign,readonly) MPSkipIntervalCommand * skipForwardCommand;
@property(assign,readonly) MPRemoteCommand * stopCommand;
@property(assign,readonly) Class superclass;
@property(assign,readonly) MPRemoteCommand * togglePlayPauseCommand;

+ (id)sharedCommandCenter;

- (void).cxx_destruct;
- (id)_activeCommands;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (struct __CFArray { }*)_copySupportedCommands;
- (id)_createRemoteCommandWithConcreteClass:(Class)arg1 mediaRemoteType:(unsigned int)arg2;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2;
- (void)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary { }*)arg2 completion:(id)arg3;
- (void)_scheduleSupportedCommandsChangedNotify;
- (void)_setupMediaRemoteCommandHandler;
- (void)_setupMediaRemoteControlClient;
- (void)_setupNotifications;
- (void)_teardownMediaRemoteCommandHandler;
- (void)_teardownMediaRemoteControlClient;
- (void)_teardownNotifications;
- (id)advanceRepeatModeCommand;
- (id)advanceShuffleModeCommand;
- (id)bookmarkCommand;
- (id)buyAlbumCommand;
- (id)buyTrackCommand;
- (id)cancelDownloadCommand;
- (id)changePlaybackPositionCommand;
- (id)changePlaybackRateCommand;
- (id)changeRepeatModeCommand;
- (id)changeShuffleModeCommand;
- (id)createRadioStationCommand;
- (void)dealloc;
- (id)dislikeCommand;
- (id)init;
- (id)insertIntoPlaybackQueueCommand;
- (id)likeCommand;
- (id)nextTrackCommand;
- (id)pauseCommand;
- (id)playCommand;
- (id)preOrderAlbumCommand;
- (id)previousTrackCommand;
- (id)ratingCommand;
- (void)remoteCommandDidMutatePropagatableProperty:(id)arg1;
- (id)seekBackwardCommand;
- (id)seekForwardCommand;
- (id)setPlaybackQueueCommand;
- (id)skipBackwardCommand;
- (id)skipForwardCommand;
- (id)specialSeekBackwardCommand;
- (id)specialSeekForwardCommand;
- (id)stopCommand;
- (id)togglePlayPauseCommand;

@end