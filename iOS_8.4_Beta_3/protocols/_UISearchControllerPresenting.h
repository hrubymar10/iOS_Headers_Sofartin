/* Generated by RuntimeBrowser.
 */

@protocol _UISearchControllerPresenting <NSObject>

@required

- (UIPresentationController<_UISearchControllerPresenting> *)adaptivePresentationController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForContainerView;
- (double)resultsControllerContentOffset;
- (UIView *)searchBarContainerView;
- (bool)searchBarToBecomeTopAttached;
- (void)setContentVisible:(bool)arg1;
- (bool)shouldAccountForStatusBar;
- (double)statusBarAdjustment;

@end
