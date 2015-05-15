/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,readwrite) long long alternativeSelectCount;
@property(assign,readwrite) long long characterChangeCount;
@property(assign,copy) NSString * correctionSource;
@property(assign,copy) NSString * correctionText;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * interactionId;
@property(assign,copy) NSString * refId;
@property(assign,copy) NSString * sessionId;
@property(assign,readonly) Class superclass;

+ (id)speechCorrectionStatistics;
+ (id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;

- (long long)alternativeSelectCount;
- (long long)characterChangeCount;
- (id)correctionSource;
- (id)correctionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (id)sessionId;
- (void)setAlternativeSelectCount:(long long)arg1;
- (void)setCharacterChangeCount:(long long)arg1;
- (void)setCorrectionSource:(id)arg1;
- (void)setCorrectionText:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setSessionId:(id)arg1;

@end
