/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHManualFetchResult : PHFetchResult {
    NSString *_identifier;
    NSOrderedSet *_objectIDs;
    NSArray *_objects;
}

@property (readonly) NSString *identifier;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSArray *objects;

- (void).cxx_destruct;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (long long)collectionFetchType;
- (id)containerIdentifier;
- (id)description;
- (id)fetchRequest;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchUpdatedObjects;
- (id)fetchedObjectIDs;
- (id)fetchedObjects;
- (void)getMediaTypeCounts;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(id)arg1 identifier:(id)arg2 registerIfNeeded:(bool)arg3;
- (bool)interestedInChange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)objectIDs;
- (id)objects;
- (id)photoLibrary;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
