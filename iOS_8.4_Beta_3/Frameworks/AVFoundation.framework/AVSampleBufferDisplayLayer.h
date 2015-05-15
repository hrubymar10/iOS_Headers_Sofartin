/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSampleBufferDisplayLayer : CALayer <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRendering, AVQueuedSampleBufferRenderingInternal> {
    AVSampleBufferDisplayLayerInternal *_sampleBufferDisplayLayerInternal;
}

@property(assign,retain) struct OpaqueCMTimebase { }* controlTimebase;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSError * error;
@property(assign,readonly) NSError * error;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) bool outputObscuredDueToInsufficientExternalProtection;
@property(getter=isReadyForMoreMediaData,assign,readonly) bool readyForMoreMediaData;
@property(getter=isReadyForMoreMediaData,assign,readonly) bool readyForMoreMediaData;
@property(assign,readonly) long long status;
@property(assign,readonly) long long status;
@property(assign,readonly) Class superclass;
@property(assign,readonly) Class superclass;
@property(assign,retain) struct OpaqueCMTimebase { }* timebase;
@property(assign,copy) NSString * videoGravity;

+ (bool)automaticallyNotifiesObserversOfError;
+ (bool)automaticallyNotifiesObserversOfStatus;

- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 gravity:(id)arg3;
- (void)_addFigVideoQueueListeners;
- (int)_createVideoQueue;
- (void)_didFinishSuspension:(id)arg1;
- (void)_forBoundsAnimations:(id)arg1 applyBlock:(id)arg2;
- (int)_initializeTimebases;
- (void)_refreshAboveHighWaterLevel;
- (void)_removeFigVideoQueueListeners;
- (void)_resetStatusWithOSStatus:(int)arg1;
- (void)_setControlTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_setOutputObscuredDueToInsufficientExternalProtection:(bool)arg1;
- (void)_setStatus:(long long)arg1 error:(id)arg2;
- (void)_setSynchronizerTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (id)_transformToAbsoluteAnimationOfBounds:(id)arg1;
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 presentationSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_updatePresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_weakReference;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (struct OpaqueCMTimebase { }*)controlTimebase;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer {}**)arg1;
- (void)dealloc;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)error;
- (void)finalize;
- (void)flush;
- (void)flushAndRemoveImage;
- (id)init;
- (bool)isReadyForMoreMediaData;
- (bool)outputObscuredDueToInsufficientExternalProtection;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setControlTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (bool)setRenderSynchronizer:(id)arg1;
- (void)setVideoGravity:(id)arg1;
- (long long)status;
- (void)stopRequestingMediaData;
- (struct OpaqueCMTimebase { }*)timebase;
- (id)videoGravity;
- (id)videoPerformanceMetrics;

@end