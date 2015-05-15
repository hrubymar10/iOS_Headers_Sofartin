/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyLockTextView : UIView {
    double _deltaFromDefaultTrackWidth;
    double _fps;
    NSString *_label;
    UIFont *_labelFont;
    UIImage *_maskImage;
    double _maskStartTime;
    NSTimer *_maskTimer;
    struct CGImage { } *_textCache;
    char *_textData;
}

@property (readonly) double deltaFromDefaultTrackWidth;

- (void)_cacheLabel:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)dealloc;
- (double)deltaFromDefaultTrackWidth;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)fps;
- (id)initWithLabel:(id)arg1 fontSize:(double)arg2 trackWidthDelta:(double)arg3;
- (bool)isAnimating;
- (id)label;
- (void)movedFromWindow:(id)arg1;
- (void)setFPS:(double)arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end
