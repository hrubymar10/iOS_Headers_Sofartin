/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountType : NSObject <NSSecureCoding> {
    NSSet *_accessKeys;
    ACAccountStore *_accountStore;
    NSString *_accountTypeDescription;
    NSString *_credentialProtectionPolicy;
    NSString *_credentialType;
    bool _encryptAccountProperties;
    NSString *_identifier;
    NSURL *_objectID;
    NSString *_owningBundleID;
    NSString *_owningTeamID;
    NSSet *_supportedDataclasses;
    int _supportsAuthentication;
    bool _supportsMultipleAccounts;
    NSSet *_syncableDataclasses;
    int _visibility;
}

@property(assign,readonly) bool accessGranted;
@property(assign,readonly) NSSet * accessKeys;
@property(assign,readwrite) ACAccountStore * accountStore;
@property(assign,readonly) NSString * accountTypeDescription;
@property(assign,copy) id credentialProtectionPolicy;
@property(assign,retain) NSString * credentialType;
@property(assign,readonly) bool encryptAccountProperties;
@property(assign,readonly) NSString * fullDescription;
@property(assign,readonly) NSString * identifier;
@property(assign,retain) NSURL * objectID;
@property(assign,retain) NSString * owningBundleID;
@property(assign,retain) NSString * owningTeamID;
@property(assign,readonly) NSSet * supportedDataclasses;
@property(assign,readwrite) int supportsAuthentication;
@property(assign,readwrite) bool supportsMultipleAccounts;
@property(assign,readonly) NSSet * syncableDataclasses;
@property(assign,readwrite) int visibility;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accessGranted;
- (id)accessKeys;
- (id)accountStore;
- (id)accountTypeDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialProtectionPolicy;
- (id)credentialType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)encryptAccountProperties;
- (id)fullDescription;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
- (id)initWithManagedAccountType:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
- (id)objectID;
- (id)owningBundleID;
- (id)owningTeamID;
- (void)setAccountStore:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (void)setCredentialProtectionPolicy:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setOwningBundleID:(id)arg1;
- (void)setOwningTeamID:(id)arg1;
- (void)setSupportsAuthentication:(int)arg1;
- (void)setSupportsMultipleAccounts:(bool)arg1;
- (void)setVisibility:(int)arg1;
- (id)supportedDataclasses;
- (int)supportsAuthentication;
- (bool)supportsMultipleAccounts;
- (id)syncableDataclasses;
- (int)visibility;

@end
