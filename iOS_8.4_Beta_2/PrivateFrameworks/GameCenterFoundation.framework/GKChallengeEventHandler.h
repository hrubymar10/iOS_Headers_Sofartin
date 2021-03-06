/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKChallengeEventHandler : NSObject {
    <GKChallengeEventHandlerDelegate> *_delegateWeak;
    GKChallengeInternal *_pendingCompletedChallenge;
    GKChallengeInternal *_pendingReceivedChallenge;
    <GKChallengeEventHandlerUIDelegate> *_uiDelegate;
}

@property(assign,readwrite) <GKChallengeEventHandlerDelegate> * delegate;
@property(assign,retain) GKChallengeInternal * pendingCompletedChallenge;
@property(assign,retain) GKChallengeInternal * pendingReceivedChallenge;
@property(assign,retain) <GKChallengeEventHandlerUIDelegate> * uiDelegate;

+ (id)challengeEventHandler;
+ (Class)uiDelegateClass;

- (void)challengeCompleted:(id)arg1;
- (void)challengeReceived:(id)arg1;
- (void)completedChallengeSelected:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)pendingCompletedChallenge;
- (id)pendingReceivedChallenge;
- (void)receivedChallengeSelected:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingCompletedChallenge:(id)arg1;
- (void)setPendingReceivedChallenge:(id)arg1;
- (void)setUiDelegate:(id)arg1;
- (void)showBannerForChallenge:(id)arg1 complete:(id)arg2;
- (id)uiDelegate;

@end
