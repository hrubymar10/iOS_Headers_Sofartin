/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactViewController : UITableViewController <ABContactAddLinkedCardActionDelegate, ABContactGroupPickerDelegate, ABContactHeaderViewDelegate, ABContactViewControllerDelegate, ABContactViewDataSource, ABContactViewDelegate, ABPresenterDelegate, ABPropertyActionDelegate, ABPropertyCellDelegate, UIAdaptivePresentationControllerDelegate, UIPopoverControllerDelegate, UIViewControllerRestoration> {
    ABContactAddFavoriteAction *_addFavoriteAction;
    ABContactAddLinkedCardAction *_addLinkedCardAction;
    ABContactAddNewFieldAction *_addNewFieldAction;
    ABContactAddToExistingContactAction *_addToExistingContactAction;
    bool _allowsActions;
    bool _allowsAddToFavorites;
    bool _allowsAddingToAddressBook;
    bool _allowsCardActions;
    bool _allowsConferencing;
    bool _allowsContactBlocking;
    bool _allowsDeletion;
    bool _allowsEditing;
    bool _allowsOnlyFaceTimeActions;
    bool _allowsOnlyPhoneActions;
    bool _allowsPropertyActions;
    bool _allowsSendMessage;
    bool _allowsSharing;
    NSString *_alternateName;
    bool _alwaysEditing;
    int _animating;
    ABContactToggleBlockCallerAction *_blockAction;
    NSMapTable *_cachedLabelWidths;
    ABCardGroup *_cardActionsGroup;
    ABCardGroup *_cardBlockContactGroup;
    ABCardGroup *_cardBottomGroup;
    ABCardGroup *_cardEditingActionsGroup;
    ABCardGroup *_cardEditingDeleteContactGroup;
    ABCardFaceTimeGroup *_cardFaceTimeGroup;
    ABCardGroup *_cardFooterGroup;
    ABCardLinkedCardsGroup *_cardLinkedCardsGroup;
    ABCardGroup *_cardMedicalIDGroup;
    ABCardGroup *_cardPrimaryPropertyActionsGroup;
    ABCardGroup *_cardTopGroup;
    CNContact *_contact;
    <ABContactViewControllerDelegate> *_contactDelegate;
    CNContactStyle *_contactStyle;
    ABContactCreateNewContactAction *_createNewContactAction;
    ABContactAction *_deleteContactAction;
    bool _disablingRotation;
    ABContactView *_displayContactView;
    NSMutableArray *_displayGroups;
    ABContactHeaderDisplayView *_displayHeaderView;
    NSArray *_displayedProperties;
    ABContactView *_editingContactView;
    NSMutableArray *_editingGroups;
    ABContactHeaderEditView *_editingHeaderView;
    NSArray *_extraBarButtonItems;
    ABPropertyFaceTimeAction *_faceTimeAction;
    ABPropertyFaceTimeAction *_faceTimeAudioAction;
    ABPropertyIDSRequest *_faceTimeIDSRequest;
    NSMutableDictionary *_groupsAfterGroup;
    HKHealthStore *_healthStore;
    bool _hideCardActions;
    ABPropertyIDSRequest *_iMessageIDSRequest;
    bool _isMailVIP;
    ABPropertyLinkedCardsAction *_linkedCardsAction;
    NSMutableArray *_linkedContactsEdits;
    ABMedicalIDAction *_medicalIDAction;
    NSString *_message;
    NSMutableArray *_mutableContacts;
    NSArray *_nameEditingGroups;
    bool _needsReload;
    UIView *_personHeaderView;
    <ABPresenterDelegate> *_presentingDelegate;
    NSString *_primaryProperty;
    NSDictionary *_propertyGroups;
    ABPropertyAction *_sendMessageAction;
    ABContactAction *_shareContactAction;
    bool _shouldShowLinkedContacts;
    ABSiriContactContextProvider *_siriContextProvider;
    NSDictionary *_userActivityUserInfo;
}

@property(assign,retain) ABContactAddFavoriteAction * addFavoriteAction;
@property(assign,retain) ABContactAddLinkedCardAction * addLinkedCardAction;
@property(assign,retain) ABContactAddNewFieldAction * addNewFieldAction;
@property(assign,retain) ABContactAddToExistingContactAction * addToExistingContactAction;
@property(assign,readwrite) bool allowsActions;
@property(assign,readwrite) bool allowsAddToFavorites;
@property(assign,readwrite) bool allowsAddingToAddressBook;
@property(assign,readwrite) bool allowsCardActions;
@property(assign,readwrite) bool allowsConferencing;
@property(assign,readwrite) bool allowsContactBlocking;
@property(assign,readwrite) bool allowsDeletion;
@property(assign,readwrite) bool allowsEditing;
@property(assign,readwrite) bool allowsOnlyFaceTimeActions;
@property(assign,readwrite) bool allowsOnlyPhoneActions;
@property(assign,readwrite) bool allowsPropertyActions;
@property(assign,readwrite) bool allowsSendMessage;
@property(assign,readwrite) bool allowsSharing;
@property(assign,retain) NSString * alternateName;
@property(assign,readwrite) bool alwaysEditing;
@property(assign,retain) ABContactToggleBlockCallerAction * blockAction;
@property(assign,retain) NSMapTable * cachedLabelWidths;
@property(assign,retain) ABCardGroup * cardActionsGroup;
@property(assign,retain) ABCardGroup * cardBlockContactGroup;
@property(assign,retain) ABCardGroup * cardBottomGroup;
@property(assign,retain) ABCardGroup * cardEditingActionsGroup;
@property(assign,retain) ABCardGroup * cardEditingDeleteContactGroup;
@property(assign,retain) ABCardFaceTimeGroup * cardFaceTimeGroup;
@property(assign,readonly) ABCardGroup * cardFooterGroup;
@property(assign,retain) ABCardLinkedCardsGroup * cardLinkedCardsGroup;
@property(assign,retain) ABCardGroup * cardMedicalIDGroup;
@property(assign,retain) ABCardGroup * cardPrimaryPropertyActionsGroup;
@property(assign,retain) ABCardGroup * cardTopGroup;
@property(assign,readonly) CNContact * contact;
@property(assign,readwrite) <ABContactViewControllerDelegate> * contactDelegate;
@property(assign,readonly) ABContactHeaderView * contactHeaderView;
@property(assign,retain) CNContactStyle * contactStyle;
@property(assign,readonly) ABContactView * contactView;
@property(assign,retain) ABContactCreateNewContactAction * createNewContactAction;
@property(assign,copy) NSString * debugDescription;
@property(assign,retain) ABContactAction * deleteContactAction;
@property(assign,copy) NSString * description;
@property(assign,retain) ABContactView * displayContactView;
@property(assign,retain) NSMutableArray * displayGroups;
@property(assign,retain) ABContactHeaderDisplayView * displayHeaderView;
@property(assign,copy) NSArray * displayedProperties;
@property(assign,retain) ABContactView * editingContactView;
@property(assign,retain) NSMutableArray * editingGroups;
@property(assign,retain) ABContactHeaderEditView * editingHeaderView;
@property(assign,retain) NSArray * extraBarButtonItems;
@property(assign,retain) ABPropertyFaceTimeAction * faceTimeAction;
@property(assign,retain) ABPropertyFaceTimeAction * faceTimeAudioAction;
@property(assign,retain) ABPropertyIDSRequest * faceTimeIDSRequest;
@property(assign,retain) NSMutableDictionary * groupsAfterGroup;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) HKHealthStore * healthStore;
@property(assign,readwrite) bool hideCardActions;
@property(assign,retain) ABPropertyIDSRequest * iMessageIDSRequest;
@property(assign,readwrite) bool isMailVIP;
@property(assign,readonly) bool isPresentingModalViewController;
@property(assign,retain) ABPropertyLinkedCardsAction * linkedCardsAction;
@property(assign,retain) NSMutableArray * linkedContactsEdits;
@property(assign,retain) ABMedicalIDAction * medicalIDAction;
@property(assign,retain) NSString * message;
@property(assign,retain) NSMutableArray * mutableContacts;
@property(assign,retain) NSArray * nameEditingGroups;
@property(assign,retain) UIView * personHeaderView;
@property(assign,readwrite) <ABPresenterDelegate> * presentingDelegate;
@property(assign,retain) NSString * primaryProperty;
@property(assign,retain) NSDictionary * propertyGroups;
@property(assign,retain) ABPropertyAction * sendMessageAction;
@property(assign,retain) ABContactAction * shareContactAction;
@property(assign,readwrite) bool shouldShowLinkedContacts;
@property(assign,retain) ABSiriContactContextProvider * siriContextProvider;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSDictionary * userActivityUserInfo;

+ (id)boolStateRestorationProperties;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (id)_addCreateNewContactAction;
- (void)_addFaceTimeGroupAnimated:(bool)arg1;
- (id)_addFavoriteActionWithConferencing:(bool)arg1 telephony:(bool)arg2;
- (id)_addGroupsInArray:(id)arg1 afterGroup:(id)arg2;
- (id)_addLinkedCardAction;
- (id)_addNewFieldAction;
- (id)_addToExistingContactAction;
- (void)_addedGroupWithName:(id)arg1;
- (id)_allDisplayPropertyItemsFromGroups:(id)arg1;
- (id)_cardGroupAtIndex:(long long)arg1;
- (id)_cellForIndexPath:(id)arg1;
- (id)_currentGroups;
- (id)_currentTopVisibleGroupInContactView:(id)arg1;
- (id)_dateForProperty:(id)arg1;
- (id)_faceTimeAction;
- (id)_faceTimeAudioAction;
- (bool)_indexPathIsActionItem:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1;
- (void)_linkEditableContactForEditedReadOnlyContact;
- (id)_linkedCardsAction;
- (id)_loadDisplayGroups;
- (id)_loadEditingGroups;
- (id)_loadMutableLinkedContactsForUnifiedContact:(id)arg1;
- (id)_loadNameEditingGroups;
- (id)_loadPropertyGroups;
- (long long)_modalPresentationStyleForViewController:(id)arg1;
- (bool)_modelHasChanges;
- (bool)_modelIsEmpty;
- (long long)_numberOfItemsInCustomGroup:(id)arg1;
- (void)_reloadFaceTimeGroup;
- (void)_reloadLinkedCardsGroup;
- (void)_reloadMedicalIDGroup;
- (void)_reloadPropertyGroupsPreservingChanges:(bool)arg1;
- (void)_saveChangesForGroups:(id)arg1;
- (void)_scrollContactView:(id)arg1 toVisibleGroup:(id)arg2;
- (id)_sendMessageActionAllowingEmailIDs:(bool)arg1;
- (void)_setupAddToAddressBookActions;
- (void)_setupCardActions;
- (void)_setupContactBlockingActionsWithUpdate:(bool)arg1;
- (void)_setupEditingCardActions;
- (void)_setupPrimaryPropertyActions;
- (id)_shareContactAction;
- (void)_updateAvailableTransports;
- (void)_updateAvailableTransportsForItems:(id)arg1;
- (void)_updateEmailTransportButtonsForItems:(id)arg1;
- (void)_updateIMessageTransportButtonsForItems:(id)arg1;
- (void)_updateItemsInGroup:(id)arg1;
- (void)_updateLabelWidthForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateLabelWidths;
- (void)_updateLabelWidthsForGroup:(id)arg1;
- (void)_updateLabelWidthsForItem:(id)arg1;
- (void)_updatePhoneTransportButtonsForItems:(id)arg1;
- (void)_updateUserActivity;
- (void)_validateGroup:(id)arg1;
- (id)action:(id)arg1 cellForPropertyItem:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3;
- (void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3;
- (void)actionDidFinish:(id)arg1;
- (void)actionDidUpdate:(id)arg1;
- (void)actionWasCanceled:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 inGroup:(id)arg4 destructive:(bool)arg5;
- (void)addCardGroup:(id)arg1 afterGroup:(id)arg2;
- (void)addEditingItemAtIndexPath:(id)arg1;
- (id)addFavoriteAction;
- (id)addLinkedCardAction;
- (void)addLinkedContact:(id)arg1;
- (id)addNewFieldAction;
- (void)addToExistingContact:(id)arg1;
- (id)addToExistingContactAction;
- (bool)allowsActions;
- (bool)allowsAddToFavorites;
- (bool)allowsAddingToAddressBook;
- (bool)allowsCardActions;
- (bool)allowsConferencing;
- (bool)allowsContactBlocking;
- (bool)allowsDeletion;
- (bool)allowsEditing;
- (bool)allowsOnlyFaceTimeActions;
- (bool)allowsOnlyPhoneActions;
- (bool)allowsPropertyActions;
- (bool)allowsSendMessage;
- (bool)allowsSharing;
- (id)alreadyPickedGroups;
- (id)alternateName;
- (bool)alwaysEditing;
- (void)applyStyleProvider:(id)arg1;
- (id)blockAction;
- (void)blockListDidChange:(id)arg1;
- (id)cachedLabelWidths;
- (id)cardActions;
- (id)cardActionsGroup;
- (id)cardBlockContactGroup;
- (id)cardBottomGroup;
- (id)cardEditingActionsGroup;
- (id)cardEditingDeleteContactGroup;
- (id)cardFaceTimeGroup;
- (id)cardFooterGroup;
- (id)cardGroupForProperty:(id)arg1;
- (id)cardLinkedCardsGroup;
- (id)cardMedicalIDGroup;
- (id)cardPrimaryPropertyActionsGroup;
- (id)cardTopGroup;
- (id)contact;
- (id)contactDelegate;
- (void)contactGroupPickerDidCancel:(id)arg1;
- (void)contactGroupPickerDidFinish:(id)arg1 withGroup:(id)arg2;
- (id)contactHeaderView;
- (id)contactStyle;
- (id)contactView;
- (id)contactView:(id)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (void)contactView:(id)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (double)contactView:(id)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(id)arg3;
- (long long)contactView:(id)arg1 numberOfItemsInGroup:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (id)contentScrollView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)createNewContact:(id)arg1;
- (id)createNewContactAction;
- (void)dealloc;
- (id)defaultValueForPropertyCell:(id)arg1;
- (id)deleteContactAction;
- (double)desiredHeightForWidth:(double)arg1;
- (id)displayContactView;
- (id)displayGroups;
- (id)displayHeaderView;
- (id)displayedProperties;
- (void)editCancel:(id)arg1;
- (id)editingContactView;
- (id)editingGroups;
- (id)editingHeaderView;
- (struct { id x1; id x2; id x3; id x4; })editingTransition;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)extraBarButtonItems;
- (id)faceTimeAction;
- (id)faceTimeAudioAction;
- (id)faceTimeIDSRequest;
- (id)groupsAfterGroup;
- (void)headerHeightDidChange;
- (void)headerPhotoDidUpdate;
- (id)healthStore;
- (double)heightForHeaderInTableView:(id)arg1;
- (bool)hideCardActions;
- (id)iMessageIDSRequest;
- (long long)indexOfGroup:(id)arg1;
- (id)indexPathOfDisplayedPropertyItem:(id)arg1;
- (id)initWithContact:(id)arg1;
- (bool)isMailVIP;
- (bool)isPresentingModalViewController;
- (id)linkedCardsAction;
- (id)linkedContactsEdits;
- (void)loadView;
- (void)localeDidChange:(id)arg1;
- (id)medicalIDAction;
- (id)message;
- (id)mutableContacts;
- (id)nameEditingGroups;
- (id)navigationItemController;
- (bool)needsReload;
- (long long)numberOfGroupsInContactView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)personHeaderView;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)prepareCell:(id)arg1;
- (id)presentingDelegate;
- (id)primaryProperty;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (id)propertyGroups;
- (void)reloadCardGroup:(id)arg1;
- (void)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 inGroup:(id)arg3;
- (void)removeEditingItem:(id)arg1 atIndexPath:(id)arg2;
- (void)removeLinkedContact:(id)arg1;
- (void)saveChanges;
- (void)saveLinkedContactChanges;
- (void)saveModelChangesToContact;
- (id)sendMessageAction;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (void)setAddFavoriteAction:(id)arg1;
- (void)setAddLinkedCardAction:(id)arg1;
- (void)setAddNewFieldAction:(id)arg1;
- (void)setAddToExistingContactAction:(id)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsAddToFavorites:(bool)arg1;
- (void)setAllowsAddingToAddressBook:(bool)arg1;
- (void)setAllowsCardActions:(bool)arg1;
- (void)setAllowsConferencing:(bool)arg1;
- (void)setAllowsContactBlocking:(bool)arg1;
- (void)setAllowsDeletion:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsOnlyFaceTimeActions:(bool)arg1;
- (void)setAllowsOnlyPhoneActions:(bool)arg1;
- (void)setAllowsPropertyActions:(bool)arg1;
- (void)setAllowsSendMessage:(bool)arg1;
- (void)setAllowsSharing:(bool)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAlwaysEditing:(bool)arg1;
- (void)setBlockAction:(id)arg1;
- (void)setCachedLabelWidths:(id)arg1;
- (void)setCardActionsGroup:(id)arg1;
- (void)setCardBlockContactGroup:(id)arg1;
- (void)setCardBottomGroup:(id)arg1;
- (void)setCardEditingActionsGroup:(id)arg1;
- (void)setCardEditingDeleteContactGroup:(id)arg1;
- (void)setCardFaceTimeGroup:(id)arg1;
- (void)setCardLinkedCardsGroup:(id)arg1;
- (void)setCardMedicalIDGroup:(id)arg1;
- (void)setCardPrimaryPropertyActionsGroup:(id)arg1;
- (void)setCardTopGroup:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setCreateNewContactAction:(id)arg1;
- (void)setDeleteContactAction:(id)arg1;
- (void)setDisplayContactView:(id)arg1;
- (void)setDisplayGroups:(id)arg1;
- (void)setDisplayHeaderView:(id)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditingContactView:(id)arg1;
- (void)setEditingGroups:(id)arg1;
- (void)setEditingHeaderView:(id)arg1;
- (void)setExtraBarButtonItems:(id)arg1;
- (void)setFaceTimeAction:(id)arg1;
- (void)setFaceTimeAudioAction:(id)arg1;
- (void)setFaceTimeIDSRequest:(id)arg1;
- (void)setGroupsAfterGroup:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setHideCardActions:(bool)arg1;
- (void)setIMessageIDSRequest:(id)arg1;
- (void)setIsMailVIP:(bool)arg1;
- (void)setLinkedCardsAction:(id)arg1;
- (void)setLinkedContactsEdits:(id)arg1;
- (void)setMedicalIDAction:(id)arg1;
- (void)setMergeContact:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMutableContacts:(id)arg1;
- (void)setNameEditingGroups:(id)arg1;
- (void)setNeedsReload;
- (void)setNeedsReloadLazy;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setPrimaryProperty:(id)arg1;
- (void)setPropertyGroups:(id)arg1;
- (void)setSendMessageAction:(id)arg1;
- (void)setShareContactAction:(id)arg1;
- (void)setShouldShowLinkedContacts:(bool)arg1;
- (void)setSiriContextProvider:(id)arg1;
- (void)setUserActivityUserInfo:(id)arg1;
- (void)setupActions;
- (id)shareContactAction;
- (bool)shouldAllowSelectingContact:(id)arg1;
- (bool)shouldShowLinkedContacts;
- (id)siriContextProvider;
- (id)tableView;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)toggleEditing:(id)arg1;
- (struct { id x1; id x2; id x3; id x4; })transitionToEditing:(bool)arg1;
- (void)updateContactsViewWithBlock:(id)arg1 completion:(id)arg2;
- (void)updateDoneButton;
- (void)updateEditNavigationItemsAnimated:(bool)arg1;
- (void)updateUserActivityState:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (id)userActivityUserInfo;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
