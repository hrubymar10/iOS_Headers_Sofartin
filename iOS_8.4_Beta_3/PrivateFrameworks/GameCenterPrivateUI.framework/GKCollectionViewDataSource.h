/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCollectionViewDataSource : NSObject <GKCollectionViewDataSourceDelegate, UICollectionViewDataSource> {
    GKGridLayoutMetrics *_dataSourceMetricsInternal;
    NSString *_defaultSearchKey;
    GKSectionMetrics *_defaultSectionMetricsInternal;
    <GKCollectionViewDataSourceDelegate> *_delegate;
    NSMutableDictionary *_kindsToFactories;
    NSHashTable *_listeners;
    NSMutableDictionary *_sectionsToMetrics;
    NSMutableDictionary *_sectionsToSearchKeys;
}

@property (nonatomic, copy) GKGridLayoutMetrics *dataSourceMetrics;
@property (nonatomic, retain) GKGridLayoutMetrics *dataSourceMetricsInternal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultSearchKey;
@property (nonatomic, copy) GKSectionMetrics *defaultSectionMetrics;
@property (nonatomic, retain) GKSectionMetrics *defaultSectionMetricsInternal;
@property (nonatomic) <GKCollectionViewDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRootDataSource;
@property (nonatomic, readonly) bool isSearchable;
@property (nonatomic, retain) NSMutableDictionary *kindsToFactories;
@property (nonatomic, retain) NSHashTable *listeners;
@property (nonatomic, retain) NSMutableDictionary *sectionsToMetrics;
@property (nonatomic, retain) NSMutableDictionary *sectionsToSearchKeys;
@property (readonly) Class superclass;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 defaultViewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(bool)arg4;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (bool)containsDataSource:(id)arg1;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (id)dataSourceForSection:(unsigned long long)arg1;
- (id)dataSourceMetrics;
- (id)dataSourceMetricsInternal;
- (void)dealloc;
- (id)defaultSearchKey;
- (id)defaultSectionMetrics;
- (id)defaultSectionMetricsInternal;
- (id)delegate;
- (id)description;
- (void)enumerateItemsAndIndexPathsUsingBlock:(id)arg1;
- (id)indexPathsForItem:(id)arg1;
- (id)init;
- (bool)isRootDataSource;
- (bool)isSearchable;
- (bool)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(long long)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (id)kindsToFactories;
- (id)listeners;
- (void)loadDataWithCompletionHandlerAndError:(id)arg1;
- (id)localDescription;
- (id)metricsForSection:(long long)arg1;
- (id)metricsForSectionInternal:(long long)arg1;
- (void)notifyBatchUpdate:(id)arg1;
- (void)notifyBatchUpdate:(id)arg1 complete:(id)arg2;
- (void)notifyDidReloadData;
- (void)notifyItemMovedFromIndexPath:(id)arg1 toIndexPaths:(id)arg2;
- (void)notifyItemsInsertedAtIndexPaths:(id)arg1;
- (void)notifyItemsRefreshedAtIndexPaths:(id)arg1;
- (void)notifyItemsRemovedAtIndexPaths:(id)arg1;
- (void)notifyPlaceholderUpdated:(bool)arg1;
- (void)notifySectionMovedFrom:(long long)arg1 to:(long long)arg2;
- (void)notifySectionsInserted:(id)arg1;
- (void)notifySectionsMovedWithItems;
- (void)notifySectionsRefreshed:(id)arg1;
- (void)notifySectionsRemoved:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)registerSupplementaryViewOfKind:(id)arg1 withClass:(Class)arg2 target:(id)arg3 configurator:(SEL)arg4;
- (void)registerSupplementaryViewOfKind:(id)arg1 withFactory:(id)arg2;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(id)arg2;
- (id)searchKeyForSection:(long long)arg1;
- (unsigned long long)sectionForDataSource:(id)arg1;
- (id)sectionsToMetrics;
- (id)sectionsToSearchKeys;
- (void)setDataSourceMetrics:(id)arg1;
- (void)setDataSourceMetricsInternal:(id)arg1;
- (void)setDefaultSearchKey:(id)arg1;
- (void)setDefaultSectionMetrics:(id)arg1;
- (void)setDefaultSectionMetricsInternal:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKindsToFactories:(id)arg1;
- (void)setListeners:(id)arg1;
- (void)setMetrics:(id)arg1 forSection:(long long)arg2;
- (void)setSearchKey:(id)arg1 forSection:(long long)arg2;
- (void)setSectionsToMetrics:(id)arg1;
- (void)setSectionsToSearchKeys:(id)arg1;
- (id)supplementaryViewFactoryForKind:(id)arg1;
- (id)targetForAction:(SEL)arg1;
- (long long)totalItemCount;
- (void)updateSupplementaryMetricsForKey:(id)arg1 usingBlock:(id)arg2;

@end
