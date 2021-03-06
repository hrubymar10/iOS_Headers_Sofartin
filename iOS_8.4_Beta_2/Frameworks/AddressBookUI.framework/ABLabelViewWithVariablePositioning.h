/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABLabelViewWithVariablePositioning : UIView {
    double _bottomPadding;
    double _horizontalPadding;
    UILabel *_label;
    double _topPadding;
}

@property(assign,readwrite) double bottomPadding;
@property(assign,readwrite) double horizontalPadding;
@property(assign,readwrite) double topPadding;

- (double)bottomPadding;
- (void)dealloc;
- (double)horizontalPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBottomPadding:(double)arg1;
- (void)setHorizontalPadding:(double)arg1;
- (void)setLabelFont:(id)arg1;
- (void)setLabelShadowColor:(id)arg1;
- (void)setLabelShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setLabelText:(id)arg1;
- (void)setLabelTextColor:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)topPadding;

@end
