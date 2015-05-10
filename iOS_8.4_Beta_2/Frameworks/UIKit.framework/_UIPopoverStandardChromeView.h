/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
    unsigned long long _arrowDirection;
    double _arrowOffset;
    UIView *_arrowView;
    bool _arrowVisible;
    long long _backgroundStyle;
    _UIBackdropView *_blurView;
    bool _debugMode;
    double _dimmingViewTopEdgeInset;
    NSArray *_dimmingViews;
    UIView *_leftCapView;
    UIColor *_popoverBackgroundColor;
    UIView *_rightCapView;
    bool useShortMode;
}

@property(getter=isArrowVisible,assign,readwrite) bool arrowVisible;
@property(assign,readwrite) long long backgroundStyle;
@property(getter=isDebugModeEnabled,assign,readwrite) bool debugModeEnabled;
@property(assign,readwrite) double dimmingViewTopEdgeInset;
@property(assign,copy) UIColor * popoverBackgroundColor;
@property(assign,readwrite) bool useShortMode;

+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;

- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsUpOrDown;
- (void)_loadNecessaryViews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsets;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPath;
- (double)_shadowRadius;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (long long)backgroundStyle;
- (void)dealloc;
- (void)didMoveToWindow;
- (double)dimmingViewTopEdgeInset;
- (bool)hasComponentViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isArrowVisible;
- (bool)isDebugModeEnabled;
- (bool)isPinned;
- (bool)isRightArrowPinnedToBottom;
- (bool)isRightArrowPinnedToTop;
- (void)layoutSubviews;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)popoverBackgroundColor;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowVisible:(bool)arg1;
- (void)setArrowVisible:(bool)arg1 animated:(bool)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setDebugModeEnabled:(bool)arg1;
- (void)setDimmingViewTopEdgeInset:(double)arg1;
- (void)setPopoverBackgroundColor:(id)arg1;
- (void)setUseShortMode:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (bool)useShortMode;
- (bool)wouldPinForOffset:(double)arg1;

@end