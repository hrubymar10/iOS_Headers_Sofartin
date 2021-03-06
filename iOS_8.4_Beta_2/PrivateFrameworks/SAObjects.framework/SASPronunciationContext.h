/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASPronunciationContext : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSURL * domainObjectIdentifier;
@property(assign,copy) NSString * domainObjectPropertyIdentifier;
@property(assign,copy) NSString * fullName;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * orthography;
@property(assign,readonly) Class superclass;
@property(assign,copy) NSNumber * tokenOffset;

+ (id)pronunciationContext;
+ (id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainObjectIdentifier;
- (id)domainObjectPropertyIdentifier;
- (id)encodedClassName;
- (id)fullName;
- (id)groupIdentifier;
- (id)orthography;
- (void)setDomainObjectIdentifier:(id)arg1;
- (void)setDomainObjectPropertyIdentifier:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setTokenOffset:(id)arg1;
- (id)tokenOffset;

@end
