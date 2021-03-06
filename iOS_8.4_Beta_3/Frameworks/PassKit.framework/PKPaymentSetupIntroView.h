/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupIntroView : UIView {
    long long _context;
    UIImageView *_heroImage;
    PKPaymentSetupHeroView *_heroView;
    PKPaymentSetupInfoView *_infoView;
}

@property (nonatomic, retain) UIImageView *heroImage;
@property (nonatomic, retain) PKPaymentSetupInfoView *infoView;

- (void)_createSubviews;
- (void)dealloc;
- (id)heroImage;
- (id)infoView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (bool)isBuddyiPad;
- (void)layoutSubviews;
- (void)setHeroImage:(id)arg1;
- (void)setInfoView:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end
