/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifySharesOperation : CKDDatabaseOperation {
    id _deleteCompletionBlock;
    bool _haveOutstandingMetadatas;
    int _numShareSaveAttempts;
    id _saveCompletionBlock;
    NSMutableArray *_shareMetadatas;
}

@property(assign,copy) id deleteCompletionBlock;
@property(assign,readwrite) bool haveOutstandingMetadatas;
@property(assign,readwrite) int numShareSaveAttempts;
@property(assign,copy) id saveCompletionBlock;
@property(assign,retain) NSMutableArray * shareMetadatas;

- (void).cxx_destruct;
- (void)_addOwnerToShares;
- (void)_callbackForMetadata:(id)arg1;
- (bool)_cleanPublicPCSforShare:(id)arg1 withError:(id*)arg2;
- (id)_createNewPCSDataForShare:(id)arg1 error:(id*)arg2;
- (bool)_decryptPCSDataForMetadata:(id)arg1;
- (void)_determineEnvironment;
- (void)_fetchPCSDataForDeletingMetadata:(id)arg1;
- (void)_fetchPCSDataForMetadata:(id)arg1;
- (void)_fetchPCSDataForShares;
- (void)_fetchParticipantsForShares;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handlePCSData:(id)arg1 forDeletingMetadata:(id)arg2 withError:(id)arg3;
- (void)_handlePCSData:(id)arg1 forMetadata:(id)arg2 withError:(id)arg3;
- (void)_handleShareDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleShareFetched:(id)arg1 forMetadata:(id)arg2 error:(id)arg3;
- (void)_handleShareSaved:(id)arg1 forMetadata:(id)arg2 responseCode:(id)arg3;
- (id)_ownerUserIdentity;
- (bool)_performMetadataCallbacks;
- (void)_preparePCSDataForShares;
- (bool)_removeSelfFromPublicPCSForShareInfo:(id)arg1 error:(id*)arg2;
- (void)_saveSharesToServer;
- (bool)_serializePCSDataForShare:(id)arg1 error:(id*)arg2;
- (bool)_serializePublicPCSForShareInfo:(id)arg1 error:(id*)arg2;
- (bool)_updateSharePublicPCS:(id)arg1 error:(id*)arg2;
- (id)deleteCompletionBlock;
- (bool)haveOutstandingMetadatas;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (int)numShareSaveAttempts;
- (id)saveCompletionBlock;
- (void)setDeleteCompletionBlock:(id)arg1;
- (void)setHaveOutstandingMetadatas:(bool)arg1;
- (void)setNumShareSaveAttempts:(int)arg1;
- (void)setSaveCompletionBlock:(id)arg1;
- (void)setShareMetadatas:(id)arg1;
- (id)shareMetadatas;

@end