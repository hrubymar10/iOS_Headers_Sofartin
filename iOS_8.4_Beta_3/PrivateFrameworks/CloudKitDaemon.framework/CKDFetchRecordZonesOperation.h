/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation {
    bool _ignorePCSFailures;
    bool _isFetchAllRecordZonesOperation;
    id _recordZoneFetchedProgressBlock;
    NSArray *_recordZoneIDs;
}

@property(assign,readwrite) bool ignorePCSFailures;
@property(assign,readwrite) bool isFetchAllRecordZonesOperation;
@property(assign,copy) id recordZoneFetchedProgressBlock;
@property(assign,retain) NSArray * recordZoneIDs;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (bool)ignorePCSFailures;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isFetchAllRecordZonesOperation;
- (void)main;
- (id)recordZoneFetchedProgressBlock;
- (id)recordZoneIDs;
- (void)setIgnorePCSFailures:(bool)arg1;
- (void)setIsFetchAllRecordZonesOperation:(bool)arg1;
- (void)setRecordZoneFetchedProgressBlock:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;

@end