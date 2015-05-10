/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    unsigned long long _serverStartCount;
}

@property(assign,readonly) NSArray * connections;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSArray * remoteClientProxies;
@property(assign,readonly) Class superclass;

+ (id)sharedServer;

- (void).cxx_destruct;
- (id)_init;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)connections;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)remoteClientProxies;
- (void)start;
- (void)stop;

@end
