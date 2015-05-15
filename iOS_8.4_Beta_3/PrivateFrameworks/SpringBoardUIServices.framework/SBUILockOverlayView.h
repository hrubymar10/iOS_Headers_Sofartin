/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUILockOverlayView : SBInteractionPassThroughView {
    UIButton *_actionButton;
    <SBUILockOverlayViewDelegate> *_delegate;
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _style;
    UILabel *_subtitleLabel;
    UIResizableView *_textContainerView;
    UILabel *_titleLabel;
    SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
}

@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic) <SBUILockOverlayViewDelegate> *delegate;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) SBLockOverlayStylePropertiesFactory *underlayPropertiesFactory;

- (id)_actionFont;
- (void)_buttonPressed;
- (id)_legibilitySettingsForStyle:(unsigned long long)arg1;
- (double)_maxLabelWidth;
- (unsigned long long)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)_sizeView:(id)arg1 forFixedWith:(bool)arg2;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)actionButton;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)setDelegate:(id)arg1;
- (unsigned long long)style;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)underlayPropertiesFactory;

@end
