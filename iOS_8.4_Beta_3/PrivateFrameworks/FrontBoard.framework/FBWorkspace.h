/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspace : NSObject <FBSceneClientProvider> {
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMapTable *_hostToClientMap;
    bool _invalidated;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    NSObject<OS_dispatch_queue> *_queue;
    FBWorkspaceServer *_server;
    bool _willInvalidate;
    BSZeroingWeakReference *_zeroingWeakDelegate;
    BSZeroingWeakReference *_zeroingWeakProcess;
}

@property (nonatomic, readonly, retain) BSAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBProcess *process;
@property (readonly) Class superclass;

- (id)_newSceneWithHost:(id)arg1 initialClientSettings:(id)arg2;
- (id)_newWorkspaceServer;
- (id)_queue;
- (void)_queue_enumerateScenes:(id)arg1;
- (void)_queue_fireInvalidationAction;
- (void)_queue_invalidateAllScenes;
- (void)_queue_willInvalidateAllScenes;
- (id)_server;
- (id)auditToken;
- (void)beginTransaction;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endTransaction;
- (id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3;
- (id)process;
- (id)registerHost:(id)arg1 withInitialClientSettings:(id)arg2;
- (void)registerInvalidationAction:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)server:(id)arg1 handleCreateSceneRequest:(id)arg2 withCompletion:(id)arg3;
- (void)server:(id)arg1 handleDestroySceneRequest:(id)arg2 withCompletion:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)unregisterHost:(id)arg1;

@end
