/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPQueuePlayer : NSObject <MPAVRoutingControllerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    AVPlayerItem *_currentItem;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _currentTime;
    long long _defaultItemEQPresetType;
    bool _isExternalPlaybackActive;
    MPAVRoute *_lastPickedRoute;
    bool _outputObscuredDueToInsufficientExternalProtection;
    bool _pausedForPlaybackQueueTransaction;
    id _playbackQueueCommitHandler;
    long long _playbackQueueTransactionCount;
    AVQueuePlayer *_player;
    NSMutableArray *_queuedOperations;
    float _rate;
    float _rateBeforePlaybackQueueTransaction;
    bool _routeDidChangeDuringPlaybackQueueTransaction;
    MPAVRoutingController *_routingController;
    long long _status;
}

@property(assign,readonly) long long _externalProtectionStatus;
@property(assign,readonly) AVPlayer * _player;
@property(assign,readwrite) long long actionAtItemEnd;
@property(assign,readwrite) bool allowsExternalPlayback;
@property(getter=isClosedCaptionDisplayEnabled,assign,readwrite) bool closedCaptionDisplayEnabled;
@property(assign,readonly) AVPlayerItem * currentItem;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) long long defaultItemEQPresetType;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool disallowsAMRAudio;
@property(assign,readonly) NSError * error;
@property(getter=isExternalPlaybackActive,assign,readonly) bool externalPlaybackActive;
@property(assign,readonly) long long externalPlaybackType;
@property(assign,copy) NSString * externalPlaybackVideoGravity;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool isPlaybackQueueTransactionActive;
@property(assign,readonly) NSArray * items;
@property(assign,readonly) bool outputObscuredDueToInsufficientExternalProtection;
@property(assign,copy) id playbackQueueCommitHandler;
@property(assign,readonly) id playerAVAudioSession;
@property(assign,readonly) float playerRate;
@property(assign,readwrite) float rate;
@property(assign,readonly) long long status;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) bool usesAudioOnlyModeForExternalPlayback;
@property(assign,readwrite) bool usesExternalPlaybackWhileExternalScreenIsActive;

- (void).cxx_destruct;
- (bool)_CALayerDestinationIsTVOut;
- (long long)_externalProtectionStatus;
- (id)_player;
- (bool)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setCALayerDestinationIsTVOut:(bool)arg1;
- (void)_setClientName:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setExpectedAssetTypes:(id)arg1;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setPreparesItemsForPlaybackAsynchronously:(bool)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setUserVolume:(float)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(bool)arg1;
- (float)_userVolume;
- (long long)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)advanceToNextItem;
- (bool)allowsExternalPlayback;
- (void)beginPlaybackQueueTransactionAndPause:(bool)arg1;
- (void)commitPlaybackQueueTransaction;
- (id)currentItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (long long)defaultItemEQPresetType;
- (bool)disallowsAMRAudio;
- (id)error;
- (long long)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (id)init;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (bool)isClosedCaptionDisplayEnabled;
- (bool)isExternalPlaybackActive;
- (bool)isPlaybackQueueTransactionActive;
- (id)items;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)outputObscuredDueToInsufficientExternalProtection;
- (void)pause;
- (void)play;
- (id)playbackQueueCommitHandler;
- (id)playerAVAudioSession;
- (float)playerRate;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (float)rate;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setClosedCaptionDisplayEnabled:(bool)arg1;
- (void)setCurrentPlaybackQueueTransactionDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDefaultItemEQPresetType:(long long)arg1;
- (void)setDisallowsAMRAudio:(bool)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)setPlaybackQueueCommitHandler:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(bool)arg1;
- (long long)status;
- (bool)usesAudioOnlyModeForExternalPlayback;
- (bool)usesExternalPlaybackWhileExternalScreenIsActive;

@end