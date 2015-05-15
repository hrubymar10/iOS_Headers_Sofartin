/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@interface CNFInternalAccountListViewController : PSListController {
    FTRegConnectionHandler *_connectionHandler;
    IMServiceImpl *_service;
}

@property(assign,retain) IMServiceImpl * service;

- (void)_handleAccountNotification:(id)arg1;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (id)accountNameForSpecifier:(id)arg1;
- (void)accountTappedWithSpecifier:(id)arg1;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (id)specifiers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
