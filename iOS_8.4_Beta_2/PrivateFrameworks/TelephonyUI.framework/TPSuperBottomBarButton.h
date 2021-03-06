/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPSuperBottomBarButton : UIButton {
    struct CGSize { 
        double width; 
        double height; 
    } _buttonSize;
    long long _orientation;
    UIColor *_originalBackgroundColor;
    UIView *_overlayView;
    TPRingView *_ringView;
    bool _usesSmallerFontSize;
}

@property(assign,readwrite) struct CGSize { double x1; double x2; } buttonSize;
@property(assign,readwrite) long long orientation;
@property(assign,retain) UIColor * originalBackgroundColor;
@property(assign,readwrite) bool usesSmallerFontSize;

+ (id)defaultFont;
+ (double)defaultHeight;
+ (double)defaultWidth;

- (struct CGSize { double x1; double x2; })buttonSize;
- (void)configureForCancelAction;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithAction:(int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)newOverlayView;
- (long long)orientation;
- (id)originalBackgroundColor;
- (void)setButtonSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOriginalBackgroundColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUsesSmallerFontSize:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)usesSmallerFontSize;

@end
