/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPReflectionImageView : _UIReflectingView {
    UIImageView *_imageView;
    bool _squareImage;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic) bool squareImage;

+ (double)defaultReflectionHeight;

- (void).cxx_destruct;
- (id)albumArtImage;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAlbumVisible:(bool)arg1 reflectionVisible:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withReflectionHeight:(double)arg2;
- (void)setImage:(id)arg1;
- (void)setReflectionVisible:(bool)arg1 withDuration:(float)arg2;
- (void)setSquareImage:(bool)arg1;
- (bool)squareImage;

@end
