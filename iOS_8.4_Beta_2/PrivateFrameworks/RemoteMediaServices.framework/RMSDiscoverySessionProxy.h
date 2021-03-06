/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSDiscoverySessionProxy : RMSSessionProxy <RMSDiscoverySession> {
    NSArray *_availableServices;
    <RMSDiscoverySessionDelegate> *_delegate;
    bool _discovering;
    long long _discoveryTypes;
    RMSIDSClient *_idsClient;
    bool _networkAvailable;
    long long _retryRate;
    bool _wifiAvailable;
}

@property(assign,readonly) NSArray * availableServices;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <RMSDiscoverySessionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readwrite) long long discoveryTypes;
@property(assign,readonly) unsigned long long hash;
@property(getter=isNetworkAvailable,assign,readonly) bool networkAvailable;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_availableServicesDidUpdateNotification:(id)arg1;
- (void)_companionAvailabilityDidChange:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_updateNetworkAvailability;
- (void)_wifiAvailabilityDidChange:(id)arg1;
- (id)availableServices;
- (void)beginDiscovery;
- (void)dealloc;
- (id)delegate;
- (long long)discoveryTypes;
- (void)endDiscovery;
- (void)heartbeatDidFail;
- (id)init;
- (bool)isNetworkAvailable;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryTypes:(long long)arg1;

@end
