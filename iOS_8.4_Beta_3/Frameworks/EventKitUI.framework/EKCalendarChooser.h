/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarChooser : UIViewController {
    _UIAccessDeniedView *_accessDeniedView;
    NSIndexPath *_checkedRow;
    int _chooserMode;
    NSMutableDictionary *_customGroupMap;
    <EKCalendarChooserDelegate> *_delegate;
    bool _disableCalendarEditing;
    unsigned long long _entityType;
    EKEventStore *_eventStore;
    struct { 
        unsigned int listIsFlat : 1; 
        unsigned int showAll : 1; 
        unsigned int showColors : 1; 
        unsigned int allSelected : 1; 
        unsigned int allowsRotation : 1; 
        unsigned int allowsEdit : 1; 
        unsigned int showsDoneButton : 1; 
        unsigned int showsCancelButton : 1; 
        unsigned int showsWritableCalendarsOnly : 1; 
        unsigned int showsRefreshButton : 1; 
        unsigned int allowsPullToRefresh : 1; 
    } _flags;
    NSMutableArray *_groups;
    long long _lastAuthorizationStatus;
    EKSource *_limitedToSource;
    UIRefreshControl *_refreshControl;
    long long _refreshCounter;
    NSMutableSet *_selectedCalendars;
    bool _showDetailAccessories;
    bool _showsDeclinedEventsSetting;
    NSMutableDictionary *_storeGroupMap;
    int _style;
    <EKStyleProvider> *_styleProvider;
    UITableView *_tableView;
}

@property (nonatomic, retain) _UIAccessDeniedView *accessDeniedView;
@property (nonatomic) bool allowsEdit;
@property (nonatomic) bool allowsPullToRefresh;
@property (nonatomic) bool allowsRotation;
@property (nonatomic, retain) NSIndexPath *checkedRow;
@property (nonatomic) int chooserMode;
@property (nonatomic, retain) NSMutableDictionary *customGroupMap;
@property (nonatomic) <EKCalendarChooserDelegate> *delegate;
@property (nonatomic) bool disableCalendarEditing;
@property (nonatomic) unsigned long long entityType;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic) struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; } flags;
@property (nonatomic, retain) NSMutableArray *groups;
@property (nonatomic) long long lastAuthorizationStatus;
@property (nonatomic, retain) EKSource *limitedToSource;
@property (nonatomic, retain) UIRefreshControl *refreshControl;
@property (nonatomic) long long refreshCounter;
@property (nonatomic, retain) EKCalendar *selectedCalendar;
@property (nonatomic, retain) NSMutableSet *selectedCalendarSet;
@property (nonatomic, copy) NSSet *selectedCalendars;
@property (nonatomic) int selectionStyle;
@property (nonatomic) bool showDetailAccessories;
@property (nonatomic) bool showsCancelButton;
@property (nonatomic) bool showsDeclinedEventsSetting;
@property (nonatomic) bool showsDoneButton;
@property (nonatomic) bool showsRefreshButton;
@property (nonatomic, retain) NSMutableDictionary *storeGroupMap;
@property (nonatomic, retain) <EKStyleProvider> *styleProvider;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_applySelection;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_beginSyncCompletedTimeout;
- (bool)_calendarAvailableForEditing:(id)arg1;
- (bool)_canEnableRefresh;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_cancelSyncCompletedTimeout;
- (id)_cellIdentifierWithSubtitle:(bool)arg1;
- (long long)_declinedEventsSwitchSection;
- (void)_eventStoreChanged:(id)arg1;
- (id)_filterCalendars:(id)arg1;
- (id)_groupForCustomGroupType:(int)arg1;
- (id)_groupForSource:(id)arg1;
- (id)_indexPathForCalendar:(id)arg1 source:(id)arg2;
- (void)_insertStoreIntoByGroupArray:(id)arg1;
- (bool)_isEllipsisCellForGroup:(id)arg1 rowIndex:(long long)arg2;
- (id)_loadCalendars;
- (int)_numSelectedGroups;
- (void)_populateGroupsForCalendars:(id)arg1;
- (void)_pulledToRefresh:(id)arg1;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_restoreSelection:(id)arg1 newCalendars:(id)arg2;
- (id)_saveSelection;
- (void)_selectAllCalendarsAndStores:(bool)arg1;
- (void)_selectCalendar:(id)arg1 selected:(bool)arg2;
- (void)_selectGroup:(id)arg1 selected:(bool)arg2;
- (void)_setCalendars:(id)arg1;
- (bool)_shouldShowGroupNameInSection:(long long)arg1;
- (id)_stringForSharedCalendar:(id)arg1;
- (void)_syncCompletedGracePeriodExpired;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (bool)_tableShouldDisplayAllCalendarsSection;
- (bool)_tableShouldDisplayAllCellForGroup:(id)arg1;
- (bool)_tableShouldDisplayNewCalendarCellForGroup:(id)arg1;
- (id)_viewModeTitle;
- (id)accessDeniedView;
- (bool)allowsEdit;
- (bool)allowsPullToRefresh;
- (bool)allowsRotation;
- (void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)cancel:(id)arg1;
- (id)checkedRow;
- (int)chooserMode;
- (id)customGroupMap;
- (void)dealloc;
- (void)declinedEventsSwitchChanged:(id)arg1;
- (id)delegate;
- (bool)disableCalendarEditing;
- (void)done:(id)arg1;
- (unsigned long long)entityType;
- (id)eventStore;
- (struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; })flags;
- (id)groups;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4 limitedToSource:(id)arg5;
- (id)initWithSelectionStyle:(int)arg1 displayStyle:(int)arg2 eventStore:(id)arg3;
- (long long)lastAuthorizationStatus;
- (id)limitedToSource;
- (void)loadView;
- (double)marginForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)refresh:(id)arg1;
- (id)refreshControl;
- (long long)refreshCounter;
- (id)selectedCalendar;
- (id)selectedCalendarSet;
- (id)selectedCalendars;
- (int)selectionStyle;
- (void)setAccessDeniedView:(id)arg1;
- (void)setAllowsEdit:(bool)arg1;
- (void)setAllowsPullToRefresh:(bool)arg1;
- (void)setAllowsRotation:(bool)arg1;
- (void)setCheckedRow:(id)arg1;
- (void)setChooserMode:(int)arg1;
- (void)setCustomGroupMap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableCalendarEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEntityType:(unsigned long long)arg1;
- (void)setEventStore:(id)arg1;
- (void)setFlags:(struct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; })arg1;
- (void)setGroups:(id)arg1;
- (void)setLastAuthorizationStatus:(long long)arg1;
- (void)setLimitedToSource:(id)arg1;
- (void)setRefreshControl:(id)arg1;
- (void)setRefreshCounter:(long long)arg1;
- (void)setSelectedCalendar:(id)arg1;
- (void)setSelectedCalendarSet:(id)arg1;
- (void)setSelectedCalendars:(id)arg1;
- (void)setSelectionStyle:(int)arg1;
- (void)setShowAll:(bool)arg1;
- (void)setShowDetailAccessories:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsDeclinedEventsSetting:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setShowsRefreshButton:(bool)arg1;
- (void)setShowsWritableCalendarsOnly:(bool)arg1;
- (void)setStoreGroupMap:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTableView:(id)arg1;
- (bool)showDetailAccessories;
- (bool)showsCancelButton;
- (bool)showsDeclinedEventsSetting;
- (bool)showsDoneButton;
- (bool)showsRefreshButton;
- (bool)showsWritableCalendarsOnly;
- (id)storeGroupMap;
- (id)styleProvider;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
