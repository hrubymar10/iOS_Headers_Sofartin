/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSegmentedControlTabBarView : UIView <MKStackingViewControllerSelectorView> {
    UIVisualEffectView *_blurView;
    id _didChangeSelectedSegmentIndex;
    bool _isBlurred;
    UISegmentedControl *_segmentedControl;
    MKViewWithHairline *_separator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id didChangeSelectedSegmentIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBlurred;
@property (nonatomic, readonly) UISegmentedControl *segmentedControl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_segmentSelectionDidChange;
- (void)dealloc;
- (id)didChangeSelectedSegmentIndex;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBlurred;
- (void)layoutSubviews;
- (id)segmentedControl;
- (void)setContentFromViewController:(id)arg1;
- (void)setDidChangeSelectedSegmentIndex:(id)arg1;
- (void)setIsBlurred:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateSelectorView:(id)arg1;

@end
