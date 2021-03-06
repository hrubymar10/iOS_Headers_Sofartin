/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {
    NSMutableSet *_allWatchdogs;
    bool _createResponseReceived;
    BKSProcessAssertion *_deliverMessageProcessAssertion;
    unsigned long long _deliverMessageProcessAssertionCount;
    BKSProcessAssertion *_launchBoostahAssertion;
    BKSProcessAssertion *_resumeProcessAssertion;
    BKSProcessAssertion *_seoProcessAssertion;
    int _suspendType;
    BKSProcessAssertion *_suspendingProcessAssertion;
    bool _transitioningToForeground;
    NSMutableArray *_watchdogStack;
}

@property (getter=_workspaceQueue_isTransitioningToForeground, nonatomic, readonly) bool transitioningToForeground;

- (void)_dispatchBlockAfterProcessLaunch:(id)arg1;
- (void)_workspaceQueue_activateForSEO:(bool)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(id)arg4;
- (void)_workspaceQueue_activateResponseReceived:(id)arg1;
- (void)_workspaceQueue_cancelAllWatchdogTimers;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)arg1;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned long long)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_deactivateForSEO:(bool)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(id)arg4;
- (void)_workspaceQueue_deactivateResponseReceived:(id)arg1;
- (unsigned long long)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2;
- (void)_workspaceQueue_dropAllProcessAssertions;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion:(bool)arg1;
- (void)_workspaceQueue_dropResumeProcessAssertion;
- (void)_workspaceQueue_dropSEOProcessAssertion;
- (void)_workspaceQueue_dropSuspendingProcessAssertion;
- (void)_workspaceQueue_invalidate;
- (bool)_workspaceQueue_isTransitioningToForeground;
- (long long)_workspaceQueue_lifecycleStateForSettings:(id)arg1;
- (id)_workspaceQueue_newProcessAssertionForReason:(unsigned int)arg1 withName:(id)arg2 transitionContext:(id)arg3;
- (int)_workspaceQueue_pid;
- (id)_workspaceQueue_process;
- (void)_workspaceQueue_takeAssertionsForDeactivation:(bool)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_takeDeliverMessageProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeResumeProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeSEOProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeSuspendingProcessAssertion;
- (void)dealloc;
- (void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(id)arg3;
- (void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id)arg5;
- (id)initWithParentWorkspace:(id)arg1 host:(id)arg2 initialClientSettings:(id)arg3;
- (id)parentWorkspace;

@end
