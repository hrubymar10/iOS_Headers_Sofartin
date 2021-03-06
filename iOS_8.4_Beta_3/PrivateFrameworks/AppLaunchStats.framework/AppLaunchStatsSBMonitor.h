/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface AppLaunchStatsSBMonitor : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {
    bool _enableAppSwitcherCheck;
    bool _enableWasRecentlyLaunched;
    AppLaunchStatsState *aplsState;
    BKSApplicationStateMonitor *appStateMonitor;
    NSMutableDictionary *blackListed;
    id callback;
    NSMutableString *foreGroundApp;
    NSMutableDictionary *recentList;
    AppLaunchStatsSaveAndRestore *saveAndRestoreContext;
    NSObject<OS_dispatch_queue> *sbMonitorQueue;
    NSMutableDictionary *trendList;
}

@property (nonatomic, readonly) bool enableAppSwitcherCheck;
@property (nonatomic, readonly) bool enableWasRecentlyLaunched;
@property (nonatomic, readonly) NSMutableString *foreGroundApp;

- (void).cxx_destruct;
- (void)addToBlackList:(id)arg1;
- (void)appSuspendedTriggerExternalEvent:(id)arg1;
- (void)appSwitchedObserver:(id)arg1;
- (void)clearTrendingCache;
- (bool)enableAppSwitcherCheck;
- (bool)enableWasRecentlyLaunched;
- (id)foreGroundApp;
- (id)init:(id)arg1 withCallback:(id)arg2;
- (void)initListenerForAppStateChange;
- (bool)isForeGroundApp:(id)arg1;
- (bool)isRemovedFromAppSwitcher:(id)arg1;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)reloadConfiguration;
- (void)removeFromBlackList:(id)arg1;
- (void)restore:(id)arg1;
- (void)save:(id)arg1;
- (void)saveContext:(id)arg1;
- (void)updateFGAppID:(id)arg1;
- (bool)wasRecentlyLaunched:(id)arg1;

@end
