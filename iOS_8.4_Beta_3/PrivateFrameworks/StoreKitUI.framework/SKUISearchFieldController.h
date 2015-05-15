/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISearchFieldController : NSObject <SKUITrendingSearchPageViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSString *_baseHintsURLString;
    SKUIClientContext *_clientContext;
    SKUICompletionList *_completionList;
    <SKUISearchFieldDelegate> *_delegate;
    SSVLoadURLOperation *_loadOperation;
    long long _numberOfSearchResults;
    NSOperationQueue *_operationQueue;
    SKUISearchBar *_searchBar;
    NSString *_searchBarAccessoryText;
    SKUISearchDisplayController *_searchDisplayController;
    NSString *_trendingSearchURLString;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UIViewController *contentsController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUISearchFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysSearchBarInNavigationBar;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfSearchResults;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, copy) NSString *searchBarAccessoryText;
@property (nonatomic, copy) NSString *searchHintsURLString;
@property (nonatomic) bool showsResultsForEmptyField;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trendingSearchURLString;

- (void).cxx_destruct;
- (id)URLForTrendingSearchPageView:(id)arg1;
- (void)_adjustInsetsForResultsTableView:(id)arg1;
- (void)_loadResultsForSearchRequest:(id)arg1;
- (void)_reloadData;
- (void)_reloadTrendingVisibility;
- (Class)_resultsTableViewClass;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (id)clientContext;
- (id)contentsController;
- (void)dealloc;
- (id)delegate;
- (bool)displaysSearchBarInNavigationBar;
- (id)initWithContentsController:(id)arg1;
- (long long)numberOfSearchResults;
- (void)resignActive:(bool)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBarAccessoryText;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginTouches:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (id)searchHintsURLString;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysSearchBarInNavigationBar:(bool)arg1;
- (void)setNumberOfSearchResults:(long long)arg1;
- (void)setSearchBarAccessoryText:(id)arg1;
- (void)setSearchHintsURLString:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setShowsResultsForEmptyField:(bool)arg1;
- (void)setTrendingSearchURLString:(id)arg1;
- (bool)showsResultsForEmptyField;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)trendingSearchPageView:(id)arg1 didSelectSearch:(id)arg2;
- (id)trendingSearchURLString;

@end
