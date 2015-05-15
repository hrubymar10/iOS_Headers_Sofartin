/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCentralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    CBXpcConnection *_connection;
    <CBCentralManagerDelegate> *_delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didRetrievePeripherals : 1; 
        unsigned int didRetrieveConnectedPeripherals : 1; 
        unsigned int didDiscoverPeripheral : 1; 
        unsigned int didConnectPeripheral : 1; 
        unsigned int didFailToConnectPeripheral : 1; 
        unsigned int didDisconnectPeripheral : 1; 
        unsigned int didUpdatePeripheralConnectionState : 1; 
        unsigned int didLoseZone : 1; 
        unsigned int didUpdateConnectionParameters : 1; 
    } _delegateFlags;
    bool _isScanning;
    CBPairingAgent *_pairingAgent;
    NSMapTable *_peripherals;
    long long _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CBCentralManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isScanning;
@property (nonatomic, readonly) CBPairingAgent *sharedPairingAgent;
@property long long state;
@property (readonly) Class superclass;

- (void)cancelPeripheralConnection:(id)arg1;
- (void)cancelPeripheralConnection:(id)arg1 force:(bool)arg2;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forEachPeripheral:(id)arg1;
- (void)handleConnectedPeripheralsRetrieved:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handlePeripheralMsg:(int)arg1 args:(id)arg2;
- (void)handlePeripheralsRetrieved:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (bool)isMsgAllowedAlways:(int)arg1;
- (bool)isMsgAllowedWhenOff:(int)arg1;
- (bool)isScanning;
- (void)orphanPeripherals;
- (id)peerWithInfo:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1;
- (id)peripheralWithInfo:(id)arg1;
- (oneway void)release;
- (void)retrieveConnectedPeripherals;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(bool)arg2;
- (void)retrievePeripherals:(id)arg1;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (bool)sendMsg:(int)arg1 args:(id)arg2;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)setIsScanning:(bool)arg1;
- (void)setState:(long long)arg1;
- (id)sharedPairingAgent;
- (long long)state;
- (void)stopScan;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;

@end
