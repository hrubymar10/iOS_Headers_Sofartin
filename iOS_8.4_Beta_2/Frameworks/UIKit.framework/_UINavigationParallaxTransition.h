/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationParallaxTransition : NSObject <UIViewControllerAnimatedTransitioningEx, _UIBasicAnimationFactory> {
    _UIParallaxDimmingView *_borderDimmingView;
    UIView *_clipUnderView;
    bool _clipUnderlapWhileTransitioning;
    UIView *_containerFromView;
    UIView *_containerToView;
    _UIParallaxDimmingView *_contentDimmingView;
    bool _interactionAborted;
    _UINavigationInteractiveTransitionBase *_interactionController;
    long long _operation;
    <UIViewControllerContextTransitioning> *_transitionContext;
    double _transitionGap;
    long long _transitionStyle;
}

@property(assign,retain) _UIParallaxDimmingView * borderDimmingView;
@property(assign,retain) UIView * clipUnderView;
@property(assign,readwrite) bool clipUnderlapWhileTransitioning;
@property(assign,retain) UIView * containerFromView;
@property(assign,retain) UIView * containerToView;
@property(assign,retain) _UIParallaxDimmingView * contentDimmingView;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool interactionAborted;
@property(assign,readwrite) _UINavigationInteractiveTransitionBase * interactionController;
@property(assign,readwrite) long long operation;
@property(assign,readonly) Class superclass;
@property(assign,retain) <UIViewControllerContextTransitioning> * transitionContext;
@property(assign,readwrite) double transitionGap;
@property(assign,readwrite) long long transitionStyle;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (void)animateKeyboard:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id)borderDimmingView;
- (id)clipUnderView;
- (bool)clipUnderlapWhileTransitioning;
- (void)completeKeyboard:(id)arg1;
- (id)containerFromView;
- (id)containerToView;
- (id)contentDimmingView;
- (void)dealloc;
- (double)gapBetweenViews;
- (id)initWithCurrentOperation:(long long)arg1;
- (bool)interactionAborted;
- (id)interactionController;
- (long long)operation;
- (double)parallaxOffset;
- (void)prepareToAnimateKeyboard:(id)arg1;
- (void)resizeShadow:(id)arg1;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (void)setBorderDimmingView:(id)arg1;
- (void)setClipUnderView:(id)arg1;
- (void)setClipUnderlapWhileTransitioning:(bool)arg1;
- (void)setContainerFromView:(id)arg1;
- (void)setContainerToView:(id)arg1;
- (void)setContentDimmingView:(id)arg1;
- (void)setInteractionAborted:(bool)arg1;
- (void)setInteractionController:(id)arg1;
- (void)setOperation:(long long)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionGap:(double)arg1;
- (void)setTransitionStyle:(long long)arg1;
- (id)shadowContainerForKeyboardTransition:(id)arg1;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (double)transitionGap;
- (long long)transitionStyle;

@end
