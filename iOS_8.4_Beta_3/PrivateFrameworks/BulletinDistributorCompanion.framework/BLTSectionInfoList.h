/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate> {
    <BLTSectionInfoListDelegate> *_delegate;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _lock;
    BLTSectionInfoListBridgeProvider *_overrideProvider;
    NSMutableDictionary *_sectionInfoListItemsBySectionID;
    BLTSectionInfoListBBProvider *_sectionInfoProvider;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <BLTSectionInfoListDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) BLTSectionInfoListBridgeProvider * overrideProvider;
@property(assign,retain) BLTSectionInfoListBBProvider * sectionInfoProvider;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)effectiveSectionInfoForSectionID:(id)arg1;
- (id)effectiveSectionInfos;
- (id)init;
- (id)overriddenSectionInfoForSectionID:(id)arg1;
- (id)overrideProvider;
- (void)reloadWithCompletion:(id)arg1;
- (id)sectionInfoForSectionID:(id)arg1;
- (id)sectionInfoProvider;
- (void)setDelegate:(id)arg1;
- (void)setOverrideProvider:(id)arg1;
- (void)setSectionInfoProvider:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)updateOverrides:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1 withUniversalSectionID:(id)arg2 displayName:(id)arg3;

@end