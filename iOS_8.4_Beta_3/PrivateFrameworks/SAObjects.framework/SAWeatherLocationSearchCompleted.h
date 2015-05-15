/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSArray * weatherLocations;

+ (id)locationSearchCompleted;
+ (id)locationSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSearchCompletedWithWeatherLocations:(id)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithWeatherLocations:(id)arg1;
- (void)setWeatherLocations:(id)arg1;
- (id)weatherLocations;

@end