/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryPlaylistsOverviewViewController : UIViewController <MusicActionableHeaderViewDelegate, MusicClientContextConsuming, MusicLibraryBrowseCollectionViewControllerDelegate, MusicNoContentViewDelegate, MusicSwitcherButtonContainerViewDelegate, SKUITabBarItemRootViewController> {
    UISwitch *_alertShowOfflineSwitch;
    MusicClientContext *_clientContext;
    UIBarButtonItem *_editButtonItem;
    UIAlertController *_filterTypeAlertController;
    MusicHairlineView *_hairlineView;
    bool _hasSubscribedPlaylistsCapability;
    MusicSwitcherButtonContainerView *_librarySwitcherButtonContainerView;
    MusicMatchLoadingViewController *_matchLoadingViewController;
    UIBarButtonItem *_newButtonItem;
    UIViewController *_noContentViewController;
    unsigned long long _playlistsConfigurationOptions;
    MusicActionableHeaderView *_playlistsHeaderView;
    MusicLibraryPlaylistsViewConfiguration *_playlistsViewConfiguration;
    UIViewController *_playlistsViewController;
    MusicActionableHeaderView *_recentlyPlayedPlaylistsHeaderView;
    MusicLibraryBrowseCollectionViewController *_recentlyPlayedPlaylistsViewController;
    unsigned long long _selectedFilterType;
    MusicLibraryPlaylistsViewConfiguration *_selectedPlaylistsViewConfiguration;
    bool _shouldShowMatchLoadingView;
    bool _shouldShowNoContentView;
    MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_alertShowOfflineSwitchValueChangedAction:(id)arg1;
- (double)_calculateHairlineViewHeight;
- (bool)_calculateHasSubscribedPlaylistsCapability;
- (void)_cloudUpdateInProgressDidChangeNotification:(id)arg1;
- (void)_configureForSelectedFilterType;
- (void)_configureNoContentView:(id)arg1;
- (void)_dismissEditSheet;
- (void)_editButtonTapped:(id)arg1;
- (void)_getCurrentSortedPlaylistsOverviewFilterTypes:(unsigned long long**)arg1 count:(unsigned long long*)arg2;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handlePlaylistsOverviewFilterTypeAlertControllerDismissal;
- (void)_loadRecentlyPlayedPlaylistsHeaderView;
- (void)_loadRecentlyPlayedPlaylistsViewController;
- (id)_matchLoadingViewController;
- (void)_musicLibraryPlaylistsOverviewViewControllerCommonInitialization;
- (void)_newButtonTapped:(id)arg1;
- (id)_newLibraryPlaylistsViewConfiguration;
- (id)_noContentViewController;
- (void)_playlistsEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_presentCreatePlaylistViewController;
- (void)_recentlyPlayedEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (id)_titleForPlaylistsOverviewFilterType:(unsigned long long)arg1;
- (void)_updateChildViewController;
- (void)_updateLibrarySwitcherButtonWithVerticalContainerItemsReload:(bool)arg1;
- (void)_updateMatchLoadingViewVisibility;
- (void)_updatePlaylistHeaderHeight;
- (void)_updatePlaylistNoContentViewVisibilityForceReload:(bool)arg1;
- (void)_updateRecentlyPlayedViewMoreButton;
- (void)_updateShouldShowMatchLoadingView;
- (void)_updateSizeOfLibrarySwitcherButtonContainerView;
- (void)_updateSizeOfRecentlyPlayedPlaylistsHeaderView;
- (void)_updateSizeOfRecentlyPlayedPlaylistsView;
- (unsigned long long)_validFilterTypeForFilterType:(unsigned long long)arg1;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)clientContext;
- (void)collectionViewFlowLayoutLayoutMetricsWereUpdatedForLibraryBrowseCollectionViewController:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTabBarItem:(id)arg1;
- (void)leadingButtonWasSelectedInContainerView:(id)arg1;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)noContentViewDidTapButton:(id)arg1;
- (void)setClientContext:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)switcherButtonWasSelectedInContainerView:(id)arg1;
- (void)trailingButtonWasSelectedInContainerView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
