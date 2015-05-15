/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property(assign,readwrite) bool acceptPodcastCollections;
@property(assign,readwrite) bool acceptPodcastStations;
@property(assign,readwrite) long long maxResults;
@property(assign,copy) NSString * query;

+ (id)basicPodcastAppSearch;
+ (id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2;

- (bool)acceptPodcastCollections;
- (bool)acceptPodcastStations;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)maxResults;
- (id)query;
- (bool)requiresResponse;
- (void)setAcceptPodcastCollections:(bool)arg1;
- (void)setAcceptPodcastStations:(bool)arg1;
- (void)setMaxResults:(long long)arg1;
- (void)setQuery:(id)arg1;

@end
