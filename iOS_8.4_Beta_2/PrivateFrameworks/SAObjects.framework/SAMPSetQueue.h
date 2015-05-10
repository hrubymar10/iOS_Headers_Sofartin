/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetQueue : SADomainCommand

@property(assign,copy) NSArray * filters;
@property(assign,retain) SAMPCollection * mediaItems;
@property(assign,readwrite) bool shouldShuffle;
@property(assign,copy) NSArray * sort;

+ (id)setQueue;
+ (id)setQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)filters;
- (id)groupIdentifier;
- (id)mediaItems;
- (bool)requiresResponse;
- (void)setFilters:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setShouldShuffle:(bool)arg1;
- (void)setSort:(id)arg1;
- (bool)shouldShuffle;
- (id)sort;

@end