/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNoContentView : UIView {
    UIButton *_actionButton;
    _UIBackdropView *_backdropView;
    UIImage *_buttonBackgroundImage;
    NSString *_buttonTitle;
    UIView *_containerView;
    <MusicNoContentViewDelegate> *_delegate;
    NSString *_message;
    UILabel *_messageLabel;
    NSString *_title;
    UILabel *_titleLabel;
}

@property(assign,copy) NSString * buttonTitle;
@property(assign,readwrite) <MusicNoContentViewDelegate> * delegate;
@property(assign,copy) NSString * message;
@property(assign,copy) NSString * title;

+ (void)_beginApplicationTranslucency;
+ (void)_endApplicationTranslucency;

- (void).cxx_destruct;
- (id)_actionButton;
- (void)_actionButtonTapped:(id)arg1;
- (id)_baseTextColor;
- (id)_buttonBackgroundImage;
- (id)_messageLabel;
- (id)_titleLabel;
- (id)buttonTitle;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)message;
- (void)setButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
