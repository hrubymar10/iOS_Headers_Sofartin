/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface AppLaunchStatsWhiteListManager : NSObject <DuetLoggerProtocol, LSApplicationWorkspaceObserverProtocol> {
    NSObject<OS_dispatch_queue> *aplsWLMQueue;
    NSMutableArray *defaultsWriteWhiteList;
    bool enableWhiteListCheck;
    NSMutableArray *launchServiceWhiteListFetch;
    NSMutableArray *launchServiceWhiteListPush;
    AppLaunchStatsSaveAndRestore *saveAndRestoreContext;
    LSApplicationWorkspace *wlmAppWorkSpace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableWhiteListCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)instance;

- (void).cxx_destruct;
- (void)addToMultiTaskingQueue:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (bool)enableWhiteListCheck;
- (id)init;
- (void)initSetup;
- (bool)isAppInList:(id)arg1 withBundleID:(id)arg2;
- (bool)isWhiteListed:(id)arg1 withFetch:(int)arg2;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)reloadConfiguration;
- (void)saveContext:(id)arg1;
- (void)setEnableWhiteListCheck:(bool)arg1;

@end
