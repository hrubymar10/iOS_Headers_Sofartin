/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUVibrantContentEffectView : MPUEffectView {
    UIImageView *_blurImageView;
    UIView *_contentView;
    NSMapTable *_layerPinningViewMap;
    MPUPinningView *_maskedView;
    UIView *_plusDView;
    bool _vibrancyEnabled;
    UIView *_vibrantContainer;
}

@property(assign,retain) UIImageView * blurImageView;
@property(assign,readonly) UIView * contentView;
@property(assign,retain) NSMapTable * layerPinningViewMap;
@property(assign,retain) MPUPinningView * maskedView;
@property(assign,retain) UIView * plusDView;
@property(assign,readwrite) bool vibrancyEnabled;
@property(assign,retain) UIView * vibrantContainer;

- (void).cxx_destruct;
- (id)_layersNotWantingVibrancyForSubviewsOfView:(id)arg1;
- (id)blurImageView;
- (id)contentView;
- (void)disableVibrancyForLayer:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layerPinningViewMap;
- (void)layoutSubviews;
- (id)maskedView;
- (id)plusDView;
- (void)reenableVibrancyForLayer:(id)arg1;
- (void)setBlurImageView:(id)arg1;
- (void)setLayerPinningViewMap:(id)arg1;
- (void)setMaskedView:(id)arg1;
- (void)setPlusDView:(id)arg1;
- (void)setReferenceView:(id)arg1;
- (void)setVibrancyEnabled:(bool)arg1;
- (void)setVibrantContainer:(id)arg1;
- (void)tintColorDidChange;
- (void)updateEffect;
- (void)updateVibrancyForContentView;
- (bool)vibrancyEnabled;
- (id)vibrantContainer;

@end