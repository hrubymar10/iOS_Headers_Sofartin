/* Generated by RuntimeBrowser.
 */

@protocol NCInteractiveNotificationServiceInterface

@required

- (void)_didChangeRevealPercent:(double)arg1;
- (void)_getActionContextWithCompletion:(id)arg1;
- (void)_getActionTitlesWithCompletion:(id)arg1;
- (void)_getInitialStateWithCompletion:(id)arg1;
- (void)_handleActionAtIndex:(unsigned long long)arg1;
- (void)_handleActionIdentifier:(NSString *)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_proximityStateDidChange:(bool)arg1;
- (void)_setContext:(NSDictionary *)arg1;
- (void)_setMaximumHeight:(double)arg1;
- (void)_setModal:(bool)arg1;
- (void)_willPresentFromActionIdentifier:(NSString *)arg1;

@end
