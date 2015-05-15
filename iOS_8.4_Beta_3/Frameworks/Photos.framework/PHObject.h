/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObject : NSObject <NSCopying> {
    bool _deleted;
    NSManagedObjectID *_objectID;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _propertyHint;
    NSString *_uuid;
}

@property(getter=isDeleted,assign,readonly) bool deleted;
@property(assign,copy) NSString * localIdentifier;
@property(assign,readonly) NSManagedObjectID * objectID;
@property(assign,readonly) PHPhotoLibrary * photoLibrary;
@property(assign,readwrite) unsigned long long propertyHint;
@property(getter=isTransient,assign,readonly) bool transient;
@property(assign,readonly) NSString * uuid;

+ (id)authorizationAwareFetchResultWithOptions:(id)arg1 fetchBlock:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsBursts;
+ (bool)managedObjectSupportsCloudSharedType;
+ (bool)managedObjectSupportsHiddenState;
+ (bool)managedObjectSupportsPhotoStreamType;
+ (bool)managedObjectSupportsTrashedState;
+ (bool)managedObjectSupportsVisibilityState;
+ (bool)managedObjectSupportsWallpaperType;
+ (bool)managedObjectSupportsiTunesSyncType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)uuidFromLocalIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_identifier;
- (id)_shortObjectIDURI;
- (Class)changeRequestClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (bool)isTransient;
- (id)localIdentifier;
- (id)objectID;
- (id)photoLibrary;
- (unsigned long long)propertyHint;
- (void)setPropertyHint:(unsigned long long)arg1;
- (id)uuid;

@end