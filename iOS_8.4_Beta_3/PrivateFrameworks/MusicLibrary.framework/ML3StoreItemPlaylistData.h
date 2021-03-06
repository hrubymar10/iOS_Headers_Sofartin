/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3StoreItemPlaylistData : NSObject {
    SSLookupItem *_lookupItem;
    NSData *_playlistData;
}

@property (nonatomic, readonly) NSDictionary *parsedPlaylistImportProperties;
@property (nonatomic, readonly) NSData *playlistData;

- (void).cxx_destruct;
- (id)_playlistPropertiesForLookupItem:(id)arg1;
- (id)_playlistPropertiesFromPlaylistData:(id)arg1;
- (id)initWithLookupItem:(id)arg1;
- (id)initWithPlaylistData:(id)arg1;
- (id)parsedPlaylistImportProperties;
- (id)playlistData;

@end
