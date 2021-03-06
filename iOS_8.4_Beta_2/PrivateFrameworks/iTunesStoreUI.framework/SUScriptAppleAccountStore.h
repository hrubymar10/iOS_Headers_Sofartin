/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptAppleAccountStore : SUScriptObject {
    ACAccountStore *_accountStore;
    NSString *_effectiveBundleID;
}

@property(assign,readonly) NSString * accessPurposeRead;
@property(assign,readonly) NSString * accessPurposeReadWrite;
@property(assign,readonly) NSString * accessPurposeWrite;
@property(assign,readonly) NSString * accountTypeIdentifierFacebook;
@property(assign,readonly) NSString * accountTypeIdentifierSinaWeibo;
@property(assign,readonly) NSString * accountTypeIdentifierTwitter;
@property(assign,readonly) NSString * effectiveBundleID;
@property(assign,readonly) SUScriptAppleAccount * primaryAppleAccount;
@property(assign,readonly) long long renewResultFailed;
@property(assign,readonly) long long renewResultRejected;
@property(assign,readonly) long long renewResultRenewed;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_accountStore;
- (void)_accountStoreChangeNotification:(id)arg1;
- (id)_className;
- (id)accessPurposeRead;
- (id)accessPurposeReadWrite;
- (id)accessPurposeWrite;
- (id)accountTypeIdentifierFacebook;
- (id)accountTypeIdentifierSinaWeibo;
- (id)accountTypeIdentifierTwitter;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)accountsWithAccountType:(id)arg1;
- (id)attributeKeys;
- (void)dealloc;
- (id)effectiveBundleID;
- (id)init;
- (id)makeClientAccessInfoWithAccountType:(id)arg1;
- (id)primaryAppleAccount;
- (void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2;
- (long long)renewResultFailed;
- (long long)renewResultRejected;
- (long long)renewResultRenewed;
- (void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2;
- (id)scriptAttributeKeys;
- (void)setEffectiveBundleID:(id)arg1;

@end
