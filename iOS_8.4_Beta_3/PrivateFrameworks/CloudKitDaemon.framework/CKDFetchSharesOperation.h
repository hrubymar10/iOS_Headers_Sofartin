/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchSharesOperation : CKDDatabaseOperation {
    id _shareFetchedProgressBlock;
    NSArray *_shareIDs;
    NSArray *_zoneIDs;
}

@property (nonatomic, copy) id shareFetchedProgressBlock;
@property (nonatomic, retain) NSArray *shareIDs;
@property (nonatomic, retain) NSArray *zoneIDs;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleShareFetched:(id)arg1 shareID:(id)arg2 zoneID:(id)arg3 operationResult:(id)arg4;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (void)setShareFetchedProgressBlock:(id)arg1;
- (void)setShareIDs:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)shareFetchedProgressBlock;
- (id)shareIDs;
- (id)zoneIDs;

@end
