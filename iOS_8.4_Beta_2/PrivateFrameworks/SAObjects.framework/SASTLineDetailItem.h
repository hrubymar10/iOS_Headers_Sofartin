/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTLineDetailItem : AceObject <SASTTemplateItem>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,retain) SAUIDecoratedText * title;

+ (id)lineDetailItem;
+ (id)lineDetailItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTitle:(id)arg1;
- (id)title;

@end