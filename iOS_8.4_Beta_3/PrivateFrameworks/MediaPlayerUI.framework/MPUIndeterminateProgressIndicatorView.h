/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUIndeterminateProgressIndicatorView : UIView {
    double _progressGap;
    double _progressLineWidth;
}

@property(assign,readwrite) double progressGap;
@property(assign,readwrite) double progressLineWidth;

- (void)_updateAnimation;
- (void)_willEnterForeground:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)progressGap;
- (double)progressLineWidth;
- (void)setProgressGap:(double)arg1;
- (void)setProgressLineWidth:(double)arg1;
- (void)tintColorDidChange;

@end
