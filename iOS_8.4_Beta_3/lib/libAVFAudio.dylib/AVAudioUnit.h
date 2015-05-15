/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnit : AVAudioNode

@property (nonatomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } audioComponentDescription;
@property (nonatomic, readonly) struct OpaqueAudioComponentInstance { }*audioUnit;
@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long version;

- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })audioComponentDescription;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (bool)loadAudioUnitPresetAtURL:(id)arg1 error:(id*)arg2;
- (id)manufacturerName;
- (id)name;
- (bool)setValue:(float)arg1 forParam:(unsigned int)arg2;
- (float)valueForParam:(unsigned int)arg1;
- (unsigned long long)version;

@end
