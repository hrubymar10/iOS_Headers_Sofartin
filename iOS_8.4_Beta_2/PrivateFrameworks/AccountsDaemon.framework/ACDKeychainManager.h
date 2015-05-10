/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainManager : NSObject

+ (id)_credentialForAccountWithID:(id)arg1 accountTypeID:(id)arg2 credentialType:(id)arg3 clientID:(id)arg4 error:(id*)arg5;
+ (id)_itemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4;
+ (id)_keychainServiceNameForClientID:(id)arg1 accountTypeIdentifier:(id)arg2 key:(id)arg3;
+ (void)_migrateCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3;
+ (void)_removeAllItemsForService:(id)arg1;
+ (void)_removeAllItemsForUsername:(id)arg1;
+ (void)_removeCredentialForAccountWithUsername:(id)arg1 accountIdentifier:(id)arg2 accountTypeIdentifier:(id)arg3 credentialType:(id)arg4 clientID:(id)arg5 error:(id*)arg6;
+ (void)_removeCredentialItemWithKey:(id)arg1 forAccountWithID:(id)arg2 accountTypeID:(id)arg3 clientID:(id)arg4 error:(id*)arg5;
+ (void)_removeCredentialItemWithKey:(id)arg1 forAccountWithID:(id)arg2 username:(id)arg3 accountTypeID:(id)arg4 clientID:(id)arg5 error:(id*)arg6;
+ (bool)_removeItemForService:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4;
+ (void)_removeNonPersistentCredentialItemsForAccount:(id)arg1;
+ (void)_saveCredential:(id)arg1 forAccount:(id)arg2 clientID:(id)arg3 error:(id*)arg4;
+ (void)_setCredentialForAccount:(id)arg1 clientID:(id)arg2 handleCredentialItemRemovals:(bool)arg3 error:(id*)arg4;
+ (void)_setItem:(id)arg1 forServiceName:(id)arg2 username:(id)arg3 accessGroup:(id)arg4 accessibility:(id)arg5 syncable:(bool)arg6 error:(id*)arg7;
+ (void)_setNonPersistentCredentialTimerForAccount:(id)arg1;
+ (bool)_shouldSyncCredentialForAccountType:(id)arg1;
+ (id)credentialForAccount:(id)arg1 clientID:(id)arg2;
+ (id)credentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (id)credentialForManagedAccountObject:(id)arg1;
+ (id)credentialForManagedAccountObject:(id)arg1 clientID:(id)arg2;
+ (void)initialize;
+ (void)removeCredentialForAccount:(id)arg1;
+ (void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2;
+ (void)removeCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)removeCredentialForAccount:(id)arg1 error:(id*)arg2;
+ (void)setCredentialForAccount:(id)arg1;
+ (void)setCredentialForAccount:(id)arg1 clientID:(id)arg2;
+ (void)setCredentialForAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;
+ (void)setCredentialForAccount:(id)arg1 error:(id*)arg2;
+ (void)setCredentialForNewAccount:(id)arg1 clientID:(id)arg2 error:(id*)arg3;

@end
