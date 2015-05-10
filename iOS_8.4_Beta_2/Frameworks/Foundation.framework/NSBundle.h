/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBundle : NSObject {
    id _cfBundle;
    unsigned long long _flags;
    id _initialPath;
    id _lock;
    Class _principalClass;
    unsigned long long _reserved2;
    id _reserved3;
    id _resolvedPath;
}

@property(assign,copy) NSURL * appStoreReceiptURL;
@property(assign,copy) NSString * builtInPlugInsPath;
@property(assign,copy) NSURL * builtInPlugInsURL;
@property(assign,copy) NSString * bundleIdentifier;
@property(assign,copy) NSString * bundlePath;
@property(assign,copy) NSURL * bundleURL;
@property(assign,copy) NSString * developmentLocalization;
@property(assign,copy) NSArray * executableArchitectures;
@property(assign,copy) NSString * executablePath;
@property(assign,copy) NSURL * executableURL;
@property(assign,copy) NSDictionary * infoDictionary;
@property(getter=isLoaded,assign,readonly) bool loaded;
@property(assign,copy) NSArray * localizations;
@property(assign,copy) NSDictionary * localizedInfoDictionary;
@property(assign,copy) NSArray * preferredLocalizations;
@property(assign,readonly) Class principalClass;
@property(assign,copy) NSString * privateFrameworksPath;
@property(assign,copy) NSURL * privateFrameworksURL;
@property(assign,copy) NSString * resourcePath;
@property(assign,copy) NSURL * resourceURL;
@property(assign,copy) NSString * sharedFrameworksPath;
@property(assign,copy) NSURL * sharedFrameworksURL;
@property(assign,copy) NSString * sharedSupportPath;
@property(assign,copy) NSURL * sharedSupportURL;

+ (id)APDBundleVersion;
+ (id)APDCoachingTipsAPDIDForKey:(id)arg1;
+ (id)APDCoachingTipsAPDIDForKey:(id)arg1 valueIfMissing:(id)arg2;
+ (id)APDCoachingTipsGestureGraphicValueForKey:(id)arg1 valueIfMissing:(id)arg2;
+ (id)APDCoachingTipsLocalizedFont;
+ (id)APDCoachingTipsLocalizedString:(id)arg1;
+ (id)APDLocalizedString:(id)arg1 valueIfMissing:(id)arg2 table:(id)arg3;
+ (id)APDLocalizedString:(id)arg1 valueIfMissing:(id)arg2 table:(id)arg3 bundle:(id)arg4;
+ (id)APDResourcesBundle;
+ (id)APDResourcesBundleURL;
+ (id)MCD_bundle;
+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (id)__geoBundle;
+ (id)__vkBundle;
+ (id)_brailleTableBundles;
+ (id)_brailleTableBundles;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)_brailleTableDictionaryForBrailleTableIdentifier:(id)arg1;
+ (id)_coreroutineBundle;
+ (id)_coreroutine_LocalizedStringForKey:(id)arg1;
+ (id)_gkBundleWithIdentifier:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1;
+ (id)_gkLocalizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
+ (id)_mapkitBundle;
+ (id)_typologyBundle;
+ (id)accessibilityBundleWithLastPathComponent:(id)arg1;
+ (id)accessibilityLocalBundleWithLastPathComponent:(id)arg1;
+ (id)afui_assistantUIFrameworkBundle;
+ (id)allBundles;
+ (id)allFrameworks;
+ (id)blj_localizedString:(id)arg1;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundleWithIdentifier:(id)arg1;
+ (id)brailleDriverBundles;
+ (id)brailleDriverBundles;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleDriverDeviceDetectionInfo;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)brailleTableBundleWithTableIdentifier:(id)arg1;
+ (id)brailleTableIdentifiers;
+ (id)brailleTableIdentifiers;
+ (id)bundleForBinaryImagePath:(id)arg1;
+ (id)bundleForClass:(Class)arg1;
+ (long long)bundleIndexForBrailleDriverIdentifier:(id)arg1;
+ (long long)bundleIndexForBrailleDriverIdentifier:(id)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)bundleWithURL:(id)arg1;
+ (id)currentNibLoadingBundle;
+ (id)currentNibPath;
+ (id)debugDescription;
+ (bool)doesBrailleTableSupportContractions:(id)arg1;
+ (bool)doesBrailleTableSupportContractions:(id)arg1;
+ (bool)doesBrailleTableSupportEightDot:(id)arg1;
+ (bool)doesBrailleTableSupportEightDot:(id)arg1;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(id)arg3;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7;
+ (id)frameworkBundleForBinaryImagePath:(id)arg1;
+ (id)fuseUIBundle;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;
+ (id)languageIdentifiersForBrailleTableIdentifier:(id)arg1;
+ (id)loadedBundles;
+ (id)mainBundle;
+ (bool)mainBundleIsXcode;
+ (id)mediaPlayerBundle;
+ (id)mediaPlayerUIBundle;
+ (id)nameForBrailleTableIdentifier:(id)arg1;
+ (id)nameForBrailleTableIdentifier:(id)arg1;
+ (id)pathForITunesResource:(id)arg1 ofType:(id)arg2;
+ (id)pathForITunesStoreResource:(id)arg1 ofType:(id)arg2;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (void)popNibLoadingBundle;
+ (void)popNibPath;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;
+ (id)pu_PhotosUIFrameworkBundle;
+ (void)pushNibLoadingBundle:(id)arg1;
+ (void)pushNibPath:(id)arg1;
+ (id)radioUIBundle;
+ (id)safari_safariSharedBundle;
+ (void)setSystemLanguages:(id)arg1;
+ (id)tableIdentifiersForLanguageIdentifier:(id)arg1;
+ (id)tableIdentifiersForLanguageIdentifier:(id)arg1;
+ (void)updateCoachingTipsStringsBundlesWithBundlePaths:(id)arg1;

- (id)PKSanitizedBundleIdentifier;
- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)URLForMovieResource:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (id)XPCServiceBundles;
- (void)__static;
- (void)_accessibilityInitializeContainerLogic;
- (id)_assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_cachedMainBundleResourcePath;
- (struct __CFBundle { }*)_cfBundle;
- (id)_gkBundleVersion;
- (id)_gkFrameworkVersionDescription;
- (bool)_gkIsBadgingEnabled;
- (bool)_gkIsGameCenter;
- (bool)_gkIsGameCenterUIService;
- (id)_gkLocalizedName;
- (id)_gkLocalizedStringForKey:(id)arg1 defaultValue:(id)arg2 arguments:(id)arg3;
- (id)_gkLocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 language:(id)arg4;
- (id)_gkPathForChallengeSound;
- (id)_gkPathForInviteSound;
- (id)_gkPathForSoundWithName:(id)arg1;
- (id)_gkPreferredLanguage;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)_regionsArray;
- (id)accessibilityBundlePath;
- (id)appStoreReceiptURL;
- (id)assistantUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)assistantUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)assistantUILocalizedStringFromSiriLanguageForKey:(id)arg1 table:(id)arg2;
- (id)builtInPlugInsPath;
- (id)builtInPlugInsURL;
- (id)bundleIdentifier;
- (id)bundleLanguages;
- (id)bundlePath;
- (id)bundleSpecificTableIdentifierForTableIdentifier:(id)arg1;
- (id)bundleSpecificTableIdentifierForTableIdentifier:(id)arg1;
- (id)bundleURL;
- (Class)classNamed:(id)arg1;
- (id)dataForResourceName:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)developmentLocalization;
- (id)executableArchitectures;
- (id)executablePath;
- (id)executableURL;
- (void)finalize;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(id)arg2;
- (id)imageForResource:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)infoDictionary;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)invalidateResourceCache;
- (bool)isLoaded;
- (bool)load;
- (bool)loadAndReturnError:(id*)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;
- (id)localizations;
- (id)localizedDocumentStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)newDataURLForResource:(id)arg1 ofType:(id)arg2 withMIMEType:(id)arg3;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)preferredLocalizations;
- (bool)preflightAndReturnError:(id*)arg1;
- (Class)principalClass;
- (id)privateFrameworksPath;
- (id)privateFrameworksURL;
- (id)resourcePath;
- (id)resourceURL;
- (bool)safari_primaryLocalizationIsEnglish;
- (id)sharedFrameworksPath;
- (id)sharedFrameworksURL;
- (id)sharedSupportPath;
- (id)sharedSupportURL;
- (id)siriUILocalizedStringForKey:(id)arg1;
- (id)siriUILocalizedStringForKey:(id)arg1 table:(id)arg2;
- (id)siriUILocalizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)suic_localizedStringForKey:(id)arg1;
- (id)suic_localizedStringForKey:(id)arg1 table:(id)arg2;
- (id)suic_localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;
- (id)tableIdentifierForBundleSpecificTableIdentifier:(id)arg1;
- (bool)unload;
- (unsigned long long)versionNumber;
- (id)webui_localizedDisplayName;

@end