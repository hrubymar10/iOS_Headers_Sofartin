/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLitePool : NSObject {
    NSMutableArray *_dbs;
    bool _drainScheduled;
    id _factory;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(assign,retain) NSMutableArray * dbs;
@property(assign,readwrite) bool drainScheduled;
@property(assign,copy) id factory;
@property(assign,retain) NSObject<OS_dispatch_queue> * queue;

- (void).cxx_destruct;
- (id)_acquireDatabaseWithError:(id*)arg1;
- (void)_closeDatabase:(id)arg1;
- (void)_drain;
- (id)_openDatabaseWithError:(id*)arg1;
- (void)_scheduleDrain;
- (id)acquireDatabase:(bool)arg1;
- (void)closeAll;
- (id)dbs;
- (bool)drainScheduled;
- (id)factory;
- (id)initWithFactory:(id)arg1;
- (void)performWithDatabase:(id)arg1;
- (bool)performWithDatabase:(id)arg1 error:(id*)arg2;
- (id)queue;
- (void)releaseDatabase:(id)arg1;
- (void)setDbs:(id)arg1;
- (void)setDrainScheduled:(bool)arg1;
- (void)setQueue:(id)arg1;

@end