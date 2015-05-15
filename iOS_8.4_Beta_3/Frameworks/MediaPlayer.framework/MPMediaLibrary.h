/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibrary : NSObject <NSSecureCoding> {
    NSMutableArray *_additionalLibraryFilterPredicates;
    NSObject<OS_dispatch_queue> *_additionalLibraryFilterPredicatesAccessQueue;
    long long _cloudFilteringType;
    QueryCriteriaResultsCache *_collectionsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;
    NSHashTable *_connectionAssertions;
    float _connectionProgress;
    CADisplayLink *_connectionProgressDisplayLink;
    double _connectionProgressStartTime;
    NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;
    QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;
    NSMutableDictionary *_countOfItemsDidLoadForCriteria;
    QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;
    bool _determinedHasAudibleAudioBooks;
    unsigned int _determinedHasAudiobooks;
    bool _determinedHasCompilations;
    unsigned int _determinedHasComposers;
    unsigned int _determinedHasGeniusMixes;
    bool _determinedHasHomeVideos;
    bool _determinedHasITunesU;
    unsigned int _determinedHasMedia;
    bool _determinedHasMovieRentals;
    bool _determinedHasMovies;
    bool _determinedHasMusicVideos;
    unsigned int _determinedHasPlaylists;
    unsigned int _determinedHasPodcasts;
    unsigned int _determinedHasSongs;
    bool _determinedHasTVShows;
    unsigned int _determinedHasUbiquitousBookmarkableItems;
    bool _determinedHasVideoITunesU;
    bool _determinedHasVideoPodcasts;
    bool _determinedHasVideos;
    bool _disconnectAfterReleasingAssertions;
    NSObject<OS_dispatch_queue> *_entityCacheQueue;
    bool _filteringDisabled;
    NSObject<OS_dispatch_queue> *_fixedQueue;
    bool _hasAudibleAudioBooks;
    unsigned int _hasAudiobooks;
    NSMutableDictionary *_hasCollectionsDidLoadForCriteria;
    QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;
    bool _hasCompilations;
    unsigned int _hasComposers;
    unsigned int _hasGeniusMixes;
    bool _hasHomeVideos;
    bool _hasITunesU;
    NSMutableDictionary *_hasItemsDidLoadForCriteria;
    QueryCriteriaResultsCache *_hasItemsForCriteriaCache;
    unsigned int _hasMedia;
    bool _hasMovieRentals;
    bool _hasMovies;
    bool _hasMusicVideos;
    unsigned int _hasPlaylists;
    unsigned int _hasPodcasts;
    unsigned int _hasSongs;
    bool _hasTVShows;
    unsigned int _hasUbiquitousBookmarkableContent;
    bool _hasVideoITunesU;
    bool _hasVideoPodcasts;
    bool _hasVideos;
    QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache *_itemsForCriteriaCache;
    long long _libraryChangeObservers;
    <MPMediaLibraryDataProviderPrivate> *_libraryDataProvider;
    unsigned char _originalCellNetworkFlags;
    unsigned char _originalWiFiNetworkFlags;
    long long _removalReason;
}

@property(assign,readonly) NSString * _syncValidity;
@property(assign,readonly) NSDate * lastModifiedDate;
@property(assign,readonly) NSURL * protectedContentSupportStorageURL;
@property(assign,readwrite) long long removalReason;

+ (id)_libraryDataProviders;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)_mediaLibraries;
+ (void)addLibraryDataProvider:(id)arg1;
+ (void)beginDiscoveringMediaLibraries;
+ (id)defaultMediaLibrary;
+ (id)deviceMediaLibrary;
+ (void)endDiscoveringMediaLibraries;
+ (void)initialize;
+ (bool)isLibraryServerDisabled;
+ (id)libraryDataProviders;
+ (id)mediaLibraries;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(long long)arg2;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (void)setLibraryServerDisabled:(bool)arg1;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (bool)supportsSecureCoding;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;

- (void).cxx_destruct;
- (id)MPU_entityWithContentItemIdentifierCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)_MPU_mediaEntityWithFilterPredicate:(id)arg1 mediaGrouping:(long long)arg2 isCollection:(bool)arg3 options:(unsigned long long)arg4;
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;
- (bool)_checkHasContent:(bool*)arg1 determined:(bool*)arg2 mediaType:(unsigned long long)arg3 queryHasEntitiesBlock:(id)arg4;
- (bool)_checkHasContent:(bool*)arg1 determined:(bool*)arg2 queryHasEntitiesBlock:(id)arg3;
- (void)_clearCachedContentDataAndResultSets:(bool)arg1;
- (void)_clearCachedEntitiesIncludingResultSets:(bool)arg1;
- (void)_clearPendingDisconnection;
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (void)_connectionProgressDisplayLinkCallback:(id)arg1;
- (unsigned long long)_countOfCollectionsForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfItemsForQueryCriteria:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(id)arg5 loadValueFromDataProviderBlock:(id)arg6;
- (bool)_hasCollectionsForQueryCriteria:(id)arg1;
- (bool)_hasItemsForQueryCriteria:(id)arg1;
- (id)_initWithLibraryDataProvider:(id)arg1;
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_itemsForQueryCriteria:(id)arg1;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForRestrictionsChange;
- (void)_removeConnectionAssertion:(id)arg1;
- (void)_scheduleLibraryChangeNotificationPostingBlock:(id)arg1;
- (void)_stopConnectionProgressDisplayLink;
- (id)_syncValidity;
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(bool)arg2 completion:(id)arg3;
- (void)addLibraryFilterPredicate:(id)arg1;
- (id)addPlaylistWithName:(id)arg1;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(bool)arg2;
- (void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(bool)arg2 withCompletion:(id)arg3;
- (void)addStoreItemWithLookupDictionary:(id)arg1 andAddTracksToCloudLibrary:(bool)arg2 withCompletion:(id)arg3;
- (id)additionalLibraryFilterPredicates;
- (id)artworkDataSource;
- (void)beginGeneratingLibraryChangeNotifications;
- (long long)cloudFilteringType;
- (bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4;
- (bool)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)companionDeviceActiveStoreAccountIsDynamiteEligible;
- (id)completeMyCollectionArtworkDataSource;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2;
- (void)connectWithCompletionHandler:(id)arg1;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (float)connectionProgress;
- (unsigned long long)currentEntityRevision;
- (id)databasePath;
- (void)dealloc;
- (bool)deleteItems:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)downloadAsset:(id)arg1 completionHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingLibraryChangeNotifications;
- (id)entityCache;
- (id)entityWithMultiverseIdentifier:(id)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 usingBlock:(id)arg3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(id)arg2;
- (id)errorResolverForMediaItem:(id)arg1;
- (bool)hasAlbums;
- (bool)hasArtists;
- (bool)hasAudibleAudioBooks;
- (bool)hasAudioITunesUContent;
- (bool)hasAudiobooks;
- (bool)hasCompilations;
- (bool)hasComposers;
- (bool)hasGeniusMixes;
- (bool)hasGenres;
- (bool)hasHomeVideos;
- (bool)hasITunesUContent;
- (bool)hasMedia;
- (bool)hasMediaOfType:(unsigned long long)arg1;
- (bool)hasMovieRentals;
- (bool)hasMovies;
- (bool)hasMusicVideos;
- (bool)hasPlaylists;
- (bool)hasPodcasts;
- (bool)hasSongs;
- (bool)hasTVShows;
- (bool)hasUbiquitousBookmarkableItems;
- (bool)hasVideoITunesUContent;
- (bool)hasVideoPodcasts;
- (bool)hasVideos;
- (unsigned long long)hash;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (bool)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCurrentThreadInTransaction;
- (bool)isEqual:(id)arg1;
- (bool)isGeniusEnabled;
- (bool)isValidAssetURL:(id)arg1;
- (bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(bool)arg2;
- (id)itemWithStoreID:(unsigned long long)arg1;
- (id)lastModifiedDate;
- (id)libraryDataProvider;
- (bool)libraryHasBeenModifiedWithToken:(id)arg1;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)localizedSectionIndexTitles;
- (id)modificationToken;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (id)name;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)pathForAssetURL:(id)arg1;
- (void)performReadTransactionWithBlock:(id)arg1;
- (bool)performTransactionWithBlock:(id)arg1;
- (id)playbackHistoryPlaylist;
- (bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)playlistGeneration;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (id)protectedContentSupportStorageURL;
- (long long)removalReason;
- (bool)removeItems:(id)arg1;
- (void)removeLibraryFilterPredicate:(id)arg1;
- (bool)removePlaylist:(id)arg1;
- (bool)requiresAuthentication;
- (void)setCloudFilteringType:(long long)arg1;
- (void)setLibraryFilterPredicates;
- (void)setRemovalReason:(long long)arg1;
- (void)setSyncPlaylistId:(unsigned long long)arg1;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (long long)status;
- (unsigned long long)syncGenerationID;
- (unsigned long long)syncPlaylistId;
- (id)syncValidity;
- (id)uniqueIdentifier;
- (void)updateContentTasteCatalogWithCompletion:(id)arg1;
- (void)updateGlobalPlaylistWithID:(id)arg1 completion:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;
- (bool)writable;

@end
