/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIPasscodeField : UIView <UIKeyInput> {
    NSMutableArray *_dashViews;
    <RUIPasscodeFieldDelegate> *_delegate;
    NSMutableArray *_digitViews;
    NSMutableArray *_dotViews;
    UIColor *_foregroundColor;
    long long _keyboardAppearance;
    unsigned long long _numberOfEntryFields;
    bool _securePasscodeEntry;
    NSMutableString *_stringValue;
}

@property(assign,readwrite) long long autocapitalizationType;
@property(assign,readwrite) long long autocorrectionType;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <RUIPasscodeFieldDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) bool enablesReturnKeyAutomatically;
@property(assign,retain) UIColor * foregroundColor;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) long long keyboardAppearance;
@property(assign,readwrite) long long keyboardType;
@property(assign,readonly) unsigned long long numberOfEntryFields;
@property(assign,readwrite) long long returnKeyType;
@property(assign,readwrite) bool securePasscodeEntry;
@property(getter=isSecureTextEntry,assign,readwrite) bool secureTextEntry;
@property(assign,readwrite) long long spellCheckingType;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (void)deleteBackward;
- (id)foregroundColor;
- (bool)hasText;
- (id)initWithNumberOfEntryFields:(unsigned long long)arg1;
- (void)insertText:(id)arg1;
- (bool)isSecureTextEntry;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (void)layoutSubviews;
- (unsigned long long)numberOfEntryFields;
- (bool)securePasscodeEntry;
- (void)setDelegate:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setSecurePasscodeEntry:(bool)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end