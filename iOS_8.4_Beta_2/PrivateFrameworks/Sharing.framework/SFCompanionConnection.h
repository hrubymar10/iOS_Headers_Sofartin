/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionConnection : NSObject <SFCompanionConnectionManagerClient, SFCompanionXPCManagerObserver> {
    SFCompanionDevice *_connectedDevice;
    NSString *_connectionID;
    <SFCompanionConnectionManagerProtocol> *_connectionProxy;
    <SFCompanionConnectionDelegate> *_delegate;
    SFCompanionInterface *_exportedInterface;
    id _exportedObject;
    bool _invalid;
    SFCompanionInterface *_remoteObjectInterface;
    SFCompanionService *_service;
    unsigned long long _status;
    NSXPCConnection *_userConnection;
    bool _waitForAccept;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,retain) SFCompanionDevice * connectedDevice;
@property(assign,copy) NSString * connectionID;
@property(assign,retain) <SFCompanionConnectionManagerProtocol> * connectionProxy;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SFCompanionConnectionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,retain) SFCompanionInterface * exportedInterface;
@property(assign,retain) id exportedObject;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool invalid;
@property(assign,retain) SFCompanionInterface * remoteObjectInterface;
@property(assign,retain) SFCompanionService * service;
@property(assign,readwrite) unsigned long long status;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSXPCConnection * userConnection;
@property(assign,readwrite) bool waitForAccept;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * workQueue;

- (void)connect;
- (id)connectedDevice;
- (id)connectionID;
- (id)connectionProxy;
- (void)connectionResumed;
- (void)dealloc;
- (id)delegate;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithConnectionID:(id)arg1;
- (id)initWithDevice:(id)arg1 connectionID:(id)arg2 serviceType:(id)arg3 delegate:(id)arg4;
- (id)initWithDevice:(id)arg1 serviceType:(id)arg2 delegate:(id)arg3;
- (id)initWithService:(id)arg1;
- (bool)invalid;
- (void)invalidate;
- (void)invalidationCallback;
- (void)onqueue_invalidate;
- (void)onqueue_openXPCConnection;
- (void)onqueue_proxyHandler:(id)arg1;
- (void)onqueue_resume;
- (void)onqueue_setupUserConnection:(id)arg1;
- (void)onqueue_userInvalidated;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (void)resume;
- (bool)sendData:(id)arg1 withErrorHandler:(id)arg2;
- (void)sendData:(id)arg1 withReply:(id)arg2;
- (id)service;
- (void)setConnectedDevice:(id)arg1;
- (void)setConnectionProxy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setService:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setUserConnection:(id)arg1;
- (void)setWaitForAccept:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setupWorkQueue;
- (unsigned long long)status;
- (void)suspend;
- (id)userConnection;
- (bool)waitForAccept;
- (id)workQueue;
- (void)xpcManagerConnectionInterrupted;

@end