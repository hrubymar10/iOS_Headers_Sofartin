/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICalloutBarBackground : _UIBackdropView {
    UIImageView *_blurMaskView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _highlightRect;
    _UIBackdropView *_separatorView;
    UIImageView *_tintMaskView;
    double m_dividerOffsets;
}

@property (nonatomic, retain) UIImageView *blurMaskView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } highlightRect;
@property (nonatomic, retain) _UIBackdropView *separatorView;
@property (nonatomic, retain) UIImageView *tintMaskView;

- (id)blurMaskView;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightRect;
- (id)init;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setBlurDisabled:(bool)arg1;
- (void)setBlurMaskView:(id)arg1;
- (void)setDividerOffsets:(double*)arg1;
- (void)setHighlightRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1 forFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setSeparatorView:(id)arg1;
- (void)setTintMaskView:(id)arg1;
- (id)tintMaskView;

@end
