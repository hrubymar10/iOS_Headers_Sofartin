/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {
    ABAccountsAndGroupDataSource *_dataSource;
    bool _needsReload;
    ABPeoplePickerNavigationController *_peoplePickerNavigationController;
    UIRefreshControl *_refreshControl;
    bool _showsRefreshButton;
    bool _tableViewNeedsReloadAfterResume;
}

@property(assign,readonly) ABAccountsAndGroupDataSource * dataSource;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) ABPeoplePickerNavigationController * peoplePickerNavigationController;
@property(assign,readonly) Class superclass;

- (void)_updateDisplayedContactsFilterFromSelection;
- (int)abViewControllerType;
- (void)applicationDidResume;
- (id)dataSource;
- (void)dealloc;
- (void)done:(id)arg1;
- (bool)hidesGlobalGroupWrapper;
- (bool)hidesSearchableSources;
- (id)initWithModel:(id)arg1;
- (void)loadView;
- (id)model;
- (void)modelDatabaseChange:(id)arg1;
- (id)peoplePickerNavigationController;
- (void)refreshEverythingNow;
- (void)reloadData;
- (void)setHidesGlobalGroupWrapper:(bool)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setPeoplePickerNavigationController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateRefreshButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
