/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFAnimationCurveSettings : _UISettings {
    struct CGPoint { 
        double x; 
        double y; 
    } _controlPoint1;
    struct CGPoint { 
        double x; 
        double y; 
    } _controlPoint2;
    unsigned long long _curve;
}

@property(assign,readwrite) struct CGPoint { double x1; double x2; } controlPoint1;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } controlPoint2;
@property(assign,readwrite) unsigned long long curve;

+ (id)_rowsRelativeToKeyPath:(id)arg1;
+ (id)settingsControllerModule;

- (void)_invalidate;
- (struct CGPoint { double x1; double x2; })controlPoint1;
- (struct CGPoint { double x1; double x2; })controlPoint2;
- (unsigned long long)curve;
- (void)setControlPoint1:(struct CGPoint { double x1; double x2; })arg1;
- (void)setControlPoint2:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCurve:(unsigned long long)arg1;
- (void)setDefaultValues;

@end