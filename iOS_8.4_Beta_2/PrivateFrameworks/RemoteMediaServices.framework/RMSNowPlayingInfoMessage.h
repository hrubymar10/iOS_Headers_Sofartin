/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSNowPlayingInfoMessage : PBCodable <NSCopying> {
    NSString *_albumName;
    NSString *_artistName;
    bool _canSkipNext;
    bool _canSkipPrevious;
    bool _canWishlist;
    unsigned long long _databaseID;
    struct { 
        unsigned int databaseID : 1; 
        unsigned int itemID : 1; 
        unsigned int timeRemaining : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalDuration : 1; 
        unsigned int likedState : 1; 
        unsigned int mediaKind : 1; 
        unsigned int playbackState : 1; 
        unsigned int revisionNumber : 1; 
        unsigned int scrubbableState : 1; 
        unsigned int canSkipNext : 1; 
        unsigned int canSkipPrevious : 1; 
        unsigned int canWishlist : 1; 
        unsigned int hasChapterData : 1; 
        unsigned int likeable : 1; 
    } _has;
    bool _hasChapterData;
    unsigned long long _itemID;
    bool _likeable;
    int _likedState;
    int _mediaKind;
    int _playbackState;
    unsigned int _revisionNumber;
    int _scrubbableState;
    double _timeRemaining;
    double _timestamp;
    double _totalDuration;
    NSString *_trackName;
}

@property(assign,retain) NSString * albumName;
@property(assign,retain) NSString * artistName;
@property(assign,readwrite) bool canSkipNext;
@property(assign,readwrite) bool canSkipPrevious;
@property(assign,readwrite) bool canWishlist;
@property(assign,readwrite) unsigned long long databaseID;
@property(assign,readonly) bool hasAlbumName;
@property(assign,readonly) bool hasArtistName;
@property(assign,readwrite) bool hasCanSkipNext;
@property(assign,readwrite) bool hasCanSkipPrevious;
@property(assign,readwrite) bool hasCanWishlist;
@property(assign,readwrite) bool hasChapterData;
@property(assign,readwrite) bool hasDatabaseID;
@property(assign,readwrite) bool hasHasChapterData;
@property(assign,readwrite) bool hasItemID;
@property(assign,readwrite) bool hasLikeable;
@property(assign,readwrite) bool hasLikedState;
@property(assign,readwrite) bool hasMediaKind;
@property(assign,readwrite) bool hasPlaybackState;
@property(assign,readwrite) bool hasRevisionNumber;
@property(assign,readwrite) bool hasScrubbableState;
@property(assign,readwrite) bool hasTimeRemaining;
@property(assign,readwrite) bool hasTimestamp;
@property(assign,readwrite) bool hasTotalDuration;
@property(assign,readonly) bool hasTrackName;
@property(assign,readwrite) unsigned long long itemID;
@property(assign,readwrite) bool likeable;
@property(assign,readwrite) int likedState;
@property(assign,readwrite) int mediaKind;
@property(assign,readwrite) int playbackState;
@property(assign,readwrite) unsigned int revisionNumber;
@property(assign,readwrite) int scrubbableState;
@property(assign,readwrite) double timeRemaining;
@property(assign,readwrite) double timestamp;
@property(assign,readwrite) double totalDuration;
@property(assign,retain) NSString * trackName;

- (void).cxx_destruct;
- (id)albumName;
- (id)artistName;
- (bool)canSkipNext;
- (bool)canSkipPrevious;
- (bool)canWishlist;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)databaseID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlbumName;
- (bool)hasArtistName;
- (bool)hasCanSkipNext;
- (bool)hasCanSkipPrevious;
- (bool)hasCanWishlist;
- (bool)hasChapterData;
- (bool)hasDatabaseID;
- (bool)hasHasChapterData;
- (bool)hasItemID;
- (bool)hasLikeable;
- (bool)hasLikedState;
- (bool)hasMediaKind;
- (bool)hasPlaybackState;
- (bool)hasRevisionNumber;
- (bool)hasScrubbableState;
- (bool)hasTimeRemaining;
- (bool)hasTimestamp;
- (bool)hasTotalDuration;
- (bool)hasTrackName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemID;
- (bool)likeable;
- (int)likedState;
- (int)mediaKind;
- (void)mergeFrom:(id)arg1;
- (int)playbackState;
- (bool)readFrom:(id)arg1;
- (unsigned int)revisionNumber;
- (int)scrubbableState;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setCanSkipNext:(bool)arg1;
- (void)setCanSkipPrevious:(bool)arg1;
- (void)setCanWishlist:(bool)arg1;
- (void)setDatabaseID:(unsigned long long)arg1;
- (void)setHasCanSkipNext:(bool)arg1;
- (void)setHasCanSkipPrevious:(bool)arg1;
- (void)setHasCanWishlist:(bool)arg1;
- (void)setHasChapterData:(bool)arg1;
- (void)setHasDatabaseID:(bool)arg1;
- (void)setHasHasChapterData:(bool)arg1;
- (void)setHasItemID:(bool)arg1;
- (void)setHasLikeable:(bool)arg1;
- (void)setHasLikedState:(bool)arg1;
- (void)setHasMediaKind:(bool)arg1;
- (void)setHasPlaybackState:(bool)arg1;
- (void)setHasRevisionNumber:(bool)arg1;
- (void)setHasScrubbableState:(bool)arg1;
- (void)setHasTimeRemaining:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalDuration:(bool)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setLikeable:(bool)arg1;
- (void)setLikedState:(int)arg1;
- (void)setMediaKind:(int)arg1;
- (void)setPlaybackState:(int)arg1;
- (void)setRevisionNumber:(unsigned int)arg1;
- (void)setScrubbableState:(int)arg1;
- (void)setTimeRemaining:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTotalDuration:(double)arg1;
- (void)setTrackName:(id)arg1;
- (double)timeRemaining;
- (double)timestamp;
- (double)totalDuration;
- (id)trackName;
- (void)writeTo:(id)arg1;

@end
