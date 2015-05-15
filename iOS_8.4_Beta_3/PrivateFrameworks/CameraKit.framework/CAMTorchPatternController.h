/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTorchPatternController : NSObject {
    CAMTorchPattern *__currentPattern;
    CADisplayLink *__displayLink;
    bool __performing;
    double __startTime;
    AVCaptureDevice *_captureDevice;
    double _stepInterval;
}

@property(assign,readonly) CAMTorchPattern * _currentPattern;
@property(assign,readonly) CADisplayLink * _displayLink;
@property(setter=_setPerforming:,assign,readwrite) bool _performing;
@property(assign,readonly) double _startTime;
@property(assign,retain) AVCaptureDevice * captureDevice;
@property(assign,readwrite) double stepInterval;

- (void).cxx_destruct;
- (void)_applyTorchLevel:(float)arg1;
- (id)_currentPattern;
- (id)_displayLink;
- (bool)_performing;
- (void)_resetTorchLevel;
- (void)_setPerforming:(bool)arg1;
- (double)_startTime;
- (void)blink;
- (id)captureDevice;
- (void)displayLinkFired:(id)arg1;
- (void)doubleBlink;
- (id)init;
- (void)setCaptureDevice:(id)arg1;
- (void)setStepInterval:(double)arg1;
- (void)startPerformingPattern:(id)arg1;
- (double)stepInterval;
- (void)stopPerformingPattern;

@end