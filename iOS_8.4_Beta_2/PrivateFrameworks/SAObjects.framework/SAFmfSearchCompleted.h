/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSNumber * atRequestedLocation;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSArray * fmfLocations;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,copy) NSURL * searchContext;
@property(assign,readonly) Class superclass;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)atRequestedLocation;
- (id)encodedClassName;
- (id)fmfLocations;
- (id)groupIdentifier;
- (id)searchContext;
- (void)setAtRequestedLocation:(id)arg1;
- (void)setFmfLocations:(id)arg1;
- (void)setSearchContext:(id)arg1;

@end
