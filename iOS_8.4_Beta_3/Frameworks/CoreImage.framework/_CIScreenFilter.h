/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface _CIScreenFilter : CIFilter {
    NSNumber *inputAngle;
    CIVector *inputCenter;
    CIImage *inputImage;
    NSNumber *inputSharpness;
    NSNumber *inputWidth;
}

@property(assign,retain) NSNumber * inputAngle;
@property(assign,retain) CIVector * inputCenter;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputSharpness;
@property(assign,retain) NSNumber * inputWidth;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernel_code;
- (id)_kernel_name;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputImage;
- (id)inputSharpness;
- (id)inputWidth;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSharpness:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end