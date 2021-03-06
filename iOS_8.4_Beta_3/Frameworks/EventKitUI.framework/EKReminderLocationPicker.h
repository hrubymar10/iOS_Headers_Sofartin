/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKReminderLocationPicker : UITableViewController <ABPeoplePickerNavigationControllerDelegate, EKReminderLocationPickerCellButtonHandler, EKReminderLocationPickerModelDelegate, UIAlertViewDelegate, UITextFieldDelegate> {
    bool _allowsShowInMap;
    EKReminderLocationPickerCell *_currentLocationCell;
    bool _hasEditedText;
    bool _ignoreNextSelectionChange;
    bool _isEditingContactAddress;
    bool _isShowingPeopleAddressPicker;
    <EKReminderLocationPickerDelegate> *_locationPickerDelegate;
    UIAlertView *_meCardAlert;
    EKReminderLocationPickerModel *_model;
    long long _savedStatusBarStyle;
    <EKStyleProvider> *_styleProvider;
    EKReminderLocationPickerCell *_typedLocationCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <EKReminderLocationPickerDelegate> *locationPickerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_accessoryTypeForLocationItem:(id)arg1 isSelected:(bool)arg2;
- (void)_dismissPeoplePicker;
- (id)_indexPathForSelectedItem;
- (bool)_isCustomLocationRow:(id)arg1;
- (id)_prepareCurrentLocationCell;
- (id)_prepareTypedLocationCell;
- (void)_presentPersonPicker;
- (void)_reloadCustomLocationRow;
- (void)_removeExistingMeCardAlert;
- (void)_setCell:(id)arg1 checked:(bool)arg2;
- (void)_setLocationFromRecord:(void*)arg1 multiValueIdentifier:(int)arg2;
- (bool)_shouldShowTypedLocation;
- (void)_showPickMeCardAlertIfNecessary;
- (void)_styleCell:(id)arg1;
- (void)_typedLocationCellTextDidChange;
- (void)_updateAccessoryViewForTypedLocation;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)contactsButtonPressed;
- (void)dealloc;
- (void)failureButtonPressed;
- (id)initWithModel:(id)arg1 styleProvider:(id)arg2;
- (id)locationPickerDelegate;
- (void)locationPickerModel:(id)arg1 didEncounterError:(id)arg2;
- (void)locationPickerModel:(id)arg1 didUpdateMeCardItem:(long long)arg2;
- (void)locationPickerModelDidBeginOperation:(id)arg1;
- (void)locationPickerModelDidChangeSelection:(id)arg1;
- (void)locationPickerModelDidEndOperation:(id)arg1;
- (void)locationPickerModelDidUpdateCurrentLocation:(id)arg1;
- (void)locationPickerModelDidUpdateCustomLocation:(id)arg1;
- (double)marginForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 withLinkedPeople:(struct __CFArray { }*)arg3;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setLocationPickerDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldClearButtonPressed:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
