/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface AWDLogger : CHLogger {
    AWDServerConnection *_awdServer;
}

@property (nonatomic, retain) AWDServerConnection *awdServer;

+ (id)instance;

- (void).cxx_destruct;
- (id)awdServer;
- (void)callAddedWithNilUuid:(unsigned long long)arg1 withCallStatus:(unsigned long long)arg2;
- (void)commCenterMigrationResult:(bool)arg1 withMigratedCallCount:(unsigned long long)arg2;
- (void)databaseMigrationResult:(bool)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3;
- (void)databaseSaveError:(long long)arg1 withTableName:(id)arg2;
- (void)deleteAll:(unsigned long long)arg1;
- (void)entitlementRejection:(int)arg1;
- (id)init;
- (void)setAwdServer:(id)arg1;
- (void)submitMetric:(id)arg1 withId:(unsigned int)arg2;
- (void)syncFailure:(unsigned int)arg1;
- (void)syncSuccess:(unsigned long long)arg1 withDownloadRecordCount:(unsigned long long)arg2;

@end
