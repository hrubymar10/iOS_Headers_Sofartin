/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShareInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_container;
    long long _environment;
    NSString *_etag;
    NSString *_iWorkDocumentName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    long long _participantPermission;
    long long _participantStatus;
    long long _participantType;
    NSData *_privateToken;
    NSData *_protectedFullToken;
    NSData *_publicProtectionData;
    NSString *_publicProtectionEtag;
    NSData *_publicToken;
    CKShareID *_shareID;
}

@property (nonatomic, retain) NSString *container;
@property (nonatomic) long long environment;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSString *iWorkDocumentName;
@property (nonatomic, retain) NSString *ownerFirstName;
@property (nonatomic, retain) NSString *ownerLastName;
@property (nonatomic) long long participantPermission;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (nonatomic, retain) NSData *privateToken;
@property (nonatomic, retain) NSData *protectedFullToken;
@property (nonatomic, retain) NSData *publicProtectionData;
@property (nonatomic, retain) NSString *publicProtectionEtag;
@property (nonatomic, retain) NSData *publicToken;
@property (nonatomic, retain) CKShareID *shareID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)environment;
- (id)etag;
- (id)iWorkDocumentName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)ownerFirstName;
- (id)ownerLastName;
- (long long)participantPermission;
- (long long)participantStatus;
- (long long)participantType;
- (id)privateToken;
- (id)protectedFullToken;
- (struct _OpaquePCSShareProtection { }*)publicPCS;
- (id)publicProtectionData;
- (id)publicProtectionEtag;
- (id)publicToken;
- (void)setContainer:(id)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setEtag:(id)arg1;
- (void)setIWorkDocumentName:(id)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setParticipantPermission:(long long)arg1;
- (void)setParticipantStatus:(long long)arg1;
- (void)setParticipantType:(long long)arg1;
- (void)setPrivateToken:(id)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPublicProtectionData:(id)arg1;
- (void)setPublicProtectionEtag:(id)arg1;
- (void)setPublicToken:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;

@end
