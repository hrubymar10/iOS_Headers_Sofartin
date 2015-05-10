/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand

@property(assign,copy) NSString * insertLocation;
@property(assign,retain) SAMPCollection * mediaCollection;

+ (id)addMediaItemsToUpNextQueue;
+ (id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)insertLocation;
- (id)mediaCollection;
- (bool)requiresResponse;
- (void)setInsertLocation:(id)arg1;
- (void)setMediaCollection:(id)arg1;

@end
