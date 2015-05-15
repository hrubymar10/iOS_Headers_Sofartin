/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyButton : UIButton {
    int _color;
    bool _currentlyLayingOut;
    bool _forceReLayout;
    NSString *_plusSeparatedTitle;
    UIImageView *_plusSeparator;
    bool _useStandardSizing;
}

@property bool useStandardSizing;

+ (id)acceptVideoButtonImage;
+ (id)answerButtonImage;
+ (id)declineButtonImage;
+ (id)declineVideoButtonImage;
+ (double)defaultHeight;
+ (double)defaultHeightForColor:(int)arg1;

- (void)_adjustIconColor;
- (void)_setButtonColor:(int)arg1;
- (void)_setDisabledButtonColor:(int)arg1;
- (int)buttonColor;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)layoutSubviews;
- (void)setButtonColor:(int)arg1;
- (void)setDisabledButtonColor:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconVerticalOffset:(double)arg1;
- (void)setMinimumTitleFontSize:(double)arg1;
- (void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2;
- (void)setPlusSeparatedTitle:(id)arg1;
- (void)setTitleImagePadding:(double)arg1;
- (void)setTitleVerticalOffset:(double)arg1;
- (void)setUseStandardSizing:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)useStandardSizing;

@end
