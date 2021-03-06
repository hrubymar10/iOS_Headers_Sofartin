/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDevice : NSObject {
    _IDSDevice *_internal;
}

@property(getter=isConnected,assign,readonly) bool connected;
@property(assign,retain) NSString * deviceColor;
@property(assign,retain) NSString * enclosureColor;
@property(assign,retain) NSArray * identities;
@property(assign,readonly) bool isDefaultPairedDevice;
@property(assign,retain) NSDate * lastActivityDate;
@property(assign,retain) NSArray * linkedUserURIs;
@property(assign,readonly) bool locallyPresent;
@property(assign,retain) NSString * modelIdentifier;
@property(assign,retain) NSString * name;
@property(getter=isNearby,assign,readonly) bool nearby;
@property(setter=setNSUUID:,assign,retain) NSUUID * nsuuid;
@property(assign,readonly) unsigned long long pairingProtocolVersion;
@property(assign,readonly) NSString * productBuildVersion;
@property(assign,readonly) NSString * productName;
@property(assign,readonly) NSString * productVersion;
@property(assign,retain) NSData * pushToken;
@property(assign,retain) NSString * service;
@property(assign,readonly) bool supportsHandoff;
@property(assign,readonly) bool supportsMMSRelay;
@property(assign,readonly) bool supportsPhoneCalls;
@property(assign,readonly) bool supportsSMSRelay;
@property(assign,readonly) bool supportsTethering;
@property(assign,readonly) bool supportsiCloudPairing;
@property(assign,retain) NSString * uniqueID;

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
