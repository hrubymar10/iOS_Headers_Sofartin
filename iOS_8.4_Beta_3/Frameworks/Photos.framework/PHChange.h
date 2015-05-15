/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChange : NSObject {
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMapTable *_changeHandlingMap;
    NSDictionary *_changedAttributesByOID;
    NSSet *_changedObjectIDs;
    NSArray *_changedObjectIDsArray;
    NSDictionary *_changedRelationshipsByOID;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSSet *_deletedObjectIDs;
    NSSet *_insertedObjectIDs;
    bool _unknownMergeEvent;
    NSMutableDictionary *_updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary *_updatedObjectsChangedRelationshipsByEntityName;
}

+ (id)handlerQueue;
+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(id)arg2;

- (void).cxx_destruct;
- (void)_prepareCachedValuesForEntity:(id)arg1;
- (bool)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2;
- (bool)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2;
- (id)changeDetailsForFetchResult:(id)arg1;
- (id)changeDetailsForObject:(id)arg1;
- (id)changedAttributesByOID;
- (id)changedRelationshipsByOID;
- (bool)contentChangedForPHAssetOID:(id)arg1;
- (id)deletedObjectIDs;
- (id)description;
- (id)init;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(bool)arg2;
- (id)insertedObjectIDs;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(id)arg3;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(id)arg2;
- (id)updatedObjectIDs;

@end
