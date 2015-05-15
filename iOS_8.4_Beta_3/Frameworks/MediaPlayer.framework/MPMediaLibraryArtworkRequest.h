/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryArtworkRequest : NSObject {
    long long _artworkType;
    NSString *_availableArtworkToken;
    long long _entityType;
    NSNumber *_fetchableArtworkSource;
    NSString *_fetchableArtworkToken;
    bool _hasRetrievedTokens;
    ML3MusicLibrary *_library;
    MPMediaLibraryArtwork *_libraryArtwork;
    unsigned long long _libraryID;
    unsigned long long _mediaType;
    double _retrievalTime;
}

@property (nonatomic, readonly) long long artworkType;
@property (nonatomic, copy) NSString *availableArtworkToken;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, copy) NSNumber *fetchableArtworkSource;
@property (nonatomic, copy) NSString *fetchableArtworkToken;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, retain) MPMediaLibraryArtwork *libraryArtwork;
@property (nonatomic, readonly) unsigned long long libraryID;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (nonatomic) double retrievalTime;

- (void).cxx_destruct;
- (void)_updateTokens;
- (long long)artworkType;
- (id)availableArtworkToken;
- (id)description;
- (long long)entityType;
- (id)fetchableArtworkSource;
- (id)fetchableArtworkToken;
- (unsigned long long)hash;
- (id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4;
- (id)initWithML3Library:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)library;
- (id)libraryArtwork;
- (unsigned long long)libraryID;
- (unsigned long long)mediaType;
- (double)retrievalTime;
- (void)setAvailableArtworkToken:(id)arg1;
- (void)setFetchableArtworkSource:(id)arg1;
- (void)setFetchableArtworkToken:(id)arg1;
- (void)setLibraryArtwork:(id)arg1;
- (void)setRetrievalTime:(double)arg1;

@end
