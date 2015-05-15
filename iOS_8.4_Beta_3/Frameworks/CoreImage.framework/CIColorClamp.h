/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIColorClamp : CIFilter {
    CIImage *inputImage;
    CIVector *inputMaxComponents;
    CIVector *inputMinComponents;
}

@property(assign,retain) CIImage * inputImage;
@property(assign,retain) CIVector * inputMaxComponents;
@property(assign,retain) CIVector * inputMinComponents;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputImage;
- (id)inputMaxComponents;
- (id)inputMinComponents;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputMaxComponents:(id)arg1;
- (void)setInputMinComponents:(id)arg1;

@end
