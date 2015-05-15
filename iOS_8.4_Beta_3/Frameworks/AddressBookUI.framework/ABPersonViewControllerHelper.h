/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonEditDelegate, ABPersonTableViewDataSourceDelegate, ABPersonViewControllerDelegate, ABPickerViewControllerDismissDelegate, ABPopoverRepresentDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, UIScrollViewDelegate, UIViewControllerRestoration> {
    id _actionSheetDelegate;
    id _activeDialog;
    NSString *_addToPersonButtonTitle;
    void *_addressBook;
    bool _allowsAddingToAddressBook;
    bool _allowsSettingAsPreferredCardForName;
    bool _animatedRight;
    bool _automaticallySetEditing;
    <ABCardContentProvider> *_cardContentProvider;
    UIView *_cardContentProviderHeaderView;
    ABPersonTableView *_controllerTableView;
    ABPersonTableViewDataSource *_dataSource;
    ABDatePickerViewController *_datePickerViewController;
    id _deletionDelegate;
    bool _disablePopoverUpdates;
    NSArray *_displayedPeople;
    ABUIPerson *_displayedPerson;
    struct __CFArray { } *_displayedProperties;
    <ABPersonEditDelegate> *_editDelegate;
    long long _favoritesListChangeNotificationCount;
    bool _hasAddedUnknownPersonActions;
    bool _isAnimatingDatePickerInputView;
    bool _isLocation;
    bool _isOverridingCardContentProvider;
    ABPersonTableViewLinkingDelegate *_linkingDelegate;
    unsigned long long _modelDatabaseLocalChangeCancellationCount;
    ABPeoplePickerNavigationController *_peoplePickerForAddToContacts;
    ABPeoplePickerNavigationController *_peoplePickerForLinking;
    ABPeoplePickerNavigationController *_peoplePickerForRelatedNames;
    NSIndexPath *_popoverCellIndexPath;
    NSIndexPath *_popoverViewInCellIndexPath;
    UIPopoverController *_presentationPopoverController;
    ABMultiCellContentView_RelatedName *_relatedPersonCell;
    UIBarButtonItem *_reusableCancelButton;
    bool _savesNewContactOnSuspend;
    long long _selectedCardContentIndex;
    bool _showsPeoplePickerCancelButton;
    <ABStyleProvider> *_styleProvider;
    struct __CFDictionary { } *_valueByProperty;
    UIViewController *_viewController;
    bool _willPresentDatePickerViewController;
}

@property(assign,copy) NSString * addToPersonButtonTitle;
@property(assign,readwrite) void* addressBook;
@property(assign,readwrite) bool allowsAddingToAddressBook;
@property(assign,readwrite) bool allowsSettingAsPreferredCardForName;
@property(assign,readwrite) bool automaticallySetEditing;
@property(assign,readonly) UITableView * controllerTableView;
@property(assign,readwrite) ABPersonTableViewDataSource * dataSource;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool disablePopoverUpdates;
@property(assign,readonly) NSArray * displayedPeople;
@property(assign,retain) ABUIPerson * displayedPerson;
@property(assign,copy) NSArray * displayedProperties;
@property(assign,readwrite) <ABPersonEditDelegate> * editDelegate;
@property(assign,readonly) void* existingAddressBook;
@property(assign,readonly) bool hasPopoverController;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isLocation;
@property(assign,readwrite) ABPersonTableViewLinkingDelegate * linkingDelegate;
@property(assign,readonly) <ABPersonViewControllerPrivateDelegate> * personViewDelegate;
@property(assign,retain) NSIndexPath * popoverCellIndexPath;
@property(assign,retain) NSIndexPath * popoverViewInCellIndexPath;
@property(getter=isReadonly,assign,readonly) bool readonly;
@property(assign,readonly) UIBarButtonItem * reusableCancelButton;
@property(assign,readwrite) bool savesNewContactOnSuspend;
@property(assign,readwrite) bool showsPeoplePickerCancelButton;
@property(assign,retain) <ABStyleProvider> * styleProvider;
@property(assign,readonly) Class superclass;
@property(assign,readonly) <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property(assign,readonly) UIViewController * viewController;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)_addProperties:(id)arg1 toPerson:(id)arg2;
- (void)_attemptSave;
- (id)_chatURLWithPropertyValue:(id)arg1;
- (void)_conferencingAvailabilityChanged:(id)arg1;
- (void)_datePickerInputViewDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_dismissDatePickerInputViewAnimated:(bool)arg1;
- (void)_favoritesListChanged:(id)arg1;
- (void)_mergeIntoDisplayedPerson:(void*)arg1;
- (id)_newContactViewControllerForAddToContacts;
- (id)_personToUseForAddressBook;
- (id)_preparePeoplePicker;
- (void)_presentDatePickerViewControllerAsInputView:(id)arg1 andScrollToIndexPath:(id)arg2;
- (void)_presentPeoplePickerNavigationController:(id)arg1 fromView:(id)arg2 inPopover:(bool)arg3;
- (void)_setCardContentProvider:(id)arg1;
- (bool)_shouldHideContentSwitchingTabsWhenEditing:(bool)arg1;
- (void)_updateBackgroundForCardContentProvider;
- (void)_updateCardContentProviderHeaderViewForEditing:(bool)arg1;
- (void)_updateDisplayedPeople;
- (void)_updateDisplayedPeopleForcingReloadData:(bool)arg1;
- (bool)_updatePeopleDataForExternalChangeWithFullReload:(bool)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (void)ab_updatePopoverSize;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)addToPersonButtonTitle;
- (void)addUnknownPersonActionsIfNeeded;
- (void*)addressBook;
- (void)addressBookChangedLocally:(struct __CFDictionary { }*)arg1;
- (bool)allowsAddingToAddressBook;
- (bool)allowsSettingAsPreferredCardForName;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (bool)automaticallySetEditing;
- (void)client:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)contentSwitchingTabsTapped:(id)arg1;
- (id)controllerTableView;
- (bool)copyInsertValue:(id*)arg1 property:(int*)arg2 forPerson:(void*)arg3;
- (id)dataSource;
- (void)dealloc;
- (void)deleteDialog:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didDismissModalViewController;
- (bool)disablePopoverUpdates;
- (void)dismissPickerViewController:(id)arg1;
- (id)displayedPeople;
- (id)displayedPerson;
- (id)displayedProperties;
- (id)editDelegate;
- (void*)existingAddressBook;
- (bool)hasPopoverController;
- (void)ignoreNextLocalChange;
- (void)imageUpdatedForPerson:(void*)arg1;
- (id)initWithViewController:(id)arg1 style:(int)arg2;
- (bool)isLocation;
- (bool)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
- (bool)isReadonly;
- (id)linkingDelegate;
- (void)loadUnknownViewWithPerson:(id)arg1 allowActions:(bool)arg2;
- (void)loadViewWithPerson:(id)arg1 allowDeletion:(bool)arg2 allowActions:(bool)arg3;
- (bool)makeFirstFieldBecomeFirstResponder;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(bool)arg3;
- (id)newPersonViewDelegate;
- (void)notifyScrollViewDidLoad;
- (void)openSocialProfile:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(bool)arg2 forPerson:(void*)arg3;
- (void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(id)arg2;
- (void)peoplePickerNavigationController:(id)arg1 setRelatedPerson:(id)arg2;
- (bool)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)performAction:(int)arg1 forPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (void)performAction:(int)arg1 forPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withContext:(void*)arg4;
- (void)performActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performDefaultActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2;
- (void)performInstantMessageActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performSocialProfileActionForPropertyAtIndex:(long long)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3;
- (void)performTwitterActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (void)performWeiboActionForPropertyValue:(id)arg1 cell:(id)arg2;
- (id)personContainerView;
- (void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(bool)arg3;
- (void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5;
- (void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
- (void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
- (void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(long long)arg2;
- (void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(bool)arg2;
- (void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4;
- (void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(bool)arg2;
- (bool)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(bool)arg5;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
- (bool)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(bool)arg2;
- (void)personTableViewDataSourceDidReloadData:(id)arg1;
- (void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
- (void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1;
- (double)personTableViewDataSourceHeaderPadding:(id)arg1;
- (bool)personTableViewDataSourceIsInPopover:(id)arg1;
- (bool)personTableViewDataSourceIsLocation:(id)arg1;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
- (void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1;
- (bool)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
- (bool)personTableViewDataSourceShouldShowContactSources:(id)arg1;
- (bool)personTableViewDataSourceShouldShowHeader:(id)arg1;
- (bool)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
- (void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
- (bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)personViewDelegate;
- (void)personWasDeleted;
- (id)popoverCellIndexPath;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (bool)popoverControllerShouldDismissPopover:(id)arg1;
- (id)popoverViewInCellIndexPath;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (id)prepareViewWithPerson:(id)arg1;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1;
- (void)presentModalViewController:(id)arg1;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)reloadData;
- (void)reloadNameData;
- (void)removeDisplayedPeople;
- (void)removeSelectedPerson;
- (void)removeSelectedPersonFromBarButtonItem:(id)arg1;
- (id)reusableCancelButton;
- (bool)savesNewContactOnSuspend;
- (void)setActiveDialog:(id)arg1;
- (void)setAddToPersonButtonTitle:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsAddingToAddressBook:(bool)arg1;
- (void)setAllowsSettingAsPreferredCardForName:(bool)arg1;
- (void)setAsPreferredCardForName:(id)arg1;
- (void)setAutomaticallySetEditing:(bool)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDatePickerViewController:(id)arg1;
- (void)setDisablePopoverUpdates:(bool)arg1;
- (void)setDisplayedPeople:(id)arg1 forceReload:(bool)arg2;
- (void)setDisplayedPerson:(id)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setIsLocation:(bool)arg1;
- (void)setLinkingDelegate:(id)arg1;
- (void)setPopoverCellIndexPath:(id)arg1;
- (void)setPopoverViewInCellIndexPath:(id)arg1;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (void)setShowsPeoplePickerCancelButton:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (bool)shouldAnimateDatePickerInputView;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldBeRemovedFromNavigationStack;
- (bool)shouldShowAddToExistingContact;
- (void)showSelectedContentView;
- (void)showTweetSheetForPropertyValue:(id)arg1;
- (void)showWeiboSheetForPropertyValue:(id)arg1;
- (bool)showsPeoplePickerCancelButton;
- (id)styleProvider;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)twitterActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)unknownPersonViewDelegate;
- (bool)updateAllDataForExternalChange;
- (void)updateAllowsSettingAsPreferredCardForName;
- (void)updateContentSwitchingTabs;
- (void)updateDisplayedPeopleAndReloadData;
- (void)updateEditButton;
- (void)updateLinkBarButtonItem;
- (bool)updatePeopleDataForExternalChange;
- (void)updateRecord;
- (void)updateTableDataForExternalChange;
- (id)viewController;
- (id)viewControllerToPresentModal;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewForActionSheet;
- (id)viewToRepresentPopover:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)weiboActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end
