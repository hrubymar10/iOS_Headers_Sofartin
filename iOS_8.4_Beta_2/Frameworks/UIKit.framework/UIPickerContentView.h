/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerContentView : UIView {
    UIImageView *_checkView;
    struct { 
        unsigned int checked : 1; 
        unsigned int highlighted : 1; 
    } _pickerContentViewFlags;
    UILabel *_titleLabel;
}

@property(getter=isChecked,assign,readwrite) bool checked;
@property(assign,readonly) UILabel * titleLabel;

+ (double)_checkmarkOffset;

- (bool)_isSelectable;
- (id)checkedColor;
- (void)dealloc;
- (bool)isChecked;
- (bool)isHighlighted;
- (double)labelWidthForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setChecked:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (id)titleLabel;

@end
