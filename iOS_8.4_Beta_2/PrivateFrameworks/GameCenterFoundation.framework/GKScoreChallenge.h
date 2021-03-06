/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKScoreChallenge : GKChallenge {
    GKScore *_score;
}

@property(assign,readonly) GKLeaderboard * leaderboard;
@property(assign,retain) GKScore * score;

+ (bool)instancesRespondToSelector:(SEL)arg1;

- (id)alertGoalText;
- (id)composeGoalText;
- (void)dealloc;
- (id)description;
- (id)detailGoalText;
- (id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2;
- (bool)detailsLoaded;
- (id)iconSource;
- (id)iconURLString;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)leaderboard;
- (id)listGoalText;
- (id)listTitleText;
- (void)loadDetailsWithCompletionHandler:(id)arg1;
- (id)score;
- (void)setInternal:(id)arg1;
- (void)setScore:(id)arg1;
- (id)smallIconURLString;
- (id)titleText;

@end
