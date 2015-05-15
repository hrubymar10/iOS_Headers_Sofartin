/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCloudController : NSObject {
    NSObject<HSCloudAvailability> *_cloudAvailabilityController;
    HSCloudClient *_cloudClient;
    SSVMediaContentTasteController *_contentTasteController;
    bool _isCloudEnabled;
    bool _isInitialImport;
    bool _isUpdateInProgress;
    bool _jaliscoGeniusEnabled;
    int _preferencesChangedNotifyToken;
    bool _preferencesChangedNotifyTokenIsValid;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(assign,readonly) bool canDefaultMediaLibraryShowCloudContent;
@property(assign,readonly) bool canShowCloudDownloadButtons;
@property(assign,readonly) bool canShowCloudMusic;
@property(assign,readonly) bool canShowCloudVideo;
@property(assign,readonly) HSCloudClient * cloudClient;
@property(assign,readonly) bool enablingJaliscoGeniusRequiresTerms;
@property(assign,readonly) bool hasCloudLockerAccount;
@property(assign,readonly) bool hasPurchaseHistoryAccount;
@property(assign,readonly) bool isCloudEnabled;
@property(assign,readonly) bool isGeniusEnabled;
@property(assign,readonly) bool isInitialImport;
@property(assign,readonly) bool isUpdateInProgress;
@property(getter=isJaliscoGeniusEnabled,assign,readonly) bool jaliscoGeniusEnabled;

+ (bool)isMediaApplication;
+ (void)migrateCellularDataPreferencesIfNeeded;
+ (id)sharedCloudController;

- (void).cxx_destruct;
- (void)_initializeUpdateInProgressState;
- (void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(id)arg2;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(id)arg5;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(id)arg2;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(id)arg2;
- (void)becomeActive;
- (void)becomeActiveAndWaitUntilDone:(bool)arg1;
- (bool)canDefaultMediaLibraryShowCloudContent;
- (bool)canShowCloudDownloadButtons;
- (void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (bool)canShowCloudMusic;
- (void)canShowCloudTracksDidChangeNotification:(id)arg1;
- (bool)canShowCloudVideo;
- (id)cloudClient;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(id)arg4;
- (void)dealloc;
- (void)disableCloudLibraryWithCompletionHandler:(id)arg1;
- (void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(id)arg2;
- (bool)enablingJaliscoGeniusRequiresTerms;
- (void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(id)arg4;
- (void)fetchTasteCatalogWithCompletion:(id)arg1;
- (bool)hasCloudLockerAccount;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (bool)hasPurchaseHistoryAccount;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (id)init;
- (bool)isCellularDataRestricted;
- (void)isCellularDataRestrictedDidChangeNotification:(id)arg1;
- (bool)isCloudEnabled;
- (bool)isCloudLibraryEnabled;
- (bool)isGeniusEnabled;
- (bool)isInitialImport;
- (bool)isJaliscoGeniusEnabled;
- (bool)isUpdateInProgress;
- (void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(id)arg5;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(id)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(id)arg2;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(id)arg2;
- (void)resignActive;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(id)arg4;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2;
- (void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3;
- (void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(id)arg4;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;
- (void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(id)arg2;
- (void)uploadCloudItemProperties;
- (void)uploadCloudPlaylistProperties;

@end