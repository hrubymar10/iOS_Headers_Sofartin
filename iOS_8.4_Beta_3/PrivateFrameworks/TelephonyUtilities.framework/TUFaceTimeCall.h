/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUFaceTimeCall : TUCall {
    IMAVChat *_chat;
}

@property(assign,retain) IMAVChat * chat;

+ (id)sourceAccount:(bool)arg1;

- (void)answerWithSourceIdentifier:(id)arg1;
- (double)callDuration;
- (id)callHistoryIdentifier;
- (int)callIdentifier;
- (id)callUUID;
- (id)callerNameFromNetwork;
- (id)chat;
- (id)conferenceIdentifier;
- (id)conferenceInviteDictionary;
- (void)dealloc;
- (id)destinationID;
- (void)disconnect;
- (int)endedError;
- (unsigned int)endedReason;
- (int)faceTimeIDStatus;
- (id)initWithChat:(id)arg1;
- (void)inviteWithCallIdentifier:(int)arg1;
- (bool)isAlerting;
- (bool)isBlocked;
- (bool)isConferenced;
- (bool)isDownlinkMuted;
- (bool)isEqual:(id)arg1;
- (bool)isOutgoing;
- (bool)isSendingAudio;
- (bool)isStatusFinal;
- (bool)isTTY;
- (bool)isUplinkMuted;
- (void)joinConference;
- (void)leaveConference;
- (id)localFrequency;
- (float)localVolume;
- (bool)managesAudioInterruptions;
- (bool)managesAudioRelay;
- (bool)needsManualInCallSounds;
- (bool)playsConnectedSound;
- (id)remoteFrequency;
- (id)remoteParticipant;
- (id)remoteUnavailableUserInfo;
- (void)resetWantsHoldMusic;
- (void)setChat:(id)arg1;
- (bool)setDownlinkMuted:(bool)arg1;
- (void)setIsSendingAudio:(bool)arg1;
- (bool)setUplinkMuted:(bool)arg1;
- (bool)shouldPlayDTMFTone;
- (bool)shouldPlayHoldMusic;
- (double)startTime;
- (id)totalDataUsed;
- (void)updateForDisconnection;
- (bool)wasDeclined;

@end