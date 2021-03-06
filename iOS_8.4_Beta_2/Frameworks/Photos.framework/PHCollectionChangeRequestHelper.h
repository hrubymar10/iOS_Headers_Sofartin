/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollectionChangeRequestHelper : NSObject {
    bool _allowsInsert;
    bool _allowsMove;
    bool _allowsRemove;
    PHChangeRequestHelper *_changeRequestHelper;
    NSString *_destinationEntityName;
    id _isDestinationObjectValid;
    NSMutableArray *_mutableObjectIDsAndUUIDs;
    NSArray *_originalObjectIDs;
    NSString *_relationshipName;
}

@property(assign,readwrite) bool allowsInsert;
@property(assign,readwrite) bool allowsMove;
@property(assign,readwrite) bool allowsRemove;
@property(assign,retain) PHChangeRequestHelper * changeRequestHelper;
@property(assign,retain) NSString * destinationEntityName;
@property(assign,copy) id isDestinationObjectValid;
@property(assign,retain) NSMutableArray * mutableObjectIDsAndUUIDs;
@property(assign,retain) NSArray * originalObjectIDs;
@property(assign,readonly) NSString * relationshipName;

+ (id)_offsetsFromSourceOIDs:(id)arg1 toManagedObjects:(id)arg2;

- (void).cxx_destruct;
- (bool)allowsInsert;
- (bool)allowsMove;
- (bool)allowsRemove;
- (bool)applyMutationsToManagedObject:(id)arg1 mutableChildren:(id)arg2 error:(id*)arg3;
- (id)changeRequestHelper;
- (id)destinationEntityName;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithRelationshipName:(id)arg1 changeRequestHelper:(id)arg2;
- (id)initWithRelationshipName:(id)arg1 xpcDict:(id)arg2 changeRequestHelper:(id)arg3;
- (id)isDestinationObjectValid;
- (id)mutableObjectIDsAndUUIDs;
- (id)originalObjectIDs;
- (id)relationshipName;
- (void)setAllowsInsert:(bool)arg1;
- (void)setAllowsMove:(bool)arg1;
- (void)setAllowsRemove:(bool)arg1;
- (void)setChangeRequestHelper:(id)arg1;
- (void)setDestinationEntityName:(id)arg1;
- (void)setIsDestinationObjectValid:(id)arg1;
- (void)setMutableObjectIDsAndUUIDs:(id)arg1;
- (void)setOriginalObjectIDs:(id)arg1;

@end
