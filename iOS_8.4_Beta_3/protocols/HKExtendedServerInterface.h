/* Generated by RuntimeBrowser.
 */

@protocol HKExtendedServerInterface <NSObject>

@required

- (void)addAchievement:(HKAchievement *)arg1 completion:(id)arg2;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(NSDate *)arg1 end:(NSDate *)arg2 completion:(id)arg3;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(id)arg1;
- (void)fetchUnalertedAchievementsWithCompletion:(id)arg1;
- (void)forceNanoSyncWithPullRequest:(bool)arg1 completion:(id)arg2;
- (void)markAchievementAsViewed:(HKAchievement *)arg1 completion:(id)arg2;
- (void)markAchievementsAlerted:(NSArray *)arg1 completion:(id)arg2;
- (void)registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(id)arg1;
- (void)resetNanoSyncWithCompletion:(id)arg1;

@end
