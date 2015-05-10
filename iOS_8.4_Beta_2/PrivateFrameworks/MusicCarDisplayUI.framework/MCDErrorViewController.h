/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDErrorViewController : UIViewController {
    NSString *_errorMessage;
    NSString *_errorTitle;
    UILabel *_messageLabel;
    UIButton *_okButton;
    UILabel *_titleLabel;
}

@property(assign,retain) NSString * errorMessage;
@property(assign,retain) NSString * errorTitle;

- (void).cxx_destruct;
- (void)dealloc;
- (id)errorMessage;
- (id)errorTitle;
- (void)loadView;
- (void)okButtonTapped:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)updateMessageLabelText;
- (void)updateTitleLabelText;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end