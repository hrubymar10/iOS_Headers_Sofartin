/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBarRatingView : UIView {
    long long _barRatingStyle;
    long long _numberOfBars;
    float _ratingValue;
}

@property (nonatomic) long long barRatingStyle;
@property (nonatomic) long long numberOfBars;
@property (nonatomic) float ratingValue;

- (long long)barRatingStyle;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfBars;
- (float)ratingValue;
- (void)setBarRatingStyle:(long long)arg1;
- (void)setNumberOfBars:(long long)arg1;
- (void)setRatingValue:(float)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
