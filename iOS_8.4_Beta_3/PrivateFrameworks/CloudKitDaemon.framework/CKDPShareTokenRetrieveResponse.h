/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenRetrieveResponse : PBCodable <NSCopying> {
    NSString *_container;
    int _containerEnvironment;
    NSString *_etag;
    struct { 
        unsigned int containerEnvironment : 1; 
        unsigned int participantState : 1; 
        unsigned int participantType : 1; 
        unsigned int permission : 1; 
    } _has;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    int _participantState;
    int _participantType;
    int _permission;
    NSData *_protectedFullToken;
    CKDPProtectionInfo *_selfAddedPcs;
    CKDPShareIdentifier *_shareId;
}

@property(assign,retain) NSString * container;
@property(assign,readwrite) int containerEnvironment;
@property(assign,retain) NSString * etag;
@property(assign,readonly) bool hasContainer;
@property(assign,readwrite) bool hasContainerEnvironment;
@property(assign,readonly) bool hasEtag;
@property(assign,readonly) bool hasOwnerFirstName;
@property(assign,readonly) bool hasOwnerLastName;
@property(assign,readwrite) bool hasParticipantState;
@property(assign,readwrite) bool hasParticipantType;
@property(assign,readwrite) bool hasPermission;
@property(assign,readonly) bool hasProtectedFullToken;
@property(assign,readonly) bool hasSelfAddedPcs;
@property(assign,readonly) bool hasShareId;
@property(assign,retain) NSString * ownerFirstName;
@property(assign,retain) NSString * ownerLastName;
@property(assign,readwrite) int participantState;
@property(assign,readwrite) int participantType;
@property(assign,readwrite) int permission;
@property(assign,retain) NSData * protectedFullToken;
@property(assign,retain) CKDPProtectionInfo * selfAddedPcs;
@property(assign,retain) CKDPShareIdentifier * shareId;

- (void).cxx_destruct;
- (id)container;
- (int)containerEnvironment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasContainer;
- (bool)hasContainerEnvironment;
- (bool)hasEtag;
- (bool)hasOwnerFirstName;
- (bool)hasOwnerLastName;
- (bool)hasParticipantState;
- (bool)hasParticipantType;
- (bool)hasPermission;
- (bool)hasProtectedFullToken;
- (bool)hasSelfAddedPcs;
- (bool)hasShareId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)ownerFirstName;
- (id)ownerLastName;
- (int)participantState;
- (int)participantType;
- (int)permission;
- (id)protectedFullToken;
- (bool)readFrom:(id)arg1;
- (id)selfAddedPcs;
- (void)setContainer:(id)arg1;
- (void)setContainerEnvironment:(int)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasContainerEnvironment:(bool)arg1;
- (void)setHasParticipantState:(bool)arg1;
- (void)setHasParticipantType:(bool)arg1;
- (void)setHasPermission:(bool)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setParticipantState:(int)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setPermission:(int)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setSelfAddedPcs:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
