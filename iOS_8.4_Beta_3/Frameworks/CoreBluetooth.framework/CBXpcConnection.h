/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBXpcConnection : NSObject {
    bool _appIsBackgrounded;
    NSObject<OS_dispatch_queue> *_clientQueue;
    <CBXpcConnectionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_eventQueue;
    bool _isFinalizing;
    NSMutableDictionary *_options;
    int _type;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_semaphore> *_xpcSendBarrier;
}

@property (getter=isSetupOnUIThread, nonatomic, readonly) bool setupOnUIThread;

- (id)allocXpcArrayWithNSArray:(id)arg1;
- (id)allocXpcDictionaryWithNSDictionary:(id)arg1;
- (id)allocXpcMsg:(unsigned short)arg1 args:(id)arg2;
- (id)allocXpcObjectWithNSObject:(id)arg1;
- (void)applicationDidEnterBackgroundNotification;
- (void)applicationWillEnterForegroundNotification;
- (void)checkIn;
- (void)checkOut;
- (void)dealloc;
- (void)disconnect;
- (void)handleConnectionEvent:(id)arg1;
- (void)handleFinalized;
- (void)handleInvalid;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleReset;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;
- (bool)isSetupOnUIThread;
- (id)nsArrayWithXpcArray:(id)arg1;
- (id)nsDictionaryFromXpcDictionary:(id)arg1 extraCapacity:(unsigned long long)arg2;
- (id)nsObjectWithXpcObject:(id)arg1;
- (void)sendAsyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)sendBarrier;
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;

@end
