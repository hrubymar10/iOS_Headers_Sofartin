/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPBasicPodcastAppSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property(assign,copy) NSString * aceId;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,copy) NSArray * podcastCollections;
@property(assign,copy) NSArray * podcastStations;
@property(assign,copy) NSString * refId;
@property(assign,readonly) Class superclass;

+ (id)basicPodcastAppSearchCompleted;
+ (id)basicPodcastAppSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)podcastCollections;
- (id)podcastStations;
- (void)setPodcastCollections:(id)arg1;
- (void)setPodcastStations:(id)arg1;

@end
