/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserRecordURLRequest : CKDURLRequest {
    id _recordFetchedBlock;
    CKRecord *_userRecord;
}

@property (nonatomic, copy) id recordFetchedBlock;
@property (nonatomic, retain) CKRecord *userRecord;

- (void).cxx_destruct;
- (int)operationType;
- (id)recordFetchedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setRecordFetchedBlock:(id)arg1;
- (void)setUserRecord:(id)arg1;
- (id)userRecord;

@end
