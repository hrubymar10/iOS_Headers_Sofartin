/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseTableViewController : UIViewController <MusicClientContextConsuming, MusicEntityPlaybackStatusControllerObserving, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryBrowseSectionHeaderViewDelegate, MusicLibraryViewConfigurationConsuming, MusicMediaPickerSearchDelegate, MusicSplitInitialStateProviding, MusicTableViewDelegate, UITableViewDataSource> {
    MusicClientContext *_clientContext;
    bool _collapseSections;
    <MusicLibraryBrowseTableViewControllerDelegate> *_delegate;
    struct { 
        unsigned int didFinishContentHeightAnimation : 1; 
        unsigned int willBeginContentHeightAnimation : 1; 
    } _delegateRespondsToSelector;
    bool _didIgnoreEntityProviderInvalidationDuringEditing;
    id _editingChangesCommitBlock;
    MusicEditingEntityProvider *_editingEntityProvider;
    bool _editingWasCancelled;
    MusicEntityViewDescriptor *_entityViewDescriptor;
    MusicEntityValueContext *_itemEntityValueContext;
    MusicLibraryBrowseTableViewConfiguration *_libraryViewConfiguration;
    unsigned long long _numberOfEntities;
    MusicEntityPlayabilityController *_playabilityController;
    MusicEntityPlaybackStatusController *_playbackStatusController;
    MPAVController *_player;
    double _previousWidth;
    unsigned long long _referenceCountForIgnoringEntityProviderInvalidation;
    unsigned long long _referenceCountForRunningEditingStateAnimations;
    NSMutableArray *_reusableCoalescingEntityValueProviders;
    unsigned long long _sectionCountThresholdForCollapsedSections;
    MusicSectionEntityValueContext *_sectionEntityValueContext;
    double _sectionHeaderHeight;
    MusicEntityValueContext *_selectedItemEntityValueContext;
    bool _shouldReloadTableViewOnceStoppedIgnoringNotifications;
    MusicTableView *_tableView;
    bool _usesFlexibleHeaderViews;
}

@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <MusicLibraryBrowseTableViewControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) double effectiveContentHeight;
@property(assign,readonly) NSArray * entityProviderChangeRecords;
@property(assign,readonly) MusicEntityViewDescriptor * entityViewDescriptor;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) MusicLibraryViewConfiguration * libraryViewConfiguration;
@property(assign,readwrite) unsigned long long sectionCountThresholdForCollapsedSections;
@property(assign,readonly) Class superclass;
@property(assign,readonly) MusicTableView * tableView;

- (void).cxx_destruct;
- (void)_beginEntityProviderInvalidation;
- (double)_calculateTableViewMaximumRowHeight;
- (void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)_configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)_dequeueCoalescingEntityValueProvider;
- (void)_didFinishContentHeightAnimation;
- (void)_didFinishEditingStateChangeAnimation;
- (id)_effectiveEntityProvider;
- (void)_endIgnoringEntityProviderInvalidation;
- (void)_entityPlayabilityControllerDidChangeNotification:(id)arg1;
- (id)_entityValueContextAtIndexPath:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_invalidateIndexBarDataSource;
- (bool)_isEntityValueContextDisabled:(id)arg1;
- (void)_presentContextualActionsWithEntityValueContext:(id)arg1 fromButton:(id)arg2;
- (void)_recycleCoalescingEntityValueProvider:(id)arg1;
- (void)_reloadTableViewData;
- (id)_sectionEntityValueContextForIndex:(unsigned long long)arg1;
- (void)_setCollapseSections:(bool)arg1;
- (void)_setSelectedIndexPath:(id)arg1 entityValueContext:(id)arg2;
- (void)_setTableViewRowHeight:(double)arg1;
- (void)_uninstallEditingEntityProviderIfAppropriate;
- (void)_updateCollapseSections;
- (void)_updateEntityDisabledStateForView:(id)arg1 withEntityValueContext:(id)arg2;
- (void)_updateEntityDisabledStateForVisibleItems;
- (void)_updateNumberOfEntities;
- (void)_updatePlaybackStatusForCell:(id)arg1 withEntityValueContext:(id)arg2;
- (void)_updatePlaybackStatusForVisibleCells;
- (bool)_wantsPersistentSelection;
- (void)_willBeginContentHeightAnimation;
- (void)_willBeginEditingStateChangeAnimation;
- (void)cancelEditing;
- (id)clientContext;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didEndDisplayingBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (double)effectiveContentHeight;
- (void)endEditingWithCommitBlock:(id)arg1;
- (id)entityProviderChangeRecords;
- (id)entityViewDescriptor;
- (bool)getContentOffset:(struct CGPoint { double x1; double x2; }*)arg1 forIndexBarEntryAtIndex:(unsigned long long)arg2;
- (void)handleContentSizeCategoryDidChange;
- (void)handleEntityProviderDidInvalidate;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3;
- (long long)handleSelectionOfCellForEntityValueContext:(id)arg1;
- (long long)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertEntityValueProviders:(id)arg1;
- (id)libraryViewConfiguration;
- (id)loadEntityViewDescriptor;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (unsigned long long)numberOfIndexBarEntries;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1;
- (unsigned long long)sectionCountThresholdForCollapsedSections;
- (void)sectionHeaderViewDidSelectButton:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setSectionCountThresholdForCollapsedSections:(unsigned long long)arg1;
- (void)showInitialStateForSplitViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectAddButtonForCell:(id)arg2 events:(unsigned long long)arg3;
- (void)tableView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forCell:(id)arg3;
- (void)tableView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forSectionHeaderView:(id)arg3;
- (void)tableView:(id)arg1 didSelectHeaderViewForSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 forCell:(id)arg3;
- (void)tableView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 forSectionHeaderView:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldForceBottomSeparatorVisibleForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableViewThatNeedsSearchBarHeader;
- (void)tableViewTintColorDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willDisplayBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;

@end