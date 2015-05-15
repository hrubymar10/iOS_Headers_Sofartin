/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKRemoteTurnBasedViewController : GKRemoteViewController <GKTurnBasedServiceViewControllerDelegate> {
    GKTurnBasedMatchmakerViewController *_delegateWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKTurnBasedMatchmakerViewController *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (bool)_dismissSelfAfterGettingShouldFinish;
- (void)dealloc;
- (id)delegate;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)playerQuitMatch:(id)arg1;
- (void)remoteViewControllerIsCanceling;
- (void)setDelegate:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setShowExistingMatches:(bool)arg1;
- (void)setupRemoteView;

@end
