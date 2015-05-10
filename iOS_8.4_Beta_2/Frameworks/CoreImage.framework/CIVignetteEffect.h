/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVignetteEffect : CIFilter {
    CIVector *inputCenter;
    NSNumber *inputFalloff;
    CIImage *inputImage;
    NSNumber *inputIntensity;
    NSNumber *inputRadius;
}

@property(assign,retain) CIVector * inputCenter;
@property(assign,retain) NSNumber * inputFalloff;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputIntensity;
@property(assign,retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_negkernel;
- (id)_poskernel;
- (id)inputCenter;
- (id)inputFalloff;
- (id)inputImage;
- (id)inputIntensity;
- (id)inputRadius;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCenter:(id)arg1;
- (void)setInputFalloff:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
