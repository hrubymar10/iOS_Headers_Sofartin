/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceServer : NSObject {
    NSObject<OS_xpc_object> *_connection;
    <FBWorkspaceServerDelegate> *_delegate;
    BSSignal *_invalidateSignal;
    NSMutableArray *_messagesQueuedForSend;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_sceneIDToSceneHandlerMap;
    unsigned long long _transactionBlockDepth;
    bool _triedToSendMessageInTransaction;
}

@property(assign,readwrite) <FBWorkspaceServerDelegate> * delegate;

- (id)_handlerForSceneID:(id)arg1;
- (id)_queue;
- (void)_queue_clientExited;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withHandlerBlock:(id)arg3;
- (void)_queue_deserializeEventFromMessage:(id)arg1 ofType:(Class)arg2 withSceneHandlerBlock:(id)arg3;
- (void)_queue_handleCreateSceneRequest:(id)arg1;
- (void)_queue_handleDestroySceneRequest:(id)arg1;
- (void)_queue_handleMessage:(id)arg1;
- (bool)_queue_handleMessage:(id)arg1 withType:(long long)arg2;
- (void)_queue_handleSceneAttachContext:(id)arg1;
- (void)_queue_handleSceneDetachContext:(id)arg1;
- (void)_queue_handleSceneDidReceiveActions:(id)arg1;
- (void)_queue_handleSceneDidUpdateClientSettings:(id)arg1;
- (void)_queue_handleSceneUpdateContext:(id)arg1;
- (void)_queue_invalidate;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2;
- (void)_queue_sendMessage:(long long)arg1 withEvent:(id)arg2 withResponseEvent:(id)arg3 ofType:(Class)arg4;
- (void)_queue_sendMessage:(long long)arg1 withMessagePacker:(id)arg2 withReplyHandler:(id)arg3;
- (void)_queue_sendReplyForMessage:(id)arg1 withEvent:(id)arg2;
- (void)_queue_setXPCConnection:(id)arg1;
- (id)auditToken;
- (void)beginTransaction;
- (void)dealloc;
- (id)delegate;
- (void)endTransaction;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)registerSceneEventHandler:(id)arg1 forSceneID:(id)arg2;
- (void)sendActionsEvent:(id)arg1 completion:(id)arg2;
- (void)sendCreateSceneEvent:(id)arg1 withCompletion:(id)arg2;
- (void)sendDestroySceneEvent:(id)arg1 withCompletion:(id)arg2;
- (void)sendSceneActionsEvent:(id)arg1;
- (void)sendSceneUpdateEvent:(id)arg1 withCompletion:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)unregisterSceneEventHandlerForSceneID:(id)arg1;

@end