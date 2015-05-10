/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditToolbar : UIView <PUPhotoEditLayoutStaticAdaptable> {
    _UIBackdropView *_backdropBackgroundView;
    NSArray *_basicViewsConstraints;
    long long _layoutOrientation;
    double _longSideMargin;
    UIButton *_mainActionButton;
    NSArray *_mainActionButtonConstraints;
    UIView *_mainToolbarContainer;
    UIButton *_secondaryActionButton;
    NSArray *_secondaryActionButtonConstraints;
    UIView *_solidBackgroundView;
    NSArray *_toolButtons;
    NSArray *_toolButtonsConstraints;
    bool _useTranslucentBackground;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) long long layoutOrientation;
@property(assign,readwrite) double longSideMargin;
@property(assign,readonly) UIButton * mainActionButton;
@property(assign,readonly) UIButton * secondaryActionButton;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSArray * toolButtons;
@property(assign,readwrite) bool useTranslucentBackground;

- (void).cxx_destruct;
- (void)_updateBackgroundAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutOrientation;
- (double)longSideMargin;
- (id)mainActionButton;
- (id)secondaryActionButton;
- (void)setLongSideMargin:(double)arg1;
- (void)setToolButtons:(id)arg1 mainActionButton:(id)arg2 secondaryActionButton:(id)arg3;
- (void)setUseTranslucentBackground:(bool)arg1;
- (void)setUseTranslucentBackground:(bool)arg1 animated:(bool)arg2;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (id)toolButtons;
- (void)updateConstraints;
- (bool)useTranslucentBackground;
- (void)willMoveToWindow:(id)arg1;

@end