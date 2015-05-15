/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryOperation : CKDatabaseOperation {
    CKQueryCursor *_cursor;
    NSArray *_desiredKeys;
    bool _isFinishing;
    CKQuery *_query;
    id _queryCompletionBlock;
    NSObject<OS_dispatch_queue> *_queryResultQueue;
    id _recordFetchedBlock;
    NSArray *_results;
    CKQueryCursor *_resultsCursor;
    unsigned long long _resultsLimit;
    bool _shouldFetchAssetContent;
    CKRecordZoneID *_zoneID;
}

@property(assign,copy) CKQueryCursor * cursor;
@property(assign,copy) NSArray * desiredKeys;
@property(assign,readwrite) bool isFinishing;
@property(assign,copy) CKQuery * query;
@property(assign,copy) id queryCompletionBlock;
@property(assign,retain) NSObject<OS_dispatch_queue> * queryResultQueue;
@property(assign,copy) id recordFetchedBlock;
@property(assign,retain) NSArray * results;
@property(assign,retain) CKQueryCursor * resultsCursor;
@property(assign,readwrite) unsigned long long resultsLimit;
@property(assign,readwrite) bool shouldFetchAssetContent;
@property(assign,copy) CKRecordZoneID * zoneID;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)cursor;
- (id)desiredKeys;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithCursor:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (bool)isFinishing;
- (void)performCKOperation;
- (id)query;
- (id)queryCompletionBlock;
- (id)queryResultQueue;
- (id)recordFetchedBlock;
- (id)results;
- (id)resultsCursor;
- (unsigned long long)resultsLimit;
- (void)setCursor:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setIsFinishing:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryCompletionBlock:(id)arg1;
- (void)setQueryResultQueue:(id)arg1;
- (void)setRecordFetchedBlock:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setResultsCursor:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneID;

@end
