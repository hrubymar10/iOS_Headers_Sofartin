/* Generated by RuntimeBrowser.
 */

@protocol BRCTransferEntry

@required

- (unsigned long long)doneSize;
- (NSString *)etag;
- (BRCItemID *)itemID;
- (BRCProgress *)progress;
- (CKRecord *)record;
- (CKRecordID *)recordID;
- (CKRecord *)secondaryRecord;
- (CKRecordID *)secondaryRecordID;
- (void)setDoneSize:(unsigned long long)arg1;
- (void)setRecord:(CKRecord *)arg1;
- (void)setSecondaryRecord:(CKRecord *)arg1;
- (NSString *)stageID;
- (unsigned long long)totalSize;
- (NSNumber *)transferID;

@end
