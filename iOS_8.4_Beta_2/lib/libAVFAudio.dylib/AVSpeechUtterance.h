/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding> {
    float _pitchMultiplier;
    double _postUtteranceDelay;
    double _preUtteranceDelay;
    float _rate;
    NSString *_speechString;
    AVSpeechSynthesisVoice *_voice;
    float _volume;
}

@property(assign,readwrite) float pitchMultiplier;
@property(assign,readwrite) double postUtteranceDelay;
@property(assign,readwrite) double preUtteranceDelay;
@property(assign,readwrite) bool processEmoticons;
@property(assign,readwrite) float rate;
@property(assign,retain) NSString * speechString;
@property(assign,readwrite) bool useCompactVoice;
@property(assign,retain) AVSpeechSynthesisVoice * voice;
@property(assign,readwrite) float volume;

+ (void)initialize;
+ (id)speechUtteranceWithString:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (float)pitchMultiplier;
- (double)postUtteranceDelay;
- (double)preUtteranceDelay;
- (bool)processEmoticons;
- (float)rate;
- (void)setPitchMultiplier:(float)arg1;
- (void)setPostUtteranceDelay:(double)arg1;
- (void)setPreUtteranceDelay:(double)arg1;
- (void)setProcessEmoticons:(bool)arg1;
- (void)setRate:(float)arg1;
- (void)setSpeechString:(id)arg1;
- (void)setUseCompactVoice:(bool)arg1;
- (void)setVoice:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)speechString;
- (bool)useCompactVoice;
- (id)voice;
- (float)volume;

@end
