/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLGenericAlbum : _PLGenericAlbum <PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin, PLOrderKeyObject> {
    NSObject<PLIndexMappingCache> *_derivededAlbums;
    bool didRegisteredWithUserInterfaceContext;
    bool isRegisteredForChanges;
}

@property(assign,readonly) unsigned long long approximateCount;
@property(assign,retain) NSOrderedSet * assets;
@property(assign,readonly) unsigned long long assetsCount;
@property(assign,readwrite) unsigned long long batchSize;
@property(assign,readonly) bool canContributeToCloudSharedAlbum;
@property(assign,readonly) bool canShowAvalancheStacks;
@property(assign,readonly) bool canShowComments;
@property(assign,retain) NSString * cloudGUID;
@property(assign,readwrite) short cloudLocalState;
@property(assign,readwrite) short cloudServerState;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool didRegisteredWithUserInterfaceContext;
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
@property(assign,readonly) bool isOwnPhotoStreamAlbum;
@property(assign,readonly) bool isOwnedCloudSharedAlbum;
@property(assign,readonly) bool isPanoramasAlbum;
@property(assign,readonly) bool isPendingPhotoStreamAlbum;
@property(assign,readonly) bool isPhotoStreamAlbum;
@property(assign,readonly) bool isRecentlyAddedAlbum;
@property(assign,readwrite) bool isRegisteredForChanges;
@property(assign,readonly) bool isRootFolder;
@property(assign,readonly) bool isSmartAlbum;
@property(assign,readonly) bool isStandInAlbum;
@property(assign,readonly) bool isUserLibraryAlbum;
@property(assign,readonly) bool isWallpaperAlbum;
@property(assign,retain) PLManagedAsset * keyAsset;
@property(assign,retain) NSNumber * kind;
@property(assign,readwrite) int kindValue;
@property(assign,copy) NSArray * localizedLocationNames;
@property(assign,copy) NSString * localizedTitle;
@property(assign,retain) NSMutableOrderedSet * mutableAssets;
@property(assign,copy) NSString * name;
@property(assign,readwrite) int pendingItemsCount;
@property(assign,readwrite) int pendingItemsType;
@property(assign,retain) PLPhotoLibrary * photoLibrary;
@property(assign,readonly) unsigned long long photosCount;
@property(getter=isPinned,setter=setPinned:,assign,readwrite) bool pinned;
@property(assign,retain) UIImage * posterImage;
@property(assign,retain) PLManagedAsset * secondaryKeyAsset;
@property(assign,readonly) bool shouldDeleteWhenEmpty;
@property(assign,retain) NSDictionary * slideshowSettings;
@property(assign,copy) id sortingComparator;
@property(assign,retain) NSDate * startDate;
@property(assign,readonly) Class superclass;
@property(assign,retain) PLManagedAsset * tertiaryKeyAsset;
@property(assign,retain) NSString * title;
@property(assign,retain) NSDate * trashedDate;
@property(assign,readwrite) short trashedState;
@property(assign,retain) NSString * uuid;
@property(assign,readonly) unsigned long long videosCount;

+ (id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4;
+ (id)_predicateForSupportedAlbumTypes;
+ (id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_unpushedParentsOfAlbums:(id)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)albumsWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithCloudGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)allFavoritesAlbumInLibrary:(id)arg1;
+ (id)allHorizontalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allPanoramasAlbumInLibrary:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allSyncedAlbumsInManagedObjectContext:(id)arg1;
+ (id)allVerticalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allVideosAlbumInLibrary:(id)arg1;
+ (id)cameraRollAlbumInLibrary:(id)arg1;
+ (id)childKeyForOrdering;
+ (id)cloudAlbumsInLibrary:(id)arg1;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)includeUnpushedParentsForAlbums:(id)arg1 limit:(unsigned long long)arg2;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewFaceAlbumIntoLibrary:(id)arg1;
+ (id)insertNewFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewSyncedEventIntoLibrary:(id)arg1;
+ (id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewSyncedFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (bool)isFolder:(int)arg1;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)keyPathsForValuesAffectingName;
+ (id)localizedTitleForAlbumKind:(int)arg1;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (void)removeEmptyAlbumsForCloudResetInLibrary:(id)arg1;
+ (void)removeTrashedAlbumsAndFoldersForCloudResetInLibrary:(id)arg1;
+ (void)resetAlbumStateForCloudInLibrary:(id)arg1;
+ (id)rootFolderInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)trashBinAlbumInLibrary:(id)arg1;
+ (id)userLibraryAlbumInLibrary:(id)arg1;
+ (id)uuidFromGroupURL:(id)arg1;
+ (id)wallpaperAlbumInLibrary:(id)arg1;

- (void)_applyTrashedState:(short)arg1 date:(bool)arg2 :(id)arg3;
- (id)_compactDebugDescription;
- (id)_itemIdentifier;
- (id)_kindDescription;
- (id)_prettyDescription;
- (void)applyPropertiesFromAlbumChange:(id)arg1;
- (void)applyTrashedState:(short)arg1;
- (unsigned long long)approximateCount;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (unsigned long long)assetsCount;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canMoveToTrash;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (id)childKeyForOrdering;
- (id)childManagedObject;
- (id)cloudGUID;
- (unsigned long long)count;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (id)cplAlbumChangeInPhotoLibrary:(id)arg1;
- (void)dealloc;
- (void)delete;
- (id)description;
- (bool)didRegisteredWithUserInterfaceContext;
- (void)didSave;
- (void)enumerateDerivedAlbums:(id)arg1;
- (void)enumerateDerivedIndexMappers:(id)arg1;
- (id)groupURL;
- (bool)hasDerivedIndexMappers;
- (bool)hasUnseenContentBoolValue;
- (bool)isCameraAlbum;
- (bool)isCloudSharedAlbum;
- (bool)isEmpty;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnPhotoStreamAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isPinned;
- (bool)isRecentlyAddedAlbum;
- (bool)isRegisteredForChanges;
- (bool)isRootFolder;
- (bool)isSmartAlbum;
- (bool)isStandInAlbum;
- (bool)isUserLibraryAlbum;
- (bool)isWallpaperAlbum;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)migration_sortedOrderKeysForChildrenUsingMap:(id)arg1;
- (id)name;
- (long long)orderValue;
- (id)photoLibrary;
- (unsigned long long)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)registerDerivedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)registerForChanges;
- (id)secondaryOrderSortKey;
- (void)setCloudGUID:(id)arg1;
- (void)setDidRegisteredWithUserInterfaceContext:(bool)arg1;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (void)setIsRegisteredForChanges:(bool)arg1;
- (void)setKind:(id)arg1;
- (void)setKindValue:(int)arg1;
- (void)setOrderValue:(long long)arg1;
- (void)setPinned:(bool)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (bool)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)title;
- (void)unregisterAllDerivedAlbums;
- (void)unregisterForChanges;
- (void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2;
- (id)uuid;
- (unsigned long long)videosCount;
- (void)willTurnIntoFault;

@end
