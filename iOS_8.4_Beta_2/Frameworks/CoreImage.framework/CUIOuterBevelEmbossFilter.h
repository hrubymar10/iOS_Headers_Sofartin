/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CUIOuterBevelEmbossFilter : CIFilter {
    NSNumber *inputAngle;
    CIColor *inputHighlightColor;
    CIImage *inputImage;
    NSNumber *inputRadius;
    CIColor *inputShadowColor;
    NSNumber *inputSize;
    NSNumber *inputSoften;
}

@property(assign,retain) NSNumber * inputAngle;
@property(assign,retain) CIColor * inputHighlightColor;
@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSNumber * inputRadius;
@property(assign,retain) CIColor * inputShadowColor;
@property(assign,retain) NSNumber * inputSize;
@property(assign,retain) NSNumber * inputSoften;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelC;
- (id)inputAngle;
- (id)inputHighlightColor;
- (id)inputImage;
- (id)inputRadius;
- (id)inputShadowColor;
- (id)inputSize;
- (id)inputSoften;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAngle:(id)arg1;
- (void)setInputHighlightColor:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputShadowColor:(id)arg1;
- (void)setInputSize:(id)arg1;
- (void)setInputSoften:(id)arg1;

@end
