/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedExchangeReply : NSObject {
    GKTurnBasedExchangeReplyInternal *_internal;
    GKTurnBasedMatch *_matchWeak;
    GKTurnBasedParticipant *_recipient;
}

@property(assign,retain) NSData * data;
@property(assign,retain) GKTurnBasedExchangeReplyInternal * internal;
@property(assign,readwrite) GKTurnBasedMatch * match;
@property(assign,readonly) NSString * message;
@property(assign,retain) GKTurnBasedParticipant * recipient;
@property(assign,readonly) NSDate * replyDate;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;

- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (id)match;
- (id)message;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)recipient;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setRecipient:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
