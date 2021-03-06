/* Generated by RuntimeBrowser.
 */

@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>

@required

- (void)historyStore:(WBSHistorySQLiteStore *)arg1 didPrepareToDeleteWithDeletionPlan:(WBSHistoryDeletionPlan *)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(WBSHistorySQLiteStore *)arg1;
- (bool)historyStoreShouldCheckDatabaseIntegrity:(WBSHistorySQLiteStore *)arg1;

@optional

- (bool)historyStoreShouldScheduleMaintenance:(WBSHistorySQLiteStore *)arg1;

@end
