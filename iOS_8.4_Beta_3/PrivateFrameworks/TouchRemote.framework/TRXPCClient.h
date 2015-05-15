/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRXPCClient : NSObject <NSXPCConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) <TRXPCDaemonExportedInterface> * remoteDaemonProxy;
@property(assign,readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)_init;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)dealloc;
- (id)init;
- (id)remoteDaemonProxy;
- (id)remoteDaemonProxyWithErrorHandler:(id)arg1;

@end
