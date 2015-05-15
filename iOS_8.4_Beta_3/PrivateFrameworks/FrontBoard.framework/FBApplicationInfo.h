/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationInfo : FBBundleInfo {
    NSSet *_backgroundModes;
    bool _beta;
    NSURL *_bundleContainerURL;
    NSArray *_customMachServices;
    NSURL *_dataContainerURL;
    FBMutableApplicationDefaults *_defaults;
    NSArray *_deviceFamilies;
    bool _enabled;
    NSDictionary *_entitlements;
    NSDictionary *_environmentVariables;
    NSURL *_executableURL;
    bool _exitsOnSuspend;
    NSArray *_externalAccessoryProtocols;
    NSString *_fallbackFolderName;
    NSArray *_folderNames;
    bool _installing;
    double _lastModifiedDate;
    float _minimumBrightnessLevel;
    bool _newsstand;
    NSString *_preferenceDomain;
    bool _provisioningProfileValidated;
    long long _ratingRank;
    NSArray *_requiredCapabilities;
    bool _requiresPersistentWiFi;
    bool _restricted;
    NSURL *_sandboxURL;
    NSString *_sdkVersion;
    NSString *_signerIdentity;
    NSSet *_supportedInterfaceOrientations;
    NSArray *_tags;
    unsigned long long _type;
    bool _uninstalling;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(getter=isBeta,assign,readonly) bool beta;
@property(assign,retain) NSURL * bundleContainerURL;
@property(assign,retain) NSArray * customMachServices;
@property(assign,retain) NSURL * dataContainerURL;
@property(assign,retain) FBApplicationDefaults * defaults;
@property(assign,retain) NSArray * deviceFamilies;
@property(getter=isEnabled,assign,readonly) bool enabled;
@property(assign,retain) NSDictionary * entitlements;
@property(assign,retain) NSDictionary * environmentVariables;
@property(assign,retain) NSURL * executableURL;
@property(getter=isExitsOnSuspend,assign,readonly) bool exitsOnSuspend;
@property(assign,retain) NSArray * externalAccessoryProtocols;
@property(assign,retain) NSString * fallbackFolderName;
@property(assign,retain) NSArray * folderNames;
@property(getter=_isInstalling,setter=_setInstalling:,assign,readwrite) bool installing;
@property(assign,readonly) double lastModifiedDate;
@property(assign,readonly) float minimumBrightnessLevel;
@property(getter=isNewsstand,assign,readonly) bool newsstand;
@property(assign,copy) NSString * preferenceDomain;
@property(getter=isProvisioningProfileValidated,assign,readonly) bool provisioningProfileValidated;
@property(assign,readonly) long long ratingRank;
@property(assign,retain) NSArray * requiredCapabilities;
@property(assign,readonly) bool requiresPersistentWiFi;
@property(getter=isRestricted,assign,readonly) bool restricted;
@property(assign,retain) NSURL * sandboxURL;
@property(assign,copy) NSString * sdkVersion;
@property(assign,readonly) long long signatureState;
@property(assign,copy) NSString * signerIdentity;
@property(assign,retain) NSArray * tags;
@property(assign,readonly) unsigned long long type;
@property(getter=_isUninstalling,setter=_setUninstalling:,assign,readwrite) bool uninstalling;

- (void)_acceptApplicationSignatureIdentity;
- (unsigned long long)_applicationType:(id)arg1;
- (void)_buildDefaultsFromInfoPlist:(id)arg1;
- (void)_cacheFolderNamesForSystemApp:(id)arg1;
- (long long)_computeRatingRank;
- (id)_computeSupportedInterfaceOrientations:(id)arg1;
- (id)_configureEnvironment:(id)arg1;
- (id)_copyiTunesMetadata;
- (bool)_doesProfileMatchSignerIdentity:(struct _MISProfile { }*)arg1;
- (id)_expirationDateForProvisioningProfile;
- (bool)_isInstalling;
- (bool)_isUninstalling;
- (double)_lastModifiedDateForPath:(id)arg1;
- (id)_localizedGenreFromDictionary:(id)arg1;
- (id)_localizedGenreNameForID:(long long)arg1;
- (id)_preferenceDomain;
- (void)_setInstalling:(bool)arg1;
- (void)_setUninstalling:(bool)arg1;
- (bool)_signatureNeedsExplicitUserTrust;
- (id)_uniqueDeviceIdentifier;
- (void)acceptApplicationSignatureIdentity;
- (bool)builtOnOrAfterSDKVersion:(id)arg1;
- (id)bundleContainerURL;
- (id)customMachServices;
- (id)dataContainerURL;
- (void)dealloc;
- (bool)defaultStatusBarHiddenForOrientation:(long long)arg1;
- (id)defaults;
- (id)description;
- (id)deviceFamilies;
- (id)entitlements;
- (id)environmentVariables;
- (id)executableURL;
- (id)externalAccessoryProtocols;
- (id)fallbackFolderName;
- (id)folderNames;
- (id)initWithApplicationProxy:(id)arg1;
- (bool)isBeta;
- (bool)isEnabled;
- (bool)isExitsOnSuspend;
- (bool)isNewsstand;
- (bool)isProvisioningProfileValidated;
- (bool)isRestricted;
- (double)lastModifiedDate;
- (float)minimumBrightnessLevel;
- (id)preferenceDomain;
- (long long)ratingRank;
- (id)requiredCapabilities;
- (bool)requiresPersistentWiFi;
- (id)sandboxURL;
- (id)sdkVersion;
- (long long)signatureState;
- (id)signerIdentity;
- (bool)supportsBackgroundMode:(id)arg1;
- (bool)supportsCompactStatusBarHiding;
- (bool)supportsInterfaceOrientation:(long long)arg1;
- (id)tags;
- (unsigned long long)type;

@end
