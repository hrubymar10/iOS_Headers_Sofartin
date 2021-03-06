/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKStoreItemInternal : GKInternalRepresentation {
    NSNumber *_adamID;
    NSString *_artistName;
    float _averageUserRating;
    NSDate *_expirationDate;
    unsigned int _numberOfUserRatings;
    bool _owned;
    NSString *_priceDisplay;
    NSURL *_shortViewItemURL;
    NSURL *_tellAFriendMessageContentsUrl;
    NSURL *_viewItemURL;
}

@property(assign,retain) NSNumber * adamID;
@property(assign,retain) NSString * artistName;
@property(assign,readwrite) float averageUserRating;
@property(assign,retain) NSDate * expirationDate;
@property(assign,readwrite) unsigned int numberOfUserRatings;
@property(assign,readwrite) bool owned;
@property(assign,retain) NSString * priceDisplay;
@property(assign,retain) NSURL * shortViewItemURL;
@property(assign,retain) NSURL * tellAFriendMessageContentsUrl;
@property(assign,retain) NSURL * viewItemURL;

+ (id)secureCodedPropertyKeys;

- (id)adamID;
- (id)artistName;
- (float)averageUserRating;
- (void)dealloc;
- (id)expirationDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (unsigned int)numberOfUserRatings;
- (bool)owned;
- (id)priceDisplay;
- (void)setAdamID:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setAverageUserRating:(float)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setNumberOfUserRatings:(unsigned int)arg1;
- (void)setOwned:(bool)arg1;
- (void)setPriceDisplay:(id)arg1;
- (void)setShortViewItemURL:(id)arg1;
- (void)setTellAFriendMessageContentsUrl:(id)arg1;
- (void)setViewItemURL:(id)arg1;
- (id)shortViewItemURL;
- (void)storeItemURLForGamePlatform:(unsigned char)arg1 withContext:(id)arg2 withHandler:(id)arg3;
- (id)storeItemURLForURL:(id)arg1 gamePlatform:(unsigned char)arg2 extraQueryParams:(id)arg3;
- (id)tellAFriendMessageContentsUrl;
- (id)viewItemURL;

@end
