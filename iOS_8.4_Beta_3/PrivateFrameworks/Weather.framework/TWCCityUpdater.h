/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface TWCCityUpdater : TWCUpdater {
    NSMutableArray *_parsedCities;
    NSArray *_requestedCities;
    id _weatherUpdateCompletion;
}

@property (nonatomic, retain) NSMutableArray *parsedCities;
@property (nonatomic, retain) NSArray *requestedCities;

+ (void)clearSharedCityUpdater;
+ (id)sharedCityUpdater;

- (void)_failed:(unsigned long long)arg1;
- (id)aggregateDictionaryDomain;
- (void)dealloc;
- (void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2;
- (id)parsedCities;
- (id)requestedCities;
- (void)setParsedCities:(id)arg1;
- (void)setRequestedCities:(id)arg1;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(id)arg2;
- (void)updateWeatherForCity:(id)arg1;

@end
