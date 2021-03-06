/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration {
    unsigned long long _entityLimit;
    MusicLibraryPlaylistsViewConfiguration *_playlistsViewConfiguration;
}

@property(assign,readonly) unsigned long long entityLimit;

+ (unsigned long long)defaultEntityLimit;

- (void).cxx_destruct;
- (unsigned long long)entityLimit;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (id)loadEntityViewDescriptor;

@end
