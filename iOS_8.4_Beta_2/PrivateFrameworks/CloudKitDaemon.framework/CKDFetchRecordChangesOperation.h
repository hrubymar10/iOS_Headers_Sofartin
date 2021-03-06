/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordChangesOperation : CKDDatabaseOperation {
    long long _changeTypes;
    CKServerChangeToken *_clientChangeToken;
    NSArray *_desiredKeys;
    CKServerChangeToken *_previousServerChangeToken;
    id _recordChangedBlock;
    CKRecordZoneID *_recordZoneID;
    NSData *_resultClientChangeToken;
    NSData *_resultClientChangeTokenData;
    CKServerChangeToken *_resultServerChangeToken;
    unsigned long long _resultsLimit;
    id _shareChangedBlock;
    bool _shouldFetchAssetContents;
    long long _status;
}

@property(assign,readwrite) long long changeTypes;
@property(assign,retain) CKServerChangeToken * clientChangeToken;
@property(assign,retain) NSArray * desiredKeys;
@property(assign,retain) CKServerChangeToken * previousServerChangeToken;
@property(assign,copy) id recordChangedBlock;
@property(assign,retain) CKRecordZoneID * recordZoneID;
@property(assign,readonly) NSData * resultClientChangeToken;
@property(assign,retain) NSData * resultClientChangeTokenData;
@property(assign,retain) CKServerChangeToken * resultServerChangeToken;
@property(assign,readwrite) unsigned long long resultsLimit;
@property(assign,copy) id shareChangedBlock;
@property(assign,readwrite) bool shouldFetchAssetContents;
@property(assign,readwrite) long long status;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangesRequestFinished:(id)arg1;
- (long long)changeTypes;
- (id)clientChangeToken;
- (id)desiredKeys;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;
- (id)previousServerChangeToken;
- (id)recordChangedBlock;
- (id)recordZoneID;
- (id)resultClientChangeToken;
- (id)resultClientChangeTokenData;
- (id)resultServerChangeToken;
- (unsigned long long)resultsLimit;
- (void)setChangeTypes:(long long)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordChangedBlock:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setShareChangedBlock:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (id)shareChangedBlock;
- (bool)shouldFetchAssetContents;
- (long long)status;

@end
