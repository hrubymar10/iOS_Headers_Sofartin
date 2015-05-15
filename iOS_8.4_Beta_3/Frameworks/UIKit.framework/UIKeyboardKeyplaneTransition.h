/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardKeyplaneTransition : NSObject {
    id _completionBlock;
    double _currentProgress;
    CADisplayLink *_displayLink;
    UIKBTree *_end;
    UIView *_endView;
    double _finalTransitionStartTime;
    double _finishDuration;
    double _finishProgress;
    bool _initiallyAtEnd;
    double _liftOffProgress;
    UIKBTree *_start;
    UIView *_startView;
    <UIKeyboardKeyplaneTransitionDelegate> *_transitionDelegate;
}

@property (copy) id completionBlock;
@property (nonatomic, readonly) double endHeight;
@property (nonatomic) bool initiallyAtEnd;
@property (nonatomic, readonly) double startHeight;
@property (nonatomic) <UIKeyboardKeyplaneTransitionDelegate> *transitionDelegate;

- (bool)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)commitTransitionRebuild;
- (id)completionBlock;
- (void)dealloc;
- (double)endHeight;
- (void)finalizeTransition;
- (void)finishWithProgress:(double)arg1 completionBlock:(id)arg2;
- (bool)initiallyAtEnd;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)setCompletionBlock:(id)arg1;
- (void)setInitiallyAtEnd:(bool)arg1;
- (void)setTransitionDelegate:(id)arg1;
- (double)startHeight;
- (id)transitionDelegate;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(double)arg1;

@end
