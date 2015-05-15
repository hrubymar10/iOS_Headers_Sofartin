/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLEClient : NSObject <CBCentralManagerDelegate> {
    NSDictionary *_accessoryInfo;
    CBCentralManager *_centralManager;
    id _connectHandler;
    bool _connectPending;
    id _disconnectHandler;
    CBPeripheral *_peripheral;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_transactionQueue;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; } *_ucat;
}

@property (nonatomic, copy) NSDictionary *accessoryInfo;
@property (nonatomic, copy) id connectHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id disconnectHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; }*logCategory;
@property (readonly) Class superclass;

- (void)_connect;
- (void)_connect2;
- (void)_disconnect;
- (void)_processTransactions;
- (id)accessoryInfo;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)connect;
- (id)connectHandler;
- (void)dealloc;
- (void)disconnect;
- (id)disconnectHandler;
- (id)dispatchQueue;
- (id)init;
- (struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; }*)logCategory;
- (void)readDataForCharacteristic:(id)arg1 readHandler:(id)arg2;
- (void)setAccessoryInfo:(id)arg1;
- (void)setConnectHandler:(id)arg1;
- (void)setDisconnectHandler:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setLogCategory:(struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; }*)arg1;
- (void)writeData:(id)arg1 characteristic:(id)arg2 writeHandler:(id)arg3;
- (void)writeData:(id)arg1 requestCharacteristic:(id)arg2 responseCharacteristic:(id)arg3 replyHandler:(id)arg4;

@end
