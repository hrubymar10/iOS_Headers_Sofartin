/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTMovieStatItem : AceObject <SASTTemplateItem>

@property(assign,copy) NSString * contentRating;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SASTTemplatePercentageRating * reviewerRating;
@property(assign,readonly) Class superclass;

+ (id)movieStatItem;
+ (id)movieStatItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentRating;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reviewerRating;
- (void)setContentRating:(id)arg1;
- (void)setReviewerRating:(id)arg1;

@end
