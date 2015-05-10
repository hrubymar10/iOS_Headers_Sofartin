/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTypingIndicatorLayer : CALayer {
    CALayer *_largeBubble;
    CALayer *_mediumBubble;
    CALayer *_smallBubble;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
}

@property(assign,retain) CALayer * largeBubble;
@property(assign,retain) CALayer * mediumBubble;
@property(assign,retain) CALayer * smallBubble;
@property(assign,retain) CALayer * thinkingDot;
@property(assign,retain) CAReplicatorLayer * thinkingDots;

- (void)_buildThinkingDots;
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (void)_setup;
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (void)dealloc;
- (id)init;
- (id)largeBubble;
- (id)mediumBubble;
- (void)setLargeBubble:(id)arg1;
- (void)setMediumBubble:(id)arg1;
- (void)setSmallBubble:(id)arg1;
- (void)setThinkingDot:(id)arg1;
- (void)setThinkingDots:(id)arg1;
- (id)smallBubble;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimation;
- (void)stopAnimation;
- (void)stopPulseAnimation;
- (id)thinkingDot;
- (id)thinkingDots;

@end
