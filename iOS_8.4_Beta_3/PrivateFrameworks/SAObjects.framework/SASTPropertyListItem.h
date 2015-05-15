/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>

@property(assign,copy) NSString * debugDescription;
@property(assign,retain) SAUIDecoratedText * decoratedTitle;
@property(assign,copy) NSArray * decoratedValues;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;
@property(assign,copy) NSArray * values;

+ (id)propertyListItem;
+ (id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)decoratedTitle;
- (id)decoratedValues;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDecoratedTitle:(id)arg1;
- (void)setDecoratedValues:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValues:(id)arg1;
- (id)title;
- (id)values;

@end
