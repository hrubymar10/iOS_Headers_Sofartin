/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudSharedAlbum : PHAssetCollection {
    short _cloudAlbumSubtype;
    bool _cloudMultipleContributorsEnabled;
    NSNumber *_cloudOwnerEmailKey;
    NSString *_cloudOwnerFirstName;
    NSString *_cloudOwnerFullName;
    NSString *_cloudOwnerLastName;
    bool _owned;
}

@property(assign,readonly) short cloudAlbumSubtype;
@property(getter=isCloudMultipleContributorsEnabled,assign,readonly) bool cloudMultipleContributorsEnabled;
@property(assign,retain) NSNumber * cloudOwnerEmailKey;
@property(assign,retain) NSString * cloudOwnerFirstName;
@property(assign,retain) NSString * cloudOwnerFullName;
@property(assign,retain) NSString * cloudOwnerLastName;
@property(getter=isOwned,assign,readonly) bool owned;

+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)canPerformEditOperation:(long long)arg1;
- (Class)changeRequestClass;
- (short)cloudAlbumSubtype;
- (id)cloudOwnerEmailKey;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerLastName;
- (bool)collectionHasFixedOrder;
- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isCloudMultipleContributorsEnabled;
- (bool)isOwned;
- (bool)isOwnedCloudSharedAlbum;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;

@end
