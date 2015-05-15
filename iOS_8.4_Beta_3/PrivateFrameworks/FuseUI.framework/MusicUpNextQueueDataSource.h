/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUpNextQueueDataSource : MusicUpNextCompositeDataSource <MusicActionableHeaderViewDelegate, MusicMediaPickerDelegate, MusicUpNextSectionHeaderDelegate> {
    NSMutableArray *_hardQueueItems;
    MusicEntityViewHorizontalLockupContentDescriptor *_horizontalLockupContentDescriptor;
    bool _ignoreQueueChanges;
    MusicEntityViewHorizontalLockupContentDescriptor *_radioStationHorizontalLockupContentDescriptor;
    bool _showsRadioQueue;
    NSMutableArray *_softQueueItems;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) MusicEntityViewHorizontalLockupContentDescriptor * radioStationHorizontalLockupContentDescriptor;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canMoveItemAtIndexPath:(id)arg1;
- (void)_clearHardQueue;
- (void)_clearSoftQueue;
- (void)_currentItemDidChange:(id)arg1;
- (void)_currentItemWillChange:(id)arg1;
- (void)_dismissPicker;
- (bool)_displayAddButtonForSection:(unsigned long long)arg1;
- (bool)_displayClearButtonForSection:(unsigned long long)arg1;
- (bool)_displayHeaderForSection:(unsigned long long)arg1;
- (id)_hardQueueItemsForPlaylistManager:(id)arg1;
- (id)_indexPathsForSection:(long long)arg1;
- (void)_queueContentsDidChange:(id)arg1;
- (void)_registerForPlayerNotifications:(id)arg1;
- (bool)_sectionIsHardQueueSection:(long long)arg1;
- (bool)_softQueueIsRadioQueue;
- (id)_softQueueItemsForPlaylistManager:(id)arg1;
- (void)_unregisterForPlayerNotifications:(id)arg1;
- (void)addButtonPressedForSectionHeader:(id)arg1;
- (void)clearButtonPressedForSectionHeader:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)horizontalLockupContentDescriptor;
- (id)horizontalLockupContentDescriptorForIndexPath:(id)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)init;
- (void)mediaPickerNavigationController:(id)arg1 didFinishWithSelectedEntities:(id)arg2;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)radioStationHorizontalLockupContentDescriptor;
- (void)setPlayer:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (Class)tableViewCellClass;
- (id)updatesForPlayerChangedFromItem:(id)arg1 toItem:(id)arg2;

@end
