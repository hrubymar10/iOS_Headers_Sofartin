/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUPreviewSession : NSObject {
    MPAVItem *_currentItem;
    double _customTrackPreviewDuration;
    NSArray *_items;
    MPAVController *_player;
    NSHashTable *_sessionObservers;
}

@property(assign,readonly) MPAVItem * currentItem;
@property(assign,readonly) double currentItemDuration;
@property(assign,readonly) double currentTime;
@property(assign,readwrite) double customTrackPreviewDuration;
@property(assign,copy) NSArray * items;
@property(getter=isPlaying,assign,readonly) bool playing;

- (void).cxx_destruct;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_didChangeFromItem:(id)arg1 toItem:(id)arg2;
- (void)_didStopWithOptions:(long long)arg1 finalItem:(id)arg2 didFinalItemPlayToCompletion:(bool)arg3;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (void)_registerForPlayerNotifications;
- (void)_unregisterForPlayerNotifications;
- (void)addSessionObserver:(id)arg1;
- (id)currentItem;
- (double)currentItemDuration;
- (double)currentTime;
- (double)customTrackPreviewDuration;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (bool)isPlaying;
- (id)items;
- (void)removeSessionObserver:(id)arg1;
- (void)setCustomTrackPreviewDuration:(double)arg1;
- (void)start;
- (void)stopWithOptions:(long long)arg1 fadeoutDuration:(double)arg2;

@end