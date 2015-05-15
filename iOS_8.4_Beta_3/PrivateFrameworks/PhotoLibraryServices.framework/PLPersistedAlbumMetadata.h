/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedAlbumMetadata : NSObject {
    bool _allowsOverwite;
    NSMutableOrderedSet *_assetUUIDs;
    NSString *_cloudGUID;
    NSString *_customKeyAssetUUID;
    bool _customSortAscending;
    int _customSortKey;
    PLGenericAlbum *_genericAlbum;
    bool _inTrash;
    bool _isFolder;
    NSNumber *_kind;
    NSURL *_metadataURL;
    bool _pinned;
    NSString *_title;
    NSString *_uuid;
}

@property(assign,readwrite) bool allowsOverwite;
@property(assign,retain) NSMutableOrderedSet * assetUUIDs;
@property(assign,retain) NSString * cloudGUID;
@property(assign,retain) NSString * customKeyAssetUUID;
@property(assign,readwrite) bool customSortAscending;
@property(assign,readwrite) int customSortKey;
@property(assign,retain) PLGenericAlbum * genericAlbum;
@property(getter=isInTrash,assign,readwrite) bool inTrash;
@property(assign,readonly) bool isFolder;
@property(assign,retain) NSNumber * kind;
@property(assign,retain) NSURL * metadataURL;
@property(getter=isPinned,assign,readwrite) bool pinned;
@property(assign,retain) NSString * title;
@property(assign,retain) NSString * uuid;

+ (bool)_isAlbumMetadataExtension:(id)arg1;
+ (bool)_isFolderMetadataExtension:(id)arg1;
+ (bool)isAlbumMetadataPath:(id)arg1;
+ (bool)isFolderMetadataPath:(id)arg1;
+ (bool)isValidPath:(id)arg1;

- (void)_readMetadata;
- (void)_saveMetadata;
- (bool)allowsOverwite;
- (id)assetUUIDs;
- (id)cloudGUID;
- (id)customKeyAssetUUID;
- (bool)customSortAscending;
- (int)customSortKey;
- (void)dealloc;
- (id)description;
- (id)extensionForKind:(id)arg1;
- (id)genericAlbum;
- (id)init;
- (id)initWithPLGenericAlbum:(id)arg1;
- (id)initWithPersistedDataAtPath:(id)arg1;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isPinned;
- (id)kind;
- (id)metadataURL;
- (void)persistAlbumData;
- (void)removePersistedAlbumData;
- (void)setAllowsOverwite:(bool)arg1;
- (void)setAssetUUIDs:(id)arg1;
- (void)setCloudGUID:(id)arg1;
- (void)setCustomKeyAssetUUID:(id)arg1;
- (void)setCustomSortAscending:(bool)arg1;
- (void)setCustomSortKey:(int)arg1;
- (void)setGenericAlbum:(id)arg1;
- (void)setInTrash:(bool)arg1;
- (void)setKind:(id)arg1;
- (void)setMetadataURL:(id)arg1;
- (void)setPinned:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(bool)arg2;
- (id)uuid;

@end
