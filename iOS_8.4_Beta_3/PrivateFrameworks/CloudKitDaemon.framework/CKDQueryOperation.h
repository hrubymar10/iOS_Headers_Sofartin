/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueryOperation : CKDDatabaseOperation {
    CKQueryCursor *_cursor;
    NSSet *_desiredKeySet;
    CKQuery *_query;
    id _recordFetchedBlock;
    CKQueryCursor *_resultsCursor;
    unsigned long long _resultsLimit;
    bool _shouldFetchAssetContent;
    CKRecordZoneID *_zoneID;
}

@property(assign,readonly) CKQueryCursor * cursor;
@property(assign,retain) NSSet * desiredKeySet;
@property(assign,readonly) CKQuery * query;
@property(assign,copy) id recordFetchedBlock;
@property(assign,retain) CKQueryCursor * resultsCursor;
@property(assign,readonly) unsigned long long resultsLimit;
@property(assign,readwrite) bool shouldFetchAssetContent;
@property(assign,retain) CKRecordZoneID * zoneID;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleQueryRequestFinished:(id)arg1;
- (id)cursor;
- (id)desiredKeySet;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;
- (id)query;
- (id)recordFetchedBlock;
- (id)resultsCursor;
- (unsigned long long)resultsLimit;
- (void)setDesiredKeySet:(id)arg1;
- (void)setRecordFetchedBlock:(id)arg1;
- (void)setResultsCursor:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneID;

@end
