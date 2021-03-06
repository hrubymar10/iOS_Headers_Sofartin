/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKRemoteGameCenterViewController : GKActivityProxyRemoteViewController <GameCenterUIServiceViewControllerDelegate> {
    GKGameCenterViewController *_delegateWeak;
    NSString *_leaderboardIdentifier;
    long long _leaderboardTimeScope;
    bool _shouldDisplayChallengePlayButton;
    long long _viewState;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) GKGameCenterViewController * delegate;
@property(assign,copy) NSString * description;
@property(assign,retain) GKGame * game;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * leaderboardIdentifier;
@property(assign,readwrite) long long leaderboardTimeScope;
@property(assign,readwrite) bool shouldDisplayChallengePlayButton;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) long long viewState;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (bool)_dismissSelfAfterGettingShouldFinish;
- (void)dealloc;
- (id)delegate;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(id)arg1;
- (id)leaderboardIdentifier;
- (long long)leaderboardTimeScope;
- (id)observedKeyPaths;
- (void)playPressedForChallenge:(id)arg1;
- (void)remoteControllerDidChangeViewState:(id)arg1;
- (void)remoteControllerDidSelectLeaderboardIdentifier:(id)arg1;
- (void)remoteControllerDidSelectLeaderboardTimeScope:(id)arg1;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (void)setAPIControllerFlags:(struct { bool x1; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeaderboardIdentifier:(id)arg1;
- (void)setLeaderboardTimeScope:(long long)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setShouldDisplayChallengePlayButton:(bool)arg1;
- (void)setViewState:(long long)arg1;
- (bool)shouldDisplayChallengePlayButton;
- (long long)viewState;

@end
