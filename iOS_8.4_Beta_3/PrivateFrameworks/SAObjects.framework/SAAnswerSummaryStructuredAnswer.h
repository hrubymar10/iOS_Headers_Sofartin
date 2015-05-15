/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSummaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property(assign,copy) NSArray * answerPropertyGroups;
@property(assign,copy) NSString * category;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSURL * image;
@property(assign,copy) NSString * imageCaption;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * text;
@property(assign,copy) NSString * title;
@property(assign,copy) NSString * titleAnnotation;

+ (id)summaryStructuredAnswer;
+ (id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)answerPropertyGroups;
- (id)category;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)imageCaption;
- (void)setAnswerPropertyGroups:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageCaption:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAnnotation:(id)arg1;
- (id)text;
- (id)title;
- (id)titleAnnotation;

@end
