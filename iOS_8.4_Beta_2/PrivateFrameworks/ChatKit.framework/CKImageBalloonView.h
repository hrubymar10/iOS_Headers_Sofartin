/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKImageBalloonView : CKBalloonView <CKAnimationTimerObserver> {
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
    CKBalloonImageView *_tailMask;
}

@property(assign,retain) CKAnimatedImage * animatedImage;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,copy) NSArray * frames;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;
@property(assign,retain) CKBalloonImageView * tailMask;

- (id)animatedImage;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)didMoveToWindow;
- (id)frames;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)needsGroupOpacity;
- (id)overlayColor;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setAnimatedImage:(id)arg1;
- (void)setCanUseOpaqueMask:(bool)arg1;
- (void)setFrames:(id)arg1;
- (void)setHasTail:(bool)arg1;
- (void)setTailMask:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)tailMask;
- (void)updateAnimationTimerObserving;

@end
