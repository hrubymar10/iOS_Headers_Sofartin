/* Generated by RuntimeBrowser.
 */

@protocol CoreRCXPCServiceCECPrivate

@required

- (void)fakeAssignLogicalAddressAsync:(CoreCECDevice *)arg1 logicalAddress:(unsigned char)arg2 reply:(id)arg3;
- (void)fakeBusCreateAsync:(unsigned long long)arg1 reply:(id)arg2;
- (void)fakeCreateRemoteInstanceAsync:(unsigned long long)arg1 bus:(CoreCECBus *)arg2 withLogicalAddress:(unsigned char)arg3 withPhysicalAddress:(unsigned long long)arg4 reply:(id)arg5;
- (void)fakeDeviceRemoveAsync:(CoreCECDevice *)arg1 reply:(id)arg2;
- (void)fakeSetBusLinkStateAsync:(CoreCECBus *)arg1 newLinkState:(bool)arg2 reply:(id)arg3;

@end
