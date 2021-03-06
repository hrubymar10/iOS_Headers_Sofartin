/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDevice : NSObject {
    _IDSDevice *_internal;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly, retain) NSString *deviceColor;
@property (nonatomic, readonly, retain) NSString *enclosureColor;
@property (nonatomic, readonly, retain) NSArray *identities;
@property (nonatomic, readonly) bool isDefaultPairedDevice;
@property (nonatomic, readonly, retain) NSDate *lastActivityDate;
@property (nonatomic, readonly, retain) NSArray *linkedUserURIs;
@property (nonatomic, readonly) bool locallyPresent;
@property (nonatomic, readonly, retain) NSString *modelIdentifier;
@property (nonatomic, readonly, retain) NSString *name;
@property (getter=isNearby, nonatomic, readonly) bool nearby;
@property (setter=setNSUUID:, nonatomic, retain) NSUUID *nsuuid;
@property (nonatomic, readonly) unsigned long long pairingProtocolVersion;
@property (nonatomic, readonly) NSString *productBuildVersion;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productVersion;
@property (nonatomic, readonly, retain) NSData *pushToken;
@property (nonatomic, readonly, retain) NSString *service;
@property (nonatomic, readonly) bool supportsHandoff;
@property (nonatomic, readonly) bool supportsMMSRelay;
@property (nonatomic, readonly) bool supportsPhoneCalls;
@property (nonatomic, readonly) bool supportsSMSRelay;
@property (nonatomic, readonly) bool supportsTethering;
@property (nonatomic, readonly) bool supportsiCloudPairing;
@property (nonatomic, readonly, retain) NSString *uniqueID;

- (void)_addIdentity:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (id)_internal;
- (void)_setAccount:(id)arg1;
- (void)_updateNSUUID:(id)arg1;
- (void)cleanupStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)closeSocket:(int)arg1;
- (void)closeSocketForDomain:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceColor;
- (id)enclosureColor;
- (void)establishStreamPairWithOptions:(id)arg1 completionHandler:(id)arg2 onQueue:(id)arg3;
- (id)identities;
- (id)initWithDictionary:(id)arg1;
- (bool)isConnected;
- (bool)isDefaultLocalDevice;
- (bool)isDefaultPairedDevice;
- (bool)isNearby;
- (bool)isWatch;
- (id)lastActivityDate;
- (id)linkedUserURIs;
- (bool)locallyPresent;
- (id)modelIdentifier;
- (id)name;
- (id)nsuuid;
- (int)openSocketForDomain:(id)arg1;
- (int)openSocketForDomain:(id)arg1 transportType:(long long)arg2;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(id)arg2 onQueue:(id)arg3;
- (unsigned long long)pairingProtocolVersion;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (id)pushToken;
- (id)service;
- (void)setNSUUID:(id)arg1;
- (int)socketForDomain:(id)arg1;
- (bool)supportsHandoff;
- (bool)supportsMMSRelay;
- (bool)supportsPhoneCalls;
- (bool)supportsSMSRelay;
- (bool)supportsTethering;
- (bool)supportsiCloudPairing;
- (id)uniqueID;

@end
