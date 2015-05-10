/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioRecorder : NSObject {
    void *_impl;
}

@property(assign,copy) NSArray * channelAssignments;
@property(assign,readonly) double currentTime;
@property(assign,readwrite) <AVAudioRecorderDelegate> * delegate;
@property(assign,readonly) double deviceCurrentTime;
@property(getter=isMeteringEnabled,assign,readwrite) bool meteringEnabled;
@property(getter=isRecording,assign,readonly) bool recording;
@property(assign,readonly) NSDictionary * settings;
@property(assign,readonly) NSURL * url;

- (float)averagePowerForChannel:(unsigned long long)arg1;
- (id)baseInit;
- (void)beginInterruption;
- (id)channelAssignments;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (bool)deleteRecording;
- (double)deviceCurrentTime;
- (void)endInterruption;
- (void)endInterruptionWithFlags;
- (void)finalize;
- (void)finishedRecording;
- (struct AudioRecorderImpl { id x1; id x2; id x3; id x4; id x5; unsigned int x6; struct AudioStreamBasicDescription { double x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned int x_7_1_7; unsigned int x_7_1_8; unsigned int x_7_1_9; } x7; struct OpaqueAudioFileID {} *x8; struct OpaqueAudioQueue {} *x9; long long x10; long long x11; long long x12; double x13; double x14; double x15; unsigned long long x16; char *x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; struct AudioQueueLevelMeterState {} *x25; struct AudioQueueBuffer {} *x26[4]; struct AudioQueueBuffer {} *x27; bool x28; unsigned long long x29; bool x30; }*)impl;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (bool)isMeteringEnabled;
- (bool)isRecording;
- (void)pause;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (bool)prepareToRecord;
- (void)privCommonCleanup;
- (bool)record;
- (bool)recordAtTime:(double)arg1;
- (bool)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (bool)recordForDuration:(double)arg1;
- (void)setChannelAssignments:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMeteringEnabled:(bool)arg1;
- (id)settings;
- (void)stop;
- (void)updateMeters;
- (id)url;

@end
