/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSubtitleLayer : CALayer {
    AVSubtitleLayerInternal *_subtitleLayer;
}

@property (getter=isOverscanSubtitleSupportEnabled, nonatomic) bool overscanSubtitleSupportEnabled;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, readonly) CADisplay *subtitleLayerDisplay;

+ (id)subtitleLayerWithPlayer:(id)arg1;

- (void)_setHasPlayerToObserve:(long long)arg1 andShouldObserveIt:(long long)arg2;
- (void)_setSubtitleSample:(id)arg1;
- (void)_updateNonForcedSubtitleDisplayEnabled:(bool)arg1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)finalize;
- (int)getLayout:(struct SubtitleLayoutParameters { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGAffineTransform { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; double x_3_1_5; double x_3_1_6; } x3; unsigned char x4; double x5; int x6; })arg1 suggestLayout:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 shouldUpdateCachedSubtitleSample:(bool)arg3;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (bool)isOverscanSubtitleSupportEnabled;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (void)setDelegate:(id)arg1;
- (void)setOverscanSubtitleSupportEnabled:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (id)subtitleLayerDisplay;
- (void)subtitleRenderingNeedsLayout;
- (int)updateSubtitle:(id)arg1 forcedSubtitleSample:(bool)arg2 shouldBeHidden:(bool*)arg3;

@end
