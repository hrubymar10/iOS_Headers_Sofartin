/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreItemMetadata : NSObject <MusicEntityValueProviding> {
    id _collectionStoreID;
    NSDictionary *_downloadAssetDictionary;
    NSDictionary *_downloadMetadataDictionary;
    NSDictionary *_storePlatformDictionary;
}

@property(assign,copy) NSString * artistName;
@property(assign,copy) id artistStoreID;
@property(assign,readonly) MPArtworkCatalog * artworkCatalog;
@property(assign,copy) NSArray * childrenStoreIDs;
@property(assign,copy) NSString * collectionName;
@property(assign,copy) id collectionStoreID;
@property(assign,copy) MPUContentItemIdentifierCollection * contentItemIdentifierCollection;
@property(assign,copy) NSString * copyrightText;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) double duration;
@property(assign,copy) NSDictionary * effectiveStorePlatformDictionary;
@property(getter=isExplicitContent,assign,readonly) bool explicitContent;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * itemKind;
@property(assign,copy) NSString * name;
@property(assign,copy) id storeID;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_entityValueHandlerForProperty:(id)arg1;
- (id)_newEntityValueHandlers;
- (id)artistName;
- (id)artistStoreID;
- (id)artworkCatalog;
- (id)childStorePlatformDictionaryForStoreID:(id)arg1;
- (id)childrenStoreIDs;
- (id)collectionName;
- (id)collectionStoreID;
- (id)contentItemIdentifierCollection;
- (id)copyrightText;
- (double)duration;
- (id)effectiveStorePlatformDictionary;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)initWithDownloadAssetDictionary:(id)arg1;
- (id)initWithStorePlatformDictionary:(id)arg1;
- (bool)isExplicitContent;
- (id)itemKind;
- (id)name;
- (id)storeID;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
