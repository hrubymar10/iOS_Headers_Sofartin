/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer> {
    ACAccount *_account;
    DAAccount *_accountBeingValidated;
    ACAccountStore *_accountStore;
    NSMutableArray *_dataclassesRequiringMergeDecision;
    bool _didUserConsentToMerge;
    id _handler;
    bool _isVerifyingExistingEmailAccount;
    NSMutableDictionary *_queuedDataclassActions;
    MFAccountValidator *_validator;
    AAAutoAccountVerifier *_verifier;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (Class)_accountClassForAddress:(id)arg1;
+ (id)_domainFromAddress:(id)arg1;
+ (id)_usernameFromAddress:(id)arg1;
+ (bool)canAutoSetupMailAccount:(id)arg1;
+ (bool)needSetupForMailAccount:(id)arg1;

- (void).cxx_destruct;
- (id)_account;
- (void)_addDAEmailAccount:(id)arg1;
- (void)_addMailAccount:(id)arg1;
- (void)_createAndValidateDAMailAccountWithProperties:(id)arg1;
- (void)_createAndValidateMailAccountWithProperties:(id)arg1;
- (bool)_dataclassBoundToSingleAccountAndOnAlready:(id)arg1 withAccount:(id)arg2;
- (void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2;
- (bool)_shouldInitiallyEnableDataclass:(id)arg1 forAccount:(id)arg2;
- (void)_validateDAAccount:(id)arg1;
- (void)_validateExistingEmailAccount:(id)arg1 withPassword:(id)arg2;
- (void)_validateMailAccount:(id)arg1;
- (void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(bool)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)completeEnablingCloudServicesWithCompletion:(id)arg1;
- (id)init;
- (void)setBackupEnabled:(bool)arg1 completion:(id)arg2;
- (void)setCloudServicesEnabled:(bool)arg1 completion:(id)arg2;
- (void)setDeviceLocatorEnabled:(bool)arg1;
- (void)setupMailAccount:(id)arg1 password:(id)arg2 completion:(id)arg3;
- (void)verifyAccountWithAppleID:(id)arg1 completion:(id)arg2;

@end
