/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPodcastSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSString * refId;
@property(assign,copy) NSArray * results;
@property(assign,readonly) Class superclass;

+ (id)podcastSearchCompleted;
+ (id)podcastSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)results;
- (void)setResults:(id)arg1;

@end
