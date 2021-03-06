/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>

@property(assign,copy) NSArray * commands;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;
@property(assign,copy) NSString * tts;

+ (id)acePronunciationItem;
+ (id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCommands:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTts:(id)arg1;
- (id)title;
- (id)tts;

@end
