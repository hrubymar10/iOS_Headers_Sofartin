/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncCountryInfo : NSObject <NSCopying> {
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_dialingPrefix;
    NSString *_localizedCountryName;
}

@property(assign,retain) NSString * countryCode;
@property(assign,retain) NSString * countryName;
@property(assign,retain) NSString * dialingPrefix;
@property(assign,retain) NSString * localizedCountryName;

+ (void)_loadCountriesIfNeeded;
+ (id)allCountries;
+ (id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2;
+ (id)countryInfoWithDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)countryName;
- (void)dealloc;
- (id)description;
- (id)dialingPrefix;
- (bool)isEqual:(id)arg1;
- (id)localizedCountryName;
- (void)setCountryCode:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setDialingPrefix:(id)arg1;
- (void)setLocalizedCountryName:(id)arg1;

@end
