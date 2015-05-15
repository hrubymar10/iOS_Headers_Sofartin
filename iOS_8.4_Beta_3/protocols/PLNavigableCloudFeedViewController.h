/* Generated by RuntimeBrowser.
 */

@protocol PLNavigableCloudFeedViewController <NSObject>

@required

- (void)navigateToCloudFeedAsset:(PLManagedAsset *)arg1 completion:(id)arg2;
- (void)navigateToCloudFeedComment:(PLCloudSharedComment *)arg1 completion:(id)arg2;
- (void)navigateToNewestContentAnimated:(bool)arg1;
- (void)navigateToRevealCloudFeedAsset:(PLManagedAsset *)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedComment:(PLCloudSharedComment *)arg1 completion:(id)arg2;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(PLCloudSharedAlbum *)arg1 completion:(id)arg2;

@end
