/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPParticipant : PBCodable <NSCopying> {
    CKDPContactInformation *_contactInformation;
    bool _createdOutOfProcess;
    struct { 
        unsigned int participantType : 1; 
        unsigned int permission : 1; 
        unsigned int state : 1; 
        unsigned int createdOutOfProcess : 1; 
    } _has;
    CKDPIdentifier *_inviterId;
    CKDPIdentifier *_participantId;
    int _participantType;
    int _permission;
    CKDPProtectionInfo *_publicKey;
    int _state;
    CKDPIdentifier *_userId;
}

@property (nonatomic, retain) CKDPContactInformation *contactInformation;
@property (nonatomic) bool createdOutOfProcess;
@property (nonatomic, readonly) bool hasContactInformation;
@property (nonatomic) bool hasCreatedOutOfProcess;
@property (nonatomic, readonly) bool hasInviterId;
@property (nonatomic, readonly) bool hasParticipantId;
@property (nonatomic) bool hasParticipantType;
@property (nonatomic) bool hasPermission;
@property (nonatomic, readonly) bool hasPublicKey;
@property (nonatomic) bool hasState;
@property (nonatomic, readonly) bool hasUserId;
@property (nonatomic, retain) CKDPIdentifier *inviterId;
@property (nonatomic, retain) CKDPIdentifier *participantId;
@property (nonatomic) int participantType;
@property (nonatomic) int permission;
@property (nonatomic, retain) CKDPProtectionInfo *publicKey;
@property (nonatomic) int state;
@property (nonatomic, retain) CKDPIdentifier *userId;

- (void).cxx_destruct;
- (id)contactInformation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createdOutOfProcess;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContactInformation;
- (bool)hasCreatedOutOfProcess;
- (bool)hasInviterId;
- (bool)hasParticipantId;
- (bool)hasParticipantType;
- (bool)hasPermission;
- (bool)hasPublicKey;
- (bool)hasState;
- (bool)hasUserId;
- (unsigned long long)hash;
- (id)inviterId;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantId;
- (int)participantType;
- (int)permission;
- (id)publicKey;
- (bool)readFrom:(id)arg1;
- (void)setContactInformation:(id)arg1;
- (void)setCreatedOutOfProcess:(bool)arg1;
- (void)setHasCreatedOutOfProcess:(bool)arg1;
- (void)setHasParticipantType:(bool)arg1;
- (void)setHasPermission:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setInviterId:(id)arg1;
- (void)setParticipantId:(id)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setPermission:(int)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUserId:(id)arg1;
- (int)state;
- (id)userId;
- (void)writeTo:(id)arg1;

@end
