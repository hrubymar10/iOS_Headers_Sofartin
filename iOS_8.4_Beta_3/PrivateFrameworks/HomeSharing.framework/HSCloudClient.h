/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudClient : NSObject <HSCloudAvailability> {
    bool _active;
    HSConnectionConfiguration *_configuration;
    unsigned long long _daemonConfiguration;
    NSMutableSet *_knownArtworkIDs;
    NSObject<OS_dispatch_queue> *_knownArtworkIDsQueue;
    NSXPCConnection *_nsxpcConnection;
    NSMutableSet *_pendingArtworkRequests;
    NSObject<OS_dispatch_queue> *_pendingArtworkRequestsQueue;
    long long _preferredVideoQuality;
    id _updateInProgressChangedHandler;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,copy) id updateInProgressChangedHandler;

- (void).cxx_destruct;
- (void)_sendConfigurationToDaemon;
- (void)_serverDidLaunch;
- (void)_serverUpdateInProgressDidChange;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(id)arg5;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(id)arg2;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(id)arg2;
- (void)authenticateAndStartInitialImport:(bool)arg1 completionHandler:(id)arg2;
- (void)authenticateAndStartInitialImport:(bool)arg1 mergeWithCloudLibrary:(bool)arg2 completionHandler:(id)arg3;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)becomeActive;
- (bool)canSetItemProperty:(id)arg1;
- (bool)canSetPlaylistProperty:(id)arg1;
- (bool)canShowCloudDownloadButtons;
- (bool)canShowCloudMusic;
- (bool)canShowCloudVideo;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(id)arg1;
- (id)connection;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(id)arg4;
- (void)dealloc;
- (void)deauthenticateWithCompletionHandler:(id)arg1;
- (void)disableJaliscoGeniusWithCompletionHandler:(id)arg1;
- (void)downloadGeniusDataWithCompletionHandler:(id)arg1;
- (void)enableJaliscoGeniusWithCompletionHandler:(id)arg1;
- (void)fetchKeepLocalForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2 completionHandler:(id)arg3;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)importContainerArtworkForSagaID:(long long)arg1 completionHandler:(id)arg2;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)importItemArtworkForSagaID:(long long)arg1 completionHandler:(id)arg2;
- (void)importItemArtworkForSubscriptionStoreContentID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)isAuthenticatedWithCompletionHandler:(id)arg1;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(id)arg2;
- (bool)isCellularDataRestricted;
- (void)isExpiredWithCompletionHandler:(id)arg1;
- (void)jaliscoAppsImageDataForStoreID:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForSagaID:(long long)arg1 completionHandler:(id)arg2;
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadGeniusItemsForSagaID:(long long)arg1 completionHandler:(id)arg2;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(id)arg1;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)arg1;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(id)arg1;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(id)arg1;
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(id)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)publishPlaylistWithSagaID:(long long)arg1 completionHandler:(id)arg2;
- (void)redownloadPurchaseAppWithStoreID:(id)arg1 completionHandler:(id)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(id)arg2;
- (void)removeJaliscoLibraryWithCompletionHander:(id)arg1;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(id)arg2;
- (void)resetConfiguration:(id)arg1;
- (void)resignActive;
- (void)searchJaliscoAppsLibrary:(id)arg1 searchMethod:(long long)arg2 completionHandler:(id)arg3;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(id)arg4;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)setHidden:(bool)arg1 purchasedAppWithStoreID:(id)arg2 completionHandler:(id)arg3;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(long long)arg2;
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setKeepLocal:(bool)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(id)arg4;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(unsigned long long)arg3 completionHandler:(id)arg4;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setUpdateInProgressChangedHandler:(id)arg1;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;
- (void)unhideAllPurchasedApps:(id)arg1;
- (void)updateArtistHeroImages;
- (id)updateInProgressChangedHandler;
- (void)updateJaliscoAppsLibraryForFamilyMemberStoreID:(id)arg1 withReason:(long long)arg2 completionHandler:(id)arg3;
- (void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(id)arg1;
- (void)updateJaliscoLibraryWithCompletionHandler:(id)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)updateSagaLibraryWithCompletionHandler:(id)arg1;
- (void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)uploadArtworkForPlaylistWithPersistentID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)uploadCloudItemProperties;
- (void)uploadCloudPlaylistProperties;
- (void)uploadItemProperties;

@end
