/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPicker : UIViewController <CNContactPickerContentDelegate> {
    bool _allowsBlocking;
    bool _allowsCancel;
    bool _allowsEditing;
    bool _allowsFaceTime;
    bool _allowsOnlyFaceTimeActions;
    bool _allowsOnlyPhoneActions;
    bool _allowsSounds;
    NSString *_bannerTitle;
    NSString *_bannerValue;
    long long _behavior;
    bool _defaultViewControllerVisible;
    <CNContactPickerDelegate> *_delegate;
    NSArray *_displayedKeys;
    bool _hidesPromptInLandscape;
    bool _hidesSearchableSources;
    bool _ignoreViewWillBePresented;
    NSPredicate *_predicateForEnablingContact;
    NSPredicate *_predicateForSelectionOfContact;
    NSPredicate *_predicateForSelectionOfProperty;
    NSString *_prompt;
    UIViewController<CNContactPickerContentViewController> *_viewController;
}

@property (nonatomic) bool allowsBlocking;
@property (nonatomic) bool allowsCancel;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsFaceTime;
@property (nonatomic) bool allowsOnlyFaceTimeActions;
@property (nonatomic) bool allowsOnlyPhoneActions;
@property (nonatomic) bool allowsSounds;
@property (nonatomic, copy) NSString *bannerTitle;
@property (nonatomic, copy) NSString *bannerValue;
@property long long behavior;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultViewControllerVisible, readonly) bool defaultViewControllerVisible;
@property (nonatomic) <CNContactPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayedKeys;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesPromptInLandscape;
@property (nonatomic) bool hidesSearchableSources;
@property (nonatomic, copy) NSPredicate *predicateForEnablingContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfProperty;
@property (nonatomic, copy) NSString *prompt;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController<CNContactPickerContentViewController> *viewController;

- (void).cxx_destruct;
- (void*)_addressBook;
- (void)_checkConsistencyFromProperties:(id)arg1;
- (void)_endDelayingPresentation;
- (bool)_isDelayingPresentation;
- (id)_pickerPresentedViewController;
- (void)_prepareViewController;
- (id)_propertiesSource;
- (void)_setViewController:(id)arg1;
- (void)_setupViewController;
- (void)_viewWillBePresented;
- (bool)allowsBlocking;
- (bool)allowsCancel;
- (bool)allowsEditing;
- (bool)allowsFaceTime;
- (bool)allowsOnlyFaceTimeActions;
- (bool)allowsOnlyPhoneActions;
- (bool)allowsSounds;
- (id)bannerTitle;
- (id)bannerValue;
- (long long)behavior;
- (void)closePickerIfNeeded;
- (void)dealloc;
- (id)delegate;
- (id)displayedKeys;
- (bool)hidesPromptInLandscape;
- (bool)hidesSearchableSources;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isDefaultViewControllerVisible;
- (void)pickerDidCancel;
- (void)pickerDidSelectContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(int)arg3;
- (void)popToDefaultViewController:(bool)arg1;
- (id)predicateForEnablingContact;
- (id)predicateForSelectionOfContact;
- (id)predicateForSelectionOfProperty;
- (id)prompt;
- (void)setAllowsBlocking:(bool)arg1;
- (void)setAllowsCancel:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsFaceTime:(bool)arg1;
- (void)setAllowsOnlyFaceTimeActions:(bool)arg1;
- (void)setAllowsOnlyPhoneActions:(bool)arg1;
- (void)setAllowsSounds:(bool)arg1;
- (void)setBannerTitle:(id)arg1;
- (void)setBannerValue:(id)arg1;
- (void)setBehavior:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedKeys:(id)arg1;
- (void)setHidesPromptInLandscape:(bool)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (void)setPredicateForEnablingContact:(id)arg1;
- (void)setPredicateForSelectionOfContact:(id)arg1;
- (void)setPredicateForSelectionOfProperty:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)styleProvider;
- (id)viewController;

@end
