/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {
    id _dCache;
    id _eCache;
    NSXPCListenerEndpoint *_endpoint;
    id _exportInfo;
    id _importInfo;
    id _interruptionHandler;
    id _invalidationHandler;
    id _lock;
    <NSObject> *_otherInfo;
    NSXPCInterface *_remoteObjectInterface;
    id _repliesExpected;
    id _repliesRequested;
    id _reserved1;
    NSString *_serviceName;
    unsigned int _state;
    unsigned int _state2;
    NSObject<OS_dispatch_queue> *_userQueue;
    void *_xconnection;
}

@property(assign,readonly) int auditSessionIdentifier;
@property(assign,readonly) unsigned int effectiveGroupIdentifier;
@property(assign,readonly) unsigned int effectiveUserIdentifier;
@property(assign,retain) NSXPCListenerEndpoint * endpoint;
@property(assign,retain) NSXPCInterface * exportedInterface;
@property(assign,retain) id exportedObject;
@property(assign,copy) id interruptionHandler;
@property(assign,copy) id invalidationHandler;
@property(assign,readonly) int processIdentifier;
@property(assign,retain) NSXPCInterface * remoteObjectInterface;
@property(assign,retain) id remoteObjectProxy;
@property(assign,copy) NSString * serviceName;

+ (id)_currentBoost;
+ (void)beginTransaction;
+ (id)callServicesAccountsControllerDelegateXPCInterface;
+ (id)callServicesDaemonDelegateXPCInterface;
+ (id)callServicesDaemonObserverXPCInterface;
+ (id)currentConnection;
+ (void)dispatchMainIfCurrentXPCConnection:(id)arg1;
+ (void)endTransaction;

- (void)_addClassToDecodeCache:(Class)arg1;
- (void)_addClassToEncodeCache:(Class)arg1;
- (void)_addImportedProxy:(id)arg1;
- (void)_cancelProgress:(unsigned long long)arg1;
- (id)_clientBundleID;
- (void)_decodeAndInvokeMessageWithData:(id)arg1;
- (void)_decodeAndInvokeReplyBlockWithData:(id)arg1 sequence:(unsigned long long)arg2 replyInfo:(id)arg3;
- (bool)_decodeCacheContainsClass:(Class)arg1;
- (void)_decodeProgressMessageWithData:(id)arg1;
- (bool)_encodeCacheContainsClass:(Class)arg1;
- (id)_errorDescription;
- (id)_exportTable;
- (unsigned long long)_generationCount;
- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3;
- (void)_killConnection:(int)arg1;
- (void)_pauseProgress:(unsigned long long)arg1;
- (id)_queue;
- (void)_removeImportedProxy:(id)arg1;
- (void)_sendDesistForProxy:(id)arg1;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(double)arg5;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(double)arg5 userInfo:(id)arg6;
- (void)_setQueue:(id)arg1;
- (void)_setTargetUserIdentifier:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (void)_updateProgress:(unsigned long long)arg1 completed:(long long)arg2 total:(long long)arg3;
- (id)_xpcConnection;
- (void)addBarrierBlock:(id)arg1;
- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)endpoint;
- (id)exportedInterface;
- (id)exportedObject;
- (void)finalize;
- (id)init;
- (id)initCellularPlanDatabaseClient;
- (id)initVinylTestClient;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (int)processIdentifier;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(id)arg2;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (void)resume;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)sl_clientHasEntitlement:(id)arg1;
- (id)sl_localizedClientName;
- (void)start;
- (void)stop;
- (void)suspend;
- (id)userInfo;
- (id)valueForEntitlement:(id)arg1;

@end
