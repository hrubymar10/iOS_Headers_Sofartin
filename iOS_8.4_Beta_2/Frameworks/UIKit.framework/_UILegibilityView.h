/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UILegibilityView : UIView {
    bool _hidesImage;
    UIImage *_image;
    CAFilter *_imageColorFilter;
    UIImageView *_imageView;
    long long _options;
    _UILegibilitySettings *_settings;
    UIImage *_shadowImage;
    CAFilter *_shadowImageColorFilter;
    UIImageView *_shadowImageView;
    double _strength;
}

@property(assign,readwrite) bool hidesImage;
@property(assign,retain) UIImage * image;
@property(assign,retain) CAFilter * imageColorFilter;
@property(assign,retain) UIImageView * imageView;
@property(assign,readwrite) long long options;
@property(assign,retain) _UILegibilitySettings * settings;
@property(assign,retain) UIImage * shadowImage;
@property(assign,retain) CAFilter * shadowImageColorFilter;
@property(assign,retain) UIImageView * shadowImageView;
@property(assign,readwrite) double strength;
@property(assign,readonly) long long style;
@property(assign,readonly) bool usesColorFilters;

- (void)dealloc;
- (id)drawingColor;
- (bool)hidesImage;
- (id)image;
- (id)imageColorFilter;
- (id)imageView;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5;
- (id)initWithStyle:(long long)arg1 image:(id)arg2;
- (id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)layoutSubviews;
- (long long)options;
- (void)setHidesImage:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 shadowImage:(id)arg2;
- (void)setImageColorFilter:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setShadowImage:(id)arg1;
- (void)setShadowImageColorFilter:(id)arg1;
- (void)setShadowImageView:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (id)settings;
- (id)shadowImage;
- (id)shadowImageColorFilter;
- (id)shadowImageView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)strength;
- (long long)style;
- (void)updateForChangedSettings:(id)arg1;
- (void)updateImage;
- (bool)usesColorFilters;
- (bool)usesSecondaryColor;

@end
