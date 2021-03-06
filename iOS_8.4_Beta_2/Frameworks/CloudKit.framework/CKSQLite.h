/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLite : NSObject {
    bool _corrupt;
    NSDateFormatter *_dateFormatter;
    struct sqlite3 { } *_db;
    bool _hasMigrated;
    NSString *_objectClassPrefix;
    unsigned long long _openCount;
    NSString *_path;
    NSString *_schema;
    NSString *_schemaVersion;
    NSMutableDictionary *_statementsBySQL;
    int _userVersion;
}

@property(assign,readwrite) bool corrupt;
@property(assign,retain) NSDateFormatter * dateFormatter;
@property(assign,readwrite) struct sqlite3 { }* db;
@property(assign,readonly) bool hasMigrated;
@property(assign,readonly) bool isOpen;
@property(assign,retain) NSString * objectClassPrefix;
@property(assign,readwrite) unsigned long long openCount;
@property(assign,readonly) NSString * path;
@property(assign,readonly) NSString * schema;
@property(assign,readonly) NSString * schemaVersion;
@property(assign,readonly) NSMutableDictionary * statementsBySQL;
@property(assign,readwrite) int userVersion;

- (void).cxx_destruct;
- (id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2;
- (id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2;
- (id)_createSchemaHash;
- (void)_periodicVacuum;
- (id)_tableNameForClass:(Class)arg1;
- (id)allTableNames;
- (void)analyze;
- (void)begin;
- (void)close;
- (bool)corrupt;
- (id)creationDate;
- (id)dateFormatter;
- (id)datePropertyForKey:(id)arg1;
- (struct sqlite3 { }*)db;
- (int)dbUserVersion;
- (void)dealloc;
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)dropAllTables;
- (void)end;
- (void)executeSQL:(id)arg1;
- (void)executeSQL:(id)arg1 arguments:(char *)arg2;
- (bool)hasMigrated;
- (id)initWithPath:(id)arg1 schema:(id)arg2;
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;
- (long long)insertOrReplaceObject:(id)arg1;
- (bool)isOpen;
- (long long)lastInsertRowID;
- (id)objectClassPrefix;
- (void)open;
- (unsigned long long)openCount;
- (bool)openWithError:(id*)arg1;
- (id)path;
- (id)propertyForKey:(id)arg1;
- (void)raise:(id)arg1;
- (void)remove;
- (void)removeAllStatements;
- (void)removePropertyForKey:(id)arg1;
- (void)rollback;
- (id)schema;
- (id)schemaVersion;
- (id)select:(id)arg1 from:(id)arg2;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4;
- (id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)setCorrupt:(bool)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (void)setObjectClassPrefix:(id)arg1;
- (void)setOpenCount:(unsigned long long)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setUserVersion:(int)arg1;
- (id)statementForSQL:(id)arg1;
- (id)statementsBySQL;
- (int)userVersion;
- (void)vacuum;

@end
