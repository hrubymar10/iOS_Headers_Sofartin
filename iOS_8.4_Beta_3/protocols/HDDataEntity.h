/* Generated by RuntimeBrowser.
 */

@protocol HDDataEntity <HDSQLiteEntity>

@required

+ (bool)acceptsObject:(HKObject *)arg1;
+ (bool)addCodableObjectsToCollections:(NSMutableDictionary *)arg1 excludedSyncStore:(id <HDSyncStore>)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 lastSyncAnchor:(long long*)arg4 predicate:(HDSQLitePredicate *)arg5 limit:(unsigned long long)arg6 healthDaemon:(id <HDHealthDaemon>)arg7 error:(id*)arg8;
+ (NSArray *)codableObjectCollectionsWithExcludedSyncStore:(id <HDSyncStore>)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 lastSyncAnchor:(long long*)arg3 limit:(unsigned long long)arg4 healthDaemon:(id <HDHealthDaemon>)arg5 error:(id*)arg6;
+ (NSArray *)codableObjectsFromObjectCollection:(HDCodableObjectCollection *)arg1;
+ (NSString *)columnNameForSortIdentifier:(NSString *)arg1;
+ (long long)countOfObjectsOfType:(long long)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 withError:(id*)arg4;
+ (id)dataEntityForObject:(HKObject *)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 error:(id*)arg3;
+ (bool)deleteDataObjects:(NSArray *)arg1 sourceEntity:(HDSourceEntity *)arg2 failIfNotFound:(bool)arg3 healthDaemon:(id <HDHealthDaemon>)arg4 error:(id*)arg5;
+ (bool)deleteDataObjects:(NSArray *)arg1 sourceEntity:(HDSourceEntity *)arg2 healthDaemon:(id <HDHealthDaemon>)arg3 error:(id*)arg4;
+ (NSArray *)deleteStatementsForRelatedEntitiesInDatabase:(HDSQLiteDatabase *)arg1;
+ (NSArray *)entitiesToDeleteBeforeInsertingObject:(HKObject *)arg1 sourceEntity:(HDSourceEntity *)arg2 database:(HDSQLiteDatabase *)arg3;
+ (void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 sourceIdentifier:(NSNumber *)arg4 authorizationFilter:(id)arg5 limit:(/* Warning: Unrecognized filer type: '?' using 'void*' */ void*)arg6 anchor:(void*)arg7 handler:(NSArray *)arg8;
+ (void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 sourceIdentifier:(NSNumber *)arg4 authorizationFilter:(id)arg5 orderBy:(/* Warning: Unrecognized filer type: '?' using 'void*' */ void*)arg6 directions:(void*)arg7 limit:(NSArray *)arg8 handler:(id)arg9;
+ (void)enumerateObjectsWithHealthDaemon:(id <HDHealthDaemon>)arg1 predicate:(HDSQLitePredicate *)arg2 sourceIdentifier:(NSNumber *)arg3 authorizationFilter:(id)arg4 orderBy:(/* Warning: Unrecognized filer type: '?' using 'void*' */ void*)arg5 directions:(void*)arg6 limit:(NSArray *)arg7 handler:(id)arg8;
+ (id)insertDataObject:(HKObject *)arg1 withProvenance:(long long)arg2 sourceEntity:(HDSourceEntity *)arg3 creationDate:(NSDate *)arg4 healthDaemon:(id <HDHealthDaemon>)arg5 error:(id*)arg6;
+ (void)insertDataObjects:(NSArray *)arg1 withProvenance:(long long)arg2 sourceEntity:(HDSourceEntity *)arg3 creationDate:(NSDate *)arg4 healthDaemon:(id <HDHealthDaemon>)arg5 completionHandler:(id)arg6;
+ (bool)isBackedByTable;
+ (HKObject *)objectWithUUID:(NSUUID *)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 error:(id*)arg3;
+ (long long)preferredEntityType;
+ (Class)propertyApplierClass;
+ (HDDataPropertyApplier *)propertyApplierWithProperties:(NSArray *)arg1 propertySetters:(NSDictionary *)arg2 authorizationFilter:(id)arg3 database:(/* Warning: Unrecognized filer type: '?' using 'void*' */ void*)arg4;
+ (NSArray *)sourceIDsForObjectsOfType:(long long)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 error:(id*)arg4;

- (NSNumber *)dataAnchor;

@end
