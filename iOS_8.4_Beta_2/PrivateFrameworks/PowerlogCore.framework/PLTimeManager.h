/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeManager : NSObject <PLTimeReferenceManager> {
    PLSQLiteConnection *_connection;
    NSDictionary *_notificationsToTimeReferences;
    PLStorageOperator *_storageOperator;
    NSDictionary *_timeReferences;
}

@property(assign,readwrite) PLSQLiteConnection * connection;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSDictionary * notificationsToTimeReferences;
@property(assign,readwrite) PLStorageOperator * storageOperator;
@property(assign,readonly) Class superclass;
@property(assign,retain) NSDictionary * timeReferences;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (id)convertTime:(id)arg1 fromTimeReference:(long long)arg2 toTimeReference:(long long)arg3;
- (id)currentTimeFromTimeReference:(long long)arg1 toTimeReference:(long long)arg2;
- (id)init;
- (id)initialMonotonicTime;
- (void)initializeTimeOffsets;
- (void)logTimeEntry;
- (id)notificationsToTimeReferences;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)arg1 forTimeReference:(long long)arg2 usingBlock:(id)arg3;
- (void)setConnection:(id)arg1;
- (void)setNotificationsToTimeReferences:(id)arg1;
- (void)setStorageOperator:(id)arg1;
- (void)setTimeReferences:(id)arg1;
- (id)storageOperator;
- (id)storageQueue;
- (id)timeReferences;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg1 forTimeReference:(long long)arg2;

@end