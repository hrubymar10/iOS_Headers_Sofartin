/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAVConferenceInterface : NSObject <AVConferenceDelegate> {
    NSMutableArray *_activeConferenceConnections;
    long long _callID;
    AVConference *_conference;
    bool _hasActiveConference;
}

@property (nonatomic, retain) NSMutableArray *activeConferenceConnections;
@property (nonatomic) long long callID;
@property (nonatomic, retain) AVConference *conference;
@property (nonatomic) bool hasActiveConference;

+ (id)sharedInstance;

- (void)_cleanUpAllConferenceConnectionsWithError:(id)arg1;
- (void)_cleanUpConference;
- (void)_cleanUpConferenceConnection:(id)arg1 error:(id)arg2;
- (id)_conferenceConnectionForIdentifier:(id)arg1;
- (void)_endConference:(bool)arg1;
- (void)_setUpDidStartTimeoutForConference:(id)arg1 conferenceConnection:(id)arg2;
- (bool)_shouldIgnoreAVConferenceError:(id)arg1;
- (void)_startAudioSession;
- (void)_startConferenceForConferenceConnection:(id)arg1 withSocket:(int)arg2;
- (void)_stopAudioSession;
- (id)activeConferenceConnections;
- (long long)callID;
- (id)conference;
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 closeConnectionForCallID:(long long)arg2;
- (void)conference:(id)arg1 didStartSession:(bool)arg2 withUserInfo:(id)arg3;
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;
- (void)conference:(id)arg1 remoteAudioPaused:(bool)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteVideoPaused:(bool)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(bool)arg3 isRemote:(bool)arg4;
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(bool)arg3;
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(bool)arg3;
- (void)dealloc;
- (bool)hasActiveConference;
- (id)init;
- (bool)isMutedForIdentifier:(id)arg1;
- (bool)isSendingAudioForIdentifier:(id)arg1;
- (void)serverDiedForConference:(id)arg1;
- (void)setActiveConferenceConnections:(id)arg1;
- (void)setCallID:(long long)arg1;
- (void)setConference:(id)arg1;
- (void)setHasActiveConference:(bool)arg1;
- (void)setMuted:(bool)arg1 forIdentifier:(id)arg2;
- (void)setSendingAudio:(bool)arg1 forIdentifier:(id)arg2;
- (void)startConferenceForIdentifier:(id)arg1 withSocket:(int)arg2 asHost:(bool)arg3 didStartHandler:(id)arg4 didStopHandler:(id)arg5;
- (void)stopConferenceForIdentifier:(id)arg1;

@end
