/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProviderListEntityProvider : NSObject <MusicEntityProviding> {
    NSArray *_entityProviderList;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSArray * entityProviderList;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (void)_getEntityProvider:(id*)arg1 forIndexBarEntryIndex:(unsigned long long)arg2 returningLocalIndexBarEntryIndex:(unsigned long long*)arg3;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)entityProviderList;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)getEntityProvider:(id*)arg1 forSectionIndex:(unsigned long long)arg2 returningLocalSectionIndex:(unsigned long long*)arg3;
- (bool)hasEntities;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithEntityProviderList:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (void)setEntityProviderList:(id)arg1;

@end
