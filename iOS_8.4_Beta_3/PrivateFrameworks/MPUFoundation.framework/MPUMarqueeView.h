/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUMarqueeView : UIView {
    double _contentGap;
    struct CGSize { 
        double width; 
        double height; 
    } _contentSize;
    UIView *_contentView;
    NSUUID *_currentAnimationID;
    <MPUMarqueeViewDelegate> *_delegate;
    long long _lastEnableOptions;
    double _marqueeDelay;
    bool _marqueeEnabled;
    double _marqueeScrollRate;
}

@property (nonatomic) double contentGap;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) <MPUMarqueeViewDelegate> *delegate;
@property (nonatomic) double marqueeDelay;
@property (getter=isMarqueeEnabled, nonatomic) bool marqueeEnabled;
@property (nonatomic) double marqueeScrollRate;

- (void).cxx_destruct;
- (void)_createMarqueeAnimationIfNeededWithOptions:(long long)arg1;
- (void)_tearDownMarqueeAnimation;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (double)contentGap;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (id)delegate;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMarqueeEnabled;
- (void)layoutSubviews;
- (double)marqueeDelay;
- (double)marqueeScrollRate;
- (void)resetMarqueePosition;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentGap:(double)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMarqueeDelay:(double)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setMarqueeEnabled:(bool)arg1 withOptions:(long long)arg2;
- (void)setMarqueeScrollRate:(double)arg1;

@end
