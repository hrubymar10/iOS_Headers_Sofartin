/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILightTunnel : CIFilter {
    CIVector *inputCenter;
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputRotation;
}

@property(assign,retain) CIVector * inputCenter;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputRadius;
@property(assign,retain) NSNumber * inputRotation;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)inputRotation;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputRotation:(id)arg1;

@end
