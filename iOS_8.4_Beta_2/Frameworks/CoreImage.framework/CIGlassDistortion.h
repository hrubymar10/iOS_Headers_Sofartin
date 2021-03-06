/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIGlassDistortion : CIFilter {
    CIVector *inputCenter;
    CIImage *inputImage;
    NSNumber *inputScale;
    CIImage *inputTexture;
}

@property(assign,retain) CIVector * inputCenter;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputScale;
@property(assign,retain) CIImage * inputTexture;

+ (id)customAttributes;

- (id)_kernel;
- (id)customAttributes;
- (id)inputCenter;
- (id)inputImage;
- (id)inputScale;
- (id)inputTexture;
- (id)outputImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOf:(int)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 userInfo:(id)arg3;
- (void)setDefaults;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTexture:(id)arg1;

@end
