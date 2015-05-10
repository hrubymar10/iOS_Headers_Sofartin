/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchViewController : UIViewController <PUSearchResultsDelegate, PUSuggestedSearchResultsDelegate, UIGestureRecognizerDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    _UIBackdropView *_backdropView;
    UIView *_backgroundView;
    UIBarButtonItem *_cancelButton;
    UIView *_cellSelectedBackgroundView;
    <UITableViewDataSource><UITableViewDelegate> *_dataSource;
    bool _debug_showMatchScores;
    <PUSearchViewControllerDelegate> *_delegate;
    NSMutableDictionary *_headerViews;
    UIPanGestureRecognizer *_horizontalPanGestureRecognizer;
    _UIDynamicValueAnimation *_horizontalPanResetAnimation;
    PHImageManager *_imageManager;
    bool _inCustomTransition;
    UISearchBar *_searchBar;
    PSIDatabase *_searchIndex;
    PUSearchResultsDataSource *_searchResultsDataSource;
    PUPingTimer *_searchResultsPingTimer;
    UITableView *_searchResultsTableView;
    UITableView *_searchSuggestionsTableView;
    NSString *_searchText;
    NSString *_selectedDisplayTitle;
    bool _showsSearchBarInNavigationBar;
    bool _showsSectionHeaderForSearchResults;
    PUSuggestedSearchResultsDataSource *_suggestedSearchResultsDataSource;
    PUPingTimer *_suggestedSearchResultsPingTimer;
}

@property(assign,retain) UIView * backgroundView;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <PUSearchViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(getter=isInCustomTransition,assign,readwrite) bool inCustomTransition;
@property(assign,readonly) UISearchBar * searchBar;
@property(assign,copy) NSString * searchText;
@property(assign,retain) NSString * selectedDisplayTitle;
@property(assign,readwrite) bool showsSearchBarInNavigationBar;
@property(assign,readwrite) bool showsSectionHeaderForSearchResults;
@property(assign,readonly) Class superclass;

+ (id)_screenSnapshot;
+ (bool)mustAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
+ (id)newSearchBar;
+ (bool)usePopoverAppearanceForTraitCollection:(id)arg1;
+ (void)viewController:(id)arg1 swapSearchViewController:(id)arg2 withResultsViewController:(id)arg3 animated:(bool)arg4 completion:(id)arg5;

- (void).cxx_destruct;
- (void)_DEBUG_rebuildSearchIndex:(id)arg1;
- (void)_applyHorizontalOffsetX:(double)arg1;
- (void)_applyHorizontalPanResetAnimationWithVelocity:(double)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_cancelHorizontalPanResetAnimation;
- (void)_configureCell:(id)arg1 inTableView:(id)arg2 atIndexAPath:(id)arg3;
- (void)_configureTableView:(id)arg1;
- (void)_handleHorizontalPan:(id)arg1;
- (bool)_isSuggestionsSection:(unsigned long long)arg1;
- (id)_localIdentifiersForUUIDs:(id)arg1;
- (void)_mergeSearchResults;
- (void)_mergeSuggestedSearchResultsAnimated:(bool)arg1;
- (unsigned long long)_numberOfTableViewSectionsOutSuggestionsSection:(unsigned long long*)arg1 outRecentsSection:(unsigned long long*)arg2;
- (void)_pingTimerFire:(id)arg1;
- (void)_pushGridForAlbum:(struct NSObject { Class x1; }*)arg1 completion:(id)arg2;
- (void)_pushGridForAlbumWithUUID:(id)arg1 completion:(id)arg2;
- (void)_pushMomentsGridForPhotoCollections:(id)arg1 title:(id)arg2 completion:(id)arg3;
- (void)_pushMomentsGridForPhotosWithUUIDs:(id)arg1 title:(id)arg2 completion:(id)arg3;
- (void)_scheduleUpdateTableFooterView;
- (void)_searchFieldTextDidChange:(id)arg1;
- (id)_searchResultsTableView;
- (void)_selectSearchResultAtIndexPath:(id)arg1;
- (void)_selectSuggestedSearchAtIndexPath:(id)arg1;
- (void)_setCurrentTableViewDataSource:(id)arg1;
- (void)_setSearchText:(id)arg1;
- (void)_setSelectedDisplayTitle:(id)arg1;
- (void)_updateBackgroundView;
- (void)_updateFloatingHeaderClippingInTableView:(id)arg1;
- (void)_updateForSearchTextDidChangeWithoutAnimation;
- (void)_updateNavigationBar;
- (void)_updateSearchWithText:(id)arg1;
- (void)_updateTableFooterViewWithProgress:(unsigned long long)arg1;
- (id)backgroundView;
- (void)cancelActiveSearches;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (bool)isInCustomTransition;
- (id)navigationItem;
- (id)newSearchResultsControllerWithSpec:(id)arg1 searchResults:(id)arg2 orAlbum:(struct NSObject { Class x1; }*)arg3 title:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pu_debugRows;
- (void)scrollViewDidScroll:(id)arg1;
- (id)searchBar;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1;
- (id)searchText;
- (id)selectedDisplayTitle;
- (void)setBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInCustomTransition:(bool)arg1;
- (void)setSearchText:(id)arg1;
- (void)setShowsSearchBarInNavigationBar:(bool)arg1;
- (void)setShowsSectionHeaderForSearchResults:(bool)arg1;
- (bool)showsSearchBarInNavigationBar;
- (bool)showsSectionHeaderForSearchResults;
- (void)suggestedSearchResultsDataSourceHasPendingChanges:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end