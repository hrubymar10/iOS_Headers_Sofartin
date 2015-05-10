/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShare : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_addedParticipants;
    NSString *_baseToken;
    CKContainerID *_containerID;
    NSString *_etag;
    bool _isKnownToServer;
    NSMutableArray *_participants;
    NSString *_previousProtectionEtag;
    NSString *_previousPublicProtectionEtag;
    NSData *_protectionData;
    NSString *_protectionEtag;
    long long _publicPermission;
    NSData *_publicProtectionData;
    NSString *_publicProtectionEtag;
    NSData *_publicSharingIdentity;
    NSMutableArray *_removedParticipants;
    NSString *_routingKey;
    CKShareID *_shareID;
    NSURL *_shareURL;
}

@property(assign,retain) NSMutableArray * addedParticipants;
@property(assign,readonly) NSArray * allParticipants;
@property(assign,retain) NSString * baseToken;
@property(assign,retain) CKContainerID * containerID;
@property(assign,readonly) CKShareParticipant * currentUserParticipant;
@property(assign,readonly) NSData * encryptedFullTokenData;
@property(assign,copy) NSString * etag;
@property(assign,readonly) NSString * fullToken;
@property(assign,readwrite) bool isKnownToServer;
@property(assign,readonly) CKShareParticipant * owner;
@property(assign,retain) NSMutableArray * participants;
@property(assign,retain) NSString * previousProtectionEtag;
@property(assign,retain) NSString * previousPublicProtectionEtag;
@property(assign,retain) NSData * protectionData;
@property(assign,retain) NSString * protectionEtag;
@property(assign,readwrite) long long publicPermission;
@property(assign,retain) NSData * publicProtectionData;
@property(assign,retain) NSString * publicProtectionEtag;
@property(assign,retain) NSData * publicSharingIdentity;
@property(assign,retain) NSMutableArray * removedParticipants;
@property(assign,retain) NSString * routingKey;
@property(assign,copy) CKShareID * shareID;
@property(assign,copy) NSURL * shareURL;
@property(assign,readonly) NSData * shortSharingTokenData;
@property(assign,readonly) NSData * shortSharingTokenHashData;

+ (id)decryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)encryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)_knownParticipantEqualToParticipant:(id)arg1 inArray:(id)arg2;
- (id)addParticipant:(id)arg1;
- (id)addedParticipants;
- (id)allParticipants;
- (id)baseToken;
- (void)clearModifiedParticipants;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserParticipant;
- (id)debugDescription;
- (id)decryptFullToken:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedFullTokenData;
- (id)etag;
- (id)fullToken;
- (unsigned long long)hash;
- (id)iWorkShareURLWithAppName:(id)arg1 documentName:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithShareID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKnownToServer;
- (id)owner;
- (id)participants;
- (id)previousProtectionEtag;
- (id)previousPublicProtectionEtag;
- (struct _OpaquePCSShareProtection { }*)privatePCS;
- (id)privateToken;
- (id)protectionData;
- (id)protectionEtag;
- (struct _OpaquePCSShareProtection { }*)publicPCS;
- (long long)publicPermission;
- (id)publicProtectionData;
- (id)publicProtectionEtag;
- (id)publicSharingIdentity;
- (id)removeParticipant:(id)arg1;
- (id)removedParticipants;
- (id)routingKey;
- (void)setAddedParticipants:(id)arg1;
- (void)setBaseToken:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setIsKnownToServer:(bool)arg1;
- (void)setParticipants:(id)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setPreviousPublicProtectionEtag:(id)arg1;
- (void)setPrivatePCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPublicPermission:(long long)arg1;
- (void)setPublicProtectionData:(id)arg1;
- (void)setPublicProtectionEtag:(id)arg1;
- (void)setPublicSharingIdentity:(id)arg1;
- (void)setRemovedParticipants:(id)arg1;
- (void)setRoutingKey:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setSharePCSData:(id)arg1;
- (void)setSharePCSData:(id)arg1 isUnitTestAccount:(bool)arg2;
- (id)shareID;
- (id)shareURL;
- (id)shortSharingToken;
- (id)shortSharingTokenData;
- (id)shortSharingTokenHashData;
- (id)shortToken;
- (void)updateFromServerShare:(id)arg1;

@end