/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATXPCConnection : NSObject {
    bool _assertionHeld;
    NSObject<OS_xpc_object> *_conn;
    id _context;
    id _disconnectHandler;
    NSObject<OS_dispatch_queue> *_eventQueue;
    id _lockdownHandler;
    id _messageHandler;
    NSMutableSet *_outstandingMessages;
}

@property (nonatomic) bool assertionHeld;
@property (nonatomic, retain) id context;
@property (nonatomic, copy) id disconnectHandler;
@property (nonatomic, copy) id lockdownHandler;
@property (nonatomic, copy) id messageHandler;
@property (readonly) NSString *serviceName;

- (void).cxx_destruct;
- (void)_handleLockdownMessage:(void*)arg1;
- (void)_handleXPCError:(id)arg1;
- (void)_handleXPCMessage:(id)arg1;
- (unsigned long long)_outstandingMessages;
- (void)_registerMessage:(id)arg1;
- (void)_removeMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 handler:(id)arg2;
- (void)_setEventHandlerOnConnection:(id)arg1;
- (bool)assertionHeld;
- (id)context;
- (void)dealloc;
- (id)disconnectHandler;
- (id)eventQueue;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (id)lockdownHandler;
- (id)messageHandler;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (id)serviceName;
- (void)setAssertionHeld:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDisconnectHandler:(id)arg1;
- (void)setLockdownHandler:(id)arg1;
- (void)setMessageHandler:(id)arg1;
- (void)shutdown;

@end
