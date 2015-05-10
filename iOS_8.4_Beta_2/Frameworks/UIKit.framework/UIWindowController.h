/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWindowController : NSObject {
    bool __interactiveTransition;
    struct CGPoint { 
        double x; 
        double y; 
    } _beginOriginForToView;
    int _currentTransition;
    SEL _didEndSelector;
    struct CGPoint { 
        double x; 
        double y; 
    } _endOriginForToView;
    UIViewController *_fromViewController;
    <UIViewControllerInteractiveTransitioning> *_interactionController;
    bool _needsDidAppear;
    bool _needsDidDisappear;
    bool _presenting;
    id _target;
    long long _toModalStyle;
    UIViewController *_toViewController;
    <UIViewControllerAnimatedTransitioning> *_transitionController;
    UITransitionView *_transitionView;
    UIWindow *_window;
}

@property(setter=_setInteractionController:,assign,retain) <UIViewControllerInteractiveTransitioning> * _interactionController;
@property(getter=_isInteractiveTransition,setter=_setInteractiveTransition:,assign,readwrite) bool _interactiveTransition;
@property(setter=_setTransitionController:,assign,retain) <UIViewControllerAnimatedTransitioning> * _transitionController;
@property(assign,readwrite) bool presenting;
@property(assign,readonly) UITransitionView * transitionView;
@property(assign,readwrite) UIWindow * window;

+ (id)windowControllerForWindow:(id)arg1;
+ (void)windowWillBeDeallocated:(id)arg1;

- (struct CGPoint { double x1; double x2; })_adjustOrigin:(struct CGPoint { double x1; double x2; })arg1 givenOtherOrigin:(struct CGPoint { double x1; double x2; })arg2 forTransition:(int)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForViewController:(id)arg1 transition:(int)arg2 orientation:(long long)arg3 fullScreenLayout:(bool)arg4 inWindow:(id)arg5;
- (struct CGSize { double x1; double x2; })_flipSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_interactionController;
- (bool)_isInteractiveTransition;
- (struct CGPoint { double x1; double x2; })_originForViewController:(id)arg1 orientation:(long long)arg2 actualStatusBarHeight:(double)arg3 fullScreenLayout:(bool)arg4 inWindow:(id)arg5;
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;
- (void)_setInteractionController:(id)arg1;
- (void)_setInteractiveTransition:(bool)arg1;
- (void)_setTransitionController:(id)arg1;
- (id)_transitionController;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dealloc;
- (double)durationForTransition:(int)arg1;
- (bool)presenting;
- (void)setPresenting:(bool)arg1;
- (void)setWindow:(id)arg1;
- (void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (void)transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 animation:(id)arg6;
- (id)transitionView;
- (struct CGPoint { double x1; double x2; })transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (void)transitionViewDidCancel:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(bool)arg4;
- (void)transitionViewDidStart:(id)arg1;
- (bool)transitionViewShouldUseViewControllerCallbacks;
- (id)window;

@end
