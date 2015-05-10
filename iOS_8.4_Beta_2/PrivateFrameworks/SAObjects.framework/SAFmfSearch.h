/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfSearch : SABaseClientBoundCommand

@property(assign,retain) SALocation * currentLocation;
@property(assign,copy) NSArray * emailAddresses;
@property(assign,copy) NSArray * friends;
@property(assign,copy) NSString * proximity;
@property(assign,retain) SALocation * requestedLocation;
@property(assign,copy) NSURL * targetAppId;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)currentLocation;
- (id)emailAddresses;
- (id)encodedClassName;
- (id)friends;
- (id)groupIdentifier;
- (id)proximity;
- (id)requestedLocation;
- (bool)requiresResponse;
- (void)setCurrentLocation:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFriends:(id)arg1;
- (void)setProximity:(id)arg1;
- (void)setRequestedLocation:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end
