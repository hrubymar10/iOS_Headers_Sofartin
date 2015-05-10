/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBManager : NSObject {
    id _delegate;
}

@property(assign,readwrite) NSObject<MBManagerDelegate> * delegate;

- (id)_init;
- (bool)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6;
- (bool)allowiTunesBackup;
- (id)backupList;
- (id)backupState;
- (void)cancel;
- (bool)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2;
- (void)cancelRestore;
- (bool)countCameraRollQuota;
- (bool)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2;
- (id)dateOfLastBackup;
- (id)dateOfNextScheduledBackup;
- (id)delegate;
- (bool)deleteBackupUDID:(id)arg1 error:(id*)arg2;
- (bool)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5;
- (bool)discountCameraRollQuota;
- (bool)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (id)domainInfoForName:(id)arg1;
- (id)domainInfoList;
- (bool)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6;
- (id)filesForSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (void)finishRestore;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (id)getBackupListWithError:(id*)arg1;
- (id)getBackupListWithFiltering:(bool)arg1 error:(id*)arg2;
- (int)getLogLevel;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;
- (void)insufficientFreeSpaceToRestore;
- (bool)isBackupEnabled;
- (bool)isBackupEnabledForDomainName:(id)arg1;
- (unsigned long long)nextBackupSize;
- (void)prioritizeRestoreFileWithPath:(id)arg1;
- (void)rebootDevice;
- (bool)recordRestoreFailure:(id)arg1 error:(id*)arg2;
- (bool)removeDomainName:(id)arg1 error:(id*)arg2;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 context:(id)arg3 error:(id*)arg4;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 error:(id*)arg3;
- (bool)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2;
- (id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)restoreFileExistsWithPath:(id)arg1;
- (void)restoreFileWithPath:(id)arg1;
- (bool)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreFileWithPath:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(bool)arg3 error:(id*)arg4;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(bool)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 error:(id*)arg5;
- (id)restoreInfo;
- (id)restoreState;
- (void)setAllowiTunesBackup:(bool)arg1;
- (void)setBackupEnabled:(bool)arg1;
- (void)setBackupEnabled:(bool)arg1 forDomainName:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLogLevel:(int)arg1;
- (bool)setupBackupWithPasscode:(id)arg1 error:(id*)arg2;
- (void)startBackup;
- (bool)startBackupWithError:(id*)arg1;
- (void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2;
- (bool)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (bool)startScanWithError:(id*)arg1;
- (void)syncBackupEnabled;

@end
