/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVChatProxy : NSObject {
    NSDictionary *_info;
}

@property(assign,retain) NSString * GUID;
@property(assign,readonly) long long callID;
@property(assign,retain) NSString * conferenceID;
@property(assign,readwrite) double connectionTimeoutTime;
@property(assign,retain) NSNumber * dataDownloaded;
@property(assign,retain) NSNumber * dataUploaded;
@property(assign,retain) NSDate * dateConnected;
@property(assign,retain) NSDate * dateEnded;
@property(assign,readonly) int endedError;
@property(assign,readonly) unsigned int endedReason;
@property(assign,readonly) bool hasAudioInterruption;
@property(assign,readonly) bool hasReceivedFirstFrame;
@property(assign,retain) IMHandle * initiatorIMHandle;
@property(assign,readwrite) double invitationTimeoutTime;
@property(assign,readonly) bool isActive;
@property(assign,readonly) bool isCaller;
@property(setter=setMute:,assign,readwrite) bool isMute;
@property(assign,readwrite) bool isSendingAudio;
@property(assign,readonly) bool isStateFinal;
@property(assign,readonly) bool isVideo;
@property(assign,retain) IMHandle * otherIMHandle;
@property(assign,retain) NSArray * remoteParticipants;
@property(assign,readonly) unsigned int sessionID;
@property(assign,readonly) unsigned int state;

- (id)GUID;
- (bool)_isProxy;
- (void)acceptInvitation;
- (void)acceptInvitationWithHoldMusic;
- (id)account;
- (long long)callID;
- (void)cancelInvitation;
- (id)conferenceID;
- (double)connectionTimeoutTime;
- (id)dataDownloaded;
- (id)dataUploaded;
- (id)dateConnected;
- (id)dateEnded;
- (void)dealloc;
- (void)declineInvitation;
- (id)description;
- (void)endChat;
- (int)endedError;
- (unsigned int)endedReason;
- (void)finalUpdate;
- (void)forwardInvocation:(id)arg1;
- (bool)hasAudioInterruption;
- (bool)hasReceivedFirstFrame;
- (id)initiatorIMHandle;
- (double)invitationTimeoutTime;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)inviteAll;
- (bool)isActive;
- (bool)isCaller;
- (bool)isMute;
- (bool)isSendingAudio;
- (bool)isStateFinal;
- (bool)isVideo;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)otherIMHandle;
- (id)remoteParticipants;
- (unsigned int)sessionID;
- (void)setConnectionTimeoutTime:(double)arg1;
- (void)setInvitationTimeoutTime:(double)arg1;
- (void)setIsSendingAudio:(bool)arg1;
- (void)setMute:(bool)arg1;
- (unsigned int)state;
- (void)updateWithInfo:(id)arg1;

@end
