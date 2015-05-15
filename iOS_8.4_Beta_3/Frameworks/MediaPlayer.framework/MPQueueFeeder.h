/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPQueueFeeder : NSObject <MPQueueBehaviorManaging, MusicEntityValueProviding, NSCoding> {
    unsigned long long _activeShuffleType;
    <MPQueueFeederDelegate> *_delegate;
    NSMutableDictionary *_nextStartTimes;
    unsigned long long _repeatType;
    bool _requiresQueueChangeVerification;
    unsigned long long _shuffleType;
    struct { 
        long long numberOfAvailableSkips; 
        long long skipFrequency; 
        double skipInterval; 
    } _skipLimit;
    unsigned long long _state;
    bool _wantsAirPlayVideo;
}

@property(assign,readonly) MPUContentItemIdentifierCollection * MPU_contentItemIdentifierCollection;
@property(assign,readwrite) unsigned long long activeShuffleType;
@property(assign,readonly) bool allowsUserVisibleUpcomingItems;
@property(assign,readonly) bool canReorder;
@property(assign,readonly) bool canSeek;
@property(assign,readonly) bool canSkipToPreviousItem;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MPQueueFeederDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class itemClass;
@property(assign,readonly) unsigned long long itemCount;
@property(setter=mpuReporting_setFeatureName:,assign,copy) NSString * mpuReporting_featureName;
@property(setter=mpuReporting_setRecommendationData:,assign,copy) NSData * mpuReporting_recommendationData;
@property(assign,readonly) long long playbackMode;
@property(assign,readonly) bool playerPreparesItemsForPlaybackAsynchronously;
@property(assign,readonly) unsigned long long realRepeatType;
@property(assign,readonly) unsigned long long realShuffleType;
@property(assign,readwrite) unsigned long long repeatType;
@property(assign,readwrite) bool requiresQueueChangeVerification;
@property(assign,readwrite) unsigned long long shuffleType;
@property(assign,readwrite) struct { long long x1; long long x2; double x3; } skipLimit;
@property(assign,readwrite) unsigned long long state;
@property(assign,readonly) RadioStation * station;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool trackChangesCanEndPlayback;
@property(assign,readonly) bool userCanChangeShuffleAndRepeatType;
@property(assign,readonly) bool wantsAirPlayVideo;

+ (bool)supportsStateRestoration;

- (void).cxx_destruct;
- (id)MPU_contentItemIdentifierCollection;
- (bool)_canPurgeNextStartTimes;
- (unsigned long long)activeShuffleType;
- (bool)allowsUserVisibleUpcomingItems;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (bool)canReorder;
- (bool)canSeek;
- (bool)canSkipItem:(id)arg1;
- (bool)canSkipToPreviousItem;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)entityUniqueIdentifier;
- (id)errorResolverForItem:(id)arg1;
- (bool)hasItemForIndex:(unsigned long long)arg1;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (bool)isRadioQueueFeeder;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (id)itemForIdentifier:(id)arg1;
- (id)itemForIndex:(unsigned long long)arg1;
- (unsigned long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (id)metadataItemForIdentifier:(id)arg1;
- (id)mpuReporting_featureName;
- (id)mpuReporting_recommendationData;
- (void)mpuReporting_setFeatureName:(id)arg1;
- (void)mpuReporting_setRecommendationData:(id)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)playbackInfoForIdentifier:(id)arg1;
- (long long)playbackMode;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2;
- (bool)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2;
- (bool)playerPreparesItemsForPlaybackAsynchronously;
- (id)preferredLanguages;
- (unsigned long long)realRepeatType;
- (unsigned long long)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id)arg2;
- (unsigned long long)repeatType;
- (bool)requiresQueueChangeVerification;
- (void)setActiveShuffleType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNextStartTime:(double)arg1 forIndentifier:(id)arg2;
- (void)setRepeatType:(unsigned long long)arg1;
- (void)setRequiresQueueChangeVerification:(bool)arg1;
- (void)setShuffleType:(unsigned long long)arg1;
- (void)setSkipLimit:(struct { long long x1; long long x2; double x3; })arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned long long*)arg1;
- (unsigned long long)shuffleType;
- (struct { long long x1; long long x2; double x3; })skipLimit;
- (unsigned long long)state;
- (id)station;
- (bool)trackChangesCanEndPlayback;
- (bool)userCanChangeShuffleAndRepeatType;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;
- (bool)wantsAirPlayVideo;

@end
