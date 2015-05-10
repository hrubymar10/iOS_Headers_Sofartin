/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSPairingSessionProxy : RMSSessionProxy <RMSPairingSession> {
    NSString *_advertisedAppName;
    NSString *_advertisedDeviceModel;
    NSString *_advertisedDeviceName;
    <RMSPairingSessionDelegate> *_delegate;
    RMSIDSClient *_idsClient;
    bool _pairing;
    NSString *_passcode;
}

@property(assign,retain) NSString * advertisedAppName;
@property(assign,retain) NSString * advertisedDeviceModel;
@property(assign,retain) NSString * advertisedDeviceName;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <RMSPairingSessionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * passcode;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDidPairWithServiceNotification:(id)arg1;
- (void)_handlePairingDidFailNotification:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_notifyDelegatePairingFailed;
- (id)advertisedAppName;
- (id)advertisedDeviceModel;
- (id)advertisedDeviceName;
- (void)beginPairing;
- (void)dealloc;
- (id)delegate;
- (void)endPairing;
- (void)heartbeatDidFail;
- (id)init;
- (id)passcode;
- (void)setAdvertisedAppName:(id)arg1;
- (void)setAdvertisedDeviceModel:(id)arg1;
- (void)setAdvertisedDeviceName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasscode:(id)arg1;

@end
