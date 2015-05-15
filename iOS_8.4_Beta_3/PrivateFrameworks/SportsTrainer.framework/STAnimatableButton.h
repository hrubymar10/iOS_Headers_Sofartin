/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@interface STAnimatableButton : UIView <STAnimatableButtonSliceDelegate> {
    SEL _action;
    UIImage *_highlightedImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _hitRectEdgeInsets;
    UIImage *_image;
    bool _isLandscape;
    STAnimatableButtonSlice *_leftSlice;
    STAnimatableButtonSlice *_middleSlice;
    UIImage *_normalImage;
    STAnimatableButtonSlice *_rightSlice;
    double _shadowBlurRadius;
    UIColor *_shadowColor;
    bool _slicesNeedDisplay;
    STShadowLabel *_subtitleLabel;
    id _target;
    STShadowLabel *_titleLabel;
    bool _touchInside;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitRectEdgeInsets;
@property(assign,readonly) Class superclass;

- (id)_buttonWellImage;
- (id)_buttonWellLandscapeImage;
- (void)dealloc;
- (void)drawImageForSlice;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitRectEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setHighlightedBackgroundImage:(id)arg1;
- (void)setHitRectEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImage:(id)arg1;
- (void)setLandscape:(bool)arg1;
- (void)setNormalBackgroundImage:(id)arg1;
- (void)setShadowColor:(id)arg1 blurRadius:(double)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setTitle:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
