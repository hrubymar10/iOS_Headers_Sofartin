/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverGatewayHolder : NSObject {
    unsigned long long _feed;
    BBObserverClientProxy *_gateway;
    unsigned long long _gatewayPriority;
    NSString *_name;
    NSMutableSet *_observersByFeed;
    NSObject<OS_dispatch_queue> *_queue;
    PCPersistentTimer *_timeoutTimer;
    NSMutableArray *_timeouts;
}

@property(assign,readwrite) unsigned long long feed;
@property(assign,retain) BBObserverClientProxy * gateway;
@property(assign,readwrite) unsigned long long gatewayPriority;
@property(assign,copy) NSString * name;

- (id)_addTimeout:(double)arg1 forBulletinID:(id)arg2 inSectionID:(id)arg3 handler:(id)arg4;
- (void)_handleTimeout;
- (bool)_invalidateTimeout:(id)arg1;
- (void)_invalidateTimer;
- (void)_startNextTimer;
- (void)_startTimerWithFireDate:(id)arg1;
- (void)dealloc;
- (unsigned long long)feed;
- (id)gateway;
- (unsigned long long)gatewayPriority;
- (id)initWithQueue:(id)arg1 name:(id)arg2;
- (id)name;
- (void)sendAddBulletin:(id)arg1 playLightsAndSirens:(bool)arg2 forFeeds:(unsigned long long)arg3 withTimeout:(double)arg4 handler:(id)arg5;
- (void)sendObserver:(id)arg1 addBulletin:(id)arg2 playLightsAndSirens:(bool)arg3 forFeeds:(unsigned long long)arg4 withHandler:(id)arg5;
- (void)sendObserversAddBulletin:(id)arg1 playLightsAndSirens:(bool)arg2 forFeeds:(unsigned long long)arg3;
- (void)setFeed:(unsigned long long)arg1;
- (void)setGateway:(id)arg1;
- (void)setGatewayPriority:(unsigned long long)arg1;
- (void)setName:(id)arg1;

@end
