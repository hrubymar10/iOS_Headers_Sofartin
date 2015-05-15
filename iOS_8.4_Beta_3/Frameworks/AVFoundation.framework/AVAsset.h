/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAsset : NSObject <AVAsynchronousKeyValueLoading, NSCopying> {
    AVAssetInternal *_asset;
}

@property (getter=MP_canAffectNetworkPlayability, setter=MP_setCanAffectNetworkPlayability:, nonatomic) bool MP_canAffectNetworkPlayability;
@property (readonly) NSArray *availableChapterLocales;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) bool isProxy;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSizeWithPreferredTransforms;
@property (nonatomic, readonly) float preferredRate;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) id propertyListForProxy;

+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)assetWithURL:(id)arg1;
+ (id)assetWithURL:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg2 trackIDs:(id)arg3 dynamicBehavior:(bool)arg4;
+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;

- (bool)MP_canAffectNetworkPlayability;
- (void)MP_setCanAffectNetworkPlayability:(bool)arg1;
- (id)_ID3Metadata;
- (id)_absoluteURL;
- (unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (id)_chapterDataTypeForMediaSubType:(int)arg1;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLocale:(id)arg2 containingItemsWithCommonKeys:(id)arg3;
- (id)_chapterTracks;
- (Class)_classForTrackInspectors;
- (id)_comparisonToken;
- (bool)_containsAtLeastOnePlayableAudioTrack;
- (bool)_containsAtLeastOnePlayableVideoTrack;
- (id)_exportURL;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_firstTrackGroupWithMediaType:(id)arg1;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (bool)_hasResourceLoaderDelegate;
- (bool)_isStreaming;
- (void)_loadChapterInfo;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_serverHasDied;
- (void)_tracksDidChange;
- (id)_weakReference;
- (id)alternateTrackGroups;
- (id)audioAlternatesTrackGroup;
- (id)availableChapterLocales;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)availableMetadataFormats;
- (bool)canContainMovieFragments;
- (void)cancelLoading;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)commonMetadata;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (bool)containsMovieFragments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (bool)hasProtectedContent;
- (unsigned long long)hash;
- (id)init;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isEqual:(id)arg1;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isProxy;
- (bool)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (id)lyrics;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2;
- (id)mediaSelectionGroups;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (void)mpLoadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3;
- (struct CGSize { double x1; double x2; })naturalSize;
- (struct CGSize { double x1; double x2; })naturalSizeWithPreferredTransforms;
- (int)naturalTimeScale;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (bool)providesPreciseDurationAndTiming;
- (unsigned long long)referenceRestrictions;
- (long long)statusOfValueForKey:(id)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)subtitleAlternatesTrackGroup;
- (id)trackGroups;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaCharacteristics:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (int)unusedTrackID;
- (id)valueForUndefinedKey:(id)arg1;

@end
