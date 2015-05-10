/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputHelper : NSObject {
    AVAssetWriterInputConfigurationState *_configurationState;
    AVWeakReference *_weakReferenceToAssetWriterInput;
}

@property(assign,readwrite) short alternateGroupID;
@property(assign,readonly) bool canPerformMultiplePasses;
@property(assign,readonly) AVAssetWriterInputConfigurationState * configurationState;
@property(assign,readonly) AVAssetWriterInputPassDescription * currentPassDescription;
@property(assign,readwrite) bool expectsMediaDataInRealTime;
@property(assign,copy) NSString * extendedLanguageTag;
@property(assign,copy) NSString * languageCode;
@property(assign,readwrite) long long layer;
@property(assign,readwrite) bool marksOutputTrackAsEnabled;
@property(assign,readwrite) int mediaTimeScale;
@property(assign,readonly) NSString * mediaType;
@property(assign,copy) NSArray * metadata;
@property(assign,readwrite) struct CGSize { double x1; double x2; } naturalSize;
@property(assign,readonly) AVOutputSettings * outputSettings;
@property(assign,readwrite) bool performsMultiPassEncodingIfSupported;
@property(assign,readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(assign,readwrite) long long preferredMediaChunkAlignment;
@property(assign,readwrite) struct { long long x1; int x2; unsigned int x3; long long x4; } preferredMediaChunkDuration;
@property(assign,readwrite) long long preferredMediaChunkSize;
@property(assign,readwrite) float preferredVolume;
@property(getter=isReadyForMoreMediaData,assign,readonly) bool readyForMoreMediaData;
@property(assign,copy) NSURL * sampleReferenceBaseURL;
@property(assign,readonly) bool shouldRespondToInitialPassDescription;
@property(assign,readonly) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(assign,copy) NSDictionary * sourcePixelBufferAttributes;
@property(assign,readonly) long long status;
@property(assign,readonly) int trackID;
@property(assign,readonly) NSDictionary * trackReferences;
@property(assign,readwrite) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property(assign,retain) AVWeakReference * weakReferenceToAssetWriterInput;

- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (short)alternateGroupID;
- (bool)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (id)availableTrackAssociationTypes;
- (bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (bool)canPerformMultiplePasses;
- (bool)canStartRespondingToEachPassDescriptionReturningReason:(id*)arg1;
- (id)configurationState;
- (id)currentPassDescription;
- (void)dealloc;
- (id)description;
- (void)didStartInitialSession;
- (bool)expectsMediaDataInRealTime;
- (id)extendedLanguageTag;
- (id)initWithConfigurationState:(id)arg1;
- (bool)isReadyForMoreMediaData;
- (id)languageCode;
- (long long)layer;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (bool)marksOutputTrackAsEnabled;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadata;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)outputSettings;
- (bool)performsMultiPassEncodingIfSupported;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (long long)preferredMediaChunkAlignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (long long)preferredMediaChunkSize;
- (float)preferredVolume;
- (void)prepareToEndSession;
- (bool)prepareToFinishWritingReturningError:(id*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (id)sampleReferenceBaseURL;
- (void)setAlternateGroupID:(short)arg1;
- (void)setExpectsMediaDataInRealTime:(bool)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLayer:(long long)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPerformsMultiPassEncodingIfSupported:(bool)arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWeakReferenceToAssetWriterInput:(id)arg1;
- (bool)shouldRespondToInitialPassDescription;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)sourcePixelBufferAttributes;
- (long long)status;
- (int)trackID;
- (id)trackReferences;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg1;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;
- (id)weakReferenceToAssetWriterInput;

@end
