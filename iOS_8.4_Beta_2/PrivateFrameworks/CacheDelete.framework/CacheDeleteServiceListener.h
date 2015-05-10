/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheDeleteServiceListener : CacheDeleteListener <CacheDeleteServiceProtocol, NSXPCListenerDelegate> {
    id _cancel;
    NSXPCListenerEndpoint *_endpoint;
    id _notify;
    id _periodic;
    id _purge;
    id _purgeable;
}

@property(assign,copy) id cancel;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSXPCListenerEndpoint * endpoint;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) id notify;
@property(assign,copy) id periodic;
@property(assign,copy) id purge;
@property(assign,copy) id purgeable;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)cancel;
- (id)endpoint;
- (id)initWithName:(id)arg1 anonymous:(bool)arg2;
- (id)notify;
- (id)periodic;
- (id)purge;
- (id)purgeable;
- (void)serviceCancelPurge:(id)arg1;
- (void)serviceNotify:(id)arg1 replyBlock:(id)arg2;
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(id)arg3;
- (void)servicePing:(id)arg1;
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(id)arg3;
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(id)arg3;
- (void)setCancel:(id)arg1;
- (void)setNotify:(id)arg1;
- (void)setNotifyCallback:(id)arg1;
- (void)setPeriodic:(id)arg1;
- (void)setPurge:(id)arg1;
- (void)setPurgeable:(id)arg1;

@end
