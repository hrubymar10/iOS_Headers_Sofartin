/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSearch : SADomainCommand

@property(assign,copy) NSArray * constraints;
@property(assign,readwrite) long long maxResults;
@property(assign,copy) NSArray * searchTypes;
@property(assign,readwrite) bool strict;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)constraints;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)maxResults;
- (bool)requiresResponse;
- (id)searchTypes;
- (void)setConstraints:(id)arg1;
- (void)setMaxResults:(long long)arg1;
- (void)setSearchTypes:(id)arg1;
- (void)setStrict:(bool)arg1;
- (bool)strict;

@end
