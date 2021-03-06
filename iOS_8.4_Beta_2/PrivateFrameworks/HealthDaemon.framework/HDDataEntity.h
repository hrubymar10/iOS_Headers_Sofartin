/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataEntity : HDHealthEntity <HDDataEntity>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (bool)_addCodableObjectsToCollections:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 queryHandler:(id)arg4;
+ (id)_aggregatedPropertySettersForDataObjectWithOrderedProperties:(id*)arg1;
+ (Class)_ancestorWithProperty:(id)arg1;
+ (Class)_associatedDataObjectClass;
+ (id)_columnsSQL;
+ (id)_dataObjectWithEntity:(id)arg1 type:(long long)arg2 propertyApplier:(id)arg3 values:(id*)arg4 healthDaemon:(id)arg5;
+ (id)_databaseTable;
+ (bool)_deleteDataEntityWithPredicate:(id)arg1 failIfNotFound:(bool)arg2 deletionContext:(id)arg3 error:(id*)arg4;
+ (bool)_deleteDataObjectWithUUID:(id)arg1 sourceEntity:(id)arg2 failIfNotFound:(bool)arg3 deletionContext:(id)arg4 error:(id*)arg5;
+ (id)_insertDataObject:(id)arg1 withProvenance:(long long)arg2 sourceEntity:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5;
+ (id)_propertiesForFetchingDataObjectsWithAssociations:(id)arg1;
+ (id)_propertySettersForDataObject;
+ (void)_removeObjectWithPersistentID:(long long)arg1 database:(id)arg2;
+ (id)_tableValuesFromDataObject:(id)arg1;
+ (bool)acceptsObject:(id)arg1;
+ (bool)addCodableObjectsToCollections:(id)arg1 excludedSyncStore:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 lastSyncAnchor:(long long*)arg4 predicate:(id)arg5 limit:(unsigned long long)arg6 healthDaemon:(id)arg7 error:(id*)arg8;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)codableObjectCollectionsWithExcludedSyncStore:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 lastSyncAnchor:(long long*)arg3 limit:(unsigned long long)arg4 healthDaemon:(id)arg5 error:(id*)arg6;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (long long)countOfObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 withError:(id*)arg4;
+ (id)createTableSQL;
+ (id)dataEntityForObject:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)databaseTable;
+ (bool)deleteDataObjects:(id)arg1 sourceEntity:(id)arg2 failIfNotFound:(bool)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (bool)deleteDataObjects:(id)arg1 sourceEntity:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)entitiesToDeleteBeforeInsertingObject:(id)arg1 sourceEntity:(id)arg2 database:(id)arg3;
+ (void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(id)arg5 limit:(unsigned long long)arg6 anchor:(id*)arg7 handler:(id)arg8;
+ (void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(id)arg5 orderBy:(id)arg6 directions:(id)arg7 limit:(unsigned long long)arg8 handler:(id)arg9;
+ (void)enumerateObjectsWithHealthDaemon:(id)arg1 predicate:(id)arg2 sourceIdentifier:(id)arg3 authorizationFilter:(id)arg4 orderBy:(id)arg5 directions:(id)arg6 limit:(unsigned long long)arg7 handler:(id)arg8;
+ (id)insertDataObject:(id)arg1 withProvenance:(long long)arg2 sourceEntity:(id)arg3 creationDate:(id)arg4 healthDaemon:(id)arg5 error:(id*)arg6;
+ (void)insertDataObjects:(id)arg1 withProvenance:(long long)arg2 sourceEntity:(id)arg3 creationDate:(id)arg4 healthDaemon:(id)arg5 completionHandler:(id)arg6;
+ (bool)isBackedByTable;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)objectWithUUID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (long long)preferredEntityType;
+ (Class)propertyApplierClass;
+ (id)propertyApplierWithProperties:(id)arg1 propertySetters:(id)arg2 authorizationFilter:(id)arg3 database:(id)arg4;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)sourceIDsForObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4;

- (id)_dataID;
- (id)dataAnchor;

@end
