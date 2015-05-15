/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICrop : CIFilter <_CIFilterProperties> {
    CIImage *inputImage;
    CIVector *inputRectangle;
}

@property(assign,retain) CIImage * inputImage;
@property(assign,retain) CIVector * inputRectangle;

+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)inputImage;
- (id)inputRectangle;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputRectangle:(id)arg1;

@end
