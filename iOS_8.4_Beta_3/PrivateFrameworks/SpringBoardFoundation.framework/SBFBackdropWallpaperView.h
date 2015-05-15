/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFBackdropWallpaperView : SBFWallpaperView {
    CABackdropLayer *_layer;
    SBFBackdropStatisticsProvider *_statisticsProvider;
}

@property (nonatomic) bool colorSamplingEnabled;

+ (bool)_allowsParallax;

- (id)_computeAverageColor;
- (bool)colorSamplingEnabled;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColorSamplingEnabled:(bool)arg1;

@end
