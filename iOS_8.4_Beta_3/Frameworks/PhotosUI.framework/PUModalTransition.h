/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUModalTransition : PUViewControllerTransition <UIViewControllerTransitioningDelegate> {
    long long __operation;
}

@property (setter=_setOperation:, nonatomic) long long _operation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)_operation;
- (void)_setOperation:(long long)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)cancelInteractiveTransition;
- (void)completeInteractiveDismissTransitionFinished:(bool)arg1;
- (void)completeInteractivePresentTransitionFinished:(bool)arg1;
- (void)finishInteractiveTransition;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (void)transitionWillDismissInteractively:(bool)arg1;
- (void)transitionWillPresentInteractively:(bool)arg1;

@end
