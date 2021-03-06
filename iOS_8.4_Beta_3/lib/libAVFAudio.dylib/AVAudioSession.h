/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioSession : NSObject {
    void *_impl;
}

@property (readonly) NSArray *availableInputs;
@property (readonly) NSString *category;
@property (readonly) unsigned long long categoryOptions;
@property (readonly) AVAudioSessionRouteDescription *currentRoute;
@property (readonly) NSString *mode;
@property (getter=isOtherAudioPlaying, readonly) bool otherAudioPlaying;
@property (readonly) AVAudioSessionPortDescription *preferredInput;
@property (readonly) bool secondaryAudioShouldBeSilencedHint;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)privateAllocInitSingleton;
+ (id)sharedInstance;

- (double)IOBufferDuration;
- (unsigned long long)IOBufferFrameSize;
- (bool)allowAllBuiltInDataSources;
- (long long)audioFormat;
- (id)audioFormats;
- (id)autorelease;
- (id)availableInputs;
- (id)category;
- (unsigned long long)categoryOptions;
- (bool)clearInputPreferences:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentHardwareInputNumberOfChannels;
- (long long)currentHardwareOutputNumberOfChannels;
- (double)currentHardwareSampleRate;
- (id)currentRoute;
- (id)delegate;
- (bool)fixHardwareFormatToMultiChannel:(bool)arg1 error:(id*)arg2;
- (bool)forceSoundCheck;
- (id)init;
- (id)inputDataSource;
- (id)inputDataSources;
- (float)inputGain;
- (bool)inputIsAvailable;
- (double)inputLatency;
- (long long)inputNumberOfChannels;
- (double)inputSafetyOffset;
- (bool)isEarpieceActiveNoiseCancelationEnabled;
- (bool)isHardwareFormatFixedToMultiChannel;
- (bool)isInputAvailable;
- (bool)isInputGainSettable;
- (bool)isOtherAudioPlaying;
- (long long)maximumInputNumberOfChannels;
- (long long)maximumOutputNumberOfChannels;
- (id)mode;
- (unsigned int)opaqueSessionID;
- (id)outputDataSource;
- (id)outputDataSources;
- (double)outputLatency;
- (long long)outputNumberOfChannels;
- (double)outputSafetyOffset;
- (float)outputVolume;
- (bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id*)arg2;
- (double)preferredHardwareSampleRate;
- (double)preferredIOBufferDuration;
- (unsigned long long)preferredIOBufferFrameSize;
- (id)preferredInput;
- (long long)preferredInputNumberOfChannels;
- (long long)preferredOutputNumberOfChannels;
- (double)preferredSampleRate;
- (void)privateBeginInterruption;
- (id)privateConfigureRouteDescription:(id)arg1;
- (void)privateEndInterruptionWithFlags:(id)arg1;
- (id)privateGetDataSources:(bool)arg1;
- (struct AVAudioSessionImpl { struct GenericRunLoopThread {} *x1; id x2; id x3; struct KVOProperty<float> { int (**x_4_1_1)(); float x_4_1_2; bool x_4_1_3; id x_4_1_4; } x4; struct KVOProperty<float> { int (**x_5_1_1)(); float x_5_1_2; bool x_5_1_3; id x_5_1_4; } x5; struct KVONSArrayProperty { int (**x_6_1_1)(); id x_6_1_2; bool x_6_1_3; id x_6_1_4; } x6; struct KVONSArrayProperty { int (**x_7_1_1)(); id x_7_1_2; bool x_7_1_3; id x_7_1_4; } x7; struct KVOProperty<unsigned int> { int (**x_8_1_1)(); unsigned int x_8_1_2; bool x_8_1_3; id x_8_1_4; } x8; struct KVONSObjectProperty<NSArray *> { int (**x_9_1_1)(); id x_9_1_2; bool x_9_1_3; id x_9_1_4; } x9; struct KVOProperty<unsigned int> { int (**x_10_1_1)(); unsigned int x_10_1_2; bool x_10_1_3; id x_10_1_4; } x10; id x11; bool x12; struct KVOProperty<unsigned int> { int (**x_13_1_1)(); unsigned int x_13_1_2; bool x_13_1_3; id x_13_1_4; } x13; struct KVOProperty<unsigned int> { int (**x_14_1_1)(); unsigned int x_14_1_2; bool x_14_1_3; id x_14_1_4; } x14; unsigned int x15; }*)privateGetImplementation;
- (id)privateGetSelectedDataSource:(bool)arg1;
- (void)privateHandleFormatChange:(id)arg1;
- (void)privateHandleFormatsChange:(id)arg1;
- (void)privateHandleInputChannelCount:(id)arg1;
- (void)privateHandleInputDataSourcesChange:(id)arg1;
- (void)privateHandleInputGainChange:(id)arg1;
- (void)privateHandleOutputChannelCount:(id)arg1;
- (void)privateHandleOutputDataSourcesChange:(id)arg1;
- (void)privateHandleOutputVolumeChange:(id)arg1;
- (void)privateHandlePromptStyleChange:(id)arg1;
- (void)privateHandleSecondaryAudioHintChange:(id)arg1;
- (void)privateHandleServerDied;
- (void)privateHandleServerReturned;
- (void)privateInputIsAvailableChanged:(id)arg1;
- (void)privateMarkKVOPropertiesDirty:(unsigned long long)arg1;
- (id)privateRefreshAvailableInputs;
- (bool)privateSetPropertyValue:(unsigned int)arg1 withBool:(bool)arg2 error:(id*)arg3;
- (void)privateUpdateAudioFormat:(id)arg1;
- (void)privateUpdateAudioFormats:(id)arg1;
- (void)privateUpdateDataSources:(id)arg1 forInput:(bool)arg2;
- (void)privateUpdateInputChannelCount:(id)arg1;
- (void)privateUpdateInputGain:(id)arg1;
- (void)privateUpdateOutputChannelCount:(id)arg1;
- (void)privateUpdateOutputVolume:(id)arg1;
- (void)privateUpdatePromptStyle:(id)arg1;
- (unsigned long long)promptStyle;
- (unsigned long long)recordPermission;
- (oneway void)release;
- (void)requestRecordPermission:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (double)sampleRate;
- (bool)secondaryAudioShouldBeSilencedHint;
- (bool)setActivationContext:(id)arg1 error:(id*)arg2;
- (bool)setActive:(bool)arg1 error:(id*)arg2;
- (bool)setActive:(bool)arg1 withFlags:(long long)arg2 error:(id*)arg3;
- (bool)setActive:(bool)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;
- (void)setAllowAllBuiltInDataSources:(bool)arg1;
- (bool)setCategory:(id)arg1 error:(id*)arg2;
- (bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;
- (bool)setDefaultChatMode:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setForceSoundCheck:(bool)arg1 error:(id*)arg2;
- (bool)setIAmTheAssistant:(bool)arg1 error:(id*)arg2;
- (bool)setInputDataSource:(id)arg1 error:(id*)arg2;
- (bool)setInputGain:(float)arg1 error:(id*)arg2;
- (bool)setMode:(id)arg1 error:(id*)arg2;
- (bool)setOutputDataSource:(id)arg1 error:(id*)arg2;
- (bool)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2;
- (bool)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2;
- (bool)setPreferredIOBufferFrameSize:(unsigned long long)arg1 error:(id*)arg2;
- (bool)setPreferredInput:(id)arg1 error:(id*)arg2;
- (bool)setPreferredInputNumberOfChannels:(long long)arg1 error:(id*)arg2;
- (bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id*)arg2;
- (bool)setPreferredSampleRate:(double)arg1 error:(id*)arg2;
- (bool)silenceOutput:(unsigned long long)arg1 error:(id*)arg2;
- (double)speechDetectionDeviceSampleRate;

@end
