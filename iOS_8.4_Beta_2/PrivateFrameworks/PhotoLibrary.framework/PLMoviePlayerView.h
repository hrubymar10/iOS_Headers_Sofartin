/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLMoviePlayerView : UIView {
    PLAirPlayBackgroundView *_airPlayView;
    PLAVPlayerView *_avPlayerView;
    bool _destinationPlaceholderHidden;
    PLVideoOutBackgroundView *_videoOutView;
}

@property(getter=isDestinationPlaceholderHidden,assign,readwrite) bool destinationPlaceholderHidden;
@property(assign,readonly) long long destinationPlaceholderStyle;
@property(assign,retain) AVPlayer * player;
@property(assign,retain) UIView * videoView;

- (void)_clearAirPlayView;
- (void)_clearVideoView;
- (void)_installBackgroundView:(id)arg1;
- (void)dealloc;
- (long long)destinationPlaceholderStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDestinationPlaceholderHidden;
- (id)player;
- (void)reattachVideoView;
- (void)setDestinationPlaceholderHidden:(bool)arg1;
- (void)setDestinationPlaceholderStyle:(long long)arg1 airPlayDeviceName:(id)arg2;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(unsigned long long)arg1;
- (void)setScaleMode:(unsigned long long)arg1 duration:(double)arg2;
- (id)videoView;

@end