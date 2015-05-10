/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPopoverView : UIView {
    double __dimmingViewTopEdgeInset;
    UIPopoverBackgroundView *_backgroundView;
    Class _backgroundViewClass;
    UIView *_contentView;
    UIPopoverController *_popoverController;
    UIActionSheet *_presentedActionSheet;
    bool _showsBackgroundComponentHighlights;
    bool _showsBackgroundViewHighlight;
    bool _showsContentViewHighlight;
    UIImageView *_toolbarShine;
}

@property(setter=_setDimmingViewTopEdgeInset:,assign,readwrite) double _dimmingViewTopEdgeInset;
@property(assign,readwrite) unsigned long long arrowDirection;
@property(assign,readwrite) double arrowOffset;
@property(assign,readwrite) long long backgroundStyle;
@property(assign,copy) UIColor * popoverBackgroundColor;
@property(assign,readwrite) UIPopoverController * popoverController;
@property(assign,retain) UIActionSheet * presentedActionSheet;
@property(assign,readwrite) bool showsBackgroundComponentHighlights;
@property(assign,readwrite) bool showsBackgroundViewHighlight;
@property(assign,readwrite) bool showsContentViewHighlight;

+ (id)popoverViewContainingView:(id)arg1;

- (bool)_allowsCustomizationOfContent;
- (double)_dimmingViewTopEdgeInset;
- (void)_hideArrow;
- (bool)_isIgnoringTapsInDimmingView;
- (void)_layoutToolbarShine;
- (bool)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_presentationInPopoverDidBeginForViewController:(id)arg1;
- (void)_presentationInPopoverDidEndForViewController:(id)arg1;
- (void)_presentationInPopoverWillBeginForViewController:(id)arg1;
- (void)_presentationInPopoverWillEndForViewController:(id)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setDimmingViewTopEdgeInset:(double)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 arrowOffset:(double)arg2;
- (void)_setIgnoreTapsInDimmingView:(bool)arg1;
- (void)_setPopoverContentView:(id)arg1;
- (void)_showArrow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_snapshotBounds;
- (int)_style;
- (id)_viewForModalPresentationOfViewController:(id)arg1;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (long long)backgroundStyle;
- (id)backgroundView;
- (id)contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundViewClass:(Class)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundViewClass:(Class)arg2 embeddedInView:(bool)arg3;
- (void)layoutSubviews;
- (id)popoverBackgroundColor;
- (id)popoverController;
- (id)presentedActionSheet;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setPopoverBackgroundColor:(id)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPresentedActionSheet:(id)arg1;
- (void)setShowsBackgroundComponentHighlights:(bool)arg1;
- (void)setShowsBackgroundViewHighlight:(bool)arg1;
- (void)setShowsContentViewHighlight:(bool)arg1;
- (void)setUseToolbarShine:(bool)arg1;
- (bool)showsBackgroundComponentHighlights;
- (bool)showsBackgroundViewHighlight;
- (bool)showsContentViewHighlight;
- (id)standardChromeView;
- (bool)toolbarIsVisible;
- (id)toolbarShine;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)viewController;
- (void)willMoveToWindow:(id)arg1;

@end