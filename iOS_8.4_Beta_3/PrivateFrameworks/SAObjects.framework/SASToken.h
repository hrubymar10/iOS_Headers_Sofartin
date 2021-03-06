/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASToken : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSNumber *confidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *originalText;
@property (nonatomic, copy) NSString *recognitionStability;
@property (nonatomic) bool removeSpaceAfter;
@property (nonatomic) bool removeSpaceBefore;
@property (nonatomic, copy) NSNumber *startTime;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)token;
+ (id)tokenWithDictionary:(id)arg1 context:(id)arg2;

- (id)af_speechToken;
- (id)confidenceScore;
- (id)encodedClassName;
- (id)endTime;
- (id)groupIdentifier;
- (id)originalText;
- (id)recognitionStability;
- (bool)removeSpaceAfter;
- (bool)removeSpaceBefore;
- (void)setConfidenceScore:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setOriginalText:(id)arg1;
- (void)setRecognitionStability:(id)arg1;
- (void)setRemoveSpaceAfter:(bool)arg1;
- (void)setRemoveSpaceBefore:(bool)arg1;
- (void)setStartTime:(id)arg1;
- (void)setText:(id)arg1;
- (id)startTime;
- (id)text;

@end
