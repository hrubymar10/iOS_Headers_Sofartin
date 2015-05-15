/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryRecentlyAddedCollectionViewConfiguration : MusicLibraryAlbumsCollectionViewConfiguration {
    unsigned long long _entityLimit;
}

@property (nonatomic, readonly) unsigned long long entityLimit;

+ (unsigned long long)defaultEntityLimit;

- (unsigned long long)entityLimit;
- (id)init;
- (id)initForMainAlbumsList:(bool)arg1;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (id)loadEntityViewDescriptor;

@end
