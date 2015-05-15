/* Generated by RuntimeBrowser.
 */

@protocol BLTPingService <NSObject>

@required

- (void)getWillNanoPresentNotificationForSectionID:(NSString *)arg1 subsectionIDs:(NSSet *)arg2 completion:(id)arg3;
- (void)sendBulletinSummary:(BLTPBBulletinSummary *)arg1;
- (void)subscribeToSectionID:(NSString *)arg1;
- (void)subscribeToSectionID:(NSString *)arg1 forFullBulletins:(bool)arg2;
- (void)subscribeWithMachServiceName:(NSString *)arg1;
- (void)unsubscribeFromSectionID:(NSString *)arg1;

@end
