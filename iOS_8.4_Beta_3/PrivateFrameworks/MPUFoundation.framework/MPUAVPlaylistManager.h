/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUAVPlaylistManager : MPAVPlaylistManager <MPUQueueBehaviorManaging> {
    bool _disableSoftQueueFaulting;
    NSMutableIndexSet *_failedSoftQueueIndexes;
    long long _hardQueueInsertionIndex;
    NSMutableArray *_hardQueueSourceContexts;
    MPMutableBidirectionalDictionary *_identifiersToIndexes;
    bool _ignoreNextIndexChanges;
    NSMutableDictionary *_iterationIndexToQueueModifications;
    MPAVItem *_lastPlayedSoftQueueItem;
    unsigned long long _maximumModifiedPlaylistIterationIndex;
    unsigned long long _maximumPlaylistIndex;
    unsigned long long _minimumPlaylistIndex;
    long long _nextCurrentIndex;
    long long _repeatStartIndex;
    MPQueueFeeder *_softQueueFeeder;
}

@property(assign,readonly) bool allowsUserVisibleUpcomingItems;
@property(assign,readonly) bool canSeek;
@property(assign,readonly) bool canSkipToPreviousItem;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readwrite) long long hardQueueInsertionIndex;
@property(assign,readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } hardQueuePlaylistIndexRange;
@property(assign,retain) NSMutableArray * hardQueueSourceContexts;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSMutableDictionary * iterationIndexToQueueModifications;
@property(assign,retain) MPAVItem * lastPlayedSoftQueueItem;
@property(assign,readwrite) long long nextCurrentIndex;
@property(assign,readonly) long long playbackMode;
@property(assign,readwrite) long long repeatStartIndex;
@property(assign,retain) MPQueueFeeder * softQueueFeeder;
@property(assign,readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } softQueuePlaylistIndexRange;
@property(assign,readonly) Class superclass;
@property(assign,readonly) bool userCanChangeShuffleAndRepeatType;

- (void).cxx_destruct;
- (void)_findPlaylistIterationForPlaybackIndex:(unsigned long long)arg1 createIfNecessary:(bool)arg2 completionHandler:(id)arg3;
- (void)_handleConfiguredQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (long long)_hardQueueIndexForIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_hardQueuePlaylistIndexRangeIncludingCurrentItem:(bool)arg1;
- (void)_insertSoftQueueSourceContext:(id)arg1 atIndex:(long long)arg2;
- (id)_itemForSourceContext:(id)arg1;
- (bool)_itemIsHardQueueItem:(id)arg1;
- (bool)_itemIsSoftQueueItem:(id)arg1;
- (id)_metadataItemForSourceContext:(id)arg1;
- (id)_playlistIterationForQueueFeeder:(id)arg1 firstItemPlaylistIndex:(unsigned long long)arg2 iterationIndex:(unsigned long long)arg3;
- (long long)_prepareToQueuePlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (id)_queueFeeder:(id)arg1 itemForIdentifier:(id)arg2;
- (id)_removeSoftQueueSourceContextAtIndex:(long long)arg1;
- (long long)_softQueueIndexForIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_softQueuePlaylistIndexRangeIncludingCurrentItem:(bool)arg1;
- (id)_softQueueSourceContextForIndex:(long long)arg1;
- (id)_sourceContextForPlaylistIndex:(unsigned long long)arg1;
- (void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(long long)arg2;
- (void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(long long)arg2 completionHandler:(id)arg3;
- (bool)canSkipToPreviousItem;
- (void)clearHardQueue;
- (void)clearSoftQueue;
- (long long)currentIndex;
- (unsigned long long)displayCountForItem:(id)arg1;
- (unsigned long long)displayIndexForItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)hardQueueInsertionIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hardQueuePlaylistIndexRange;
- (id)hardQueueSourceContexts;
- (id)identifierAtIndex:(unsigned long long)arg1 queueFeeder:(id)arg2;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1 queueFeeder:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemForPlaylistIndex:(long long)arg1;
- (id)iterationIndexToQueueModifications;
- (id)lastPlayedSoftQueueItem;
- (id)metadataItemForPlaylistIndex:(long long)arg1;
- (void)moveItemAtPlaybackIndex:(long long)arg1 toPlaybackIndex:(long long)arg2 intoHardQueue:(bool)arg3;
- (long long)nextCurrentIndex;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (id)playlistFeeder;
- (id)playlistFeederForPlaylistIndex:(long long)arg1;
- (long long)playlistIndexOfIndex:(long long)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexOfItem:(id)arg1;
- (long long)playlistIndexOfItemIdentifier:(id)arg1;
- (long long)playlistIndexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(bool)arg3;
- (unsigned long long)playlistItemCount;
- (bool)preventsHardQueueModificationsForItem:(id)arg1;
- (void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2;
- (void)removeItemAtPlaybackIndex:(long long)arg1;
- (long long)repeatStartIndex;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (void)setHardQueueInsertionIndex:(long long)arg1;
- (void)setHardQueueSourceContexts:(id)arg1;
- (void)setIterationIndexToQueueModifications:(id)arg1;
- (void)setLastPlayedSoftQueueItem:(id)arg1;
- (void)setNextCurrentIndex:(long long)arg1;
- (bool)setPlaylistFeeder:(id)arg1 startIndex:(long long)arg2 keepPlaying:(bool)arg3;
- (void)setRepeatMode:(long long)arg1;
- (void)setRepeatStartIndex:(long long)arg1;
- (void)setSoftQueueFeeder:(id)arg1;
- (id)softQueueFeeder;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })softQueuePlaylistIndexRange;
- (bool)userCanChangeShuffleAndRepeatType;

@end
