/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaPlayer : NSObject {
    MPAVItem *_currentItem;
    id _periodicTimeObserver;
    MPAVController *_player;
    SKUIMediaPlayerItemStatus *_playerItem;
    bool _playing;
    float _rate;
}

@property(assign,readwrite) MPAVItem * currentItem;
@property(assign,retain) id periodicTimeObserver;
@property(assign,readwrite) MPAVController * player;
@property(assign,retain) SKUIMediaPlayerItemStatus * playerItem;
@property(assign,readwrite) bool playing;
@property(assign,readwrite) float rate;

- (void).cxx_destruct;
- (id)currentItem;
- (id)periodicTimeObserver;
- (id)player;
- (id)playerItem;
- (bool)playing;
- (float)rate;
- (void)setCurrentItem:(id)arg1;
- (void)setPeriodicTimeObserver:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setRate:(float)arg1;

@end
