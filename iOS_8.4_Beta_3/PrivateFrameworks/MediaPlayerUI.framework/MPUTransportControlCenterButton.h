/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUTransportControlCenterButton : SBUIControlCenterButton <MPUTransportButton, SBUIControlCenterButtonDelegate> {
    MPUTransportButtonEventHandler *_transportButtonEventHandler;
}

@property (nonatomic) bool adjustsImageWhenHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (nonatomic) long long transportButtonImageViewContentMode;

+ (id)transportButton;

- (void).cxx_destruct;
- (void)applyTransportButtonLayoutAttributes:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)buttonTapped:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)prepareForReuse;
- (void)setTransportButtonImageViewContentMode:(long long)arg1;
- (bool)shouldTrack;
- (id)transportButtonEventHandler;
- (long long)transportButtonImageViewContentMode;
- (bool)wantsCustomHighlightAppearance;

@end
