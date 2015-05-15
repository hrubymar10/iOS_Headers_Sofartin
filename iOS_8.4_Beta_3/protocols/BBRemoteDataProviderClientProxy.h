/* Generated by RuntimeBrowser.
 */

@protocol BBRemoteDataProviderClientProxy <NSObject>

@required

- (void)attachmentAspectRatioForRecordID:(NSString *)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(NSString *)arg1 sizeConstraints:(BBThumbnailSizeConstraints *)arg2 completion:(id)arg3;
- (void)bulletinsWithRequestParameters:(BBBulletinRequestParameters *)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(NSNumber *)arg1 lastClearedInfo:(BBSectionInfo *)arg2 completion:(id)arg3;
- (void)clearedInfoForBulletins:(NSSet *)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)dataProviderDidLoad;
- (void)deliverBulletinActionResponse:(BBActionResponse *)arg1;
- (void)deliverMessageWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)noteSectionInfoDidChange:(BBSectionInfo *)arg1;
- (void)primaryAttachmentDataForRecordID:(NSString *)arg1 completion:(id)arg2;

@end