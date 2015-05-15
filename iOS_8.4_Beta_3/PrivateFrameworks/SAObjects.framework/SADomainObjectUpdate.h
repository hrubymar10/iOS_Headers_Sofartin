/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>

@property(assign,retain) SADomainObject * addFields;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) SADomainObject * identifier;
@property(assign,retain) SADomainObject * removeFields;
@property(assign,retain) SADomainObject * setFields;
@property(assign,readonly) Class superclass;

+ (id)domainObjectUpdate;
+ (id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2;

- (id)addFields;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)removeFields;
- (bool)requiresResponse;
- (void)setAddFields:(id)arg1;
- (id)setFields;
- (void)setIdentifier:(id)arg1;
- (void)setRemoveFields:(id)arg1;
- (void)setSetFields:(id)arg1;

@end
