/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}

+ (void)initialize;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (id)queuePlayerWithItems:(id)arg1;

- (long long)_defaultActionAtItemEnd;
- (void)_enqueueModification:(id)arg1;
- (bool)_shouldEnqueueModifications;
- (void)advanceToNextItem;
- (void)beginModifications;
- (bool)canInsertItem:(id)arg1 afterItem:(id)arg2;
- (void)commitModifications;
- (void)dealloc;
- (id)init;
- (id)initWithItems:(id)arg1;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (id)items;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)setActionAtItemEnd:(long long)arg1;

@end