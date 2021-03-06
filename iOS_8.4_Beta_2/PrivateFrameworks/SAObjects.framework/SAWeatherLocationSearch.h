/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationSearch : SADomainCommand

@property(assign,copy) NSURL * identifier;
@property(assign,copy) NSString * locationId;

+ (id)locationSearch;
+ (id)locationSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)locationId;
- (bool)requiresResponse;
- (void)setIdentifier:(id)arg1;
- (void)setLocationId:(id)arg1;

@end
