/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemonExtensions.framework/HealthDaemonExtensions
 */

@interface HDHealthExtensionsServer : NSObject <HDDiagnosticObject, HKExtendedServerInterface> {
    HDClient *_client;
    <HDHealthExtensionsServerDelegate> *_delegate;
    <HDHealthDaemon> *_healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    bool _registeredForAchievementNotifications;
}

@property (nonatomic, retain) HDClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDHealthExtensionsServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HDHealthDaemon> *healthDaemon;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool registeredForAchievementNotifications;
@property (readonly) Class superclass;

+ (bool)_shouldAcceptConnectionForClient:(id)arg1 error:(id*)arg2;
+ (id)serverWithClient:(id)arg1 healthDaemon:(id)arg2 delegate:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_achievementsAdded:(id)arg1;
- (void)addAchievement:(id)arg1 completion:(id)arg2;
- (id)client;
- (id)clientInterface;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (void)fetchAchievementsWithCompletedDateBetweenStart:(id)arg1 end:(id)arg2 completion:(id)arg3;
- (void)fetchNumberOfUnviewedAchievementsWithCompletion:(id)arg1;
- (void)fetchUnalertedAchievementsWithCompletion:(id)arg1;
- (void)forceNanoSyncWithPullRequest:(bool)arg1 completion:(id)arg2;
- (id)healthDaemon;
- (id)initWithClient:(id)arg1 healthDaemon:(id)arg2 delegate:(id)arg3;
- (void)invalidate;
- (void)markAchievementAsViewed:(id)arg1 completion:(id)arg2;
- (void)markAchievementsAlerted:(id)arg1 completion:(id)arg2;
- (id)queue;
- (void)registerForAchievementNotificationsAndFetchUnalertedCountWithCompletion:(id)arg1;
- (bool)registeredForAchievementNotifications;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (void)resetNanoSyncWithCompletion:(id)arg1;
- (id)serverInterface;
- (void)setClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHealthDaemon:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegisteredForAchievementNotifications:(bool)arg1;

@end
