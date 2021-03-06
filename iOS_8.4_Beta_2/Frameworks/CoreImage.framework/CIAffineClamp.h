/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAffineClamp : CIFilter {
    CIImage *inputImage;
    NSValue *inputTransform;
}

@property(assign,retain) CIImage * inputImage;
@property(assign,retain) NSValue * inputTransform;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputImage;
- (id)inputTransform;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputTransform:(id)arg1;

@end
