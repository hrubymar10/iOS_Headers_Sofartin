/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DABabysitter : NSObject {
    NSString *_buildVersion;
    NSMutableDictionary *_failedWaiters;
    NSMutableDictionary *_refreshingWaiters;
    NSMutableDictionary *_restrictedWaiters;
}

@property(assign,retain) NSString * buildVersion;
@property(assign,retain) NSMutableDictionary * failedWaiters;
@property(assign,retain) NSMutableDictionary * refreshingWaiters;
@property(assign,retain) NSMutableDictionary * restrictedWaiters;

+ (id)sharedBabysitter;

- (void).cxx_destruct;
- (void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2;
- (void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (id)_init;
- (void)_reloadBabysitterProperties;
- (bool)accountShouldContinue:(id)arg1;
- (bool)accountWithIDShouldContinue:(id)arg1;
- (id)buildVersion;
- (void)dealloc;
- (id)failedWaiters;
- (void)giveAccountWithIDAnotherChance:(id)arg1;
- (id)init;
- (id)refreshingWaiters;
- (bool)registerAccount:(id)arg1 forOperationWithName:(id)arg2;
- (id)restrictedWaiters;
- (void)setBuildVersion:(id)arg1;
- (void)setFailedWaiters:(id)arg1;
- (void)setRefreshingWaiters:(id)arg1;
- (void)setRestrictedWaiters:(id)arg1;
- (void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2;

@end
