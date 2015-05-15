/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUpNextNowPlayingDataSource : MusicUpNextCompositeDataSource {
    <MusicUpNextCompositeDataSourceDelegate> *_delegate;
    bool _hidesViews;
    MusicEntityViewHorizontalLockupContentDescriptor *_horizontalLockupContentDescriptor;
    MPUAVPlayer *_player;
}

@property(assign,readwrite) bool hidesViews;

- (void).cxx_destruct;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)delegate;
- (bool)hidesViews;
- (id)horizontalLockupContentDescriptor;
- (id)indexPathForEntityValueContext:(id)arg1;
- (void)invalidateSizes;
- (bool)isNowPlayingDataSource;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)player;
- (void)setDelegate:(id)arg1;
- (void)setHidesViews:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (Class)tableViewCellClass;
- (id)tableViewCellReuseIdentifier;
- (id)tableViewHeaderReusueIdentifier;
- (id)updatesForPlayerChangedFromItem:(id)arg1 toItem:(id)arg2;

@end
