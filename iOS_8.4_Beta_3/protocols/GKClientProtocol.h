/* Generated by RuntimeBrowser.
 */

@protocol GKClientProtocol <NSObject>

@required

- (oneway void)achievementSelected:(GKAchievementInternal *)arg1;
- (oneway void)beginNetworkActivity;
- (oneway void)challengeCompleted:(GKChallengeInternal *)arg1;
- (oneway void)challengeReceived:(GKChallengeInternal *)arg1;
- (oneway void)completedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)endNetworkActivity;
- (oneway void)receivedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)resetNetworkActivity;
- (oneway void)respondedToNearbyInvite:(NSDictionary *)arg1;
- (oneway void)scoreSelected:(GKScoreInternal *)arg1;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (oneway void)setCurrentGame:(GKGameInternal *)arg1 serverEnvironment:(long long)arg2 reply:(id)arg3;
- (oneway void)setLocalPlayer:(GKLocalPlayerInternal *)arg1 authenticated:(bool)arg2 reply:(id)arg3;
- (oneway void)setLogBits:(int)arg1;
- (oneway void)setPreferencesValues:(NSDictionary *)arg1;

@end
