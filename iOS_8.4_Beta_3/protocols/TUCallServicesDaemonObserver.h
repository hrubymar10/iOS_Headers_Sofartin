/* Generated by RuntimeBrowser.
 */

@protocol TUCallServicesDaemonObserver

@required

- (void)handleCallContinuityStateChangedForProxyCall:(TUProxyCall *)arg1;
- (void)handleCallModelStateChanged:(TUCallModelState *)arg1;
- (void)handleCallStatusChangedForProxyCall:(TUProxyCall *)arg1;
- (void)handleCurrentProxyCallsChanged:(NSArray *)arg1;
- (void)handleDisconnectedReasonChangedTo:(int)arg1 forCallWithUUID:(NSString *)arg2;
- (void)handleEndpointOnCurrentDeviceChangedTo:(bool)arg1 forCallWithUUID:(NSString *)arg2;
- (void)handleHardPauseDigitsAvailibilityChangedTo:(unsigned short)arg1 digits:(NSString *)arg2;
- (void)handleLocalFrequencyChangedTo:(NSData *)arg1;
- (void)handleMutedChangedTo:(bool)arg1;
- (void)handleRemoteFrequencyChangedTo:(NSData *)arg1;
- (void)handleShouldSuppressRingtoneChangedTo:(bool)arg1 forCallWithUUID:(NSString *)arg2;
- (void)handleWantsHoldMusicChangedTo:(bool)arg1 forCallWithUUID:(NSString *)arg2;

@end