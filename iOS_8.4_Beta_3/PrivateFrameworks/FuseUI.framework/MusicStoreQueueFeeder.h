/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreQueueFeeder : MPQueueFeeder <MPShuffleControllerDataSource, MPStoreAVItemDownloadMetadataConsuming> {
    NSArray *_allPlayableItemMetadataContexts;
    bool _allowsExplicitContent;
    MusicClientContext *_clientContext;
    MusicEntityValueContext *_containerEntityValueContext;
    unsigned long long _feederRevisionID;
    NSArray *_filteredPlayableItemMetadataContexts;
    MPPlaceholderAVItem *_placeholderAVItem;
    MPShuffleController *_shuffleController;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)_operationQueue;

- (void).cxx_destruct;
- (id)MPU_contentItemIdentifierCollection;
- (void)_configurePlaceholderItem;
- (id)_filteredPlayableItemMetadataContextsWithItems:(id)arg1 startIndex:(unsigned long long)arg2 removedIndexCountBeforeStartIndex:(unsigned long long*)arg3;
- (void)_getPlayableItemMetadataContexts:(id*)arg1 itemMetadataContextsNeedingMetadata:(id*)arg2 containerEntityValueContext:(id*)arg3 removedIndexCountBeforeStartIndex:(out unsigned long long*)arg4 forItemMetadataContexts:(id)arg5 startIndex:(unsigned long long)arg6;
- (bool)_hasPlaceholderItemAtIndex:(unsigned long long)arg1;
- (void)_reloadFilteredPlayableItemMetadataContexts;
- (void)_resolveItemMetadataContexts:(id)arg1 clientContext:(id)arg2 responseHandler:(id)arg3;
- (void)_restrictionMonitorAllowsExplicitContentDidChangeNotification:(id)arg1;
- (unsigned long long)_songShuffledIndexForIndex:(unsigned long long)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (bool)canSkipToPreviousItem;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)init;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (unsigned long long)itemCountForShuffleController:(id)arg1;
- (unsigned long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (long long)playbackMode;
- (bool)playerPreparesItemsForPlaybackAsynchronously;
- (unsigned long long)realRepeatType;
- (unsigned long long)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id)arg2;
- (unsigned long long)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned long long)arg2;
- (void)shuffleItemsWithAnchor:(unsigned long long*)arg1;
- (void)storeAVItem:(id)arg1 didReceiveResponseAssetDictionary:(id)arg2;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
