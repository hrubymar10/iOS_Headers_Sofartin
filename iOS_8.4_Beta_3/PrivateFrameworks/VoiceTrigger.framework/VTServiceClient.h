/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
}

- (void).cxx_destruct;
- (id)_service;
- (void)dealloc;
- (void)enableVoiceTrigger:(bool)arg1 withAssertion:(id)arg2;
- (void)feedbackWithReason:(unsigned char)arg1 atTime:(double)arg2;
- (void)getSiriLanguageCode:(id)arg1;
- (id)init;
- (void)reportEventWithAudioFile:(id)arg1 metaDataFile:(id)arg2;
- (void)resetAssertions;
- (void)suggestVoiceTriggerThreshold:(long long)arg1 withReason:(id)arg2;

@end