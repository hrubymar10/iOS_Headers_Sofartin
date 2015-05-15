/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFSessionDataManager : NSObject {
    NSSet *_followers;
    NSSet *_following;
    NSSet *_locations;
}

@property (nonatomic, retain) NSSet *followers;
@property (nonatomic, retain) NSSet *following;
@property (nonatomic, retain) NSSet *locations;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void*)_loadAddressBook;
- (void)_registerABCallbacks;
- (void)abChanged:(id)arg1;
- (id)followerForHandle:(id)arg1;
- (id)followers;
- (id)following;
- (id)followingForHandle:(id)arg1;
- (id)locationForHandle:(id)arg1;
- (id)locations;
- (id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2;
- (void)setFollowers:(id)arg1;
- (void)setFollowing:(id)arg1;
- (void)setLocations:(id)arg1;

@end
