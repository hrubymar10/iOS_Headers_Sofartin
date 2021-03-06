/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseCollectionViewConfiguration : MusicLibraryViewConfiguration {
    MusicEntityCollectionViewDescriptor *_entityCollectionViewDescriptor;
    bool _wantsEdgeToEdgeLayout;
}

@property(assign,readonly) MusicEntityCollectionViewDescriptor * entityViewDescriptor;
@property(assign,readwrite) bool wantsEdgeToEdgeLayout;

- (void).cxx_destruct;
- (id)entityViewDescriptor;
- (id)init;
- (id)loadEntityViewDescriptor;
- (void)setWantsEdgeToEdgeLayout:(bool)arg1;
- (bool)wantsEdgeToEdgeLayout;

@end
