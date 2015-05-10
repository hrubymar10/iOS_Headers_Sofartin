/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageReviewsViewController : UIViewController <SKComposeReviewDelegate, SKUILayoutCacheDelegate, SKUIProductPageChildViewController, SKUIReviewsFacebookViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool _askPermission;
    SKUIClientContext *_clientContext;
    SKComposeReviewViewController *_composeViewController;
    <SKUIProductPageChildViewControllerDelegate> *_delegate;
    NSMutableIndexSet *_expandedIndexSet;
    SKUIReviewsFacebookViewController *_facebookViewController;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIReviewsHistogramViewController *_histogramViewController;
    bool _isPad;
    SKUILayoutCache *_layoutCache;
    SSVLoadURLOperation *_loadOperation;
    long long _loadedPageCount;
    NSOperationQueue *_operationQueue;
    SKUIProductPage *_productPage;
    SKUIReviewList *_reviewList;
    SKUIIPadCustomerReviewsHeaderView *_reviewsHeaderView;
    bool _showAllVersions;
    long long _sortOrder;
    SKUIStarRatingQueue *_starRatingQueue;
    SKUIProductPageTableView *_tableView;
}

@property(assign,readwrite) bool askPermission;
@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SKUIProductPageChildViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,copy) SKUIFacebookLikeStatus * facebookLikeStatus;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SKUIProductPageHeaderViewController * headerViewController;
@property(assign,readonly) NSOperationQueue * operationQueue;
@property(assign,readonly) SKUIProductPage * productPage;
@property(assign,readonly) UIScrollView * scrollView;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeaderView;
- (void)_addReviewsFromResponse:(id)arg1 error:(id)arg2;
- (void)_appSupportAction:(id)arg1;
- (id)_bottomBorderColorForScheme:(id)arg1;
- (double)_defaultPageWidth;
- (id)_histogramViewController;
- (id)_loadMoreCellForTableView:(id)arg1 indexPath:(id)arg2;
- (void)_loadNextPageIfNecessaryForOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_reloadData;
- (void)_resetPersonalStarRating;
- (id)_reviewsHeaderView;
- (void)_setReviewListWithResponse:(id)arg1 error:(id)arg2;
- (bool)_shouldShowLoadMoreCell;
- (void)_sortSelectionAction:(id)arg1;
- (void)_starRatingAction:(id)arg1;
- (id)_tableView;
- (id)_textBoxCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)_textLayoutRequestWithText:(id)arg1;
- (id)_urlStringWithPageNumber:(long long)arg1;
- (void)_versionSelectionAction:(id)arg1;
- (void)_writeAReviewAction:(id)arg1;
- (bool)askPermission;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)facebookLikeStatus;
- (id)headerViewController;
- (id)initWithProductPage:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)operationQueue;
- (id)productPage;
- (void)reloadData;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;
- (void)reviewsFacebookViewControllerDidChange:(id)arg1;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAskPermission:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFacebookLikeStatus:(id)arg1;
- (void)setHeaderViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
