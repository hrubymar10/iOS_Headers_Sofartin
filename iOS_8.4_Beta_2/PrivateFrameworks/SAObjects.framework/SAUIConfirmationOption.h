/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIConfirmationOption : AceObject <SAAceSerializable>

@property(assign,readwrite) bool active;
@property(assign,copy) NSArray * commands;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * label;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * type;

+ (id)confirmationOption;
+ (id)confirmationOptionWithDictionary:(id)arg1 context:(id)arg2;

- (bool)active;
- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)label;
- (void)setActive:(bool)arg1;
- (void)setCommands:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
