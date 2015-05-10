/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUpdateWorkspaceScenesTransaction : FBTransaction {
    FBProcess *_process;
    FBApplicationProcessLaunchTransaction *_processLaunchTransaction;
    FBProcessManager *_processManager;
    FBSceneManager *_sceneManager;
    NSMutableArray *_updateSceneTransactions;
    FBWorkspace *_workspace;
}

@property(assign,retain) FBProcess * process;
@property(assign,readonly) bool processExited;
@property(assign,readonly) bool processLaunchFailed;
@property(assign,retain) NSArray * updateSceneTransactions;
@property(assign,retain) FBWorkspace * workspace;

- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didRemoveChildTransaction:(id)arg1;
- (void)_willAddChildTransaction:(id)arg1;
- (id)addUpdateSceneTransactionForSceneIdentifier:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 initialClientSettingsProvider:(id)arg5;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1;
- (id)process;
- (bool)processExited;
- (bool)processLaunchFailed;
- (id)updateSceneTransactions;
- (id)workspace;

@end
