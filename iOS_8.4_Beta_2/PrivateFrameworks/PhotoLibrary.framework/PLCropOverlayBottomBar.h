/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropOverlayBottomBar : UIView {
    CAMBottomBar *_cameraBottomBar;
    bool _inPopover;
    bool _playingVideo;
    PLCropOverlayPreviewBottomBar *_previewBottomBar;
    long long _style;
    PLCropOverlayWallpaperBottomBar *_wallpaperBottomBar;
}

@property(assign,retain) CAMBottomBar * cameraBottomBar;
@property(getter=isInPopover,assign,readwrite) bool inPopover;
@property(getter=isPlayingVideo,assign,readwrite) bool playingVideo;
@property(assign,retain) PLCropOverlayPreviewBottomBar * previewBottomBar;
@property(assign,readwrite) long long style;
@property(assign,retain) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;

- (void)_commonPLCropOverlayBottomBarInitialization;
- (bool)_isEditingStyle:(long long)arg1;
- (void)_updateBottomBars;
- (void)_updatePreviewBottomBarForPlaybackState;
- (void)_updateStyle;
- (id)cameraBottomBar;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isInPopover;
- (bool)isPlayingVideo;
- (void)layoutSubviews;
- (id)previewBottomBar;
- (void)setCameraBottomBar:(id)arg1;
- (void)setInPopover:(bool)arg1;
- (void)setPlayingVideo:(bool)arg1;
- (void)setPreviewBottomBar:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (void)setWallpaperBottomBar:(id)arg1;
- (long long)style;
- (void)togglePlaybackState;
- (id)wallpaperBottomBar;

@end
