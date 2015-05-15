/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLModelMigrator : NSObject {
    NSFileManager *_fileManager;
    PLPhotoLibrary *_photoLibrary;
    long long _photoLibraryOnce;
    NSDictionary *_syncedPropertiesByUUID;
    PLXPCTransaction *_transaction;
    double startTime;
}

@property (nonatomic, retain) NSFileManager *fileManager;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

+ (bool)_addAlbumOrderKeys:(id)arg1;
+ (bool)_addLocationHashesToAssets:(id)arg1;
+ (bool)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(bool)arg2;
+ (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;
+ (bool)_batchFetchedObjects:(id)arg1 inMOC:(id)arg2 batchSize:(unsigned long long)arg3 objectHandler:(id)arg4 error:(id*)arg5;
+ (bool)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (bool)_clearChangeStore;
+ (bool)_convertManagedAdjustmentsInStore:(id)arg1;
+ (void)_createDatabase;
+ (id)_dateWithiTunesTimeInterval:(double)arg1;
+ (bool)_deleteAllMomentsViaSQLFromStore:(id)arg1;
+ (bool)_deleteAllOrderKeysFromStore:(id)arg1;
+ (bool)_deleteCloudSharedAndSyncedAssetReferencesInStore:(id)arg1;
+ (bool)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (bool)_deletePhotoStreamAssetReferencesInStore:(id)arg1;
+ (bool)_disableICloudPhoto;
+ (bool)_fixAdjustedAssets:(id)arg1;
+ (bool)_fixCorruptedOrientationsInStore:(id)arg1;
+ (bool)_fixDuplicatedAssets:(id)arg1;
+ (bool)_fixNonDuplicatedAssets:(id)arg1 adjusted:(bool)arg2;
+ (void)_fixPathForResource:(id)arg1 withPath:(id)arg2;
+ (bool)_fixUploadAttempts:(id)arg1;
+ (bool)_fixVideoDimensionsForAsset:(id)arg1;
+ (bool)_fixVideoDimensionsInStore:(id)arg1;
+ (bool)_fixVideoJPGPath:(id)arg1;
+ (bool)_fixVisibleBurstAsset:(id)arg1;
+ (bool)_fixupAlbumOrderInAlbumListInStore:(id)arg1;
+ (bool)_fixupAssetPersistence:(id)arg1;
+ (bool)_fixupBrokenBurstPicksInStore:(id)arg1;
+ (bool)_fixupCloudResourcesInStore:(id)arg1;
+ (bool)_fixupEditorBundleIDsInStore:(id)arg1;
+ (bool)_fixupImportedAssetsInStore:(id)arg1;
+ (bool)_fixupImportedEventsInStore:(id)arg1;
+ (bool)_fixupKeyAssetsForAlbumsInStore:(id)arg1;
+ (bool)_fixupSharedStreamOrientationsInStore:(id)arg1;
+ (bool)_fixupSyncedAssetAttributesInStore:(id)arg1;
+ (bool)_forceAlbumMetadataToDiskInStore:(id)arg1;
+ (void)_forceCreateIndexOnOrderedAssets:(bool)arg1;
+ (bool)_forceDupeAnalysis;
+ (bool)_forceSoftResetSync;
+ (bool)_generateAddedDateForAssetsInStore:(id)arg1;
+ (bool)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;
+ (bool)_invalidateSearchIndexDataInStore:(id)arg1;
+ (bool)_migrateAssetLocationData:(id)arg1;
+ (int)_migrateLegacySlomoAdjustmentsForAsset:(id)arg1;
+ (bool)_migrateLegacySlomoAdjustmentsInStore:(id)arg1 fromLegacySLMFormat:(bool)arg2;
+ (bool)_migrateRevGeoLocationDataFromKeyedArchiverFormat:(id)arg1;
+ (bool)_migrateTransformableUUIDsToStringsInStore:(id)arg1;
+ (bool)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;
+ (id)_newSyncedPropertiesByAssetUUIDs:(bool)arg1;
+ (bool)_populateAlbumAndFolderOrderKeysInStore:(id)arg1;
+ (bool)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStore:(id)arg1;
+ (void)_populateFaceRegionsForAsset:(id)arg1;
+ (bool)_populateFaceRegionsInStore:(id)arg1;
+ (bool)_populateHasAdjustmentsForAssetsInStore:(id)arg1;
+ (bool)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (bool)_populateUnmanagedAdjustmentsFromFileSystemInManagedObjectContext:(id)arg1;
+ (bool)_postProcessFromVersion6006Store:(id)arg1;
+ (bool)_rebuildAllMomentsInStore:(id)arg1;
+ (bool)_removeAllWallpaperAssetsInStore:(id)arg1;
+ (bool)_removeEvents:(id)arg1;
+ (void)_removeFileAt:(id)arg1 forResource:(id)arg2;
+ (void)_repairCloudPlaceholderKindForVideoAsset:(id)arg1;
+ (void)_repairRootFolderFixedOrderKeysInContext:(id)arg1;
+ (bool)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1;
+ (bool)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id*)arg2;
+ (bool)_repersistDuplicatedAssets:(id)arg1;
+ (bool)_resetAlbumToFolderOrderKeyForAlbums:(id)arg1;
+ (bool)_resetAndReimportUnmanagedAdjustmentInStore:(id)arg1;
+ (bool)_resetDupesAnalysisInStore:(id)arg1 resetHashes:(bool)arg2;
+ (bool)_resetThumbnailsAndInitiateRebuildRequest;
+ (bool)_setupRootFolderInStore:(id)arg1;
+ (bool)_shouldConvertManagedAdjustmentsForAsset:(id)arg1;
+ (bool)_updateKindSubtypeForPanoramaPhotosNeedsReset:(bool)arg1 inStore:(id)arg2;
+ (void)_validateCurrentModelVersionFailedWithMismatchedVersion:(int)arg1;
+ (void)_validateCurrentModelVersionFailedWithNoVersionFromServer;
+ (bool)_validateOrDeleteFileAtPath:(id)arg1 forCloudResource:(id)arg2;
+ (bool)_verifyCloudAssetsLocalAvailability:(id)arg1;
+ (void)applyDataProtectionToAllPhotosFiles;
+ (void)applyDataProtectionToPhotosPaths:(id)arg1;
+ (void)archiveAssetUUIDForPathPlist:(id)arg1;
+ (id)archivedAssetUUIDForURL:(id)arg1;
+ (id)assetUUIDForPathPlistURL;
+ (bool)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6;
+ (int)checkForceMigrationTypeRequestedAndGetOptionalSourceModelVersion:(id*)arg1;
+ (void)cleanupModelAfterRestoreFromiTunes;
+ (void)createDatabase;
+ (int)currentModelVersion;
+ (bool)debug_resetThumbnailsAndInitiateRebuildRequest;
+ (id)descriptionForForceMigrationType:(int)arg1;
+ (bool)didCreateSqliteErrorFileForLightweightMigration;
+ (bool)didImportFileSystemAssets;
+ (bool)didImportFileSystemAssetsWithMOC:(id)arg1;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (id)eventNameFromDate:(id)arg1;
+ (void)fixAddedDateForAsset:(id)arg1;
+ (void)fixupUnmanagedAdjustmentsFromFileSystemForAsset:(id)arg1;
+ (void)forceImportFileSystemDataIntoDatabase;
+ (id)generateAssetUUIDForPathPlist;
+ (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
+ (bool)isPostProcessingLightweightMigration;
+ (void)loadFileSystemDataIntoDatabase;
+ (id)managedObjectModelForLightweightMigrationStageWithURL:(id)arg1;
+ (id)modelMigrator;
+ (id)nextRequiredStagedMigrationVersionAfterVersion:(id)arg1;
+ (void)postProcessFixesAfterOTARestoreForCompleteAsset:(id)arg1;
+ (bool)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2;
+ (bool)postProcessThumbnailsOnly;
+ (bool)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4;
+ (void)recalculateCachedCountsForAlbums:(bool)arg1 andMoments:(bool)arg2;
+ (void)repairPotentialModelCorruption;
+ (void)repairSingletonObjectsInDatabaseWithCompletionHandler:(id)arg1;
+ (bool)restartingAfterOTAMigration;
+ (bool)restartingAfterRestoreFromBackup;
+ (long long)secondsNeededToCleanupModelAfteriTunesRestore;
+ (void)setDidImportFileSystemAssets:(bool)arg1;
+ (id)sharedModelMigratorForImport;
+ (bool)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 assetsKind:(int*)arg3;
+ (bool)skipDataProtectionForFilePath:(id)arg1;
+ (void)validateCurrentModelVersion;
+ (void)waitForDataMigratorToExit;

- (void)_importAllDCIMAssets;
- (id)_orderedAssetsToImportCameraRollOnly:(bool)arg1;
- (id)_syncedPropertiesForAssetUUID:(id)arg1;
- (void)cleanupModelAfterRestoreFromiTunes;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (void)collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 testCreationDates:(bool)arg5;
- (void)dealloc;
- (void)dontImportFileSystemDataIntoDatabase;
- (id)fileManager;
- (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
- (id)importFileSystemImportAssets:(id)arg1 forceUpdate:(bool)arg2;
- (id)init;
- (id)initWithImplicitTransaction:(bool)arg1;
- (void)loadFileSystemDataIntoDatabase;
- (void)pausePhotoStreams;
- (id)photoLibrary;
- (void)recalculateCachedCountsForAlbums:(bool)arg1 andMoments:(bool)arg2 withSemaphore:(id)arg3;
- (void)repairPotentialModelCorruption;
- (void)resumePhotoStreams;
- (long long)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)setFileManager:(id)arg1;
- (bool)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(bool*)arg3 isCPLAssets:(bool*)arg4 cameraRollOnly:(bool)arg5;

@end
