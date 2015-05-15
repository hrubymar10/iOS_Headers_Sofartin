/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAuthenticateResponse : GKInternalRepresentation {
    NSString *_accountName;
    NSString *_authToken;
    long long _environment;
    bool _loginDisabled;
    bool _passwordChangeRequired;
    NSURL *_passwordChangeURL;
    NSString *_playerID;
    bool _shouldShowLinkAccountsUI;
}

@property (nonatomic, retain) NSString *accountName;
@property (nonatomic, retain) NSString *authToken;
@property (nonatomic) long long environment;
@property (nonatomic) bool loginDisabled;
@property (nonatomic) bool passwordChangeRequired;
@property (nonatomic, retain) NSURL *passwordChangeURL;
@property (nonatomic, retain) NSString *playerID;
@property (nonatomic) bool shouldShowLinkAccountsUI;

+ (id)secureCodedPropertyKeys;

- (id)accountName;
- (id)authToken;
- (void)dealloc;
- (long long)environment;
- (bool)loginDisabled;
- (bool)passwordChangeRequired;
- (id)passwordChangeURL;
- (id)playerID;
- (void)setAccountName:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setLoginDisabled:(bool)arg1;
- (void)setPasswordChangeRequired:(bool)arg1;
- (void)setPasswordChangeURL:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setShouldShowLinkAccountsUI:(bool)arg1;
- (bool)shouldShowLinkAccountsUI;

@end
