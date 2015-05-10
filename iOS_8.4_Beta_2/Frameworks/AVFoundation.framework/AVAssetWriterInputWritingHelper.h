/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate> {
    AVFigAssetWriterTrack *_assetWriterTrack;
    AVAssetWriterInputPassDescription *_currentPassDescription;
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
}

@property(getter=_assetWriterTrack,assign,readonly) AVFigAssetWriterTrack * assetWriterTrack;
@property(assign,retain) AVAssetWriterInputPassDescription * currentPassDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;

- (id)_assetWriterTrack;
- (void)_attachToMediaDataRequester:(id)arg1;
- (void)_detachFromMediaDataRequester:(id)arg1;
- (void)_nudgeMediaDataRequesterIfAppropriate;
- (bool)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)beginPassIfAppropriate;
- (bool)canPerformMultiplePasses;
- (id)currentPassDescription;
- (void)dealloc;
- (void)didStartInitialSession;
- (void)finalize;
- (id)initWithConfigurationState:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id*)arg3;
- (bool)isReadyForMoreMediaData;
- (void)markAsFinished;
- (void)markAsFinishedAndTransitionCurrentHelper:(id)arg1;
- (void)markCurrentPassAsFinished;
- (bool)mediaDataRequesterShouldRequestMediaData:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)prepareToEndSession;
- (bool)prepareToFinishWritingReturningError:(id*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (void)setCurrentPassDescription:(id)arg1;
- (long long)status;
- (int)trackID;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;

@end
