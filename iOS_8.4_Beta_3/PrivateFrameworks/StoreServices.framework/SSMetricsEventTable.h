/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventTable : NSObject {
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;

- (bool)_setupDatabase;
- (void)dealloc;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)performTransactionWithBlock:(id)arg1;

@end
