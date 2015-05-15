/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasZoomingImageTransitionController : UIPercentDrivenInteractiveTransition <MPUExtrasOptionallyInteractiveAnimationController, UIViewControllerAnimatedTransitioning> {
    struct CGPoint { 
        double x; 
        double y; 
    } _initialPinchCenter;
    double _initialPinchScale;
    bool _interactive;
    unsigned long long _itemIndex;
    bool _shouldUseSpringAnimation;
    MPUExtrasBorderedImageView *_zoomingImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialPinchCenter;
@property (nonatomic) double initialPinchScale;
@property (getter=isInteractive, nonatomic) bool interactive;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic) bool shouldUseSpringAnimation;
@property (readonly) Class superclass;
@property (nonatomic, retain) MPUExtrasBorderedImageView *zoomingImageView;

- (void).cxx_destruct;
- (float)_desiredSpeedForNonInteractiveAnimationWithDuration:(double)arg1 deferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 finalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (double)_destinationScale;
- (double)_maximumDistanceTravelledForPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 currentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 finalTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;
- (void)animateTransition:(id)arg1;
- (void)completeInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (id)initWithItemIndex:(unsigned long long)arg1 forInteractiveTransition:(bool)arg2;
- (struct CGPoint { double x1; double x2; })initialPinchCenter;
- (double)initialPinchScale;
- (bool)isInteractive;
- (unsigned long long)itemIndex;
- (void)prepareInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (void)setInitialPinchCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInitialPinchScale:(double)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setItemIndex:(unsigned long long)arg1;
- (void)setShouldUseSpringAnimation:(bool)arg1;
- (void)setZoomingImageView:(id)arg1;
- (bool)shouldUseSpringAnimation;
- (double)transitionDuration:(id)arg1;
- (void)updateInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (id)zoomingImageView;

@end
