/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioSystemController : TUAudioController {
    NSObject<OS_dispatch_queue> *_downlinkMutedQueue;
    NSNumber *_isDownlinkMutedCached;
    bool _isRequestingDownlinkMuted;
    bool _isRequestingPickableRoutesForPhoneCall;
    bool _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    bool _isRequestingPickableRoutesForPlayAndRecordVideo;
    bool _isRequestingPickableRoutesForPlayAndRecordVoice;
    bool _isRequestingPickableRoutesForTTY;
    bool _isRequestingTTY;
    bool _isRequestingUplinkMuted;
    NSNumber *_isTTYCached;
    NSNumber *_isUplinkMutedCached;
    unsigned long long _lastDownlinkMutedRequestScheduleTime;
    unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
    unsigned long long _lastTTYPickableRoutesScheduleTime;
    unsigned long long _lastTTYRequestScheduleTime;
    unsigned long long _lastUplinkMutedRequestScheduleTime;
    NSArray *_pickableRoutesForPhoneCall;
    NSArray *_pickableRoutesForPlayAndRecordRemoteVoice;
    NSArray *_pickableRoutesForPlayAndRecordVideo;
    NSArray *_pickableRoutesForPlayAndRecordVoice;
    NSArray *_pickableRoutesForTTY;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSObject<OS_dispatch_queue> *_ttyQueue;
    NSObject<OS_dispatch_queue> *_uplinkMutedQueue;
}

+ (id)sharedAudioSystemController;
+ (id)sharedSystemController;

- (void)_handleCallStatusChanged;
- (void)_handleDownlinkMuteDidChangeNotification:(id)arg1;
- (void)_handleUplinkMuteDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (id)_pickableRoutesForPhoneCallWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(bool)arg1;
- (id)_pickableRoutesForTTYWithForceNewRequest:(bool)arg1;
- (void)dealloc;
- (id)init;
- (bool)isDownlinkMuted;
- (bool)isTTY;
- (bool)isUplinkMuted;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)pickableRoutesForFaceTimeAudioCategory;
- (id)pickableRoutesForFaceTimeVideoCategory;
- (id)pickableRoutesForPhoneCallCategory;
- (id)pickableRoutesForTTY;
- (bool)setDownlinkMuted:(bool)arg1;
- (bool)setUplinkMuted:(bool)arg1;

@end