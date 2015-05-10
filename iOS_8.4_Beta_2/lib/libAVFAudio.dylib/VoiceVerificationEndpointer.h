/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface VoiceVerificationEndpointer : NSObject <Endpointer>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) double endWaitTime;
@property(assign,readwrite) int endpointMode;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) double interspeechWaitTime;
@property(assign,readwrite) double startWaitTime;
@property(assign,readonly) Class superclass;

- (bool)configureWithASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 andFrameRate:(unsigned int)arg2;
- (bool)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
- (void)dealloc;
- (double)endWaitTime;
- (int)endpointMode;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (id)init;
- (double)interspeechWaitTime;
- (void)reset;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(int)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (double)startWaitTime;

@end
