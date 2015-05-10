/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAuthenticationDialogRequest : NSObject {
    ACAccount *_account;
    NSString *_authDelegateClassBundlePath;
    NSString *_authDelegateClassName;
    id _completion;
    bool _confirmationRequired;
    NSURL *_url;
}

@property(assign,retain) ACAccount * account;
@property(assign,copy) NSString * authDelegateClassBundlePath;
@property(assign,copy) NSString * authDelegateClassName;
@property(assign,copy) id completion;
@property(assign,readwrite) bool confirmationRequired;
@property(assign,copy) NSURL * url;

- (void).cxx_destruct;
- (id)account;
- (id)authDelegateClassBundlePath;
- (id)authDelegateClassName;
- (id)completion;
- (bool)confirmationRequired;
- (void)setAccount:(id)arg1;
- (void)setAuthDelegateClassBundlePath:(id)arg1;
- (void)setAuthDelegateClassName:(id)arg1;
- (void)setCompletion:(id)arg1;
- (void)setConfirmationRequired:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end