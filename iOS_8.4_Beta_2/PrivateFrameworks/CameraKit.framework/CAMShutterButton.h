/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMShutterButton : UIButton {
    UIView *__innerView;
    UIImageView *__outerImageView;
    UIView *__outerView;
    UIActivityIndicatorView *__progressActivityIndicatorView;
    CAMTimelapseShutterRingView *__timelapseOuterView;
    long long _mode;
    bool _pulsing;
    bool _showDisabled;
    struct CAMShutterButtonSpec { 
        double outerRingDiameter; 
        double outerRingStrokeWidth; 
        double stopSquareSideLength; 
        double stopSquareCornerRadius; 
    } _spec;
    bool _spinning;
}

@property(assign,readonly) UIView * _innerView;
@property(assign,readonly) UIImageView * _outerImageView;
@property(assign,readonly) UIView * _outerView;
@property(assign,readonly) UIActivityIndicatorView * _progressActivityIndicatorView;
@property(assign,readonly) CAMTimelapseShutterRingView * _timelapseOuterView;
@property(assign,readwrite) long long mode;
@property(getter=isPulsing,assign,readwrite) bool pulsing;
@property(assign,readwrite) bool showDisabled;
@property(assign,readwrite) struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; } spec;
@property(getter=isSpinning,assign,readwrite) bool spinning;

+ (id)shutterButton;
+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; })arg1;
+ (id)smallShutterButton;
+ (id)tinyShutterButton;

- (void).cxx_destruct;
- (double)_borderWidthForMode:(long long)arg1;
- (id)_colorForMode:(long long)arg1;
- (void)_commonCAMShutterButtonInitialization;
- (double)_cornerRadiusForMode:(long long)arg1;
- (double)_innerCircleDiameter;
- (id)_innerView;
- (bool)_isStopMode:(long long)arg1;
- (id)_outerImageForMode:(long long)arg1;
- (id)_outerImageView;
- (id)_outerView;
- (void)_performHighlightAnimation;
- (void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(bool)arg3;
- (id)_progressActivityIndicatorView;
- (void)_setSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; })arg1;
- (bool)_shouldUseImageViewForMode:(long long)arg1;
- (bool)_shouldUseTimelapseOuterViewForMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })_sizeForMode:(long long)arg1;
- (id)_timelapseOuterView;
- (void)_updateOuterAndInnerLayers;
- (void)_updateSpinningAnimations;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPulsing;
- (bool)isSpinning;
- (void)layoutSubviews;
- (long long)mode;
- (void)setHighlighted:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setMode:(long long)arg1 animated:(bool)arg2;
- (void)setPulsing:(bool)arg1;
- (void)setShowDisabled:(bool)arg1;
- (void)setSpinning:(bool)arg1;
- (bool)showDisabled;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; })spec;

@end
