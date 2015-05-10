/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MSPMediaSyncOperation : PBCodable <NSCopying> {
    MIPAlbum *_album;
    MIPArtist *_artist;
    MIPGenre *_genre;
    struct { 
        unsigned int operationType : 1; 
    } _has;
    MIPMediaItem *_mediaItem;
    MIPMultiverseIdentifier *_multiverseId;
    int _operationType;
    MIPPlaylist *_playlist;
    MIPSeries *_series;
}

@property(assign,retain) MIPAlbum * album;
@property(assign,retain) MIPArtist * artist;
@property(assign,retain) MIPGenre * genre;
@property(assign,readonly) bool hasAlbum;
@property(assign,readonly) bool hasArtist;
@property(assign,readonly) bool hasGenre;
@property(assign,readonly) bool hasMediaItem;
@property(assign,readonly) bool hasMultiverseId;
@property(assign,readwrite) bool hasOperationType;
@property(assign,readonly) bool hasPlaylist;
@property(assign,readonly) bool hasSeries;
@property(assign,retain) MIPMediaItem * mediaItem;
@property(assign,retain) MIPMultiverseIdentifier * multiverseId;
@property(assign,readwrite) int operationType;
@property(assign,retain) MIPPlaylist * playlist;
@property(assign,retain) MIPSeries * series;

- (void).cxx_destruct;
- (id)album;
- (id)artist;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)genre;
- (bool)hasAlbum;
- (bool)hasArtist;
- (bool)hasGenre;
- (bool)hasMediaItem;
- (bool)hasMultiverseId;
- (bool)hasOperationType;
- (bool)hasPlaylist;
- (bool)hasSeries;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mediaItem;
- (void)mergeFrom:(id)arg1;
- (id)multiverseId;
- (int)operationType;
- (id)playlist;
- (bool)readFrom:(id)arg1;
- (id)series;
- (void)setAlbum:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setHasOperationType:(bool)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMultiverseId:(id)arg1;
- (void)setOperationType:(int)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setSeries:(id)arg1;
- (void)writeTo:(id)arg1;

@end