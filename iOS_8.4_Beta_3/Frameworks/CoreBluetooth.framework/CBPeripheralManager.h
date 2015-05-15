/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPeripheralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    NSMapTable *_centrals;
    NSMutableDictionary *_characteristicIDs;
    CBXpcConnection *_connection;
    <CBPeripheralManagerDelegate> *_delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didAddService : 1; 
        unsigned int didReceiveReadRequest : 1; 
        unsigned int didReceiveWriteRequests : 1; 
        unsigned int centralDidSubscribeToCharacteristic : 1; 
        unsigned int centralDidUnsubscribeFromCharacteristic : 1; 
        unsigned int didStartAdvertising : 1; 
        unsigned int isReadyToUpdate : 1; 
        unsigned int centralDidConnect : 1; 
        unsigned int centralDidUpdateConnectionParameters : 1; 
    } _delegateFlags;
    bool _isAdvertising;
    CBPairingAgent *_pairingAgent;
    bool _readyForUpdates;
    NSMutableArray *_services;
    long long _state;
    NSLock *_updateLock;
    bool _waitingForReady;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <CBPeripheralManagerDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool isAdvertising;
@property(assign,readonly) CBPairingAgent * sharedPairingAgent;
@property(assign,readwrite) long long state;
@property(assign,readonly) Class superclass;

+ (long long)authorizationStatus;

- (void)addService:(id)arg1;
- (id)centralWithInfo:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forEachCentral:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleCentralMsg:(int)arg1 args:(id)arg2;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleSolicitedServicesFound:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (bool)isAdvertising;
- (bool)isMsgAllowedAlways:(int)arg1;
- (bool)isMsgAllowedWhenOff:(int)arg1;
- (id)peerWithInfo:(id)arg1;
- (oneway void)release;
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)respondToRequest:(id)arg1 withResult:(long long)arg2;
- (bool)sendMsg:(int)arg1 args:(id)arg2;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2;
- (void)setIsAdvertising:(bool)arg1;
- (void)setState:(long long)arg1;
- (id)sharedPairingAgent;
- (void)startAdvertising:(id)arg1;
- (long long)state;
- (void)stopAdvertising;
- (bool)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;

@end