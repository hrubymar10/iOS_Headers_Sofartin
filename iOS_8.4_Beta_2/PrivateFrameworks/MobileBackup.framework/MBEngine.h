/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBEngine : NSObject {
    MBAppManager *_appManager;
    MBDebugContext *_debugContext;
    MBDomainManager *_domainManager;
    bool _encrypted;
    MBProperties *_properties;
    MBSettingsContext *_settingsContext;
}

@property(assign,readonly) MBAppManager * appManager;
@property(getter=isBackgroundRestore,assign,readonly) bool backgroundRestore;
@property(getter=isBackupEngine,assign,readonly) bool backupEngine;
@property(getter=shouldCommitIfPossible,assign,readonly) bool commitIfPossible;
@property(assign,readonly) MBDebugContext * debugContext;
@property(assign,readonly) MBDomainManager * domainManager;
@property(getter=isDriveEngine,assign,readonly) bool driveEngine;
@property(getter=isEncrypted,assign,readwrite) bool encrypted;
@property(assign,readonly) int engineMode;
@property(assign,readonly) NSString * engineModeString;
@property(assign,readonly) int engineType;
@property(assign,readonly) NSString * engineTypeString;
@property(getter=isForegroundRestore,assign,readonly) bool foregroundRestore;
@property(getter=isMigrate,assign,readonly) bool migrate;
@property(assign,readonly) MBProperties * properties;
@property(getter=isRestoreEngine,assign,readonly) bool restoreEngine;
@property(assign,readonly) int restoreType;
@property(assign,readonly) NSString * restoreTypeString;
@property(getter=isServiceEngine,assign,readonly) bool serviceEngine;
@property(assign,readonly) MBSettingsContext * settingsContext;

+ (id)stringForEngineMode:(int)arg1;
+ (id)stringForEngineType:(int)arg1;
+ (id)stringForRestoreType:(int)arg1;

- (id)aggregateDictionaryKey:(id)arg1;
- (id)appManager;
- (void)dealloc;
- (id)debugContext;
- (id)domainManager;
- (int)engineMode;
- (id)engineModeString;
- (int)engineType;
- (id)engineTypeString;
- (id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 domainManager:(id)arg3;
- (bool)isBackgroundRestore;
- (bool)isBackupEngine;
- (bool)isDriveEngine;
- (bool)isEncrypted;
- (bool)isForegroundRestore;
- (bool)isMigrate;
- (bool)isRestoreEngine;
- (bool)isServiceEngine;
- (id)properties;
- (void)pushAggregateDictionaryTotalFileCount:(long long)arg1 totalFileSize:(long long)arg2 duration:(double)arg3;
- (int)restoreType;
- (id)restoreTypeString;
- (void)setEncrypted:(bool)arg1;
- (id)settingsContext;
- (bool)shouldCommitIfPossible;
- (id)validateFile:(id)arg1;
- (id)validateRestoreDomain:(id)arg1 relativePath:(id)arg2;

@end
