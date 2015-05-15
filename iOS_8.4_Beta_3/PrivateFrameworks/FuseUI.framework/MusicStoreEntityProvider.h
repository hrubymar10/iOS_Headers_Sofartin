/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreEntityProvider : NSObject <MusicClientContextConsuming, MusicEntityProviding> {
    MusicClientContext *_clientContext;
    <MusicEntityProviding> *_containerEntityProvider;
    long long _entityType;
    NSArray *_storeEntityProviderData;
    Class _storeEntityValueProviderClass;
    MPSparseArray *_storeEntityValueProviders;
    MPStoreItemMetadataContext *_storeItemMetadataContext;
}

@property(assign,retain) SKUIClientContext * clientContext;
@property(assign,retain) <MusicEntityProviding> * containerEntityProvider;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * storeEntityProviderData;
@property(assign,readonly) Class storeEntityValueProviderClass;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned long long)arg2;
- (unsigned long long)_entityCount;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_postInvalidationNotification;
- (id)_storeEntityValueProviderAtIndex:(unsigned long long)arg1;
- (id)clientContext;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)containerEntityProvider;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (bool)hasEntities;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)init;
- (id)initWithStoreEntityValueProviderClass:(Class)arg1;
- (id)initWithStoreItemMetadataContext:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (void)setClientContext:(id)arg1;
- (void)setContainerEntityProvider:(id)arg1;
- (void)setStoreEntityProviderData:(id)arg1;
- (id)storeEntityProviderData;
- (Class)storeEntityValueProviderClass;

@end
