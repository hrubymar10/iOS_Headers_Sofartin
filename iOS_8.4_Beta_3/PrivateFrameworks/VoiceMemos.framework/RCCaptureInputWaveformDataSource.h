/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCaptureInputWaveformDataSource : RCWaveformDataSource <AVCaptureAudioDataOutputSampleBufferDelegate> {
    RCWaveform *_baseWaveform;
    bool _canUpdateCaptureComposition;
    NSArray *_captureInitialDecomposedFragments;
    double _captureInsertionDurationInComposition;
    double _captureInsertionTimeInComposition;
    RCMutableComposition *_capturedComposition;
    RCMutableCompositionFragment *_capturedFragment;
    RCComposition *_destinationComposition;
    RCCompositionFragment *_destinationFragment;
    double _finalCapturedFragmentDuration;
    bool _overdub;
    double _updatedCapturedFragmentDuration;
}

@property(assign,readonly) RCWaveform * baseWaveform;
@property(assign,readonly) bool canUpdateCaptureComposition;
@property(assign,readonly) NSArray * captureInitialDecomposedFragments;
@property(assign,readonly) double captureInsertionDurationInComposition;
@property(assign,readonly) double captureInsertionTimeInComposition;
@property(assign,readonly) RCMutableComposition * capturedComposition;
@property(assign,readonly) RCMutableCompositionFragment * capturedFragment;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) RCComposition * destinationComposition;
@property(assign,readonly) RCCompositionFragment * destinationFragment;
@property(assign,readonly) double finalCapturedFragmentDuration;
@property(assign,readonly) unsigned long long hash;
@property(getter=isOverdub,assign,readonly) bool overdub;
@property(assign,readonly) Class superclass;
@property(assign,readonly) double updatedCapturedFragmentDuration;

- (void).cxx_destruct;
- (id)_captureSegmentsInComponentWaveform:(id)arg1 captureTimeRange:(struct { double x1; double x2; })arg2 componentWaveformSegmentOffset:(double)arg3;
- (void)_captureSesionCompletedWithFinalizedDuration:(double)arg1;
- (void)_extendAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1;
- (double)_fragmentDuration;
- (void)_initializeCaptureComposition;
- (void)_modifyAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1;
- (void)_truncateAccumulatedWaveformSegmentsToEndTime:(double)arg1;
- (void)_updateCapturedComposition:(bool)arg1;
- (bool)appendAveragePowerLevelsByDigestingCapturedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)appendAveragePowerLevelsByDigestingWaveformSegment:(id)arg1;
- (id)baseWaveform;
- (bool)canUpdateCaptureComposition;
- (id)captureInitialDecomposedFragments;
- (double)captureInsertionDurationInComposition;
- (double)captureInsertionTimeInComposition;
- (id)capturedComposition;
- (id)capturedFragment;
- (id)destinationComposition;
- (id)destinationFragment;
- (double)duration;
- (double)finalCapturedFragmentDuration;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id)arg2;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 finalizedFragmentDuration:(double)arg2 completionBlock:(id)arg3;
- (void)flushPendingCapturedSampleBuffers;
- (id)initWithDestinationComposition:(id)arg1 destinationFragment:(id)arg2 isOverdub:(bool)arg3;
- (bool)isOverdub;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1;
- (bool)setPaused:(bool)arg1;
- (void)startLoading;
- (struct { double x1; double x2; })timeRangeToHighlight;
- (void)undoCapture;
- (double)updatedCapturedFragmentDuration;
- (bool)waitUntilFinished;
- (bool)waitUntilFinishedWithFinalizedDestinationFragmentDuration:(double)arg1;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (id)waveformSegmentsInTimeRange:(struct { double x1; double x2; })arg1;

@end