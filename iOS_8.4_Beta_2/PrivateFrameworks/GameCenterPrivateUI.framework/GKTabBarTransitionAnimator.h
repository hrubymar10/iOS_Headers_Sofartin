/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKTabBarTransitionAnimator : NSObject <UIViewControllerAnimatorTransitioning> {
    _GKBubbleFlowTransitionInfo *_transitionInfo;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,retain) _GKBubbleFlowTransitionInfo * transitionInfo;

- (void)_animateTransition:(id)arg1;
- (void)_animateTransitionInTwoParts:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)dealloc;
- (void)setTransitionInfo:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)transitionInfo;

@end