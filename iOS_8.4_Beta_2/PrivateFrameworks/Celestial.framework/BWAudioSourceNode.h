/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAudioSourceNode : BWSourceNode {
    struct opaqueCMSession { } *_CMSession;
    struct opaqueCMSimpleQueue { } *_activeBuffersQueue;
    unsigned int _auSubType;
    int _audioLevelUnits;
    struct OpaqueAudioComponentInstance { } *_audioUnit;
    struct { 
        unsigned int val[8]; 
    } _clientAuditToken;
    bool _clientAuditTokenIsValid;
    int _clientPID;
    struct OpaqueCMClock { } *_clock;
    bool _configuresSession;
    bool _didBeginInterruption;
    struct opaqueCMFormatDescription { } *_formatDescription;
    NSObject<OS_dispatch_queue> *_generateSamplesDispatchQueue;
    struct opaqueCMSimpleQueue { } *_inactiveBuffersQueue;
    bool _isAppAudioSession;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _latencyOffset;
    bool _levelMeteringEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _nextExpectedSampleTime;
    unsigned int _pullDuration;
    struct opaqueCMSimpleQueue { } *_renderProcErrorQueue;
    bool _selectsMicForFrontCamera;
    bool _streamInterrupted;
    bool _streamStarted;
    bool _usesVideoCMSessionAudioMode;
}

@property(assign,readonly) NSArray * audioLevels;
@property(assign,readwrite) bool interrupted;
@property(assign,readwrite) bool levelMeteringEnabled;
@property(assign,readwrite) bool selectsMicForFrontCamera;
@property(assign,readwrite) bool usesVideoCMSessionAudioMode;

+ (double)_desiredSampleRate;
+ (void)initialize;

- (unsigned int)_audioCombinedLatency;
- (int)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1;
- (struct opaqueCMSampleBuffer { }*)_createSampleBufferForBufferTimestampedAudioBufferList:(struct TimestampedAudioBufferList { struct __CFAllocator {} *x1; unsigned int x2; unsigned int x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct AudioBufferList {} *x5; unsigned int x6; }*)arg1;
- (int)_generatePullBuffers;
- (void)_generateSamples;
- (int)_getAudioDevicePullFrames:(unsigned int*)arg1;
- (int)_selectMicForAudioRoute:(id)arg1;
- (int)_setCMSessionAudioModeAndSelectMic;
- (int)_setCMSessionPropertyWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (int)_setupAudioUnit;
- (int)_updatePullFormatDescription;
- (id)audioLevels;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (bool)hasNonLiveConfigurationChanges;
- (id)initWithCMSession:(struct opaqueCMSession { }*)arg1 configureSession:(bool)arg2 clientToken:(id)arg3 clientPID:(int)arg4;
- (bool)interrupted;
- (bool)levelMeteringEnabled;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (bool)selectsMicForFrontCamera;
- (void)setInterrupted:(bool)arg1;
- (void)setLevelMeteringEnabled:(bool)arg1;
- (void)setSelectsMicForFrontCamera:(bool)arg1;
- (void)setUsesVideoCMSessionAudioMode:(bool)arg1;
- (bool)start:(id*)arg1;
- (bool)stop:(id*)arg1;
- (bool)usesVideoCMSessionAudioMode;

@end
