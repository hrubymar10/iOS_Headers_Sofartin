/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityToManyConflictDiff : NSObject {
    NSMutableSet *_deletedObjectIDs;
    NSMutableSet *_insertedObjectIDs;
    NSString *_relationshipKey;
}

@property(assign,readonly) NSMutableSet * deletedObjectIDs;
@property(assign,readonly) NSMutableSet * insertedObjectIDs;
@property(assign,readonly) NSString * relationshipKey;

- (void)dealloc;
- (id)deletedObjectIDs;
- (id)description;
- (void)diffWithLogSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2;
- (id)init;
- (id)initForRelationshipAtKey:(id)arg1;
- (id)insertedObjectIDs;
- (bool)isEqual:(id)arg1;
- (id)relationshipKey;

@end