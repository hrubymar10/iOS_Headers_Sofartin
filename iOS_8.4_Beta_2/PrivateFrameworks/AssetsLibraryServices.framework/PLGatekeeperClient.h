/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLGatekeeperClient : NSObject {
    id _CPLDownloadTransactionsLostHandler;
    NSArray *_previewAssetLocalIdentifiers;
    NSArray *_previewRenderedContentURLs;
    NSObject<OS_dispatch_queue> *_serialReplyQueue;
    NSObject<OS_xpc_object> *connection;
}

@property(assign,copy) id CPLDownloadTransactionsLostHandler;
@property(assign,readwrite) NSObject<OS_xpc_object> * connection;
@property(assign,retain) NSArray * previewAssetLocalIdentifiers;
@property(assign,readonly) unsigned long long previewRenderedContentURLCount;
@property(assign,readonly) NSObject<OS_dispatch_queue> * replyQueue;

+ (id)securityPolicyErrorForMissingEntitlement:(id)arg1;
+ (id)sharedInstance;

- (id)CPLDownloadTransactionsLostHandler;
- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(id)arg3;
- (void)addGroupWithName:(id)arg1 handler:(id)arg2;
- (void)addLogMark:(id)arg1;
- (id)allMomentsMetadataWithOutputPath:(id)arg1;
- (void)analyzeAllMoments;
- (void)analyzeInvalidMomentsAndDupesIfNeeded;
- (void)analyzeMomentID:(id)arg1;
- (void)analyzeMomentListID:(id)arg1;
- (unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)arg1;
- (void)automaticallyDeleteEmptyAlbum:(id)arg1;
- (void)batchSaveAssetsWithJobDictionaries:(id)arg1 handler:(id)arg2;
- (id)cacheDeleteDebug:(id)arg1;
- (void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)arg1 completionHandler:(id)arg2;
- (void)cancelCPLDownloadWithContext:(id)arg1;
- (void)cleanupForStoreDemoMode;
- (void)cleanupModelAfteriTunesRestore;
- (void)clearAllBulletinsWithLastClearedRecordID:(unsigned long long)arg1;
- (void)clearChangeStore;
- (void)clearUserInfluencedMoments;
- (id)connection;
- (void)createPhotoLibraryDatabase;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)dataMigrationWillFinish;
- (void)dealloc;
- (void)deleteAssetWithURL:(id)arg1 handler:(id)arg2;
- (void)deleteExpiredTrashBinObjects;
- (id)deviceSpecificReplyQueue;
- (id)dictionaryWithContentsOfMediaFilePath:(id)arg1;
- (void)downloadAsset:(id)arg1 requestThumbnail:(bool)arg2 shouldPrioritize:(bool)arg3 shouldExtendTimer:(bool)arg4;
- (void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3;
- (void)dropSearchIndexWithCompletion:(id)arg1;
- (void)dumpCloudPhotosStatusIncludingDaemon:(bool)arg1;
- (id)dumpMetadataForMomentsWithOutputPath:(id)arg1;
- (id)emailAddressForKey:(int)arg1;
- (void)enableCloudPhotos:(bool)arg1;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (long long)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (int)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(bool)arg2 outFileExtension:(id*)arg3;
- (id)fileURLForAssetURL:(id)arg1 withAdjustments:(bool)arg2;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)finalizeOTARestoreRecreatingAlbums:(bool)arg1;
- (void)getCPLRemainingUploadCountsWithHandler:(id)arg1;
- (id)getCPLState;
- (long long)getCurrentApplicationBadgeCount;
- (id)getCurrentBulletins;
- (int)getCurrentModelVersion;
- (id)getKeywordsForAssetWithUUID:(id)arg1;
- (void)getLibrarySizes:(id)arg1;
- (void)getPhotosAndVideosCountWithHandler:(id)arg1;
- (void)getSandboxExtensionForPath:(id)arg1 completionHandler:(id)arg2;
- (void)getSearchIndexProgress:(id)arg1;
- (id)getThumbnailImageDataForBulletinWithRecordID:(unsigned long long)arg1;
- (bool)hasCompletedMomentAnalysis;
- (bool)hasCompletedRestorePostProcessing;
- (id)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 outImageDataInfo:(id*)arg7 outCPLDownloadContext:(id*)arg8;
- (void)importFileSystemAssetsWaitingForReply:(bool)arg1;
- (id)incompleteRestoreProcesses;
- (id)init;
- (bool)isReadyForCloudPhotoLibrary;
- (int)keyForEmailAddress:(id)arg1;
- (void)launchAssetsd;
- (void)maintainCachedAlbumCounts;
- (void)notifyAboutTerminationDueToUncaughtException:(id)arg1;
- (void)pauseCloudPhotos;
- (id)personInfoDictionaryForPersonID:(id)arg1;
- (id)previewAssetLocalIdentifiers;
- (id)previewRenderedContentURLAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewRenderedContentURLCount;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3;
- (unsigned long long)purgeableSharedAssetsSpace;
- (void)rebuildAllThumbnails;
- (void)rebuildCloudFeed;
- (void)rebuildMomentLists;
- (void)rebuildMomentsIncremental:(bool)arg1;
- (void)recoverFromCrashIfNeeded;
- (void)reloadMomentGenerationOptions;
- (void)removeLocalDuplicates;
- (void)repairPotentialModelCorruption;
- (void)repairSingletonObjects;
- (id)replyQueue;
- (void)requestAccessWithHandler:(id)arg1;
- (void)requestAdjustmentDataForAsset:(id)arg1 withDataBlob:(bool)arg2 networkAccessAllowed:(bool)arg3 trackCPLDownload:(bool)arg4 handler:(id)arg5;
- (void)requestCPLDownloadImageDataForAssets:(id)arg1 format:(int)arg2 doneTokens:(id)arg3 completionHandler:(id)arg4;
- (void)requestImageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 handler:(id)arg7;
- (void)requestMasterThumbnailForAssetUUID:(id)arg1 handler:(id)arg2;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(bool)arg3 streamingAllowed:(bool)arg4 trackCPLDownload:(bool)arg5 handler:(id)arg6;
- (void)resetDupesAnalysis;
- (void)revertToOriginalForAsset:(id)arg1;
- (void)saveAssetWithJobDictionary:(id)arg1 handler:(id)arg2 imageSurface:(struct __IOSurface { }*)arg3 previewImageSurface:(struct __IOSurface { }*)arg4;
- (unsigned long long)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)sendDaemonJob:(id)arg1 replyHandler:(id)arg2;
- (id)sendQueue;
- (void)setCPLDownloadTransactionsLostHandler:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setExternalUsageIntent:(unsigned long long)arg1 forAssetWithURL:(id)arg2 handler:(id)arg3;
- (bool)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2;
- (void)setLargePreviewImageForAssetWithURL:(id)arg1 imageData:(id)arg2 properties:(id)arg3 handler:(id)arg4;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (void)setPreviewAssetLocalIdentifiers:(id)arg1;
- (void)setPreviewRenderedContentURLs:(id)arg1;
- (void)setSearchIndexPaused:(bool)arg1 andWait:(bool)arg2;
- (void)softResetSyncStatusWithCompletionHandler:(id)arg1;
- (void)syncWithCloudPhotoLibrary;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id)arg2;
- (void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(id)arg3;
- (void)unpauseCloudPhotos;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)updateLocationDataForAssetUUID:(id)arg1;
- (void)updateModelAfterOTARestore;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)updateStatusOfCPLDownloadWithContext:(id)arg1;
- (void)updateThumbnailsForPhotos:(id)arg1 waitForReply:(bool)arg2 assignNewIndex:(bool)arg3 forceRefresh:(bool)arg4;
- (void)verifyAndRepairOrphanedAssets;
- (void)waitForSearchIndexExistence;
- (void)waitUntilConnectionSendsAllMessages;
- (void)writeDataInBackground:(id)arg1 toFileURL:(id)arg2;

@end
