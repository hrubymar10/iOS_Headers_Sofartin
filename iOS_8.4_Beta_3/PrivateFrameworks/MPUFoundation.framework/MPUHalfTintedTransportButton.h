/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUHalfTintedTransportButton : UIControl <MPUTransportButton, MPUVibrantContentDisabling> {
    UIButton *_regularButton;
    UIImage *_regularImage;
    UIColor *_regularImageColor;
    UIButton *_tintedButton;
    UIImage *_tintedImage;
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
}

@property(assign,readwrite) bool adjustsImageWhenHighlighted;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(getter=_regularButton,assign,readonly) UIButton * regularButton;
@property(assign,retain) UIImage * regularImage;
@property(assign,readwrite) double regularImageAlpha;
@property(assign,retain) UIColor * regularImageColor;
@property(assign,readonly) UIImageView * regularImageView;
@property(assign,readonly) Class superclass;
@property(getter=_tintedButton,assign,readonly) UIButton * tintedButton;
@property(assign,retain) UIImage * tintedImage;
@property(assign,readwrite) double tintedImageAlpha;
@property(assign,retain) UIColor * tintedImageColor;
@property(assign,readonly) UIImageView * tintedImageView;
@property(assign,readonly) MPUTransportButtonEventHandler * transportButtonEventHandler;
@property(assign,readwrite) long long transportButtonImageViewContentMode;

+ (id)transportButton;

- (void).cxx_destruct;
- (void)_applyImage:(id)arg1 toButton:(id)arg2;
- (id)_newButton;
- (id)_regularButton;
- (bool)_shouldForwardSelectedState;
- (id)_tintedButton;
- (void)_updateRegularImage;
- (bool)adjustsImageWhenHighlighted;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (id)layersNotWantingVibrancy;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)regularImage;
- (double)regularImageAlpha;
- (id)regularImageColor;
- (id)regularImageView;
- (void)setAdjustsImageWhenHighlighted:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRegularImage:(id)arg1;
- (void)setRegularImageAlpha:(double)arg1;
- (void)setRegularImageColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTintedImage:(id)arg1;
- (void)setTintedImageAlpha:(double)arg1;
- (void)setTintedImageColor:(id)arg1;
- (void)setTransportButtonImageViewContentMode:(long long)arg1;
- (bool)shouldTrack;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tintedImage;
- (double)tintedImageAlpha;
- (id)tintedImageColor;
- (id)tintedImageView;
- (id)transportButtonEventHandler;
- (long long)transportButtonImageViewContentMode;
- (bool)wantsCustomHighlightAppearance;

@end