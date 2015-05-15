/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStructuredPageTableDataSource : SUTableDataSource {
    SUItem *_activeLoadMoreItem;
    NSMutableArray *_cachedHeaderViews;
    SUClientInterface *_clientInterface;
    double _offerButtonWidth;
    SUStructuredPage *_structuredPage;
    long long _style;
}

@property (nonatomic, retain) SUItem *activeLoadMoreItem;
@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (nonatomic, retain) SUStructuredPage *structuredPage;
@property (nonatomic) long long style;

- (void)_configureLoadMoreCell:(id)arg1 forItem:(id)arg2;
- (id)_itemOfferButtonForCell:(id)arg1 item:(id)arg2;
- (bool)_shouldShowItemOfferButtonForItem:(id)arg1;
- (id)activeLoadMoreItem;
- (bool)canDeleteIndexPath:(id)arg1;
- (bool)canSelectIndexPath:(id)arg1;
- (bool)canShowItemOfferButtonForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id*)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (id)cellConfigurationForIndex:(long long)arg1 item:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (double)cellHeightForIndexPath:(id)arg1;
- (id)clientInterface;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)dealloc;
- (bool)deleteIndexPath:(id)arg1;
- (id)headerViewForSection:(long long)arg1;
- (id)newHeaderViewForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)reloadCellContexts;
- (void)reloadData;
- (long long)sectionIndexForIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)sectionIndexTitles;
- (void)setActiveLoadMoreItem:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setStructuredPage:(id)arg1;
- (void)setStyle:(long long)arg1;
- (id)structuredPage;
- (long long)style;
- (long long)tableViewStyle;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1;

@end
