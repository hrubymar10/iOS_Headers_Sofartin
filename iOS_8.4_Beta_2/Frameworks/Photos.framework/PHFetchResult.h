/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration> {
    unsigned long long _audiosCount;
    long long _chunkSizeForFetch;
    _PHFetchRequestWrapper *_fetchRequestWrapper;
    PHBatchFetchingArray *_fetchedObjects;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    unsigned long long _photosCount;
    PHQuery *_query;
    bool _registeredForChangeNotificationDeltas;
    NSArray *_seedOIDs;
    unsigned long long _videosCount;
}

@property(assign,readwrite) long long chunkSizeForFetch;
@property(assign,readonly) unsigned long long count;
@property(assign,readonly) NSFetchRequest * fetchRequest;
@property(assign,readonly) NSArray * fetchedObjectIDs;
@property(assign,readonly) NSArray * fetchedObjects;
@property(assign,readonly) id firstObject;
@property(assign,readonly) id lastObject;
@property(assign,readonly) PHQuery * query;

+ (id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2;
+ (id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2;
+ (id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1 includeTrash:(bool)arg2;
+ (id)pl_fetchResultForAssetContainerList:(id)arg1;
+ (id)pl_fetchResultForStandInAssetCollection:(id)arg1;
+ (id)pl_filterPredicateForAssetContainer:(id)arg1;

- (void).cxx_destruct;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (long long)chunkSizeForFetch;
- (long long)collectionFetchType;
- (id)containerIdentifier;
- (bool)containsObject:(id)arg1;
- (id)copyWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)fetchRequest;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchedObjectIDs;
- (id)fetchedObjectIDsSet;
- (id)fetchedObjects;
- (id)fetchedObjectsUsingManagedObjectContext:(id)arg1;
- (id)firstObject;
- (void)getMediaTypeCounts;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithQuery:(id)arg1;
- (id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(bool)arg3 usingManagedObjectContext:(id)arg4;
- (bool)interestedInChange:(id)arg1;
- (bool)isRegisteredForChangeNotificationDeltas;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)photoLibrary;
- (id)pl_photoLibraryObject;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)query;
- (void)setChunkSizeForFetch:(long long)arg1;
- (void)setRegisteredForChangeNotificationDeltas:(bool)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
