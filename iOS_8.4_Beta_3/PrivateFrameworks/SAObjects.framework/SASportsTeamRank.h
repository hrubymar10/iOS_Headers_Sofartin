/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsTeamRank : AceObject <SAAceSerializable>

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSNumber * position;
@property(assign,copy) NSNumber * primary;
@property(assign,copy) NSString * source;
@property(assign,readonly) Class superclass;

+ (id)teamRank;
+ (id)teamRankWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)position;
- (id)primary;
- (void)setPosition:(id)arg1;
- (void)setPrimary:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end