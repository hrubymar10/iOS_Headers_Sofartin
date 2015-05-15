/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCircleProgressLayer : CALayer {
    double _oneFullRotation;
    UIColor *_progressBackgroundColor;
    UIColor *_progressColor;
    double _progressLineWidth;
    long long _progressStartPoint;
    bool _showProgressTray;
}

@property(assign,readwrite) double progress;
@property(assign,retain) UIColor * progressBackgroundColor;
@property(assign,retain) UIColor * progressColor;
@property(assign,readwrite) double progressLineWidth;
@property(assign,readwrite) long long progressStartPoint;
@property(assign,readwrite) bool showProgressTray;

+ (bool)needsDisplayForKey:(id)arg1;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (id)progressBackgroundColor;
- (id)progressColor;
- (double)progressLineWidth;
- (long long)progressStartPoint;
- (void)setProgressBackgroundColor:(id)arg1;
- (void)setProgressColor:(id)arg1;
- (void)setProgressLineWidth:(double)arg1;
- (void)setProgressStartPoint:(long long)arg1;
- (void)setShowProgressTray:(bool)arg1;
- (bool)showProgressTray;

@end
