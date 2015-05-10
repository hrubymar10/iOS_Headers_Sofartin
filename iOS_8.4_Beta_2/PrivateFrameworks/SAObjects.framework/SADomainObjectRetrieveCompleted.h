/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectRetrieveCompleted : SABaseCommand <SADomainObjectCommand, SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * objects;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;

+ (id)domainObjectRetrieveCompleted;
+ (id)domainObjectRetrieveCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)objects;
- (void)setObjects:(id)arg1;

@end