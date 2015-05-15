/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol> {
    bool _connectionIsValid;
    <SPDeviceConnectionDelegate> *_delegate;
    NSHashTable *_observers;
    NSXPCConnection *_serverConnection;
}

@property(assign,readwrite) bool connectionIsValid;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SPDeviceConnectionDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSHashTable * observers;
@property(assign,retain) NSXPCConnection * serverConnection;
@property(assign,readonly) Class superclass;

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
