/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartSpeechRequest : SASStartSpeech

@property (nonatomic) bool eyesFree;
@property (nonatomic) bool handsFree;
@property (nonatomic) bool talkOnly;
@property (nonatomic, copy) NSDictionary *voiceTriggerEventInfo;
@property (nonatomic, copy) NSArray *voiceTriggerPhrases;

+ (id)startSpeechRequest;
+ (id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (bool)eyesFree;
- (id)groupIdentifier;
- (bool)handsFree;
- (void)setEyesFree:(bool)arg1;
- (void)setHandsFree:(bool)arg1;
- (void)setTalkOnly:(bool)arg1;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (void)setVoiceTriggerPhrases:(id)arg1;
- (bool)talkOnly;
- (id)voiceTriggerEventInfo;
- (id)voiceTriggerPhrases;

@end
