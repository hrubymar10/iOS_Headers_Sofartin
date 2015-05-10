/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABRepeatingGradientSeparatorView : UIView {
    UIColor *_endColor;
    long long _lineCount;
    UIColor *_startColor;
}

@property(assign,retain) UIColor * endColor;
@property(assign,readonly) NSArray * gradientColors;
@property(assign,readwrite) long long lineCount;
@property(assign,retain) UIColor * startColor;

- (void)_updateGradients;
- (void)dealloc;
- (id)endColor;
- (id)gradientColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)lineCount;
- (void)setEndColor:(id)arg1;
- (void)setLineCount:(long long)arg1;
- (void)setStartColor:(id)arg1;
- (id)startColor;

@end