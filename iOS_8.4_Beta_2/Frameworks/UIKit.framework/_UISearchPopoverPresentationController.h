/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {
    _UISearchPresentationAssistant *_assistant;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } finalFrameForContainerView;
}

@property(assign,readonly) UIPresentationController<_UISearchControllerPresenting> * adaptivePresentationController;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } finalFrameForContainerView;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) double resultsControllerContentOffset;
@property(assign,retain) UIView * searchBarContainerView;
@property(assign,readonly) bool searchBarToBecomeTopAttached;
@property(assign,readonly) bool shouldAccountForStatusBar;
@property(assign,readonly) double statusBarAdjustment;
@property(assign,readonly) Class superclass;

- (id)_popoverHostingWindow;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (id)_presentedViewControllerForSizeClassPair:(struct { long long x1; long long x2; })arg1;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToWillBegin;
- (id)adaptivePresentationController;
- (long long)adaptivePresentationStyle;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (double)resultsControllerContentOffset;
- (id)searchBarContainerView;
- (bool)searchBarToBecomeTopAttached;
- (void)setContentVisible:(bool)arg1;
- (bool)shouldAccountForStatusBar;
- (double)statusBarAdjustment;

@end
