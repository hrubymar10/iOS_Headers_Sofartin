/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorControls : CIFilter {
    NSNumber *inputBrightness;
    NSNumber *inputContrast;
    CIImage *inputImage;
    NSNumber *inputSaturation;
}

@property(assign,retain) NSNumber * inputBrightness;
@property(assign,retain) NSNumber * inputContrast;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputSaturation;

+ (id)customAttributes;

- (id)inputBrightness;
- (id)inputContrast;
- (id)inputImage;
- (id)inputSaturation;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputBrightness:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSaturation:(id)arg1;

@end