/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptSoftwareApplication : SUScriptObject {
    ISSoftwareApplication *_application;
}

@property(assign,readonly) NSNumber * adamID;
@property(assign,readonly) NSString * bundleID;
@property(assign,readonly) NSString * bundleShortVersionString;
@property(assign,readonly) NSString * bundleVersion;
@property(assign,readonly) NSNumber * dsID;
@property(assign,readonly) NSString * environmentProduction;
@property(assign,readonly) NSString * environmentSandbox;
@property(assign,readonly) long long launchResultApplicationDisabled;
@property(assign,readonly) long long launchResultApplicationNotFound;
@property(assign,readonly) long long launchResultInvalidArgument;
@property(assign,readonly) long long launchResultLaunchOrSuspendInProgress;
@property(assign,readonly) long long launchResultLocked;
@property(assign,readonly) long long launchResultLockedOut;
@property(assign,readonly) long long launchResultSecurityPolicy;
@property(assign,readonly) long long launchResultSpringBoardUnavailable;
@property(assign,readonly) long long launchResultSuccess;
@property(assign,readonly) long long launchResultSyncing;
@property(assign,readonly) NSNumber * ratingRank;
@property(assign,readonly) NSString * ratingSystem;
@property(assign,readonly) NSString * softwareType;
@property(assign,readonly) NSString * softwareTypeNewsstand;
@property(assign,readonly) NSString * storeFrontID;
@property(assign,readonly) NSNumber * versionID;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)adamID;
- (id)attributeKeys;
- (id)bundleID;
- (id)bundleShortVersionString;
- (id)bundleVersion;
- (void)checkInAppPurchaseQueueWithAccountID:(id)arg1 environment:(id)arg2;
- (void)dealloc;
- (id)dsID;
- (id)environmentProduction;
- (id)environmentSandbox;
- (id)initWithApplication:(id)arg1;
- (long long)launchResultApplicationDisabled;
- (long long)launchResultApplicationNotFound;
- (long long)launchResultInvalidArgument;
- (long long)launchResultLaunchOrSuspendInProgress;
- (long long)launchResultLocked;
- (long long)launchResultLockedOut;
- (long long)launchResultSecurityPolicy;
- (long long)launchResultSpringBoardUnavailable;
- (long long)launchResultSuccess;
- (long long)launchResultSyncing;
- (long long)launchWithURL:(id)arg1 options:(id)arg2 suspended:(id)arg3;
- (id)ratingRank;
- (id)ratingSystem;
- (id)scriptAttributeKeys;
- (id)softwareType;
- (id)softwareTypeNewsstand;
- (id)storeFrontID;
- (id)versionID;

@end