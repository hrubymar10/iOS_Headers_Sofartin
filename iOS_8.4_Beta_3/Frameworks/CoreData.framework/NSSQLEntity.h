/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLEntity : NSStoreMapping {
    NSMutableArray *_attrColumns;
    NSMutableArray *_columnsToFetch;
    struct __CFDictionary { } *_correlationDeleteCache;
    struct __CFDictionary { } *_correlationInsertCache;
    struct __CFDictionary { } *_correlationMasterReorderCache;
    struct __CFDictionary { } *_correlationMasterReorderCachePart2;
    struct __CFDictionary { } *_correlationReorderCache;
    NSSQLStatement *_deletionStatementCache;
    NSMutableArray *_ekColumns;
    NSEntityDescription *_entityDescription;
    unsigned int _entityID;
    NSSQLEntityKey *_entityKey;
    NSSQLStatement *_faultingStatementCache;
    void *_fetch_entity_plan;
    NSMutableArray *_fkColumns;
    NSMutableArray *_fokColumns;
    NSSQLStatement *_insertStatementCache;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    long long _maxPK;
    NSSQLModel *_model;
    void *_odiousHashHackStorage;
    NSSQLOptLockKey *_optLockKey;
    unsigned int _pkCount;
    NSSQLPrimaryKey *_primaryKey;
    NSMutableDictionary *_properties;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyAllCache;
    NSArray *_propertyManyToManyCache;
    NSKnownKeysMappingStrategy *_propertyMapping;
    NSSQLEntity *_rootEntity;
    struct __sqlentityFlags { 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _reserved : 31; 
    } _sqlentityFlags;
    NSMutableArray *_subentities;
    unsigned int _subentityMaxID;
    NSSQLEntity *_superentity;
    NSString *_tableName;
    NSMutableDictionary *_toManyRelationshipStatementCache;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _toOneRange;
    NSMutableArray *_virtualFKs;
}

- (void)_addColumnToFetch:(id)arg1;
- (void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2;
- (void)_addRootColumnToFetch:(id)arg1;
- (void)_addSubentity:(id)arg1;
- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;
- (bool)_collectFKSlots:(id)arg1 error:(id*)arg2;
- (void)_doPostModelGenerationCleanup;
- (bool)_entityIsBroken:(id*)arg1;
- (unsigned int)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned int)arg2;
- (void)_generateInverseRelationshipsAndMore;
- (void)_generateProperties;
- (void*)_odiousHashHack;
- (unsigned int)_pkCount;
- (id)_propertySearchMapping;
- (void)_resetPKCount;
- (void)_setMaxPK:(long long)arg1;
- (id)_sqlPropertyWithRenamingIdentifier:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_toOneRange;
- (void)addInsertedObject:(id)arg1 toArray:(id)arg2;
- (bool)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;
- (id)attributeColumns;
- (id)attributeNamed:(id)arg1;
- (id)attributes;
- (void)cacheCorrelationDeleteStatement:(id)arg1 forRelationship:(id)arg2;
- (void)cacheCorrelationInsertStatement:(id)arg1 forRelationship:(id)arg2;
- (void)cacheCorrelationMasterReorderStatement:(id)arg1 forRelationship:(id)arg2;
- (void)cacheCorrelationMasterReorderStatementPart2:(id)arg1 forRelationship:(id)arg2;
- (void)cacheCorrelationReorderStatement:(id)arg1 forRelationship:(id)arg2;
- (void)cacheDeletionStatement:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3;
- (void)cacheInsertStatement:(id)arg1;
- (void)clearCachedStatements;
- (id)columnsToCreate;
- (id)columnsToFetch;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)correlationDeleteStatementForRelationship:(id)arg1;
- (id)correlationInsertStatementForRelationship:(id)arg1;
- (id)correlationMasterReorderStatementForRelationship:(id)arg1;
- (id)correlationMasterReorderStatementPart2ForRelationship:(id)arg1;
- (id)correlationReorderStatementForRelationship:(id)arg1;
- (struct __CFDictionary { }*)createCorrelationCacheDictionary;
- (void)dealloc;
- (id)deletionStatement;
- (id)description;
- (id)entityDescription;
- (unsigned int)entityID;
- (id)externalName;
- (id)faultingStatement;
- (unsigned int)fetchIndexForKey:(id)arg1;
- (void)finalize;
- (id)foreignEntityKeyColumns;
- (id)foreignKeyColumns;
- (id)foreignOrderKeyColumns;
- (bool)hasAttributesWithExternalDataReferences;
- (bool)hasInheritance;
- (bool)hasSubentities;
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;
- (void)insertOrReplaceStatement:(id)arg1 forRelationship:(id)arg2 inDictionary:(struct __CFDictionary { }*)arg3;
- (id)insertStatement;
- (bool)isKindOfSQLEntity:(id)arg1;
- (bool)isRootEntity;
- (id)manyToManyRelationships;
- (id)mappingGenerator;
- (id)model;
- (id)name;
- (long long)nextPrimaryKey64;
- (id)optLockKey;
- (id)preparedFaultingCachesForRelationship:(id)arg1;
- (id)primaryKey;
- (id)properties;
- (id)propertiesByName;
- (id)propertyMapping;
- (id)propertyNamed:(id)arg1;
- (id)relationshipNamed:(id)arg1;
- (id)rootEntity;
- (void)setSubentities:(id)arg1;
- (void)setSuperentity:(id)arg1;
- (id)subentities;
- (id)subentityKey;
- (unsigned int)subentityMaxID;
- (id)superentity;
- (id)tableName;
- (id)toManyRelationships;
- (id)virtualForeignKeyColumns;

@end
