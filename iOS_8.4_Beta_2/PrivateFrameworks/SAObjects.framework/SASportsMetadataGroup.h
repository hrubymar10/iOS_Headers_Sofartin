/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * groupTitle;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * metadata;
@property(assign,copy) NSNumber * selected;
@property(assign,readonly) Class superclass;

+ (id)metadataGroup;
+ (id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)groupTitle;
- (id)metadata;
- (id)selected;
- (void)setGroupTitle:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSelected:(id)arg1;

@end
