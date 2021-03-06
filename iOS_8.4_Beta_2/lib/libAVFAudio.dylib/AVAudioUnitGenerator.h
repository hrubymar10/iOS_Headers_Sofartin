/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitGenerator : AVAudioUnit <AVAudioMixing>

@property(assign,readwrite) bool bypass;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) float volume;

- (bool)bypass;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (void)setBypass:(bool)arg1;

@end
