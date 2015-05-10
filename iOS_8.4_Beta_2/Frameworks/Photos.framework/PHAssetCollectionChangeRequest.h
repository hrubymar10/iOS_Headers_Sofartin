/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCollectionChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHCollectionChangeRequestHelper *_assetsHelper;
    NSString *_clientName;
    int _clientProcessID;
    bool _entitled;
    PHChangeRequestHelper *_helper;
    PHAssetCollection *_originalAssetCollection;
}

@property(assign,readonly) PHCollectionChangeRequestHelper * assetsHelper;
@property(assign,readonly) NSString * clientName;
@property(assign,readonly) int clientProcessID;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(getter=isEntitled,assign,readonly) bool entitled;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) PHChangeRequestHelper * helper;
@property(assign,readonly) NSString * managedEntityName;
@property(getter=isMutated,assign,readonly) bool mutated;
@property(getter=isNew,assign,readonly) bool new;
@property(assign,readonly) NSManagedObjectID * objectID;
@property(assign,retain) PHAssetCollection * originalAssetCollection;
@property(assign,readonly) PHObjectPlaceholder * placeholderForCreatedAssetCollection;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSString * title;
@property(assign,readonly) NSString * uuid;

+ (id)changeRequestForAssetCollection:(id)arg1;
+ (id)changeRequestForAssetCollection:(id)arg1 assets:(id)arg2;
+ (id)creationRequestForAssetCollectionWithTitle:(id)arg1;
+ (void)deleteAssetCollections:(id)arg1;

- (void).cxx_destruct;
- (id)_mutableObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareWithFetchResult:(id)arg1;
- (void)_setOriginalAssetCollection:(id)arg1;
- (void)addAsset:(id)arg1;
- (void)addAssets:(id)arg1;
- (bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (bool)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (id)assetsHelper;
- (bool)canGenerateUUIDLocally;
- (id)clientName;
- (int)clientProcessID;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 entitled:(bool)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (void)insertAsset:(id)arg1 inAssetsAtIndex:(unsigned long long)arg2;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
- (bool)isEntitled;
- (bool)isMutated;
- (bool)isNew;
- (id)managedEntityName;
- (void)moveAssetsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)mutations;
- (id)objectID;
- (id)originalAssetCollection;
- (id)placeholderForCreatedAssetCollection;
- (void)removeAsset:(id)arg1;
- (void)removeAssetFromAssetsAtIndex:(unsigned long long)arg1;
- (void)removeAssets:(id)arg1;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)replaceAssetInAssetsAtIndex:(unsigned long long)arg1 withAsset:(id)arg2;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)setOriginalAssetCollection:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)uuid;
- (bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

@end
