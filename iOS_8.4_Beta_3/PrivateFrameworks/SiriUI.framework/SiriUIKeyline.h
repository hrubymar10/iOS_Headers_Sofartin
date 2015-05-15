/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIKeyline : UIView {
    UIColor *_customBackgroundColor;
    double _customLeftPadding;
    double _customRightPadding;
    UIView *_keyLineView;
    long long _keylineType;
    bool _veritical;
}

@property (nonatomic, retain) UIColor *customBackgroundColor;
@property (nonatomic) double customLeftPadding;
@property (nonatomic) double customRightPadding;
@property (nonatomic) long long keylineType;
@property (getter=_isVeritical, setter=_setVertical:, nonatomic) bool veritical;

+ (id)keyline;
+ (id)keylineForSelectableRow;
+ (id)keylineWithDefaultInsets;
+ (id)keylineWithKeylineType:(long long)arg1;
+ (id)starkKeyline;
+ (id)verticalKeyline;

- (void).cxx_destruct;
- (bool)_isVeritical;
- (id)_keylineColorForType:(long long)arg1;
- (double)_keylineWidthForType:(long long)arg1;
- (void)_setVertical:(bool)arg1;
- (id)customBackgroundColor;
- (double)customLeftPadding;
- (double)customRightPadding;
- (id)initWithKeylineType:(long long)arg1;
- (long long)keylineType;
- (void)layoutSubviews;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setCustomLeftPadding:(double)arg1;
- (void)setCustomRightPadding:(double)arg1;
- (void)setKeylineType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
