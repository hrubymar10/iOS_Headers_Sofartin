/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClockSearch : SADomainCommand

@property(assign,copy) NSNumber * alCityId;
@property(assign,copy) NSString * countryCode;
@property(assign,copy) NSURL * identifier;
@property(assign,copy) NSString * unlocalizedCityName;
@property(assign,copy) NSString * unlocalizedCountryName;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)alCityId;
- (id)countryCode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (bool)requiresResponse;
- (void)setAlCityId:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUnlocalizedCityName:(id)arg1;
- (void)setUnlocalizedCountryName:(id)arg1;
- (id)unlocalizedCityName;
- (id)unlocalizedCountryName;

@end