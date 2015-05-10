/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKPickerDividerTableViewCell : UITableViewCell {
    long long _contentBackdropOverlayBlendMode;
    UIView *_dividerView;
}

@property(setter=_setContentBackdropOverlayBlendMode:,assign,readwrite) long long _contentBackdropOverlayBlendMode;
@property(setter=_setDividerView:,assign,retain) UIView * _dividerView;
@property(assign,readwrite) long long contentBackdropOverlayBlendMode;
@property(assign,retain) UIColor * contentBackgroundColor;

- (long long)_contentBackdropOverlayBlendMode;
- (id)_dividerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_dividerViewFrame;
- (void)_setContentBackdropOverlayBlendMode:(long long)arg1;
- (void)_setDividerView:(id)arg1;
- (long long)contentBackdropOverlayBlendMode;
- (id)contentBackgroundColor;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setContentBackdropOverlayBlendMode:(long long)arg1;
- (void)setContentBackgroundColor:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;

@end