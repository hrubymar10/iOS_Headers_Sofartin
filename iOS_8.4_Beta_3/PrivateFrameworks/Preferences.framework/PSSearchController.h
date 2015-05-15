/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchController : NSObject <PSSearchModelDataSource, PSSearchModelDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    <PSSearchControllerDelegate> *_delegate;
    UISearchDisplayController *_displayController;
    NSMutableDictionary *_iconViewMap;
    PSListController *_listController;
    int _notifyToken;
    NSMutableArray *_reusableIconViews;
    UISearchBar *_searchBar;
    bool _searchEnabled;
    PSSearchResults *_searchResults;
    bool _showSectionInDetailText;
    bool _showToggles;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSSearchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PSListController *listController;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (readonly) Class superclass;

+ (double)_additionalHeightForLabelWithText:(id)arg1 font:(id)arg2 boundingWidth:(double)arg3;

- (void)_buildSearchUIIfNecessary;
- (id)_buildURLForEntry:(id)arg1 isRoot:(bool*)arg2;
- (id)_detailTextForSearchEntry:(id)arg1 effectiveTitle:(id*)arg2;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; })_layoutInfoForEntryAtIndexPath:(id)arg1;
- (id)_readPreferenceValueUsingAction:(id)arg1;
- (void)_reloadSettings:(bool)arg1;
- (void)_removeIconViewForSection:(id)arg1;
- (bool)_setBoolValue:(bool)arg1 forIvar:(bool*)arg2;
- (void)_setPreferenceValueUsingAction:(id)arg1 specifier:(id)arg2;
- (bool)_shouldShowSwitchForSearchEntry:(id)arg1;
- (void)_updateIconViews:(bool)arg1;
- (void)_updateListControllerHeaderView:(bool)arg1;
- (void)_updateSearchResultsWithText:(id)arg1;
- (bool)activateWithInitialText:(id)arg1 animated:(bool)arg2;
- (void)addRootSpecifiers:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithListController:(id)arg1;
- (bool)isActive;
- (id)listController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)readPreferenceValue:(id)arg1;
- (void)reloadRootSpecifiers:(id)arg1;
- (void)removeRootSpecifiers:(id)arg1;
- (Class)rootSearchControllerClassForSearchModel:(id)arg1;
- (id)rootSpecifiersForSearchModel:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchModel:(id)arg1 updatedWithNewResults:(id)arg2 forQuery:(id)arg3;
- (void)searchModelDidFinishIndexing:(id)arg1;
- (void)searchModelWillBeginIndexing:(id)arg1;
- (void)setActive:(bool)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setSearchBarVisible:(bool)arg1 animated:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)viewWillAppear;

@end
