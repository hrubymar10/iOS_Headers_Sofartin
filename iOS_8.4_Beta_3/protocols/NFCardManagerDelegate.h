/* Generated by RuntimeBrowser.
 */

@protocol NFCardManagerDelegate <NSObject>

@optional

- (void)cardManager:(NFCardManager *)arg1 didReceiveRemoteAdminNotification:(NSDictionary *)arg2;
- (void)cardManager:(NFCardManager *)arg1 receivedRemoteAdminNotification:(NSDictionary *)arg2;
- (void)cardManager:(NFCardManager *)arg1 secureElementDidBecomeAvailable:(bool)arg2;

@end
