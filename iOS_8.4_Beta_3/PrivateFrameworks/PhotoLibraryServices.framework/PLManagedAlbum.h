/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol> {
    bool _albumShouldBeAutomaticallyDeleted;
    bool _needsPersistenceUpdate;
    bool _resolvingConflicts;
}

@property(assign,readwrite) bool albumShouldBeAutomaticallyDeleted;
@property(assign,readonly) unsigned long long approximateCount;
@property(assign,retain) NSSet * assetOrders;
@property(assign,retain) NSOrderedSet * assets;
@property(assign,readonly) unsigned long long assetsCount;
@property(assign,readwrite) unsigned long long batchSize;
@property(assign,readonly) bool canContributeToCloudSharedAlbum;
@property(assign,readonly) bool canShowAvalancheStacks;
@property(assign,readonly) bool canShowComments;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSDate * endDate;
@property(assign,retain) NSURL * groupURL;
@property(assign,readwrite) bool hasUnseenContentBoolValue;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * importSessionID;
@property(assign,readonly) bool isCameraAlbum;
@property(assign,readonly) bool isCloudSharedAlbum;
@property(assign,readonly) bool isEmpty;
@property(assign,readonly) bool isFamilyCloudSharedAlbum;
@property(assign,readonly) bool isFolder;
@property(assign,readonly) bool isInTrash;
@property(assign,readonly) bool isLibrary;
@property(assign,readonly) bool isMultipleContributorCloudSharedAlbum;
@property(assign,readonly) bool isOwnedCloudSharedAlbum;
@property(assign,readonly) bool isPanoramasAlbum;
@property(assign,readonly) bool isPendingPhotoStreamAlbum;
@property(assign,readonly) bool isPhotoStreamAlbum;
@property(assign,readonly) bool isRecentlyAddedAlbum;
@property(assign,readonly) bool isStandInAlbum;
@property(assign,readonly) bool isUserLibraryAlbum;
@property(assign,readonly) bool isWallpaperAlbum;
@property(assign,retain) PLManagedAsset * keyAsset;
@property(assign,retain) NSNumber * kind;
@property(assign,readonly) int kindValue;
@property(assign,copy) NSArray * localizedLocationNames;
@property(assign,copy) NSString * localizedTitle;
@property(assign,retain) NSMutableOrderedSet * mutableAssets;
@property(assign,copy) NSString * name;
@property(assign,readwrite) bool needsPersistenceUpdate;
@property(assign,readwrite) int pendingItemsCount;
@property(assign,readwrite) int pendingItemsType;
@property(assign,readonly) unsigned long long photosCount;
@property(assign,retain) UIImage * posterImage;
@property(assign,readwrite) bool resolvingConflicts;
@property(assign,retain) PLManagedAsset * secondaryKeyAsset;
@property(assign,readonly) bool shouldDeleteWhenEmpty;
@property(assign,retain) NSDictionary * slideshowSettings;
@property(assign,copy) id sortingComparator;
@property(assign,retain) NSDate * startDate;
@property(assign,readonly) Class superclass;
@property(assign,retain) PLManagedAsset * tertiaryKeyAsset;
@property(assign,retain) NSString * title;
@property(assign,retain) NSMutableOrderedSet * userEditableAssets;
@property(assign,retain) NSString * uuid;
@property(assign,readonly) unsigned long long videosCount;

+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)assetOrderByAbumUUIDs;
+ (id)baseSearchIndexPredicate;
+ (id)childKeyForOrdering;
+ (void)clearAssetOrderByAbumUUIDs;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)pathToAssetAlbumOrderStructure;

- (unsigned long long)_albumStandInCount;
- (id)_assetOrderByAssetUUID;
- (unsigned long long)_cachedCountForMigration;
- (id)_expectedKeyAssets:(id)arg1;
- (id)_keysToBeObserved;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (void)_recalculateCachedCounts;
- (bool)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (void)_updateCountsIfNeeded:(id)arg1;
- (void)_updateKeyAssetsAndCountsIfNeeded;
- (void)_updateKeyAssetsIfNeeded:(id)arg1;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (bool)albumShouldBeAutomaticallyDeleted;
- (unsigned long long)approximateCount;
- (unsigned long long)assetsCount;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (id)childKeyForOrdering;
- (unsigned long long)countOfInternalUserEditableAssets;
- (id)descriptionOfAssetOrderValues;
- (void)didSave;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)getInternalUserEditableAssets:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (bool)isEmpty;
- (bool)isValidKindForPersistence;
- (id)migration_newOrderKeyChild:(id)arg1;
- (id)migration_sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (id)mutableAssets;
- (bool)needsPersistenceUpdate;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)persistMetadataToFileSystem;
- (unsigned long long)photosCount;
- (void)prepareForDeletion;
- (void)refreshAssets;
- (void)registerForChanges;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)removePersistedFileSystemData;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (bool)resolvingConflicts;
- (id)searchIndexContents;
- (void)setAlbumShouldBeAutomaticallyDeleted:(bool)arg1;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (void)setResolvingConflicts:(bool)arg1;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (bool)supportsAssetOrderKeys;
- (void)unregisterForChanges;
- (id)userEditableAssets;
- (unsigned long long)videosCount;
- (void)willSave;

@end