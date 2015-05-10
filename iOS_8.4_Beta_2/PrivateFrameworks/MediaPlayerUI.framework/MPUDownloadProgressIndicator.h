/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUDownloadProgressIndicator : UIButton {
    float _animatedStartValue;
    float _animatedValue;
    bool _animating;
    double _animationEndTime;
    double _animationStartTime;
    bool _canCancel;
    UIImageView *_centerImageView;
    CADisplayLink *_displayLink;
    bool _mpExternalHidden;
    bool _mpInternalHidden;
    long long _style;
    float _value;
}

@property(assign,readwrite) bool canCancel;
@property(assign,readonly) long long style;
@property(assign,readwrite) float value;

+ (void)_drawModernGradientInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)_isStyleModernShimmer:(long long)arg1;
+ (id)_nonstopImageForStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_sizeForStyle:(long long)arg1;
+ (id)_stopImageForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_baseFrameForSize:(struct CGSize { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centerImageViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forStyle:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fillFrameForSize:(struct CGSize { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setInternalHidden:(bool)arg1;
- (bool)canCancel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setCanCancel:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)updateFromObserver:(id)arg1;
- (void)updateFromObserver:(id)arg1 animated:(bool)arg2;
- (float)value;

@end
