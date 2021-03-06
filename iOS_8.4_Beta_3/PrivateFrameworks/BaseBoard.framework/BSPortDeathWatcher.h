/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPortDeathWatcher : NSObject {
    id _handler;
    NSObject<OS_dispatch_queue> *_queue;
    BSMachSendRight *_sendRight;
    BSDispatchSource *_source;
}

@property (nonatomic, readonly, copy) BSMachSendRight *sendRight;

- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(id)arg3;
- (id)initWithSendRight:(id)arg1 queue:(id)arg2 deathHandler:(id)arg3;
- (void)invalidate;
- (void)queue_handlePortDeathEvent;
- (id)sendRight;

@end
