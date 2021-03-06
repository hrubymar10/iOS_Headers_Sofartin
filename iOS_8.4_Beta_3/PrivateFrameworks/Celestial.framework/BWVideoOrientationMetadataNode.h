/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoOrientationMetadataNode : BWNode <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> {
    struct OpaqueCMBlockBuffer {} *_bbufCache;
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    struct OpaqueCMClock { } *_clock;
    BWDeviceOrientationMonitor *_deviceOrientationMonitor;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
    unsigned int _localIDOfOrientationMetadata;
    struct OpaqueCMClock { } *_masterClock;
    int _mostRecentDevicePortraitLandscapeOrientation;
    bool _recording;
    int _sourcePosition;
    NSMutableArray *_transforms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_queueUpCallToEmitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 markerBufferOrFirstSample:(bool)arg2;
- (void)_releaseTransformData;
- (void)_renderSampleBufferForBoxedFormatOutputAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 orientation:(int)arg2 firstSample:(bool)arg3;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didUpdatePortraitLandscapeOrientation:(int)arg1;
- (id)init;
- (struct OpaqueCMClock { }*)masterClock;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setSourcePosition:(int)arg1;
- (int)sourcePosition;

@end
