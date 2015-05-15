/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreAVItem : MPAVItem {
    NSString *_aggregateDictionaryItemIdentifier;
    unsigned long long _assetQuality;
    bool _hasValidAggregateDictionaryItemIdentifier;
    bool _hasValidAssetQuality;
    bool _isActivePlayerItem;
    bool _isUsingPlaybackLease;
    unsigned long long _options;
    MPStorePlayWhileDownloadSession *_playWhileDownloadSession;
    MPMediaPlaybackItemMetadata *_playbackItemMetadata;
    MPPlayerPlaybackLeaseController *_playbackLeaseController;
    NSString *_playbackLeaseUsageName;
    MPStreamingDownloadSession *_streamingDownloadSession;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) MPMediaPlaybackItemMetadata *playbackItemMetadata;

+ (id)_assetURLForCachedLocalPlaybackAssetFilePathForPlaybackItemMetadata:(id)arg1 withMinimumAssetQuality:(unsigned long long)arg2 assetOptions:(id)arg3 returningProtectionType:(unsigned long long*)arg4 assetQuality:(unsigned long long*)arg5;
+ (unsigned long long)_preferredAssetQualityForCurrentNetworkConditions;
+ (void)applyVolumeNormalizationForQueuedItems:(id)arg1;
+ (bool)isPlaybackItemMetadataStreamingForAssetCreation:(id)arg1;
+ (bool)isPlaybackItemMetadataValidForAssetCreation:(id)arg1;

- (void).cxx_destruct;
- (id)MPU_contentItemIdentifierCollection;
- (void)_applyLoudnessInfo;
- (id)_chapterTitleForTime:(double)arg1;
- (bool)_getAssetURL:(id*)arg1 playWhileDownloadSession:(id*)arg2 assetQuality:(unsigned long long*)arg3 error:(id*)arg4 usingStoreDownload:(id)arg5 assetOptions:(id)arg6 shouldStartDownload:(bool)arg7;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(bool)arg2;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(id)arg2;
- (void)_mediaPlaybackItemMetadataDidChangeNotification:(id)arg1;
- (void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(id)arg1;
- (long long)_mpuReporting_storeItemInt64ID;
- (long long)_mpuReporting_storeItemInt64IDFromIdentifierCollection:(id)arg1;
- (id)_newTimeMarkersForChapterType:(long long)arg1;
- (long long)_persistedLikedState;
- (void)_prioritizeDownloadSessionsIfNeeded;
- (void)_stopUsingPlaybackLeaseIfNeeded;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(bool)arg2;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)aggregateDictionaryItemIdentifier;
- (id)album;
- (id)albumArtist;
- (long long)albumStoreID;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (bool)allowsEQ;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(bool)arg1;
- (id)artist;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (bool)canSeedGenius;
- (id)chapterTimeMarkers;
- (id)composer;
- (id)copyrightText;
- (long long)customAVEQPreset;
- (void)dealloc;
- (id)description;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)displayableText;
- (double)durationFromExternalMetadata;
- (id)genre;
- (void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(bool)arg2;
- (bool)hasAlternatesForTypes:(unsigned long long)arg1;
- (id)initWithPlaybackItemMetadata:(id)arg1 options:(unsigned long long)arg2;
- (bool)isAssetURLValid;
- (bool)isCloudItem;
- (bool)isExplicitTrack;
- (bool)isStreamable;
- (bool)isStreamingLowQualityAsset;
- (bool)isSupportedDefaultPlaybackSpeed:(unsigned long long)arg1;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaItem;
- (bool)mpuReporting_isValidReportingItem;
- (unsigned long long)mpuReporting_itemType;
- (bool)mpuReporting_shouldReportPlayEventsToStore;
- (id)mpuReporting_storeItemID;
- (void)notePlaybackFinishedByHittingEnd;
- (unsigned long long)options;
- (unsigned long long)persistentID;
- (double)playbackCheckpointCurrentTime;
- (id)playbackItemMetadata;
- (void)reevaluateType;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (id)storeDownload;
- (long long)storeItemInt64ID;
- (id)storeLookupDictionary;
- (long long)storeSubscriptionAdamID;
- (bool)supportsRewindAndFastForward15Seconds;
- (id)titlesForTime:(double)arg1;
- (unsigned long long)type;
- (id)urlTimeMarkers;
- (bool)useEmbeddedChapterData;
- (float)userRating;
- (bool)usesSubscriptionLease;

@end
