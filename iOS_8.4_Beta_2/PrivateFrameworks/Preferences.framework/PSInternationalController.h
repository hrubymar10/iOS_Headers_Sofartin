/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSInternationalController : PSListController {
    PSSpecifier *_addLanguageSpecifier;
    bool _changePrimaryLanguage;
    NSArray *_deviceLanguageGroup;
    unsigned long long _deviceLanguageIndex;
    NSLocale *_locale;
    NSArray *_preferredLanguagesGroup;
    NSArray *_regionFormatExampleGroup;
    NSArray *_regionFormatGroup;
    bool _shouldReloadSpecifiers;
    NSString *_topMostLanguage;
    NSMutableArray *_updatedAppleLanguages;
}

@property(assign,retain) PSSpecifier * addLanguageSpecifier;
@property(assign,readwrite) bool changePrimaryLanguage;
@property(assign,retain) NSArray * deviceLanguageGroup;
@property(assign,retain) NSArray * preferredLanguagesGroup;
@property(assign,retain) NSArray * regionFormatExampleGroup;
@property(assign,retain) NSArray * regionFormatGroup;
@property(assign,readwrite) bool shouldReloadSpecifiers;
@property(assign,retain) NSMutableArray * updatedAppleLanguages;

+ (id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1;
+ (id)capitalizeFirstPartOfCountry:(id)arg1;
+ (id)formattedDate:(id)arg1;
+ (id)formattedMoneyAndNumbers:(id)arg1 country:(id)arg2;
+ (id)formattedTime:(id)arg1;
+ (void)postNotificationForLanguageChange;
+ (id)reloadLocale:(id)arg1;
+ (void)resetTimeFormatPreferences;
+ (double)sampleTime;
+ (void)setCountryForLocale:(id)arg1;
+ (void)setLanguage:(id)arg1;
+ (void)setLocale:(id)arg1;
+ (void)setLocaleAfterLanguageChange:(id)arg1;
+ (void)setLocaleAndResetTimeFormat:(id)arg1;
+ (void)setLocaleOnly:(id)arg1;
+ (id)shortTitlesForLanguageIdentifiers:(id)arg1;
+ (id)titlesForLanguageIdentifiers:(id)arg1;
+ (id)validateLocale:(id)arg1;

- (void)_removeBlackFrame;
- (id)addLanguageSpecifier;
- (id)calendar:(id)arg1;
- (bool)canEditLanguageAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)cancelChangeLanguage:(id)arg1;
- (void)cancelEdits;
- (void)changeLanguage:(id)arg1;
- (bool)changePrimaryLanguage;
- (void)dealloc;
- (id)deviceLanguageGroup;
- (id)init;
- (id)language:(id)arg1;
- (id)locale:(id)arg1;
- (void)localeChangedAction;
- (id)localizedLanguage:(id)arg1;
- (void)logStatistics;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)onlyOneSystemLanguageInPreferredLanguages;
- (id)preferredLanguagesGroup;
- (id)regionFormatExampleGroup;
- (id)regionFormatGroup;
- (void)reloadLocale;
- (unsigned long long)sectionIndexForTableView:(id)arg1 fromSuperSectionIndex:(unsigned long long)arg2;
- (void)setAddLanguageSpecifier:(id)arg1;
- (void)setCalendar:(id)arg1 specifier:(id)arg2;
- (void)setChangePrimaryLanguage:(bool)arg1;
- (void)setCountryForLocale:(id)arg1;
- (void)setDeviceLanguageGroup:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;
- (void)setLocale:(id)arg1 specifier:(id)arg2;
- (void)setPreferredLanguagesGroup:(id)arg1;
- (void)setRegionFormatExampleGroup:(id)arg1;
- (void)setRegionFormatGroup:(id)arg1;
- (void)setShouldReloadSpecifiers:(bool)arg1;
- (void)setUpdatedAppleLanguages:(id)arg1;
- (bool)shouldReloadSpecifiers;
- (void)showBlackViewWithLabel:(id)arg1 withLanguageIdentifier:(id)arg2;
- (void)showLanguageSheet:(id)arg1;
- (void)showOfficialLanguageSheet:(id)arg1;
- (id)specifiers;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)toggleEdit;
- (void)updateCell:(id)arg1 forPreferredLanguageAtIndex:(unsigned long long)arg2;
- (void)updateSelectionStyleForVisibleCells;
- (id)updatedAppleLanguages;
- (id)updatedDeviceLanguage;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
