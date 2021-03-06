/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPasscodeField : UIView <UIKeyInput> {
    NSMutableArray *_dashViews;
    <PSPasscodeFieldDelegate> *_delegate;
    NSMutableArray *_digitViews;
    NSMutableArray *_dotViews;
    unsigned long long _numberOfEntryFields;
    bool _securePasscodeEntry;
    NSMutableString *_stringValue;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSPasscodeFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) unsigned long long numberOfEntryFields;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) bool securePasscodeEntry;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;

- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (bool)hasText;
- (id)initWithNumberOfEntryFields:(unsigned long long)arg1;
- (void)insertText:(id)arg1;
- (bool)isSecureTextEntry;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (void)layoutSubviews;
- (unsigned long long)numberOfEntryFields;
- (void)passcodeFieldTapped:(id)arg1;
- (bool)securePasscodeEntry;
- (void)setDelegate:(id)arg1;
- (void)setSecurePasscodeEntry:(bool)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
