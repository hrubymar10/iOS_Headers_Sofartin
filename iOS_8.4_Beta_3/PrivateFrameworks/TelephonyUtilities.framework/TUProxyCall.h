/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUProxyCall : TUCall <NSSecureCoding> {
    int _callIdentifier;
    NSString *_callerNameFromNetwork;
    NSString *_conferenceIdentifier;
    bool _conferenced;
    NSString *_destinationID;
    bool _outgoing;
    int _service;
    double _startTime;
    int _status;
    bool _voicemail;
}

@property(assign,readwrite) int callIdentifier;
@property(assign,copy) NSString * callerNameFromNetwork;
@property(assign,retain) NSString * conferenceIdentifier;
@property(getter=isConferenced,assign,readwrite) bool conferenced;
@property(assign,copy) NSString * destinationID;
@property(assign,copy) NSString * displayName;
@property(getter=isOutgoing,assign,readwrite) bool outgoing;
@property(assign,readwrite) int service;
@property(assign,readwrite) double startTime;
@property(assign,readwrite) int status;
@property(getter=isVoicemail,assign,readwrite) bool voicemail;

+ (bool)supportsSecureCoding;

- (void)answerWithSourceIdentifier:(id)arg1;
- (id)audioCategory;
- (id)audioMode;
- (double)callDuration;
- (int)callIdentifier;
- (id)callUUID;
- (id)callerNameFromNetwork;
- (id)conferenceIdentifier;
- (void)dealloc;
- (id)destinationID;
- (void)disconnect;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)hold;
- (id)initWithCall:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationID:(id)arg1 service:(int)arg2 status:(int)arg3 sourceIdentifier:(id)arg4 outgoing:(bool)arg5 conferenceIdentifier:(id)arg6 voicemail:(bool)arg7 callerNameFromNetwork:(id)arg8;
- (bool)isConferenced;
- (bool)isDownlinkMuted;
- (bool)isEqual:(id)arg1;
- (bool)isHostedOnCurrentDevice;
- (bool)isOutgoing;
- (bool)isSendingAudio;
- (bool)isUplinkMuted;
- (bool)isVoicemail;
- (void)joinConference;
- (void)leaveConference;
- (id)localFrequency;
- (bool)managesAudioInterruptions;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (id)remoteFrequency;
- (int)service;
- (void)setCallIdentifier:(int)arg1;
- (void)setCallerNameFromNetwork:(id)arg1;
- (void)setConferenceIdentifier:(id)arg1;
- (void)setConferenced:(bool)arg1;
- (void)setDestinationID:(id)arg1;
- (bool)setDownlinkMuted:(bool)arg1;
- (void)setIsSendingAudio:(bool)arg1;
- (void)setOutgoing:(bool)arg1;
- (void)setService:(int)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStatus:(int)arg1;
- (bool)setUplinkMuted:(bool)arg1;
- (void)setVoicemail:(bool)arg1;
- (double)startTime;
- (int)status;
- (int)supportedModelType;
- (bool)supportsRelayingAudioOrVideo;
- (bool)supportsRelayingCallState;
- (void)unhold;
- (void)updateWithCall:(id)arg1;

@end
