/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKVoiceController : NSObject <AVVoiceControllerRecordDelegate> {
    long long __activationMode;
    CKAudioAnalyzer *_audioAnalyzer;
    <CKVoiceControllerDelegate> *_delegate;
    NSObject<OS_dispatch_source> *_powerUpdateTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_recordSettings;
    AVVoiceController *_voiceController;
}

@property(setter=_setActivationMode:,assign,readwrite) long long _activationMode;
@property(assign,retain) CKAudioAnalyzer * audioAnalyzer;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CKVoiceControllerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSObject<OS_dispatch_source> * powerUpdateTimer;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;
@property(assign,copy) NSDictionary * recordSettings;
@property(assign,readonly) Class superclass;
@property(assign,retain) AVVoiceController * voiceController;

- (long long)_activationMode;
- (void)_setActivationMode:(long long)arg1;
- (id)audioAnalyzer;
- (void)dealloc;
- (id)delegate;
- (id)initWithActivationMode:(long long)arg1 recordSettings:(id)arg2 queue:(id)arg3;
- (void)messageSent:(id)arg1;
- (void)playAlertSoundForType:(int)arg1;
- (id)powerUpdateTimer;
- (id)queue;
- (void)record;
- (id)recordSettings;
- (void)releaseAudioSession;
- (void)setActivationMode:(long long)arg1;
- (void)setAudioAnalyzer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPowerUpdateTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecordSettings:(id)arg1;
- (void)setVoiceController:(id)arg1;
- (void)startUpdatingPower;
- (void)stop;
- (void)stopUpdatingPower;
- (id)voiceController;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(bool)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStopRecordingForClientError;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;

@end
