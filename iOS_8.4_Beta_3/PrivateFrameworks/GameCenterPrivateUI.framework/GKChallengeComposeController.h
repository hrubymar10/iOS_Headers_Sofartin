/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKChallengeComposeController : GKSimpleComposeController {
    GKChallenge *_challenge;
    GKComposeHeaderField *_challengeField;
    NSArray *_playersToLoad;
}

@property (nonatomic, retain) GKChallenge *challenge;
@property (nonatomic, retain) GKComposeHeaderField *challengeField;
@property (nonatomic, retain) NSArray *playersToLoad;

+ (void)composeAndSendFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 forcePicker:(bool)arg4 readyHandler:(id)arg5 completionHandler:(id)arg6;
+ (id)composeFlowForChallenge:(id)arg1 players:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;
+ (id)friendPickerFlowForChallenge:(id)arg1 selectPlayers:(id)arg2 defaultMessage:(id)arg3 completionHandler:(id)arg4;

- (void)cancel;
- (id)challenge;
- (id)challengeField;
- (void)dealloc;
- (void)donePressed;
- (id)init;
- (id)initWithChallenge:(id)arg1 defaultMessage:(id)arg2 players:(id)arg3;
- (void)loadView;
- (id)playersToLoad;
- (void)setChallenge:(id)arg1;
- (void)setChallengeField:(id)arg1;
- (void)setPlayersToLoad:(id)arg1;
- (void)updateChallengeText;
- (void)viewWillAppear:(bool)arg1;

@end
