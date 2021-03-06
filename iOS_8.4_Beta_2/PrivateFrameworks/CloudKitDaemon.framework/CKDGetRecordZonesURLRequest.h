/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetRecordZonesURLRequest : CKDURLRequest {
    id _recordZoneFetchedBlock;
    NSArray *_recordZones;
    NSMutableDictionary *_zoneIDByRequestID;
    NSArray *_zoneIDs;
}

@property(assign,copy) id recordZoneFetchedBlock;
@property(assign,readonly) NSArray * recordZones;
@property(assign,retain) NSMutableDictionary * zoneIDByRequestID;
@property(assign,retain) NSArray * zoneIDs;

- (void).cxx_destruct;
- (id)initWithRecordZoneIDs:(id)arg1;
- (int)operationType;
- (id)recordZoneFetchedBlock;
- (id)recordZones;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setRecordZoneFetchedBlock:(id)arg1;
- (void)setZoneIDByRequestID:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)zoneIDByRequestID;
- (id)zoneIDs;
- (id)zoneIDsToLock;

@end
