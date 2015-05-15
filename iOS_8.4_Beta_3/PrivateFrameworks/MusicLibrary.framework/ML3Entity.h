/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Entity : NSObject {
    ML3MusicLibrary *_library;
    long long _persistentID;
}

@property (readonly) bool existsInLibrary;
@property ML3MusicLibrary *library;
@property (readonly) long long persistentID;

+ (bool)_deleteRowForPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 library:(id)arg3 table:(id)arg4 usingColumn:(id)arg5 usingConnection:(id)arg6;
+ (void)_didChangeValueForProperties:(id)arg1 inLibrary:(id)arg2;
+ (bool)_shouldIncrementRevisionForType:(int)arg1 persistentID:(long long)arg2 usingConnection:(id)arg3;
+ (id)aggregateQueryWithUnitQuery:(id)arg1 foreignPersistentIDProperty:(id)arg2;
+ (id)allItemsQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(bool)arg4;
+ (id)allProperties;
+ (id)anyInLibrary:(id)arg1 predicate:(id)arg2;
+ (id)anyInLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (id)defaultFilterPredicates;
+ (id)defaultOrderingTerms;
+ (bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4;
+ (bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (id)directCollectionQueryWithAggregateQuery:(id)arg1 predicate:(id)arg2 usingSections:(bool)arg3;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)disambiguatedSelectSQLForProperty:(id)arg1;
+ (void)enumeratePersistentIDsInLibrary:(id)arg1 afterRevision:(long long)arg2 usingBlock:(id)arg3;
+ (void)enumeratePersistentIDsInLibrary:(id)arg1 matchingPredicate:(id)arg2 orderingTerms:(id)arg3 persistentIDs:(const long long*)arg4 count:(unsigned long long)arg5 options:(long long)arg6 usingBlock:(id)arg7;
+ (id)extraTablesToDelete;
+ (id)extraTablesToInsert;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (bool)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3;
+ (bool)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4;
+ (bool)incrementRevisionForRevisionTypeContentWithLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3;
+ (bool)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4;
+ (bool)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 usingConnection:(id)arg5;
+ (id)indexableSQLForProperties:(id)arg1;
+ (bool)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 connection:(id)arg4;
+ (bool)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 library:(id)arg4;
+ (bool)insertionChangesLibraryContents;
+ (id)joinClausesForProperty:(id)arg1;
+ (bool)libraryContentsChangeForProperty:(id)arg1;
+ (bool)libraryDynamicChangeForProperty:(id)arg1;
+ (id)newSelectAllEntitiesSQLForProperties:(const id*)arg1 count:(unsigned long long)arg2 predicate:(id)arg3;
+ (id)newSelectSQLForProperties:(const id*)arg1 count:(unsigned long long)arg2 predicate:(id)arg3;
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2;
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
+ (id)newWithPersistentID:(long long)arg1 inLibrary:(id)arg2;
+ (id)orderingSQLForProperties:(id)arg1 directionality:(id)arg2;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;
+ (id)predicateByOptimizingPredicate:(id)arg1;
+ (id)predicateIncludingSystemwidePredicatesWithPredicate:(id)arg1 library:(id)arg2 options:(long long)arg3;
+ (void)predisambiguateProperties:(id)arg1 toDictionary:(id)arg2;
+ (id)predisambiguatedProperties;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;
+ (bool)propertyIsCountProperty:(id)arg1;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirectionMappings:(id)arg4 usingSections:(bool)arg5;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 usingSections:(bool)arg4;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4 options:(long long)arg5;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(bool)arg4;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(bool)arg4 options:(long long)arg5;
+ (id)queryWithLibrary:(id)arg1 predicate:(id)arg2 usingSections:(bool)arg3;
+ (id)replacerWithProperties:(id)arg1 library:(id)arg2;
+ (long long)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (bool)setValues:(id)arg1 forProperties:(id)arg2 forEntityPersistentIDs:(id)arg3 inLibrary:(id)arg4 usingConnection:(id)arg5;
+ (id)spotlightPropertyForMPMediaEntityProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (id)unrestrictedAllItemsQueryWithlibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)unrestrictedQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)unsettableProperties;
+ (id)widthLimitedSetValuesQueue;

- (void).cxx_destruct;
- (id)copyInLibrary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleteFromLibrary;
- (id)description;
- (void)didChangeValueForProperties:(id)arg1;
- (bool)existsInLibrary;
- (void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (id)getValuesForProperties:(id)arg1;
- (unsigned long long)hash;
- (void)incrementRevision;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)library;
- (bool)matchesPredicate:(id)arg1;
- (long long)persistentID;
- (void)setLibrary:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)setValues:(id)arg1 forProperties:(id)arg2;
- (void)setValues:(id)arg1 forProperties:(id)arg2 async:(bool)arg3 withCompletionBlock:(id)arg4;
- (bool)setValues:(const id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3;
- (bool)setValues:(id)arg1 forProperties:(id)arg2 usingConnection:(id)arg3;
- (bool)setValuesForPropertiesWithDictionary:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
