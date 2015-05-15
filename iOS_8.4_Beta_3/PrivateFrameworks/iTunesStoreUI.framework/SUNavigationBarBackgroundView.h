/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUNavigationBarBackgroundView : UIView {
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    bool _separatorOnTop;
    UIView *_shadowView;
    _UINavigationBarAppearanceStorage *appearanceStorage;
    long long barStyle;
    UIColor *barTintColor;
    bool barWantsAdaptiveBackdrop;
    bool translucent;
}

@property(setter=_setShadowView:,assign,retain) UIView * _shadowView;
@property(assign,retain) _UINavigationBarAppearanceStorage * appearanceStorage;
@property(assign,readwrite) long long backdropStyle;
@property(assign,readonly) _UIBackdropView * backdropView;
@property(assign,readwrite) long long barStyle;
@property(assign,retain) UIColor * barTintColor;
@property(assign,readwrite) bool barWantsAdaptiveBackdrop;
@property(assign,readwrite) bool separatorOnTop;
@property(getter=isTranslucent,assign,readwrite) bool translucent;

- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(bool*)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(bool)arg2;
- (void)_setIsContainedInPopover:(bool)arg1;
- (void)_setShadowView:(id)arg1;
- (id)_shadowView;
- (id)appearanceStorage;
- (long long)backdropStyle;
- (id)backdropView;
- (long long)barStyle;
- (id)barTintColor;
- (bool)barWantsAdaptiveBackdrop;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTranslucent;
- (void)layoutSubviews;
- (bool)separatorOnTop;
- (void)setAppearanceStorage:(id)arg1;
- (void)setBackdropStyle:(long long)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBarWantsAdaptiveBackdrop:(bool)arg1;
- (void)setSeparatorOnTop:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (void)updateBackgroundImage;

@end
