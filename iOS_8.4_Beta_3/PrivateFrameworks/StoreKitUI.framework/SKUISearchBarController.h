/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISearchBarController : NSObject <SKUISearchFieldDelegate, UISearchBarDelegate> {
    SKUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;
    SKUIClientContext *_clientContext;
    bool _displaysSearchBarInNavigationBar;
    UIViewController *_parentViewController;
    UISearchBar *_searchBar;
    SKUISearchFieldController *_searchFieldController;
    bool _showsResultsForEmptyField;
    bool _usesSearchFieldController;
    SKUISearchBarViewElement *_viewElement;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysSearchBarInNavigationBar;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, retain) SKUISearchBarViewElement *searchBarViewElement;
@property (nonatomic) bool showsResultsForEmptyField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelGestureAction:(id)arg1;
- (void)_customizeSearchBar:(id)arg1;
- (void)_customizeSearchFieldController:(id)arg1;
- (void)_dispatchChangeEventWithText:(id)arg1;
- (void)_dispatchSubmitEventWithText:(id)arg1 URL:(id)arg2 searchHintOriginalTerm:(id)arg3 searchHintIndex:(id)arg4;
- (id)_newSearchFieldController;
- (void)_removeCancelTouchGestureRecognizer;
- (id)_searchFieldController;
- (id)clientContext;
- (void)dealloc;
- (bool)displaysSearchBarInNavigationBar;
- (id)initWithSearchBarViewElement:(id)arg1;
- (id)parentViewController;
- (void)reloadAfterDocumentUpdate;
- (void)resignActive:(bool)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)searchBarViewElement;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (void)searchFieldController:(id)arg1 searchBarDidChangeText:(id)arg2;
- (bool)searchFieldControllerShouldBeginEditing:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDisplaysSearchBarInNavigationBar:(bool)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSearchBarViewElement:(id)arg1;
- (void)setShowsResultsForEmptyField:(bool)arg1;
- (bool)showsResultsForEmptyField;

@end
