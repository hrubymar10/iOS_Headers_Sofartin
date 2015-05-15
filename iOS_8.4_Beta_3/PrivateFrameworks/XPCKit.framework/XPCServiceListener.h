/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCServiceListener : NSObject {
    unsigned long long _clientCount;
    <XPCServiceListenerDelegate> *_delegate;
    NSObject<OS_xpc_object> *_listener;
    NSMutableSet *_serviceConnections;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(assign,readwrite) unsigned long long clientCount;
@property(assign,readonly) <XPCServiceListenerDelegate> * delegate;
@property(assign,retain) NSObject<OS_xpc_object> * listener;
@property(assign,retain) NSMutableSet * serviceConnections;
@property(assign,retain) NSString * serviceName;
@property(assign,retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)_workQueueShutDownServiceConnections:(id)arg1 index:(unsigned long long)arg2 completionBlock:(id)arg3;
- (unsigned long long)clientCount;
- (id)debugDescription;
- (id)delegate;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (id)listener;
- (void)serviceConnectionDidDisconnect:(id)arg1;
- (id)serviceConnections;
- (id)serviceName;
- (void)setClientCount:(unsigned long long)arg1;
- (void)setListener:(id)arg1;
- (void)setServiceConnections:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)shutDownCompletionBlock:(id)arg1;
- (void)start;
- (id)workQueue;
- (void)workQueueHandleIncomingConnection:(id)arg1;

@end