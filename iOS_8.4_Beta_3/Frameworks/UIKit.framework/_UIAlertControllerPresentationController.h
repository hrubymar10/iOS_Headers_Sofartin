/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {
    bool __isCurrentContext;
    bool __shouldRespectNearestCurrentContextPresenter;
    bool _chromeHidden;
    UIView *_dimmingView;
    bool constraintsPrepared;
    UIView *keyboardLayoutAlignmentAvailableSpaceView;
    _UIKeyboardLayoutAlignmentView *keyboardLayoutAlignmentView;
}

@property(getter=_isChromeHidden,setter=_setChromeHidden:,assign,readwrite) bool _chromeHidden;
@property(assign,readonly) UIView * _dimmingView;
@property(setter=_setIsCurrentContext:,assign,readwrite) bool _isCurrentContext;
@property(setter=_setShouldRespectNearestCurrentContextPresenter:,assign,readwrite) bool _shouldRespectNearestCurrentContextPresenter;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void)_containerViewWillLayoutSubviews;
- (id)_dimmingView;
- (bool)_isChromeHidden;
- (bool)_isCurrentContext;
- (void)_occludePresentingWindow:(bool)arg1;
- (void)_prepareConstraintsIfNecessary;
- (void)_prepareDimmingViewIfNecessary;
- (id)_presentedAlertController;
- (bool)_preserveResponderAcrossWindows;
- (void)_setChromeHidden:(bool)arg1;
- (void)_setIsCurrentContext:(bool)arg1;
- (void)_setShouldRespectNearestCurrentContextPresenter:(bool)arg1;
- (bool)_shouldChangeStatusBarViewController;
- (bool)_shouldRespectDefinesPresentationContext;
- (bool)_shouldRespectNearestCurrentContextPresenter;
- (long long)adaptivePresentationStyle;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)attributeToAlignAlertControllerViewBy;
- (double)constantForAligningAlertControllerToAvailableSpace;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (void)setDelegate:(id)arg1;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;

@end