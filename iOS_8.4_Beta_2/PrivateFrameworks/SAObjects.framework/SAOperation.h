/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAOperation : AceObject <SAAceSerializable>

@property(assign,copy) NSDictionary * constraints;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * domainId;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * operationId;
@property(assign,readonly) Class superclass;

+ (id)operation;
+ (id)operationWithDictionary:(id)arg1 context:(id)arg2;

- (id)constraints;
- (id)domainId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)operationId;
- (void)setConstraints:(id)arg1;
- (void)setDomainId:(id)arg1;
- (void)setOperationId:(id)arg1;

@end