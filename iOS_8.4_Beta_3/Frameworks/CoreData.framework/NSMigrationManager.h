/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMigrationManager : NSObject {
    NSDictionary *_destinationEntitiesByVersionHash;
    NSManagedObjectContext *_destinationManagedObjectContext;
    NSManagedObjectModel *_destinationModel;
    NSMappingModel *_mappingModel;
    NSError *_migrationCancellationError;
    NSMigrationContext *_migrationContext;
    struct _migrationManagerFlags { 
        unsigned int _migrationWasCancelled : 1; 
        unsigned int _usesStoreSpecificMigrationManager : 1; 
        unsigned int _reservedMigrationManager : 30; 
    } _migrationManagerFlags;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    NSDictionary *_sourceEntitiesByVersionHash;
    NSManagedObjectContext *_sourceManagedObjectContext;
    NSManagedObjectModel *_sourceModel;
    NSDictionary *_userInfo;
}

@property(assign,readonly) NSEntityMapping * currentEntityMapping;
@property(assign,readonly) NSManagedObjectContext * destinationContext;
@property(assign,readonly) NSManagedObjectModel * destinationModel;
@property(assign,readonly) NSMappingModel * mappingModel;
@property(assign,readonly) float migrationProgress;
@property(assign,readonly) NSManagedObjectContext * sourceContext;
@property(assign,readonly) NSManagedObjectModel * sourceModel;
@property(assign,retain) NSDictionary * userInfo;
@property(assign,readwrite) bool usesStoreSpecificMigrationManager;

+ (bool)_performSanityCheckForMapping:(id)arg1 fromSourceModel:(id)arg2 toDestinationModel:(id)arg3;
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;

- (void)_doCleanupOnFailure:(id)arg1;
- (bool)_doFirstPassForMapping:(id)arg1 error:(id*)arg2;
- (bool)_doSecondPassForMapping:(id)arg1 error:(id*)arg2;
- (bool)_doThirdPassForMapping:(id)arg1 error:(id*)arg2;
- (id)_evaluateSourceExpressionForMapping:(id)arg1 entityPolicy:(id)arg2;
- (id)_mappingNamed:(id)arg1;
- (bool)_migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8;
- (id)_migrationContext;
- (bool)_validateAllObjectsAfterMigration:(id*)arg1;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (void)cancelMigrationWithError:(id)arg1;
- (id)currentEntityMapping;
- (id)currentPropertyMapping;
- (void)dealloc;
- (id)destinationContext;
- (id)destinationEntityForEntityMapping:(id)arg1;
- (id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2;
- (id)destinationModel;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2;
- (id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 includesSubentities:(bool)arg3;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;
- (id)mappingModel;
- (bool)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8;
- (float)migrationProgress;
- (void)reset;
- (void)setUserInfo:(id)arg1;
- (void)setUsesStoreSpecificMigrationManager:(bool)arg1;
- (id)sourceContext;
- (id)sourceEntityForEntityMapping:(id)arg1;
- (id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2;
- (id)sourceModel;
- (id)userInfo;
- (bool)usesStoreSpecificMigrationManager;

@end
