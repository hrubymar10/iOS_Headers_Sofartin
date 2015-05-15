/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordsURLRequest : CKDURLRequest {
    bool _atomic;
    NSData *_clientChangeTokenData;
    NSDictionary *_conflictLosersToResolveByRecordID;
    bool _oplock;
    NSMutableDictionary *_recordByRequestID;
    NSMutableDictionary *_recordIDByRequestID;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToEtags;
    id _recordPostedBlock;
    NSArray *_records;
    bool _sendAllFields;
}

@property(assign,readwrite) bool atomic;
@property(assign,retain) NSData * clientChangeTokenData;
@property(assign,retain) NSDictionary * conflictLosersToResolveByRecordID;
@property(assign,readwrite) bool oplock;
@property(assign,retain) NSMutableDictionary * recordByRequestID;
@property(assign,retain) NSMutableDictionary * recordIDByRequestID;
@property(assign,retain) NSArray * recordIDsToDelete;
@property(assign,retain) NSDictionary * recordIDsToDeleteToEtags;
@property(assign,copy) id recordPostedBlock;
@property(assign,retain) NSArray * records;
@property(assign,readwrite) bool sendAllFields;

- (void).cxx_destruct;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 oplock:(bool)arg3 sendAllFields:(bool)arg4 clientChangeTokenData:(id)arg5;
- (int)isolationLevel;
- (int)operationType;
- (bool)oplock;
- (id)recordByRequestID;
- (id)recordIDByRequestID;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordPostedBlock;
- (id)records;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (bool)sendAllFields;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setOplock:(bool)arg1;
- (void)setRecordByRequestID:(id)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordPostedBlock:(id)arg1;
- (void)setRecords:(id)arg1;
- (void)setSendAllFields:(bool)arg1;
- (id)zoneIDsToLock;

@end