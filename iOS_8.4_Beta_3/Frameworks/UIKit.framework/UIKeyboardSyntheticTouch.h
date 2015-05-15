/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSyntheticTouch : NSObject {
    unsigned char _pathIdentity;
    unsigned char _pathIndex;
    float _pathMajorRadius;
    struct CGPoint { 
        double x; 
        double y; 
    } locationInWindow;
    long long phase;
    unsigned long long tapCount;
    double timestamp;
    UIWindow *window;
}

@property(assign,readonly) unsigned char _pathIdentity;
@property(assign,readonly) unsigned char _pathIndex;
@property(assign,readwrite) float _pathMajorRadius;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } locationInWindow;
@property(assign,readwrite) long long phase;
@property(assign,readwrite) unsigned long long tapCount;
@property(assign,readwrite) double timestamp;
@property(assign,retain) UIWindow * window;

+ (id)syntheticTouchWithPoint:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 window:(id)arg3;

- (unsigned char)_pathIdentity;
- (unsigned char)_pathIndex;
- (float)_pathMajorRadius;
- (void)_setLocationInWindow:(struct CGPoint { double x1; double x2; })arg1 resetPrevious:(bool)arg2;
- (struct CGPoint { double x1; double x2; })getLocationInWindow;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 window:(id)arg3;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (long long)phase;
- (struct CGPoint { double x1; double x2; })previousLocationInView:(id)arg1;
- (void)setLocationInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhase:(long long)arg1;
- (void)setTapCount:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWindow:(id)arg1;
- (void)set_pathMajorRadius:(float)arg1;
- (unsigned long long)tapCount;
- (double)timestamp;
- (id)window;

@end
