/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFSlowMotionRampConfiguration : NSObject {
    unsigned long long _exportNumIntermediateSteps;
    float _exportRampCurveExponent;
    double _introTime;
    double _outroTime;
    unsigned long long _playbackNumIntermediateSteps;
    float _playbackRampCurveExponent;
    double _rampTime;
    double _volumeSuppressionIntroTime;
    double _volumeSuppressionOutroTime;
}

@property (nonatomic, readonly) unsigned long long exportNumIntermediateSteps;
@property (nonatomic, readonly) float exportRampCurveExponent;
@property (nonatomic, readonly) double introTime;
@property (nonatomic, readonly) double outroTime;
@property (nonatomic, readonly) unsigned long long playbackNumIntermediateSteps;
@property (nonatomic, readonly) float playbackRampCurveExponent;
@property (nonatomic, readonly) double rampTime;
@property (nonatomic, readonly) double volumeSuppressionIntroTime;
@property (nonatomic, readonly) double volumeSuppressionOutroTime;

- (void)computeRampToTargetRate:(float)arg1 forExport:(bool)arg2 outTimeSteps:(id*)arg3 outIntermediateRates:(id*)arg4;
- (unsigned long long)exportNumIntermediateSteps;
- (float)exportRampCurveExponent;
- (id)init;
- (id)initForRampDown:(bool)arg1;
- (double)introTime;
- (double)outroTime;
- (unsigned long long)playbackNumIntermediateSteps;
- (float)playbackRampCurveExponent;
- (double)rampTime;
- (double)volumeSuppressionIntroTime;
- (double)volumeSuppressionOutroTime;

@end
