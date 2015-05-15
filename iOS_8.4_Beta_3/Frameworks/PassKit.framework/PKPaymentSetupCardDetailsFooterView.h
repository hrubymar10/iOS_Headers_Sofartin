/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupCardDetailsFooterView : UIView {
    long long _context;
    UIButton *_manualEntryButton;
    UIButton *_setupLaterButton;
}

@property (nonatomic) long long context;
@property (nonatomic, retain) UIButton *manualEntryButton;
@property (nonatomic, retain) UIButton *setupLaterButton;

- (long long)context;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (bool)isBuddyiPad;
- (void)layoutSubviews;
- (id)manualEntryButton;
- (void)setContext:(long long)arg1;
- (void)setManualEntryButton:(id)arg1;
- (void)setSetupLaterButton:(id)arg1;
- (id)setupLaterButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
