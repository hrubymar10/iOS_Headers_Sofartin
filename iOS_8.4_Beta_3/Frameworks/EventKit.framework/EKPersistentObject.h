/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentObject : NSObject {
    NSMutableDictionary *_committedProperties;
    NSMutableSet *_dirtyProperties;
    EKEventStore *_eventStore;
    unsigned int _flags;
    struct __CFDictionary { } *_loadedProperties;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    } _lock;
    id _objectID;
    NSMutableDictionary *_referencers;
}

@property(assign,retain) NSMutableDictionary * committedProperties;
@property(assign,readonly) int entityType;
@property(assign,readonly) EKEventStore * eventStore;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (void)_addDirtyProperty:(id)arg1;
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;
- (void)_addReference:(id)arg1 forKey:(id)arg2;
- (bool)_areDefaultPropertiesLoaded;
- (void)_clearReferences;
- (void)_clearWeakRelations;
- (void)_fastpathSetProperty:(id)arg1 forKey:(id)arg2 isRelation:(bool)arg3;
- (bool)_isPendingDelete;
- (bool)_isPendingInsert;
- (bool)_isPendingUpdate;
- (bool)_loadChildIdentifiersForKey:(id)arg1 values:(id*)arg2;
- (void)_loadDefaultPropertiesIfNeeded;
- (bool)_loadRelationForKey:(id)arg1 value:(id*)arg2;
- (id)_loadStringValueForKey:(id)arg1;
- (id)_loadedPropertyKeys;
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(id)arg3;
- (id)_primitiveValueForKey:(id)arg1 loader:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (id)_relationForKey:(id)arg1;
- (void)_releaseLoadedProperties;
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;
- (void)_removeReference:(id)arg1 forKey:(id)arg2;
- (void)_setDefaultPropertiesLoaded:(bool)arg1;
- (void)_setEventStore:(id)arg1;
- (void)_setObjectID:(id)arg1;
- (void)_setPendingDelete:(bool)arg1;
- (void)_setPendingInsert:(bool)arg1;
- (void)_setPendingUpdate:(bool)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (bool)_shouldRetainPropertyForKey:(id)arg1;
- (void)_takeValues:(id)arg1 forProperties:(id)arg2;
- (void)_takeValuesForDefaultProperties:(id)arg1 inSet:(id)arg2;
- (void)changed;
- (id)committedProperties;
- (id)committedValueForKey:(id)arg1;
- (void)dealloc;
- (id)dirtyProperties;
- (id)dump;
- (int)entityType;
- (id)eventStore;
- (bool)existsInStore;
- (void)faultPropertiesWithNames:(id)arg1;
- (id)init;
- (id)initCommon;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isNew;
- (bool)isPropertyDirty:(id)arg1;
- (bool)isPropertyLoaded:(id)arg1;
- (id)objectID;
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;
- (bool)primitiveBoolValueForKey:(id)arg1;
- (id)primitiveDataValueForKey:(id)arg1;
- (id)primitiveDateValueForKey:(id)arg1;
- (double)primitiveDoubleValueForKey:(id)arg1;
- (int)primitiveIntValueForKey:(id)arg1;
- (id)primitiveNumberValueForKey:(id)arg1;
- (id)primitiveRelationValueForKey:(id)arg1;
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveStringValueForKey:(id)arg1;
- (id)primitiveURLValueForKey:(id)arg1;
- (void)primitiveValueChangedForKey:(id)arg1;
- (bool)pushDirtyProperties:(id*)arg1;
- (bool)refresh;
- (bool)refreshExcludingProperties:(id)arg1;
- (void)reset;
- (void)rollback;
- (void)saved;
- (void)setCommittedProperties:(id)arg1;
- (void)takeValues:(id)arg1 forProperties:(id)arg2;
- (void)takeValuesForDefaultProperties:(id)arg1 inSet:(id)arg2;
- (void)unloadPropertyForKey:(id)arg1;
- (bool)validate:(id*)arg1;

@end
