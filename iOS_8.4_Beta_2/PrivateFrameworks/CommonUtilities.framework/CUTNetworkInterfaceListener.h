/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface CUTNetworkInterfaceListener : NSObject {
    NSSet *_IPv4Addresses;
    NSSet *_IPv6Addresses;
    int _cellState;
    NSHashTable *_delegateMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    void *_dynamicStore;
    int _wifiState;
}

@property(assign,retain) NSSet * IPv4Addresses;
@property(assign,retain) NSSet * IPv6Addresses;
@property(assign,readonly) int cellState;
@property(assign,readonly) int wifiState;

+ (id)sharedInstance;

- (id)IPv4Addresses;
- (id)IPv6Addresses;
- (void)_handleNetworkChange:(id)arg1;
- (void)_notifyDelegatesOfAddressChange:(id)arg1 isIPv6:(bool)arg2;
- (void)_notifyDelegatesOfCellChange:(int)arg1;
- (void)_notifyDelegatesOfWifiChange:(int)arg1;
- (void)addDelegate:(id)arg1;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (int)cellState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (oneway void)release;
- (void)removeDelegate:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (int)wifiState;

@end
