/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorMonochrome : CIFilter {
    CIColor *inputColor;
    CIImage *inputImage;
    NSNumber *inputIntensity;
}

@property(assign,retain) CIColor * inputColor;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputIntensity;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputColor;
- (id)inputImage;
- (id)inputIntensity;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputColor:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;

@end
