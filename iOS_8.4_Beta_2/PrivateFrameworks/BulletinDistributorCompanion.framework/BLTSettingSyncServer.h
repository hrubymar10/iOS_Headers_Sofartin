/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingSyncServer : BLTRemoteObject <BLTSettingSyncing> {
    <BLTSettingSyncing> *_delegate;
    BLTPreviouslySentMessageStore *_sectionInfoPreviouslySentMessageStore;
    BLTPreviouslySentMessageStore *_sectionSubtypeParametersIconsPreviouslySentMessageStore;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <BLTSettingSyncing> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) BLTPreviouslySentMessageStore * sectionInfoPreviouslySentMessageStore;
@property(assign,retain) BLTPreviouslySentMessageStore * sectionSubtypeParametersIconsPreviouslySentMessageStore;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (id)delegate;
- (void)handleSetSectionInfoRequest:(id)arg1;
- (void)handleSetSectionInfoResponse:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconRequest:(id)arg1;
- (void)handleSetSectionSubtypeParametersIconResponse:(id)arg1;
- (id)init;
- (void)registerProtobufHandlers;
- (id)sectionInfoPreviouslySentMessageStore;
- (id)sectionSubtypeParametersIconsPreviouslySentMessageStore;
- (void)setDelegate:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (void)setSectionInfo:(id)arg1 completion:(id)arg2;
- (void)setSectionInfo:(id)arg1 withQueue:(id)arg2 withSent:(id)arg3 withAcknowledgement:(id)arg4;
- (void)setSectionInfoPreviouslySentMessageStore:(id)arg1;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 completion:(id)arg4;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 withQueue:(id)arg4 withSent:(id)arg5 withAcknowledgement:(id)arg6;
- (void)setSectionSubtypeParametersIconsPreviouslySentMessageStore:(id)arg1;

@end
