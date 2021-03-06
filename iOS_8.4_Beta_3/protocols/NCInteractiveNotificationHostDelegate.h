/* Generated by RuntimeBrowser.
 */

@protocol NCInteractiveNotificationHostDelegate <NSObject>

@optional

- (void)hostViewController:(NCInteractiveNotificationHostViewController *)arg1 didEnable:(bool)arg2 actionAtIndex:(unsigned long long)arg3;
- (void)hostViewController:(NCInteractiveNotificationHostViewController *)arg1 didRequestDismissalWithContext:(NSDictionary *)arg2;
- (void)hostViewController:(NCInteractiveNotificationHostViewController *)arg1 serviceRequestedDismissalEnabled:(bool)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(NCInteractiveNotificationHostViewController *)arg1;

@end
