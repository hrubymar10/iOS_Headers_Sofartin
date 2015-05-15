/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCOverlayBarLayer : CALayer {
    CALayer *_bar;
    CALayer *_bottomKnob;
    UIColor *_color;
    CALayer *_topKnob;
}

@property (nonatomic, retain) UIColor *color;

- (void).cxx_destruct;
- (void)_loadWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(bool)arg3 bottomKnob:(bool)arg4;
- (id)barComponents;
- (id)color;
- (id)initWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(bool)arg3 bottomKnob:(bool)arg4;
- (void)setColor:(id)arg1;

@end
