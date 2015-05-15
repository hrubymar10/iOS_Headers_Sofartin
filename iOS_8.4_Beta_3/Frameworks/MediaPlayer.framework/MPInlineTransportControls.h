/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInlineTransportControls : MPTransportControls {
    UIActivityIndicatorView *_loadingMovieIndicator;
    UILabel *_loadingMovieLabel;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } availableProgressControlAreaFrame;

- (void).cxx_destruct;
- (void)_disableAnimationIfNecessary:(id)arg1;
- (void)_enableAnimationIfNecessary:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableProgressControlAreaFrame;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)pauseButtonImage;
- (id)playButtonImage;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(bool)arg3;
- (void)setDisabledParts:(unsigned long long)arg1;

@end
