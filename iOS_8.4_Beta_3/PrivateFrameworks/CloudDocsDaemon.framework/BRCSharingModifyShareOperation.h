/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCItemID *_itemID;
    BRCServerZone *_serverZone;
    CKShare *_share;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_modifyShareAccessIfNecessaryGrantingAccess:(bool)arg1 completion:(id)arg2;
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1;
- (void)_updateDocumentWithShareID:(id)arg1 completion:(id)arg2;
- (id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3;
- (void)main;
- (void)performAfterFetchingBaseTokenIfNecessary:(id)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end
