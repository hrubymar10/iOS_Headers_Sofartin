/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate> {
    CAMHDRButton *_HDRButton;
    bool __HDRButtonExpanded;
    UIView *__elapsedTimeViewCenteringLayoutSpacer;
    CAMExpandableMenuButton *__expandedMenuButton;
    UIView *__filterButtonBottomLayoutSpacer;
    UIView *__hdrButtonCenteringLayoutSpacer;
    UIView *__imageWellBottomLayoutSpacer;
    UIView *__shutterButtomBottomLayoutSpacer;
    UIView *__slalomIndicatorBottomLayoutSpacer;
    UIView *__stillDuringVideoButtonBottomLayoutSpacer;
    bool __timerButtonExpanded;
    long long _backgroundStyle;
    UIView *_backgroundView;
    UIButton *_cancelButton;
    <CAMBottomBarDelegate> *_delegate;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMFilterButton *_filterButton;
    CAMFlipButton *_flipButton;
    CAMImageWell *_imageWell;
    CAMModeDial *_modeDial;
    long long _orientation;
    CAMShutterButton *_shutterButton;
    CAMSlalomIndicatorView *_slalomIndicatorView;
    CAMShutterButton *_stillDuringVideoButton;
    CAMTimerButton *_timerButton;
}

@property (nonatomic, retain) CAMHDRButton *HDRButton;
@property (getter=_isHDRButtonExpanded, setter=_setHDRButtonExpanded:, nonatomic) bool _HDRButtonExpanded;
@property (nonatomic, readonly) UIView *_elapsedTimeViewCenteringLayoutSpacer;
@property (setter=_setExpandedMenuButton:, nonatomic, retain) CAMExpandableMenuButton *_expandedMenuButton;
@property (nonatomic, readonly) UIView *_filterButtonBottomLayoutSpacer;
@property (nonatomic, readonly) UIView *_hdrButtonCenteringLayoutSpacer;
@property (nonatomic, readonly) UIView *_imageWellBottomLayoutSpacer;
@property (nonatomic, readonly) UIView *_shutterButtomBottomLayoutSpacer;
@property (nonatomic, readonly) UIView *_slalomIndicatorBottomLayoutSpacer;
@property (nonatomic, readonly) UIView *_stillDuringVideoButtonBottomLayoutSpacer;
@property (getter=_isTimerButtonExpanded, setter=_setTimerButtonExpanded:, nonatomic) bool _timerButtonExpanded;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic) <CAMBottomBarDelegate> *delegate;
@property (nonatomic, retain) CAMElapsedTimeView *elapsedTimeView;
@property (nonatomic, retain) CAMFilterButton *filterButton;
@property (nonatomic, retain) CAMFlipButton *flipButton;
@property (nonatomic, retain) CAMImageWell *imageWell;
@property (nonatomic, retain) CAMModeDial *modeDial;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) CAMShutterButton *shutterButton;
@property (nonatomic, retain) CAMSlalomIndicatorView *slalomIndicatorView;
@property (nonatomic, retain) CAMShutterButton *stillDuringVideoButton;
@property (nonatomic, retain) CAMTimerButton *timerButton;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)HDRButton;
- (void)_commonCAMBottomBarInitialization;
- (id)_currentMenuButtons;
- (id)_elapsedTimeViewCenteringLayoutSpacer;
- (id)_expandedMenuButton;
- (id)_filterButtonBottomLayoutSpacer;
- (id)_hdrButtonCenteringLayoutSpacer;
- (id)_imageWellBottomLayoutSpacer;
- (bool)_isHDRButtonExpanded;
- (bool)_isTimerButtonExpanded;
- (void)_layoutForHorizontalOrientation;
- (void)_layoutForVerticalOrientation;
- (void)_layoutMenuButtons:(id)arg1 apply:(bool)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (void)_removeAllConstraints;
- (void)_setExpandedMenuButton:(id)arg1;
- (void)_setHDRButtonExpanded:(bool)arg1;
- (void)_setTimerButtonExpanded:(bool)arg1;
- (void)_setupHorizontalBackgroundViewConstraints;
- (void)_setupHorizontalCancelButtonConstraints;
- (void)_setupHorizontalConstraints;
- (void)_setupHorizontalFilterButtonConstraints;
- (void)_setupHorizontalImageWellConstraints;
- (void)_setupHorizontalModeDialConstraints;
- (void)_setupHorizontalShutterButtonConstraints;
- (void)_setupHorizontalSlalomIndicatorConstraints;
- (void)_setupHorizontalStillDuringVideoButtonConstraints;
- (void)_setupVerticalBackgroundViewConstraints;
- (void)_setupVerticalCancelButtonConstraints;
- (void)_setupVerticalConstraints;
- (void)_setupVerticalElapsedTimeViewConstraints;
- (void)_setupVerticalFlipButtonConstraints;
- (void)_setupVerticalImageWellConstraints;
- (void)_setupVerticalModeDialConstraints;
- (void)_setupVerticalShutterButtonConstraints;
- (void)_setupVerticalSlalomIndicatorConstraints;
- (bool)_shouldHideElapsedTimeView;
- (bool)_shouldHideFlipButton;
- (bool)_shouldHideHDRButton;
- (bool)_shouldHideTimerButton;
- (id)_shutterButtomBottomLayoutSpacer;
- (id)_slalomIndicatorBottomLayoutSpacer;
- (id)_stillDuringVideoButtonBottomLayoutSpacer;
- (void)_updateBackgroundStyleAnimated:(bool)arg1;
- (void)_updateHiddenViewsForButtonExpansionAnimated:(bool)arg1;
- (void)_updateImageWellInsetsForOrientation;
- (long long)backgroundStyle;
- (id)backgroundView;
- (id)cancelButton;
- (void)collapseMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (id)delegate;
- (id)elapsedTimeView;
- (void)expandMenuButton:(id)arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)filterButton;
- (id)flipButton;
- (id)imageWell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOrientation:(long long)arg1;
- (void)layoutSubviews;
- (id)modeDial;
- (long long)orientation;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setCancelButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFilterButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setImageWell:(id)arg1;
- (void)setModeDial:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setSlalomIndicatorView:(id)arg1;
- (void)setStillDuringVideoButton:(id)arg1;
- (void)setTimerButton:(id)arg1;
- (id)shutterButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)slalomIndicatorView;
- (id)stillDuringVideoButton;
- (id)timerButton;
- (void)updateConstraints;

@end
