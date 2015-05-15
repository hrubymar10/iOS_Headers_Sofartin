/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordsOperation : CKDatabaseOperation {
    NSMutableDictionary *_assetsByRecordIDAndRecordKey;
    bool _atomic;
    NSData *_clientChangeTokenData;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSMutableArray *_deletedRecordIDs;
    id _modifyRecordsCompletionBlock;
    id _perRecordCompletionBlock;
    id _perRecordProgressBlock;
    NSMutableDictionary *_recordErrors;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSMutableDictionary *_recordsByRecordIDs;
    NSArray *_recordsToSave;
    long long _savePolicy;
    NSMutableArray *_savedRecords;
    bool _shouldOnlySaveAssetContent;
}

@property (nonatomic, retain) NSMutableDictionary *assetsByRecordIDAndRecordKey;
@property (nonatomic) bool atomic;
@property (nonatomic, copy) NSData *clientChangeTokenData;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic, retain) NSMutableArray *deletedRecordIDs;
@property (nonatomic, copy) id modifyRecordsCompletionBlock;
@property (nonatomic, copy) id perRecordCompletionBlock;
@property (nonatomic, copy) id perRecordProgressBlock;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, copy) NSArray *recordIDsToDelete;
@property (nonatomic, copy) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, retain) NSMutableDictionary *recordsByRecordIDs;
@property (nonatomic, copy) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (nonatomic, retain) NSMutableArray *savedRecords;
@property (nonatomic) bool shouldOnlySaveAssetContent;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)assetsByRecordIDAndRecordKey;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (id)deletedRecordIDs;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (id)modifyRecordsCompletionBlock;
- (id)perRecordCompletionBlock;
- (id)perRecordProgressBlock;
- (void)performCKOperation;
- (id)recordErrors;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordsByRecordIDs;
- (id)recordsToSave;
- (long long)savePolicy;
- (id)savedRecords;
- (void)setAssetsByRecordIDAndRecordKey:(id)arg1;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setDeletedRecordIDs:(id)arg1;
- (void)setModifyRecordsCompletionBlock:(id)arg1;
- (void)setPerRecordCompletionBlock:(id)arg1;
- (void)setPerRecordProgressBlock:(id)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsByRecordIDs:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setSavedRecords:(id)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (bool)shouldOnlySaveAssetContent;

@end
