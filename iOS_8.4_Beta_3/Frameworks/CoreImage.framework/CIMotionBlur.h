/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIMotionBlur : CILinearBlur {
    NSNumber *inputAngle;
}

@property (nonatomic, retain) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;
- (id)_kernel;
- (id)inputAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOf:(int)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 userInfo:(id)arg3;
- (void)setInputAngle:(id)arg1;

@end
