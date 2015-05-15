/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABMultiPersonSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * personSearchCompleteds;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;

+ (id)multiPersonSearchCompleted;
+ (id)multiPersonSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)personSearchCompleteds;
- (void)setPersonSearchCompleteds:(id)arg1;

@end
