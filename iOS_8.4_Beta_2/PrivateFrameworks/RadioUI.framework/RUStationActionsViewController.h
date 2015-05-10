/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUStationActionsViewController : UIViewController <MCProfileConnectionObserver, RUStationTrackInfoViewDelegate, SKStoreProductViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool _bagShowsExplicitToggle;
    UILabel *_copyrightLabel;
    long long _currentAction;
    <RUStationActionsViewControllerDelegate> *_delegate;
    bool _isProfileExplicitContentRestricted;
    MPAVItem *_item;
    UILabel *_navigationTitleLabel;
    bool _needsTrackInfoViewHeightReset;
    UISwitch *_playExplicitTracksSwitch;
    NSArray *_playbackQueue;
    bool _showsDoneButton;
    RadioStation *_station;
    NSMutableArray *_stationActionGroups;
    UITableViewCell *_stationTuningCell;
    RUStationTuningView *_stationTuningView;
    UITableView *_tableView;
    RUInnerShadowHeaderFooterView *_topShadowView;
    RUStationTrackInfoView *_trackInfoView;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <RUStationActionsViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) MPAVItem * item;
@property(assign,readwrite) bool showsDoneButton;
@property(assign,readonly) RadioStation * station;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDerivedStationUsingArtist:(bool)arg1 withCompletionHandler:(id)arg2;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)_doneAction:(id)arg1;
- (id)_indexPathForStationAction:(long long)arg1;
- (void)_layoutTopShadowView;
- (id)_newSectionHeaderWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 title:(id)arg2;
- (id)_newShadowViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_playExplicitToggleAction:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (double)_sectionHeaderHeight;
- (id)_sectionHeaderTitleLabelFont;
- (void)_showStoreSheetAction:(id)arg1;
- (long long)_stationActionForIndexPath:(id)arg1;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_updateAvailableActions;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (void)_updateIsProfileExplicitContentRestrictedForProfileConnection:(id)arg1;
- (void)_updateTableFooterView;
- (void)_updateViewForHorizontalSizeClassChangeAllowingTableReload:(bool)arg1;
- (void)_userDefaultExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithStation:(id)arg1 item:(id)arg2 playbackQueue:(id)arg3;
- (id)item;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (bool)showsDoneButton;
- (id)station;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)trackInfoViewDidTapArtwork:(id)arg1;
- (void)trackInfoViewDidTapStoreButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end