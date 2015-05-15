/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioPCMBuffer : AVAudioBuffer

@property(assign,readonly) float** floatChannelData;
@property(assign,readonly) unsigned int frameCapacity;
@property(assign,readwrite) unsigned int frameLength;
@property(assign,readonly) short** int16ChannelData;
@property(assign,readonly) int** int32ChannelData;
@property(assign,readonly) unsigned long long stride;

- (void)_initChannelPtrs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float**)floatChannelData;
- (unsigned int)frameCapacity;
- (unsigned int)frameLength;
- (id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned int)arg2;
- (short**)int16ChannelData;
- (int**)int32ChannelData;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setFrameLength:(unsigned int)arg1;
- (unsigned long long)stride;

@end
