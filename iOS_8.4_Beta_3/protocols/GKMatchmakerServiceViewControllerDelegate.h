/* Generated by RuntimeBrowser.
 */

@protocol GKMatchmakerServiceViewControllerDelegate <GKServiceViewControllerDelegate>

@required

- (void)cancelInviteToPlayer:(GKPlayerInternal *)arg1;
- (void)finishWithError:(NSError *)arg1;
- (void)sendData:(NSData *)arg1;
- (void)setBrowsingForNearbyPlayers:(bool)arg1;
- (void)startMatchingWithRequest:(GKMatchRequestInternal *)arg1;

@end
