/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface _GKBubbleFlowOnDemandFormSheetViewController : GKBubbleFlowRootViewController {
    bool _falseDismissSkippedOrCompleted;
    _GKBubbleFlowPseudoModalViewController *_pseudoModalViewController;
}

@property(assign,readwrite) bool falseDismissSkippedOrCompleted;
@property(assign,retain) _GKBubbleFlowPseudoModalViewController * pseudoModalViewController;

- (void)_cleanUpOurPresentedModalSetupRootViewControllerIfNecessaryAnimated:(bool)arg1;
- (void)_ensureWeHaveAPresentedModalSetupRootViewControllerToPresent:(id)arg1 andThen:(id)arg2 animated:(bool)arg3;
- (bool)_obscuringContentUnderneath;
- (void)clearInterstitialViewAnimated:(bool)arg1 completion:(id)arg2;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (bool)falseDismissSkippedOrCompleted;
- (bool)isCoveringContentUnderneath;
- (void)popAllModalViewControllersAnimated:(bool)arg1 completion:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (id)pseudoModalViewController;
- (void)setFalseDismissSkippedOrCompleted:(bool)arg1;
- (void)setPseudoModalViewController:(id)arg1;
- (void)viewDidLoad;

@end