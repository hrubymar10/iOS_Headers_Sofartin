/* Generated by RuntimeBrowser.
 */

@protocol CoreRCXPCService

@required

- (void)getPropertyAsyncForKey:(NSString *)arg1 ofBus:(CoreRCBus *)arg2 reply:(id)arg3;
- (void)queryBusesAsync:(id)arg1;
- (void)sendHIDEventAsync:(CoreRCHIDEvent *)arg1 fromDevice:(CoreRCDevice *)arg2 toDevice:(CoreRCDevice *)arg3 reply:(id)arg4;
- (void)setPropertyAsync:(id)arg1 forKey:(NSString *)arg2 ofBus:(CoreRCBus *)arg3 reply:(id)arg4;

@end
