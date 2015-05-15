/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKPlayerInternal : GKInternalRepresentation {
    NSString *_alias;
    union { 
        struct { 
            unsigned int _unused : 8; 
            unsigned int _purpleBuddyAccount : 1; 
            unsigned int _underage : 1; 
            unsigned int _photoPending : 1; 
            unsigned int _findable : 1; 
            unsigned int _reserved : 18; 
        } ; 
        unsigned int _value; 
    } _flags;
    unsigned int _numberOfAchievementPoints;
    unsigned int _numberOfAchievements;
    unsigned short _numberOfFriends;
    unsigned short _numberOfFriendsInCommon;
    unsigned short _numberOfGames;
    unsigned short _numberOfGamesInCommon;
    NSDictionary *_photos;
    NSString *_playerID;
}

@property(assign,retain) NSString * accountName;
@property(assign,retain) NSString * alias;
@property(assign,retain) NSString * compositeName;
@property(assign,retain) NSArray * emailAddresses;
@property(assign,retain) NSString * facebookUserID;
@property(getter=isFindable,assign,readwrite) bool findable;
@property(assign,retain) NSString * firstName;
@property(assign,readwrite) unsigned int flags;
@property(assign,retain) NSArray * friends;
@property(assign,retain) NSNumber * iCloudUserID;
@property(assign,readonly) bool isAnonymousPlayer;
@property(assign,readonly) bool isAutomatchPlayer;
@property(assign,readonly) bool isFriend;
@property(assign,readonly) bool isLoaded;
@property(assign,readonly) bool isLocalPlayer;
@property(assign,readonly) bool isUnknownPlayer;
@property(assign,retain) NSString * lastName;
@property(assign,retain) NSDate * lastPlayedDate;
@property(assign,retain) GKGameInternal * lastPlayedGame;
@property(assign,readwrite) unsigned int numberOfAchievementPoints;
@property(assign,readwrite) unsigned int numberOfAchievements;
@property(assign,readwrite) unsigned short numberOfChallenges;
@property(assign,readwrite) unsigned short numberOfFriends;
@property(assign,readwrite) unsigned short numberOfFriendsInCommon;
@property(assign,readwrite) unsigned short numberOfGames;
@property(assign,readwrite) unsigned short numberOfGamesInCommon;
@property(assign,readwrite) unsigned short numberOfRequests;
@property(assign,readwrite) unsigned short numberOfTurns;
@property(getter=isPhotoPending,assign,readwrite) bool photoPending;
@property(assign,retain) NSDictionary * photos;
@property(assign,retain) NSString * playerID;
@property(getter=isPurpleBuddyAccount,assign,readwrite) bool purpleBuddyAccount;
@property(assign,retain) NSString * status;
@property(getter=isUnderage,assign,readwrite) bool underage;

+ (Class)classForFamiliarity:(int)arg1;
+ (id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3;
+ (id)secureCodedPropertyKeys;

- (id)accountName;
- (id)alias;
- (bool)allowNearbyMultiplayer;
- (id)cacheKey;
- (id)compositeName;
- (id)conciseDescription;
- (void)dealloc;
- (int)defaultFamiliarity;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (id)emailAddresses;
- (id)facebookUserID;
- (id)firstName;
- (unsigned int)flags;
- (id)friends;
- (unsigned long long)hash;
- (id)iCloudUserID;
- (bool)isAnonymousPlayer;
- (bool)isAutomatchPlayer;
- (bool)isEqual:(id)arg1;
- (bool)isFindable;
- (bool)isFriend;
- (bool)isLoaded;
- (bool)isLocalPlayer;
- (bool)isPhotoPending;
- (bool)isPurpleBuddyAccount;
- (bool)isUnderage;
- (bool)isUnknownPlayer;
- (id)lastName;
- (id)lastPlayedDate;
- (id)lastPlayedGame;
- (id)minimalInternal;
- (unsigned int)numberOfAchievementPoints;
- (unsigned int)numberOfAchievements;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfFriends;
- (unsigned short)numberOfFriendsInCommon;
- (unsigned short)numberOfGames;
- (unsigned short)numberOfGamesInCommon;
- (unsigned short)numberOfRequests;
- (unsigned short)numberOfTurns;
- (id)photos;
- (id)playerID;
- (id)serverRepresentation;
- (void)setAccountName:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setAllowNearbyMultiplayer:(bool)arg1;
- (void)setCompositeName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFacebookUserID:(id)arg1;
- (void)setFindable:(bool)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFriends:(id)arg1;
- (void)setICloudUserID:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastPlayedGame:(id)arg1;
- (void)setNumberOfAchievementPoints:(unsigned int)arg1;
- (void)setNumberOfAchievements:(unsigned int)arg1;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (void)setNumberOfFriends:(unsigned short)arg1;
- (void)setNumberOfFriendsInCommon:(unsigned short)arg1;
- (void)setNumberOfGames:(unsigned short)arg1;
- (void)setNumberOfGamesInCommon:(unsigned short)arg1;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (void)setPhotoPending:(bool)arg1;
- (void)setPhotos:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPurpleBuddyAccount:(bool)arg1;
- (void)setStatus:(id)arg1;
- (void)setUnderage:(bool)arg1;
- (id)status;

@end
