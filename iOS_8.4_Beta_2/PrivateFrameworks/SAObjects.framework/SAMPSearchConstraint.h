/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSearchConstraint : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * query;
@property(assign,copy) NSArray * searchProperties;
@property(assign,readonly) Class superclass;

+ (id)searchConstraint;
+ (id)searchConstraintWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)query;
- (id)searchProperties;
- (void)setQuery:(id)arg1;
- (void)setSearchProperties:(id)arg1;

@end