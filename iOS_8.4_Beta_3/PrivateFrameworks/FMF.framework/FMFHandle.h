/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding> {
    NSString *__prettyNameInternal;
    NSArray *_aliasServerIds;
    NSDictionary *_expiresByGroupId;
    NSString *_hashedDSID;
    NSString *_identifier;
    NSArray *_invitationSentToIds;
    bool _pending;
    NSString *_serverId;
    NSNumber *_trackingTimestamp;
}

@property(assign,copy) NSString * _prettyNameInternal;
@property(assign,copy) NSArray * aliasServerIds;
@property(assign,copy) NSDictionary * expiresByGroupId;
@property(assign,copy) NSString * hashedDSID;
@property(assign,copy) NSString * identifier;
@property(assign,copy) NSArray * invitationSentToIds;
@property(getter=isPending,assign,readwrite) bool pending;
@property(assign,copy) NSString * serverId;
@property(assign,copy) NSNumber * trackingTimestamp;

+ (id)handleWithId:(id)arg1;
+ (id)handleWithId:(id)arg1 serverId:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_prettyNameInternal;
- (void)addressBookDidChange;
- (id)aliasServerIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiresByGroupId;
- (unsigned long long)hash;
- (id)hashedDSID;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)invitationSentToIds;
- (bool)isEqual:(id)arg1;
- (bool)isPending;
- (bool)isSharingThroughGroupId:(id)arg1;
- (id)prettyName;
- (long long)prettyNameCompare:(id)arg1;
- (id)recordId;
- (id)serverId;
- (void)setAliasServerIds:(id)arg1;
- (void)setExpiresByGroupId:(id)arg1;
- (void)setHashedDSID:(id)arg1;
- (void)setICloudId:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInvitationSentToIds:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)setServerId:(id)arg1;
- (void)setTrackingTimestamp:(id)arg1;
- (void)set_prettyNameInternal:(id)arg1;
- (id)trackingTimestamp;

@end
