/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAVPlayerView : UIView {
    unsigned long long _scaleMode;
}

@property(assign,retain) AVPlayerLayer * layer;
@property(assign,retain) AVPlayer * player;
@property(assign,readwrite) unsigned long long scaleMode;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoRect;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)player;
- (unsigned long long)scaleMode;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(unsigned long long)arg1;
- (void)setScaleMode:(unsigned long long)arg1 duration:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoRect;

@end
