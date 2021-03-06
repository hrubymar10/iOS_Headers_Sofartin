/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPersistentStore : NSObject

+ (id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
+ (id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long*)arg2 deleteExtraKeys:(bool)arg3 extraKeysWereDeleted:(bool*)arg4 error:(id*)arg5;
+ (id)decryptDataWithMetadataKey:(id)arg1 error:(id*)arg2;
+ (bool)deserializeHomeData:(id*)arg1 localStorage:(bool)arg2 fromData:(id)arg3;
+ (bool)deserializeMetadata:(id*)arg1 fromData:(id)arg2;
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id*)arg2;
+ (id)encryptDataWithMetadataKey:(id)arg1 error:(id*)arg2;
+ (id)idsDataSyncJournalPath;
+ (id)protectedMetadataPath;
+ (id)protectedStorePath;
+ (id)serializeHomeData:(id)arg1 localStorage:(bool)arg2 remoteDeviceOnSameAccount:(bool)arg3;
+ (id)serializeMetadata:(id)arg1;
+ (id)serverTokenPath;
+ (id)storeDirectoryPath;
+ (id)transactionJournalPath;

- (bool)archiveCloudServerTokenData:(id)arg1;
- (bool)archiveHomeData:(id)arg1;
- (bool)archiveIDSDataSyncJournal:(id)arg1;
- (bool)archiveMetadata:(id)arg1;
- (bool)archiveTransactions:(id)arg1;
- (void)resetConfiguration;
- (void)resetMetadata;
- (id)unarchiveHomeData:(id*)arg1;
- (id)unarchiveIDSDataSyncJournal;
- (id)unarchiveMetadata:(id*)arg1;
- (id)unarchiveServerTokenData:(bool*)arg1;
- (id)unarchiveTransactionJournal;

@end
