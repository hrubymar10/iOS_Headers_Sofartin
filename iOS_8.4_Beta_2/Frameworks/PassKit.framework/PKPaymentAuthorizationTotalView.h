/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationTotalView : UIView {
    NSLayoutConstraint *_labelBaselineConstraint;
    UILabel *_labelView;
    PKPaymentAuthorizationLayout *_layout;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
    UIView *_separatorView;
    long long _style;
    UILabel *_valueView;
}

@property(assign,readwrite) PKPaymentAuthorizationLayout * layout;
@property(assign,readwrite) long long style;

- (void)_createSubviews;
- (double)_initialLeading;
- (id)_labelAttributedStringWithString:(id)arg1;
- (void)_prepareConstraints;
- (id)_valueAttributedStringWithString:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (id)layout;
- (void)setLabel:(id)arg1 value:(id)arg2;
- (void)setLayout:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)updateConstraints;

@end
