/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    bool _shouldCrossfade;
    UIWindow *_window;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool shouldCrossfade;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) UIWindow * window;

+ (id)animationControllerWithWindow:(id)arg1;

- (void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(id)arg2;
- (void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)setShouldCrossfade:(bool)arg1;
- (void)setWindow:(id)arg1;
- (bool)shouldCrossfade;
- (double)transitionDuration:(id)arg1;
- (id)window;

@end