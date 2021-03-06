/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDevice : NSObject <ISSingleton> {
    unsigned long long _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    double _lastFreeSpaceRequest;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSString * deviceName;
@property(assign,readonly) NSString * guid;
@property(assign,readonly) NSString * hardwareName;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) NSString * serialNumber;
@property(assign,readonly) Class superclass;
@property(assign,readonly) NSString * systemName;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (int)_deviceClass;
- (bool)checkCapabilities:(id)arg1 withMismatches:(id*)arg2;
- (id)copyProtocolConditionalContext;
- (void)dealloc;
- (id)deviceName;
- (id)guid;
- (id)hardwareName;
- (id)init;
- (bool)releasePowerAssertion:(id)arg1;
- (void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(id)arg4;
- (void)resetLocationAndPrivacy;
- (id)serialNumber;
- (id)supportedOfferDeviceForDevices:(id)arg1;
- (id)systemName;
- (bool)takePowerAssertion:(id)arg1;

@end
