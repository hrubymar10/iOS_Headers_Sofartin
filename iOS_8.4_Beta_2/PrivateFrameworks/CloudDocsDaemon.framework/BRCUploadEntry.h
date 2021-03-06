/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUploadEntry : NSObject <BRCTransferEntry> {
    unsigned long long _doneSize;
    BRCItemID *_itemID;
    BRCProgress *_progress;
    CKRecord *_record;
    NSString *_stageID;
    long long _throttleID;
    unsigned long long _totalSize;
}

@property(assign,readwrite) unsigned long long doneSize;
@property(assign,readonly) NSString * etag;
@property(assign,readonly) BRCItemID * itemID;
@property(assign,readonly) BRCProgress * progress;
@property(assign,retain) CKRecord * record;
@property(assign,readonly) CKRecordID * recordID;
@property(assign,retain) CKRecord * secondaryRecord;
@property(assign,readonly) CKRecordID * secondaryRecordID;
@property(assign,readonly) NSString * stageID;
@property(assign,readonly) long long throttleID;
@property(assign,readonly) unsigned long long totalSize;
@property(assign,readonly) NSNumber * transferID;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)doneSize;
- (id)etag;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(unsigned long long)arg3;
- (id)itemID;
- (id)progress;
- (id)record;
- (id)recordID;
- (id)secondaryRecord;
- (id)secondaryRecordID;
- (void)setDoneSize:(unsigned long long)arg1;
- (void)setRecord:(id)arg1;
- (void)setSecondaryRecord:(id)arg1;
- (id)stageID;
- (long long)throttleID;
- (unsigned long long)totalSize;
- (id)transferID;

@end
