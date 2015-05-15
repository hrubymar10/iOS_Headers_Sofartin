/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemPolicyForApp : NSObject {
    NSString *_bundleIdentifier;
    bool _forcePolicyOptions;
    unsigned long long _policyOptions;
}

@property(assign,copy) NSString * bundleIdentifier;

+ (bool)isServiceRestricted:(id)arg1;

- (bool)_isBackgroundAppRefreshRestricted;
- (bool)_isCellularDataRestricted;
- (bool)_isLocationServicesRestricted;
- (id)_privacyAccessForService:(struct __CFString { }*)arg1;
- (id)_sectionInfo;
- (bool)_supportsBackgroundAppRefresh;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (id)authLevelStringForStatus:(int)arg1;
- (id)backgroundAppRefreshSpecifier;
- (id)bundleIdentifier;
- (id)cellularSpecifier;
- (struct __CFBundle { }*)copyTCCBundleForService:(struct __CFString { }*)arg1;
- (id)dataUsageWorkspaceInfo;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)isBackgroundRefreshEnabled:(id)arg1;
- (bool)isCellularBundleID:(id)arg1;
- (id)locationServicesSpecifier;
- (id)locationStatus:(id)arg1;
- (id)notificationSpecifier;
- (id)privacyAccessForSpecifier:(id)arg1;
- (id)privacySpecifierForService:(struct __CFString { }*)arg1;
- (id)privacySpecifiers;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (id)specifiersForPolicyOptions:(unsigned long long)arg1 force:(bool)arg2;

@end
