/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABCountryPickerViewController : ABPickerViewController <UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray *_allCountries;
    UILocalizedIndexedCollation *_collation;
    NSArray *_filteredCountries;
    NSDictionary *_indexToSections;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    NSArray *_sectionIndexTitles;
    NSArray *_sections;
    NSString *_selectedCountryCode;
    NSIndexPath *_selectedIndexPath;
    UITableView *_tableView;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * selectedCountryCode;
@property(assign,readonly) Class superclass;

- (void)_getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1;
- (void)_setSelectedCountryCode:(id)arg1 atPath:(id)arg2;
- (double)ab_heightToFitForViewInPopoverView;
- (void)configureSections;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadCountryCodes;
- (void)scrollToSearchFieldAnimated:(bool)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)selectedCountryCode;
- (void)setSelectedCountryCode:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
