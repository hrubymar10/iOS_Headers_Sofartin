/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPSong : PBCodable <NSCopying> {
    MIPAlbum *_album;
    MIPArtist *_artist;
    int _audioFormat;
    MIPArtist *_composer;
    int _discNumber;
    bool _excludeFromShuffle;
    long long _geniusId;
    MIPGenre *_genre;
    struct { 
        unsigned int geniusId : 1; 
        unsigned int audioFormat : 1; 
        unsigned int discNumber : 1; 
        unsigned int lyricsChecksum : 1; 
        unsigned int trackNumber : 1; 
        unsigned int userRating : 1; 
        unsigned int excludeFromShuffle : 1; 
        unsigned int hasVideo : 1; 
    } _has;
    bool _hasVideo;
    NSString *_lyrics;
    int _lyricsChecksum;
    MIPPlaybackInfo *_playbackInfo;
    int _trackNumber;
    int _userRating;
}

@property(assign,retain) MIPAlbum * album;
@property(assign,retain) MIPArtist * artist;
@property(assign,readwrite) int audioFormat;
@property(assign,retain) MIPArtist * composer;
@property(assign,readwrite) int discNumber;
@property(assign,readwrite) bool excludeFromShuffle;
@property(assign,readwrite) long long geniusId;
@property(assign,retain) MIPGenre * genre;
@property(assign,readonly) bool hasAlbum;
@property(assign,readonly) bool hasArtist;
@property(assign,readwrite) bool hasAudioFormat;
@property(assign,readonly) bool hasComposer;
@property(assign,readwrite) bool hasDiscNumber;
@property(assign,readwrite) bool hasExcludeFromShuffle;
@property(assign,readwrite) bool hasGeniusId;
@property(assign,readonly) bool hasGenre;
@property(assign,readwrite) bool hasHasVideo;
@property(assign,readonly) bool hasLyrics;
@property(assign,readwrite) bool hasLyricsChecksum;
@property(assign,readonly) bool hasPlaybackInfo;
@property(assign,readwrite) bool hasTrackNumber;
@property(assign,readwrite) bool hasUserRating;
@property(assign,readwrite) bool hasVideo;
@property(assign,retain) NSString * lyrics;
@property(assign,readwrite) int lyricsChecksum;
@property(assign,retain) MIPPlaybackInfo * playbackInfo;
@property(assign,readwrite) int trackNumber;
@property(assign,readwrite) int userRating;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (int)audioFormat;
- (id)composer;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)discNumber;
- (bool)excludeFromShuffle;
- (long long)geniusId;
- (id)genre;
- (bool)hasAlbum;
- (bool)hasArtist;
- (bool)hasAudioFormat;
- (bool)hasComposer;
- (bool)hasDiscNumber;
- (bool)hasExcludeFromShuffle;
- (bool)hasGeniusId;
- (bool)hasGenre;
- (bool)hasHasVideo;
- (bool)hasLyrics;
- (bool)hasLyricsChecksum;
- (bool)hasPlaybackInfo;
- (bool)hasTrackNumber;
- (bool)hasUserRating;
- (bool)hasVideo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lyrics;
- (int)lyricsChecksum;
- (void)mergeFrom:(id)arg1;
- (id)playbackInfo;
- (bool)readFrom:(id)arg1;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setAudioFormat:(int)arg1;
- (void)setComposer:(id)arg1;
- (void)setDiscNumber:(int)arg1;
- (void)setExcludeFromShuffle:(bool)arg1;
- (void)setGeniusId:(long long)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasAudioFormat:(bool)arg1;
- (void)setHasDiscNumber:(bool)arg1;
- (void)setHasExcludeFromShuffle:(bool)arg1;
- (void)setHasGeniusId:(bool)arg1;
- (void)setHasHasVideo:(bool)arg1;
- (void)setHasLyricsChecksum:(bool)arg1;
- (void)setHasTrackNumber:(bool)arg1;
- (void)setHasUserRating:(bool)arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setLyrics:(id)arg1;
- (void)setLyricsChecksum:(int)arg1;
- (void)setPlaybackInfo:(id)arg1;
- (void)setTrackNumber:(int)arg1;
- (void)setUserRating:(int)arg1;
- (int)trackNumber;
- (int)userRating;
- (void)writeTo:(id)arg1;

@end
