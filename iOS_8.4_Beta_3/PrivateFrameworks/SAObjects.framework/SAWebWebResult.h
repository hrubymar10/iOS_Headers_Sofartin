/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebWebResult : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * descriptionText;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;
@property(assign,copy) NSURL * url;

+ (id)webResult;
+ (id)webResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDescriptionText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)title;
- (id)url;

@end