/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {
    bool _convertsNumeralsToASCII;
    bool _hidesNextButton;
    bool _secureTextEntry;
    PSTableCell *_textEntryCell;
    PSSpecifier *_textEntrySpecifier;
    int _textEntryType;
    UIView<UIKeyInput> *_textEntryView;
    bool _textFieldHasRoundBorder;
    NSString *_textValue;
}

@property(assign,readwrite) bool convertsNumeralsToASCII;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool hidesNextButton;
@property(assign,readwrite) bool secureTextEntry;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) int textEntryType;
@property(assign,readwrite) bool textFieldHasRoundBorder;
@property(assign,retain) NSString * textValue;

- (bool)becomeFirstResponder;
- (bool)convertsNumeralsToASCII;
- (void)dealloc;
- (void)didFinishEnteringText:(id)arg1;
- (id)getTextValueForSpecifier:(id)arg1;
- (bool)hidesNextButton;
- (id)init;
- (void)loadView;
- (void)nextPressed;
- (unsigned long long)numberOfPasscodeFields;
- (void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2;
- (id)placeholderText;
- (bool)secureTextEntry;
- (void)setConvertsNumeralsToASCII:(bool)arg1;
- (void)setHidesNextButton:(bool)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setTextEntryText:(id)arg1;
- (void)setTextEntryType:(int)arg1;
- (void)setTextFieldHasRoundBorder:(bool)arg1;
- (void)setTextValue:(id)arg1;
- (void)setTextValue:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (id)textEntrySpecifier;
- (id)textEntryText;
- (int)textEntryType;
- (id)textEntryView;
- (void)textEntryViewDidChange:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (bool)textFieldHasRoundBorder;
- (id)textValue;
- (void)updateNextButton;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
