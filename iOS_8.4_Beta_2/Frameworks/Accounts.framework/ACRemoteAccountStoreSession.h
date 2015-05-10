/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {
    NSXPCConnection *_connection;
    bool _hasConfiguredRemoteAccountStore;
    bool _notificationsEnabled;
    NSString *_spoofedBundleID;
}

@property(assign,readwrite) bool notificationsEnabled;
@property(assign,copy) NSString * spoofedBundleID;

- (void).cxx_destruct;
- (void)_configureRemoteAccountStoreIfNecessary;
- (void)connect;
- (void)disconnect;
- (id)initWithXPCConnection:(id)arg1;
- (bool)notificationsEnabled;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setSpoofedBundleID:(id)arg1;
- (id)spoofedBundleID;

@end
