/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIPasscodeView : RUIElement <RUIPasscodeFieldDelegate, RUITableFooterDelegate> {
    UIView *_footer;
    UIColor *_foregroundColor;
    long long _keyboardAppearance;
    UILabel *_label;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    RUIPasscodeField *_passcodeField;
    UIView *_view;
}

@property(assign,retain) UIColor * foregroundColor;
@property(assign,readwrite) long long keyboardAppearance;
@property(assign,readwrite) RUIObjectModel * objectModel;
@property(assign,readwrite) RUIPage * page;
@property(assign,readonly) RUIPasscodeField * passcodeField;

- (void).cxx_destruct;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)foregroundColor;
- (long long)keyboardAppearance;
- (id)objectModel;
- (id)page;
- (id)passcodeField;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeView;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setKeyboardAppearance:(long long)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setPage:(id)arg1;
- (void)submitPIN;
- (void)viewDidLayout;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
