/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITemperatureAndTint : CIFilter {
    CIImage *inputImage;
    CIVector *inputNeutral;
    CIVector *inputTargetNeutral;
}

@property(assign,retain) CIImage * inputImage;
@property(assign,retain) CIVector * inputNeutral;
@property(assign,retain) CIVector * inputTargetNeutral;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputNeutral;
- (id)inputTargetNeutral;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputNeutral:(id)arg1;
- (void)setInputTargetNeutral:(id)arg1;

@end
