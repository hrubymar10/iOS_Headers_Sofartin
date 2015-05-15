/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAccountStore : NSObject {
    ACAccountStore *_accountStore;
    int _accountStoreLock;
}

@property (readonly) ACAccountStore *persistentStore;

+ (id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(bool)arg3;
+ (bool)_shouldUpdateAccountsInPlace;
+ (id)sharedAccountStore;

- (id)_accountWithPersistentAccount:(id)arg1 useExisting:(bool)arg2;
- (void)_accountsStoreChanged:(id)arg1;
- (id)accountsWithTypeIdentifiers:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)existingAccountWithPersistentAccount:(id)arg1;
- (id)init;
- (id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1;
- (id)persistentStore;
- (void)removePersistentAccountWithAccount:(id)arg1;
- (void)savePersistentAccountWithAccount:(id)arg1;
- (void)setPersistentStore:(id)arg1;
- (id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1;

@end
