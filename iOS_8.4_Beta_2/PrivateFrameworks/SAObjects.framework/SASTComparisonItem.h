/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTComparisonItem : AceObject <SASTTemplateItem>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) SASTComparisonEntity * firstItem;
@property(assign,retain) SAUIDecoratedText * footnote;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SASTComparisonEntity * secondItem;
@property(assign,readonly) Class superclass;

+ (id)comparisonItem;
+ (id)comparisonItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)firstItem;
- (id)footnote;
- (id)groupIdentifier;
- (id)secondItem;
- (void)setFirstItem:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setSecondItem:(id)arg1;

@end
