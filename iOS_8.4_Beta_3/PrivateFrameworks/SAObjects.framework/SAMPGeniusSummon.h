/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPGeniusSummon : SADomainCommand

@property (nonatomic, retain) SAMPMediaItem *mediaItem;
@property (nonatomic, copy) NSString *upNextQueueInsertLocation;

+ (id)geniusSummon;
+ (id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaItem;
- (bool)requiresResponse;
- (void)setMediaItem:(id)arg1;
- (void)setUpNextQueueInsertLocation:(id)arg1;
- (id)upNextQueueInsertLocation;

@end
