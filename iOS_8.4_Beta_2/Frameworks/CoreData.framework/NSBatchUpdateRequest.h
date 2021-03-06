/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {
    NSDictionary *_columnsToUpdate;
    id _entity;
    NSString *_entityName;
    struct _requestFlags { 
        unsigned int includesSubentities : 1; 
        unsigned int resultType : 2; 
        unsigned int entityIsName : 1; 
        unsigned int _RESERVED : 28; 
    } _flags;
    NSPredicate *_predicate;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) NSEntityDescription * entity;
@property(assign,copy) NSString * entityName;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool includesSubentities;
@property(assign,retain) NSPredicate * predicate;
@property(assign,copy) NSDictionary * propertiesToUpdate;
@property(assign,readwrite) unsigned long long resultType;
@property(assign,readonly) Class superclass;

+ (id)batchUpdateRequestWithEntityName:(id)arg1;

- (id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id*)arg2;
- (void)_resolveEntityWithContext:(id)arg1;
- (void)_setValidatedPropertiesToUpdate:(id)arg1;
- (void)dealloc;
- (id)entity;
- (id)entityName;
- (bool)includesSubentities;
- (id)init;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (id)predicate;
- (id)propertiesToUpdate;
- (unsigned long long)requestType;
- (unsigned long long)resultType;
- (void)setIncludesSubentities:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPropertiesToUpdate:(id)arg1;
- (void)setResultType:(unsigned long long)arg1;

@end
