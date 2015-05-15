/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderManager : NSObject <BBDataProviderStoreDelegate> {
    <BBDataProviderManagerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_loadDataProviderQueue;
    bool _loadQueueSuspended;
    BBLocalDataProviderStore *_localDataProviderStore;
    NSMutableDictionary *_parentFactoriesBySectionID;
    NSObject<OS_dispatch_queue> *_queue;
    BBRemoteDataProviderConnectionResolver *_remoteDataProviderResolver;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)_configureDataProvider:(id)arg1;
- (id)_configureSectionInfo:(id)arg1 forDataProvider:(id)arg2;
- (id)_queue_dataProviderForUniversalSectionID:(id)arg1;
- (id)_queue_getSectionInfoForSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 completion:(id)arg3;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)loadAllDataProviders;
- (id)localSectionIdentifierFromDismissalSectionIdentifer:(id)arg1;
- (void)noteSettingsChanged:(id)arg1 forSectionID:(id)arg2;
- (id)parentSectionDataProviderFactoryForSectionID:(id)arg1;
- (void)performBlockOnDataProviders:(id)arg1;
- (id)rebuildSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)reloadIdentityForSectionID:(id)arg1 withCompletion:(id)arg2;
- (id)universalSectionIDForSectionID:(id)arg1;

@end
