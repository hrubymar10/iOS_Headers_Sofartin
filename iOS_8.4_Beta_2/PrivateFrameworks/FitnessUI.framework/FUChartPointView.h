/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUChartPointView : UIView {
    UIColor *_color;
    int _pointStyle;
    double _radius;
}

@property(assign,readwrite) UIColor * color;
@property(assign,readwrite) int pointStyle;
@property(assign,readwrite) double radius;

+ (id)pointWithColor:(id)arg1 radius:(double)arg2 style:(int)arg3;

- (void)_drawBullseyeCircleInContext:(struct CGContext { }*)arg1;
- (void)_drawBullseyeSquareInContext:(struct CGContext { }*)arg1;
- (void)_drawGlowingCircleInContext:(struct CGContext { }*)arg1;
- (void)_drawHollowCircleInContext:(struct CGContext { }*)arg1;
- (void)_drawHollowSquareInContext:(struct CGContext { }*)arg1;
- (void)_drawSolidCircleInContext:(struct CGContext { }*)arg1;
- (void)_drawSolidSquareInContext:(struct CGContext { }*)arg1;
- (id)color;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithColor:(id)arg1 radius:(double)arg2 style:(int)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)pointStyle;
- (double)radius;
- (void)setColor:(id)arg1;
- (void)setPointStyle:(int)arg1;
- (void)setRadius:(double)arg1;

@end