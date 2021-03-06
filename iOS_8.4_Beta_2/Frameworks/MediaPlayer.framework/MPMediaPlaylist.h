/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPlaylist : MPMediaItemCollection {
    NSArray *_representativeArtists;
    MPMediaQuery *_seedTracksQuery;
}

@property(assign,readonly) NSString * name;
@property(assign,readonly) unsigned long long persistentID;
@property(assign,readonly) unsigned long long playlistAttributes;
@property(assign,readonly) NSArray * seedItems;

+ (void)_createFilterableDictionary;
+ (bool)_isValidPlaylistProperty:(id)arg1;
+ (bool)canFilterByProperty:(id)arg1;
+ (void)registerSupportedCustomProperties;

- (void).cxx_destruct;
- (long long)MCD_sortPlaylistByName:(id)arg1;
- (id)MPU_contentItemIdentifierCollection;
- (id)artworkCatalog;
- (id)artworkCatalogsWithMaximumCount:(unsigned long long)arg1;
- (bool)canPlayUsingNetworkType:(long long)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (bool)existsInLibrary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiverseIdentifier:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (bool)isCloudMix;
- (bool)isEqual:(id)arg1;
- (id)items;
- (unsigned long long)mediaTypes;
- (id)multiverseIdentifier;
- (id)name;
- (unsigned long long)persistentID;
- (unsigned long long)playlistAttributes;
- (void)removeFirstItem;
- (id)representativeArtists;
- (id)representativeItem;
- (id)seedItems;
- (id)seedTracksQuery;
- (void)setUserSelectedArtworkImage:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
