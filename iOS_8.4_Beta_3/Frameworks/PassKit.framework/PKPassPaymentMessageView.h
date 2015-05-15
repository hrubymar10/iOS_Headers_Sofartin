/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassPaymentMessageView : PKPassPaymentFooterContentView {
    UIImageView *_alertImageView;
    UILabel *_bodyLabel;
    UIView *_bottomRule;
    UIButton *_button;
    UILabel *_titleLabel;
}

- (id)_actionButton;
- (id)_alertImage;
- (id)_bodyLabel;
- (id)_bottomRule;
- (id)_titleLabel;
- (void)dealloc;
- (id)initWithPass:(id)arg1 title:(id)arg2 body:(id)arg3;
- (id)initWithPass:(id)arg1 title:(id)arg2 body:(id)arg3 buttonTitle:(id)arg4 action:(SEL)arg5 isImportant:(bool)arg6;
- (void)layoutSubviews;

@end
