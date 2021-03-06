/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchChangedRecordZonesURLRequest : CKDURLRequest {
    NSMutableArray *_changedZoneIDs;
    NSMutableArray *_deletedZoneIDs;
    NSData *_previousServerChangeTokenData;
    CKRecordZoneID *_recordZoneID;
    unsigned long long _resultsLimit;
    NSData *_serverChangeTokenData;
    long long _status;
}

@property (nonatomic, readonly) NSArray *changedZoneIDs;
@property (nonatomic, readonly) NSArray *deletedZoneIDs;
@property (nonatomic, retain) NSData *previousServerChangeTokenData;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) NSData *serverChangeTokenData;
@property (nonatomic) long long status;

- (void).cxx_destruct;
- (id)changedZoneIDs;
- (id)deletedZoneIDs;
- (id)initWithPreviousServerChangeTokenData:(id)arg1;
- (int)operationType;
- (id)previousServerChangeTokenData;
- (id)recordZoneID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (unsigned long long)resultsLimit;
- (id)serverChangeTokenData;
- (void)setPreviousServerChangeTokenData:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
