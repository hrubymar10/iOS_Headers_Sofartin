/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBSFluidProgressState : NSObject {
    double _animationDuration;
    long long _fluidProgressAnimationPhase;
    long long _fluidProgressType;
    bool _hasCanceledLoad;
    bool _hasCommittedLoad;
    bool _hasCompletedLoad;
    double _lastTimeProgressValueWasUpdated;
    double _linearFunctionB;
    double _linearFunctionM;
    NSString *_loadURL;
    double _minProgressPosition;
    double _previousDestinationPosition;
    bool _shouldAnimateUsingInitialPosition;
    double _startTimeForFluidProgress;
    double _webKitProgressValue;
}

@property long long fluidProgressAnimationPhase;
@property long long fluidProgressType;
@property bool hasCanceledLoad;
@property bool hasCommittedLoad;
@property bool hasCompletedLoad;
@property (retain) NSString *loadURL;
@property double minProgressPosition;
@property bool shouldAnimateUsingInitialPosition;

+ (double)_estimatedLoadTimeRemainingFromProgressValue:(double)arg1;

- (void).cxx_destruct;
- (double)_adjustProgressPosition:(double)arg1;
- (double)_animationDuration;
- (double)_estimatedLoadTimeRemaining;
- (double)_fractionCompleteAtElapsedTime:(double)arg1;
- (double)_nextProgressPosition:(double)arg1;
- (void)_updateLinearFunction;
- (id)description;
- (long long)fluidProgressAnimationPhase;
- (long long)fluidProgressType;
- (double)fluidProgressValue;
- (bool)hasCanceledLoad;
- (bool)hasCommittedLoad;
- (bool)hasCompletedLoad;
- (id)initWithType:(long long)arg1;
- (bool)isFluidProgressStalled;
- (id)loadURL;
- (double)minProgressPosition;
- (id)nextFluidProgressAnimation;
- (double)secondsElapsedSinceLoadBegan;
- (void)setFluidProgressAnimationPhase:(long long)arg1;
- (void)setFluidProgressType:(long long)arg1;
- (void)setHasCanceledLoad:(bool)arg1;
- (void)setHasCommittedLoad:(bool)arg1;
- (void)setHasCompletedLoad:(bool)arg1;
- (void)setLoadURL:(id)arg1;
- (void)setMinProgressPosition:(double)arg1;
- (void)setShouldAnimateUsingInitialPosition:(bool)arg1;
- (void)setWebKitProgressValue:(double)arg1;
- (bool)shouldAnimateUsingInitialPosition;

@end
