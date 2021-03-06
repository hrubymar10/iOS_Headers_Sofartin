/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBumpDistortion : CIFilter {
    CIVector *inputCenter;
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputScale;
}

@property(assign,retain) CIVector * inputCenter;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputRadius;
@property(assign,retain) NSNumber * inputScale;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)inputScale;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputScale:(id)arg1;

@end
