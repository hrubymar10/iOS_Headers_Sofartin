/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RURadioQueueFeeder : MPQueueFeeder <MPUQueueBehaviorManaging> {
    RURadioAdObserver *_adObserver;
    NSMapTable *_adSlotToAllAdTracks;
    NSMapTable *_adSlotToInsertedAdTracks;
    NSMapTable *_adSlotToRadioTrack;
    bool _canSeek;
    MPAVItem *_currentItem;
    bool _didReceiveTracklistEnd;
    unsigned long long _feederRevisionID;
    NSMapTable *_fetchingTracksCompletionHandlersByStation;
    bool _hasReceivedStreamTrack;
    bool _hasVerifiedCloudStatus;
    bool _isPreparingStation;
    long long _maximumGetTracksRetryCount;
    MPPlaceholderAVItem *_placeholderAVItem;
    SSVPlaybackLease *_playbackLease;
    long long _playbackMode;
    NSArray *_previousDatabaseTrackPlaybackDescriptorQueue;
    NSMapTable *_radioTrackToAdSlot;
    RadioStation *_station;
    RadioStationSkipController *_stationSkipController;
    NSMapTable *_stationTracklistRetrievalRetryCount;
    NSArray *_tracks;
    NSMutableSet *_visibleAdSlots;
    bool _wasUsingBackgroundNetwork;
}

@property (nonatomic, readonly, copy) NSArray *allPreparedAdSlotRadioTracks;
@property (nonatomic, readonly) bool allowsUserVisibleUpcomingItems;
@property (nonatomic, readonly) bool canSeek;
@property (nonatomic, readonly) bool canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic, retain) RadioStation *station;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *tracks;
@property (nonatomic, readonly) NSArray *tracksForNextPlaybackGroup;
@property (nonatomic, readonly) bool userCanChangeShuffleAndRepeatType;

+ (void)_explicitContentAllowedDidChangeNotification:(id)arg1;
+ (id)_tracksByRemovingPromotionalContentFromTracks:(id)arg1;
+ (id)_tracksWithPromotionalContentFromTracks:(id)arg1;
+ (void)_updateIsExplicitContentRestrictedAndPostNotification:(bool)arg1 removeTracks:(bool)arg2;
+ (bool)isExplicitTracksEnabled;
+ (bool)isProfileExplicitContentRestricted;
+ (bool)isUserDefaultExplicitTracksEnabled;
+ (long long)maximumNumberOfTracksToFetch;
+ (void)setIgnoresUserDefaultExplicitTracksEnabled:(bool)arg1;
+ (void)setUserDefaultExplicitTracksEnabled:(bool)arg1;

- (void).cxx_destruct;
- (id)MPU_contentItemIdentifierCollection;
- (void)_adSlotAdTracksDidChangeNotification:(id)arg1;
- (id)_adSlotForAdTrack:(id)arg1;
- (void)_adTrackActionDidFinishNotification:(id)arg1;
- (void)_adTrackActionWillBeginNotification:(id)arg1;
- (void)_adTrackDidFailToLoadNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_applyTracksForAdSlot:(id)arg1 radioTrack:(id)arg2 currentPlayingItem:(id)arg3 toTracks:(id)arg4;
- (bool)_canHavePlaceholderTrack;
- (void)_configurePlaceholderAVItem;
- (id)_currentTrackPlaybackDescriptorQueueWithCurrentItem:(id)arg1 shouldIncludePlaybackInformation:(bool)arg2 skipDate:(id)arg3;
- (void)_fetchAdSlotIfNeededForRadioTrack:(id)arg1 inStation:(id)arg2;
- (void)_fetchAdditionalTracksWithBaseIndex:(long long)arg1 withCompletionHandler:(id)arg2;
- (void)_fetchNextTrackAdSlotIfNeeded;
- (bool)_hasReceivedStreamTrack;
- (unsigned long long)_indexOfCurrentItem;
- (unsigned long long)_indexOfItem:(id)arg1;
- (unsigned long long)_indexOfItem:(id)arg1 inTracks:(id)arg2;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_numberOfAvailableSkipsDidChangeNotification:(id)arg1;
- (void)_performGetTracksOperationForStation:(id)arg1 withNumberOfTracks:(long long)arg2;
- (long long)_playbackModeForTrack:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_removeAllTracks;
- (void)_sendContentsDidChangeWithCurrentItem;
- (void)_setAdSlot:(id)arg1 forRadioTrack:(id)arg2;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (id)_trackAtIndex:(unsigned long long)arg1;
- (id)_trackAtIndex:(unsigned long long)arg1 shouldFetchAddtionalTracks:(bool)arg2;
- (id)_tracksByRemovingPlayedTracks:(id)arg1;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (void)_updateTracksForAdSlot:(id)arg1 radioTrack:(id)arg2;
- (void)_updateTracksForChangedTrackPlaybackDescriptorQueue;
- (void)_updateWithTracks:(id)arg1 tracklistActionType:(long long)arg2 options:(long long)arg3;
- (void)_verifyCloudStatusIfNeeded;
- (id)allPreparedAdSlotRadioTracks;
- (bool)allowsUserVisibleUpcomingItems;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (bool)canReorder;
- (bool)canSeek;
- (bool)canSkipItem:(id)arg1;
- (bool)canSkipToPreviousItem;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)entityUniqueIdentifier;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (id)init;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (bool)isRadioQueueFeeder;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (unsigned long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)playbackInfoForIdentifier:(id)arg1;
- (long long)playbackMode;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (bool)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2;
- (bool)playerPreparesItemsForPlaybackAsynchronously;
- (id)preparedAdSlotForRadioTrack:(id)arg1;
- (bool)preventsHardQueueModificationsForItem:(id)arg1;
- (unsigned long long)realRepeatType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id)arg2;
- (void)setStation:(id)arg1;
- (void)setTracks:(id)arg1;
- (bool)shouldContinuePlaybackForNetworkType:(long long)arg1 player:(id)arg2;
- (bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (struct { long long x1; long long x2; double x3; })skipLimit;
- (id)station;
- (id)tracks;
- (id)tracksForNextPlaybackGroup;
- (bool)userCanChangeShuffleAndRepeatType;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
