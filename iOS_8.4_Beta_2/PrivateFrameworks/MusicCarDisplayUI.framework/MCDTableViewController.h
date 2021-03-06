/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDTableViewController : MPUTableViewController {
    AVExternalDevice *_externalDevice;
    bool _limitedUI;
    bool _limiting;
    UIView *_nowPlayingButton;
    bool _shouldHideIndexTitles;
    bool _showMore;
    UIView *_snapshotView;
}

@property(assign,readwrite) bool limitedUI;
@property(assign,readwrite) bool shouldHideIndexTitles;
@property(assign,readwrite) bool showMore;

+ (Class)_tableViewClass;

- (void).cxx_destruct;
- (id)MPU_createNowPlayingButton;
- (void)_MCD_nowPlayingButtonAction:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_limitedUIDidChange;
- (bool)_viewControllerWasSelected;
- (void)dataSourceDidInvalidate;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (bool)limitedUI;
- (id)preferredFocusedItem;
- (void)reloadData;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setLimitedUI:(bool)arg1;
- (void)setShouldHideIndexTitles:(bool)arg1;
- (void)setShowMore:(bool)arg1;
- (bool)shouldHideIndexTitles;
- (bool)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;
- (bool)showMore;
- (bool)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
