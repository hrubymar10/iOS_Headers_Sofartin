/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIModalItemContentView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    UIViewController *_accessoryViewController;
    UIView *_accessoryViewControllerContrainerView;
    struct CGSize { 
        double width; 
        double height; 
    } _accessoryViewControllerSize;
    struct CGSize { 
        double width; 
        double height; 
    } _actualViewControllerSize;
    UITableView *_buttonTable;
    UIButton *_cancelButton;
    long long _cancelButtonIndex;
    UIButton *_defaultButton;
    long long _defaultButtonIndex;
    bool _enableFirstOtherButton;
    UITextField *_loginTextField;
    struct CGSize { 
        double width; 
        double height; 
    } _maxSize;
    UILabel *_messageLabel;
    _UIModalItem *_modalItem;
    UITextField *_passwordTextField;
    struct CGSize { 
        double width; 
        double height; 
    } _presentingSize;
    _UIModalItemsPresentingViewController *_presentingViewController;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property (nonatomic, readonly) UIViewController *accessoryViewController;
@property (nonatomic, readonly) UIView *accessoryViewControllerContrainerView;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } accessoryViewControllerSize;
@property (nonatomic) struct CGSize { double x1; double x2; } actualViewControllerSize;
@property (nonatomic, readonly) UITableView *buttonTable;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, readonly) long long cancelButtonIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIButton *defaultButton;
@property (nonatomic, readonly) long long defaultButtonIndex;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableFirstOtherButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITextField *loginTextField;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic) _UIModalItem *modalItem;
@property (nonatomic, readonly) UITextField *passwordTextField;
@property (nonatomic) struct CGSize { double x1; double x2; } presentingSize;
@property (nonatomic) _UIModalItemsPresentingViewController *presentingViewController;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void)_createAndConfigureButtonTable;
- (void)_createAndConfigureMessageLabel;
- (void)_createAndConfigureSubtitleLabel;
- (void)_createAndConfigureTextFieldsForInputStyle:(long long)arg1;
- (void)_createAndConfigureTitleLabel;
- (void)_createViewControllerContentView;
- (void)_reloadButtons;
- (id)accessoryViewController;
- (id)accessoryViewControllerContrainerView;
- (struct CGSize { double x1; double x2; })accessoryViewControllerSize;
- (struct CGSize { double x1; double x2; })actualViewControllerSize;
- (id)buttonTable;
- (id)cancelButton;
- (long long)cancelButtonIndex;
- (void)dealloc;
- (id)defaultButton;
- (long long)defaultButtonIndex;
- (bool)enableFirstOtherButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layout;
- (id)loginTextField;
- (struct CGSize { double x1; double x2; })maxSize;
- (id)messageLabel;
- (id)modalItem;
- (id)passwordTextField;
- (struct CGSize { double x1; double x2; })presentingSize;
- (id)presentingViewController;
- (void)setActualViewControllerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setEnableFirstOtherButton:(bool)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setModalItem:(id)arg1;
- (void)setModalItem:(id)arg1 skipLayout:(bool)arg2;
- (void)setPresentingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresentingViewController:(id)arg1;
- (id)subtitleLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldValueDidChange:(id)arg1;
- (id)titleLabel;

@end
