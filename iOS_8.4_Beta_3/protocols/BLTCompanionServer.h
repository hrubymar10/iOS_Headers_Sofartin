/* Generated by RuntimeBrowser.
 */

@protocol BLTCompanionServer <NSObject>

@required

- (void)handleAcknowledgeActionForPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (void)handleDidPlayLightsAndSirens:(bool)arg1 forBulletin:(NSString *)arg2 inPhoneSection:(NSString *)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5;
- (void)handleDismissActionForPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (void)handlePairedDeviceIdentifier:(NSString *)arg1 carry:(bool)arg2;
- (void)handleSnoozeActionForPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (void)handleSupplementaryActionWithIdentifier:(NSString *)arg1 forPublisherBulletinID:(NSString *)arg2 recordID:(NSString *)arg3 sectionID:(NSString *)arg4;
- (void)removeBulletinWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;

@end