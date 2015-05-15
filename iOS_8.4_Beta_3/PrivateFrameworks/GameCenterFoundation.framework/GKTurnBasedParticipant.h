/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedParticipant : NSObject {
    GKTurnBasedParticipantInternal *_internal;
}

@property (readonly, retain) GKTurnBasedParticipantInternal *internal;
@property (nonatomic, readonly) NSString *inviteMessage;
@property (nonatomic, readonly) GKPlayer *invitedBy;
@property (nonatomic, readonly) bool isLocalPlayer;
@property (nonatomic, readonly) bool isWinner;
@property (nonatomic, copy) NSDate *lastTurnDate;
@property (nonatomic) long long matchOutcome;
@property (nonatomic, readonly) NSString *matchOutcomeString;
@property (nonatomic, readonly) NSString *matchStatusString;
@property (nonatomic, readonly, retain) GKPlayer *player;
@property (nonatomic, readonly, copy) NSString *playerID;
@property (nonatomic, readonly) long long status;
@property (nonatomic, copy) NSDate *timeoutDate;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (id)keyPathsForValuesAffectingStatus;
+ (bool)matchOutcomeIsValidForDoneState:(long long)arg1;
+ (id)stringForMatchOutcome:(long long)arg1;

- (id)basicMatchOutcomeString;
- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id)invitedBy;
- (bool)isEqual:(id)arg1;
- (bool)isLocalPlayer;
- (bool)isWinner;
- (id)lastTurnDate;
- (id)matchOutcomeString;
- (id)matchStatusString;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;
- (id)playerID;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setStatus:(long long)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (long long)status;
- (id)valueForUndefinedKey:(id)arg1;

@end
