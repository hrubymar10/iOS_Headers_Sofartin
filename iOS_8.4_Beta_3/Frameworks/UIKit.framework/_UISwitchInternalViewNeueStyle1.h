/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISwitchInternalViewNeueStyle1 : UIView <_UISwitchInternalViewProtocol> {
    bool _isAlwaysAccessible;
    UIImageView *_knobView;
    UIView *_leftSwitchWellContainerView;
    UIView *_leftSwitchWellView;
    UIImage *_offImage;
    bool _on;
    UIImage *_onImage;
    UIColor *_onTintColor;
    bool _pressed;
    bool _pressedIsHandledByGestureRecognizer;
    UIView *_switchWellContainerView;
    UIView *_switchWellImageViewContainer;
    UIImageView *_switchWellOffImageView;
    UIImageView *_switchWellOnImageView;
    UIView *_switchWellView;
    UIColor *_thumbTintColor;
    UIColor *_tintColor;
    bool _useAlternateColor;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isAlwaysAccessible;
@property(assign,retain) UIImage * offImage;
@property(assign,readwrite) bool on;
@property(assign,retain) UIImage * onImage;
@property(assign,retain) UIColor * onTintColor;
@property(assign,readwrite) bool pressedIsHandledByGestureRecognizer;
@property(assign,readonly) Class superclass;
@property(assign,retain) UIColor * thumbTintColor;
@property(assign,retain) UIColor * tintColor;
@property(assign,readwrite) bool useAlternateColor;

- (void)_accessibilitySettingChanged;
- (id)_accessibleOffImage;
- (id)_accessibleOnImage;
- (void)_cleanUpAfterAnimating;
- (id)_defaultOnTintColor;
- (id)_effectiveOffImage;
- (id)_effectiveOffImageTintColor;
- (id)_effectiveOffTextColor;
- (id)_effectiveOnImage;
- (id)_effectiveOnImageTintColor;
- (id)_effectiveOnTintColor;
- (id)_effectiveThumbImage;
- (id)_effectiveTintColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLeftAlignmentOfView:(id)arg1;
- (void)_invalidateControl;
- (void)_invalidateKnob;
- (void)_invalidateOnOffImages;
- (void)_invalidateWell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_knobBoundsPressed:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_knobPositionOn:(bool)arg1 pressed:(bool)arg2 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_labelOpacityAnimation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftSwitchWellContainerBoundsOn:(bool)arg1 pressed:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_leftSwitchWellContainerPositionOn:(bool)arg1 pressed:(bool)arg2;
- (id)_maskLayerForImageViews;
- (struct CGPoint { double x1; double x2; })_offImagePosition;
- (struct CGPoint { double x1; double x2; })_onImagePosition;
- (void)_orderSubviews;
- (void)_prepareForInteraction;
- (void)_setOn:(bool)arg1 animated:(bool)arg2 force:(bool)arg3;
- (void)_setPressed:(bool)arg1;
- (void)_setPressed:(bool)arg1 animated:(bool)arg2;
- (void)_setPressed:(bool)arg1 on:(bool)arg2 animated:(bool)arg3 shouldAnimateLabels:(bool)arg4 completion:(id)arg5;
- (void)_setProgress:(double)arg1;
- (void)_setProgress:(double)arg1 animated:(bool)arg2 withDuration:(double)arg3 force:(bool)arg4 sendAction:(bool)arg5;
- (bool)_shouldDrawAccessibly;
- (bool)_shouldUseLightTintOverColor:(id)arg1;
- (id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(bool)arg4;
- (id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(bool)arg3;
- (id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_switchWellContainerBoundsOn:(bool)arg1 pressed:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_switchWellContainerPositionOn:(bool)arg1 pressed:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_switchWellPositionOn:(bool)arg1 pressed:(bool)arg2;
- (void)_transitionImagesToPressed:(bool)arg1 on:(bool)arg2 animated:(bool)arg3;
- (void)_transitionKnobToOn:(bool)arg1 animated:(bool)arg2;
- (void)_transitionKnobToPressed:(bool)arg1 animated:(bool)arg2;
- (void)_transitionKnobToPressed:(bool)arg1 on:(bool)arg2 animated:(bool)arg3;
- (void)_transitionWellViewToOn:(bool)arg1 animated:(bool)arg2;
- (void)_transitionWellViewToPressed:(bool)arg1 animated:(bool)arg2;
- (double)_wellBorderWidthPressed:(bool)arg1 on:(bool)arg2;
- (struct CGColor { }*)_wellColorOn:(bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAlwaysAccessible;
- (id)offImage;
- (bool)on;
- (id)onImage;
- (id)onTintColor;
- (bool)pressedIsHandledByGestureRecognizer;
- (void)setIsAlwaysAccessible:(bool)arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setPressedIsHandledByGestureRecognizer:(bool)arg1;
- (void)setSendAction:(bool)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUseAlternateColor:(bool)arg1;
- (id)thumbTintColor;
- (id)tintColor;
- (bool)useAlternateColor;

@end
