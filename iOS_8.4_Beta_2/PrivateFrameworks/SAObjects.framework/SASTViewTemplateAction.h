/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTViewTemplateAction : AceObject <SASTTemplateAction>

@property(assign,copy) NSArray * commands;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SASTItemGroup * itemGroupView;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * viewTitle;

+ (id)viewTemplateAction;
+ (id)viewTemplateActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)itemGroupView;
- (void)setCommands:(id)arg1;
- (void)setItemGroupView:(id)arg1;
- (void)setViewTitle:(id)arg1;
- (id)viewTitle;

@end