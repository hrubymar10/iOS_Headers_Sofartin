/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABNewPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate> {
    _UIAccessDeniedView *_accessDeniedView;
    void *_addressBook;
    ABContactViewController *_contactViewController;
    ABPersonTableViewDataSource *_dataSource;
    void *_displayedPerson;
    ABPersonViewControllerHelper *_helper;
    bool _isRealViewLoaded;
    CNContact *_mergeContact;
    <ABNewPersonViewControllerDelegate> *_newPersonViewDelegate;
    ABContactsFilter *_parentContactsFilter;
    void *_parentGroup;
    void *_parentSource;
    <ABPresenterDelegate> *_presentingDelegate;
    <ABStyleProvider> *_styleProvider;
}

@property(assign,readonly) _UIAccessDeniedView * accessDeniedView;
@property(assign,readwrite) void* addressBook;
@property(assign,readonly) ABContactViewController * contactViewController;
@property(assign,readonly) ABPersonTableViewDataSource * dataSource;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) void* displayedPerson;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) ABPersonViewControllerHelper * helper;
@property(assign,readwrite) bool isRealViewLoaded;
@property(assign,retain) CNContact * mergeContact;
@property(assign,readwrite) <ABNewPersonViewControllerDelegate> * newPersonViewDelegate;
@property(assign,retain) ABContactsFilter * parentContactsFilter;
@property(assign,readwrite) void* parentGroup;
@property(assign,readwrite) void* parentSource;
@property(assign,readwrite) <ABPresenterDelegate> * presentingDelegate;
@property(assign,readwrite) bool savesNewContactOnSuspend;
@property(assign,readwrite) bool showsCancelButton;
@property(assign,retain) <ABStyleProvider> * styleProvider;
@property(assign,readonly) Class superclass;

- (void)accessChanged;
- (id)accessDeniedView;
- (void*)addressBook;
- (id)contactViewController;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void*)displayedPerson;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)helper;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)initWithStyle:(int)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isRealViewLoaded;
- (void)loadContactViewController;
- (void)loadRealView;
- (void)loadView;
- (id)mergeContact;
- (id)newPersonViewDelegate;
- (id)parentContactsFilter;
- (void*)parentGroup;
- (void*)parentSource;
- (id)presentingDelegate;
- (void)save:(id)arg1;
- (bool)savesNewContactOnSuspend;
- (void)setAddressBook:(void*)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setIsRealViewLoaded:(bool)arg1;
- (void)setMergeContact:(id)arg1;
- (void)setNewPersonViewDelegate:(id)arg1;
- (void)setParentContactsFilter:(id)arg1;
- (void)setParentGroup:(void*)arg1;
- (void)setParentSource:(void*)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setStyleProvider:(id)arg1;
- (bool)showsCancelButton;
- (id)styleProvider;

@end
