/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServer : NSObject {
    NSArray *_accessories;
    NSString *_homeName;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_internalDelegateQueue;
    NSHashTable *_internalDelegates;
    <HAPKeyStore> *_keyStore;
    NSString *_name;
    NSString *_pairSetupPassword;
    bool _paired;
    HAPAccessory *_primaryAccessory;
    bool _reachable;
    bool _unconnected;
}

@property(assign,copy) NSArray * accessories;
@property(assign,readonly) bool hasPairings;
@property(assign,copy) NSString * homeName;
@property(assign,copy) NSString * identifier;
@property(assign,readonly) NSObject<OS_dispatch_queue> * internalDelegateQueue;
@property(assign,readonly) NSHashTable * internalDelegates;
@property(assign,readwrite) <HAPKeyStore> * keyStore;
@property(assign,readonly) long long linkType;
@property(assign,copy) NSString * name;
@property(assign,copy) NSString * pairSetupPassword;
@property(getter=isPaired,assign,readonly) bool paired;
@property(assign,retain) HAPAccessory * primaryAccessory;
@property(getter=isReachable,assign,readwrite) bool reachable;
@property(getter=isUnconnected,assign,readwrite) bool unconnected;

+ (bool)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2;

- (void).cxx_destruct;
- (id)_serverIdentifier;
- (id)_serverName;
- (id)accessories;
- (void)addInternalDelegate:(id)arg1;
- (id)briefDescription;
- (void)continuePairingAfterAuthPrompt;
- (void)discoverAccessories;
- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2;
- (void)discoverDescriptorsForCharacteristic:(id)arg1;
- (void)discoverServices:(id)arg1 forAccessory:(id)arg2;
- (void)enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id)arg3 queue:(id)arg4;
- (void)enumerateInternalDelegatesUsingBlock:(id)arg1;
- (bool)hasPairings;
- (id)homeName;
- (id)identifier;
- (void)identifyWithCompletion:(id)arg1;
- (id)init;
- (id)internalDelegateQueue;
- (id)internalDelegates;
- (bool)isPaired;
- (bool)isReachable;
- (bool)isUnconnected;
- (id)keyStore;
- (long long)linkType;
- (id)name;
- (bool)pairAdditionalControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(id)arg3;
- (id)pairSetupPassword;
- (id)primaryAccessory;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)readValueForDescriptor:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeInternalDelegate:(id)arg1;
- (bool)removePairingForControllerWithName:(id)arg1 publicKey:(id)arg2 completion:(id)arg3;
- (void)setAccessories:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setHomeName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyStore:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPairSetupPassword:(id)arg1;
- (void)setPrimaryAccessory:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setUnconnected:(bool)arg1;
- (void)startPairing;
- (bool)stopPairingWithError:(id*)arg1;
- (bool)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(id)arg5;

@end