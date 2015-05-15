/* Generated by RuntimeBrowser.
 */

@protocol BBNotificationBehaviorUtilitiesServerProtocol <NSObject>

@required

- (void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(NSString *)arg2 handler:(id)arg3;
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(bool)arg1 forClient:(id <BBNotificationBehaviorUtilitiesClientProtocol>)arg2;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(bool)arg1 forClient:(id <BBNotificationBehaviorUtilitiesClientProtocol>)arg2;

@end