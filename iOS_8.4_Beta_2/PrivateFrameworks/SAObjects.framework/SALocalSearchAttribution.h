/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchAttribution : AceObject <SAAceSerializable>

@property(assign,copy) NSString * attributionId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSArray * urls;
@property(assign,readwrite) long long version;

+ (id)attribution;
+ (id)attributionWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAttributionId:(id)arg1;
- (void)setUrls:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)urls;
- (long long)version;

@end
