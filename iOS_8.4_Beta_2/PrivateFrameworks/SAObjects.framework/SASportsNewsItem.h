/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsNewsItem : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSURL * link;
@property(assign,copy) NSString * summary;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSString * title;

+ (id)newsItem;
+ (id)newsItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)link;
- (void)setLink:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)summary;
- (id)title;

@end
