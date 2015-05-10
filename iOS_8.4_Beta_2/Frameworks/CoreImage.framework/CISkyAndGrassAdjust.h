/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISkyAndGrassAdjust : CIFilter {
    NSNumber *inputGrassAmount;
    CIImage *inputImage;
    NSNumber *inputSkyAmount;
}

@property(assign,retain) NSNumber * inputGrassAmount;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputSkyAmount;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputGrassAmount;
- (id)inputImage;
- (id)inputSkyAmount;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputGrassAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSkyAmount:(id)arg1;

@end