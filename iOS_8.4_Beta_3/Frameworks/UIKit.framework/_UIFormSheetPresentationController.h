/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFormSheetPresentationController : UIPresentationController {
    UIDimmingView *_dimmingView;
    UIDropShadowView *_dropShadowView;
    bool _layoutStateShouldAvoidKeyboard;
}

- (void)_changeLayoutModeToAvoidKeyboard:(bool)arg1;
- (long long)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (double)_dropShadowCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (bool)_presentationPotentiallyUnderlapsStatusBar;
- (id)_presentationView;
- (bool)_shouldChangeStatusBarViewController;
- (bool)_shouldHideBottomCorner;
- (bool)_shouldOccludeDuringPresentation;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (unsigned long long)dropShadowAutoresizingMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (bool)shouldPresentInFullscreen;
- (bool)shouldRemovePresentersView;
- (bool)shouldSubscribeToKeyboardNotifications;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;

@end
