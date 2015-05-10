/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioChannel_FigRecorder : NSObject {
    AVCaptureAudioChannelInternal_FigRecorder *_internal;
}

@property(assign,readonly) float averagePowerLevel;
@property(assign,readonly) float peakHoldLevel;

- (float)averagePowerLevel;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)isKindOfClass:(Class)arg1;
- (float)peakHoldLevel;

@end
