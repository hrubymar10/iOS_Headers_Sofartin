/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVMIDIPlayer : NSObject {
    void *_impl;
}

@property(assign,readwrite) double currentPosition;
@property(assign,readonly) double duration;
@property(getter=isPlaying,assign,readonly) bool playing;
@property(assign,readwrite) float rate;

- (double)beatsForHostTime:(unsigned long long)arg1;
- (double)currentPosition;
- (void)dealloc;
- (void)destroyBase;
- (double)duration;
- (void)finalize;
- (unsigned long long)hostTimeForBeats:(double)arg1;
- (struct MIDIPlayerImpl { struct OpaqueAUGraph {} *x1; struct OpaqueMusicPlayer {} *x2; struct OpaqueMusicSequence {} *x3; double x4; id x5; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x6; id x7; }*)impl;
- (id)initBase;
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3;
- (bool)isPlaying;
- (void)play:(id)arg1;
- (void)prepareToPlay;
- (float)rate;
- (void)setCurrentPosition:(double)arg1;
- (void)setRate:(float)arg1;
- (void)stop;

@end
