/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordMetadata : NSObject {
    NSError *_error;
    NSString *_etag;
    bool _isDelete;
    CKDProgressTracker *_progressTracker;
    CKRecord *_record;
    CKRecordID *_recordID;
    CKRecord *_serverRecord;
    unsigned long long _uploadState;
}

@property(assign,retain) NSError * error;
@property(assign,retain) NSString * etag;
@property(assign,readwrite) bool isDelete;
@property(assign,retain) CKDProgressTracker * progressTracker;
@property(assign,retain) CKRecord * record;
@property(assign,retain) CKRecordID * recordID;
@property(assign,retain) CKRecord * serverRecord;
@property(assign,readwrite) unsigned long long uploadState;

+ (id)_stringForUploadState:(unsigned long long)arg1;
+ (id)modifyMetadataForDeleteWithRecordID:(id)arg1;
+ (id)modifyMetadataWithRecord:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)etag;
- (bool)isDelete;
- (id)progressTracker;
- (id)record;
- (id)recordID;
- (id)serverRecord;
- (void)setError:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setIsDelete:(bool)arg1;
- (void)setProgressTracker:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setServerRecord:(id)arg1;
- (void)setUploadState:(unsigned long long)arg1;
- (unsigned long long)uploadState;

@end
