/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCPlaybackPositionEntity : NSObject <NSCopying, NSSecureCoding> {
    double _bookmarkTime;
    double _bookmarkTimestamp;
    long long _foreignDatabaseEntityID;
    bool _hasBeenPlayed;
    SBCPlaybackPositionDomain *_playbackPositionDomain;
    NSString *_ubiquitousIdentifier;
    unsigned long long _userPlayCount;
}

@property(assign,readwrite) double bookmarkTime;
@property(assign,readwrite) double bookmarkTimestamp;
@property(assign,readonly) long long foreignDatabaseEntityID;
@property(assign,readwrite) bool hasBeenPlayed;
@property(assign,readonly) SBCPlaybackPositionDomain * playbackPositionDomain;
@property(assign,readonly) NSString * ubiquitousIdentifier;
@property(assign,readwrite) unsigned long long userPlayCount;

+ (bool)supportsSecureCoding;
+ (id)ubiquitousIdentifierWithItemTitle:(id)arg1 albumName:(id)arg2 itemArtistName:(id)arg3;
+ (id)ubiquitousIdentifierWithPodcastFeedURL:(id)arg1 feedGUID:(id)arg2;
+ (id)ubiquitousIdentifierWithUniqueStoreID:(long long)arg1;
+ (id)ubiquitousIdentifierWithiTunesUFeedURL:(id)arg1 feedGUID:(id)arg2;

- (void).cxx_destruct;
- (id)SBKUniversalPlaybackPositionMetadata;
- (double)bookmarkTime;
- (double)bookmarkTimestamp;
- (id)copyWithValuesFromSBKUniversalPlaybackPositionMetadata:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)foreignDatabaseEntityID;
- (bool)hasBeenPlayed;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaybackPositionDomain:(id)arg1 ubiquitousIdentifier:(id)arg2 foreignDatabaseEntityID:(long long)arg3;
- (id)playbackPositionDomain;
- (void)setBookmarkTime:(double)arg1;
- (void)setBookmarkTimestamp:(double)arg1;
- (void)setHasBeenPlayed:(bool)arg1;
- (void)setUserPlayCount:(unsigned long long)arg1;
- (id)ubiquitousIdentifier;
- (unsigned long long)userPlayCount;

@end
