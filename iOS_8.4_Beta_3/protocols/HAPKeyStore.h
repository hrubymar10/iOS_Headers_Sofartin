/* Generated by RuntimeBrowser.
 */

@protocol HAPKeyStore <NSObject>

@required

- (bool)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
- (bool)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(bool)arg4 error:(id*)arg5;
- (bool)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
- (bool)getMetadataSecretKey:(id*)arg1 error:(id*)arg2;
- (NSData *)readPublicKeyForAccessoryName:(NSString *)arg1 registeredWithHomeKit:(bool*)arg2 error:(id*)arg3;
- (bool)registerAccessoryWithHomeKit:(NSString *)arg1 error:(id*)arg2;
- (bool)removeAccessoryKeyForName:(NSString *)arg1 error:(id*)arg2;
- (bool)removeAllAccessoryKeys:(id*)arg1;
- (bool)removeControllerKeyPairForIdentifier:(NSString *)arg1 leaveTombstone:(bool)arg2 error:(id*)arg3;
- (bool)removeControllerKeyPairWithError:(id*)arg1;
- (bool)savePublicKey:(NSData *)arg1 forAccessoryName:(NSString *)arg2 error:(id*)arg3;
- (void)updateActiveControllerPairingIdentifier:(NSString *)arg1;
- (bool)updateCurrentiCloudIdentifier:(NSString *)arg1 controllerPairingIdentifier:(NSString *)arg2 error:(id*)arg3;

@optional

- (bool)deleteAllPeripheralIdentifiers:(id*)arg1;
- (bool)deletePeripheralIdentifierForAccessoryName:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)getPeripherialIdentifiersAndAccessoryNames;
- (NSUUID *)readPeripheralIdentifierForAccessoryName:(NSString *)arg1 error:(id*)arg2;
- (bool)savePeripheralIdentifier:(NSUUID *)arg1 forAccessoryName:(NSString *)arg2 error:(id*)arg3;
- (bool)updatePeripheralIdentifier:(NSUUID *)arg1 forAccessoryName:(NSString *)arg2 error:(id*)arg3;

@end
