/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchChangedRecordZonesOperation : CKDDatabaseOperation {
    CKServerChangeToken *_previousServerChangeToken;
    id _recordZoneWithIDChangedBlock;
    id _recordZoneWithIDWasDeletedBlock;
    unsigned long long _resultsLimit;
    CKServerChangeToken *_serverChangeToken;
    long long _status;
}

@property(assign,retain) CKServerChangeToken * previousServerChangeToken;
@property(assign,copy) id recordZoneWithIDChangedBlock;
@property(assign,copy) id recordZoneWithIDWasDeletedBlock;
@property(assign,readwrite) unsigned long long resultsLimit;
@property(assign,retain) CKServerChangeToken * serverChangeToken;
@property(assign,readwrite) long long status;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangedRecordZonesRequestCompleted:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;
- (id)previousServerChangeToken;
- (id)recordZoneWithIDChangedBlock;
- (id)recordZoneWithIDWasDeletedBlock;
- (unsigned long long)resultsLimit;
- (id)serverChangeToken;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordZoneWithIDChangedBlock:(id)arg1;
- (void)setRecordZoneWithIDWasDeletedBlock:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
