/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxEngineSettings : _UISettings {
    double _delayBeforeIdle;
    bool _directionalLockEnabled;
    double _directionalLockSharpness;
    double _directionalLockStickiness;
    double _directionalLockThreshold;
    unsigned long long _frameInterval;
    double _idleLeeway;
    double _inputSmoothing;
    bool _jumpEnabled;
    double _jumpThreshold;
    bool _playJumpSound;
    double _shiftDistanceDependence;
    bool _shiftEnabled;
    double _shiftSpeed;
    bool _showDirectionalLockIndicators;
    bool _showIdleIndicator;
    double _sigmoidDegree;
}

@property(assign,readwrite) double delayBeforeIdle;
@property(assign,readwrite) bool directionalLockEnabled;
@property(assign,readwrite) double directionalLockSharpness;
@property(assign,readwrite) double directionalLockStickiness;
@property(assign,readwrite) double directionalLockThreshold;
@property(assign,readwrite) unsigned long long frameInterval;
@property(assign,readwrite) double idleLeeway;
@property(assign,readwrite) double inputSmoothing;
@property(assign,readwrite) bool jumpEnabled;
@property(assign,readwrite) double jumpThreshold;
@property(assign,readwrite) bool playJumpSound;
@property(assign,readwrite) double shiftDistanceDependence;
@property(assign,readwrite) bool shiftEnabled;
@property(assign,readwrite) double shiftSpeed;
@property(assign,readwrite) bool showDirectionalLockIndicators;
@property(assign,readwrite) bool showIdleIndicator;
@property(assign,readwrite) double sigmoidDegree;

+ (id)settingsControllerModule;

- (double)delayBeforeIdle;
- (bool)directionalLockEnabled;
- (double)directionalLockSharpness;
- (double)directionalLockStickiness;
- (double)directionalLockThreshold;
- (unsigned long long)frameInterval;
- (double)idleLeeway;
- (double)inputSmoothing;
- (bool)jumpEnabled;
- (double)jumpThreshold;
- (bool)playJumpSound;
- (void)setDefaultValues;
- (void)setDelayBeforeIdle:(double)arg1;
- (void)setDirectionalLockEnabled:(bool)arg1;
- (void)setDirectionalLockSharpness:(double)arg1;
- (void)setDirectionalLockStickiness:(double)arg1;
- (void)setDirectionalLockThreshold:(double)arg1;
- (void)setFrameInterval:(unsigned long long)arg1;
- (void)setIdleLeeway:(double)arg1;
- (void)setInputSmoothing:(double)arg1;
- (void)setJumpEnabled:(bool)arg1;
- (void)setJumpThreshold:(double)arg1;
- (void)setPlayJumpSound:(bool)arg1;
- (void)setShiftDistanceDependence:(double)arg1;
- (void)setShiftEnabled:(bool)arg1;
- (void)setShiftSpeed:(double)arg1;
- (void)setShowDirectionalLockIndicators:(bool)arg1;
- (void)setShowIdleIndicator:(bool)arg1;
- (void)setSigmoidDegree:(double)arg1;
- (double)shiftDistanceDependence;
- (bool)shiftEnabled;
- (double)shiftSpeed;
- (bool)showDirectionalLockIndicators;
- (bool)showIdleIndicator;
- (double)sigmoidDegree;

@end
