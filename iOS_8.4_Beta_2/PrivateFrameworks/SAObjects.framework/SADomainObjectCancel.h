/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectCancel : SABaseClientBoundCommand <SADomainObjectCommand>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SADomainObject * identifier;
@property(assign,readonly) Class superclass;

+ (id)domainObjectCancel;
+ (id)domainObjectCancelWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (bool)requiresResponse;
- (void)setIdentifier:(id)arg1;

@end