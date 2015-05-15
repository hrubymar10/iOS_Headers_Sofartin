/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHQuery : NSObject <NSCopying, NSPredicateVisitor> {
    bool __includesCameraRoll;
    bool __includesCloudSharedAssets;
    bool __includesTrashedObjects;
    bool __includesiTunesSyncAssets;
    NSPredicate *_basePredicate;
    NSPredicate *_cachedFetchOptionsPredicate;
    long long _collectionFetchType;
    id _combinedQueryGroupKey;
    NSString *_combinedQueryKeyPath;
    NSManagedObjectID *_combinedQuerySeparatingIdentifier;
    PHCollection *_containerCollection;
    NSManagedObjectID *_containerIdentifier;
    NSRelationshipDescription *_containerRelationship;
    unsigned long long _containerSortingAttributesIndexValue;
    unsigned long long _containerToObjectRelationshipIndexValue;
    PHFetchOptions *_fetchOptions;
    NSFetchRequest *_fetchRequest;
    NSString *_fetchType;
    NSPredicate *_filterPredicate;
    unsigned long long _filteringAttributesIndexValue;
    NSMutableSet *_filteringKeys;
    unsigned long long _filteringRelationshipsIndexValue;
    unsigned long long _objectToContainerRelationshipIndexValue;
    PHPhotoLibrary *_photoLibrary;
    bool _preparedCombinedQueryKeys;
    bool _preparedContainerInfo;
    bool _preparedFilteringAttributes;
    NSArray *_seedOIDs;
}

@property(setter=_setIncludesCameraRoll:,assign,readwrite) bool _includesCameraRoll;
@property(setter=_setIncludesCloudSharedAssets:,assign,readwrite) bool _includesCloudSharedAssets;
@property(setter=_setIncludesTrashedObjects:,assign,readwrite) bool _includesTrashedObjects;
@property(setter=_setIncludesiTunesSyncAssets:,assign,readwrite) bool _includesiTunesSyncAssets;
@property(assign,readonly) NSPredicate * basePredicate;
@property(assign,readonly) id combinedQueryGroupKey;
@property(assign,readonly) NSString * combinedQueryKeyPath;
@property(assign,readonly) NSManagedObjectID * combinedQuerySeparatingIdentifier;
@property(assign,copy) PHFetchOptions * fetchOptions;
@property(assign,readonly) NSFetchRequest * fetchRequest;
@property(assign,readonly) NSString * fetchType;
@property(assign,readonly) NSPredicate * filterPredicate;
@property(assign,readonly) PHPhotoLibrary * photoLibrary;
@property(assign,readonly) NSArray * seedOIDs;

+ (id)_containerIdentifierForFetchType:(id)arg1 predicate:(id)arg2 outRelationship:(id*)arg3;
+ (id)_fetchOptionsForFetchingAssetsFromAssetCollection:(id)arg1 options:(id)arg2;
+ (id)_filterPredicateFromFetchOptionsPredicate:(id)arg1 phClass:(Class)arg2;
+ (id)_queryForKeyAssetInAssetCollection:(id)arg1 withRelationshipKeyPath:(id)arg2 options:(id)arg3;
+ (id)_relationshipForFetchType:(id)arg1 predicate:(id)arg2;
+ (id)_rootFolderID;
+ (id)_transformedSortDescriptors:(id)arg1 forFetchType:(id)arg2;
+ (id)combinedFetchRequestForQueries:(id)arg1;
+ (id)defaultSortDescriptorForFetchType:(id)arg1 predicate:(id)arg2;
+ (void)min:(id*)arg1 andMax:(id*)arg2 forKeypath:(id)arg3 ForType:(id)arg4 restrictedToOIDs:(id)arg5 inLibrary:(id)arg6;
+ (id)queryForAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2;
+ (id)queryForAssetCollectionsWithCloudIdentifiers:(id)arg1;
+ (id)queryForAssetCollectionsWithLocalIdentifiers:(id)arg1;
+ (id)queryForAssetCollectionsWithObjectIDs:(id)arg1;
+ (id)queryForAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)queryForAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithMediaType:(long long)arg1 options:(id)arg2;
+ (id)queryForAssetsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)queryForAssetsWithOptions:(id)arg1;
+ (id)queryForCloudSharedAlbums;
+ (id)queryForCollectionListContainingCollection:(id)arg1;
+ (id)queryForCollectionListsWithCloudIdentifiers:(id)arg1;
+ (id)queryForCollectionListsWithLocalIdentifiers:(id)arg1;
+ (id)queryForCollectionListsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)queryForCollectionsInCollectionList:(id)arg1;
+ (id)queryForCustomKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForMomentListsWithSubType:(long long)arg1 containingMoment:(id)arg2;
+ (id)queryForMomentListsWithSubType:(long long)arg1 options:(id)arg2;
+ (id)queryForMoments;
+ (id)queryForMomentsContainingAssetsWithLocalIdentifiers:(id)arg1;
+ (id)queryForMomentsInMomentList:(id)arg1;
+ (id)queryForPrimaryKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForRootAlbumCollectionList;
+ (id)queryForSecondaryKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForTertiaryKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)queryForTopLevelUserCollections;
+ (id)queryForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3;
+ (id)queryForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4;
+ (id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(bool)arg3;

- (void).cxx_destruct;
- (id)_containerRelationship;
- (id)_createFetchRequestIncludingBasePredicate:(bool)arg1;
- (id)_effectiveSortDescriptors;
- (bool)_includesCameraRoll;
- (bool)_includesCloudSharedAssets;
- (bool)_includesTrashedObjects;
- (bool)_includesiTunesSyncAssets;
- (void)_prepareCombinedQueryKeys;
- (void)_prepareContainerInfo;
- (void)_prepareFilteringAttributes;
- (void)_setContainerCollection:(id)arg1;
- (void)_setIncludesCameraRoll:(bool)arg1;
- (void)_setIncludesCloudSharedAssets:(bool)arg1;
- (void)_setIncludesTrashedObjects:(bool)arg1;
- (void)_setIncludesiTunesSyncAssets:(bool)arg1;
- (id)basePredicate;
- (long long)collectionFetchType;
- (id)combinedQueryGroupKey;
- (id)combinedQueryKeyPath;
- (id)combinedQuerySeparatingIdentifier;
- (id)containerIdentifier;
- (unsigned long long)containerSortingAttributesIndexValue;
- (unsigned long long)containerToObjectRelationshipIndexValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectivePredicateForPHClass:(Class)arg1 request:(id)arg2 includingBasePredicate:(bool)arg3;
- (id)executeQuery;
- (id)fetchOptions;
- (id)fetchRequest;
- (id)fetchType;
- (id)filterPredicate;
- (unsigned long long)filteringAttributesIndexValue;
- (unsigned long long)filteringRelationshipsIndexValue;
- (id)initForType:(id)arg1 withBasePredicate:(id)arg2 inLibrary:(id)arg3;
- (id)initForType:(id)arg1 withBasePredicate:(id)arg2 seedOIDs:(id)arg3 inLibrary:(id)arg4;
- (unsigned long long)objectToContainerRelationshipIndexValue;
- (id)photoLibrary;
- (id)seedOIDs;
- (void)setFetchOptions:(id)arg1;
- (id)updatedQueryWithChange:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
