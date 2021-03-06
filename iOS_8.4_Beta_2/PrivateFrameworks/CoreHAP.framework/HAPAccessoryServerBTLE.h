/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBTLE : HAPAccessoryServer <CBPeripheralDelegate> {
    CBService *_accessoryInfoService;
    NSString *_accessoryPairingUsername;
    unsigned long long _availableInstanceID;
    HAPAccessoryServerBrowserBTLE *_browser;
    NSMapTable *_btleCharacteristicToHAPCharacteristicMap;
    NSMapTable *_btleServiceToHAPServiceMap;
    unsigned long long _characteristicDiscoveryRequestCount;
    NSObject<OS_dispatch_source> *_connectionLifetimeTimer;
    NSString *_controllerUsername;
    <HAPAccessoryServerBTLEDelegatePrivate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    bool _disconnecting;
    NSMapTable *_hapCharacteristicReadCompletionQueues;
    NSMapTable *_hapCharacteristicWriteCompletionQueues;
    CBCharacteristic *_identifyCharacteristic;
    CBCharacteristic *_manufacturerCharacteristic;
    CBCharacteristic *_modelCharacteristic;
    CBCharacteristic *_pairSetupCharacteristic;
    CBCharacteristic *_pairVerifyCharacteristic;
    id _pairVerifyCompletionBlock;
    unsigned long long _pairingFeatureFlags;
    CBCharacteristic *_pairingFeaturesCharacteristic;
    bool _pairingFeaturesRead;
    CBService *_pairingService;
    struct PairingSessionPrivate { } *_pairingSession;
    CBCharacteristic *_pairingsCharacteristic;
    CBPeripheral *_peripheral;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableData *_readNonce;
    bool _removeOnDisconnect;
    CBCharacteristic *_serialNumberCharacteristic;
    NSData *_sessionReadKey;
    NSData *_sessionWriteKey;
    bool _startPairingRequested;
    unsigned long long _state;
    id _unpairedIdentifyCompletionBlock;
    bool _unpairedIdentifyRequested;
    NSMutableData *_writeNonce;
}

@property(assign,retain) CBService * accessoryInfoService;
@property(assign,retain) NSString * accessoryPairingUsername;
@property(assign,readwrite) unsigned long long availableInstanceID;
@property(assign,readwrite) HAPAccessoryServerBrowserBTLE * browser;
@property(assign,retain) NSMapTable * btleCharacteristicToHAPCharacteristicMap;
@property(assign,retain) NSMapTable * btleServiceToHAPServiceMap;
@property(assign,readwrite) unsigned long long characteristicDiscoveryRequestCount;
@property(assign,retain) NSObject<OS_dispatch_source> * connectionLifetimeTimer;
@property(assign,retain) NSString * controllerUsername;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <HAPAccessoryServerBTLEDelegatePrivate> * delegate;
@property(assign,retain) NSObject<OS_dispatch_queue> * delegateQueue;
@property(assign,copy) NSString * description;
@property(getter=isDisconnecting,assign,readwrite) bool disconnecting;
@property(assign,retain) NSMapTable * hapCharacteristicReadCompletionQueues;
@property(assign,retain) NSMapTable * hapCharacteristicWriteCompletionQueues;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) CBCharacteristic * identifyCharacteristic;
@property(assign,retain) CBCharacteristic * manufacturerCharacteristic;
@property(assign,retain) CBCharacteristic * modelCharacteristic;
@property(assign,retain) CBCharacteristic * pairSetupCharacteristic;
@property(assign,retain) CBCharacteristic * pairVerifyCharacteristic;
@property(assign,copy) id pairVerifyCompletionBlock;
@property(assign,readwrite) unsigned long long pairingFeatureFlags;
@property(assign,retain) CBCharacteristic * pairingFeaturesCharacteristic;
@property(assign,readwrite) bool pairingFeaturesRead;
@property(assign,retain) CBService * pairingService;
@property(assign,retain) CBCharacteristic * pairingsCharacteristic;
@property(assign,retain) CBPeripheral * peripheral;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;
@property(assign,retain) NSMutableData * readNonce;
@property(assign,readwrite) bool removeOnDisconnect;
@property(assign,retain) CBCharacteristic * serialNumberCharacteristic;
@property(assign,retain) NSData * sessionReadKey;
@property(assign,retain) NSData * sessionWriteKey;
@property(assign,readwrite) bool startPairingRequested;
@property(assign,readwrite) unsigned long long state;
@property(assign,readonly) Class superclass;
@property(assign,copy) id unpairedIdentifyCompletionBlock;
@property(assign,readwrite) bool unpairedIdentifyRequested;
@property(assign,retain) NSMutableData * writeNonce;

+ (id)_convertFromBTLEToHAPUUID:(id)arg1;

- (void).cxx_destruct;
- (void)_addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(bool)arg3 queue:(id)arg4 completion:(id)arg5;
- (id)_btleCharacteristicForHAPCharacteristic:(id)arg1;
- (void)_cancelConnectionLifetimeTimer;
- (void)_checkForAuthPrompt;
- (bool)_checkPairedState;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (id)_decryptData:(id)arg1 error:(id*)arg2;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (id)_dequeueReadCompletionTupleForCharacteristic:(id)arg1;
- (id)_dequeueWriteCompletionHandlerForCharacteristic:(id)arg1;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1;
- (void)_enqueueReadCompletionHandler:(id)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;
- (void)_enqueueWriteCompletionHandler:(id)arg1 forCharacteristic:(id)arg2;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (void)_establishSecureSession;
- (void)_getAttributeDatabase;
- (void)_handleConnectionLifetimeTimeout;
- (void)_handleDisconnectionWithQueue:(id)arg1 withCompletion:(id)arg2;
- (void)_handleHAPCharacteristicDiscoveryForService:(id)arg1 error:(id)arg2;
- (void)_handleHAPServiceDiscovery;
- (void)_handleHAPWriteConfirmationForCharacteristic:(id)arg1 error:(id)arg2;
- (int)_handlePairSetupExchangeWithData:(id)arg1;
- (int)_handlePairVerifyExchangeWithData:(id)arg1;
- (void)_handlePairingStateMachine;
- (void)_handlePairingsReadForCharacteristic:(id)arg1 readError:(id)arg2 removing:(bool)arg3 queue:(id)arg4 completion:(id)arg5;
- (void)_handlePairingsWriteForCharacteristic:(id)arg1 writeError:(id)arg2 removing:(bool)arg3 queue:(id)arg4 completion:(id)arg5;
- (void)_handleSuccessfulBTLEConnection;
- (void)_handleUpdatedValueForBTLECharacteristic:(id)arg1 error:(id)arg2;
- (id)_hapCharacteristicForBTLECharacteristic:(id)arg1;
- (bool)_isSessionEstablished;
- (id)_nextInstanceID;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (id)_pairSetupHAPCharacteristic;
- (int)_pairSetupStart;
- (int)_pairSetupTryPassword:(id)arg1;
- (id)_pairVerifyHAPCharacteristic;
- (int)_pairVerifyStart;
- (id)_parseBTLEService:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)_readValueForCharacteristic:(id)arg1 withCompletionHandler:(id)arg2 queue:(id)arg3;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id)arg4;
- (void)_resetState;
- (id)_serverIdentifier;
- (id)_serverName;
- (void)_setupBTLEConnectionToPeripheral;
- (bool)_shouldEnableSessionSecurity;
- (void)_updateConnectionLifetimeTimer;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 withCompletionHandler:(id)arg4 queue:(id)arg5;
- (id)accessoryInfoService;
- (id)accessoryPairingUsername;
- (bool)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(bool)arg3 queue:(id)arg4 completion:(id)arg5;
- (unsigned long long)availableInstanceID;
- (id)briefDescription;
- (id)browser;
- (id)btleCharacteristicToHAPCharacteristicMap;
- (id)btleServiceToHAPServiceMap;
- (unsigned long long)characteristicDiscoveryRequestCount;
- (id)connectionLifetimeTimer;
- (void)continuePairingAfterAuthPrompt;
- (id)controllerUsername;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (void)discoverAccessories;
- (void)enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id)arg3 queue:(id)arg4;
- (void)handleConnectionWithError:(id)arg1;
- (void)handleDisconnectionWithError:(id)arg1 withQueue:(id)arg2 withCompletion:(id)arg3;
- (id)hapCharacteristicReadCompletionQueues;
- (id)hapCharacteristicWriteCompletionQueues;
- (bool)hasPairings;
- (id)identifier;
- (id)identifyCharacteristic;
- (void)identifyWithCompletion:(id)arg1;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 browser:(id)arg5 keyStore:(id)arg6;
- (bool)isDisconnecting;
- (bool)isPaired;
- (long long)linkType;
- (id)manufacturerCharacteristic;
- (id)modelCharacteristic;
- (id)pairSetupCharacteristic;
- (id)pairVerifyCharacteristic;
- (id)pairVerifyCompletionBlock;
- (unsigned long long)pairingFeatureFlags;
- (id)pairingFeaturesCharacteristic;
- (bool)pairingFeaturesRead;
- (id)pairingService;
- (id)pairingsCharacteristic;
- (id)peripheral;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)queue;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (id)readNonce;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (bool)removeOnDisconnect;
- (bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id)arg2;
- (bool)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id)arg4;
- (id)serialNumberCharacteristic;
- (id)sessionReadKey;
- (id)sessionWriteKey;
- (void)setAccessoryInfoService:(id)arg1;
- (void)setAccessoryPairingUsername:(id)arg1;
- (void)setAvailableInstanceID:(unsigned long long)arg1;
- (void)setBrowser:(id)arg1;
- (void)setBtleCharacteristicToHAPCharacteristicMap:(id)arg1;
- (void)setBtleServiceToHAPServiceMap:(id)arg1;
- (void)setCharacteristicDiscoveryRequestCount:(unsigned long long)arg1;
- (void)setConnectionLifetimeTimer:(id)arg1;
- (void)setControllerUsername:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDisconnecting:(bool)arg1;
- (void)setHapCharacteristicReadCompletionQueues:(id)arg1;
- (void)setHapCharacteristicWriteCompletionQueues:(id)arg1;
- (void)setIdentifyCharacteristic:(id)arg1;
- (void)setManufacturerCharacteristic:(id)arg1;
- (void)setModelCharacteristic:(id)arg1;
- (void)setPairSetupCharacteristic:(id)arg1;
- (void)setPairVerifyCharacteristic:(id)arg1;
- (void)setPairVerifyCompletionBlock:(id)arg1;
- (void)setPairingFeatureFlags:(unsigned long long)arg1;
- (void)setPairingFeaturesCharacteristic:(id)arg1;
- (void)setPairingFeaturesRead:(bool)arg1;
- (void)setPairingService:(id)arg1;
- (void)setPairingsCharacteristic:(id)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReadNonce:(id)arg1;
- (void)setRemoveOnDisconnect:(bool)arg1;
- (void)setSerialNumberCharacteristic:(id)arg1;
- (void)setSessionReadKey:(id)arg1;
- (void)setSessionWriteKey:(id)arg1;
- (void)setStartPairingRequested:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUnpairedIdentifyCompletionBlock:(id)arg1;
- (void)setUnpairedIdentifyRequested:(bool)arg1;
- (void)setWriteNonce:(id)arg1;
- (void)startPairing;
- (bool)startPairingRequested;
- (unsigned long long)state;
- (bool)stopPairingWithError:(id*)arg1;
- (bool)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (id)unpairedIdentifyCompletionBlock;
- (bool)unpairedIdentifyRequested;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (id)writeNonce;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5;

@end
