/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSourceEntity : HDHealthEntity

+ (id)_insertSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 isCurrentDevice:(bool)arg4 productType:(id)arg5 provenance:(long long)arg6 syncAnchor:(id)arg7 database:(id)arg8;
+ (id)_predicateForSourceRepresentingCurrentDevice;
+ (id)_predicateForSourceWithBundleIdentifier:(id)arg1;
+ (id)_propertySettersForSource;
+ (id)_sourceRepresentingCurrentDeviceWithDatabase:(id)arg1;
+ (id)_sourceWithBundleIdentifier:(id)arg1 database:(id)arg2;
+ (id)allSourcePersistentIDsWithHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)insertSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 isCurrentDevice:(bool)arg4 productType:(id)arg5 provenance:(long long)arg6 healthDatabase:(id)arg7 error:(id*)arg8;
+ (long long)protectionClass;
+ (id)sourceRepresentingCurrentDeviceWithHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)sourceWithBundleIdentifier:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;

- (bool)setBundleIdentifier:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
- (bool)setName:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
- (id)sourceBundleIdentifierInHealthDatabase:(id)arg1 error:(id*)arg2;
- (id)sourceInHealthDatabase:(id)arg1 error:(id*)arg2;

@end
