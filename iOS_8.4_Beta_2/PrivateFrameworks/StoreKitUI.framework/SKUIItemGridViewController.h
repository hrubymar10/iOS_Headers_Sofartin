/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIItemArtworkContext *_artworkContext;
    SKUIClientContext *_clientContext;
    UICollectionView *_collectionView;
    <SKUIItemGridDelegate> *_delegate;
    NSMutableIndexSet *_hiddenIconIndexSet;
    struct CGSize { 
        double width; 
        double height; 
    } _imageBoundingSize;
    SKUIItemCollectionController *_itemCollectionController;
    NSMutableArray *_items;
    NSOperationQueue *_operationQueue;
    UIImage *_placeholderImage;
    double _rowHeight;
    NSMutableIndexSet *_selectedItemIndexSet;
    SKUIUber *_uber;
}

@property(assign,retain) SKUIItemArtworkContext * artworkContext;
@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } contentOffset;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SKUIItemGridDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SKUIStyledImageDataConsumer * iconDataConsumer;
@property(assign,readwrite) struct CGSize { double x1; double x2; } imageBoundingSize;
@property(assign,copy) NSArray * items;
@property(assign,retain) NSOperationQueue * operationQueue;
@property(assign,readonly) double rowHeight;
@property(assign,readonly) Class superclass;
@property(assign,retain) SKUIUber * uber;

- (void).cxx_destruct;
- (id)_collectionView;
- (id)_itemCollectionController;
- (long long)_numberOfColumnsForOrientation:(long long)arg1;
- (void)_reloadLayout;
- (id)artworkContext;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (void)dealloc;
- (id)delegate;
- (id)iconDataConsumer;
- (struct CGSize { double x1; double x2; })imageBoundingSize;
- (id)initWithRowHeight:(double)arg1;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didPerformEditActionForCell:(id)arg2;
- (id)items;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (void)loadView;
- (id)operationQueue;
- (id)popIconImageViewForItemAtIndex:(long long)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (double)rowHeight;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setArtworkContext:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconDataConsumer:(id)arg1;
- (void)setImageBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemCellClass:(Class)arg1;
- (void)setItems:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setUber:(id)arg1;
- (bool)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)uber;
- (void)unhideIcons;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleItemRangeForItemCollectionController:(id)arg1;

@end
