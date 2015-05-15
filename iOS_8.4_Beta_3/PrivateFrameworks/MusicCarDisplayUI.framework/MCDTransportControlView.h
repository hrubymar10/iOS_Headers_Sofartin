/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDTransportControlView : UIView {
    UIButton *_fastForwardButton;
    UIButton *_leftButton;
    int _mode;
    UIImage *_pauseImage;
    UIButton *_playPauseButton;
    bool _progressActive;
}

@property (nonatomic, readonly) UIImage *defaultFastForwardButtonImage;
@property (nonatomic, readonly) UIImage *defaultLeftButtonImage;
@property (nonatomic, readonly) UIButton *fastForwardButton;
@property (nonatomic, readonly) UIButton *leftButton;
@property (nonatomic) int mode;
@property (nonatomic, retain) UIImage *pauseImage;
@property (nonatomic, readonly) UIButton *playPauseButton;
@property (nonatomic) bool progressActive;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_layoutSubviewsForHiTouch;
- (void)_layoutSubviewsForLowTouch;
- (void)_updateProgressActive;
- (id)defaultFastForwardButtonImage;
- (id)defaultLeftButtonImage;
- (id)fastForwardButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftButton;
- (int)mode;
- (id)pauseImage;
- (id)playPauseButton;
- (bool)progressActive;
- (void)setMode:(int)arg1;
- (void)setPauseImage:(id)arg1;
- (void)setProgressActive:(bool)arg1;

@end
