/* Generated by RuntimeBrowser.
 */

@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>

@optional

- (void)addGlobalPlaylistWithID:(NSString *)arg1 andAddToCloudLibrary:(bool)arg2 completion:(id)arg3;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)addItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (long long)addPlaylistWithValuesForProperties:(NSDictionary *)arg1;
- (void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(bool)arg2 withCompletion:(id)arg3;
- (void)addStoreItemWithLookupDictionary:(NSDictionary *)arg1 andAddTracksToCloudLibrary:(bool)arg2 withCompletion:(id)arg3;
- (bool)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long*)arg4;
- (bool)collectionExistsWithName:(NSString *)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (bool)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long*)arg3;
- (bool)companionDeviceActiveStoreAccountIsDynamiteEligible;
- (<MPArtworkDataSource> *)completeMyCollectionArtworkDataSource;
- (void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned long long)arg2 error:(id*)arg3;
- (NSString *)databasePath;
- (bool)deleteItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
- (long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)hasGeniusMixes;
- (bool)hasMediaOfType:(unsigned long long)arg1;
- (bool)hasUbiquitousBookmarkableItems;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(NSString *)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (bool)importOriginalArtworkFromImageData:(NSData *)arg1 withArtworkToken:(NSString *)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (bool)isCurrentThreadInTransaction;
- (bool)isGeniusEnabled;
- (bool)itemExistsWithPersistentID:(unsigned long long)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (NSDate *)lastModifiedDate;
- (NSString *)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (NSArray *)localizedSectionIndexTitles;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (MIPMultiverseIdentifier *)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (MIPMultiverseIdentifier *)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (void)performReadTransactionWithBlock:(id)arg1;
- (bool)performTransactionWithBlock:(id)arg1;
- (long long)playbackHistoryPlaylistPersistentID;
- (bool)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(NSString *)arg2 assetProtectionType:(long long)arg3;
- (NSArray *)preferredAudioLanguages;
- (NSArray *)preferredSubtitleLanguages;
- (void)releaseGeniusClusterPlaylist:(void*)arg1;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsWithIdentifiers:(long long*)arg1 atFilteredIndexes:(NSIndexSet *)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (bool)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned long long)arg2;
- (bool)removePlaylistWithIdentifier:(long long)arg1;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (bool)setValue:(id)arg1 forDatabaseProperty:(NSString *)arg2;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(id)arg5;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;
- (bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class*)arg3;
- (void)updateContentTasteCatalogWithCompletion:(id)arg1;
- (void)updateEntitesToCurrentRevision;
- (void)updateGlobalPlaylistWithID:(NSString *)arg1 completion:(id)arg2;
- (id)valueForDatabaseProperty:(NSString *)arg1;

@end
