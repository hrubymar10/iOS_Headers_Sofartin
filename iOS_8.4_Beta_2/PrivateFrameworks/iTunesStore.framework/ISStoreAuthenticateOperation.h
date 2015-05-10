/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
}

@property(assign,readonly) SSAuthenticationContext * authenticationContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

- (id)_authenticatedDSID;
- (void)_handleAuthenticateResponse:(id)arg1;
- (void)_setAuthenticatedDSID:(id)arg1;
- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;
- (void)run;
- (id)uniqueKey;

@end