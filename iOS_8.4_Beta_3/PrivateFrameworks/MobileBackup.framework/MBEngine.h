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

@property (nonatomic, readonly) MBAppManager *appManager;
@property (getter=isBackgroundRestore, nonatomic, readonly) bool backgroundRestore;
@property (getter=isBackupEngine, nonatomic, readonly) bool backupEngine;
@property (getter=shouldCommitIfPossible, nonatomic, readonly) bool commitIfPossible;
@property (nonatomic, readonly) MBDebugContext *debugContext;
@property (nonatomic, readonly) MBDomainManager *domainManager;
@property (getter=isDriveEngine, nonatomic, readonly) bool driveEngine;
@property (getter=isEncrypted, nonatomic) bool encrypted;
@property (nonatomic, readonly) int engineMode;
@property (nonatomic, readonly) NSString *engineModeString;
@property (nonatomic, readonly) int engineType;
@property (nonatomic, readonly) NSString *engineTypeString;
@property (getter=isForegroundRestore, nonatomic, readonly) bool foregroundRestore;
@property (getter=isMigrate, nonatomic, readonly) bool migrate;
@property (nonatomic, readonly) MBProperties *properties;
@property (getter=isRestoreEngine, nonatomic, readonly) bool restoreEngine;
@property (nonatomic, readonly) int restoreType;
@property (nonatomic, readonly) NSString *restoreTypeString;
@property (getter=isServiceEngine, nonatomic, readonly) bool serviceEngine;
@property (nonatomic, readonly) MBSettingsContext *settingsContext;

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
