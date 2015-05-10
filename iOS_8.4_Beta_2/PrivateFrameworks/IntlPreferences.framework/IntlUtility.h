/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
 */

@interface IntlUtility : NSObject {
    NSMutableArray *mBidiLanguagesArray;
    NSMutableArray *mBidiTestedLanguagesArray;
    void *mDisplayLanguageCachePtr;
    int mDisplayLanguageCacheUsed;
    NSDictionary *mLanguageList;
    NSDictionary *mLocalizedLanguageList;
}

+ (int)UDisplayContextForIUDisplayNameContext:(unsigned long long)arg1;
+ (id)alternateContinentOfRegion:(id)arg1;
+ (id)capitalizeFirstWordOfName:(id)arg1 accordingToLanguage:(id)arg2;
+ (id)defaultCalendarForLocaleID:(id)arg1;
+ (void)enumeratePreferredCalendarsForLocaleID:(id)arg1 usingBlock:(id)arg2;
+ (id)filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3;
+ (id)importAppleLanguages;
+ (id)importAppleLanguagesLegacy;
+ (id)importUsedLanguages;
+ (bool)isLunarCalendarDefaultOn;
+ (bool)isLunarCalendarDefaultOnForLanguage:(id)arg1 locale:(id)arg2;
+ (bool)isYearlessDate:(id)arg1 forCalendar:(id)arg2;
+ (id)languageCharSetList;
+ (id)localeForCalendarID:(id)arg1;
+ (id)localeForCalendarID:(id)arg1 andLocale:(id)arg2;
+ (id)lunarCalendarsForLocaleID:(id)arg1;
+ (id)nativeNameForLanguage:(id)arg1 context:(unsigned long long)arg2;
+ (id)normalizedLanguageIDFromString:(id)arg1;
+ (id)parentLocaleIdentifierForIdentifier:(id)arg1;
+ (bool)performMigration;
+ (id)preferredLanguagesForRegion:(id)arg1;
+ (id)preferredLanguagesForRegionWithoutFiltering:(id)arg1;
+ (id)preferredLunarCalendarForLocaleID:(id)arg1;
+ (id)restrictedCountryCodes;
+ (void)setYearlessYear:(id)arg1 forCalendar:(id)arg2;
+ (id)sharedIntlUtility;
+ (id)stdLanguageIDs;
+ (id)stdLanguageIDsAndNativeNames;
+ (id)supportedCalendars;
+ (bool)upgradeAppleLanguagesFrom:(id)arg1 to:(id)arg2;
+ (long long)yearlessYearForMonth:(long long)arg1 withCalendar:(id)arg2;

- (bool)canRenderLanguage:(id)arg1;
- (void)dealloc;
- (id)displayNameForLabelForLunarCalendarID:(id)arg1 displayLanguage:(id)arg2;
- (id)displayNameForLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForNormalizedLanguage:(id)arg1 context:(unsigned long long)arg2 displayLanguage:(id)arg3;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 capitalization:(unsigned long long)arg3;
- (id)languageList;
- (id)localizedLanguageForLanguage:(id)arg1;
- (id)localizedLanguageList;
- (id)localizedNameForScript:(short)arg1;
- (id)nativeLanguageForLanguage:(id)arg1;

@end
