/* Generated by RuntimeBrowser.
 */

@protocol NRPairedDeviceRegistryXPCFrameworkDelegate <NRPropertyXPCFrameworkDelegate>

@required

- (void)xpcCompatibilityStateDidChange:(unsigned short)arg1 withDevice:(NRDevice *)arg2 andDeviceID:(NSUUID *)arg3;
- (void)xpcCreateDevice:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcDevice:(NRDevice *)arg1 deviceID:(NSUUID *)arg2 needsPasscode:(NSNumber *)arg3;
- (void)xpcDeviceDidPair:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcDeviceDidUnpair:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcDeviceIDDidFailToPair:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)xpcDeviceNeedsActivation:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcDidBeginPairing:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcDidReceiveBTPairingRequest:(NRDevice *)arg1 deviceID:(NSUUID *)arg2;
- (void)xpcHasNewOOBKey:(NSData *)arg1;
- (void)xpcLastUnpairReasonDidChange:(unsigned long long)arg1;
- (void)xpcRemoteUnpairingDidBegin;
- (void)xpcStatusDidChange:(unsigned long long)arg1;

@end
