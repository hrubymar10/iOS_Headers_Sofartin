/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegAlias : NSObject {
    IMAccount *_account;
    NSString *_alias;
    NSString *_displayName;
}

@property(assign,retain) IMAccount * account;
@property(assign,copy) NSString * alias;
@property(assign,copy) NSString * displayName;
@property(assign,retain) NSString * identifier;
@property(assign,readonly) long long type;

- (id)account;
- (id)alias;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLocalPhoneNumberAlias;
- (bool)isPhoneNumberAliasOnPhoneNumberAccount;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (long long)type;
- (bool)validate;
- (long long)validationErrorReason;
- (long long)validationStatus;

@end
