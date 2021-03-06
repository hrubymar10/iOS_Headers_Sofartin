/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPFlipTransitionController : MPTransitionController {
    UIView *_fromView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _toFrame;
    double _topMargin;
}

@property (nonatomic, retain) UIView *fromView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } toFrame;
@property (nonatomic) double topMargin;

- (void).cxx_destruct;
- (id)_subtypeForTransitionType:(unsigned long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)fromView;
- (id)init;
- (void)performTransition:(unsigned long long)arg1;
- (void)setFromView:(id)arg1;
- (void)setToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTopMargin:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })toFrame;
- (double)topMargin;

@end
