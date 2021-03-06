/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (unsigned long long)_AVTypesForMediaItem:(id)arg1;
- (long long)_availabilityForMediaItem:(id)arg1;
- (id)_newDefaultQuery;
- (void)_restrictQueryToLocalContent:(id)arg1;
- (id)_storePlatformKindForMediaItem:(id)arg1;
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(id)arg2;
- (id)exposedPlatformItemKinds;
- (bool)performActionForLibraryItem:(id)arg1;
- (id)stateForLibraryItem:(id)arg1;

@end
