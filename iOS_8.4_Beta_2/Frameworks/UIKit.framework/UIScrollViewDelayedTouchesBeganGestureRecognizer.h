/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    } _startSceneReferenceLocation;
    UIDelayedAction *_touchDelay;
}

- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)dealloc;
- (void)sendDelayedTouches;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)arg1;
- (void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end