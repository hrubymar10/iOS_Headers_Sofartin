/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellEditControl : UIControl {
    UITableViewCell *_cell;
    unsigned int _hiding;
    UIImageView *_imageView;
    _UITableViewCellEditControlMinusView *_minusView;
    unsigned int _reserved;
    unsigned int _rotated;
    unsigned int _rotating;
    UIImageView *_shadowView;
    unsigned int _style;
}

@property(getter=isHiding,assign,readwrite) bool hiding;
@property(getter=isRotated,assign,readwrite) bool rotated;

+ (id)_deleteImage:(double)arg1;
+ (id)_deleteImageBackground:(double)arg1;
+ (id)_insertImage:(double)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_minusRect;
+ (id)_multiSelectHighlightedImage;
+ (id)_multiSelectNotSelectedImage;
+ (id)_multiSelectSelectedImage;
+ (struct CGSize { double x1; double x2; })defaultSize;

- (id)_currentImage;
- (id)_minusView;
- (void)_multiselectColorChanged;
- (id)_shadowImage;
- (void)_toggleRotate;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(bool)arg2;
- (void)_updateImageView;
- (void)dealloc;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;
- (bool)isHiding;
- (bool)isRotated;
- (bool)isRotating;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHiding:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRotated:(bool)arg1;
- (void)setRotated:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;

@end
