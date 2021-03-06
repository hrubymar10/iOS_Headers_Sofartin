/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneManagerObserver, FBSynchronizedTransaction> {
    <FBSceneClientProvider> *_clientProvider;
    id _clientProviderProvider;
    FBSSceneClientSettings *_clientSettings;
    id _clientSettingsProvider;
    id _context;
    bool _destroyed;
    FBWaitForSceneDestructionTransaction *_destuctionTransaction;
    bool _didCommit;
    FBSDisplay *_display;
    FBSSceneSettings *_newSceneSettings;
    FBProcess *_process;
    bool _readyToCommit;
    NSString *_sceneID;
    FBSceneManager *_sceneManager;
    <FBSynchronizedTransactionDelegate> *_synchronizationDelegate;
    unsigned long long _transactionID;
    FBSSceneTransitionContext *_transitionContext;
    bool _waitsForSceneCommit;
    bool _willCommitUpdateFinished;
}

@property(assign,retain) id context;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) bool destroyed;
@property(assign,retain) FBSDisplay * display;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) FBSSceneSettings * newSettings;
@property(assign,retain) FBScene * scene;
@property(assign,retain) NSString * sceneIdentifier;
@property(assign,readonly) Class superclass;
@property(assign,readwrite) <FBSynchronizedTransactionDelegate> * synchronizationDelegate;
@property(assign,retain) FBSSceneTransitionContext * transitionContext;
@property(assign,readwrite) bool waitsForSceneCommit;

- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_commitSceneOrWait;
- (void)_commitSceneUpdate:(id)arg1;
- (void)_createScene;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_enumerateUpdateSceneObserversWithBlock:(id)arg1;
- (id)_initWithSceneIdentifier:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 clientProvider:(id)arg5 initialClientSettings:(id)arg6;
- (void)_performCommit;
- (void)_updateScene;
- (void)addObserver:(id)arg1;
- (id)context;
- (void)dealloc;
- (bool)destroyed;
- (id)display;
- (id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 display:(id)arg3 newSettings:(id)arg4 transitionContext:(id)arg5 clientProviderProvider:(id)arg6 initialClientSettingsProvider:(id)arg7;
- (id)initWithSceneToCreate:(id)arg1 display:(id)arg2 newSettings:(id)arg3 transitionContext:(id)arg4 clientProvider:(id)arg5 initialClientSettings:(id)arg6;
- (id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3;
- (bool)isReadyForSynchronizedCommit;
- (id)newSettings;
- (void)performSynchronizedCommit;
- (void)removeObserver:(id)arg1;
- (id)scene;
- (id)sceneIdentifier;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setContext:(id)arg1;
- (void)setSynchronizationDelegate:(id)arg1;
- (void)setWaitsForSceneCommit:(bool)arg1;
- (id)synchronizationDelegate;
- (id)transitionContext;
- (bool)waitsForSceneCommit;

@end
