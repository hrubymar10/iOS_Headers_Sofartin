/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAlternateProviderResult : SADomainObject

@property(assign,copy) NSArray * commands;
@property(assign,copy) NSNumber * numberOfResults;
@property(assign,retain) SAUIImageResource * providerImage;
@property(assign,copy) NSString * providerName;

+ (id)alternateProviderResult;
+ (id)alternateProviderResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)numberOfResults;
- (id)providerImage;
- (id)providerName;
- (void)setCommands:(id)arg1;
- (void)setNumberOfResults:(id)arg1;
- (void)setProviderImage:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
