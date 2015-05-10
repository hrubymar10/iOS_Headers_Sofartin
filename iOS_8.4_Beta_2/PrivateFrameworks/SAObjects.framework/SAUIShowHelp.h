/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIShowHelp : SABaseClientBoundCommand

@property(assign,copy) NSString * speakableText;
@property(assign,copy) NSString * text;

+ (id)showHelp;
+ (id)showHelpWithDictionary:(id)arg1 context:(id)arg2;

- (bool)_afui_isUsefulUserResultCommand;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSpeakableText:(id)arg1;
- (void)setText:(id)arg1;
- (id)speakableText;
- (id)text;

@end
