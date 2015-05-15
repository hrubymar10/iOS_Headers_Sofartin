/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * error;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSURL * weatherLocationId;

+ (id)locationAddCompleted;
+ (id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationAddCompletedWithError:(id)arg1;
+ (id)locationAddCompletedWithWeatherLocationId:(id)arg1;

- (id)encodedClassName;
- (id)error;
- (id)groupIdentifier;
- (id)initWithError:(id)arg1;
- (id)initWithWeatherLocationId:(id)arg1;
- (void)setError:(id)arg1;
- (void)setWeatherLocationId:(id)arg1;
- (id)weatherLocationId;

@end