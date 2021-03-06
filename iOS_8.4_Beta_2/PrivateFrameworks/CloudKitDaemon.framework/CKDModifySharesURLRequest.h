/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifySharesURLRequest : CKDURLRequest {
    NSMutableDictionary *_participantIDByRequestID;
    NSMutableDictionary *_shareIDByRequestID;
    id _shareModifiedBlock;
    NSArray *_sharesToDelete;
    NSMutableDictionary *_sharesToSaveByID;
}

@property(assign,retain) NSMutableDictionary * participantIDByRequestID;
@property(assign,retain) NSMutableDictionary * shareIDByRequestID;
@property(assign,copy) id shareModifiedBlock;
@property(assign,retain) NSArray * sharesToDelete;
@property(assign,retain) NSMutableDictionary * sharesToSaveByID;

- (void).cxx_destruct;
- (id)initWithSharesToSave:(id)arg1 sharesToDelete:(id)arg2;
- (int)operationType;
- (id)participantIDByRequestID;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setParticipantIDByRequestID:(id)arg1;
- (void)setShareIDByRequestID:(id)arg1;
- (void)setShareModifiedBlock:(id)arg1;
- (void)setSharesToDelete:(id)arg1;
- (void)setSharesToSaveByID:(id)arg1;
- (id)shareIDByRequestID;
- (id)shareModifiedBlock;
- (id)sharesToDelete;
- (id)sharesToSaveByID;

@end
