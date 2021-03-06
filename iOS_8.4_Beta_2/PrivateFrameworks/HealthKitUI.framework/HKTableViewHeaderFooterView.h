/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKTableViewHeaderFooterView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    UILabel *_label;
    double _preferredMaxLayoutWidth;
}

@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(assign,readonly) UILabel * label;
@property(assign,readwrite) double preferredMaxLayoutWidth;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;
- (void)layoutSubviews;
- (double)preferredMaxLayoutWidth;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)updateFont;

@end
