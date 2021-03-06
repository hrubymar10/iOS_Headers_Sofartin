/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSInternationalLanguageController : PSViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    PSLanguage *_checkedLanguage;
    UIView *_contentView;
    NSArray *_deviceLanguages;
    NSArray *_filteredDeviceLanguages;
    NSArray *_filteredOtherLanguages;
    PSLanguageSelector *_languageSelector;
    PSLocaleSelector *_localeSelector;
    NSArray *_otherLanguages;
    NSString *_savedSearchTerm;
    UISearchBar *_searchBar;
    bool _searchIsActive;
    UITableView *_tableView;
}

@property(assign,retain) PSLanguage * checkedLanguage;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSArray * deviceLanguages;
@property(assign,retain) NSArray * filteredDeviceLanguages;
@property(assign,retain) NSArray * filteredOtherLanguages;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) PSLanguageSelector * languageSelector;
@property(assign,retain) PSLocaleSelector * localeSelector;
@property(assign,retain) NSArray * otherLanguages;
@property(assign,retain) NSString * savedSearchTerm;
@property(assign,readwrite) bool searchIsActive;
@property(assign,readonly) Class superclass;

- (id)_mainContentView;
- (void)_removeBlackFrame;
- (void)cancelButtonTapped;
- (id)checkedLanguage;
- (void)dealloc;
- (id)deviceLanguages;
- (void)doneButtonTapped;
- (id)filteredDeviceLanguages;
- (id)filteredLanguagesForLanguageList:(id)arg1 searchString:(id)arg2;
- (id)filteredOtherLanguages;
- (void)generateLanguageCells;
- (id)init;
- (id)languageSelector;
- (void)loadData;
- (void)loadView;
- (id)localeSelector;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)otherLanguages;
- (void)reloadDataAndScrollToCheckedLanguageWithAnimation:(bool)arg1;
- (id)savedSearchTerm;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (bool)searchIsActive;
- (void)setCheckedLanguage:(id)arg1;
- (void)setDeviceLanguages:(id)arg1;
- (void)setFilteredDeviceLanguages:(id)arg1;
- (void)setFilteredOtherLanguages:(id)arg1;
- (void)setLanguageSelector:(id)arg1;
- (void)setLocaleSelector:(id)arg1;
- (void)setOtherLanguages:(id)arg1;
- (void)setSavedSearchTerm:(id)arg1;
- (void)setSearchIsActive:(bool)arg1;
- (void)sortByLocalizedLanguage:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateNavigationItem;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
