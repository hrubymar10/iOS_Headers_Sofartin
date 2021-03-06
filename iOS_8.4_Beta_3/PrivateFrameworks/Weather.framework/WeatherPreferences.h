/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate> {
    NSString *_UUID;
    bool _isCelsius;
    NSArray *_lastUbiquitousWrittenDefaults;
    bool _serviceDebugging;
    NSString *_serviceHost;
    <SynchronizedDefaultsDelegate> *_syncDelegate;
    NSString *_twcURLString;
    NSUserDefaults *_userGroupPrefs;
    bool _userGroupPrefsLockedWhenInit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <SynchronizedDefaultsDelegate> *syncDelegate;
@property (nonatomic, copy) NSString *twcURLString;
@property (nonatomic) bool userGroupPrefsLockedWhenInit;
@property (nonatomic, copy) NSString *yahooWeatherURLString;

+ (void)clearSharedPreferences;
+ (id)serviceDebuggingPath;
+ (id)sharedPreferences;

- (id)UUID;
- (bool)_areDefaultCities:(id)arg1;
- (id)_cacheDirectoryPath;
- (bool)_checkAndPerformMigrationIfNeeded;
- (id)_cityArrayToCloudCityArray:(id)arg1;
- (void)_clearCachedObjects;
- (id)_cloudCitiesFromLegacyCloudCities:(id)arg1;
- (id)_cloudCityFromALCity:(id)arg1 name:(id)arg2;
- (id)_defaultCities;
- (bool)_defaultsAreValid;
- (bool)_defaultsCurrent;
- (bool)_ensurePrefsLoaded;
- (bool)_getGroupDefaultsFromURLInApp:(id)arg1;
- (bool)_legacyCloudCity:(id)arg1 isEqualToALCity:(id)arg2;
- (id)_ppt_addFakeTestCities;
- (void)_saveUbiquitousDefaults:(id)arg1;
- (void)_setLastUbiquitousWrittenDefaults:(id)arg1 isCloudCityArray:(bool)arg2;
- (void)_syncToCloudIfNotDefaultCities:(id)arg1;
- (void)_synchronizedDefaultsDidChange:(id)arg1;
- (id)_translatedLegacyCloudCities;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)combineCloudCities:(id)arg1 withExisting:(id)arg2 byAppending:(bool)arg3;
- (void)dealloc;
- (id)init;
- (void)initOnPrefLoad;
- (bool)isCelsius;
- (bool)isLocalWeatherEnabled;
- (int)loadActiveCity;
- (int)loadDefaultSelectedCity;
- (id)loadSavedCities;
- (id)loadSavedCityAtIndex:(long long)arg1;
- (id)localWeatherCity;
- (bool)performMigration;
- (id)preferencesDictionaryForCity:(id)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (bool)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)resetLocale;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToUbiquitousStore;
- (bool)serviceDebugging;
- (id)serviceHost;
- (void)setActiveCity:(unsigned long long)arg1;
- (void)setCelsius:(bool)arg1;
- (void)setDefaultSelectedCity:(unsigned long long)arg1;
- (void)setLocalWeatherEnabled:(bool)arg1;
- (void)setSyncDelegate:(id)arg1;
- (void)setTwcURLString:(id)arg1;
- (void)setUserGroupPrefsLockedWhenInit:(bool)arg1;
- (void)setYahooWeatherURLString:(id)arg1;
- (id)syncDelegate;
- (void)synchronizeStateToDisk;
- (void)synchronizeStateToDiskDoNotify:(bool)arg1;
- (id)twcLogoURL;
- (id)twcLogoURL:(id)arg1;
- (id)twcURLString;
- (bool)userGroupPrefsLockedWhenInit;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)yahooWeatherURLString;

@end
