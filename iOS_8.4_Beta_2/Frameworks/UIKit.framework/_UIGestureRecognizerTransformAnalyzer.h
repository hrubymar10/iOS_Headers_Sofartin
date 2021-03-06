/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGestureRecognizerTransformAnalyzer : NSObject {
    int _dominantComponent;
    double _lowPassRotationDelta;
    double _lowPassScaleDelta;
    double _lowPassTranslationMagnitudeDelta;
    double _pinchingWeight;
    double _rotationWeight;
    double _translationWeight;
}

@property(assign,readonly) int dominantComponent;
@property(assign,readwrite) double pinchingWeight;
@property(assign,readwrite) double rotationWeight;
@property(assign,readwrite) double translationWeight;

- (void)analyzeTouches:(id)arg1;
- (int)dominantComponent;
- (id)init;
- (double)pinchingWeight;
- (void)reset;
- (double)rotationWeight;
- (void)setPinchingWeight:(double)arg1;
- (void)setRotationWeight:(double)arg1;
- (void)setTranslationWeight:(double)arg1;
- (double)translationWeight;

@end
