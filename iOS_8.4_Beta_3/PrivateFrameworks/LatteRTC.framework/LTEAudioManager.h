/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@interface LTEAudioManager : NSObject {
    bool _microphoneMuted;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } audioLock;
    int audioRefCount;
    int clientPID;
    struct opaqueCMSession { } *cmSession;
    NSObject<OS_dispatch_queue> *cmSessionQueue;
    int cmSessionRefCount;
    int connectionRefCount;
    NSString *currentAudioCategory;
    NSString *currentAudioMode;
    bool currentAudioRecordingMode;
    NSNumber *currentClientPriority;
    int currentMinSamplesPerFrame;
    bool currentReceiverStatus;
    int currentSampleRate;
    unsigned int currentVPOperatingMode;
    int deviceClass;
    bool enableSpeakerPhone;
    struct AudioEventQueue_t { } *eventQ;
    float fLastStartAudioSessionCall;
    struct tagHANDLE { int x1; } *hAUIO;
    int hardwareSampleRate;
    NSObject<OS_dispatch_queue> *inputDeviceQueue;
    bool isGKVoiceChat;
    bool isTetheredDisplayMode;
    bool isUsingSuppression;
    NSMutableArray *micConfList;
    unsigned int preferredHardwareSampleRate;
    NSDictionary *requestedSessionParams;
    bool shouldSetupAudioSession;
    NSMutableArray *spkrConfList;
    LTEAudioDevice *targetInputDevice;
    bool usingFloat;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } vpioFormat;
}

@property (nonatomic) int clientPID;
@property (getter=isSpeakerPhoneEnabled) bool enableSpeakerPhone;
@property (nonatomic) bool isGKVoiceChat;
@property (nonatomic) bool isUsingSuppression;
@property (getter=isMicrophoneMuted, nonatomic) bool microphoneMuted;
@property bool shouldSetupAudioSession;
@property (retain) LTEAudioDevice *targetInputDevice;
@property (nonatomic, readonly) bool usingFloat;

+ (id)defaultLTEAudioManager;

- (void)AUIOSetup:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1 minSamplesPerFrame:(int)arg2 allowAudioRecording:(bool)arg3 ignoreRefCount:(bool)arg4 remoteCodecType:(unsigned int)arg5 remoteCodecSampleRate:(double)arg6 completionHandler:(id)arg7;
- (void)AUIOTeardown:(bool)arg1;
- (void)addConference:(id)arg1;
- (void)audioSessionClientDied:(int)arg1;
- (unsigned int)blockSizeForSampleRate:(double)arg1;
- (void)cleanupAUIOSetupWithResult:(int)arg1 completionHandler:(id)arg2;
- (int)clientPID;
- (struct opaqueCMSession { }*)cmSessionRef;
- (id)currentInputDevice;
- (void)enableMetering:(bool)arg1 isInputMeter:(bool)arg2;
- (bool)forceBufferFrames:(int*)arg1;
- (bool)forceSampleRate:(double*)arg1;
- (void)getVpioFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)handleAudioInterruption:(struct opaqueCMSession { }*)arg1 interruptionInfo:(struct __CFDictionary { }*)arg2 cmd:(unsigned int)arg3;
- (id)init;
- (void)invalidateCurrentAudioParams;
- (bool)isGKVoiceChat;
- (bool)isMicrophoneMuted;
- (bool)isSpeakerPhoneEnabled;
- (bool)isUsingSuppression;
- (void)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned int)arg9;
- (void)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (unsigned int)preferredHardwareSampleRate;
- (void)processEventQueue;
- (bool)projectionModeEnabledState;
- (void)removeConference:(id)arg1;
- (void)resetAudioSessionProperties;
- (void)setAudioSessionParameters:(id)arg1;
- (void)setAudioSessionProperties;
- (void)setBlockSize:(bool)arg1;
- (void)setBlockSizeDispatch:(bool)arg1;
- (void)setClientPID:(int)arg1;
- (bool)setCurrentInputDevice:(id)arg1;
- (void)setEnableSpeakerPhone:(bool)arg1;
- (void)setIsGKVoiceChat:(bool)arg1;
- (void)setIsUsingSuppression:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setSampleRate;
- (void)setSamplesPerFrame:(int)arg1;
- (void)setShouldSetupAudioSession:(bool)arg1;
- (void)setTargetInputDevice:(id)arg1;
- (void)setupAudioNotifications;
- (unsigned long long)setupAudioSession;
- (void)setupVPBlockFormat;
- (bool)shouldSetupAudioSession;
- (void)startAudioIOWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; }*)arg1 minSamplesPerFrame:(int)arg2 internalFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3 allowAudioRecording:(bool)arg4 remoteCodecType:(unsigned int)arg5 remoteCodecSampleRate:(double)arg6 completionHandler:(id)arg7;
- (unsigned long long)startAudioSessionWithCompletionHandler:(id)arg1 dispatchQueue:(id)arg2;
- (void)stopAudioIOWithCompletionHandler:(id)arg1;
- (void)stopAudioSession:(unsigned long long)arg1;
- (id)targetInputDevice;
- (void)tearDownAudioIO:(bool)arg1 withCompletionHandler:(id)arg2;
- (void)tearDownAudioSession:(unsigned long long)arg1 forceTearDown:(bool)arg2;
- (bool)usingFloat;

@end
