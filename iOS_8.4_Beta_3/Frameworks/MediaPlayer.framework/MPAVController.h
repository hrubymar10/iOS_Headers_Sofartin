/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVController : NSObject <AVAudioSessionDelegateMediaPlayerOnly, MPAVErrorResolverDelegate, MPAVPlaylistManagerDelegate, MPAVRoutingControllerDelegate> {
    unsigned int _activeRewindHoldingAtStart;
    MPAVControllerToAggregateDCommunicator *_aggregateDCommunicator;
    unsigned int _alwaysPlayWheneverPossible;
    NSString *_audioSessionModeOverride;
    unsigned int _autoPlayWhenLikelyToKeepUp;
    unsigned int _autoplayDisabledForCurrentItem;
    unsigned long long _boundaryTimeIndexLastPosted;
    id _boundaryTimeObserver;
    NSArray *_boundaryTimes;
    unsigned long long _bufferingState;
    unsigned int _canPlayFastForward;
    unsigned int _canPlayFastReverse;
    unsigned int _canSeekFwd;
    unsigned int _canSeekRev;
    NSMutableSet *_clientsWantingAirPlayVideo;
    struct __CFRunLoopTimer { } *_currentItemBookkeepingTimer;
    bool _currentItemDidLoad;
    long long _currentItemRevisionID;
    bool _currentItemStartedAsCloudItem;
    long long _delayedCurrentTimeOptions;
    double _delayedCurrentTimeToSet;
    NSNotification *_delayedPlaybackStateNotification;
    unsigned int _didReachEnd;
    bool _didResolveError;
    bool _disableAirPlayMirroringDuringPlayback;
    bool _disallowsAMRAudio;
    long long _displayOverridePlaybackState;
    long long _feederMode;
    unsigned int _forceDelayedCurrentTimeToSet;
    unsigned int _hasDelayedCurrentTimeToSet;
    long long _indexChangeDirection;
    float _inflightSeekRate;
    unsigned int _isSeekingOrScrubbing;
    NSDate *_itemDidChangeDate;
    MPAVErrorResolver *_itemErrorResolver;
    unsigned long long _itemIndexAtDeath;
    double _itemInitialBookmarkTime;
    long long _lastDisconnectReason;
    double _lastInterruptionEnd;
    double _lastKnownTimeBeforeDeath;
    double _lastLoadedTime;
    double _lastPlaybackIndexChangeTime;
    double _lastSeekableEnd;
    double _lastSeekableStart;
    double _lastSetTime;
    double _lastSetTimeChangeTime;
    unsigned long long _lastSetTimeMarker;
    bool _managesAirPlayBehaviors;
    double _maxSeekableFwd;
    double _maxSeekableRev;
    bool _muted;
    double _nextFadeOutDuration;
    NSMapTable *_observerInfoToCoreMediaObserver;
    NSMutableArray *_observerInfos;
    unsigned int _pausedDuringInterruption;
    MPAVRoute *_pickedRoute;
    unsigned int _playInBackgroundUserDefaultEnabled;
    long long _playbackMode;
    MPAVPlaylistManager *_playlistManager;
    float _rateBeforeResignActive;
    float _rateBeforeSeek;
    unsigned int _resetRateAfterSeeking;
    long long _resetRateAfterSeekingUpdateDisabled;
    unsigned int _resumePlaybackWhenActive;
    MPAVRoutingController *_routingController;
    long long _scanDirection;
    unsigned long long _scanLevel;
    double _secondsSinceUbiquitousCheckpoint;
    double _seekFwdSlop;
    double _seekRevSlop;
    long long _seeklessState;
    unsigned int _shouldAutoclearDisplayOverride;
    bool _shouldEnforceHDCP;
    bool _shouldPreventStateChangesForRateChange;
    bool _shouldSkipToNextTrackOnResumeFromInterruption;
    unsigned long long _stallBackgroundTaskIdentifier;
    NSObject<OS_dispatch_source> *_stallTimerSource;
    long long _state;
    unsigned int _stopAtEnd;
    double _temporaryChapterTime;
    double _tickInterval;
    struct __CFRunLoopTimer { } *_tickTimer;
    unsigned long long _tickTimerEnabled;
    long long _ubiquitousBookkeepingDisabledCount;
    bool _useAirPlayMusicMode;
    unsigned int _useApplicationAudioSession;
    bool _usesAudioOnlyModeForExternalPlayback;
    bool _valid;
    AVPlayerLayer *_videoLayer;
    unsigned long long _videoLayerUsageCount;
    MPVideoView *_videoView;
    Class _videoViewClass;
    double _whenSawSeekableEnd;
    double _whenSawSeekableStart;
}

@property(assign,readonly) long long _displayPlaybackState;
@property(assign,readonly) AVAudioSessionMediaPlayerOnly * _playerAVAudioSession;
@property(assign,readonly) float _playerRate;
@property(assign,readonly) unsigned long long activeRepeatType;
@property(assign,readonly) unsigned long long activeShuffleType;
@property(assign,readwrite) bool alwaysPlayWheneverPossible;
@property(assign,retain) NSString * audioSessionModeOverride;
@property(assign,readwrite) bool autoPlayWhenLikelyToKeepUp;
@property(assign,readonly) MPQueuePlayer * avPlayer;
@property(assign,readonly) unsigned long long bufferingState;
@property(assign,readwrite) bool closedCaptioningEnabled;
@property(assign,readonly) MPAVItem * currentItem;
@property(assign,readonly) bool currentItemIsRental;
@property(assign,readonly) MPMediaItem * currentMediaItem;
@property(assign,readonly) MPMediaQuery * currentMediaQuery;
@property(assign,readonly) double currentMonotonousTime;
@property(assign,readwrite) double currentTime;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(getter=destinationIsTVOut,setter=setDestinationIsTVOut:,assign,readwrite) bool destinationIsTVOut;
@property(assign,readwrite) bool disableAirPlayMirroringDuringPlayback;
@property(assign,readwrite) bool disallowsAMRAudio;
@property(assign,readwrite) long long displayOverridePlaybackState;
@property(assign,readonly) double durationOfCurrentItemIfAvailable;
@property(assign,readonly) long long externalPlaybackType;
@property(assign,copy) NSString * externalPlaybackVideoGravity;
@property(assign,readonly) MPQueueFeeder * feeder;
@property(assign,readwrite) long long feederMode;
@property(assign,readonly) bool hasVolumeControl;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isCurrentItemReady;
@property(assign,readonly) bool isExternalPlaybackActive;
@property(assign,readwrite) bool managesAirPlayBehaviors;
@property(assign,readonly) bool muted;
@property(assign,readwrite) double nextFadeOutDuration;
@property(assign,readonly) double playableDurationOfCurrentItemIfAvailable;
@property(assign,readonly) MPPlayerPlaybackLeaseController * playbackLeaseController;
@property(assign,readwrite) long long playbackMode;
@property(getter=isPlaying,assign,readonly) bool playing;
@property(getter=_playlistManager,assign,retain) MPAVPlaylistManager * playlistManager;
@property(assign,readonly) float rate;
@property(assign,readwrite) unsigned long long repeatType;
@property(getter=isRewindHoldingAtStart,assign,readonly) bool rewindHoldingAtStart;
@property(assign,readonly) NSString * routeNameForVolumeControl;
@property(assign,readonly) MPAVRoutingController * routingController;
@property(assign,readwrite) bool shouldEnforceHDCP;
@property(assign,readwrite) bool shouldSkipToNextTrackOnResumeFromInterruption;
@property(assign,readonly) bool showPlaybackStateOverlaysOnTVOut;
@property(assign,readwrite) unsigned long long shuffleType;
@property(getter=isShuffled,assign,readonly) bool shuffled;
@property(assign,readwrite) long long state;
@property(assign,readwrite) bool stopAtEnd;
@property(assign,readonly) Class superclass;
@property(getter=isTickTimerEnabled,assign,readonly) bool tickTimerEnabled;
@property(assign,readwrite) bool ubiquitousBookkeepingEnabled;
@property(assign,readwrite) bool useAirPlayMusicMode;
@property(assign,readwrite) bool useApplicationAudioSession;
@property(assign,readwrite) bool usesAudioOnlyModeForExternalPlayback;
@property(getter=isValid,assign,readonly) bool valid;
@property(assign,readonly) AVPlayerLayer * videoLayer;
@property(assign,readonly) MPVideoView * videoView;
@property(assign,readwrite) float volume;

+ (id)_itemKeysToObserve;
+ (id)_playerKeysToObserve;
+ (void)initialize;
+ (bool)isNetworkSupportedPath:(id)arg1;
+ (bool)outputSupportsAC3;
+ (Class)playlistManagerClass;

- (void).cxx_destruct;
- (unsigned int)RTCReportingFlags;
- (void)_addObserverInfo:(id)arg1 forCoreMediaObserver:(id)arg2 forInitialCreation:(bool)arg3;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applyAirPlayMusicMode;
- (void)_attemptAutoPlay;
- (bool)_canPlayItem:(id)arg1;
- (void)_cancelStallTimer;
- (void)_cancelUpdateCurrentItemBookkeepingTimer;
- (bool)_changeChapterTimeMarkerIndexBy:(long long)arg1;
- (void)_checkForBoundaryTimeCrossing;
- (void)_clearLastSetTimeIfPlayerTimeIsValid;
- (void)_clearResetRateAfterSeeking;
- (void)_clearSeekingIntervalsForStreaming;
- (void)_clearVideoLayer;
- (void)_configureAVPlaylistManager;
- (void)_configureUpdateCurrentItemBookkeepingTimer;
- (void)_connectAVPlayer;
- (unsigned long long)_currentIndexInBoundaryCMTimes:(id)arg1;
- (double)_currentTimeWithPreloadedPlayerTime:(bool)arg1 value:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_delayedPlaybackIndexChange;
- (void)_delayedPostPlaybackStateChangedNotification;
- (void)_delayedSetCurrentTime;
- (void)_delayedUpdateScanningRate;
- (void)_delayedUpdateTimeMarker;
- (void)_disconnectAVPlayerWithReason:(long long)arg1;
- (long long)_displayPlaybackState;
- (void)_durationDidChange:(id)arg1;
- (void)_endSeekAndChangeRate:(bool)arg1;
- (id)_expectedAssetTypesForPlaybackMode:(long long)arg1;
- (id)_extractImageFromMetadata:(id)arg1;
- (void)_firstVideoFrameDisplayed:(id)arg1;
- (bool)_hasEnoughDataToPlay;
- (bool)_isChangingPlayerProperties;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (bool)_isVideoLayerAttachedToPlayer;
- (void)_itemAssetIsLoadedNotification:(id)arg1;
- (void)_itemDidChange:(id)arg1;
- (void)_itemFailedToPlayToEnd:(id)arg1;
- (void)_itemFailedToPlayToEndNotification:(id)arg1;
- (bool)_itemIsRestricted:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemReadyToPlay:(id)arg1;
- (void)_itemTimeMarkersAvailableNotification:(id)arg1;
- (void)_itemTypeAvailableNotification:(id)arg1;
- (void)_itemWillChange:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_networkChangedNotification:(id)arg1;
- (void)_pauseBookkeepingTimer;
- (void)_pausePlaybackIfNecessary;
- (void)_pausePlaybackIfNecessaryIgnoringVideoLayerAttachment:(bool)arg1;
- (void)_pauseTickTimer;
- (id)_pickedRoute;
- (void)_playbackFailedWithError:(id)arg1 canResolve:(bool)arg2;
- (id)_playerAVAudioSession;
- (void)_playerFailedToQueueNotification:(id)arg1;
- (float)_playerRate;
- (id)_playlistManager;
- (void)_postMPAVControllerItemReadyToPlayNotificationWithItem:(id)arg1;
- (void)_postMPAVControllerSizeDidChangeNotificationWithItem:(id)arg1;
- (void)_postPlaybackStateChangedNotificationWithOriginalState:(long long)arg1 newState:(long long)arg2 delayable:(bool)arg3;
- (void)_prepareToPlayItem:(id)arg1;
- (void)_rateDidChange:(id)arg1;
- (void)_registerForAVItemNotifications:(id)arg1;
- (void)_reloadTimeMarkerObservationsForItem:(id)arg1;
- (void)_resetInternalState;
- (void)_resetQueue:(bool)arg1 useVideoLayer:(bool)arg2;
- (void)_resumeBookkeepingTimer;
- (void)_resumePlaybackIfNecessary;
- (void)_resumeTickTimer;
- (void)_scheduleUpdateCurrentItemBookkeepingTimer;
- (long long)_seeklessStateForState:(long long)arg1;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_setActionAtEndAttributeForState:(long long)arg1;
- (void)_setBufferingState:(unsigned long long)arg1;
- (void)_setItemErrorResolver:(id)arg1;
- (void)_setLastSetTime:(double)arg1;
- (bool)_setRate:(float)arg1 forScanning:(bool)arg2;
- (void)_setState:(long long)arg1;
- (void)_setValid:(bool)arg1;
- (void)_setVideoLayerAttachedToPlayer:(bool)arg1 force:(bool)arg2 pauseIfNecessary:(bool)arg3;
- (bool)_shouldSwitchToAudioPlaybackWhenTransitioningFromVideo;
- (bool)_showsPlayingWhenInState:(long long)arg1;
- (void)_sizeDidChange:(id)arg1;
- (void)_streamBufferFull:(id)arg1;
- (void)_streamLikelyToKeepUp:(id)arg1;
- (void)_streamRanDry:(id)arg1;
- (void)_streamUnlikelyToKeepUp:(id)arg1;
- (void)_timeHasJumpedNotification:(id)arg1;
- (void)_timedMetadataAvailable:(id)arg1;
- (void)_tracksDidChange:(id)arg1;
- (void)_unregisterForAVItemNotifications:(id)arg1;
- (void)_unregisterForPlaylistManager:(id)arg1;
- (void)_updateCurrentItemBookkeepingForTimerCallback;
- (void)_updateCurrentItemBookkeepingMarkedAsCheckpoint:(bool)arg1;
- (void)_updateCurrentTimeToBookmarkTimeForDynamicPropertyChange;
- (void)_updateCurrentTimeToNextStartTimeForQueueFeeder:(id)arg1 withItemIndex:(long long)arg2;
- (void)_updateProgress:(struct __CFRunLoopTimer { }*)arg1;
- (void)_updateScanningRate;
- (void)_updateSeekingIntervalsForStreaming;
- (void)_verifyDisplayProtection;
- (void)_volumeDidChangeNotification:(id)arg1;
- (unsigned long long)activeRepeatType;
- (unsigned long long)activeShuffleType;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 usingBlock:(id)arg2;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(id)arg2;
- (void)airPlayVideoEnded;
- (bool)allowsExternalPlayback;
- (bool)alwaysPlayWheneverPossible;
- (void)applyRepeatSettings;
- (void)applyShuffleSettings;
- (id)audioSessionModeOverride;
- (bool)autoPlayWhenLikelyToKeepUp;
- (void)autoclearDisplayOverride;
- (id)avPlayer;
- (void)beginInterruption;
- (void)beginSeek:(int)arg1;
- (void)beginTickTimerWithInterval:(double)arg1;
- (void)beginUsingVideoLayer;
- (unsigned long long)bufferingState;
- (bool)canPlayFastReverse;
- (bool)canSeekBackwards;
- (bool)canSeekForwards;
- (bool)canSkipToSeekableEnd;
- (void)changePlaybackIndexBy:(long long)arg1;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(bool)arg3;
- (void)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(bool)arg3 allowSkippingUnskippableContent:(bool)arg4;
- (bool)changePlaybackIndexBy:(long long)arg1 deltaType:(long long)arg2 ignoreElapsedTime:(bool)arg3 allowSkippingUnskippableContent:(bool)arg4 error:(id*)arg5;
- (bool)closedCaptioningEnabled;
- (id)currentItem;
- (bool)currentItemIsRental;
- (id)currentMediaItem;
- (id)currentMediaQuery;
- (double)currentMonotonousTime;
- (double)currentTime;
- (double)currentTimeForBookmarking;
- (void)dealloc;
- (bool)destinationIsTVOut;
- (bool)disableAirPlayMirroringDuringPlayback;
- (void)disableAutoplayForCurrentItem;
- (bool)disallowsAMRAudio;
- (long long)displayOverridePlaybackState;
- (double)durationOfCurrentItemIfAvailable;
- (id)embeddedDataTimesForItem:(id)arg1;
- (void)enableAutoplayForCurrentItem;
- (void)endInterruptionFromInterruptor:(id)arg1 category:(id)arg2 flags:(unsigned long long)arg3;
- (void)endPlayback;
- (void)endSeek;
- (void)endTickTimer;
- (void)endUsingVideoLayer;
- (void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3;
- (long long)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (id)feeder;
- (long long)feederMode;
- (void)finalizeBookkeepingNow;
- (bool)forceRestartPlaybackIfNecessary;
- (bool)hasVolumeControl;
- (id)init;
- (bool)isCurrentItemReady;
- (bool)isExternalPlaybackActive;
- (bool)isLiveStreaming;
- (bool)isPlaying;
- (bool)isRewindHoldingAtStart;
- (bool)isSeekingOrScrubbing;
- (bool)isShuffled;
- (bool)isTickTimerEnabled;
- (bool)isValid;
- (bool)managesAirPlayBehaviors;
- (bool)muted;
- (double)nextFadeOutDuration;
- (void)notifyAVPlayerItemDidChange:(id)arg1;
- (void)notifyAVPlayerItemWillChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)pauseWithFadeout:(float)arg1;
- (void)play;
- (void)playChapterTimeMarkerAtIndex:(unsigned long long)arg1;
- (void)playChapterTimeMarkerAtIndex:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)playItemAtIndex:(unsigned long long)arg1;
- (void)playItemAtIndex:(unsigned long long)arg1 forceRestart:(bool)arg2;
- (void)playItemAtIndex:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)playWithOptions:(unsigned long long)arg1;
- (double)playableDurationOfCurrentItemIfAvailable;
- (id)playbackLeaseController;
- (long long)playbackMode;
- (void)playlistManager:(id)arg1 didFailLoadingAllItemsForQueueFeeder:(id)arg2;
- (void)playlistManager:(id)arg1 didTransitionToPlaylistFeeder:(id)arg2;
- (id)preferredLanguages;
- (float)rate;
- (void)reloadWithPlaybackContext:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id)arg2;
- (void)removeTimeObserver:(id)arg1;
- (unsigned long long)repeatType;
- (id)routeNameForVolumeControl;
- (id)routingController;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setAlwaysPlayWheneverPossible:(bool)arg1;
- (void)setAudioSessionModeOverride:(id)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(bool)arg1;
- (void)setAutoclearingDisplayOverridePlaybackState:(long long)arg1;
- (void)setClient:(id)arg1 wantsToAllowAirPlayVideo:(bool)arg2;
- (void)setClosedCaptioningEnabled:(bool)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTime:(double)arg1 options:(long long)arg2;
- (void)setDestinationIsTVOut:(bool)arg1;
- (void)setDisableAirPlayMirroringDuringPlayback:(bool)arg1;
- (void)setDisallowsAMRAudio:(bool)arg1;
- (void)setDisplayOverridePlaybackState:(long long)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setFeederMode:(long long)arg1;
- (void)setManagesAirPlayBehaviors:(bool)arg1;
- (void)setNextFadeOutDuration:(double)arg1;
- (void)setPlaybackIndex:(long long)arg1;
- (void)setPlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (void)setPlaybackLeaseController:(id)arg1;
- (void)setPlaybackMode:(long long)arg1;
- (void)setPlaylistManager:(id)arg1;
- (void)setRTCReportingFlags:(unsigned int)arg1;
- (bool)setRate:(float)arg1;
- (void)setRateForScanning:(float)arg1;
- (void)setRepeatType:(unsigned long long)arg1;
- (void)setShouldEnforceHDCP:(bool)arg1;
- (void)setShouldSkipToNextTrackOnResumeFromInterruption:(bool)arg1;
- (void)setShuffleType:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setStopAtEnd:(bool)arg1;
- (void)setUbiquitousBookkeepingEnabled:(bool)arg1;
- (void)setUseAirPlayMusicMode:(bool)arg1;
- (void)setUseApplicationAudioSession:(bool)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1;
- (void)setVolume:(float)arg1;
- (bool)shouldDisplayAsPlaying;
- (bool)shouldEnforceHDCP;
- (bool)shouldHaveNoActionAtEndForState:(long long)arg1;
- (bool)shouldSkipToNextTrackOnResumeFromInterruption;
- (bool)showPlaybackStateOverlaysOnTVOut;
- (unsigned long long)shuffleType;
- (void)skipToSeekableEnd;
- (void)skipToSeekableStart;
- (long long)state;
- (bool)stopAtEnd;
- (void)switchToAudioPlayback:(bool)arg1 forItem:(id)arg2;
- (void)switchToVideoPlayback:(bool)arg1 forItem:(id)arg2;
- (void)tickTimerFired;
- (double)timeOfPlayableEnd;
- (double)timeOfPlayableStart;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (void)togglePlayback;
- (void)togglePlaybackWithOptions:(unsigned long long)arg1;
- (bool)ubiquitousBookkeepingEnabled;
- (void)updateBookkeepingNow;
- (bool)useAirPlayMusicMode;
- (bool)useApplicationAudioSession;
- (bool)usesAudioOnlyModeForExternalPlayback;
- (id)videoLayer;
- (id)videoView;
- (float)volume;

@end
