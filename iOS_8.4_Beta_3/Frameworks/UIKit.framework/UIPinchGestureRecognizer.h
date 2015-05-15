/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPinchGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    } _anchorSceneReferencePoint;
    unsigned int _endsOnSingleTouch;
    double _hysteresis;
    double _initialTouchDistance;
    double _initialTouchScale;
    double _lastTouchTime;
    double _previousVelocity;
    double _scaleThreshold;
    UITouch *_touches;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _transform;
    id _transformAnalyzer;
    double _velocity;
}

@property(assign,readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property(getter=_hysteresis,setter=_setHysteresis:,assign,readwrite) double hysteresis;
@property(assign,readwrite) double scale;
@property(assign,readwrite) double scaleThreshold;
@property(assign,readonly) double velocity;

- (bool)_endsOnSingleTouch;
- (double)_hysteresis;
- (void)_resetGestureRecognizer;
- (void)_setEndsOnSingleTouch:(bool)arg1;
- (void)_setHysteresis:(double)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)scale;
- (double)scaleThreshold;
- (void)setScale:(double)arg1;
- (void)setScaleThreshold:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (double)velocity;

@end
