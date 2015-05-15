/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSAccountController : NSObject <IDSDaemonListenerProtocol> {
    bool _accountsLoaded;
    NSMutableSet *_cachedAccounts;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSMutableSet *_enabledAccounts;
    bool _isLocalAccountVisible;
    NSString *_service;
    NSString *_serviceToken;
    NSMutableDictionary *_transactionIDToHandlersMap;
}

@property (nonatomic, readonly, retain) NSSet *accounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSSet *enabledAccounts;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSString *serviceName;
@property (readonly) Class superclass;

- (void)_callDelegatesWithBlock:(id)arg1;
- (void)_callDelegatesWithBlock:(id)arg1 group:(id)arg2;
- (void)_connect;
- (void)_loadCachedAccounts;
- (void)_loadCachedAccountsWithDictionaries:(id)arg1;
- (void)_removeAccount:(id)arg1;
- (void)_removeAndDeregisterAccount:(id)arg1;
- (void)_setupAccountWithLoginID:(id)arg1 accountConfig:(id)arg2 authToken:(id)arg3 password:(id)arg4 completionHandler:(id)arg5;
- (void)_updateDelegatesWithOldAccounts:(id)arg1 newAccounts:(id)arg2;
- (void)_updateLocalAccountVisibility;
- (void)accountAdded:(id)arg1;
- (void)accountDisabled:(id)arg1 onService:(id)arg2;
- (void)accountEnabled:(id)arg1 onService:(id)arg2;
- (void)accountRemoved:(id)arg1;
- (void)accountUpdated:(id)arg1;
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;
- (id)accountWithUniqueID:(id)arg1;
- (id)accounts;
- (void)accountsChanged:(id)arg1 forTopic:(id)arg2;
- (void)addAccount:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)daemonDisconnected;
- (void)dealloc;
- (void)disableAccount:(id)arg1;
- (void)enableAccount:(id)arg1;
- (id)enabledAccounts;
- (id)initWithService:(id)arg1 delegateContext:(id)arg2;
- (id)internalAccounts;
- (void)removeDelegate:(id)arg1;
- (id)serviceName;
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(id)arg4;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 aliases:(id)arg5 completionHandler:(id)arg6;
- (void)setupAccountWithLoginID:(id)arg1 authToken:(id)arg2 profileID:(id)arg3 selfHandle:(id)arg4 completionHandler:(id)arg5;
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(id)arg3;
- (void)setupCompleteForAccount:(id)arg1 transactionID:(id)arg2 setupError:(id)arg3;

@end
