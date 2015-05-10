/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchRequest : NSObject {
    GKMatchRequestInternal *_internal;
    id _inviteeResponseHandler;
    id _recipientResponseHandler;
}

@property(assign,readwrite) unsigned long long defaultNumberOfPlayers;
@property(assign,retain) GKMatchRequestInternal * internal;
@property(assign,copy) NSString * inviteMessage;
@property(assign,copy) id inviteeResponseHandler;
@property(assign,readwrite) unsigned long long maxPlayers;
@property(assign,readwrite) unsigned long long minPlayers;
@property(assign,readwrite) unsigned int playerAttributes;
@property(assign,readwrite) unsigned long long playerGroup;
@property(assign,retain) NSArray * playersToInvite;
@property(assign,copy) id recipientResponseHandler;
@property(assign,retain) NSArray * recipients;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)defaultNumberOfPlayersIsValid;
- (id)description;
- (void)ensureValidityHosted:(bool)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id)inviteeResponseHandler;
- (bool)isEqual:(id)arg1;
- (bool)isTurnBasedValid;
- (bool)isValidForHosted:(bool)arg1;
- (bool)isValidWithMax:(unsigned long long)arg1;
- (void)loadRecipientsWithCompletionHandler:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)playersToInvite;
- (id)recipientResponseHandler;
- (id)recipients;
- (void)removeLocalPlayerFromPlayersToInvite;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setInviteeResponseHandler:(id)arg1;
- (void)setPlayersToInvite:(id)arg1;
- (void)setRecipientResponseHandler:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
