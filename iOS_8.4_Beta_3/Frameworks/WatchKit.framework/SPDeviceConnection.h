/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol> {
    bool _connectionIsValid;
    <SPDeviceConnectionDelegate> *_delegate;
    NSHashTable *_observers;
    NSXPCConnection *_serverConnection;
}

@property bool connectionIsValid;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SPDeviceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSHashTable *observers;
@property (retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDeviceConnection;

- (void).cxx_destruct;
- (void)_enumerateObserversSafely:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelPendingInstallations;
- (bool)connectionIsValid;
- (void)createXPCConnection;
- (id)delegate;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(id)arg2;
- (void)fetchInstalledApplicationsWithCompletion:(id)arg1;
- (void)fetchInstalledGlancesWithCompletion:(id)arg1;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithIdentifier:(id)arg1 completion:(id)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(id)arg2;
- (void)getAlwaysInstallWithCompletion:(id)arg1;
- (void)hideUserNotification;
- (id)init;
- (void)installAllApplications;
- (void)installApplication:(id)arg1 completion:(id)arg2;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(id)arg2;
- (id)localeForUserNotification;
- (id)observers;
- (void)receiveData:(id)arg1;
- (void)removeApplication:(id)arg1 completion:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)serverConnection;
- (void)setAlwaysInstall:(id)arg1;
- (void)setConnectionIsValid:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogLevel:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)showUserNotification:(long long)arg1 bundleID:(id)arg2;
- (void)wakeExtensionForWatchApp:(id)arg1;

@end
