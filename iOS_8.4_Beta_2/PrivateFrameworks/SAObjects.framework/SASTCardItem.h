/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTCardItem : AceObject <SASTTemplateItem>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) SAUIDecoratedText * footnote;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SAUIDecoratedText * label;
@property(assign,readonly) Class superclass;
@property(assign,retain) SAUIDecoratedText * title;
@property(assign,retain) SAUIColor * titleBackgroundColor;

+ (id)cardItem;
+ (id)cardItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)footnote;
- (id)groupIdentifier;
- (id)label;
- (void)setFootnote:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBackgroundColor:(id)arg1;
- (id)title;
- (id)titleBackgroundColor;

@end
