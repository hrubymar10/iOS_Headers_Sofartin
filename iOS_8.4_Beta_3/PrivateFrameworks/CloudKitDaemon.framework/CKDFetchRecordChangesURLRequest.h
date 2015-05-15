/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordChangesURLRequest : CKDURLRequest {
    long long _changeTypes;
    CKRecordZoneID *_recordZoneID;
    NSArray *_requestedFields;
    NSMutableArray *_resultChangedRecords;
    NSMutableArray *_resultChangedShares;
    NSData *_resultClientChangeTokenData;
    NSMutableArray *_resultDeletedRecordIdentifiers;
    NSMutableArray *_resultDeletedShareIdentifiers;
    NSData *_resultServerChangeTokenData;
    unsigned long long _resultsLimit;
    NSData *_serverChangeTokenData;
    long long _status;
}

@property (nonatomic) long long changeTypes;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (nonatomic, retain) NSArray *requestedFields;
@property (nonatomic, readonly) NSArray *resultChangedRecords;
@property (nonatomic, readonly) NSArray *resultChangedShares;
@property (nonatomic, retain) NSData *resultClientChangeTokenData;
@property (nonatomic, readonly) NSArray *resultDeletedRecordIdentifiers;
@property (nonatomic, readonly) NSArray *resultDeletedShareIdentifiers;
@property (nonatomic, retain) NSData *resultServerChangeTokenData;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) NSData *serverChangeTokenData;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (long long)changeTypes;
- (id)initWithRecordZoneID:(id)arg1 serverChangeTokenData:(id)arg2 requestedFields:(id)arg3;
- (int)operationType;
- (id)recordZoneID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)requestedFields;
- (id)resultChangedRecords;
- (id)resultChangedShares;
- (id)resultClientChangeTokenData;
- (id)resultDeletedRecordIdentifiers;
- (id)resultDeletedShareIdentifiers;
- (id)resultServerChangeTokenData;
- (unsigned long long)resultsLimit;
- (id)serverChangeTokenData;
- (void)setChangeTypes:(long long)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeTokenData:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (id)zoneIDsToLock;

@end
