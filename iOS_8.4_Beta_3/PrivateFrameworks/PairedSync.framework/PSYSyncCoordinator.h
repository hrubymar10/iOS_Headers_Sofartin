/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYSyncCoordinator : NSObject <NSXPCListenerDelegate, PSYActivity, PSYSyncRestrictionProviderDelegate> {
    NSXPCConnection *_connection;
    <PSYSyncCoordinatorDelegate> *_delegate;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _delegateLock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    bool _hasStartedListening;
    bool _isFullSyncInProgress;
    NSXPCListener *_listener;
    id _pendingCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceName;
    unsigned long long _syncRestriction;
    PSYSyncRestrictionProvider *_syncRestrictionProvider;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSYSyncCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (readonly) Class superclass;
@property unsigned long long syncRestriction;

+ (void)initialize;
+ (id)syncCoordinatorWithServiceName:(id)arg1;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)beginDryRunSyncWithOptions:(id)arg1 completion:(id)arg2;
- (oneway void)beginSyncWithOptions:(id)arg1 completion:(id)arg2;
- (void)clearPersistentState;
- (id)connection;
- (id)defaultsCompletionErrorKey;
- (id)defaultsPersistentStateKey;
- (id)defaultsTransactionIDKey;
- (id)delegate;
- (void)exitForTestInput:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 serviceLookupPath:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performDelegateBlock:(id)arg1;
- (id)persistedCompletionError;
- (long long)persistedState;
- (id)persistedTransactionID;
- (id)progressHandler;
- (void)reportProgress:(double)arg1;
- (bool)savePersistentState;
- (id)serviceName;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setPersistedCompletionError:(id)arg1;
- (void)setPersistedState:(long long)arg1;
- (void)setPersistedTransactionID:(id)arg1;
- (void)setSyncRestriction:(unsigned long long)arg1;
- (void)syncDidComplete;
- (void)syncDidCompleteSending;
- (void)syncDidFailWithError:(id)arg1;
- (unsigned long long)syncRestriction;
- (void)syncRestrictionProviderDidChangeRestriction:(id)arg1;

@end
