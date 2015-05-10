/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayControllerServer : NSObject <AirPlayControllerAsync, NSXPCListenerDelegate> {
    id _copyPropertyBlock;
    id _performCommandBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceName;
    id _setPropertyBlock;
    NSXPCListener *_xpcListener;
}

@property(assign,copy) id copyPropertyBlock;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) NSObject<OS_dispatch_queue> * dispatchQueue;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) id performCommandBlock;
@property(assign,copy) id setPropertyBlock;
@property(assign,readonly) Class superclass;

- (void)_connectionInvalidated:(id)arg1;
- (id)copyPropertyBlock;
- (void)dealloc;
- (id)dispatchQueue;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(id)arg3;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id)arg4;
- (id)performCommandBlock;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id)arg4;
- (void)setCopyPropertyBlock:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPerformCommandBlock:(id)arg1;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(id)arg4;
- (id)setPropertyBlock;
- (void)setSetPropertyBlock:(id)arg1;
- (void)startWithXPCName:(id)arg1;

@end