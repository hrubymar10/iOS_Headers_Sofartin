/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfGeoFence : SADomainObject

@property(assign,retain) SAPersonAttribute * friend;
@property(assign,copy) NSString * geoFenceTrigger;
@property(assign,retain) SALocation * location;

+ (id)geoFence;
+ (id)geoFenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)friend;
- (id)geoFenceTrigger;
- (id)groupIdentifier;
- (id)location;
- (void)setFriend:(id)arg1;
- (void)setGeoFenceTrigger:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
