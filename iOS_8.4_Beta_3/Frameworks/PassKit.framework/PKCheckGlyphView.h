/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKCheckGlyphView : PKMicaView {
    bool _covered;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    } _coveredTransform;
    CAGradientLayer *_maskLayer;
    UIColor *_primaryColor;
    bool _revealed;
    CAShapeLayer *_shapeLayer;
    struct CATransform3D { 
        double m11; 
        double m12; 
        double m13; 
        double m14; 
        double m21; 
        double m22; 
        double m23; 
        double m24; 
        double m31; 
        double m32; 
        double m33; 
        double m34; 
        double m41; 
        double m42; 
        double m43; 
        double m44; 
    } _uncoveredTransform;
}

@property (nonatomic, copy) UIColor *primaryColor;
@property (nonatomic) bool revealed;

+ (id)defaultActions;

- (void)_createMask;
- (double)_updateCovered:(bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 package:(id)arg2;
- (id)primaryColor;
- (bool)revealed;
- (double)setCovered:(bool)arg1 animated:(bool)arg2;
- (void)setPrimaryColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(bool)arg2;
- (void)setRevealed:(bool)arg1;
- (double)setRevealed:(bool)arg1 animated:(bool)arg2;

@end
