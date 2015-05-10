/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    double _duration;
    bool _interactive;
    double _interactiveProgress;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    <UIViewControllerContextTransitioning> *_transitionContext;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) double duration;
@property(assign,readonly) unsigned long long hash;
@property(getter=isInteractive,assign,readwrite) bool interactive;
@property(setter=_setInteractiveProgress:,assign,readwrite) double interactiveProgress;
@property(assign,readonly) Class superclass;

+ (id)interactionControllerForAnimationController:(id)arg1;

- (void).cxx_destruct;
- (id)_newInteractiveTransition;
- (void)_setInteractiveProgress:(double)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (void)cancelInteractiveTransition;
- (void)completeTransition:(bool)arg1;
- (id)containerView;
- (double)duration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFromViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalToViewFrame;
- (void)finishInteractiveTransition;
- (id)fromViewController;
- (id)initWithDuration:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFromViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialToViewFrame;
- (double)interactiveProgress;
- (id)interactiveTransition;
- (bool)isInteractive;
- (void)setInteractive:(bool)arg1;
- (id)toViewController;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransitionProgress:(double)arg1;

@end
