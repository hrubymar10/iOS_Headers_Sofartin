/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPlayButtonControl : UIControl {
    NSString *_backdropGroupName;
    _UIBackdropView *_backdropView;
    UIColor *_backgroundColor;
    UIImage *_backgroundImageForBlurring;
    long long _backgroundType;
    UIView *_backgroundView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _bigHitInsets;
    UIColor *_bufferProgressIndicatorColor;
    id _bufferProgressIndicatorCompositingFilter;
    UIColor *_controlForeGroundColor;
    UIImage *_customPlayImage;
    UIImage *_customToggleImage;
    bool _didInitialHighlightForTouch;
    SKUIPlayButtonGradientView *_gradientBackgroundView;
    NSArray *_gradientColors;
    long long _gradientType;
    UIImageView *_imageView;
    bool _indeterminate;
    SKUIPlayButtonShapeView *_innerProgressLayer;
    SKUIPlayButtonShapeView *_outerProgressLayer;
    float _progress;
    UIColor *_progressIndicatorColor;
    id _progressIndicatorCompositingFilter;
    bool _showOuterBorder;
    bool _showingPlayIndicator;
    bool _showingProgress;
    bool _usesBlurredBackground;
}

@property(assign,copy) NSString * backdropGroupName;
@property(assign,readwrite) UIImage * backgroundImageForBlurring;
@property(assign,readonly) long long backgroundType;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bigHitInsets;
@property(assign,readonly) UIColor * controlForeGroundColor;
@property(assign,retain) UIImage * customPlayImage;
@property(assign,retain) UIImage * customToggleImage;
@property(assign,retain) UIImageView * imageView;
@property(getter=isIndeterminate,assign,readonly) bool indeterminate;
@property(assign,readwrite) float progress;
@property(assign,copy) UIColor * progressIndicatorColor;
@property(assign,readwrite) bool showOuterBorder;
@property(assign,readonly) bool showingPlayIndicator;
@property(assign,readonly) bool showingProgress;

+ (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })_calculateStatistics:(struct CGImage { }*)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)blurColorForImage:(id)arg1 forButtonSize:(struct CGSize { double x1; double x2; })arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;

- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_beginIndeterminateAnimation;
- (id)_cancelImage;
- (id)_classicBackdropView;
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;
- (id)_defaultBackgroundView;
- (id)_gradientBackgroundView;
- (id)_imageView;
- (id)_innerProgressLayer;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;
- (id)_outerProgressLayer;
- (float)_playButtonDefaultAlpha;
- (id)_playImage;
- (void)_prepareForReuse;
- (void)_showPlayIndicator:(bool)arg1;
- (id)_simpleBackdrop;
- (void)_toggleToPlayState;
- (void)_updateBackdropView;
- (void)_updateBackgroundBlur:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)_updateInnerProgressLayerStroke;
- (void)_useBlurredBackground:(bool)arg1;
- (id)backdropGroupName;
- (id)backgroundImageForBlurring;
- (long long)backgroundType;
- (void)beginIndeterminateAnimation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bigHitInsets;
- (float)buttonCornerRadius;
- (struct CGSize { double x1; double x2; })buttonSize;
- (id)cancelImage;
- (id)controlForeGroundColor;
- (id)customPlayImage;
- (id)customToggleImage;
- (id)defaultBackgroundColor;
- (void)endIndeterminateAnimation;
- (void)hideProgressAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isIndeterminate;
- (void)layoutSubviews;
- (id)outerBorderColor;
- (id)playImage;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (float)progress;
- (id)progressIndicatorColor;
- (void)refresh;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundGradientColors:(id)arg1 withGradientType:(long long)arg2;
- (void)setBackgroundImageForBlurring:(id)arg1;
- (void)setBackgroundImageForBlurring:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)setBackgroundType:(long long)arg1;
- (void)setBigHitInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBufferProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setControlColor:(id)arg1;
- (void)setControlForegroundColor:(id)arg1;
- (void)setCustomPlayImage:(id)arg1;
- (void)setCustomToggleImage:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (void)setProgressIndicatorColor:(id)arg1;
- (void)setProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setSelected:(bool)arg1;
- (void)setShowOuterBorder:(bool)arg1;
- (bool)showOuterBorder;
- (void)showPlayIndicator:(bool)arg1;
- (bool)showingPlayIndicator;
- (bool)showingProgress;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateOuterProgressLayerStroke;

@end