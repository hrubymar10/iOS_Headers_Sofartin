/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfVisibilitySetCompleted : SADomainCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,copy) NSURL * searchContext;
@property(assign,readonly) Class superclass;

+ (id)visibilitySetCompleted;
+ (id)visibilitySetCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;

@end
