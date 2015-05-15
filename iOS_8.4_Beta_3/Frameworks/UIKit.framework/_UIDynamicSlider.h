/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDynamicSlider : UISlider <UICollisionBehaviorDelegate, UIDynamicAnimatorDelegate> {
    _UIDynamicSliderAnimator *_animator;
    UIGravityBehavior *_gravityBehavior;
    UIDynamicItemBehavior *_itemBehavior;
    UIPushBehavior *_pushBehavior;
    UIView *_thumbDynamicsView;
    struct CGPoint { 
        double x; 
        double y; 
    } _thumbPreviousPoint;
    double _thumbPreviousTime;
    double _thumbVelocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_clearDynamics;
- (void)_handleConversionToDynamicsTracking;
- (void)_handleDynamicsStep;
- (void)_initializeDynamicsTracking:(id)arg1;
- (void)_updateDynamicsTracking:(id)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)cancelTouchTracking;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

@end
