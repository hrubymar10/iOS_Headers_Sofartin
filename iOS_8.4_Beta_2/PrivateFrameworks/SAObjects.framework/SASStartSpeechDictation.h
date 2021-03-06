/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartSpeechDictation : SASStartSpeech

@property(assign,copy) NSData * activationToken;
@property(assign,copy) NSString * applicationName;
@property(assign,copy) NSString * applicationVersion;
@property(assign,readwrite) bool censorSpeech;
@property(assign,copy) NSString * fieldId;
@property(assign,copy) NSString * fieldLabel;
@property(assign,copy) NSString * interactionId;
@property(assign,copy) NSString * keyboardReturnKey;
@property(assign,copy) NSString * keyboardType;
@property(assign,copy) NSString * language;
@property(assign,copy) NSString * postfixText;
@property(assign,copy) NSString * prefixText;
@property(assign,copy) NSString * region;
@property(assign,copy) NSString * selectedText;

+ (id)startSpeechDictation;
+ (id)startSpeechDictationWithDictionary:(id)arg1 context:(id)arg2;

- (id)activationToken;
- (id)applicationName;
- (id)applicationVersion;
- (bool)censorSpeech;
- (id)encodedClassName;
- (id)fieldId;
- (id)fieldLabel;
- (id)groupIdentifier;
- (id)interactionId;
- (id)keyboardReturnKey;
- (id)keyboardType;
- (id)language;
- (id)postfixText;
- (id)prefixText;
- (id)region;
- (id)selectedText;
- (void)setActivationToken:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setCensorSpeech:(bool)arg1;
- (void)setFieldId:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setKeyboardReturnKey:(id)arg1;
- (void)setKeyboardType:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setSelectedText:(id)arg1;

@end
