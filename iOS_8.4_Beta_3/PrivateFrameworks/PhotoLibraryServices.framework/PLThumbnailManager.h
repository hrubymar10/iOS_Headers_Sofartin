/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailManager : NSObject {
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    NSArray *_changedPhotos;
    NSDictionary *_changedPhotosMap;
    PLLargeImageLoader *_largeImageLoaderFilledHalfScreen;
    PLLargeImageLoader *_largeImageLoaderFilledScreen;
    PLLargeImageLoader *_largeImageLoaderFullScreen;
    PLLargeImageLoader *_largeImageLoaderFullSize;
    <PLThumbPersistenceManager> *_lastUsedThumbManager;
    int _lastUsedThumbManagerFormat;
    NSLock *_lock;
    id _observerToken;
    NSIndexSet *_occupiedIndexes;
    PLPhotoLibrary *_photoLibrary;
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableDictionary *_thumbManagersByFormat;
    struct _FigCascadeContext { } *_unicornContextLandscape;
    struct _FigCascadeContext { } *_unicornContextPortrait;
}

@property (nonatomic, retain) id observerToken;
@property (nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly, retain) NSMutableDictionary *thumbManagersByFormat;

+ (id)_allPossibleThumbnailFormats;
+ (void)addRebuildThumbnailsRequest;
+ (id)cameraPreviewWellAssetUUID;
+ (id)cameraPreviewWellImageQueue;
+ (id)defaultThumbnailsDirectory;
+ (id)defaultThumbnailsDirectoryV2;
+ (void)handleRebuildThumbnailRequestPersistentFailure;
+ (bool)hasExceededRebuildThumbnailRequestLimit;
+ (bool)hasObsoleteThumbnailTables;
+ (bool)hasRebuildThumbnailsRequest;
+ (bool)isMissingThumbnailTables;
+ (bool)isRebuildingThumbnails;
+ (bool)isRidingCrudSnow;
+ (bool)isRidingPowderSnow;
+ (int)largestNonJPEGThumbnailFormat;
+ (void)rebuildAllMissingThumbnails;
+ (void)removeObsoleteMetadata;
+ (void)removeRebuildThumbnailsRequest:(const char *)arg1;
+ (void)resetThumbnails;
+ (void)saveCameraPreviewWellImage:(struct CGImage { }*)arg1 uuid:(id)arg2;
+ (void)saveCameraPreviewWellImageForAsset:(id)arg1;
+ (bool)shouldUseLargerNonJPEGThumbnailFormat;
+ (id)supportedThumbnailFormats;
+ (int)thumbnailFormat;
+ (int)thumbnailVersion;
+ (int)thumbnailVersionCurrent;
+ (bool)useImageTableForFormat:(int)arg1;

- (id)_anyImageTable;
- (bool)_canAccessImageForAsset:(id)arg1;
- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (id)_dataForInFlightAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (void)_horse_setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 error:(id*)arg2;
- (id)_tableDescriptions;
- (id)_thumbManagerForFormat:(int*)arg1;
- (void)_unicorn_setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (void)assetsdImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg5 networkAccessAllowed:(bool)arg6 networkAccessForced:(bool)arg7 trackCPLDownload:(bool)arg8 completion:(id)arg9;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (void)clearPhotoLibrary;
- (id)compactImageTables;
- (bool)copyThumbnailsFromAsset:(id)arg1 toAsset:(id)arg2;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9;
- (void)dealloc;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (void)imageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 completion:(id)arg8 sync:(bool)arg9;
- (id)initWithWeakPhotoLibrary:(id)arg1;
- (id)newImageDataForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 outImageDataInfo:(id*)arg8 outCPLDownloadContext:(id*)arg9;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 optimalSourcePixelSize:(struct CGSize { double x1; double x2; })arg4 networkAccessAllowed:(bool)arg5 networkAccessForced:(bool)arg6 trackCPLDownload:(bool)arg7 outImageProperties:(const struct __CFDictionary {}**)arg8 outImageDataInfo:(id*)arg9 outCPLDownloadContext:(id*)arg10;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 outImageProperties:(const struct __CFDictionary {}**)arg4 outDeliveredPlaceholder:(bool*)arg5;
- (id)observerToken;
- (id)photoLibrary;
- (struct __CFDictionary { }*)placeholderThumbnailDataByFormatID;
- (id)preflightImageTableCompactionForPhotos:(id)arg1;
- (id)preheatItemSourceForFormat:(int)arg1;
- (void)setObserverToken:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setThumbnails:(struct __CFDictionary { }*)arg1 forPhoto:(id)arg2;
- (void)setThumbnailsForPhoto:(id)arg1 withImage:(id)arg2;
- (id)thumbManagersByFormat;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;

@end
