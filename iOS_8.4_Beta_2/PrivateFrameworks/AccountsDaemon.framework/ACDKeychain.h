/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychain : NSObject

+ (id)_knownMissingKeychainItems;
+ (id)_missingKeychainItemSpecifierForService:(id)arg1 username:(id)arg2;
+ (void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id*)arg6;
+ (bool)canAccessPasswordsWithPolicy:(id)arg1;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4;
+ (void)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4;
+ (void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 error:(id*)arg5;

@end
